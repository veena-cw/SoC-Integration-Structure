module apb_slave #(
   parameter DW = 32,
   parameter AW = 32,



   // Derived Parameter
   localparam SW = int'($ceil(DW/8))
)
(
   input  logic          pclk,
   input  logic          presetn,
   input  logic [AW-1:0] i_paddr,
   input  logic          i_pwrite,
   input  logic          i_psel,
   input  logic          i_penable,
   input  logic [DW-1:0] i_pwdata,
   input  logic [SW-1:0] i_pstrb,
   output logic [DW-1:0] o_prdata,
   output logic          o_pslverr,
   output logic          o_pready,



   input  logic          i2c_busy,
   input  logic          i2c_done,
   output logic          fifo_wr_en,
   output logic [DW-1:0] fifo_wr_data,
   input  logic          fifo_full,



   input  logic [7:0]    i_rd_data,
   input  logic          i_rd_data_valid,
   input  logic          i2c_nack
);



   typedef enum logic [1:0]
   {
      IDLE     = 2'b00,
      W_ACCESS = 2'b01,
      R_ACCESS = 2'b10,
      R_FINISH = 2'b11
   } state_t;



   state_t state_ff;



   localparam ADDR_LSB = $clog2(DW/8);
   localparam N_REG    = 2**(AW-ADDR_LSB);



   localparam CTRL_OFFSET   = 8'h10;
   localparam STATUS_OFFSET = 8'h14;
   localparam TXDATA_OFFSET = 8'h18;
   localparam RXDATA_OFFSET = 8'h1C;



   logic [DW-1:0] ctrl_reg;
   logic [DW-1:0] txdata_reg;
   logic [DW-1:0] status_reg;
   logic [DW-1:0] rxdata_reg;



   logic [7:0] reg_addr;



   logic req_rd;
   logic req_wr;



   logic done_sticky;
   logic nack_sticky;



   logic ctrl_valid;
   logic tx_valid;



   logic ctrl_write_blocked;
   logic tx_write_blocked;



   // Declared here (moved up) because the clear logic below uses both_valid
   logic both_valid, both_valid_d, fifo_wr_pulse;



   logic reg_rd_done;
   logic tx_valid_clr, ctrl_valid_clr;



   assign req_rd = i_psel && !i_pwrite;
   assign req_wr = i_psel &&  i_pwrite;



   //--------------------------------------------------------------------
   // Address latch (setup phase -> access phase)
   //--------------------------------------------------------------------
   always_ff @(posedge pclk or negedge presetn) begin
      if (!presetn)
         reg_addr <= 8'b0;
      else
         reg_addr <= i_paddr[7:0];
   end



   //--------------------------------------------------------------------
   // STATUS sticky bits
   //--------------------------------------------------------------------
   logic status_read_fire;
   assign status_read_fire = req_rd && o_pready && i_penable &&
                             (reg_addr == STATUS_OFFSET);



   always_ff @(posedge pclk or negedge presetn) begin
      if (!presetn) begin
         done_sticky <= 1'b0;
         nack_sticky <= 1'b0;
      end else begin
         // Clear on a completed read of STATUS ...
         if (status_read_fire) begin
            done_sticky <= 1'b0;
            nack_sticky <= 1'b0;
         end
         // ... but a new event in the same cycle wins
         if (i2c_done) done_sticky <= 1'b1;
         if (i2c_nack) nack_sticky <= 1'b1;
      end
   end



   assign status_reg = {29'b0, nack_sticky, done_sticky, i2c_busy};



   //--------------------------------------------------------------------
   // RX register captures i_rd_data when I2C finishes
   //--------------------------------------------------------------------
   always_ff @(posedge pclk or negedge presetn) begin
      if (!presetn) rxdata_reg <= '0;
      else if (i2c_done) rxdata_reg <= {{(DW-8){1'b0}}, i_rd_data};
   end



   //--------------------------------------------------------------------
   // Write-blocked decode (uses registered address, same as the write case)
   //--------------------------------------------------------------------
   assign ctrl_write_blocked = (reg_addr == CTRL_OFFSET)   && ctrl_valid;
   assign tx_write_blocked   = (reg_addr == TXDATA_OFFSET) && tx_valid;



   //--------------------------------------------------------------------
   // PREADY generation
   //--------------------------------------------------------------------
   always_comb begin
      o_pready = 1'b0;
      case (state_ff)
         IDLE: begin
            // WRITE
            if (req_wr &&
                i_penable &&
                !fifo_full &&
                !i2c_busy &&
                !ctrl_write_blocked &&
                !tx_write_blocked) begin
               o_pready = 1'b1;
            end
            // READ
            if (req_rd && i_penable) begin
               o_pready = 1'b1;
            end
            // I2C NACK error
            if (i2c_nack && i_psel && i_penable) begin
               o_pready = 1'b1;
            end
         end



         W_ACCESS: begin
            if (req_wr &&
                i_penable &&
                !fifo_full &&
                !i2c_busy &&
                !ctrl_write_blocked &&
                !tx_write_blocked) begin
               o_pready = 1'b1;
            end
            if (req_rd && i_penable)
               o_pready = 1'b1;
         end



         R_ACCESS: begin
            // READ completes when data is valid
            if (req_rd && i_penable && i_rd_data_valid) begin
               o_pready = 1'b1;
            end
         end



         default: begin
            o_pready = 1'b0;
         end
      endcase
   end



   //--------------------------------------------------------------------
   // Combinational clear for register-only accesses
   //   Once a register readback completes, drop that register's valid.
   //   !both_valid keeps a real APB->I2C transfer (CTRL+TX both pending)
   //   alive until i2c_done.
   //--------------------------------------------------------------------
   assign reg_rd_done = req_rd && i_penable && o_pready;



   always_comb begin
      tx_valid_clr   = 1'b0;
      ctrl_valid_clr = 1'b0;



      if (reg_rd_done && !both_valid) begin
         case (reg_addr)
            TXDATA_OFFSET: tx_valid_clr   = 1'b1;
            CTRL_OFFSET:   ctrl_valid_clr = 1'b1;
            default: ;
         endcase
      end
   end



   //--------------------------------------------------------------------
   // Register writes and valid flags
   //--------------------------------------------------------------------
   always_ff @(posedge pclk or negedge presetn) begin
      if (!presetn) begin
         ctrl_reg   <= '0;
         txdata_reg <= '0;
         tx_valid   <= 1'b0;
         ctrl_valid <= 1'b0;
      end else begin



         if (o_pready && i_psel && i_pwrite && i_penable) begin
            case (reg_addr)
               CTRL_OFFSET: begin
                  if (i_pstrb[1]) begin
                     ctrl_reg   <= {24'b0, i_pwdata[15:8]}; // [14:8]=slave_addr, [15]=r/w
                     ctrl_valid <= 1'b1;
                  end
               end
               TXDATA_OFFSET: begin
                  if (i_pstrb[0]) txdata_reg[7:0]   <= i_pwdata[7:0];
                  if (i_pstrb[1]) txdata_reg[15:8]  <= i_pwdata[15:8];
                  if (i_pstrb[2]) txdata_reg[23:16] <= i_pwdata[23:16];
                  if (i_pstrb[3]) txdata_reg[31:24] <= i_pwdata[31:24];
                  if (i_pstrb != '0) tx_valid <= 1'b1;
               end
               default: ;   // writes to other addresses no longer kill a pending valid
            endcase
         end



         // Whole-transfer clear (APB -> I2C): I2C consumed the transaction
         if (i2c_done) begin
            ctrl_valid <= 1'b0;
            tx_valid   <= 1'b0;
         end



         // Register-only clear: readback finished
         if (tx_valid_clr)   tx_valid   <= 1'b0;
         if (ctrl_valid_clr) ctrl_valid <= 1'b0;



      end
   end



   //--------------------------------------------------------------------
   // FIFO write trigger
   //--------------------------------------------------------------------
   assign both_valid = (ctrl_valid == 1'b1) && (tx_valid == 1'b1);



   always_ff @(posedge pclk or negedge presetn) begin
      if (!presetn)
         both_valid_d <= 1'b0;
      else
         both_valid_d <= both_valid;
   end



   assign fifo_wr_pulse = both_valid & ~both_valid_d;



   assign fifo_wr_data = txdata_reg;
   assign fifo_wr_en   = fifo_wr_pulse & ~fifo_full;



   //--------------------------------------------------------------------
   // PSLVERR
   //--------------------------------------------------------------------
   assign o_pslverr = (i2c_nack && i_psel && i_penable && o_pready) ? 1'b1 : 1'b0;



   //--------------------------------------------------------------------
   // Read data mux
   //--------------------------------------------------------------------
   always_comb begin
      o_prdata = '0;
      if (req_rd) begin
         case (reg_addr)
            CTRL_OFFSET:   o_prdata = ctrl_reg;
            STATUS_OFFSET: o_prdata = status_reg;
            TXDATA_OFFSET: o_prdata = txdata_reg;
            RXDATA_OFFSET: o_prdata = rxdata_reg;
            default:       o_prdata = '0;
         endcase
      end
   end



   //--------------------------------------------------------------------
   // State machine
   //--------------------------------------------------------------------
   always_ff @(posedge pclk or negedge presetn) begin
      if (!presetn) begin
         state_ff <= IDLE;
      end else begin
         case (state_ff)
            IDLE: begin
               if (req_wr)
                  state_ff <= W_ACCESS;
               else if (req_rd && i_rd_data_valid)
                  state_ff <= R_ACCESS;
               else
                  state_ff <= IDLE;
            end



            W_ACCESS: begin
               if (o_pready)
                  state_ff <= IDLE;
               else if (req_rd && i_rd_data_valid)
                  state_ff <= R_ACCESS;
               else
                  state_ff <= W_ACCESS;
            end



            R_ACCESS: begin
               if (req_rd)
                  state_ff <= R_FINISH;
               else
                  state_ff <= R_ACCESS;
            end



            R_FINISH: begin
               state_ff <= IDLE;
            end



            default: begin
               state_ff <= IDLE;
            end
         endcase
      end
   end



endmodule

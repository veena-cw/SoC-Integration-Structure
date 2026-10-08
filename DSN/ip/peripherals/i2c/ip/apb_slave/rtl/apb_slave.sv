module apb_slave #(
   parameter DW = 32,
   parameter AW = 32,
   parameter logic [AW-1:0] I2C_BASE_ADDR = 32'h3001_0000,
   parameter logic [AW-1:0] I2C_END_ADDR  = 32'h3001_FFFF,

   // Derived Parameter
   localparam SW = int'($ceil(DW/8))
)
(
   input  logic pclk,
   input  logic presetn,
   input  logic [AW-1:0] i_paddr,
   input  logic          i_pwrite,
   input  logic          i_psel,        // RAW psel from APB master (not gated)
   input  logic          i_penable,
   input  logic [DW-1:0] i_pwdata,
   input  logic [SW-1:0] i_pstrb,
   output logic [DW-1:0] o_prdata,
   output logic          o_pslverr,
   output logic          o_pready,

   input  logic i2c_busy,
   input  logic i2c_done,
   output logic          fifo_wr_en,
   output logic [DW-1:0] fifo_wr_data,
   input  logic          fifo_full,

   input  logic [7:0]    i_rd_data,
   input  logic          i_rd_data_valid,
   input  logic          i2c_nack
);

   typedef enum logic [1:0]
   {
      IDLE     = 2'b00,
      W_ACCESS = 2'b01,
      R_ACCESS = 2'b10,
      R_FINISH = 2'b11
   } state_t;

   state_t state_ff;

   localparam ADDR_LSB = $clog2(DW/8);
   localparam N_REG    = 2**(AW-ADDR_LSB);

   localparam  CTRL_OFFSET   = 8'h10;
   localparam  STATUS_OFFSET = 8'h14;
   localparam  TXDATA_OFFSET = 8'h18;
   localparam  RXDATA_OFFSET = 8'h1C;

   logic [DW-1:0] ctrl_reg;
   logic [DW-1:0] txdata_reg;
   logic [DW-1:0] status_reg;
   logic [DW-1:0] rxdata_reg;

   logic [7:0] reg_addr;

   //==========================================================
   // ADDRESS DECODE
   //
   // A transfer is VALID only if the FULL address matches one of
   // the four implemented registers:
   //
   //    BASE + 0x10 : CTRL
   //    BASE + 0x14 : STATUS
   //    BASE + 0x18 : TXDATA
   //    BASE + 0x1C : RXDATA
   //
   // Anything else gets the error response, whether it is
   //   - outside the I2C window, or
   //   - inside the window but not one of the four registers
   //     (unused/reserved, unaligned, or aliasing a register
   //      offset such as BASE + 0x110).
   //
   // in_window  : address inside [BASE, END]
   // reg_hit    : address equals one of the four register addresses
   // i2c_sel    : valid register address (in_window && reg_hit)
   // psel_in    : psel qualified by i2c_sel -> used by ALL internal
   //              logic instead of raw i_psel
   // decode_err : master selected us, address is not a valid register
   //==========================================================
   localparam logic [AW-1:0] CTRL_ADDR   = I2C_BASE_ADDR + AW'(CTRL_OFFSET);
   localparam logic [AW-1:0] STATUS_ADDR = I2C_BASE_ADDR + AW'(STATUS_OFFSET);
   localparam logic [AW-1:0] TXDATA_ADDR = I2C_BASE_ADDR + AW'(TXDATA_OFFSET);
   localparam logic [AW-1:0] RXDATA_ADDR = I2C_BASE_ADDR + AW'(RXDATA_OFFSET);

   logic in_window;
   logic reg_hit;
   logic i2c_sel;
   logic psel_in;
   logic decode_err;
   logic decode_err_q;
   logic err_resp;          // error response (access phase only)

   assign in_window  = (i_paddr >= I2C_BASE_ADDR) && (i_paddr <= I2C_END_ADDR);
   assign reg_hit    = (i_paddr == CTRL_ADDR)   ||
                       (i_paddr == STATUS_ADDR) ||
                       (i_paddr == TXDATA_ADDR) ||
                       (i_paddr == RXDATA_ADDR);

   assign i2c_sel    = in_window && reg_hit;
   assign psel_in    = i_psel && i2c_sel;
   assign decode_err = i_psel && !i2c_sel;

   // Captured in setup phase, held through access phase, then cleared
   always_ff @(posedge pclk or negedge presetn) begin
      if (!presetn)
         decode_err_q <= 1'b0;
      else if (decode_err && !i_penable)
         decode_err_q <= 1'b1;                 // setup phase
      else if (decode_err_q && i_penable)
         decode_err_q <= 1'b0;                 // access phase done
      else if (!i_psel)
         decode_err_q <= 1'b0;
   end

   assign err_resp = decode_err_q && i_penable;

   //==========================================================
   logic in_pready;         // normal (in-range) ready, before error OR-in

   logic req_rd;
   logic req_wr;

   logic done_sticky;
   logic nack_sticky;
   logic range_err_sticky;

   assign req_rd = psel_in && !i_pwrite;
   assign req_wr = psel_in &&  i_pwrite;

   always_ff @(posedge pclk or negedge presetn)
   begin
      if(!presetn)
         reg_addr <= 8'b0;
      else
         reg_addr <= i_paddr[7:0];
   end

   logic status_read_fire;
   assign status_read_fire = req_rd && in_pready && i_penable &&
                             (reg_addr == STATUS_OFFSET);

   always_ff @(posedge pclk or negedge presetn) begin
      if (!presetn) begin
         done_sticky      <= 1'b0;
         nack_sticky      <= 1'b0;
         range_err_sticky <= 1'b0;
      end else begin
         // Clear on a completed read of STATUS ...
         if (status_read_fire) begin
            done_sticky      <= 1'b0;
            nack_sticky      <= 1'b0;
            range_err_sticky <= 1'b0;
         end

         // ... set wins over clear
         if (i2c_done) done_sticky      <= 1'b1;
         if (i2c_nack) nack_sticky      <= 1'b1;
         if (err_resp) range_err_sticky <= 1'b1;   // invalid address access
      end
   end

   // [3]=range_err  [2]=nack  [1]=done  [0]=busy
   assign status_reg = {28'b0, range_err_sticky, nack_sticky, done_sticky, i2c_busy};

   //==========================================================
   // RXDATA : byte received from the I2C slave
   //
   // Comes straight from the RX FIFO output register (i_rd_data),
   // which is updated when the received byte is popped from the
   // RX FIFO. It no longer depends on the i2c_done pulse and is
   // not touched by I2C write transactions.
   //==========================================================
   assign rxdata_reg = {{(DW-8){1'b0}}, i_rd_data};

   logic ctrl_valid;
   logic tx_valid;
   logic both_valid, both_valid_d, fifo_wr_pulse;   // declared before first use

   logic ctrl_write_blocked;
   logic tx_write_blocked;
   assign ctrl_write_blocked = (i_paddr[7:0] == CTRL_OFFSET)   && ctrl_valid;
   assign tx_write_blocked   = (i_paddr[7:0] == TXDATA_OFFSET) && tx_valid;

   // ---------------- in-range ready ----------------
   always_comb begin
      in_pready = 1'b0;
      case (state_ff)
         IDLE: begin
            if (req_wr && i_penable && psel_in &&
                !fifo_full && !i2c_busy &&
                !both_valid)
               in_pready = 1'b1;

            if (req_rd && i_penable && psel_in)
               in_pready = 1'b1;

            // I2C NACK error
            if (i2c_nack && psel_in && i_penable)
               in_pready = 1'b1;
         end

         W_ACCESS: begin
            if (req_wr && i_penable &&
                !fifo_full && !i2c_busy &&
                !both_valid)
               in_pready = 1'b1;

            if (req_rd && i_penable)
               in_pready = 1'b1;
         end

         R_ACCESS: begin
            if (req_rd && i_penable && i_rd_data_valid)
               in_pready = 1'b1;
         end

         default: in_pready = 1'b0;
      endcase
   end

   // Final ready: valid-register response OR invalid-address error response
   assign o_pready = in_pready | err_resp;

   always_ff @(posedge pclk or negedge presetn) begin
      if(!presetn) begin
         ctrl_reg   <= 32'h0000_0000;
         txdata_reg <= 8'h00;
         tx_valid   <= 1'b0;
         ctrl_valid <= 1'b0;
      end else begin

         // in_pready (not o_pready) so an error response never writes regs
         if (in_pready && psel_in && i_pwrite && i_penable) begin
            case(reg_addr)
               CTRL_OFFSET: begin
                  if (i_pstrb[1]) begin
                     ctrl_reg   <= {24'b0, i_pwdata[15:8]};
                     ctrl_valid <= 1'b1;
                  end
               end
               TXDATA_OFFSET: begin
                  if (i_pstrb[0]) txdata_reg[7:0]   <= i_pwdata[7:0];
                  if (i_pstrb[1]) txdata_reg[15:8]  <= i_pwdata[15:8];
                  if (i_pstrb[2]) txdata_reg[23:16] <= i_pwdata[23:16];
                  if (i_pstrb[3]) txdata_reg[31:24] <= i_pwdata[31:24];
                  if (i_pstrb != '0) tx_valid <= 1'b1;
               end
               default: begin
                  ctrl_valid <= 1'b0;
                  tx_valid   <= 1'b0;
               end
            endcase
         end

         // Clear old transaction once I2C consumes it
         if (fifo_wr_en) begin
            ctrl_valid <= 1'b0;
            tx_valid   <= 1'b0;
         end
      end
   end

   assign both_valid = (ctrl_valid == 1) && (tx_valid == 1);

   always_ff @(posedge pclk or negedge presetn) begin
      if (!presetn) both_valid_d <= 1'b0;
      else          both_valid_d <= both_valid;
   end

   assign fifo_wr_pulse = both_valid & ~both_valid_d;
   assign fifo_wr_data  = txdata_reg;
   assign fifo_wr_en    = fifo_wr_pulse & ~fifo_full;

   // PSLVERR: NACK (valid address) or invalid-address decode error
   assign o_pslverr = err_resp ||
                      (i2c_nack && psel_in && i_penable && in_pready);

   // PRDATA: req_rd is already gated by psel_in, so invalid reads give 0
   //   CTRL / STATUS / TXDATA : APB register reads
   //   RXDATA                 : byte received from the I2C slave
   always_comb begin
      o_prdata = '0;
      if (req_rd) begin
         case (reg_addr)
            CTRL_OFFSET:   o_prdata = ctrl_reg;
            STATUS_OFFSET: o_prdata = status_reg;
            TXDATA_OFFSET: o_prdata = txdata_reg;
            RXDATA_OFFSET: o_prdata = rxdata_reg;
            default:       o_prdata = '0;
         endcase
      end
   end

   always_ff @(posedge pclk or negedge presetn) begin
      if (!presetn) begin
         state_ff <= IDLE;
      end
      else begin
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
               if (in_pready)
                  state_ff <= IDLE;
               else if (req_rd && i_rd_data_valid)
                  state_ff <= R_ACCESS;
               else
                  state_ff <= W_ACCESS;
            end

            R_ACCESS: begin
               if (req_rd) state_ff <= R_FINISH;
               else        state_ff <= R_ACCESS;
            end

            R_FINISH: state_ff <= IDLE;

            default:  state_ff <= IDLE;
         endcase
      end
   end

endmodule

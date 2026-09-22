//module apb_slave #(
//   //==========================================================
//   // Configurable Parameters
//   //==========================================================
//   parameter DW = 32,
//   parameter AW = 5,

//   // Derived Parameter
//   localparam SW = int'($ceil(DW/8))
//)
//(
//   //==========================================================
//   // Clock and Reset
//   //==========================================================
//   input  logic pclk,
//   input  logic presetn,

//   //==========================================================
//   // APB Interface
//   //==========================================================
//   input  logic [AW-1:0] i_paddr,
//   input  logic          i_pwrite,
//   input  logic          i_psel,
//   input  logic          i_penable,
//   input  logic [DW-1:0] i_pwdata,
//   input  logic [SW-1:0] i_pstrb,

//   output logic [DW-1:0] o_prdata,
//   output logic          o_pslverr,
//   output logic          o_pready,
      
//   input logic i2c_busy, 
//   input logic  i2c_done, 
//   output logic          fifo_wr_en,
//   output logic [DW-1:0] fifo_wr_data,
//   input  logic          fifo_full,
   
//   input  logic [7:0]    i_rd_data,
//   input logic slverr

//);

//   //==========================================================
//   // State Machine
//   //==========================================================

//   typedef enum logic [1:0]
//   {
//      IDLE     = 2'b00,
//      W_ACCESS = 2'b01,
//      R_ACCESS = 2'b10,
//      R_FINISH = 2'b11
//   } state_t;

//   state_t state_ff;


//   //==========================================================
//   // Address Configuration
//   //==========================================================

//   localparam ADDR_LSB = $clog2(DW/8);
//   localparam N_REG    = 2**(AW-ADDR_LSB);


//   //==========================================================
  

//   logic req_rd;
//   logic req_wr;

//   assign req_rd = i_psel && !i_pwrite;
//   assign req_wr = i_psel &&  i_pwrite;
//   assign fifo_wr_data = {16'b0 ,i_paddr[31:24],i_pwdata[7:0]};
//   assign fifo_wr_en = ((state_ff == W_ACCESS) && req_wr && i_penable && (i2c_busy == 0) && !fifo_full)  ? 1 : 0;
  

//   always_comb begin

//      o_pready = 1'b0;

//      case (state_ff)
//            IDLE: begin
//            if (req_wr && i_penable && i_psel && !fifo_full && !i2c_busy)  begin
//               o_pready = 1'b1;
//            end
//             if(slverr)
//               o_pready = 1'b1;
            
//         end
     
//         W_ACCESS: begin
//            if (req_wr && i_penable && !fifo_full && !i2c_busy) begin
//               o_pready = 1'b1;
//            end
            
               
//         end

      
//         R_FINISH: begin
//            o_pready = 1'b1;
//         end

//         default: begin
//            o_pready = 1'b0;
//         end

//      endcase

//   end
// assign o_pslverr = (slverr) ? 1 : 0;

// always_ff  @ (posedge pclk or negedge presetn) begin
 
//  if (!presetn) begin

//      o_prdata = '0;
//end
//else begin
//      if ((state_ff == R_ACCESS) ||
//          (state_ff == R_FINISH)) begin

//         o_prdata = {24'b0,i_rd_data};
//        end
//      end

//   end


//always_ff @(posedge pclk or negedge presetn) begin

//      if (!presetn) begin

//         state_ff <= IDLE;

//      end
//      else begin

//         case (state_ff)

//            //--------------------------------------------------
//            // IDLE
//            //--------------------------------------------------
//            IDLE: begin

//               if (req_wr) begin

//                  state_ff <= W_ACCESS;

//               end
//               else if (req_rd) begin

//                  state_ff <= R_ACCESS;

//               end
//               else begin

//                  state_ff <= IDLE;

//               end

//            end


//            //--------------------------------------------------
//            // WRITE ACCESS
//            //--------------------------------------------------
//            W_ACCESS: begin

//               if (req_wr && i_penable) begin

//                  if (fifo_full || i2c_busy || i2c_done) begin

//                     // Wait until FIFO has space
//                     state_ff <= W_ACCESS;

//                  end
//                  else begin

//                     // Write is completed
//                     state_ff <= IDLE;

//                  end

//               end

//            end


//            //--------------------------------------------------
//            // READ ACCESS
//            //--------------------------------------------------
//            R_ACCESS: begin

//               if (req_rd && i_penable) begin

//                  state_ff <= R_FINISH;

//               end
//               else begin

//                  state_ff <= R_ACCESS;

//               end

//            end


//            //--------------------------------------------------
//            // READ FINISH
//            //--------------------------------------------------
//            R_FINISH: begin

//               state_ff <= IDLE;

//            end


//            //--------------------------------------------------
//            // DEFAULT
//            //--------------------------------------------------
//            default: begin

//               state_ff <= IDLE;

//            end

//         endcase

//      end

//   end

//endmodule


module apb_slave_i2c #(
   //==========================================================
   // Configurable Parameters
   //==========================================================
   parameter DW = 32,
   parameter AW = 5,

   // Derived Parameter
   localparam SW = int'($ceil(DW/8))
)
(
   //==========================================================
   // Clock and Reset
   //==========================================================
   input  logic pclk,
   input  logic presetn,

   //==========================================================
   // APB Interface
   //==========================================================
   input  logic [AW-1:0] i_paddr,
   input  logic          i_pwrite,
   input  logic          i_psel,
   input  logic          i_penable,
   input  logic [DW-1:0] i_pwdata,
   input  logic [SW-1:0] i_pstrb,

   output logic [DW-1:0] o_prdata,
   output logic          o_pslverr,
   output logic          o_pready,

   //==========================================================
   // I2C / FIFO Interface
   //==========================================================
   input  logic          i2c_busy,
   input  logic          i2c_done,
   output logic          fifo_wr_en,
   output logic [DW-1:0] fifo_wr_data,
   input  logic          fifo_full,

   input  logic [7:0]    i_rd_data,
   input  logic          slverr
);

   //==========================================================
   // Register Map  (ADDR_LSB = clog2(DW/8) = 2 -> word aligned)
   //----------------------------------------------------------
   // 0x00  CTRL_REG    (RW)  [7:0]  I2C_TARGET_ADDR
   //                         [8]    RW_SEL (reserved, 0=wr/1=rd)
   //                         [31:9] Reserved
   //
   // 0x04  STATUS_REG  (RO)  [0] BUSY   = i2c_busy
   //                         [1] DONE   = i2c_done
   //                         [2] FULL   = fifo_full
   //                         [3] SLVERR = slverr
   //
   // 0x08  TX_DATA_REG (RW)  [7:0]  byte to transmit.
   //        Writing this register is the "go" trigger: it pushes
   //        {CTRL_REG target addr, this write's low byte} into
   //        the I2C FIFO (once i2c_busy/fifo_full allow it).
   //
   // 0x0C  RX_DATA_REG (RO)  [7:0]  last byte received from I2C
   //
   // NOTE: register split (CTRL configures address, writing
   // TX_DATA is what fires the transfer) is a design choice made
   // to fit your existing FIFO-push logic - change it if your
   // I2C engine expects a dedicated START/GO bit instead.
   //==========================================================

   localparam CTRL_IDX   = 0;
   localparam STATUS_IDX = 1;
   localparam TXDATA_IDX = 2;
   localparam RXDATA_IDX = 3;

   localparam ADDR_LSB = $clog2(DW/8);

   //==========================================================
   // State Machine
   //==========================================================
   typedef enum logic [1:0]
   {
      IDLE     = 2'b00,
      W_ACCESS = 2'b01,
      R_ACCESS = 2'b10,
      R_FINISH = 2'b11
   } state_t;

   state_t state_ff;

   logic [AW-1:ADDR_LSB] reg_idx;
   assign reg_idx = i_paddr[AW-1:ADDR_LSB];

   logic req_rd, req_wr;
   assign req_rd = i_psel && !i_pwrite;
   assign req_wr = i_psel &&  i_pwrite;

   //==========================================================
   // Stored (writable) registers
   //==========================================================
   logic [DW-1:0] ctrl_reg;
   logic [DW-1:0] tx_data_reg;

   //==========================================================
   // Read-only / hardware-driven "registers"
   //==========================================================
   logic [DW-1:0] status_reg;
   assign status_reg = {28'b0, slverr, fifo_full, i2c_done, i2c_busy};

   logic [DW-1:0] rx_data_reg;
   assign rx_data_reg = {24'b0, i_rd_data};

   //==========================================================
   // Write completion / FIFO push
   // (kept from original: a write only "completes" once the
   //  I2C engine isn't busy and the FIFO has room - this is
   //  what generates the APB wait states)
   //==========================================================
   logic wr_complete;
   assign wr_complete = (state_ff == W_ACCESS) && req_wr && i_penable &&
                         !i2c_busy && !fifo_full;

   assign fifo_wr_en   = wr_complete && (reg_idx == TXDATA_IDX);
   assign fifo_wr_data = {16'b0, ctrl_reg[7:0], i_pwdata[7:0]};

   // Decode error: write to a read-only or undefined register
   logic wr_err;
   assign wr_err = wr_complete &&
                   (reg_idx == STATUS_IDX || reg_idx == RXDATA_IDX ||
                    reg_idx  > RXDATA_IDX);

   //==========================================================
   // PREADY generation
   //==========================================================
   always_comb begin
      o_pready = 1'b0;

      case (state_ff)
         IDLE: begin
            if (req_wr && i_penable && i_psel && !fifo_full && !i2c_busy)
               o_pready = 1'b1;
            if (slverr)
               o_pready = 1'b1;
         end

         W_ACCESS: begin
            if (req_wr && i_penable && !fifo_full && !i2c_busy)
               o_pready = 1'b1;
         end

         R_FINISH: begin
            o_pready = 1'b1;
         end

         default: o_pready = 1'b0;
      endcase
   end

   assign o_pslverr = slverr || wr_err;

   //==========================================================
   // Read data mux
   //==========================================================
   always_ff @(posedge pclk or negedge presetn) begin
      if (!presetn) begin
         o_prdata <= '0;
      end
      else if ((state_ff == R_ACCESS) || (state_ff == R_FINISH)) begin
         case (reg_idx)
            CTRL_IDX   : o_prdata <= ctrl_reg;
            STATUS_IDX : o_prdata <= status_reg;
            TXDATA_IDX : o_prdata <= tx_data_reg;
            RXDATA_IDX : o_prdata <= rx_data_reg;
            default    : o_prdata <= '0;
         endcase
      end
   end

   //==========================================================
   // Writable register updates
   //==========================================================
   always_ff @(posedge pclk or negedge presetn) begin
      if (!presetn) begin
         ctrl_reg    <= '0;
         tx_data_reg <= '0;
      end
      else if (wr_complete) begin
         case (reg_idx)
            CTRL_IDX   : ctrl_reg    <= i_pwdata;
            TXDATA_IDX : tx_data_reg <= i_pwdata;
            default    : ; // STATUS/RX writes are flagged via wr_err above
         endcase
      end
   end

   //==========================================================
   // APB access state machine (unchanged from original)
   //==========================================================
   always_ff @(posedge pclk or negedge presetn) begin

      if (!presetn) begin
         state_ff <= IDLE;
      end
      else begin
         case (state_ff)

            //--------------------------------------------------
            // IDLE
            //--------------------------------------------------
            IDLE: begin
               if (req_wr) begin
                  state_ff <= W_ACCESS;
               end
               else if (req_rd) begin
                  state_ff <= R_ACCESS;
               end
               else begin
                  state_ff <= IDLE;
               end
            end

            //--------------------------------------------------
            // WRITE ACCESS
            //--------------------------------------------------
            W_ACCESS: begin
               if (req_wr && i_penable) begin
                  if (fifo_full || i2c_busy) begin
                     // Wait until FIFO has space / I2C free
                     state_ff <= W_ACCESS;
                  end
                  else begin
                     // Write is completed
                     state_ff <= IDLE;
                  end
               end
            end

            //--------------------------------------------------
            // READ ACCESS
            //--------------------------------------------------
            R_ACCESS: begin
               if (req_rd && i_penable) begin
                  state_ff <= R_FINISH;
               end
               else begin
                  state_ff <= R_ACCESS;
               end
            end

            //--------------------------------------------------
            // READ FINISH
            //--------------------------------------------------
            R_FINISH: begin
               state_ff <= IDLE;
            end

            //--------------------------------------------------
            // DEFAULT
            //--------------------------------------------------
            default: begin
               state_ff <= IDLE;
            end

         endcase
      end
   end

endmodule

//------------------------------------------------------------------------------
// APB slave front-end for the GPIO block
//   - Decodes the APB access and forwards it to the CDC bridge (req/done handshake)
//   - Returns PSLVERR for: write to IN, read of SET/CLR, any unmapped offset
//   - AW = 16 : offset inside the 64 KB GPIO window (base decode is done in top)
//
//   Offset  Register     Access
//   0x00    IN           R
//   0x04    OUT          R/W
//   0x08    DIR          R/W
//   0x0C    SET          W
//   0x10    CLR          W
//   0x14    IRQ_EN       R/W
//   0x18    IRQ_STATUS   R / W1C
//   others               PSLVERR
//
// PSTRB handling (done here only, the GPIO block always receives a full 32-bit word):
//   - OUT / DIR / IRQ_EN : the slave keeps a shadow copy (out_sh, dir_sh, ien_sh).
//                          Only the byte lanes with PSTRB=1 are updated, then the whole
//                          shadow word is sent to the GPIO block.
//   - SET / CLR / IRQ_STATUS(W1C) : disabled byte lanes are sent as 0, which has no effect.
//   - PSTRB = 0 on a write : transfer completes without error and nothing is sent to GPIO.
//   - Reads ignore PSTRB.
//------------------------------------------------------------------------------
module apb_slave #(
   parameter DW = 32,
   parameter AW = 16,
   localparam SW = DW/8
)(
   input  logic          pclk,
   input  logic          presetn,

   // APB interface
   input  logic [AW-1:0] i_paddr,
   input  logic          i_pwrite,
   input  logic          i_psel,
   input  logic          i_penable,
   input  logic [DW-1:0] i_pwdata,
   input  logic [SW-1:0] i_pstrb,     // write byte-lane enables
   output logic [DW-1:0] o_prdata,
   output logic          o_pslverr,
   output logic          o_pready,

   // Interface to CDC bridge
   output logic          o_req,       // one-cycle pulse: start access
   output logic          o_we,
   output logic [31:0]   o_adr,       // byte address
   output logic [DW-1:0] o_wdata,     // full-word write data (strobes already applied)
   input  logic          i_done,      // one-cycle pulse: access finished
   input  logic [DW-1:0] i_rdata
);

typedef enum logic [1:0] {IDLE, WAIT_GPIO, RESP} state_t;
state_t state_ff;

localparam ADDR_LSB = $clog2(DW/8);

// Word indexes
localparam IDX_IN   = 0;
localparam IDX_OUT  = 1;
localparam IDX_DIR  = 2;
localparam IDX_SET  = 3;
localparam IDX_CLR  = 4;
localparam IDX_IEN  = 5;
localparam IDX_ISTS = 6;

logic [AW-ADDR_LSB-1:0] widx;
assign widx = i_paddr[AW-1:ADDR_LSB];

// Access error: write to IN / read of SET,CLR / unmapped offset
logic acc_err;
always_comb begin
   if (i_pwrite)
      acc_err = !(widx == IDX_OUT || widx == IDX_DIR  || widx == IDX_SET ||
                  widx == IDX_CLR || widx == IDX_IEN  || widx == IDX_ISTS);
   else
      acc_err = !(widx == IDX_IN  || widx == IDX_OUT  || widx == IDX_DIR ||
                  widx == IDX_IEN || widx == IDX_ISTS);
end

// ---------------- Byte-lane write data ----------------
// wdata_m : PWDATA with disabled byte lanes forced to 0
logic [DW-1:0] wmask, wdata_m;
always_comb begin
   for (int i = 0; i < SW; i++)
      wmask[8*i +: 8] = {8{i_pstrb[i]}};
end
assign wdata_m = i_pwdata & wmask;

// Shadow copies of the read/write registers (always equal to the GPIO block's values,
// since every write to them goes through this slave). Same reset value as the GPIO block.
logic [DW-1:0] out_sh, dir_sh, ien_sh;

// Data sent to the GPIO block
always_comb begin
   o_wdata = wdata_m;                       // SET / CLR / IRQ_STATUS: disabled bytes are 0
   case (widx)
      IDX_OUT: o_wdata = out_sh;            // R/W registers: merged value, valid in the
      IDX_DIR: o_wdata = dir_sh;            // cycle after the shadow is updated, which is
      IDX_IEN: o_wdata = ien_sh;            // when o_req is high
      default: ;
   endcase
end

assign o_we  = i_pwrite;
assign o_adr = {{(32-AW){1'b0}}, i_paddr[AW-1:ADDR_LSB], {ADDR_LSB{1'b0}}};

always_ff @(posedge pclk) begin
   if (!presetn) begin
      state_ff  <= IDLE;
      o_pready  <= 1'b0;
      o_pslverr <= 1'b0;
      o_prdata  <= '0;
      o_req     <= 1'b0;
      out_sh    <= '0;
      dir_sh    <= '0;
      ien_sh    <= '0;
   end
   else begin
      o_req <= 1'b0;                       // default: pulse only

      case (state_ff)
         // Wait for the APB access phase
         IDLE: begin
            if (i_psel && i_penable) begin
               if (acc_err) begin          // answer errors immediately
                  o_pready  <= 1'b1;
                  o_pslverr <= 1'b1;
                  o_prdata  <= '0;
                  state_ff  <= RESP;
               end
               else if (i_pwrite && (i_pstrb == '0)) begin
                  // No byte lane enabled: nothing to write, complete without error
                  o_pready  <= 1'b1;
                  o_pslverr <= 1'b0;
                  o_prdata  <= '0;
                  state_ff  <= RESP;
               end
               else begin
                  if (i_pwrite) begin
                     case (widx)
                        // Update only the enabled byte lanes of the shadow registers
                        IDX_OUT: begin
                           for (int i = 0; i < SW; i++)
                              if (i_pstrb[i]) out_sh[8*i +: 8] <= i_pwdata[8*i +: 8];
                        end
                        IDX_DIR: begin
                           for (int i = 0; i < SW; i++)
                              if (i_pstrb[i]) dir_sh[8*i +: 8] <= i_pwdata[8*i +: 8];
                        end
                        IDX_IEN: begin
                           for (int i = 0; i < SW; i++)
                              if (i_pstrb[i]) ien_sh[8*i +: 8] <= i_pwdata[8*i +: 8];
                        end
                        // SET/CLR act on OUT, so keep out_sh in step
                        IDX_SET: out_sh <= out_sh |  wdata_m;
                        IDX_CLR: out_sh <= out_sh & ~wdata_m;
                        default: ;
                     endcase
                  end
                  o_req    <= 1'b1;        // start CDC access
                  state_ff <= WAIT_GPIO;
               end
            end
         end

         // Wait for the GPIO side to finish (PREADY low = wait states)
         WAIT_GPIO: begin
            if (i_done) begin
               o_pready <= 1'b1;
               o_prdata <= i_pwrite ? '0 : i_rdata;
               state_ff <= RESP;
            end
         end

         // PREADY is high for exactly one cycle
         RESP: begin
            o_pready  <= 1'b0;
            o_pslverr <= 1'b0;
            state_ff  <= IDLE;
         end

         default: state_ff <= IDLE;
      endcase
   end
end

endmodule

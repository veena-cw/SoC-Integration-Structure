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

typedef enum logic [1:0] {IDLE, SETUP, ACCESS} state_t;
state_t state_ff;

// APB phase decode (straight from the bus)
logic setup_ph, access_ph;
assign setup_ph  = i_psel && !i_penable;   // APB SETUP  phase
assign access_ph = i_psel &&  i_penable;   // APB ACCESS phase

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

// ---------------- APB FSM ----------------
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
         // IDLE: wait for the SETUP phase. The next bus cycle must be ACCESS.
         IDLE: begin
            if (setup_ph)
               state_ff <= SETUP;
         end

         // SETUP: bus is in its first ACCESS cycle. Decode and start the transfer.
         SETUP: begin
            if (!i_psel) begin
               state_ff <= IDLE;           // select dropped: no transfer (protocol violation)
            end
            else if (access_ph) begin      // PENABLE=1 seen: ACCESS phase confirmed
               if (acc_err) begin          // answer errors without touching the GPIO
                  o_pready  <= 1'b1;
                  o_pslverr <= 1'b1;
                  o_prdata  <= '0;
                  state_ff  <= ACCESS;
               end
               else if (i_pwrite && (i_pstrb == '0)) begin
                  // No byte lane enabled: nothing to write, complete without error
                  o_pready  <= 1'b1;
                  o_pslverr <= 1'b0;
                  o_prdata  <= '0;
                  state_ff  <= ACCESS;
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
                  state_ff <= ACCESS;
               end
            end
            // else PSEL=1, PENABLE=0 still: stay in SETUP until PENABLE rises
         end

         // ACCESS: PREADY low = wait states, PREADY high for exactly one cycle
         ACCESS: begin
            if (o_pready) begin            // master samples PREADY=1 in this cycle
               o_pready  <= 1'b0;
               o_pslverr <= 1'b0;
               state_ff  <= IDLE;
            end
            else if (i_done) begin         // GPIO side finished: raise PREADY
               o_pready <= 1'b1;
               o_prdata <= i_pwrite ? '0 : i_rdata;
            end
         end

         default: state_ff <= IDLE;
      endcase
   end
end

endmodule

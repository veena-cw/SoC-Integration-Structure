//------------------------------------------------------------------------------
// axi_slave : AXI4 slave bridge for the CSI-2 Rx control/status registers
//
//  * 32-bit data, single outstanding read + single outstanding write
//  * Burst types : INCR and FIXED, AxSIZE <= 2 (4 bytes). WRAP / reserved burst
//                  types and AxSIZE > 2 are answered with SLVERR.
//  * ID is echoed on B and R.  AxLOCK/CACHE/PROT/QOS/REGION are accepted and ignored.
//  * Register side is a plain bus:
//        write : reg_wr_en + reg_waddr + reg_wdata + reg_wstrb   (reg_wr_ok = address writable)
//        read  : reg_raddr -> reg_rdata (combinational in the register block, reg_rd_ok = address valid)
//------------------------------------------------------------------------------
module axi_slave #(
  parameter ID_W   = 4,
  parameter ADDR_W = 32
)(
  input                    aclk,
  input                    areset_n,

  // ---------------- write address channel ----------------
  input  [ID_W-1:0]        awid,
  input  [ADDR_W-1:0]      awaddr,
  input  [7:0]             awlen,
  input  [2:0]             awsize,
  input  [1:0]             awburst,
  input                    awlock,
  input  [3:0]             awcache,
  input  [2:0]             awprot,
  input  [3:0]             awqos,
  input  [3:0]             awregion,
  input                    awvalid,
  output logic             awready,
  // ---------------- write data channel ----------------
  input  [31:0]            wdata,
  input  [3:0]             wstrb,
  input                    wlast,
  input                    wvalid,
  output logic             wready,
  // ---------------- write response channel ----------------
  output logic [ID_W-1:0]  bid,
  output logic [1:0]       bresp,
  output logic             bvalid,
  input                    bready,
  // ---------------- read address channel ----------------
  input  [ID_W-1:0]        arid,
  input  [ADDR_W-1:0]      araddr,
  input  [7:0]             arlen,
  input  [2:0]             arsize,
  input  [1:0]             arburst,
  input                    arlock,
  input  [3:0]             arcache,
  input  [2:0]             arprot,
  input  [3:0]             arqos,
  input  [3:0]             arregion,
  input                    arvalid,
  output logic             arready,
  // ---------------- read data channel ----------------
  output logic [ID_W-1:0]  rid,
  output logic [31:0]      rdata,
  output logic [1:0]       rresp,
  output logic             rlast,
  output logic             rvalid,
  input                    rready,

  // ---------------- register bus ----------------
  output logic             reg_wr_en,
  output logic [ADDR_W-1:0] reg_waddr,
  output logic [31:0]      reg_wdata,
  output logic [3:0]       reg_wstrb,
  input                    reg_wr_ok,
  output logic [ADDR_W-1:0] reg_raddr,
  input  [31:0]            reg_rdata,
  input                    reg_rd_ok
);

  localparam [1:0] BURST_FIXED = 2'b00, BURST_INCR = 2'b01;
  localparam [1:0] RESP_OKAY   = 2'b00, RESP_SLVERR = 2'b10;

  //============================== WRITE ==============================
  localparam [1:0] W_IDLE = 2'd0, W_DATA = 2'd1, W_RESP = 2'd2;
  logic [1:0]         wstate;
  logic [ID_W-1:0]    wid_q;
  logic [ADDR_W-1:0]  waddr_q;
  logic [2:0]         wsize_q;
  logic [1:0]         wburst_q;
  logic               wunsup_q;      // unsupported burst type / size
  logic               werr_q;        // sticky error for this burst

  assign awready   = (wstate == W_IDLE);
  assign wready    = (wstate == W_DATA);
  assign reg_waddr = waddr_q;
  assign reg_wdata = wdata;
  assign reg_wstrb = wstrb;
  assign reg_wr_en = wready & wvalid & ~wunsup_q;

  always_ff @(posedge aclk or negedge areset_n) begin
    if (!areset_n) begin
      wstate   <= W_IDLE;
      wid_q    <= '0;
      waddr_q  <= '0;
      wsize_q  <= '0;
      wburst_q <= '0;
      wunsup_q <= 1'b0;
      werr_q   <= 1'b0;
      bvalid   <= 1'b0;
      bresp    <= RESP_OKAY;
      bid      <= '0;
    end else begin
      case (wstate)
        W_IDLE: if (awvalid) begin
          wid_q    <= awid;
          waddr_q  <= awaddr;
          wsize_q  <= awsize;
          wburst_q <= awburst;
          wunsup_q <= (awsize > 3'd2) | awburst[1];
          werr_q   <= (awsize > 3'd2) | awburst[1];
          wstate   <= W_DATA;
        end
        W_DATA: if (wvalid) begin
          if (!reg_wr_ok) werr_q <= 1'b1;
          if (wburst_q == BURST_INCR)
            waddr_q <= waddr_q + ({{(ADDR_W-1){1'b0}}, 1'b1} << wsize_q);
          if (wlast) begin
            bid    <= wid_q;
            bresp  <= (werr_q | !reg_wr_ok) ? RESP_SLVERR : RESP_OKAY;
            bvalid <= 1'b1;
            wstate <= W_RESP;
          end
        end
        W_RESP: if (bready) begin
          bvalid <= 1'b0;
          wstate <= W_IDLE;
        end
        default: wstate <= W_IDLE;
      endcase
    end
  end

  //============================== READ ===============================
  localparam [1:0] R_IDLE = 2'd0, R_FETCH = 2'd1, R_DATA = 2'd2;
  logic [1:0]         rstate;
  logic [ID_W-1:0]    rid_q;
  logic [ADDR_W-1:0]  raddr_q;
  logic [7:0]         rlen_q;
  logic [2:0]         rsize_q;
  logic [1:0]         rburst_q;
  logic               runsup_q;

  assign arready   = (rstate == R_IDLE);
  assign reg_raddr = raddr_q;

  always_ff @(posedge aclk or negedge areset_n) begin
    if (!areset_n) begin
      rstate   <= R_IDLE;
      rid_q    <= '0;
      raddr_q  <= '0;
      rlen_q   <= '0;
      rsize_q  <= '0;
      rburst_q <= '0;
      runsup_q <= 1'b0;
      rid      <= '0;
      rdata    <= '0;
      rresp    <= RESP_OKAY;
      rlast    <= 1'b0;
      rvalid   <= 1'b0;
    end else begin
      case (rstate)
        R_IDLE: if (arvalid) begin
          rid_q    <= arid;
          raddr_q  <= araddr;
          rlen_q   <= arlen;
          rsize_q  <= arsize;
          rburst_q <= arburst;
          runsup_q <= (arsize > 3'd2) | arburst[1];
          rstate   <= R_FETCH;
        end
        R_FETCH: begin                       // register block answers combinationally from raddr_q
          rid    <= rid_q;
          rdata  <= runsup_q ? 32'h0 : reg_rdata;
          rresp  <= (runsup_q | !reg_rd_ok) ? RESP_SLVERR : RESP_OKAY;
          rlast  <= (rlen_q == 8'd0);
          rvalid <= 1'b1;
          rstate <= R_DATA;
        end
        R_DATA: if (rready) begin
          rvalid <= 1'b0;
          if (rlen_q == 8'd0) rstate <= R_IDLE;
          else begin
            rlen_q <= rlen_q - 8'd1;
            if (rburst_q == BURST_INCR)
              raddr_q <= raddr_q + ({{(ADDR_W-1){1'b0}}, 1'b1} << rsize_q);
            rstate <= R_FETCH;
          end
        end
        default: rstate <= R_IDLE;
      endcase
    end
  end

endmodule

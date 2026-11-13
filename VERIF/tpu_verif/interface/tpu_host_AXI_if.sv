//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_AXI_if
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: AXI4 master (DMA) port of tpu_host_top. The testbench side is the
//               external-memory model (AXI4 slave). Sampled / driven on clk_axi.
//               Signals use the TB role prefix s_axi_* (TB = AXI4 slave, UVM block diagram);
//               tpu_tb_top maps them onto the DUT m_axi_* ports.
//=================================================================================
interface tpu_host_AXI_if (input logic clk_axi);
  import tpu_host_pkg::*;

  logic                    rst_n;
  // write address
  logic [S_AXI_ID_W-1:0]   s_axi_awid;
  logic [S_AXI_ADDR_W-1:0] s_axi_awaddr;
  logic [7:0]              s_axi_awlen;
  logic [2:0]              s_axi_awsize;
  logic [1:0]              s_axi_awburst;
  logic                    s_axi_awlock;
  logic [3:0]              s_axi_awcache;
  logic [2:0]              s_axi_awprot;
  logic [3:0]              s_axi_awqos;
  logic                    s_axi_awvalid;
  logic                    s_axi_awready;
  // write data
  logic [S_AXI_DATA_W-1:0] s_axi_wdata;
  logic [S_AXI_STRB_W-1:0] s_axi_wstrb;
  logic                    s_axi_wlast;
  logic                    s_axi_wvalid;
  logic                    s_axi_wready;
  // write response
  logic [S_AXI_ID_W-1:0]   s_axi_bid;
  logic [1:0]              s_axi_bresp;
  logic                    s_axi_bvalid;
  logic                    s_axi_bready;
  // read address
  logic [S_AXI_ID_W-1:0]   s_axi_arid;
  logic [S_AXI_ADDR_W-1:0] s_axi_araddr;
  logic [7:0]              s_axi_arlen;
  logic [2:0]              s_axi_arsize;
  logic [1:0]              s_axi_arburst;
  logic                    s_axi_arlock;
  logic [3:0]              s_axi_arcache;
  logic [2:0]              s_axi_arprot;
  logic [3:0]              s_axi_arqos;
  logic                    s_axi_arvalid;
  logic                    s_axi_arready;
  // read data
  logic [S_AXI_ID_W-1:0]   s_axi_rid;
  logic [S_AXI_DATA_W-1:0] s_axi_rdata;
  logic [1:0]              s_axi_rresp;
  logic                    s_axi_rlast;
  logic                    s_axi_rvalid;
  logic                    s_axi_rready;

  // slave (memory model) side
  clocking slv_cb @(posedge clk_axi);
    default input #1step output #0;
    input  s_axi_awid, s_axi_awaddr, s_axi_awlen, s_axi_awsize, s_axi_awburst, s_axi_awlock,
           s_axi_awcache, s_axi_awprot, s_axi_awqos, s_axi_awvalid;
    output s_axi_awready;
    input  s_axi_wdata, s_axi_wstrb, s_axi_wlast, s_axi_wvalid;
    output s_axi_wready;
    output s_axi_bid, s_axi_bresp, s_axi_bvalid;
    input  s_axi_bready;
    input  s_axi_arid, s_axi_araddr, s_axi_arlen, s_axi_arsize, s_axi_arburst, s_axi_arlock,
           s_axi_arcache, s_axi_arprot, s_axi_arqos, s_axi_arvalid;
    output s_axi_arready;
    output s_axi_rid, s_axi_rdata, s_axi_rresp, s_axi_rlast, s_axi_rvalid;
    input  s_axi_rready;
  endclocking

  clocking mon_cb @(posedge clk_axi);
    default input #1step;
    input s_axi_awid, s_axi_awaddr, s_axi_awlen, s_axi_awsize, s_axi_awburst, s_axi_awlock,
          s_axi_awcache, s_axi_awprot, s_axi_awqos, s_axi_awvalid, s_axi_awready;
    input s_axi_wdata, s_axi_wstrb, s_axi_wlast, s_axi_wvalid, s_axi_wready;
    input s_axi_bid, s_axi_bresp, s_axi_bvalid, s_axi_bready;
    input s_axi_arid, s_axi_araddr, s_axi_arlen, s_axi_arsize, s_axi_arburst, s_axi_arlock,
          s_axi_arcache, s_axi_arprot, s_axi_arqos, s_axi_arvalid, s_axi_arready;
    input s_axi_rid, s_axi_rdata, s_axi_rresp, s_axi_rlast, s_axi_rvalid, s_axi_rready;
  endclocking

  modport SLAVE   (clocking slv_cb, input clk_axi, input rst_n);
  modport MONITOR (clocking mon_cb, input clk_axi, input rst_n);

`ifdef SVA_ON
  // AXI4 master rules on the DUT side (valid held until ready, payload stable) and the DMA burst rules
  // of tpu_dma_engine.sv (INCR, 16-byte beats, ID 0, <= 16 beats, 16-byte aligned, no 4 KB crossing,
  // one burst in flight).
  // Written without property arguments / $isunknown in properties (xelab 2025.2 crashes on those).
  a_awvalid_hold : assert property (@(posedge clk_axi) disable iff (!rst_n) (s_axi_awvalid && !s_axi_awready) |=> s_axi_awvalid)
                   else $error("AXI: AWVALID dropped before AWREADY");
  a_wvalid_hold  : assert property (@(posedge clk_axi) disable iff (!rst_n) (s_axi_wvalid && !s_axi_wready) |=> s_axi_wvalid)
                   else $error("AXI: WVALID dropped before WREADY");
  a_arvalid_hold : assert property (@(posedge clk_axi) disable iff (!rst_n) (s_axi_arvalid && !s_axi_arready) |=> s_axi_arvalid)
                   else $error("AXI: ARVALID dropped before ARREADY");
  a_aw_stable    : assert property (@(posedge clk_axi) disable iff (!rst_n) (s_axi_awvalid && !s_axi_awready) |=>
                                    (s_axi_awaddr == $past(s_axi_awaddr) && s_axi_awlen == $past(s_axi_awlen)))
                   else $error("AXI: AW payload changed while waiting");
  a_ar_stable    : assert property (@(posedge clk_axi) disable iff (!rst_n) (s_axi_arvalid && !s_axi_arready) |=>
                                    (s_axi_araddr == $past(s_axi_araddr) && s_axi_arlen == $past(s_axi_arlen)))
                   else $error("AXI: AR payload changed while waiting");
  a_w_stable     : assert property (@(posedge clk_axi) disable iff (!rst_n) (s_axi_wvalid && !s_axi_wready) |=>
                                    (s_axi_wdata == $past(s_axi_wdata) && s_axi_wstrb == $past(s_axi_wstrb) && s_axi_wlast == $past(s_axi_wlast)))
                   else $error("AXI: W payload changed while waiting");
  // burst rules, checked procedurally on every address-valid cycle
  // addr_lo = address bits [11:0] (offset in the 4 KB page)
  function automatic bit burst_ok(bit [11:0] addr_lo, bit [7:0] len, bit [2:0] size, bit [1:0] burst, bit [S_AXI_ID_W-1:0] id);
    return burst == 2'b01 && size == 3'd4 && id == '0 && len < 8'd16 && addr_lo[3:0] == 4'h0 &&
           ({1'b0, addr_lo} + ({5'd0, len} + 13'd1) * 13'd16) <= 13'd4096;
  endfunction
  always @(posedge clk_axi) if (rst_n === 1'b1) begin
    if (s_axi_awvalid === 1'b1 && !burst_ok(s_axi_awaddr[11:0], s_axi_awlen, s_axi_awsize, s_axi_awburst, s_axi_awid))
      $error("AXI: AW violates DMA burst rules (addr 0x%08h len %0d size %0d burst %0d)", s_axi_awaddr, s_axi_awlen, s_axi_awsize, s_axi_awburst);
    if (s_axi_arvalid === 1'b1 && !burst_ok(s_axi_araddr[11:0], s_axi_arlen, s_axi_arsize, s_axi_arburst, s_axi_arid))
      $error("AXI: AR violates DMA burst rules (addr 0x%08h len %0d size %0d burst %0d)", s_axi_araddr, s_axi_arlen, s_axi_arsize, s_axi_arburst);
    if ($isunknown({s_axi_awvalid, s_axi_wvalid, s_axi_bready, s_axi_arvalid, s_axi_rready}))
      $error("AXI: X on a DUT valid / ready after reset");
    if (s_axi_awvalid === 1'b1 && $isunknown({s_axi_awid, s_axi_awaddr, s_axi_awlen, s_axi_awsize, s_axi_awburst}))
      $error("AXI: X on the AW payload while AWVALID");
    if (s_axi_arvalid === 1'b1 && $isunknown({s_axi_arid, s_axi_araddr, s_axi_arlen, s_axi_arsize, s_axi_arburst}))
      $error("AXI: X on the AR payload while ARVALID");
    if (s_axi_wvalid === 1'b1) begin
      if ($isunknown({s_axi_wstrb, s_axi_wlast})) $error("AXI: X on WSTRB / WLAST while WVALID");
      else if (wdata_x_lanes() != '0)             $error("AXI: X on enabled WDATA byte lanes 0x%04h while WVALID", wdata_x_lanes());
    end
  end

  // byte lanes that are enabled by WSTRB and carry X / Z (disabled lanes may hold anything)
  function automatic logic [S_AXI_STRB_W-1:0] wdata_x_lanes();
    logic [S_AXI_STRB_W-1:0] x = '0;
    for (int b = 0; b < S_AXI_STRB_W; b++)
      x[b] = s_axi_wstrb[b] && $isunknown(s_axi_wdata[b*8 +: 8]);
    return x;
  endfunction

  // WLAST position (AXI4 A3.4.1): WLAST on beat AWLEN+1 of each write burst and on no other beat.
  // AW lengths and finished W bursts are queued separately, so W data ahead of its AW is checked too.
  logic [7:0]  aw_lens[$];                 // accepted AW bursts whose W data is not complete
  int unsigned w_done[$];                  // finished W bursts (beats) whose AW was not seen yet
  int unsigned w_beats;
  always @(posedge clk_axi)
    if (rst_n !== 1'b1) begin
      aw_lens.delete(); w_done.delete(); w_beats <= 0;
    end else begin
      if (s_axi_awvalid && s_axi_awready) begin
        if (w_done.size() != 0) begin
          if (w_done[0] != int'(s_axi_awlen) + 1)
            $error("AXI: write burst had %0d W beats, AWLEN %0d needs %0d", w_done[0], s_axi_awlen, int'(s_axi_awlen) + 1);
          void'(w_done.pop_front());
        end else aw_lens.push_back(s_axi_awlen);
      end
      if (s_axi_wvalid && s_axi_wready) begin
        if (aw_lens.size() != 0 && s_axi_wlast != (w_beats + 1 == int'(aw_lens[0]) + 1))
          $error("AXI: WLAST %0b on beat %0d of a burst with AWLEN %0d", s_axi_wlast, w_beats + 1, aw_lens[0]);
        if (s_axi_wlast) begin
          if (aw_lens.size() != 0) void'(aw_lens.pop_front());
          else                     w_done.push_back(w_beats + 1);
          w_beats <= 0;
        end else w_beats <= w_beats + 1;
      end
    end

  // One burst in flight (tpu_dma_engine: one engine, one burst at a time): a new AW or AR is accepted only
  // when every earlier burst has finished (write: B handshake, read: R handshake with RLAST), and never AW
  // and AR in the same cycle. A burst that finishes at the same edge a new one is accepted is allowed.
  int unsigned wr_open, rd_open;           // accepted bursts not finished yet
  always @(posedge clk_axi)
    if (rst_n !== 1'b1) begin
      wr_open <= 0; rd_open <= 0;
    end else begin
      bit aw_hs, ar_hs, b_hs, rl_hs;
      int unsigned open_after;
      aw_hs = s_axi_awvalid && s_axi_awready;
      ar_hs = s_axi_arvalid && s_axi_arready;
      b_hs  = s_axi_bvalid  && s_axi_bready;
      rl_hs = s_axi_rvalid  && s_axi_rready && s_axi_rlast;
      open_after = wr_open + rd_open - ((b_hs && wr_open != 0) ? 1 : 0) - ((rl_hs && rd_open != 0) ? 1 : 0);
      if (aw_hs && ar_hs)
        $error("AXI: AW and AR accepted in the same cycle (one DMA burst in flight)");
      else if ((aw_hs || ar_hs) && open_after != 0)
        $error("AXI: %s accepted while %0d write / %0d read burst(s) are still open (one DMA burst in flight)",
               aw_hs ? "AW" : "AR", wr_open, rd_open);
      wr_open <= wr_open + (aw_hs ? 1 : 0) - ((b_hs && wr_open != 0) ? 1 : 0);
      rd_open <= rd_open + (ar_hs ? 1 : 0) - ((rl_hs && rd_open != 0) ? 1 : 0);
    end

  // Slave (testbench memory model) side: catches memory-model mistakes, not DUT bugs
  a_tb_bvalid_hold : assert property (@(posedge clk_axi) disable iff (!rst_n) (s_axi_bvalid && !s_axi_bready) |=>
                                      (s_axi_bvalid && s_axi_bresp == $past(s_axi_bresp) && s_axi_bid == $past(s_axi_bid)))
                     else $error("AXI (TB memory): B dropped or changed before BREADY");
  a_tb_rvalid_hold : assert property (@(posedge clk_axi) disable iff (!rst_n) (s_axi_rvalid && !s_axi_rready) |=>
                                      (s_axi_rvalid && s_axi_rdata == $past(s_axi_rdata) && s_axi_rresp == $past(s_axi_rresp) &&
                                       s_axi_rlast == $past(s_axi_rlast) && s_axi_rid == $past(s_axi_rid)))
                     else $error("AXI (TB memory): R dropped or changed before RREADY");
  a_tb_bid : assert property (@(posedge clk_axi) disable iff (!rst_n) s_axi_bvalid |-> (s_axi_bid == '0))
             else $error("AXI (TB memory): BID %0d, the DMA only issues ID 0", s_axi_bid);
  a_tb_rid : assert property (@(posedge clk_axi) disable iff (!rst_n) s_axi_rvalid |-> (s_axi_rid == '0))
             else $error("AXI (TB memory): RID %0d, the DMA only issues ID 0", s_axi_rid);
`endif
endinterface : tpu_host_AXI_if

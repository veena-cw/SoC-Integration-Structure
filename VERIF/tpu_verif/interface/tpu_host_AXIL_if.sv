//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_AXIL_if
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: AXI4-Lite slave port of tpu_host_top (the "CPU" side). Everything is
//               sampled / driven on clk_axil, the clock the DUT uses for this port.
//               irq has its own interface (tpu_host_irq_if, passive IRQ agent).
//               Signals use the TB role prefix m_axil_* (TB = AXI4-Lite master, UVM block
//               diagram); tpu_tb_top maps them onto the DUT s_axil_* ports.
//=================================================================================
interface tpu_host_AXIL_if (input logic clk_axil);
  import tpu_host_pkg::*;

  logic                       rst_n;
  logic [M_AXIL_AWADDR_W-1:0] m_axil_awaddr;
  logic [2:0]                 m_axil_awprot;
  logic                       m_axil_awvalid;
  logic                       m_axil_awready;
  logic [M_AXIL_WDATA_W-1:0] m_axil_wdata;
  logic [M_AXIL_WSTRB_W-1:0] m_axil_wstrb;
  logic                       m_axil_wvalid;
  logic                       m_axil_wready;
  logic [1:0]                 m_axil_bresp;
  logic                       m_axil_bvalid;
  logic                       m_axil_bready;
  logic [M_AXIL_ARADDR_W-1:0] m_axil_araddr;
  logic [2:0]                 m_axil_arprot;
  logic                       m_axil_arvalid;
  logic                       m_axil_arready;
  logic [31:0]                m_axil_rdata;
  logic [1:0]                 m_axil_rresp;
  logic                       m_axil_rvalid;
  logic                       m_axil_rready;

  clocking drv_cb @(posedge clk_axil);
    default input #1step output #0;
    output m_axil_awaddr, m_axil_awprot, m_axil_awvalid;
    input  m_axil_awready;
    output m_axil_wdata, m_axil_wstrb, m_axil_wvalid;
    input  m_axil_wready;
    input  m_axil_bresp, m_axil_bvalid;
    output m_axil_bready;
    output m_axil_araddr, m_axil_arprot, m_axil_arvalid;
    input  m_axil_arready;
    input  m_axil_rdata, m_axil_rresp, m_axil_rvalid;
    output m_axil_rready;
  endclocking

  clocking mon_cb @(posedge clk_axil);
    default input #1step;
    input m_axil_awaddr, m_axil_awprot, m_axil_awvalid, m_axil_awready;
    input m_axil_wdata, m_axil_wstrb, m_axil_wvalid, m_axil_wready;
    input m_axil_bresp, m_axil_bvalid, m_axil_bready;
    input m_axil_araddr, m_axil_arprot, m_axil_arvalid, m_axil_arready;
    input m_axil_rdata, m_axil_rresp, m_axil_rvalid, m_axil_rready;
  endclocking

  modport DRIVER  (clocking drv_cb, input clk_axil, input rst_n);
  modport MONITOR (clocking mon_cb, input clk_axil, input rst_n);

`ifdef SVA_ON
  // AXI4-Lite rules on the DUT (slave) side: response held until accepted and stable, no EXOKAY,
  // no X on DUT outputs after reset. Written without property arguments / $isunknown in properties
  // (xelab 2025.2 crashes on those).
  a_bvalid_hold  : assert property (@(posedge clk_axil) disable iff (!rst_n) (m_axil_bvalid && !m_axil_bready) |=> m_axil_bvalid)
                   else $error("AXIL: BVALID dropped before BREADY");
  a_rvalid_hold  : assert property (@(posedge clk_axil) disable iff (!rst_n) (m_axil_rvalid && !m_axil_rready) |=> m_axil_rvalid)
                   else $error("AXIL: RVALID dropped before RREADY");
  a_bresp_stable : assert property (@(posedge clk_axil) disable iff (!rst_n) (m_axil_bvalid && !m_axil_bready) |=> (m_axil_bresp == $past(m_axil_bresp)))
                   else $error("AXIL: BRESP changed while waiting");
  a_rdata_stable : assert property (@(posedge clk_axil) disable iff (!rst_n) (m_axil_rvalid && !m_axil_rready) |=> (m_axil_rdata == $past(m_axil_rdata)))
                   else $error("AXIL: RDATA changed while waiting");
  a_no_exokay_b  : assert property (@(posedge clk_axil) disable iff (!rst_n) m_axil_bvalid |-> (m_axil_bresp != RESP_EXOKAY))
                   else $error("AXIL: EXOKAY on B");
  a_no_exokay_r  : assert property (@(posedge clk_axil) disable iff (!rst_n) m_axil_rvalid |-> (m_axil_rresp != RESP_EXOKAY))
                   else $error("AXIL: EXOKAY on R");
  always @(posedge clk_axil)
    if (rst_n === 1'b1 && $isunknown({m_axil_awready, m_axil_wready, m_axil_bvalid, m_axil_arready, m_axil_rvalid}))
      $error("AXIL: X on a DUT output after reset");
  always @(posedge clk_axil) if (rst_n === 1'b1) begin
    if (m_axil_bvalid === 1'b1 && $isunknown(m_axil_bresp))                 $error("AXIL: X on BRESP while BVALID");
    if (m_axil_rvalid === 1'b1 && $isunknown({m_axil_rresp, m_axil_rdata})) $error("AXIL: X on RDATA / RRESP while RVALID");
  end

  // Response ordering (AXI4 A3.3.1): BVALID only after both the AW and the W handshake of that write,
  // RVALID only after the AR handshake. Counted in accepted transfers; the counts before this edge are
  // used, so a response in the same cycle as its own address / data handshake is flagged too.
  int unsigned aw_acc, w_acc, b_acc, ar_acc, r_acc;
  always @(posedge clk_axil)
    if (rst_n !== 1'b1) begin
      aw_acc <= 0; w_acc <= 0; b_acc <= 0; ar_acc <= 0; r_acc <= 0;
    end else begin
      if (m_axil_bvalid && !(aw_acc > b_acc && w_acc > b_acc))
        $error("AXIL: BVALID before both AW and W were accepted (AW %0d W %0d B %0d)", aw_acc, w_acc, b_acc);
      if (m_axil_rvalid && !(ar_acc > r_acc))
        $error("AXIL: RVALID before AR was accepted (AR %0d R %0d)", ar_acc, r_acc);
      if (m_axil_awvalid && m_axil_awready) aw_acc <= aw_acc + 1;
      if (m_axil_wvalid  && m_axil_wready)  w_acc  <= w_acc  + 1;
      if (m_axil_bvalid  && m_axil_bready)  b_acc  <= b_acc  + 1;
      if (m_axil_arvalid && m_axil_arready) ar_acc <= ar_acc + 1;
      if (m_axil_rvalid  && m_axil_rready)  r_acc  <= r_acc  + 1;
    end

  // Master (testbench driver) side: catches driver mistakes, not DUT bugs
  a_tb_awvalid_hold : assert property (@(posedge clk_axil) disable iff (!rst_n) (m_axil_awvalid && !m_axil_awready) |=>
                                       (m_axil_awvalid && m_axil_awaddr == $past(m_axil_awaddr) && m_axil_awprot == $past(m_axil_awprot)))
                      else $error("AXIL (TB driver): AW dropped or changed before AWREADY");
  a_tb_wvalid_hold  : assert property (@(posedge clk_axil) disable iff (!rst_n) (m_axil_wvalid && !m_axil_wready) |=>
                                       (m_axil_wvalid && m_axil_wdata == $past(m_axil_wdata) && m_axil_wstrb == $past(m_axil_wstrb)))
                      else $error("AXIL (TB driver): W dropped or changed before WREADY");
  a_tb_arvalid_hold : assert property (@(posedge clk_axil) disable iff (!rst_n) (m_axil_arvalid && !m_axil_arready) |=>
                                       (m_axil_arvalid && m_axil_araddr == $past(m_axil_araddr) && m_axil_arprot == $past(m_axil_arprot)))
                      else $error("AXIL (TB driver): AR dropped or changed before ARREADY");
`endif
endinterface : tpu_host_AXIL_if

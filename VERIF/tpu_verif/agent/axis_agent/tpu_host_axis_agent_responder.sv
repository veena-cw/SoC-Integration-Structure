//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_axis_agent_responder
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Reactive AXI4 slave responder = external memory model: INCR bursts into a sparse
//               memory with configurable latency, error responses, RLAST errors and stalls.
//=================================================================================
// Reactive AXI4 slave = external memory model. Write and read channels run as independent processes;
// both restart when rst_n is asserted. Latency, error responses, RLAST errors and stalls come from
// tpu_host_axis_agent_cfg. A W beat the DUT never sends (it abandoned the burst after an error or
// timeout) is given up after abandon_cycles; a B / R beat the DUT never accepts stays valid until rst_n.
class tpu_host_axis_agent_responder extends uvm_driver #(tpu_host_axis_agent_seq_item);
  `uvm_component_utils(tpu_host_axis_agent_responder)

  virtual tpu_host_AXI_if vif;
  tpu_host_axis_agent_cfg cfg;
  int unsigned            abandon_cycles = 3000;

  function new(string name = "tpu_host_axis_agent_responder", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual tpu_host_AXI_if)::read_by_name(get_full_name(), "vif", vif, this))
      `uvm_fatal("NOVIF", $sformatf("[%s] Virtual interface not found in resource_db", get_full_name()))
    if (!uvm_resource_db#(tpu_host_axis_agent_cfg)::read_by_name(get_full_name(), "axi_mem_cfg", cfg, this))
      `uvm_fatal("NOCFG", $sformatf("[%s] axi_mem_cfg not found in resource_db", get_full_name()))
  endfunction

  task run_phase(uvm_phase phase);
    forever begin
      reset_idle();                           // time 0 and reset entry: VALIDs low at once (AXI A3.1.2)
      drive_idle();
      wait (vif.rst_n === 1'b1);
      fork
        write_channel();
        read_channel();
        wait (vif.rst_n !== 1'b1);
      join_any
      disable fork;
    end
  endtask

  task drive_idle();
    vif.slv_cb.s_axi_awready <= 1'b0;
    vif.slv_cb.s_axi_wready  <= 1'b0;
    vif.slv_cb.s_axi_bvalid  <= 1'b0;
    vif.slv_cb.s_axi_bresp   <= '0;
    vif.slv_cb.s_axi_bid     <= '0;
    vif.slv_cb.s_axi_arready <= 1'b0;
    vif.slv_cb.s_axi_rvalid  <= 1'b0;
    vif.slv_cb.s_axi_rdata   <= '0;
    vif.slv_cb.s_axi_rresp   <= '0;
    vif.slv_cb.s_axi_rlast   <= 1'b0;
    vif.slv_cb.s_axi_rid     <= '0;
  endtask

  // slave outputs low immediately, without waiting for a clk_axi edge
  task reset_idle();
    vif.s_axi_awready <= 1'b0;
    vif.s_axi_wready  <= 1'b0;
    vif.s_axi_bvalid  <= 1'b0;
    vif.s_axi_bresp   <= '0;
    vif.s_axi_bid     <= '0;
    vif.s_axi_arready <= 1'b0;
    vif.s_axi_rvalid  <= 1'b0;
    vif.s_axi_rdata   <= '0;
    vif.s_axi_rresp   <= '0;
    vif.s_axi_rlast   <= 1'b0;
    vif.s_axi_rid     <= '0;
  endtask

  // wait for a handshake (1 AW, 2 W, 3 B, 4 AR, 5 R): VALID and READY both sampled high at the same clk_axi
  // edge through mon_cb (the edge the DUT sees the transfer). ok = 0 when the DUT never completes it.
  // AWREADY / WREADY / ARREADY may be withdrawn, so those give up after abandon_cycles. BVALID / RVALID
  // must stay asserted until accepted (AXI A3.2.1): they are held until the handshake or rst_n.
  task wait_hs(int which, output bit ok);
    int unsigned n = 0;
    ok = 0;
    while (which inside {3, 5} || n < abandon_cycles) begin
      @(vif.mon_cb); n++;
      if (n == abandon_cycles && which inside {3, 5})
        `uvm_info("AXI_MEM", $sformatf("%s not accepted after %0d clk_axi cycles: held until the handshake or rst_n",
                                       (which == 3) ? "BVALID" : "RVALID", n), UVM_MEDIUM)
      case (which)
        1: ok = vif.mon_cb.s_axi_awvalid === 1'b1 && vif.mon_cb.s_axi_awready === 1'b1;
        2: ok = vif.mon_cb.s_axi_wvalid  === 1'b1 && vif.mon_cb.s_axi_wready  === 1'b1;
        3: ok = vif.mon_cb.s_axi_bvalid  === 1'b1 && vif.mon_cb.s_axi_bready  === 1'b1;
        4: ok = vif.mon_cb.s_axi_arvalid === 1'b1 && vif.mon_cb.s_axi_arready === 1'b1;
        5: ok = vif.mon_cb.s_axi_rvalid  === 1'b1 && vif.mon_cb.s_axi_rready  === 1'b1;
      endcase
      if (ok) return;
    end
  endtask

  function int unsigned stall(int unsigned ch);
    if (cfg.stall_channel == ch) begin
      stall = cfg.stall_cycles;
      cfg.stall_channel = 0;
    end else stall = 0;
  endfunction

  // ---------------- write: AW -> W beats -> B ----------------
  task write_channel();
    bit [31:0]           addr;
    int                  len;
    bit [S_AXI_ID_W-1:0] id;
    bit [1:0]            bresp;
    bit                  ok;
    forever begin
      do @(vif.slv_cb); while (vif.slv_cb.s_axi_awvalid !== 1'b1);
      repeat (cfg.pick(cfg.addr_ready_min, cfg.addr_ready_max) + stall(3)) @(vif.slv_cb);
      vif.slv_cb.s_axi_awready <= 1'b1;
      wait_hs(1, ok);
      vif.slv_cb.s_axi_awready <= 1'b0;
      if (!ok) continue;
      addr = vif.mon_cb.s_axi_awaddr; len = int'(vif.mon_cb.s_axi_awlen); id = vif.mon_cb.s_axi_awid;
      for (int b = 0; b <= len && ok; b++) begin
        repeat (cfg.pick(cfg.wready_min, cfg.wready_max) + (b == 0 ? stall(4) : 0)) @(vif.slv_cb);
        vif.slv_cb.s_axi_wready <= 1'b1;
        wait_hs(2, ok);
        vif.slv_cb.s_axi_wready <= 1'b0;
        if (!ok) `uvm_info("AXI_MEM", "write burst abandoned by the DUT", UVM_MEDIUM)
        else for (int k = 0; k < 16; k++)
          if (vif.mon_cb.s_axi_wstrb[k]) cfg.wr_byte(addr + 16 * b + k, vif.mon_cb.s_axi_wdata[8 * k +: 8]);
      end
      if (!ok) continue;
      bresp = RESP_OKAY;
      if (cfg.bresp_err_count > 0) begin bresp = cfg.bresp_err_code; cfg.bresp_err_count--; end
      repeat (cfg.pick(cfg.bvalid_min, cfg.bvalid_max) + stall(5)) @(vif.slv_cb);
      vif.slv_cb.s_axi_bvalid <= 1'b1;
      vif.slv_cb.s_axi_bresp  <= bresp;
      vif.slv_cb.s_axi_bid    <= id;
      wait_hs(3, ok);
      vif.slv_cb.s_axi_bvalid <= 1'b0;
    end
  endtask

  // ---------------- read: AR -> R beats ----------------
  task read_channel();
    bit [31:0]           addr;
    int                  len;
    bit [S_AXI_ID_W-1:0] id;
    bit [1:0]            rresp;
    bit [127:0]          d;
    int unsigned         mode, nbeats;
    bit                  ok;
    forever begin
      do @(vif.slv_cb); while (vif.slv_cb.s_axi_arvalid !== 1'b1);
      repeat (cfg.pick(cfg.addr_ready_min, cfg.addr_ready_max) + stall(1)) @(vif.slv_cb);
      vif.slv_cb.s_axi_arready <= 1'b1;
      wait_hs(4, ok);
      vif.slv_cb.s_axi_arready <= 1'b0;
      if (!ok) continue;
      addr = vif.mon_cb.s_axi_araddr; len = int'(vif.mon_cb.s_axi_arlen); id = vif.mon_cb.s_axi_arid;
      rresp = RESP_OKAY;
      if (cfg.rresp_err_count > 0) begin rresp = cfg.rresp_err_code; cfg.rresp_err_count--; end
      mode = cfg.rlast_mode; cfg.rlast_mode = 0;
      nbeats = (mode == 2) ? len + 2 : len + 1;
      for (int b = 0; b < nbeats; b++) begin
        repeat (cfg.pick(cfg.rvalid_min, cfg.rvalid_max) + (b == 0 ? stall(2) : 0)) @(vif.slv_cb);
        for (int k = 0; k < 16; k++) d[8 * k +: 8] = cfg.rd_byte(addr + 16 * b + k);
        vif.slv_cb.s_axi_rvalid <= 1'b1;
        vif.slv_cb.s_axi_rdata  <= d;
        vif.slv_cb.s_axi_rresp  <= rresp;
        vif.slv_cb.s_axi_rid    <= id;
        vif.slv_cb.s_axi_rlast  <= (mode == 1) ? (b == len - 1 || len == 0) : (b == nbeats - 1);
        wait_hs(5, ok);
        vif.slv_cb.s_axi_rvalid <= 1'b0;
        vif.slv_cb.s_axi_rlast  <= 1'b0;
        if (!ok) begin `uvm_info("AXI_MEM", "read burst abandoned by the DUT", UVM_MEDIUM) break; end
        if (mode == 1 && (b == len - 1 || len == 0)) break;
      end
    end
  endtask
endclass : tpu_host_axis_agent_responder

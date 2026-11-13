//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_axilm_agent_monitor
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: AXI4-Lite monitor of the CPU model agent: completed register writes / reads
//               to the analysis port.
//=================================================================================
// Rebuilds AXI4-Lite transactions from the handshakes (AW + W, completed by B; AR, completed by R)
// Queues are flushed while rst_n is low.
class tpu_host_axilm_agent_monitor extends uvm_monitor;
  `uvm_component_utils(tpu_host_axilm_agent_monitor)

  virtual tpu_host_AXIL_if vif;
  uvm_analysis_port #(tpu_host_axilm_agent_seq_item) ap;

  bit [M_AXIL_AWADDR_W-1:0] aw_q[$];
  bit [M_AXIL_ARADDR_W-1:0] ar_q[$];
  bit [31:0]                wd_q[$];
  bit [3:0]                 ws_q[$];

  function new(string name = "tpu_host_axilm_agent_monitor", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    ap = new("ap", this);
    if (!uvm_resource_db#(virtual tpu_host_AXIL_if)::read_by_name(get_full_name(), "vif", vif, this))
      `uvm_fatal("NOVIF", $sformatf("[%s] Virtual interface not found in resource_db", get_full_name()))
  endfunction

  task run_phase(uvm_phase phase);
    forever begin
      @(vif.mon_cb);
      if (vif.rst_n !== 1'b1) begin
        aw_q.delete(); ar_q.delete(); wd_q.delete(); ws_q.delete();
        continue;
      end
      if (vif.mon_cb.m_axil_awvalid && vif.mon_cb.m_axil_awready) aw_q.push_back(vif.mon_cb.m_axil_awaddr);
      if (vif.mon_cb.m_axil_wvalid  && vif.mon_cb.m_axil_wready) begin
        wd_q.push_back(vif.mon_cb.m_axil_wdata); ws_q.push_back(vif.mon_cb.m_axil_wstrb);
      end
      if (vif.mon_cb.m_axil_arvalid && vif.mon_cb.m_axil_arready) ar_q.push_back(vif.mon_cb.m_axil_araddr);
      if (vif.mon_cb.m_axil_bvalid && vif.mon_cb.m_axil_bready) begin
        tpu_host_axilm_agent_seq_item it;
        it = tpu_host_axilm_agent_seq_item::type_id::create("wr");
        it.op = AXIL_WRITE; it.resp = vif.mon_cb.m_axil_bresp; it.t_end = $time;
        if (aw_q.size() > 0 && wd_q.size() > 0) begin
          it.addr = aw_q.pop_front(); it.data = wd_q.pop_front(); it.strb = ws_q.pop_front();
        end else `uvm_error("AXIL_MON", "B handshake without a captured AW and W")
        ap.write(it);
      end
      if (vif.mon_cb.m_axil_rvalid && vif.mon_cb.m_axil_rready) begin
        tpu_host_axilm_agent_seq_item it;
        it = tpu_host_axilm_agent_seq_item::type_id::create("rd");
        it.op = AXIL_READ; it.rdata = vif.mon_cb.m_axil_rdata; it.resp = vif.mon_cb.m_axil_rresp; it.t_end = $time;
        if (ar_q.size() > 0) it.addr = ar_q.pop_front();
        else `uvm_error("AXIL_MON", "R handshake without a captured AR")
        ap.write(it);
      end
    end
  endtask
endclass : tpu_host_axilm_agent_monitor

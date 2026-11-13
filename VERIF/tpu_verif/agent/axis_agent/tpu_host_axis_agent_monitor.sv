//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_axis_agent_monitor
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: AXI4 monitor of the external memory model agent: complete write and read
//               bursts to the analysis port.
//=================================================================================
// Rebuilds AXI4 bursts from the handshakes: write = AW + W beats, completed by B; read = AR + R beats,
// completed by the beat with RLAST (or the expected beat count). Open bursts are flushed on reset.
class tpu_host_axis_agent_monitor extends uvm_monitor;
  `uvm_component_utils(tpu_host_axis_agent_monitor)

  virtual tpu_host_AXI_if vif;
  uvm_analysis_port #(tpu_host_axis_agent_seq_item) ap;

  tpu_host_axis_agent_seq_item wr_q[$], rd_q[$];

  function new(string name = "tpu_host_axis_agent_monitor", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    ap = new("ap", this);
    if (!uvm_resource_db#(virtual tpu_host_AXI_if)::read_by_name(get_full_name(), "vif", vif, this))
      `uvm_fatal("NOVIF", $sformatf("[%s] Virtual interface not found in resource_db", get_full_name()))
  endfunction

  task run_phase(uvm_phase phase);
    forever begin
      @(vif.mon_cb);
      if (vif.rst_n !== 1'b1) begin wr_q.delete(); rd_q.delete(); continue; end
      if (vif.mon_cb.s_axi_awvalid && vif.mon_cb.s_axi_awready) begin
        tpu_host_axis_agent_seq_item it;
        it = tpu_host_axis_agent_seq_item::type_id::create("aw");
        it.is_write = 1; it.id = vif.mon_cb.s_axi_awid; it.addr = vif.mon_cb.s_axi_awaddr; it.len = vif.mon_cb.s_axi_awlen;
        it.size = vif.mon_cb.s_axi_awsize; it.burst = vif.mon_cb.s_axi_awburst; it.cache = vif.mon_cb.s_axi_awcache;
        it.prot = vif.mon_cb.s_axi_awprot; it.t_addr = $time;
        wr_q.push_back(it);
      end
      if (vif.mon_cb.s_axi_wvalid && vif.mon_cb.s_axi_wready) begin
        if (wr_q.size() > 0) begin
          wr_q[0].data.push_back(vif.mon_cb.s_axi_wdata); wr_q[0].strb.push_back(vif.mon_cb.s_axi_wstrb);
          wr_q[0].last.push_back(vif.mon_cb.s_axi_wlast);
        end else `uvm_error("AXI_MON", "W beat before any AW")
      end
      if (vif.mon_cb.s_axi_bvalid && vif.mon_cb.s_axi_bready) begin
        if (wr_q.size() > 0) begin
          tpu_host_axis_agent_seq_item it;
          it = wr_q.pop_front();
          it.resp = vif.mon_cb.s_axi_bresp; it.t_end = $time;
          ap.write(it);
        end else `uvm_error("AXI_MON", "B handshake without an open write burst")
      end
      if (vif.mon_cb.s_axi_arvalid && vif.mon_cb.s_axi_arready) begin
        tpu_host_axis_agent_seq_item it;
        it = tpu_host_axis_agent_seq_item::type_id::create("ar");
        it.is_write = 0; it.id = vif.mon_cb.s_axi_arid; it.addr = vif.mon_cb.s_axi_araddr; it.len = vif.mon_cb.s_axi_arlen;
        it.size = vif.mon_cb.s_axi_arsize; it.burst = vif.mon_cb.s_axi_arburst; it.cache = vif.mon_cb.s_axi_arcache;
        it.prot = vif.mon_cb.s_axi_arprot; it.t_addr = $time;
        rd_q.push_back(it);
      end
      if (vif.mon_cb.s_axi_rvalid && vif.mon_cb.s_axi_rready && rd_q.size() > 0) begin
        rd_q[0].data.push_back(vif.mon_cb.s_axi_rdata); rd_q[0].last.push_back(vif.mon_cb.s_axi_rlast);
        if (vif.mon_cb.s_axi_rresp != RESP_OKAY) rd_q[0].resp = vif.mon_cb.s_axi_rresp;
        if (vif.mon_cb.s_axi_rlast || rd_q[0].data.size() == rd_q[0].beats()) begin
          tpu_host_axis_agent_seq_item it;
          it = rd_q.pop_front();
          it.t_end = $time;
          ap.write(it);
        end
      end
    end
  endtask
endclass : tpu_host_axis_agent_monitor

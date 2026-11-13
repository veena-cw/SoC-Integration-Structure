//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_irq_agent_monitor
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: IRQ agent monitor: samples irq on clk_axil and publishes every level change; gives the
//               virtual sequences a wait-for-level task (the agent never drives anything).
//=================================================================================
class tpu_host_irq_agent_monitor extends uvm_monitor;
  `uvm_component_utils(tpu_host_irq_agent_monitor)

  virtual tpu_host_irq_if vif;
  uvm_analysis_port #(tpu_host_irq_agent_seq_item) ap;
  int unsigned n_rise, n_fall;

  function new(string name = "tpu_host_irq_agent_monitor", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    ap = new("ap", this);
    if (!uvm_resource_db#(virtual tpu_host_irq_if)::read_by_name(get_full_name(), "vif", vif, this))
      `uvm_fatal("NOVIF", $sformatf("[%s] Virtual interface not found in resource_db", get_full_name()))
  endfunction

  // irq is 0 in reset; a change is published once the sampled level is known and differs from the last one
  task run_phase(uvm_phase phase);
    bit irq_q;
    irq_q = 1'b0;
    forever begin
      @(vif.mon_cb);
      if (vif.rst_n !== 1'b1) begin irq_q = 1'b0; continue; end
      if (vif.mon_cb.irq !== irq_q && !$isunknown(vif.mon_cb.irq)) begin
        tpu_host_irq_agent_seq_item it;
        it = tpu_host_irq_agent_seq_item::type_id::create("irq");
        it.irq_level = vif.mon_cb.irq; it.t_event = $time;
        irq_q = vif.mon_cb.irq;
        if (irq_q) n_rise++; else n_fall++;
        `uvm_info(get_type_name(), it.convert2string(), UVM_HIGH)
        ap.write(it);
      end
    end
  endtask

  // wait until irq == level, at most timeout_cycles clk_axil cycles (timed_out = 1 when it never came)
  task wait_level(bit level, int unsigned timeout_cycles, output bit timed_out);
    int unsigned n = 0;
    timed_out = 0;
    while (vif.mon_cb.irq !== level) begin
      @(vif.mon_cb);
      if (++n >= timeout_cycles) begin timed_out = 1; break; end
    end
  endtask

  function void report_phase(uvm_phase phase);
    super.report_phase(phase);
    `uvm_info(get_type_name(), $sformatf("irq rises %0d falls %0d", n_rise, n_fall), UVM_LOW)
  endfunction
endclass : tpu_host_irq_agent_monitor

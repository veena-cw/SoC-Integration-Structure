//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_irq_agent
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: IRQ agent of tpu_host_top: passive, monitor only (irq is a DUT output).
//=================================================================================
class tpu_host_irq_agent extends uvm_agent;
  `uvm_component_utils(tpu_host_irq_agent)

  tpu_host_irq_agent_monitor monitor;
  virtual tpu_host_irq_if    vif;

  function new(string name = "tpu_host_irq_agent", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    uvm_active_passive_enum mode;
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual tpu_host_irq_if)::read_by_name(get_full_name(), "vif", vif, this))
      `uvm_fatal("NOVIF", $sformatf("[%s] Virtual interface not found in resource_db", get_full_name()))
    if (uvm_resource_db#(uvm_active_passive_enum)::read_by_name(get_full_name(), "is_active", mode, this) && mode == UVM_ACTIVE)
      `uvm_warning("IRQ_MODE", $sformatf("[%s] is_active = UVM_ACTIVE ignored: the IRQ agent is always passive", get_full_name()))
    is_active = UVM_PASSIVE;
    uvm_resource_db#(virtual tpu_host_irq_if)::set({get_full_name(), ".*"}, "vif", vif, this);
    monitor = tpu_host_irq_agent_monitor::type_id::create("monitor", this);
  endfunction
endclass : tpu_host_irq_agent

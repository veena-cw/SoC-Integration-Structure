//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_axis_agent
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: External memory model agent (AXI4 slave) of tpu_host_top.
//=================================================================================
// External memory model agent (AXI4 slave): sequencer, responder, monitor. Active = reactive responder driven by tpu_host_axis_agent_cfg.
class tpu_host_axis_agent extends uvm_agent;
  `uvm_component_utils(tpu_host_axis_agent)

  tpu_host_axis_agent_responder responder;
  tpu_host_axis_agent_sequencer sequencer;
  tpu_host_axis_agent_monitor   monitor;
  virtual tpu_host_AXI_if       vif;

  function new(string name = "tpu_host_axis_agent", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    uvm_active_passive_enum mode;
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual tpu_host_AXI_if)::read_by_name(get_full_name(), "vif", vif, this))
      `uvm_fatal("NOVIF", $sformatf("[%s] Virtual interface not found in resource_db", get_full_name()))
    if (!uvm_resource_db#(uvm_active_passive_enum)::read_by_name(get_full_name(), "is_active", mode, this)) begin
      `uvm_warning("NOMODE", $sformatf("[%s] No is_active resource found from test -- defaulting to UVM_ACTIVE", get_full_name()))
      mode = UVM_ACTIVE;
    end
    is_active = mode;
    uvm_resource_db#(virtual tpu_host_AXI_if)::set({get_full_name(), ".*"}, "vif", vif, this);
    monitor = tpu_host_axis_agent_monitor::type_id::create("monitor", this);
    if (is_active == UVM_ACTIVE) begin
      responder = tpu_host_axis_agent_responder::type_id::create("responder", this);
      sequencer = tpu_host_axis_agent_sequencer::type_id::create("sequencer", this);
    end
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    if (is_active == UVM_ACTIVE) responder.seq_item_port.connect(sequencer.seq_item_export);
  endfunction
endclass : tpu_host_axis_agent

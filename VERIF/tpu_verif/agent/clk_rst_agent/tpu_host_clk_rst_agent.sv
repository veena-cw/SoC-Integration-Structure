//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_clk_rst_agent
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Clock & reset agent: fixed-ratio clocks and rst_n. Sequencer + driver when active,
//               monitor always.
//=================================================================================
class tpu_host_clk_rst_agent extends uvm_agent;
  `uvm_component_utils(tpu_host_clk_rst_agent)

  tpu_host_clk_rst_agent_sequencer sequencer;
  tpu_host_clk_rst_agent_driver    driver;
  tpu_host_clk_rst_agent_monitor   monitor;
  virtual clk_rst_if               vif;

  function new(string name = "tpu_host_clk_rst_agent", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    uvm_active_passive_enum mode;
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual clk_rst_if)::read_by_name(get_full_name(), "vif", vif, this))
      `uvm_fatal("NOVIF", $sformatf("[%s] Virtual interface not found in resource_db", get_full_name()))
    if (!uvm_resource_db#(uvm_active_passive_enum)::read_by_name(get_full_name(), "is_active", mode, this)) begin
      `uvm_warning("NOMODE", $sformatf("[%s] No is_active resource found from test -- defaulting to UVM_ACTIVE", get_full_name()))
      mode = UVM_ACTIVE;
    end
    is_active = mode;
    uvm_resource_db#(virtual clk_rst_if)::set({get_full_name(), ".*"}, "vif", vif, this);
    monitor = tpu_host_clk_rst_agent_monitor::type_id::create("monitor", this);
    if (is_active == UVM_ACTIVE) begin
      sequencer = tpu_host_clk_rst_agent_sequencer::type_id::create("sequencer", this);
      driver    = tpu_host_clk_rst_agent_driver::type_id::create("driver", this);
    end
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    if (is_active == UVM_ACTIVE) driver.seq_item_port.connect(sequencer.seq_item_export);
  endfunction
endclass : tpu_host_clk_rst_agent

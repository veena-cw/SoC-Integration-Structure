//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : reset_agent
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Reset active agent: sequencer + driver + monitor
//=================================================================================

class reset_agent extends uvm_agent;

  `uvm_component_utils(reset_agent)

  reset_agent_config cfg;
  reset_sequencer    sequencer;
  reset_driver       driver;
  reset_monitor      monitor;

  function new(string name = "reset_agent", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(reset_agent_config)::read_by_name(get_full_name(), "reset_agent_config", cfg))
      `uvm_fatal("NOCFG", "reset_agent_config not found in uvm_resource_db")
    is_active = cfg.is_active;
    monitor = reset_monitor::type_id::create("monitor", this);
    if (get_is_active() == UVM_ACTIVE) begin
      sequencer = reset_sequencer::type_id::create("sequencer", this);
      driver    = reset_driver::type_id::create("driver", this);
    end
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    if (get_is_active() == UVM_ACTIVE)
      driver.seq_item_port.connect(sequencer.seq_item_export);
  endfunction

endclass

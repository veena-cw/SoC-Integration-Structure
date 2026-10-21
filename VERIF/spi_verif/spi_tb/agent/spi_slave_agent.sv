//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : spi_slave_agent
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: SPI slave passive agent: monitor only (the slave is inside the DUT)
//=================================================================================

class spi_slave_agent extends uvm_agent;

  `uvm_component_utils(spi_slave_agent)

  spi_slave_agent_config cfg;
  spi_slave_monitor      monitor;

  function new(string name = "spi_slave_agent", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(spi_slave_agent_config)::read_by_name(get_full_name(), "spi_slave_agent_config", cfg))
      `uvm_fatal("NOCFG", "spi_slave_agent_config not found in uvm_resource_db")
    if (cfg.is_active == UVM_ACTIVE)
      `uvm_warning("CFG", "spi_slave_agent is passive-only (no driver/sequencer exist); forcing UVM_PASSIVE")
    is_active = UVM_PASSIVE;
    monitor = spi_slave_monitor::type_id::create("monitor", this);
  endfunction

endclass

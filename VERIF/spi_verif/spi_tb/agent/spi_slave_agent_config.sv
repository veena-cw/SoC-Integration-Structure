//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : spi_slave_agent_config
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: SPI slave (passive) agent configuration: active/passive mode and coverage enable only
//=================================================================================

class spi_slave_agent_config extends uvm_object;

  uvm_active_passive_enum is_active        = UVM_PASSIVE;   // slave side lives inside the DUT: passive only
  cov_mode_e              coverage_enable  = COV_ENABLE;

  `uvm_object_utils(spi_slave_agent_config)

  function new(string name = "spi_slave_agent_config");
    super.new(name);
  endfunction

endclass

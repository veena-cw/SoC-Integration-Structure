//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : spi_master_agent_config
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: SPI master (passive) agent configuration: active/passive mode and coverage enable only
//=================================================================================

import apb_spi_types_pkg::*;

class spi_master_agent_config extends uvm_object;

  uvm_active_passive_enum is_active        = UVM_PASSIVE;   // master side lives inside the DUT: passive only
  cov_mode_e              coverage_enable  = COV_ENABLE;

  `uvm_object_utils(spi_master_agent_config)

  function new(string name = "spi_master_agent_config");
    super.new(name);
  endfunction

endclass

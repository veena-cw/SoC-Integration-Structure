//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_agent_config
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: APB agent configuration: active/passive mode and coverage enable only
//=================================================================================

class apb_agent_config extends uvm_object;

  uvm_active_passive_enum is_active        = UVM_ACTIVE;
  cov_mode_e              coverage_enable  = COV_ENABLE;

  `uvm_object_utils(apb_agent_config)

  function new(string name = "apb_agent_config");
    super.new(name);
  endfunction

endclass

//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_virtual_sequencer
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequencer: handles to the APB and reset agent sequencers
//=================================================================================

class apb_spi_virtual_sequencer extends uvm_sequencer;

  `uvm_component_utils(apb_spi_virtual_sequencer)

  apb_sequencer   apb_sqr;
  reset_sequencer rst_sqr;
  apb_spi_ral_block ral_model;   // register model (for RAL virtual sequences)

  function new(string name = "apb_spi_virtual_sequencer", uvm_component parent = null);
    super.new(name, parent);
  endfunction

endclass

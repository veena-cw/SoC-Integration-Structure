//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_apb_read_sequence
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: APB single read sequence (result in rdata)
//=================================================================================

class apb_spi_apb_read_sequence extends apb_spi_base_sequence;

  `uvm_object_utils(apb_spi_apb_read_sequence)

  bit [31:0] addr;

  function new(string name = "apb_spi_apb_read_sequence");
    super.new(name);
  endfunction

  task body();
    do_read(addr);
  endtask

endclass

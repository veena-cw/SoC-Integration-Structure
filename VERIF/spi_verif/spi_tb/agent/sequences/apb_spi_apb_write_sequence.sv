//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_apb_write_sequence
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: APB single write sequence
//=================================================================================

class apb_spi_apb_write_sequence extends apb_spi_base_sequence;

  `uvm_object_utils(apb_spi_apb_write_sequence)

  bit [31:0] addr;
  bit [31:0] data;
  bit [3:0]  strb = 4'hF;

  function new(string name = "apb_spi_apb_write_sequence");
    super.new(name);
  endfunction

  task body();
    do_write(addr, data, strb);
  endtask

endclass

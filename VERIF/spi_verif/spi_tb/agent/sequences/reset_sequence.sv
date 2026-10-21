//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : reset_sequence
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Reset sequence: one reset pulse with programmable delay and width
//=================================================================================

class reset_sequence extends uvm_sequence #(reset_seq_item);

  `uvm_object_utils(reset_sequence)

  int unsigned delay_cycles  = 0;
  int unsigned pulse_cycles  = 4;
  int unsigned assert_offset = 1;

  function new(string name = "reset_sequence");
    super.new(name);
  endfunction

  task body();
    reset_seq_item tr;
    tr = reset_seq_item::type_id::create("tr");
    start_item(tr);
    tr.delay_cycles  = delay_cycles;
    tr.pulse_cycles  = pulse_cycles;
    tr.assert_offset = assert_offset;
    finish_item(tr);
  endtask

endclass

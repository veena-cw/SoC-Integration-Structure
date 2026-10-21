//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : reset_seq_item
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Reset transaction: when to assert, how long to hold; also used by the monitor to report assert/deassert events
//=================================================================================

class reset_seq_item extends uvm_sequence_item;

  rand int unsigned delay_cycles;    // PCLK cycles to wait before asserting
  rand int unsigned pulse_cycles;    // minimum PCLK cycles reset stays asserted
  rand int unsigned assert_offset;   // ns after a PCLK edge at which reset is asserted (asynchronous)

  // filled by the monitor
  bit               is_assert;       // 1 = assertion event, 0 = de-assertion event
  int unsigned      width_cycles;    // on de-assert: number of PCLK cycles reset was low
  time              t_event;

  constraint c_defaults {
    delay_cycles  inside {[0:20]};
    pulse_cycles  inside {[2:16]};
    assert_offset inside {[1:5]};
  }

  `uvm_object_utils(reset_seq_item)

  function new(string name = "reset_seq_item");
    super.new(name);
    delay_cycles  = 0;
    pulse_cycles  = 4;
    assert_offset = 1;
  endfunction

  function string convert2string();
    return $sformatf("delay=%0d pulse=%0d offset=%0dns is_assert=%0b width=%0d",
                     delay_cycles, pulse_cycles, assert_offset, is_assert, width_cycles);
  endfunction

endclass

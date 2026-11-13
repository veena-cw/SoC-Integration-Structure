//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_clk_rst_agent_seq_item
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Clock & reset agent item: one rst_n pulse (driver) or one rst_n edge (monitor).
//=================================================================================
// delay is a plain time, not a number of clock cycles, so rst_n can be asserted at any point of any of
// the three clocks (rst_n is asynchronous to all of them).
class tpu_host_clk_rst_agent_seq_item extends uvm_sequence_item;
  `uvm_object_utils(tpu_host_clk_rst_agent_seq_item)

  rand time delay;         // driver: wait before asserting rst_n
  rand time pulse_width;   // driver: rst_n low time (0 = default of the driver)
  bit       asserted;      // monitor: 1 = rst_n fell, 0 = rst_n rose
  time      t_event;       // monitor: time of the edge

  constraint c_delay { delay inside {[0:1000]}; }
  constraint c_width { pulse_width inside {[20:1000]}; }

  function new(string name = "tpu_host_clk_rst_agent_seq_item");
    super.new(name);
  endfunction

  function string convert2string();
    return $sformatf("reset delay=%0t width=%0t asserted=%0b @%0t", delay, pulse_width, asserted, t_event);
  endfunction

  function void do_copy(uvm_object rhs);
    tpu_host_clk_rst_agent_seq_item r;
    super.do_copy(rhs);
    if (!$cast(r, rhs)) return;
    delay = r.delay; pulse_width = r.pulse_width; asserted = r.asserted; t_event = r.t_event;
  endfunction
endclass : tpu_host_clk_rst_agent_seq_item

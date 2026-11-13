//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_clk_rst_agent_random_seq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Clock & reset agent sequence: one rst_n pulse after a random delay (rst_n at any time).
//=================================================================================
// One rst_n pulse after a random delay in [min_delay, max_delay] with a random width in [min_width, max_width]
// (plain times, so the edges land at any phase of the three clocks).
class tpu_host_clk_rst_agent_random_seq extends uvm_sequence #(tpu_host_clk_rst_agent_seq_item);
  `uvm_object_utils(tpu_host_clk_rst_agent_random_seq)
  time min_delay = 0,  max_delay = 1000;
  time min_width = 20, max_width = 1000;
  function new(string name = "tpu_host_clk_rst_agent_random_seq");
    super.new(name);
  endfunction
  task body();
    tpu_host_clk_rst_agent_seq_item tr;
    int ok;
    tr = tpu_host_clk_rst_agent_seq_item::type_id::create("tr");
    start_item(tr);
    tr.c_delay.constraint_mode(0);
    tr.c_width.constraint_mode(0);
    ok = tr.randomize() with { delay inside {[min_delay:max_delay]}; pulse_width inside {[min_width:max_width]}; };
    if (ok == 0) `uvm_error("RANDFAIL", "reset item randomization failed")
    finish_item(tr);
  endtask
endclass : tpu_host_clk_rst_agent_random_seq

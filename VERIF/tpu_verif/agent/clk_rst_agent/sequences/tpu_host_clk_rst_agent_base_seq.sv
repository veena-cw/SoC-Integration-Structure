//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_clk_rst_agent_base_seq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Clock & reset agent base sequence: one rst_n pulse now.
//=================================================================================
// One rst_n pulse: low for pulse_width, then released.
class tpu_host_clk_rst_agent_base_seq extends uvm_sequence #(tpu_host_clk_rst_agent_seq_item);
  `uvm_object_utils(tpu_host_clk_rst_agent_base_seq)
  time pulse_width = 200;
  function new(string name = "tpu_host_clk_rst_agent_base_seq");
    super.new(name);
  endfunction
  task body();
    tpu_host_clk_rst_agent_seq_item tr;
    tr = tpu_host_clk_rst_agent_seq_item::type_id::create("tr");
    start_item(tr);
    tr.delay = 0;
    tr.pulse_width = pulse_width;
    finish_item(tr);
  endtask
endclass : tpu_host_clk_rst_agent_base_seq

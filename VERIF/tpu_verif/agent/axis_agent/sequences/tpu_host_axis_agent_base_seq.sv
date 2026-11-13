//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_axis_agent_base_seq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Base sequence of the external memory model agent: preloads words into the
//               memory model.
//=================================================================================
// The memory model is reactive (tpu_host_axis_agent_cfg controls it); this sequence only preloads memory.
class tpu_host_axis_agent_base_seq extends uvm_sequence #(tpu_host_axis_agent_seq_item);
  `uvm_object_utils(tpu_host_axis_agent_base_seq)
  bit [31:0] addr;
  bit [15:0] words[$];
  function new(string name = "tpu_host_axis_agent_base_seq");
    super.new(name);
  endfunction
  task body();
    tpu_host_axis_agent_cfg cfg;
    if (!uvm_resource_db#(tpu_host_axis_agent_cfg)::read_by_name(get_full_name(), "axi_mem_cfg", cfg, this))
      `uvm_fatal("NOCFG", "axi_mem_cfg not found in resource_db")
    cfg.wr_words(addr, words);
  endtask
endclass : tpu_host_axis_agent_base_seq

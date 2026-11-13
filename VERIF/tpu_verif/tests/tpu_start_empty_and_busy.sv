//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_start_empty_and_busy
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: START on an empty queue and START while busy.
//=================================================================================
// Test: runs tpu_start_empty_and_busy_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_start_empty_and_busy extends tpu_base_test;
  `uvm_component_utils(tpu_start_empty_and_busy)

  function new(string name = "tpu_start_empty_and_busy", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_start_empty_and_busy_vseq v;
    v = tpu_start_empty_and_busy_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_start_empty_and_busy

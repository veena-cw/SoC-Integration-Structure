//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_queue_full_overflow
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Command queue depth and overflow.
//=================================================================================
// Test: runs tpu_queue_full_overflow_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_queue_full_overflow extends tpu_base_test;
  `uvm_component_utils(tpu_queue_full_overflow)

  function new(string name = "tpu_queue_full_overflow", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_queue_full_overflow_vseq v;
    v = tpu_queue_full_overflow_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_queue_full_overflow

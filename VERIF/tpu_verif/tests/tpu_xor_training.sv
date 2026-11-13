//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_xor_training
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Full XOR network training end to end.
//=================================================================================
// Test: runs tpu_xor_training_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_xor_training extends tpu_base_test;
  `uvm_component_utils(tpu_xor_training)

  function new(string name = "tpu_xor_training", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_xor_training_vseq v;
    v = tpu_xor_training_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_xor_training

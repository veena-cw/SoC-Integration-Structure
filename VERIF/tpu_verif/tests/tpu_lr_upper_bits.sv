//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_lr_upper_bits
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: LEARNING_RATE[31:16] is stored but not used: a weight update with junk in the
//               upper half uses only bits [15:0].
//=================================================================================
// Test: runs tpu_lr_upper_bits_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_lr_upper_bits extends tpu_base_test;
  `uvm_component_utils(tpu_lr_upper_bits)

  function new(string name = "tpu_lr_upper_bits", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_lr_upper_bits_vseq v;
    v = tpu_lr_upper_bits_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_lr_upper_bits

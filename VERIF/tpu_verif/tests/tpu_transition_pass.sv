//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_transition_pass
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Transition pass: forward to loss gradient.
//=================================================================================
// Test: runs tpu_transition_pass_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_transition_pass extends tpu_base_test;
  `uvm_component_utils(tpu_transition_pass)

  function new(string name = "tpu_transition_pass", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_transition_pass_vseq v;
    v = tpu_transition_pass_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_transition_pass

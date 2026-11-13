//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_gradient_descent
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Weight and bias update in the UB.
//=================================================================================
// Test: runs tpu_gradient_descent_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_gradient_descent extends tpu_base_test;
  `uvm_component_utils(tpu_gradient_descent)

  function new(string name = "tpu_gradient_descent", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_gradient_descent_vseq v;
    v = tpu_gradient_descent_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_gradient_descent

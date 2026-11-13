//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_e2e_matmul
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: C = A x B end to end (reference diagram flow).
//=================================================================================
// Test: runs tpu_e2e_matmul_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_e2e_matmul extends tpu_base_test;
  `uvm_component_utils(tpu_e2e_matmul)

  function new(string name = "tpu_e2e_matmul", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_e2e_matmul_vseq v;
    v = tpu_e2e_matmul_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_e2e_matmul

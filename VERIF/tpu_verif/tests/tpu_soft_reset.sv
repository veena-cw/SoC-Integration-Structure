//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_soft_reset
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: SOFT_RESET resets the datapath but keeps CSRs.
//=================================================================================
// Test: runs tpu_soft_reset_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_soft_reset extends tpu_base_test;
  `uvm_component_utils(tpu_soft_reset)

  function new(string name = "tpu_soft_reset", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_soft_reset_vseq v;
    v = tpu_soft_reset_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_soft_reset

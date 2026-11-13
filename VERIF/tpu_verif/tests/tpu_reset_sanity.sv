//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_reset_sanity
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: All ports and CSRs come out of reset at their defined values.
//=================================================================================
// Test: runs tpu_reset_sanity_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_reset_sanity extends tpu_base_test;
  `uvm_component_utils(tpu_reset_sanity)

  function new(string name = "tpu_reset_sanity", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_reset_sanity_vseq v;
    v = tpu_reset_sanity_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_reset_sanity

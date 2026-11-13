//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_nop_latch_levels
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: NOP entries and held VPU levels.
//=================================================================================
// Test: runs tpu_nop_latch_levels_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_nop_latch_levels extends tpu_base_test;
  `uvm_component_utils(tpu_nop_latch_levels)

  function new(string name = "tpu_nop_latch_levels", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_nop_latch_levels_vseq v;
    v = tpu_nop_latch_levels_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_nop_latch_levels

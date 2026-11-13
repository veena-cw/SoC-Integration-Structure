//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_random_reset
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Random reset: rst_n or SOFT_RESET at a random time during a random workload (DMA
//               load, store or matrix multiply with slow memory); afterwards a fresh matrix
//               multiply must give the model result.
//=================================================================================
// Test: runs tpu_random_reset_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_random_reset extends tpu_base_test;
  `uvm_component_utils(tpu_random_reset)

  function new(string name = "tpu_random_reset", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_random_reset_vseq v;
    v = tpu_random_reset_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_random_reset

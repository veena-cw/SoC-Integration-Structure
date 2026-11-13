//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_random_error_injection
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Random negative test: each iteration injects one randomly chosen error (AXI
//               response, RLAST, handshake stall, DMA parameter, UB overflow, queue overflow, bad
//               register access, START while busy, VPU timeout) with random parameters, checks the
//               exact ERROR_CODE and then checks recovery with a random DMA loopback.
//=================================================================================
// Test: runs tpu_random_error_injection_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_random_error_injection extends tpu_base_test;
  `uvm_component_utils(tpu_random_error_injection)

  function new(string name = "tpu_random_error_injection", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_random_error_injection_vseq v;
    v = tpu_random_error_injection_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_random_error_injection

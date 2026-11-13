//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_control_reg
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: CONTROL register behaviour: read-back, reserved bits, SOFT_RESET suppressing START
//               and DMA enqueue, CLEAR.
//=================================================================================
// Test: runs tpu_control_reg_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_control_reg extends tpu_base_test;
  `uvm_component_utils(tpu_control_reg)

  function new(string name = "tpu_control_reg", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_control_reg_vseq v;
    v = tpu_control_reg_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_control_reg

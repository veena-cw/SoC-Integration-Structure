//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_wait_modes
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: All four wait modes hold the next entry correctly.
//=================================================================================
// Test: runs tpu_wait_modes_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_wait_modes extends tpu_base_test;
  `uvm_component_utils(tpu_wait_modes)

  function new(string name = "tpu_wait_modes", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_wait_modes_vseq v;
    v = tpu_wait_modes_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_wait_modes

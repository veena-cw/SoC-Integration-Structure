//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_wait_mode_columns
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Wait modes WM_VPU1 and WM_VPU_ANY with one and two output columns (VPU lane 2 idle
//               when N = 1).
//=================================================================================
// Test: runs tpu_wait_mode_columns_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_wait_mode_columns extends tpu_base_test;
  `uvm_component_utils(tpu_wait_mode_columns)

  function new(string name = "tpu_wait_mode_columns", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_wait_mode_columns_vseq v;
    v = tpu_wait_mode_columns_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_wait_mode_columns

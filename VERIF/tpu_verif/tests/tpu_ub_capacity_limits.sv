//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_ub_capacity_limits
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: UB capacity behaviour (documents the RTL limitation).
//=================================================================================
// Test: runs tpu_ub_capacity_limits_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_ub_capacity_limits extends tpu_base_test;
  `uvm_component_utils(tpu_ub_capacity_limits)

  function new(string name = "tpu_ub_capacity_limits", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_ub_capacity_limits_vseq v;
    v = tpu_ub_capacity_limits_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_ub_capacity_limits

//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_error_accumulate
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: ERROR_CODE bits are sticky and ORed: queue overflow (non-fatal) then a misaligned
//               DMA give 0x41; the error irq follows ERROR; CLEAR clears all.
//=================================================================================
// Test: runs tpu_error_accumulate_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_error_accumulate extends tpu_base_test;
  `uvm_component_utils(tpu_error_accumulate)

  function new(string name = "tpu_error_accumulate", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_error_accumulate_vseq v;
    v = tpu_error_accumulate_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_error_accumulate

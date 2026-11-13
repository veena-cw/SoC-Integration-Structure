//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_csr_read_after_write
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: A read returns state that includes every earlier write.
//=================================================================================
// Test: runs tpu_csr_read_after_write_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_csr_read_after_write extends tpu_base_test;
  `uvm_component_utils(tpu_csr_read_after_write)

  function new(string name = "tpu_csr_read_after_write", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_csr_read_after_write_vseq v;
    v = tpu_csr_read_after_write_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_csr_read_after_write

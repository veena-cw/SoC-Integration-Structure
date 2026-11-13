//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_csr_rw
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Read / write of every RW CSR with byte strobes.
//=================================================================================
// Test: runs tpu_csr_rw_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_csr_rw extends tpu_base_test;
  `uvm_component_utils(tpu_csr_rw)

  function new(string name = "tpu_csr_rw", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_csr_rw_vseq v;
    v = tpu_csr_rw_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_csr_rw

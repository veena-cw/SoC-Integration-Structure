//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_random_csr
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Random register traffic: random RW registers, data, WSTRB, AW/W order,
//               BREADY/RREADY delay and AxPROT, mixed with reads of every register, writes to
//               read-only registers and unmapped / misaligned accesses; responses and read-back
//               data are checked by the scoreboard, ERROR_CODE at the end.
//=================================================================================
// Test: runs tpu_random_csr_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_random_csr extends tpu_base_test;
  `uvm_component_utils(tpu_random_csr)

  function new(string name = "tpu_random_csr", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_random_csr_vseq v;
    v = tpu_random_csr_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_random_csr

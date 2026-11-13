//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_instr4_strobe_push
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Every INSTR4 write pushes an entry built from the merged INSTR4 value, whatever
//               the WSTRB (including none).
//=================================================================================
// Test: runs tpu_instr4_strobe_push_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_instr4_strobe_push extends tpu_base_test;
  `uvm_component_utils(tpu_instr4_strobe_push)

  function new(string name = "tpu_instr4_strobe_push", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_instr4_strobe_push_vseq v;
    v = tpu_instr4_strobe_push_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_instr4_strobe_push

//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_queue_push_while_running
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Entries pushed while the scheduler is busy (NOPs and a DMA loopback) are executed
//               in the same run.
//=================================================================================
// Test: runs tpu_queue_push_while_running_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_queue_push_while_running extends tpu_base_test;
  `uvm_component_utils(tpu_queue_push_while_running)

  function new(string name = "tpu_queue_push_while_running", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_queue_push_while_running_vseq v;
    v = tpu_queue_push_while_running_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_queue_push_while_running

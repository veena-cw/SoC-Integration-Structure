//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_axilm_agent_base_seq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Base sequence of the CPU model agent: one register access or idle.
//=================================================================================
// Single-access sequences used by the register / command API (env/sequences/tpu_host_base_vseq.sv).
class tpu_host_axilm_agent_base_seq extends uvm_sequence #(tpu_host_axilm_agent_seq_item);
  `uvm_object_utils(tpu_host_axilm_agent_base_seq)

  rand axil_op_e         op;
  rand bit [7:0]         addr;
  rand bit [31:0]        data;
  rand bit [3:0]         strb;
  rand int unsigned      idle_cycles;
  // channel timing / attributes: -1 = random within the item's constraints
  int                    aw_delay = -1, w_delay = -1, ready_delay = -1;
  int                    prot = -1;
  tpu_host_axilm_agent_seq_item rsp_item;     // response from the driver after body()

  constraint c_default { soft strb == 4'hF; soft idle_cycles == 1; }

  function new(string name = "tpu_host_axilm_agent_base_seq");
    super.new(name);
  endfunction

  task body();
    tpu_host_axilm_agent_seq_item it;
    int ok;
    it = tpu_host_axilm_agent_seq_item::type_id::create("item");
    start_item(it);
    ok = it.randomize() with { op == local::op; addr == local::addr; data == local::data; strb == local::strb;
                                     idle_cycles == local::idle_cycles;
                                     if (local::aw_delay >= 0)    aw_delay    == local::aw_delay;
                                     if (local::w_delay >= 0)     w_delay     == local::w_delay;
                                     if (local::ready_delay >= 0) ready_delay == local::ready_delay;
                                     if (local::prot >= 0)        prot        == 3'(local::prot); };
    if (ok == 0) `uvm_error("RANDFAIL", "AXI4-Lite item randomization failed")
    finish_item(it);
    get_response(rsp);
    rsp_item = rsp;
  endtask
endclass : tpu_host_axilm_agent_base_seq

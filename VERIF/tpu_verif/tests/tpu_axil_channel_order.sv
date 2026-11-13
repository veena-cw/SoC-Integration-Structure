//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_axil_channel_order
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: AXI4-Lite channel ordering and back-pressure: AW before W, W before AW, both
//               together, delayed BREADY / RREADY, any AxPROT.
//=================================================================================
// Test: runs tpu_axil_channel_order_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_axil_channel_order extends tpu_base_test;
  `uvm_component_utils(tpu_axil_channel_order)

  function new(string name = "tpu_axil_channel_order", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_axil_channel_order_vseq v;
    v = tpu_axil_channel_order_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_axil_channel_order

//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_dma_store
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: DMA_STORE from the UB to external memory.
//=================================================================================
// Test: runs tpu_dma_store_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_dma_store extends tpu_base_test;
  `uvm_component_utils(tpu_dma_store)

  function new(string name = "tpu_dma_store", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_dma_store_vseq v;
    v = tpu_dma_store_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_dma_store

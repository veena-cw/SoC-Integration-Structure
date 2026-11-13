//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_dma_store_ub_offset
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: DMA_STORE from odd and unaligned UB_ADDR values, up to the last UB word.
//=================================================================================
// Test: runs tpu_dma_store_ub_offset_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_dma_store_ub_offset extends tpu_base_test;
  `uvm_component_utils(tpu_dma_store_ub_offset)

  function new(string name = "tpu_dma_store_ub_offset", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_dma_store_ub_offset_vseq v;
    v = tpu_dma_store_ub_offset_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_dma_store_ub_offset

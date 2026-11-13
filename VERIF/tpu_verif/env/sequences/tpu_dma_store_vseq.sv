//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_dma_store_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_dma_store: DMA_STORE from the UB to external memory.
//               Reuses tpu_dma_load_vseq (its file is included first).
//=================================================================================
class tpu_dma_store_vseq extends tpu_dma_load_vseq;
  `uvm_object_utils(tpu_dma_store_vseq)
  function new(string name = "tpu_dma_store_vseq"); super.new(name); lens = '{3, 15, 32, 100}; endfunction
endclass

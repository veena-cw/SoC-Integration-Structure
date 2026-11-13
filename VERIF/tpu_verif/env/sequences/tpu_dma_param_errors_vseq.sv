//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_dma_param_errors_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_dma_param_errors: DMA parameter errors are rejected
//               before any bus traffic.
//=================================================================================
class tpu_dma_param_errors_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_dma_param_errors_vseq)
  function new(string name = "tpu_dma_param_errors_vseq"); super.new(name); endfunction
  task body();
    int n0;
    n0 = p_sequencer.scb.n_bursts_rd + p_sequencer.scb.n_bursts_wr;
    dma_load(32'h0000_1004, 8);       run_expect_error("load misaligned", ERR_ALIGN);   clear();
    dma_store(32'h0000_2008, 0, 8);   run_expect_error("store misaligned", ERR_ALIGN);  clear();
    dma_load(32'h0000_3000, 129);     run_expect_error("load UB overflow", ERR_UB_OVF); clear();
    dma_store(32'h0000_4000, 120, 9); run_expect_error("store UB overflow", ERR_UB_OVF); clear();
    if (p_sequencer.scb.n_bursts_rd + p_sequencer.scb.n_bursts_wr != n0) `uvm_error("DMA", "rejected DMA issued AXI4 traffic")
    dma_load(32'h0000_5000, 0);       run_expect_done("length 0");
    if (p_sequencer.scb.n_bursts_rd + p_sequencer.scb.n_bursts_wr != n0) `uvm_error("DMA", "length-0 DMA issued AXI4 traffic")
  endtask
endclass

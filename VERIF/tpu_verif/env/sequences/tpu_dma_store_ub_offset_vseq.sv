//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_dma_store_ub_offset_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_dma_store_ub_offset: DMA_STORE from odd and unaligned
//               UB_ADDR values, up to the last UB word.
//=================================================================================
class tpu_dma_store_ub_offset_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_dma_store_ub_offset_vseq)
  function new(string name = "tpu_dma_store_ub_offset_vseq"); super.new(name); endfunction

  task body();
    q88_t w[$], exp[$];
    int a[$] = '{1, 5, 64, 120, 127, 3, 0};
    int n[$] = '{7, 9, 33, 8, 1, 16, 128};
    for (int k = 0; k < 128; k++) w.push_back(16'($urandom));
    mem_put(32'h0005_0000, w);
    soft_reset();
    dma_load(32'h0005_0000, 128);
    run_expect_done("fill the UB");
    foreach (a[i]) begin
      bit [31:0] dst;
      dst = 32'h0006_0000 + 32'h400 * i;
      exp.delete();
      for (int k = 0; k < n[i]; k++) exp.push_back(w[a[i] + k]);
      dma_store(dst, a[i], n[i]);
      run_expect_done($sformatf("store UB[%0d +: %0d]", a[i], n[i]));
      void'(check_mem($sformatf("store UB[%0d +: %0d]", a[i], n[i]), dst, exp));
    end
  endtask
endclass

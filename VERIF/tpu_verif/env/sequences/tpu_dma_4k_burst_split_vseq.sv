//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_dma_4k_burst_split_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_dma_4k_burst_split: Bursts never cross a 4 KB
//               boundary.
//=================================================================================
class tpu_dma_4k_burst_split_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_dma_4k_burst_split_vseq)
  function new(string name = "tpu_dma_4k_burst_split_vseq"); super.new(name); endfunction
  task body();
    bit [31:0] src[$] = '{32'h0000_0F80, 32'h0000_0FF0, 32'h0001_1FE0};
    bit [31:0] dst[$] = '{32'h0002_0FC0, 32'h0002_1FF0, 32'h0002_2F00};
    int len[$] = '{64, 128, 100};
    foreach (src[i]) begin
      q88_t w[$];
      w.delete();
      for (int k = 0; k < len[i]; k++) w.push_back(16'($urandom));
      mem_put(src[i], w);
      soft_reset();
      dma_load(src[i], len[i]); dma_store(dst[i], 0, len[i]);
      run_expect_done($sformatf("4 KB split %0d words", len[i]));   // burst rules checked by the interface SVA
      void'(check_mem($sformatf("4 KB split %0d words", len[i]), dst[i], w));
    end
  endtask
endclass

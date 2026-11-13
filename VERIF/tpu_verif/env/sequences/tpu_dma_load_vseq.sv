//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_dma_load_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_dma_load: DMA_LOAD from external memory into the UB.
//=================================================================================
class tpu_dma_load_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_dma_load_vseq)
  int lens[$] = '{1, 2, 7, 8, 9, 16, 64, 128};
  function new(string name = "tpu_dma_load_vseq"); super.new(name); endfunction
  task body();
    q88_t w[$];
    int p;
    foreach (lens[i]) begin
      bit [31:0] src, dst;
      src = 32'h0001_0000 + 32'h1000 * i; dst = 32'h0008_0000 + 32'h1000 * i;
      w.delete();
      for (int k = 0; k < lens[i]; k++) w.push_back(16'($urandom));
      mem_put(src, w);
      soft_reset();                      // empty UB, write pointer 0
      dma_load(src, lens[i]);
      dma_store(dst, 0, lens[i]);
      run_expect_done($sformatf("loopback %0d words", lens[i]));
      get_ub_wr_ptr(p);
      if (p != lens[i]) `uvm_error("DMA", $sformatf("UB write pointer %0d after loading %0d words", p, lens[i]))
      void'(check_mem($sformatf("loopback %0d words", lens[i]), dst, w));
    end
  endtask
endclass

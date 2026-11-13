//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_soft_reset_clears_ub_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_soft_reset_clears_ub: SOFT_RESET clears the Unified
//               Buffer contents and its write pointer (spec 4.1.1).
//=================================================================================
class tpu_soft_reset_clears_ub_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_soft_reset_clears_ub_vseq)
  function new(string name = "tpu_soft_reset_clears_ub_vseq"); super.new(name); endfunction

  task body();
    q88_t w[$], z[$];
    int p;
    for (int k = 0; k < 16; k++) begin w.push_back(16'($urandom_range(1, 65535))); z.push_back(16'h0000); end
    mem_put(32'h0007_0000, w);
    dma_load(32'h0007_0000, 16);
    run_expect_done("load 16 words");
    get_ub_wr_ptr(p); if (p != 16) `uvm_error("SRUB", $sformatf("UB write pointer %0d after the load", p))
    soft_reset();
    get_ub_wr_ptr(p); if (p != 0) `uvm_error("SRUB", $sformatf("UB write pointer %0d after SOFT_RESET", p))
    dma_store(32'h0007_8000, 0, 16);
    run_expect_done("store UB[0 +: 16] after SOFT_RESET");
    void'(check_mem("UB contents after SOFT_RESET", 32'h0007_8000, z));
  endtask
endclass

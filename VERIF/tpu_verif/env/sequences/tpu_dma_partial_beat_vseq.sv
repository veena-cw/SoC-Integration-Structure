//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_dma_partial_beat_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_dma_partial_beat: Lengths that are not a multiple of
//               8 words.
//=================================================================================
class tpu_dma_partial_beat_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_dma_partial_beat_vseq)
  function new(string name = "tpu_dma_partial_beat_vseq"); super.new(name); endfunction
  task body();
    int lens[$] = '{1, 3, 5, 9, 15};
    int p;
    foreach (lens[i]) begin
      q88_t w[$];
      bit [15:0] exp_strb;
      bit [31:0] dst;
      dst = 32'h0003_0000 + 32'h100 * i;
      w.delete();
      for (int k = 0; k < lens[i]; k++) w.push_back(16'($urandom));
      mem_put(32'h0002_8000, w);
      p_sequencer.mem.fill(dst, 32, 8'hEE);           // guard bytes after the data must stay untouched
      soft_reset();
      dma_load(32'h0002_8000, lens[i]); dma_store(dst, 0, lens[i]);
      run_expect_done($sformatf("partial beat %0d words", lens[i]));
      get_ub_wr_ptr(p);
      if (p != lens[i]) `uvm_error("PART", $sformatf("UB write pointer %0d after %0d words", p, lens[i]))
      void'(check_mem($sformatf("partial beat %0d words", lens[i]), dst, w));
      exp_strb = (lens[i] % 8 == 0) ? 16'hFFFF : 16'((1 << (2 * (lens[i] % 8))) - 1);
      if (p_sequencer.scb.last_wr == null || p_sequencer.scb.last_wr.strb[$] != exp_strb)
        `uvm_error("PART", $sformatf("%0d words: last WSTRB 0x%04h, expected 0x%04h", lens[i],
                   p_sequencer.scb.last_wr == null ? 0 : p_sequencer.scb.last_wr.strb[$], exp_strb))
      if ((lens[i] % 8) != 0 && p_sequencer.mem.rd_byte(dst + 2 * lens[i]) != 8'hEE) `uvm_error("PART", "bytes after the data were written")
    end
  endtask
endclass

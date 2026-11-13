//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_dma_timeout_disabled_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_dma_timeout_disabled: TIMEOUT = 0 disables the DMA
//               handshake timeout; the same AR stall with TIMEOUT = 1000 gives ERROR_CODE[3].
//=================================================================================
class tpu_dma_timeout_disabled_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_dma_timeout_disabled_vseq)
  function new(string name = "tpu_dma_timeout_disabled_vseq"); super.new(name); endfunction

  task body();
    q88_t w[$];
    tpu_host_axis_agent_cfg m;
    m = p_sequencer.mem;
    for (int k = 0; k < 32; k++) w.push_back(16'($urandom));
    mem_put(32'h0009_0000, w);
    // reference: a 4000 clk_axi stall (10 us = 8000 clk_tpu cycles) with TIMEOUT = 1000 cycles times out
    csr_wr(CSR_TIMEOUT, 32'd1000);
    m.stall_channel = 1; m.stall_cycles = 4000;
    dma_load(32'h0009_0000, 32);
    run_expect_error("AR stall with TIMEOUT = 1000", ERR_TIMEOUT);
    m.clear_errors();
    hw_reset();                                            // the timed-out burst is abandoned on the bus
    // TIMEOUT = 0: the same stall only delays the transfer
    csr_wr(CSR_TIMEOUT, 32'd0);
    m.stall_channel = 1; m.stall_cycles = 4000;
    dma_load(32'h0009_0000, 32);
    dma_store(32'h0009_8000, 0, 32);
    run_expect_done("AR stall with TIMEOUT = 0");
    void'(check_mem("loopback after a long stall, TIMEOUT = 0", 32'h0009_8000, w));
    m.clear_errors();
  endtask
endclass

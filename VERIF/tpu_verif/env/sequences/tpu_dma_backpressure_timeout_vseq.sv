//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_dma_backpressure_timeout_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_dma_backpressure_timeout: Slow memory and stuck
//               handshakes.
//=================================================================================
class tpu_dma_backpressure_timeout_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_dma_backpressure_timeout_vseq)
  function new(string name = "tpu_dma_backpressure_timeout_vseq"); super.new(name); endfunction
  task body();
    q88_t w[$];
    tpu_host_axis_agent_cfg m;
    m = p_sequencer.mem;
    for (int k = 0; k < 64; k++) w.push_back(16'($urandom));
    mem_put(32'h0005_0000, w);
    // slow but within TIMEOUT: completes
    csr_wr(CSR_TIMEOUT, 1000);
    m.addr_ready_max = 30; m.wready_max = 30; m.rvalid_max = 30; m.bvalid_max = 30;
    dma_load(32'h0005_0000, 64); dma_store(32'h0005_8000, 0, 64);
    run_expect_done("slow memory within TIMEOUT");
    void'(check_mem("slow memory within TIMEOUT", 32'h0005_8000, w));
    m.addr_ready_max = 3; m.wready_max = 2; m.rvalid_max = 2; m.bvalid_max = 3;
    // stuck handshakes: each one must end with the DMA timeout error
    for (int i = 0; i < 5; i++) begin
      int ch;
      ch = i + 1;
      hw_reset();
      csr_wr(CSR_TIMEOUT, 64);
      m.stall_channel = ch; m.stall_cycles = 2000;
      if (ch <= 2) dma_load(32'h0005_0000, 16);
      else begin dma_load(32'h0005_0000, 16); dma_store(32'h0005_9000, 0, 16); end
      run_expect_error($sformatf("stall channel %0d", ch), ERR_TIMEOUT);
      m.clear_errors();
    end
    hw_reset();
  endtask
endclass

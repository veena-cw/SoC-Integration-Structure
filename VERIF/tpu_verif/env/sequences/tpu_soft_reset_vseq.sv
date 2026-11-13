//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_soft_reset_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_soft_reset: SOFT_RESET resets the datapath but keeps
//               CSRs.
//=================================================================================
class tpu_soft_reset_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_soft_reset_vseq)
  function new(string name = "tpu_soft_reset_vseq"); super.new(name); endfunction
  task check_clean(string what);
    bit [31:0] st; bit [7:0] ec;
    get_status(st); get_error(ec);
    if (st[ST_BUSY] || st[ST_DONE] || st[ST_ERROR] || !st[ST_Q_EMPTY] || st[15:8] != 0 || st[31:16] != 0 || ec != 0)
      `uvm_error("SRST", $sformatf("%s: STATUS 0x%08h ERROR_CODE 0x%02h after SOFT_RESET", what, st, ec))
  endtask
  task body();
    q88_t w[$];
    // CSRs that must survive (the scoreboard mirror checks every read-back)
    csr_wr(CSR_INT_ENABLE, 3); csr_wr(CSR_SRC_ADDR, 32'h0003_0000); csr_wr(CSR_DST_ADDR, 32'h0004_0000);
    csr_wr(CSR_LR, 32'h0000_0040); csr_wr(CSR_TIMEOUT, 32'h0002_0000);
    // (a) idle, after some UB data was loaded
    for (int i = 0; i < 16; i++) w.push_back(16'(i));
    mem_put(32'h0003_0000, w);
    dma_load(32'h0003_0000, 16); run_expect_done("load before soft reset");
    soft_reset(); check_clean("idle");
    read_regs(CSR_INT_ENABLE, CSR_TIMEOUT);
    // (b) entries queued, not started
    repeat (3) push(tpu_host_cmd::nop());
    soft_reset(); check_clean("queued");
    // (c) during a slow DMA_LOAD
    p_sequencer.mem.rvalid_min = 32; p_sequencer.mem.rvalid_max = 64;   // clk_axi cycles: DMA still busy 30 clk_axil cycles after START
    dma_load(32'h0003_0000, 128);
    tpu_start(); idle(30);
    soft_reset(); idle(200); check_clean("during DMA");
    p_sequencer.mem.rvalid_min = 0; p_sequencer.mem.rvalid_max = 2;
    idle(3000);                                  // let the memory model drop the abandoned burst
    // a fresh transfer must work
    dma_load(32'h0003_0000, 16); dma_store(32'h0005_0000, 0, 16);
    run_expect_done("loopback after soft reset");
    void'(check_mem("loopback after soft reset", 32'h0005_0000, w));
  endtask
endclass

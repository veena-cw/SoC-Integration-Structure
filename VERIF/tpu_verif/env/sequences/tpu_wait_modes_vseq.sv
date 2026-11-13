//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_wait_modes_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_wait_modes: All four wait modes hold the next entry
//               correctly.
//=================================================================================
class tpu_wait_modes_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_wait_modes_vseq)
  function new(string name = "tpu_wait_modes_vseq"); super.new(name); endfunction
  // time from the START write to the next AR of a DMA_LOAD queued behind a NOP that waits `cycles`
  task delay_of(int cycles, output time dt);
    tpu_host_axilm_agent_seq_item it;
    int n0;
    n0 = p_sequencer.scb.ar_times.size();
    push(tpu_host_cmd::nop(WM_CYCLES, cycles));
    dma_load(32'h0006_0000, 8);
    axil(AXIL_WRITE, CSR_CONTROL, 32'h1 << CTRL_START, 4'hF, it);
    wait_done_quiet();
    if (p_sequencer.scb.ar_times.size() <= n0) begin `uvm_error("WAIT", "no AR seen"); dt = 0; return; end
    dt = p_sequencer.scb.ar_times[n0] - it.t_end;
    soft_reset();
  endtask
  task wait_done_quiet();
    bit [31:0] st;
    wait_done(st, "wait-mode run");
    if (st[ST_ERROR]) `uvm_error("WAIT", $sformatf("wait-mode run ended with ERROR (STATUS 0x%08h)", st))
  endtask
  task body();
    time d1, d2;
    tpu_host_ref_model::mat_t a, w;
    // mode 2: the extra NOP wait of 1000 - 200 clk_tpu cycles must show up between START and AR
    // (window: +/- 10 clk_axil cycles for the START write and the AR crossing the clock domains)
    delay_of(200, d1);
    delay_of(1000, d2);
    if (real'(d2 - d1) < 800.0 * CLK_TPU_PERIOD_NS * 1ns - 10.0 * CLK_AXIL_PERIOD_NS * 1ns ||
        real'(d2 - d1) > 800.0 * CLK_TPU_PERIOD_NS * 1ns + 10.0 * CLK_AXIL_PERIOD_NS * 1ns)
      `uvm_error("WAIT", $sformatf("WM_CYCLES: 200 cycles -> %0t, 1000 cycles -> %0t", d1, d2))
    // modes 1 / 3 / 0: the DMA_STORE behind the compute must see complete results
    a = rnd_mat(4, 2); w = rnd_mat(2, 2);
    matmul_pass(a, w, 0, 32'h0006_1000, 32'h0006_2000, 0, "wait mode 1 (VPU ch1)", WM_VPU1);
    soft_reset();
    matmul_pass(a, w, 0, 32'h0006_1000, 32'h0006_3000, 0, "wait mode 3 (any VPU channel)", WM_VPU_ANY);
  endtask
endclass

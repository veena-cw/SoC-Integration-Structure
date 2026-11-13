//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_control_reg_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_control_reg: CONTROL register behaviour: read-back,
//               reserved bits, SOFT_RESET suppressing START and DMA enqueue, CLEAR.
//=================================================================================
class tpu_control_reg_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_control_reg_vseq)
  function new(string name = "tpu_control_reg_vseq"); super.new(name); endfunction

  task body();
    bit [31:0] st;
    bit [7:0]  ec;
    int        n, b0;
    // (1) CONTROL keeps the last written value (spec 6.1.4); the scoreboard mirror checks every read-back
    csr_wr(CSR_CONTROL, 32'h0000_0000);
    read_regs(CSR_CONTROL, CSR_CONTROL);
    // (2) reserved bits [31:5] have no effect: nothing queued, not busy, no error
    csr_wr(CSR_CONTROL, 32'hFFFF_FFE0);
    idle(10);
    get_q_count(n);
    get_status(st); check_status(st);
    get_error(ec);
    if (n != 0 || st[ST_BUSY] || st[ST_DONE] || st[ST_ERROR] || ec != 8'h00)
      `uvm_error("CTRL", $sformatf("reserved CONTROL bits had an effect: STATUS 0x%08h ERROR_CODE 0x%02h", st, ec))
    read_regs(CSR_CONTROL, CSR_CONTROL);
    // (3) SOFT_RESET together with START and DMA_LOAD: soft reset only (queue flushed, no start, no DMA)
    push(tpu_host_cmd::nop());
    csr_wr(CSR_SRC_ADDR, 32'h0001_0000); csr_wr(CSR_XFER_LEN, 32'd8);
    b0 = p_sequencer.scb.n_bursts_rd + p_sequencer.scb.n_bursts_wr;
    csr_wr(CSR_CONTROL, (32'h1 << CTRL_SOFT_RESET) | (32'h1 << CTRL_START) | (32'h1 << CTRL_DMA_LOAD));
    idle(50);
    get_q_count(n);
    get_status(st); check_status(st);
    get_error(ec);
    if (n != 0) `uvm_error("CTRL", $sformatf("SOFT_RESET + DMA_LOAD left %0d queue entries", n))
    if (st[ST_BUSY] || st[ST_DONE] || st[ST_ERROR] || ec != 8'h00)
      `uvm_error("CTRL", $sformatf("SOFT_RESET + START started a run: STATUS 0x%08h ERROR_CODE 0x%02h", st, ec))
    if (p_sequencer.scb.n_bursts_rd + p_sequencer.scb.n_bursts_wr != b0) `uvm_error("CTRL", "SOFT_RESET + DMA_LOAD issued AXI4 traffic")
    // (4) CLEAR clears DONE
    run_expect_done("START on an empty queue");
    clear();
    get_status(st); check_status(st);
    if (st[ST_DONE]) `uvm_error("CTRL", "CLEAR did not clear DONE")
  endtask
endclass

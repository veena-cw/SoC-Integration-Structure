//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_queue_push_while_running_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_queue_push_while_running: Entries pushed while the
//               scheduler is busy (NOPs and a DMA loopback) are executed in the same run.
//=================================================================================
class tpu_queue_push_while_running_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_queue_push_while_running_vseq)
  function new(string name = "tpu_queue_push_while_running_vseq"); super.new(name); endfunction

  task body();
    bit [31:0] st;
    bit [7:0]  ec;
    q88_t w[$];
    for (int k = 0; k < 24; k++) w.push_back(16'($urandom));
    mem_put(32'h0004_0000, w);
    push(tpu_host_cmd::nop(WM_CYCLES, 4000));              // keeps the scheduler busy while more entries arrive
    tpu_start();
    get_status(st); check_status(st);
    if (!st[ST_BUSY]) `uvm_error("QRUN", "not busy after START")
    push(tpu_host_cmd::nop());
    dma_load(32'h0004_0000, 24);
    push(tpu_host_cmd::nop(WM_CYCLES, 10));
    dma_store(32'h0004_8000, 0, 24);
    get_status(st); check_status(st);
    if (!st[ST_BUSY]) `uvm_error("QRUN", "run ended before the entries pushed during it (raise the first NOP wait)")
    wait_done(st, "run with entries pushed while busy");
    get_error(ec);
    if (!st[ST_DONE] || st[ST_ERROR] || ec != 8'h00) `uvm_error("QRUN", $sformatf("STATUS 0x%08h ERROR_CODE 0x%02h", st, ec))
    void'(check_mem("loopback queued while running", 32'h0004_8000, w));
  endtask
endclass

//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_error_accumulate_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_error_accumulate: ERROR_CODE bits are sticky and
//               ORed: queue overflow (non-fatal) then a misaligned DMA give 0x41; the error irq
//               follows ERROR; CLEAR clears all.
//=================================================================================
class tpu_error_accumulate_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_error_accumulate_vseq)
  function new(string name = "tpu_error_accumulate_vseq"); super.new(name); endfunction

  task body();
    bit [31:0] st;
    bit [7:0]  ec;
    bit        to;
    csr_wr(CSR_INT_ENABLE, 32'h2);                         // irq on ERROR only
    repeat (QUEUE_DEPTH) push(tpu_host_cmd::nop());
    push(tpu_host_cmd::nop());                             // 17th push: queue overflow, entry dropped
    get_error(ec);
    if (ec != ERR_QOVF) `uvm_error("ERRACC", $sformatf("after the overflow ERROR_CODE 0x%02h, expected 0x%02h", ec, ERR_QOVF))
    wait_irq(1, 200, to);
    if (to) `uvm_error("ERRACC", "error irq not raised after the queue overflow")
    tpu_start();                                           // overflow is not fatal: the 16 entries still run
    wait_drained(st, "run after the overflow");
    if (!st[ST_DONE] || !st[ST_ERROR]) `uvm_error("ERRACC", $sformatf("STATUS 0x%08h, expected DONE and ERROR", st))
    dma_load(32'h0000_1004, 8);                            // misaligned: fatal DMA parameter error, ORed in
    tpu_start();
    wait_drained(st, "misaligned DMA");
    get_error(ec);
    if (ec != (ERR_QOVF | ERR_ALIGN)) `uvm_error("ERRACC", $sformatf("ERROR_CODE 0x%02h, expected 0x%02h", ec, ERR_QOVF | ERR_ALIGN))
    clear();
    get_error(ec);
    get_status(st); check_status(st);
    if (ec != 8'h00 || st[ST_ERROR] || st[ST_DONE]) `uvm_error("ERRACC", $sformatf("after CLEAR STATUS 0x%08h ERROR_CODE 0x%02h", st, ec))
    wait_irq(0, 200, to);
    if (to) `uvm_error("ERRACC", "irq still high after CLEAR")
    run_expect_done("clean run after CLEAR");
  endtask
endclass

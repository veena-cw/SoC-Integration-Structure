//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_queue_full_overflow_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_queue_full_overflow: Command queue depth and
//               overflow.
//=================================================================================
class tpu_queue_full_overflow_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_queue_full_overflow_vseq)
  function new(string name = "tpu_queue_full_overflow_vseq"); super.new(name); endfunction
  task body();
    bit [31:0] st; bit [7:0] ec;
    for (int i = 0; i < QUEUE_DEPTH; i++) push(tpu_host_cmd::nop());
    get_status(st);
    if (int'(st[15:8]) != QUEUE_DEPTH || !st[ST_Q_FULL]) `uvm_error("QUEUE", $sformatf("after 16 pushes STATUS 0x%08h", st))
    push(tpu_host_cmd::nop());
    get_error(ec);
    if ((ec & ERR_QOVF) == 8'h00) `uvm_error("QUEUE", $sformatf("17th push: ERROR_CODE 0x%02h, expected queue overflow", ec))
    clear();
    run_expect_done("16 queued NOPs");
    get_status(st);
    if (st[15:8] != 0 || !st[ST_Q_EMPTY]) `uvm_error("QUEUE", $sformatf("queue not empty after run, STATUS 0x%08h", st))
  endtask
endclass

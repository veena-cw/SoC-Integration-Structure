//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_start_empty_and_busy_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_start_empty_and_busy: START on an empty queue and
//               START while busy.
//=================================================================================
class tpu_start_empty_and_busy_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_start_empty_and_busy_vseq)
  function new(string name = "tpu_start_empty_and_busy_vseq"); super.new(name); endfunction
  task body();
    bit [31:0] st; bit [7:0] ec;
    run_expect_done("START on empty queue");
    clear();
    push(tpu_host_cmd::nop(WM_CYCLES, 3000));
    tpu_start();
    get_status(st);
    if (!st[ST_BUSY]) `uvm_error("START", "not busy while a 3000-cycle NOP runs")
    tpu_start();                                            // START while busy
    wait_done(st, "busy run");
    get_error(ec);
    if ((ec & ERR_START_BUSY) == 8'h00) `uvm_error("START", $sformatf("START while busy: ERROR_CODE 0x%02h", ec))
    if (!st[ST_DONE]) `uvm_error("START", "the running queue did not complete after the extra START")
  endtask
endclass

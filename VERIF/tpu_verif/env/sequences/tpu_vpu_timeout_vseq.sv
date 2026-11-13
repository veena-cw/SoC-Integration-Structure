//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_vpu_timeout_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_vpu_timeout: Timeout when the awaited VPU output
//               never comes.
//=================================================================================
class tpu_vpu_timeout_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_vpu_timeout_vseq)
  function new(string name = "tpu_vpu_timeout_vseq"); super.new(name); endfunction
  task body();
    bit [31:0] st;
    csr_wr(CSR_TIMEOUT, 200);
    push(tpu_host_cmd::nop(WM_VPU1));               // waits for VPU output that never comes
    push(tpu_host_cmd::nop()); push(tpu_host_cmd::nop());
    run_expect_error("VPU wait timeout", ERR_TIMEOUT);
    get_status(st);
    if (st[15:8] != 0) `uvm_error("TMO", "queue not flushed after timeout")
    clear();
    csr_wr(CSR_TIMEOUT, 0);                          // timeout disabled: waits until SOFT_RESET
    push(tpu_host_cmd::nop(WM_VPU1));
    tpu_start(); idle(3000);
    get_status(st);
    if (!st[ST_BUSY] || st[ST_ERROR]) `uvm_error("TMO", $sformatf("TIMEOUT=0: STATUS 0x%08h, expected busy, no error", st))
    soft_reset();
    get_status(st);
    if (st[ST_BUSY]) `uvm_error("TMO", "still busy after SOFT_RESET")
  endtask
endclass

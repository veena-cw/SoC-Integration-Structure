//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_csr_bad_access_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_csr_bad_access: Illegal register accesses are
//               flagged.
//=================================================================================
class tpu_csr_bad_access_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_csr_bad_access_vseq)
  function new(string name = "tpu_csr_bad_access_vseq"); super.new(name); endfunction
  task expect_err(string what, bit [7:0] bits);
    bit [31:0] st; bit [7:0] ec;
    idle(10);
    get_status(st); get_error(ec);
    if (!st[ST_ERROR] || (ec & bits) != bits) `uvm_error("BAD", $sformatf("%s: STATUS 0x%08h ERROR_CODE 0x%02h", what, st, ec))
    clear();
  endtask
  task body();
    bit [31:0] d; bit [1:0] resp; bit [7:0] ec;
    int n;
    bit [7:0] ro[$] = '{CSR_STATUS, CSR_ERROR_CODE, CSR_VERSION};
    foreach (ro[i]) begin
      csr_write(ro[i], 32'hA5A5_A5A5, 4'hF, resp);              // OKAY, value unchanged, bad-access error
      if (resp != RESP_OKAY) `uvm_error("BAD", $sformatf("RO write 0x%02h answered %0d, expected OKAY", ro[i], resp))
      expect_err($sformatf("RO write 0x%02h", ro[i]), ERR_BAD_REG);
    end
    csr_rd(CSR_VERSION, d);
    if (d != VERSION_VALUE) `uvm_error("BAD", $sformatf("VERSION 0x%08h after the RO writes", d))
    csr_wr(CSR_CONTROL, (1 << CTRL_DMA_LOAD) | (1 << CTRL_DMA_STORE));   // conflicting CONTROL bits
    expect_err("DMA_LOAD + DMA_STORE", ERR_BAD_REG);
    get_q_count(n);
    if (n != 0) `uvm_error("BAD", "conflicting CONTROL write queued a command")
    for (int a = 'h40; a < 'h100; a += 'h14) begin              // unmapped -> DECERR
      csr_write(8'(a), 32'h1, 4'hF, resp);
      if (resp != RESP_DECERR) `uvm_error("BAD", $sformatf("write 0x%02h answered %0d, expected DECERR", a, resp))
      csr_read(8'(a), d, resp);
      if (resp != RESP_DECERR || d != 0) `uvm_error("BAD", $sformatf("read 0x%02h answered %0d data 0x%08h, expected DECERR, 0", a, resp, d))
    end
    csr_write(8'h05, 32'h1, 4'hF, resp);                        // misaligned -> DECERR
    if (resp != RESP_DECERR) `uvm_error("BAD", $sformatf("misaligned write answered %0d, expected DECERR", resp))
    csr_read(8'h0A, d, resp);
    if (resp != RESP_DECERR) `uvm_error("BAD", $sformatf("misaligned read answered %0d, expected DECERR", resp))
    idle(10);
    get_error(ec);
    if (ec != 0) `uvm_error("BAD", $sformatf("DECERR accesses changed ERROR_CODE to 0x%02h", ec))
  endtask
endclass

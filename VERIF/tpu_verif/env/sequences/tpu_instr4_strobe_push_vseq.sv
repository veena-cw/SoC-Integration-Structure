//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_instr4_strobe_push_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_instr4_strobe_push: Every INSTR4 write pushes an
//               entry built from the merged INSTR4 value, whatever the WSTRB (including none).
//=================================================================================
class tpu_instr4_strobe_push_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_instr4_strobe_push_vseq)
  function new(string name = "tpu_instr4_strobe_push_vseq"); super.new(name); endfunction

  task body();
    bit [1:0] resp;
    bit [31:0] w4;
    int n;
    tpu_host_cmd c;
    c = tpu_host_cmd::nop(WM_CYCLES, 20);
    push(c);                                               // INSTR4 = NOP, wait 20 cycles
    get_q_count(n); if (n != 1) `uvm_error("INSTR4", $sformatf("q_count %0d after the first push", n))
    // no byte strobes: INSTR4 unchanged, an identical entry is still pushed
    csr_write(CSR_INSTR4, 32'hFFFF_FFFF, 4'b0000, resp);
    if (resp != RESP_OKAY) `uvm_error("INSTR4", $sformatf("WSTRB 0000 write answered %0d", resp))
    get_q_count(n); if (n != 2) `uvm_error("INSTR4", $sformatf("q_count %0d after a WSTRB 0000 INSTR4 write", n))
    // only the wait_cycles bytes: op / wait mode bytes keep the NOP / WM_CYCLES of the staged value
    w4 = {16'd40, 16'h0000};
    csr_write(CSR_INSTR4, w4, 4'b1100, resp);
    if (resp != RESP_OKAY) `uvm_error("INSTR4", $sformatf("WSTRB 1100 write answered %0d", resp))
    get_q_count(n); if (n != 3) `uvm_error("INSTR4", $sformatf("q_count %0d after a WSTRB 1100 INSTR4 write", n))
    read_regs(CSR_INSTR4, CSR_INSTR4);                     // merged value checked by the scoreboard mirror
    run_expect_done("three NOP entries");
    get_q_count(n); if (n != 0) `uvm_error("INSTR4", $sformatf("q_count %0d after the run", n))
  endtask
endclass

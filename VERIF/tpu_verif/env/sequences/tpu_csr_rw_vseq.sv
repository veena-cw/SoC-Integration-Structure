//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_csr_rw_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_csr_rw: Read / write of every RW CSR with byte
//               strobes.
//=================================================================================
class tpu_csr_rw_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_csr_rw_vseq)
  function new(string name = "tpu_csr_rw_vseq"); super.new(name); endfunction
  task body();
    bit [7:0]  regs[$] = '{CSR_INT_ENABLE, CSR_SRC_ADDR, CSR_DST_ADDR, CSR_XFER_LEN, CSR_UB_ADDR, CSR_LR,
                           CSR_INSTR0, CSR_INSTR1, CSR_INSTR2, CSR_INSTR3, CSR_TIMEOUT};
    bit [1:0] resp;
    foreach (regs[i]) begin
      csr_wr(regs[i], 32'hFFFF_FFFF); read_regs(regs[i], regs[i]);
      csr_wr(regs[i], 32'h0);         read_regs(regs[i], regs[i]);
      for (int s = 0; s < 16; s++) begin
        csr_write(regs[i], $urandom, s[3:0], resp);   // the scoreboard mirror checks every read-back
        if (resp != RESP_OKAY) `uvm_error("CSR", $sformatf("strobed write 0x%02h (WSTRB %b) answered %0d", regs[i], s[3:0], resp))
        read_regs(regs[i], regs[i]);
      end
    end
  endtask
endclass

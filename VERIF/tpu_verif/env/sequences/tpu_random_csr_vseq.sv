//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_random_csr_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_random_csr: Random register traffic: random RW
//               registers, data, WSTRB, AW/W order, BREADY/RREADY delay and AxPROT, mixed with
//               reads of every register, writes to read-only registers and unmapped / misaligned
//               accesses; responses and read-back data are checked by the scoreboard, ERROR_CODE
//               at the end.
//=================================================================================
class tpu_random_csr_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_random_csr_vseq)
  function new(string name = "tpu_random_csr_vseq"); super.new(name); endfunction

  int unsigned iterations = 300;
  task body();
    tpu_host_axilm_agent_seq_item it;
    bit [7:0] rw[$] = '{CSR_INT_ENABLE, CSR_SRC_ADDR, CSR_DST_ADDR, CSR_XFER_LEN, CSR_UB_ADDR, CSR_LR,
                        CSR_INSTR0, CSR_INSTR1, CSR_INSTR2, CSR_INSTR3, CSR_TIMEOUT};
    bit [7:0] ro[$] = '{CSR_STATUS, CSR_ERROR_CODE, CSR_VERSION};
    bit       ro_written;
    bit [7:0] ec, a;
    if ($value$plusargs("ITER=%d", iterations)) `uvm_info("ITER", $sformatf("%0d accesses", iterations), UVM_LOW)
    for (int i = 0; i < int'(iterations); i++) begin
      int kind;
      kind = $urandom_range(0, 9);
      if (kind <= 4) begin                             // RW write, random strobes and timing
        a = rw[$urandom_range(0, rw.size() - 1)];
        axil_timed(AXIL_WRITE, a, $urandom, 4'($urandom_range(0, 15)), $urandom_range(0, 3), $urandom_range(0, 3),
                   $urandom_range(0, 2), 3'($urandom_range(0, 7)), it);
        if (it.resp != RESP_OKAY) `uvm_error("RCSR", $sformatf("write 0x%02h answered %0d", a, it.resp))
      end else if (kind <= 7) begin                    // read of any mapped register
        a = 8'(4 * $urandom_range(0, 15));
        axil_timed(AXIL_READ, a, 0, 4'hF, $urandom_range(0, 3), 0, $urandom_range(0, 2), 3'($urandom_range(0, 7)), it);
        if (it.resp != RESP_OKAY) `uvm_error("RCSR", $sformatf("read 0x%02h answered %0d", a, it.resp))
      end else if (kind == 8) begin                    // write to a read-only register: OKAY, value kept, bad-access error
        a = ro[$urandom_range(0, ro.size() - 1)];
        axil_timed(AXIL_WRITE, a, $urandom, 4'hF, $urandom_range(0, 3), $urandom_range(0, 3), 0, 3'b000, it);
        if (it.resp != RESP_OKAY) `uvm_error("RCSR", $sformatf("RO write 0x%02h answered %0d", a, it.resp))
        ro_written = 1;
      end else begin                                   // unmapped or misaligned: DECERR (scoreboard checks)
        a = ($urandom_range(0, 1) != 0) ? 8'(4 * $urandom_range(16, 63)) : 8'(4 * $urandom_range(0, 15) + $urandom_range(1, 3));
        axil_timed(($urandom_range(0, 1) != 0) ? AXIL_WRITE : AXIL_READ, a, $urandom, 4'hF, 0, 0, 0, 3'b000, it);
        if (it.resp != RESP_DECERR) `uvm_error("RCSR", $sformatf("access 0x%02h answered %0d, expected DECERR", a, it.resp))
      end
    end
    idle(10);
    get_error(ec);
    if (ec != (ro_written ? ERR_BAD_REG : 8'h00))
      `uvm_error("RCSR", $sformatf("ERROR_CODE 0x%02h after the random accesses (read-only written: %0b)", ec, ro_written))
    csr_wr(CSR_TIMEOUT, TIMEOUT_RESET);
  endtask
endclass

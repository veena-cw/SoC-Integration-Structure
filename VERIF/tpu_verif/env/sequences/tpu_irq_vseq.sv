//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_irq_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_irq: Interrupt follows done / error and INT_ENABLE.
//=================================================================================
class tpu_irq_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_irq_vseq)
  function new(string name = "tpu_irq_vseq"); super.new(name); endfunction
  task check(string what, bit exp_irq);
    bit to;
    wait_irq(exp_irq, 200, to);
    if (to) `uvm_error("IRQ", $sformatf("%s: irq did not become %0b", what, exp_irq))
  endtask
  task check_stays_low(string what);
    bit to;
    wait_irq(1, 200, to);
    if (!to) `uvm_error("IRQ", $sformatf("%s: irq asserted although masked", what))
  endtask
  task body();
    bit [1:0] resp;
    bit [31:0] st;
    for (int en = 0; en < 4; en++) begin
      csr_wr(CSR_INT_ENABLE, en);
      // done cause: START on an empty queue
      tpu_start(); wait_done(st, "empty start");
      if (!st[ST_DONE]) `uvm_error("IRQ", $sformatf("START on an empty queue: STATUS 0x%08h, DONE not set", st))
      if (en[0]) check($sformatf("done, INT_ENABLE=%0d", en), 1); else check_stays_low($sformatf("done, INT_ENABLE=%0d", en));
      clear(); check("after CLEAR", 0);
      // error cause: write to a read-only register
      csr_write(CSR_VERSION, 32'h0, 4'hF, resp);
      if (resp != RESP_OKAY) `uvm_error("IRQ", $sformatf("RO write answered %0d, expected OKAY", resp))
      if (en[1]) check($sformatf("error, INT_ENABLE=%0d", en), 1); else check_stays_low($sformatf("error, INT_ENABLE=%0d", en));
      clear(); check("after CLEAR", 0);
    end
  endtask
endclass

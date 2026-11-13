//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_reset_sanity_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_reset_sanity: All ports and CSRs come out of reset at
//               their defined values.
//=================================================================================
class tpu_reset_sanity_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_reset_sanity_vseq)
  function new(string name = "tpu_reset_sanity_vseq"); super.new(name); endfunction
  task body();
    bit [31:0] d, exp;
    bit to;
    for (int i = 0; i < 16; i++) begin
      bit [7:0] a;
      a = 8'(4 * i);
      csr_rd(a, d);
      case (a)
        CSR_STATUS:  exp = STATUS_RESET;
        CSR_TIMEOUT: exp = TIMEOUT_RESET;
        CSR_VERSION: exp = VERSION_VALUE;
        default:     exp = 32'h0;
      endcase
      if (d !== exp) `uvm_error("RESET", $sformatf("CSR 0x%02h = 0x%08h after reset, expected 0x%08h", a, d, exp))
    end
    wait_irq(1, 50, to);
    if (!to) `uvm_error("RESET", "irq asserted after reset")
    if (p_sequencer.scb.n_bursts_wr + p_sequencer.scb.n_bursts_rd != 0) `uvm_error("RESET", "AXI4 traffic after reset")
  endtask
endclass

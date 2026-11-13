//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_csr_read_after_write_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_csr_read_after_write: A read returns state that
//               includes every earlier write.
//=================================================================================
class tpu_csr_read_after_write_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_csr_read_after_write_vseq)
  function new(string name = "tpu_csr_read_after_write_vseq"); super.new(name); endfunction
  task body();
    int n;
    for (int i = 1; i < QUEUE_DEPTH; i++) begin
      push(tpu_host_cmd::nop());
      if ($urandom_range(0, 1) != 0) idle($urandom_range(0, 3));
      get_q_count(n);                               // must already include the push
      if (n != i) `uvm_error("RAW", $sformatf("after %0d pushes STATUS.q_count = %0d", i, n))
    end
    run_expect_done("queued NOPs");
  endtask
endclass

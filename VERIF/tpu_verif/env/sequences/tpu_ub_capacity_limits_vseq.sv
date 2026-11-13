//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_ub_capacity_limits_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_ub_capacity_limits: UB capacity behaviour (documents
//               the RTL limitation).
//=================================================================================
class tpu_ub_capacity_limits_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_ub_capacity_limits_vseq)
  function new(string name = "tpu_ub_capacity_limits_vseq"); super.new(name); endfunction
  task body();
    int p;
    // 130 words through the host-write fields of EXEC entries (2 words per entry, 65 entries)
    for (int e = 0; e < 65; e++) begin
      push(tpu_host_cmd::host_write(e * 2, 1, e * 2 + 1, 1));
      if (e % 15 == 14 || e == 64) run_expect_done("host writes");
    end
    get_ub_wr_ptr(p);
    if (p != 130) `uvm_error("UBCAP", $sformatf("UB write pointer %0d, expected 130", p))
    // documented limitation: the pointer passed the end; a DMA load must now be rejected
    dma_load(32'h000F_0000, 1);
    run_expect_error("load into a full UB", ERR_UB_OVF);
    clear();
    soft_reset();
    get_ub_wr_ptr(p);
    if (p != 0) `uvm_error("UBCAP", "SOFT_RESET did not rewind the UB write pointer")
  endtask
endclass

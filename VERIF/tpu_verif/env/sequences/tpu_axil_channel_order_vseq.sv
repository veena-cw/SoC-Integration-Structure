//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_axil_channel_order_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_axil_channel_order: AXI4-Lite channel ordering and
//               back-pressure: AW before W, W before AW, both together, delayed BREADY / RREADY,
//               any AxPROT.
//=================================================================================
class tpu_axil_channel_order_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_axil_channel_order_vseq)
  function new(string name = "tpu_axil_channel_order_vseq"); super.new(name); endfunction

  task body();
    tpu_host_axilm_agent_seq_item it;
    bit [7:0] regs[$] = '{CSR_INT_ENABLE, CSR_SRC_ADDR, CSR_DST_ADDR, CSR_XFER_LEN, CSR_UB_ADDR, CSR_LR, CSR_TIMEOUT};
    int aw_d[$] = '{0, 3, 0, 2, 1, 3};
    int w_d[$]  = '{3, 0, 0, 2, 3, 1};
    foreach (aw_d[k]) for (int rdy = 0; rdy <= 2; rdy += 2) foreach (regs[i]) begin
      bit [31:0] v;
      bit [2:0]  pr;
      v  = $urandom;
      pr = 3'($urandom_range(0, 7));
      axil_timed(AXIL_WRITE, regs[i], v, 4'hF, aw_d[k], w_d[k], rdy, pr, it);
      if (it.resp != RESP_OKAY) `uvm_error("AXIL", $sformatf("write 0x%02h (AW +%0d, W +%0d, BREADY +%0d) answered %0d", regs[i], aw_d[k], w_d[k], rdy, it.resp))
      axil_timed(AXIL_READ, regs[i], 0, 4'hF, aw_d[k], 0, rdy, pr, it);   // scoreboard checks the data
      if (it.resp != RESP_OKAY) `uvm_error("AXIL", $sformatf("read 0x%02h (AR +%0d, RREADY +%0d) answered %0d", regs[i], aw_d[k], rdy, it.resp))
    end
    csr_wr(CSR_TIMEOUT, TIMEOUT_RESET);
  endtask
endclass

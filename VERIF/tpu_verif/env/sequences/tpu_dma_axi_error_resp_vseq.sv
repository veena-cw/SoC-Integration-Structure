//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_dma_axi_error_resp_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_dma_axi_error_resp: AXI error responses and RLAST
//               mismatch.
//=================================================================================
class tpu_dma_axi_error_resp_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_dma_axi_error_resp_vseq)
  function new(string name = "tpu_dma_axi_error_resp_vseq"); super.new(name); endfunction
  task one(string what, bit is_store);
    soft_reset();
    if (is_store) begin dma_load(32'h0004_0000, 16); dma_store(32'h0004_8000, 0, 16); end
    else dma_load(32'h0004_0000, 16);
    run_expect_error(what, ERR_AXI);
    p_sequencer.mem.clear_errors();
    clear();
  endtask
  task body();
    p_sequencer.mem.rresp_err_count = 1; p_sequencer.mem.rresp_err_code = RESP_SLVERR; one("RRESP SLVERR", 0);
    p_sequencer.mem.rresp_err_count = 1; p_sequencer.mem.rresp_err_code = RESP_DECERR; one("RRESP DECERR", 0);
    p_sequencer.mem.bresp_err_count = 1; p_sequencer.mem.bresp_err_code = RESP_SLVERR; one("BRESP SLVERR", 1);
    p_sequencer.mem.bresp_err_count = 1; p_sequencer.mem.bresp_err_code = RESP_DECERR; one("BRESP DECERR", 1);
    p_sequencer.mem.rlast_mode = 1; one("RLAST early", 0);
    p_sequencer.mem.rlast_mode = 2; one("RLAST late", 0);
    hw_reset();                                      // abandoned bursts: reset before reusing the bus
  endtask
endclass

//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_dma_axi_error_resp
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: AXI error responses and RLAST mismatch.
//=================================================================================
// Test: runs tpu_dma_axi_error_resp_vseq on the virtual sequencer (tpu_base_test does reset, objection and drain time).
class tpu_dma_axi_error_resp extends tpu_base_test;
  `uvm_component_utils(tpu_dma_axi_error_resp)

  function new(string name = "tpu_dma_axi_error_resp", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function tpu_host_base_vseq create_vseq();
    tpu_dma_axi_error_resp_vseq v;
    v = tpu_dma_axi_error_resp_vseq::type_id::create("vseq");
    return v;
  endfunction
endclass : tpu_dma_axi_error_resp

//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_matmul_transpose_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_matmul_transpose: Transposed reads. Reuses
//               tpu_e2e_matmul_vseq (its file is included first).
//=================================================================================
class tpu_matmul_transpose_vseq extends tpu_e2e_matmul_vseq;
  `uvm_object_utils(tpu_matmul_transpose_vseq)
  function new(string name = "tpu_matmul_transpose_vseq"); super.new(name); transpose_list = '{0, 1}; m_list = '{1, 2, 5, 8}; endfunction
endclass

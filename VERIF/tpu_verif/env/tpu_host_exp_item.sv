//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_exp_item
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Expectation sent by the virtual sequence to the scoreboard: the result of a
//               DMA_STORE (reference-model words at an external-memory address) or the ERROR_CODE
//               value the next ERROR_CODE read must return.
//=================================================================================
typedef enum bit {EXP_MEM, EXP_ERROR_CODE} exp_kind_e;

class tpu_host_exp_item extends uvm_sequence_item;
  `uvm_object_utils(tpu_host_exp_item)

  exp_kind_e kind;          // EXP_MEM: addr / words; EXP_ERROR_CODE: err_code
  string     what;          // label for messages
  bit [7:0]  err_code;      // expected ERROR_CODE[7:0] of the next ERROR_CODE read
  bit [31:0] addr;          // byte address of word 0 in external memory
  bit [15:0] words[$];      // expected 16-bit words, little endian, word i at addr + 2i
  bit        passed;        // set by the scoreboard when the comparison is done

  function new(string name = "tpu_host_exp_item");
    super.new(name);
  endfunction

  function string convert2string();
    if (kind == EXP_ERROR_CODE) return $sformatf("%s: ERROR_CODE 0x%02h", what, err_code);
    return $sformatf("%s: %0d words @0x%08h", what, words.size(), addr);
  endfunction
endclass : tpu_host_exp_item

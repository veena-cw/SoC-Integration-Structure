//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: SoC Integration
//  Module            				: plic_irq_item_pkg
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: PLIC configuration constants and the interrupt item.
//               Driver side: raise or drop a set of src[] bits.
//               Monitor side: one src[]/irq[] sample per clock.
//=================================================================================

package plic_irq_item_pkg;
  import uvm_pkg::*;
  `include "uvm_macros.svh"

  // Must match the DUT parameters in plic_irq_test_top
  parameter int PLIC_SOURCES    = 64;
  parameter int PLIC_TARGETS    = 4;
  parameter int PLIC_PRIORITIES = 8;

  typedef bit [PLIC_SOURCES-1:0] plic_src_t;
  typedef bit [PLIC_TARGETS-1:0] plic_irq_t;

  typedef enum {IRQ_RAISE, IRQ_DROP} plic_irq_op_e;

  class plic_irq_item extends uvm_sequence_item;
    `uvm_object_utils(plic_irq_item)
    // driver request: all bits in mask change on the same clock edge
    plic_irq_op_e op;
    plic_src_t    mask;
    // monitor sample
    plic_src_t    src;
    plic_irq_t    irq;
    bit           rst_n;

    function new(string name = "plic_irq_item");
      super.new(name);
    endfunction
  endclass
endpackage

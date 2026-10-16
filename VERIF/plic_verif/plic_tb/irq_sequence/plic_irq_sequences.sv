//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: SoC Integration
//  Module            				: plic_irq_seq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Interrupt source sequence, runs on the interrupt agent's
//               sequencer: raises or drops all src[] bits in mask on one clock.
//=================================================================================

`include "uvm_macros.svh"
import uvm_pkg::*;
import plic_irq_item_pkg::*;

class plic_irq_seq extends uvm_sequence #(plic_irq_item);
  `uvm_object_utils(plic_irq_seq)
  plic_irq_op_e op;
  plic_src_t    mask;

  function new(string name = "plic_irq_seq");
    super.new(name);
  endfunction

  task body();
    req = plic_irq_item::type_id::create("req");
    start_item(req);
    req.op   = op;
    req.mask = mask;
    finish_item(req);
  endtask
endclass

//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: 
//  Module            				: 
//  Primary Unit Owner                         	: 
//  Secondary Contact                           : 
//  Source [SystemVerilog|Verilog|VHDL|Other]   : 
//=================================================================================
//  Description: xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//=================================================================================

// Generated APB Sequencer for RoaLogic_PLIC
`include "uvm_macros.svh"
import uvm_pkg::*;
import plic_apb_item_pkg::*;
class plic_apb_sequencer extends uvm_sequencer #(plic_apb_item);
  `uvm_component_utils(plic_apb_sequencer)
  function new(string name = "plic_apb_sequencer", uvm_component parent = null);
    super.new(name, parent);
  endfunction
endclass

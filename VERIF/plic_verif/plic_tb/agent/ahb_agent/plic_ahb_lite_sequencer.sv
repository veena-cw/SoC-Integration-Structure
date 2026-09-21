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

// Generated AHB-Lite Sequencer for RoaLogic_PLIC
`include "uvm_macros.svh"
import uvm_pkg::*;
import plic_ahb_lite_item_pkg::*;
class plic_ahb_lite_sequencer extends uvm_sequencer #(plic_ahb_lite_item);
  `uvm_component_utils(plic_ahb_lite_sequencer)
  function new(string name = "plic_ahb_lite_sequencer", uvm_component parent = null);
    super.new(name, parent);
  endfunction
endclass

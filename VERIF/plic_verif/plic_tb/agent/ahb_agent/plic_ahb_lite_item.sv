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

// Generated AHB-Lite Item for RoaLogic_PLIC
package plic_ahb_lite_item_pkg;
  import uvm_pkg::*;
  `include "uvm_macros.svh"
  class plic_ahb_lite_item extends uvm_sequence_item;
    `uvm_object_utils(plic_ahb_lite_item)
    rand bit [31:0] addr;
    rand bit                  write;
    rand bit [31:0] wdata;
    bit  [31:0] rdata;
    rand bit [2:0] hsize;
    rand bit [2:0] hburst;
    rand bit [1:0] htrans;
    bit hready;
    bit hresp;
    bit aborted_by_reset; // 1 if aborted due to mid-reset (see driver)
    function new(string name = "plic_ahb_lite_item");
      super.new(name);
      aborted_by_reset = 1'b0;
    endfunction
  endclass
endpackage

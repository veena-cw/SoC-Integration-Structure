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
/*
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
*/

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
    // Bus-protocol knobs (defaults reproduce a plain single transfer)
    bit [3:0]    hprot       = 4'b0011; // data access, privileged
    int unsigned wait_cycles = 0;       // HREADY low cycles before the address phase is accepted
                                        // (another slave still in its data phase)
    int unsigned busy_cycles = 0;       // BUSY cycles after the first beat (INCR / burst only)
    int unsigned beats       = 1;       // >1: incrementing burst, word size, HBURST from hburst
    bit [31:0]   burst_wdata[$];        // write data per beat (beats > 1); beat 0 also in wdata
    bit [31:0]   burst_rdata[$];        // read data per beat, filled by the driver
    function new(string name = "plic_ahb_lite_item");
      super.new(name);
      aborted_by_reset = 1'b0;
    endfunction
    // Byte lanes written by this transfer on the 32-bit bus
    function bit [3:0] byte_en();
      bit [3:0] lanes = (hsize == 3'b000) ? 4'b0001 : (hsize == 3'b001) ? 4'b0011 : 4'b1111;
      return lanes << addr[1:0];
    endfunction
  endclass
endpackage


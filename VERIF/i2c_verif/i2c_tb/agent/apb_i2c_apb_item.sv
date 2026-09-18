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

// Generated APB Item for APB_to_I2C_Controller
package apb_i2c_apb_item_pkg;
  import uvm_pkg::*;
  `include "uvm_macros.svh"
  class apb_i2c_apb_item extends uvm_sequence_item;
    `uvm_object_utils(apb_i2c_apb_item)
    rand logic [31:0] paddr;
    rand logic [31:0] pwdata;
    logic [31:0] prdata;
    rand logic pwrite;
    rand logic [3:0] pstrb;
    logic pslverr;
    bit aborted_by_reset; // 1 if transaction aborted due to mid-reset (see driver)
    function new(string name = "apb_i2c_apb_item");
      super.new(name);
      aborted_by_reset = 1'b0;
    endfunction
  endclass
endpackage

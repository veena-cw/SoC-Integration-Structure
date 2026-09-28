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
package apb_i2c_i2c_item_pkg;

  import uvm_pkg::*;
  `include "uvm_macros.svh"

  class apb_i2c_i2c_item extends uvm_sequence_item;

   // `uvm_object_utils(apb_i2c_i2c_item)

    logic [31:0] addr;
    logic [31:0] wdata;
    logic [31:0] rdata;
    logic        write;
    logic [3:0]  strb;
    logic        slverr;

    bit aborted_by_reset;

    function new(string name = "apb_i2c_i2c_item");
      super.new(name);
      aborted_by_reset = 1'b0;
    endfunction




 `uvm_object_utils_begin(apb_i2c_i2c_item)

        `uvm_field_int(addr,             UVM_ALL_ON)
        `uvm_field_int(wdata,            UVM_ALL_ON)
        `uvm_field_int(rdata,            UVM_ALL_ON)
        `uvm_field_int(write,            UVM_ALL_ON)
        `uvm_field_int(strb,             UVM_ALL_ON)
        `uvm_field_int(slverr,           UVM_ALL_ON)
        `uvm_field_int(aborted_by_reset, UVM_ALL_ON)

    `uvm_object_utils_end
  endclass

endpackage

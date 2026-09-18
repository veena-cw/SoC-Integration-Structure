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

// Generated APB Adapter for APB_to_I2C_Controller
// IP: APB_I2C
// Converts uvm_reg_bus_op <-> APB transaction (no timing)

package apb_i2c_apb_adapter_pkg;
  import uvm_pkg::*;
  `include "uvm_macros.svh"
  import apb_i2c_ral_pkg::*;
  import apb_i2c_apb_item_pkg::*;

  class apb_i2c_apb_adapter extends uvm_reg_adapter;
    `uvm_object_utils(apb_i2c_apb_adapter)
    function new(string name = "apb_i2c_apb_adapter");
      super.new(name);
      supports_byte_enable = 1;
      provides_responses = 0;
    endfunction
    virtual function uvm_sequence_item reg2bus(const ref uvm_reg_bus_op rw);
      apb_i2c_apb_item item;
      item = apb_i2c_apb_item::type_id::create("item");
      item.paddr  = rw.addr;
      item.pwrite = (rw.kind == UVM_WRITE);
      if (rw.kind == UVM_WRITE) begin
        item.pwdata = rw.data;
        item.prdata = '0;
      end else begin
        item.pwdata = '0;
        item.prdata = '0;
      end
      item.pstrb = rw.byte_en;
      return item;
    endfunction
    virtual function void bus2reg(uvm_sequence_item bus_item, ref uvm_reg_bus_op rw);
      apb_i2c_apb_item item;
      if (!$cast(item, bus_item)) begin
        `uvm_error("ADAPTER", "Failed to cast to apb_item")
        return;
      end
      rw.addr = item.paddr;
      if (item.pwrite == 0) begin
        rw.data = item.prdata;
        rw.kind = UVM_READ;
      end else begin
        rw.data = item.pwdata;
        rw.kind = UVM_WRITE;
      end
      rw.byte_en = item.pstrb;
      rw.status = (item.pslverr ? UVM_NOT_OK : UVM_IS_OK);
    endfunction
  endclass
endpackage

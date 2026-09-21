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

// Generated AHB-Lite Adapter for RoaLogic_PLIC
// Converts uvm_reg_bus_op <-> AHB-Lite transaction (no timing)
package plic_ahb_lite_adapter_pkg;
  import uvm_pkg::*;
  `include "uvm_macros.svh"
  import plic_ral_pkg::*;
  import plic_ahb_lite_item_pkg::*;
  class plic_ahb_lite_adapter extends uvm_reg_adapter;
    `uvm_object_utils(plic_ahb_lite_adapter)
    function new(string name = "plic_ahb_lite_adapter");
      super.new(name);
      supports_byte_enable = 1;
      provides_responses = 0;
    endfunction
    virtual function uvm_sequence_item reg2bus(const ref uvm_reg_bus_op rw);
      plic_ahb_lite_item item;
      item = plic_ahb_lite_item::type_id::create("item");
      item.addr  = rw.addr;
      item.write = (rw.kind == UVM_WRITE);
      if (rw.kind == UVM_WRITE) begin
        item.wdata = rw.data;
        item.rdata = '0;
      end else begin
        item.wdata = '0;
        item.rdata = '0;
      end
      item.hsize  = $clog2(4);
      item.hburst = 3'b000; // SINGLE
      item.htrans = 2'b10; // NONSEQ
      return item;
    endfunction
    virtual function void bus2reg(uvm_sequence_item bus_item, ref uvm_reg_bus_op rw);
      plic_ahb_lite_item item;
      if (!$cast(item, bus_item)) begin
        `uvm_error("ADAPTER", "Failed to cast to ahb_lite_item")
        return;
      end
      rw.addr = item.addr;
      if (item.write == 0) begin
        rw.data = item.rdata;
        rw.kind = UVM_READ;
      end else begin
        rw.data = item.wdata;
        rw.kind = UVM_WRITE;
      end
      rw.status = (item.hresp ? UVM_NOT_OK : UVM_IS_OK);
    endfunction
  endclass
endpackage

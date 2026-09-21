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

// Generated APB Monitor for APB_to_I2C_Controller
// Captures when PSEL && PENABLE && PREADY
`include "uvm_macros.svh"
import uvm_pkg::*;
import apb_i2c_apb_item_pkg::*;
class apb_i2c_i2c_monitor extends uvm_monitor;
  `uvm_component_utils(apb_i2c_i2c_monitor)
  virtual apb_i2c_i2c_if vif;
  uvm_analysis_port #(apb_i2c_i2c_item) analysis_port;
  function new(string name = "apb_i2c_apb_monitor", uvm_component parent = null);
    super.new(name, parent);
    analysis_port = new("analysis_port", this);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual apb_i2c_i2c_if)::read_by_name(get_full_name(), "vif", vif)) begin
      `uvm_fatal("NOVIF", "I2C  virtual interface not found")
    end
  endfunction
  task run_phase(uvm_phase phase);
    forever begin
      @(posedge vif.clk);
      if (vif.done) begin
        apb_i2c_i2c_item tr;
        tr = apb_i2c_i2c_item::type_id::create("tr");
        tr.addr   = vif.slave_address;
        tr.write  = vif.write;
        tr.wdata  = vif.wdata;
        tr.rdata  = vif.rdata;
        tr.strb   = vif.strb;
        tr.slverr = vif.slverr;
        analysis_port.write(tr);
      end
    end
  endtask
endclass

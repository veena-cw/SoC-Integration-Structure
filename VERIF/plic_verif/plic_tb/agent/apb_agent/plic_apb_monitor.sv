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

// Generated APB Monitor for RoaLogic_PLIC
// Captures when PSEL && PENABLE && PREADY
`include "uvm_macros.svh"
import uvm_pkg::*;
import plic_apb_item_pkg::*;
class plic_apb_monitor extends uvm_monitor;
  `uvm_component_utils(plic_apb_monitor)
  virtual plic_apb_if vif;
  uvm_analysis_port #(plic_apb_item) analysis_port;
  function new(string name = "plic_apb_monitor", uvm_component parent = null);
    super.new(name, parent);
    analysis_port = new("analysis_port", this);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual plic_apb_if)::read_by_name(get_full_name(), "vif", vif)) begin
      `uvm_fatal("NOVIF", "APB virtual interface not found")
    end
  endfunction
  task run_phase(uvm_phase phase);
    forever begin
      @(posedge vif.pclk);
      if (vif.psel && vif.penable && vif.pready) begin
        plic_apb_item tr;
        tr = plic_apb_item::type_id::create("tr");
        tr.paddr   = vif.paddr;
        tr.pwrite  = vif.pwrite;
        tr.pwdata  = vif.pwdata;
        tr.prdata  = vif.prdata;
        tr.pstrb   = vif.pstrb;
        tr.pslverr = vif.pslverr;
        analysis_port.write(tr);
      end
    end
  endtask
endclass

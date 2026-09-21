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

// Generated AHB-Lite Monitor for RoaLogic_PLIC
// Captures when HREADY && (HTRANS==NONSEQ||SEQ)
`include "uvm_macros.svh"
import uvm_pkg::*;
import plic_ahb_lite_item_pkg::*;
class plic_ahb_lite_monitor extends uvm_monitor;
  `uvm_component_utils(plic_ahb_lite_monitor)
  virtual plic_ahb_lite_if vif;
  uvm_analysis_port #(plic_ahb_lite_item) analysis_port;
  function new(string name = "plic_ahb_lite_monitor", uvm_component parent = null);
    super.new(name, parent);
    analysis_port = new("analysis_port", this);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual plic_ahb_lite_if)::read_by_name(get_full_name(), "vif", vif)) begin
      `uvm_fatal("NOVIF", "AHB virtual interface not found")
    end
  endfunction
  task run_phase(uvm_phase phase);
    forever begin
      @(posedge vif.hclk);
      if (vif.hready && (vif.htrans == 2'b10 || vif.htrans == 2'b11)) begin
        plic_ahb_lite_item tr;
        tr = plic_ahb_lite_item::type_id::create("tr");
        tr.addr   = vif.haddr;
        tr.write  = vif.hwrite;
        tr.wdata  = vif.hwdata;
        tr.rdata  = vif.hrdata;
        tr.hsize  = vif.hsize;
        tr.hburst = vif.hburst;
        tr.htrans = vif.htrans;
        tr.hready = vif.hready;
        tr.hresp  = vif.hresp;
        analysis_port.write(tr);
      end
    end
  endtask
endclass

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

// Generated APB Agent for RoaLogic_PLIC
`include "uvm_macros.svh"
import uvm_pkg::*;
import plic_apb_item_pkg::*;
class plic_apb_agent extends uvm_agent;
  `uvm_component_utils(plic_apb_agent)
  plic_apb_sequencer sequencer;
  plic_apb_driver    driver;
  plic_apb_monitor   monitor;
  function new(string name = "plic_apb_agent", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    sequencer = plic_apb_sequencer::type_id::create("sequencer", this);
    driver    = plic_apb_driver::type_id::create("driver", this);
    monitor   = plic_apb_monitor::type_id::create("monitor", this);
  endfunction
  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    driver.seq_item_port.connect(sequencer.seq_item_export);
  endfunction
endclass

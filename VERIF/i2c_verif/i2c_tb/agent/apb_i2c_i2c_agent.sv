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

// Generated APB Agent for APB_to_I2C_Controller
`include "uvm_macros.svh"
import uvm_pkg::*;
import apb_i2c_apb_item_pkg::*;
class apb_i2c_i2c_agent extends uvm_agent;
  `uvm_component_utils(apb_i2c_i2c_agent)
  apb_i2c_apb_bfm   driver;
  apb_i2c_i2c_monitor   monitor;
  function new(string name = "apb_i2c_apb_agent", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
  //  sequencer = apb_i2c_apb_sequencer::type_id::create("sequencer", this);
    driver    = apb_i2c_apb_bfm::type_id::create("driver", this);
    monitor   = apb_i2c_i2c_monitor::type_id::create("monitor", this);
  endfunction
  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
   // driver.seq_item_port.connect(sequencer.seq_item_export);
  endfunction
endclass

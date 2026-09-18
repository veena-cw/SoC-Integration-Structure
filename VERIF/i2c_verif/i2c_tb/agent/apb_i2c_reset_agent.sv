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

// Generated Reset Agent for APB_to_I2C_Controller - resource_db only, no modports, reset-aware
// Based on user-provided reset_transaction/sequencer/driver/monitor/agent, adapted to uvm_resource_db
`include "uvm_macros.svh"
import uvm_pkg::*;

class apb_i2c_reset_transaction extends uvm_sequence_item;
  `uvm_object_utils(apb_i2c_reset_transaction)
  rand time delay;
  rand time pulse_width;
  constraint c_delay { delay >= 0; }
  function new(string name = "apb_i2c_reset_transaction");
    super.new(name);
    delay = 0;
    pulse_width = 0;
  endfunction
  function string convert2string();
    return $sformatf("{delay=%0t, pulse_width=%0t}", delay, pulse_width);
  endfunction
endclass : apb_i2c_reset_transaction

class apb_i2c_reset_sequencer extends uvm_sequencer #(apb_i2c_reset_transaction);
  `uvm_component_utils(apb_i2c_reset_sequencer)
  function new(string name = "apb_i2c_reset_sequencer", uvm_component parent = null);
    super.new(name, parent);
  endfunction : new
endclass : apb_i2c_reset_sequencer

class apb_i2c_reset_seq extends uvm_sequence #(apb_i2c_reset_transaction);
  `uvm_object_utils(apb_i2c_reset_seq)
  rand time delay;
  rand time pulse_width;
  function new(string name = "apb_i2c_reset_seq");
    super.new(name);
    delay = 0;
    pulse_width = 100;
  endfunction
  task body();
    apb_i2c_reset_transaction tr;
    tr = apb_i2c_reset_transaction::type_id::create("tr");
    tr.delay = delay;
    tr.pulse_width = pulse_width;
    start_item(tr);
    finish_item(tr);
  endtask
endclass : apb_i2c_reset_seq

class apb_i2c_reset_driver extends uvm_driver #(apb_i2c_reset_transaction);
  `uvm_component_utils(apb_i2c_reset_driver)
  // No modports - plain virtual interface
  virtual apb_i2c_reset_if vif;
  localparam time DEFAULT_RESET_DURATION = 100;
  function new(string name = "apb_i2c_reset_driver", uvm_component parent = null);
    super.new(name, parent);
  endfunction : new
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual apb_i2c_reset_if)::read_by_name(get_full_name(), "rst_vif", vif)) begin
      `uvm_fatal(get_type_name(), "Virtual interface 'rst_vif' not set for apb_i2c_reset_driver (uvm_resource_db). Expected test_top to set rst_vif through uvm_resource_db")
    end
  endfunction : build_phase
  task run_phase(uvm_phase phase);
    apb_i2c_reset_transaction tr;
    // Initialize reset line to deasserted via resource_db vif
    vif.rst_n = 1'b0;
    forever begin
      seq_item_port.get_next_item(tr);
      drive_reset(tr);
      seq_item_port.item_done();
    end
  endtask : run_phase
  task drive_reset(apb_i2c_reset_transaction tr);
        time width;
        width = (tr.pulse_width > 0) ? tr.pulse_width : DEFAULT_RESET_DURATION;
        if (tr.delay > 0) #(tr.delay);
        `uvm_info(get_type_name(),$sformatf("Pulsing reset low for %0t (async). Start=%0t", width, $time),UVM_LOW)
        vif.rst_n = 1'b0;
        #(width);
        vif.rst_n = 1'b1;
        `uvm_info(get_type_name(),$sformatf("Reset pulse complete. End=%0t", $time),UVM_LOW)
  endtask : drive_reset
endclass : apb_i2c_reset_driver

class apb_i2c_reset_monitor extends uvm_monitor;
  `uvm_component_utils(apb_i2c_reset_monitor)
  virtual apb_i2c_reset_if vif;
  uvm_analysis_port #(apb_i2c_reset_transaction) ap;
  function new(string name = "apb_i2c_reset_monitor", uvm_component parent = null);
    super.new(name, parent);
    ap = new("ap", this);
  endfunction : new
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual apb_i2c_reset_if)::read_by_name(get_full_name(), "rst_vif", vif)) begin
      `uvm_fatal(get_type_name(), "Virtual interface 'rst_vif' not set for apb_i2c_reset_monitor")
    end
  endfunction : build_phase
  task run_phase(uvm_phase phase);
    bit last_rst_n;
    last_rst_n = (vif.rst_n === 1'b1) ? 1'b1 : 1'b0;
    forever begin
      @(vif.rst_n);
      if ((last_rst_n === 1'b1) && (vif.rst_n === 1'b0)) begin
        send_event(1'b1);
      end else if ((last_rst_n === 1'b0) && (vif.rst_n === 1'b1)) begin
        send_event(1'b0);
      end
      last_rst_n = vif.rst_n;
    end
  endtask : run_phase
  task send_event(bit is_assert);
    apb_i2c_reset_transaction tr;
    tr = apb_i2c_reset_transaction::type_id::create("tr");
    tr.delay = 0;
    tr.pulse_width = 0;
    ap.write(tr);
    `uvm_info(get_type_name(), $sformatf("Reset %s at %0t", is_assert ? "assert" : "deassert", $time), UVM_MEDIUM)
  endtask : send_event
endclass : apb_i2c_reset_monitor

class apb_i2c_reset_agent extends uvm_agent;
  `uvm_component_utils(apb_i2c_reset_agent)
  apb_i2c_reset_sequencer  seqr;
  apb_i2c_reset_driver     drv;
  apb_i2c_reset_monitor    mon;
  function new(string name = "apb_i2c_reset_agent", uvm_component parent = null);
    super.new(name, parent);
  endfunction : new
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    mon = apb_i2c_reset_monitor::type_id::create("mon", this);
    if (is_active == UVM_ACTIVE) begin
      seqr = apb_i2c_reset_sequencer ::type_id::create("seqr", this);
      drv  = apb_i2c_reset_driver    ::type_id::create("drv",  this);
    end
  endfunction : build_phase
  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    if (is_active == UVM_ACTIVE) begin
      drv.seq_item_port.connect(seqr.seq_item_export);
    end
  endfunction : connect_phase
endclass : apb_i2c_reset_agent

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

// Generated APB Driver for RoaLogic_PLIC - reset-aware, resource_db only, no modports
// IDLE -> SETUP -> ACCESS -> wait PREADY -> IDLE - reset handled inline inside drive(), no concurrent thread
`include "uvm_macros.svh"
import uvm_pkg::*;
import plic_apb_item_pkg::*;
class plic_apb_driver extends uvm_driver #(plic_apb_item);
  `uvm_component_utils(plic_apb_driver)
  virtual plic_apb_if vif;
  virtual plic_reset_if rst_vif; // reset-aware via resource_db
  function new(string name = "plic_apb_driver", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual plic_apb_if)::read_by_name(get_full_name(), "vif", vif)) begin
      `uvm_fatal("NOVIF", "APB virtual interface not found")
    end
    // reset interface via resource_db only, no config_db, optional (test_top always sets it)
    void'(uvm_resource_db#(virtual plic_reset_if)::read_by_name(get_full_name(), "rst_vif", rst_vif));
  endfunction
  // Reset helper - drives ALL master signals to 0 (never DUT outputs pready/prdata/pslverr)
  task reset_signals();
    vif.psel    <= 0;
    vif.penable <= 0;
    vif.pwrite  <= 0;
    vif.paddr   <= '0;
    vif.pwdata  <= '0;
    vif.pstrb   <= '0;
    `uvm_info(get_type_name(), "Reset asserted: all APB master signals driven to 0", UVM_MEDIUM)
  endtask
  task run_phase(uvm_phase phase);
    forever begin
      seq_item_port.get_next_item(req);
      drive(req);
      seq_item_port.item_done();
    end
  endtask
  task drive(plic_apb_item tr);
    // Ensure clean flag at start
    tr.aborted_by_reset = 1'b0;
    // 1. Before starting transaction - handles initial reset already asserted (no negedge needed)
    if (rst_vif != null && !rst_vif.rst_n) begin
      reset_signals();
      wait (rst_vif.rst_n === 1'b1);
      tr.aborted_by_reset = 1'b1;
      `uvm_info(get_type_name(), "Reset before IDLE - transaction aborted, will resume next item after deassert", UVM_MEDIUM)
      return;
    end
    // IDLE
    vif.psel    <= 0;
    vif.penable <= 0;
    vif.pwrite  <= 0;
    vif.paddr   <= '0;
    vif.pwdata  <= '0;
    vif.pstrb   <= '0;
    @(posedge vif.pclk);
    // 2. After IDLE clock
    if (rst_vif != null && !rst_vif.rst_n) begin
      reset_signals();
      wait (rst_vif.rst_n === 1'b1);
      tr.aborted_by_reset = 1'b1;
      return;
    end
    // SETUP
    vif.paddr   <= tr.paddr;
    vif.pwrite  <= tr.pwrite;
    if (tr.pwrite) vif.pwdata <= tr.pwdata;
    vif.pstrb   <= tr.pstrb;
    vif.psel    <= 1;
    vif.penable <= 0;
    @(posedge vif.pclk);
    // 3. After SETUP clock
    if (rst_vif != null && !rst_vif.rst_n) begin
      reset_signals();
      wait (rst_vif.rst_n === 1'b1);
      tr.aborted_by_reset = 1'b1;
      `uvm_warning(get_type_name(), "Reset during SETUP - transaction aborted, bus forced to 0")
      return;
    end
    // ACCESS
    vif.penable <= 1;
    @(posedge vif.pclk);
    // 4. During ACCESS while waiting for PREADY - check each cycle
    while (!vif.pready) begin
      if (rst_vif != null && !rst_vif.rst_n) begin
        reset_signals();
        wait (rst_vif.rst_n === 1'b1);
        tr.aborted_by_reset = 1'b1;
        `uvm_warning(get_type_name(), "Reset during ACCESS wait for PREADY - transaction aborted")
        return;
      end
      @(posedge vif.pclk);
    end
    // 5. Before completing transaction
    if (rst_vif != null && !rst_vif.rst_n) begin
      reset_signals();
      wait (rst_vif.rst_n === 1'b1);
      tr.aborted_by_reset = 1'b1;
      return;
    end
    if (!tr.pwrite) tr.prdata = vif.prdata;
    tr.pslverr = vif.pslverr;
    @(posedge vif.pclk);
    vif.psel    <= 0;
    vif.penable <= 0;
  endtask
endclass

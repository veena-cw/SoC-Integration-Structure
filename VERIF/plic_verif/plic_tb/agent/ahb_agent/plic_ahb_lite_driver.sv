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
/*
// Generated AHB-Lite Driver for RoaLogic_PLIC - reset-aware, resource_db only, no modports
// IDLE -> NONSEQ -> wait HREADY -> complete - reset handled inline inside drive(), no concurrent thread
`include "uvm_macros.svh"
import uvm_pkg::*;
import plic_ahb_lite_item_pkg::*;
class plic_ahb_lite_driver extends uvm_driver #(plic_ahb_lite_item);
  `uvm_component_utils(plic_ahb_lite_driver)
  virtual plic_ahb_lite_if vif;
  virtual plic_reset_if rst_vif; // reset-aware via resource_db
  function new(string name = "plic_ahb_lite_driver", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual plic_ahb_lite_if)::read_by_name(get_full_name(), "vif", vif)) begin
      `uvm_fatal("NOVIF", "AHB virtual interface not found")
    end
    void'(uvm_resource_db#(virtual plic_reset_if)::read_by_name(get_full_name(), "rst_vif", rst_vif));
  endfunction
  // Reset helper - drives ALL master signals to 0
  task reset_signals();
    vif.htrans <= 2'b00; // IDLE
    vif.haddr  <= '0;
    vif.hwrite <= 0;
    vif.hsize  <= '0;
    vif.hburst <= '0;
    vif.hwdata <= '0;
    vif.hsel  <= 0;
    vif.hready <= 0;
    `uvm_info(get_type_name(), "Reset asserted: all AHB master signals driven to 0", UVM_MEDIUM)
  endtask
  task run_phase(uvm_phase phase);
    forever begin
      seq_item_port.get_next_item(req);
      drive(req);
      seq_item_port.item_done();
    end
  endtask
  task drive(plic_ahb_lite_item tr);
    tr.aborted_by_reset = 1'b0;
    // 1. Before starting transaction
    if (rst_vif != null && !rst_vif.rst_n) begin
      reset_signals();
      wait (rst_vif.rst_n === 1'b1);
      tr.aborted_by_reset = 1'b1;
      `uvm_info(get_type_name(), "Reset before IDLE - AHB transaction aborted", UVM_MEDIUM)
      return;
    end
    // IDLE
    vif.htrans <= 2'b00; // IDLE
    vif.haddr  <= '0;
    vif.hwrite <= 0;
    vif.hsize  <= '0;
    vif.hburst <= '0;
    vif.hwdata <= '0;
    vif.hsel  <= 1;
    vif.hready <= 1;
    @(posedge vif.hclk);
    // 2. After IDLE clock
    if (rst_vif != null && !rst_vif.rst_n) begin
      reset_signals();
      wait (rst_vif.rst_n === 1'b1);
      tr.aborted_by_reset = 1'b1;
      return;
    end
    // NONSEQ
    vif.haddr  <= tr.addr;
    vif.htrans <= 2'b10; // NONSEQ
    vif.hwrite <= tr.write;
    vif.hsize  <= tr.hsize;
    vif.hburst <= tr.hburst;
    if (tr.write) vif.hwdata <= tr.wdata;
    @(posedge vif.hclk);
    // 3. After NONSEQ clock
    if (rst_vif != null && !rst_vif.rst_n) begin
      reset_signals();
      wait (rst_vif.rst_n === 1'b1);
      tr.aborted_by_reset = 1'b1;
      `uvm_warning(get_type_name(), "Reset during NONSEQ - AHB transaction aborted, bus forced to 0")
      return;
    end
while (vif.hreadyout !== 1'b1) begin

  if (rst_vif != null && !rst_vif.rst_n) begin
    reset_signals();
    wait (rst_vif.rst_n === 1'b1);
    tr.aborted_by_reset = 1'b1;

    `uvm_warning(
      get_type_name(),
      "Reset during HREADY wait - AHB transaction aborted"
    )

    return;
  end

  @(posedge vif.hclk);

end


// 5. Sample response after DUT updates HRDATA
// Sampling at negedge avoids the NBA race at posedge.
@(negedge vif.hclk);

if (rst_vif != null && !rst_vif.rst_n) begin
  reset_signals();
  wait (rst_vif.rst_n === 1'b1);
  tr.aborted_by_reset = 1'b1;
  return;
end

if (!tr.write)
  tr.rdata = vif.hrdata;

tr.hresp  = vif.hresp;
tr.hready = vif.hreadyout;


// Return bus to IDLE
vif.htrans <= 2'b00;
vif.hsel   <= 1'b0;
vif.hready <= 1'b1;

@(posedge vif.hclk);
  endtask
endclass */


// Generated AHB-Lite Driver for RoaLogic_PLIC - reset-aware, resource_db only, no modports
// IDLE -> NONSEQ -> wait HREADY -> complete - reset handled inline inside drive(), no concurrent thread
`include "uvm_macros.svh"
import uvm_pkg::*;
import plic_ahb_lite_item_pkg::*;
class plic_ahb_lite_driver extends uvm_driver #(plic_ahb_lite_item);
  `uvm_component_utils(plic_ahb_lite_driver)
  virtual plic_ahb_lite_if vif;
  virtual plic_reset_if rst_vif; // reset-aware via resource_db
  function new(string name = "plic_ahb_lite_driver", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual plic_ahb_lite_if)::read_by_name(get_full_name(), "vif", vif)) begin
      `uvm_fatal("NOVIF", "AHB virtual interface not found")
    end
    void'(uvm_resource_db#(virtual plic_reset_if)::read_by_name(get_full_name(), "rst_vif", rst_vif));
  endfunction
  // Reset helper - drives ALL master signals to 0
  task reset_signals();
    vif.htrans <= 2'b00; // IDLE
    vif.haddr  <= '0;
    vif.hwrite <= 0;
    vif.hsize  <= '0;
    vif.hburst <= '0;
    vif.hprot  <= '0;
    vif.hwdata <= '0;
    vif.hsel  <= 0;
    vif.hready <= 0;
    `uvm_info(get_type_name(), "Reset asserted: all AHB master signals driven to 0", UVM_MEDIUM)
  endtask
  task run_phase(uvm_phase phase);
    forever begin
      seq_item_port.get_next_item(req);
      drive(req);
      seq_item_port.item_done();
    end
  endtask
  // Reset check used between bus cycles: 1 = transaction aborted
  task automatic abort_on_reset(plic_ahb_lite_item tr, output bit aborted);
    aborted = 0;
    if (rst_vif != null && !rst_vif.rst_n) begin
      reset_signals();
      wait (rst_vif.rst_n === 1'b1);
      tr.aborted_by_reset = 1'b1;
      aborted = 1;
      `uvm_warning(get_type_name(), "Reset during AHB transfer - transaction aborted, bus forced to 0")
    end
  endtask

  // IDLE -> [HREADY-low wait] -> NONSEQ/SEQ beats (pipelined) -> [BUSY] -> IDLE
  // A single transfer (beats = 1, no knobs) has the original timing.
  task drive(plic_ahb_lite_item tr);
    int unsigned n = (tr.beats == 0) ? 1 : tr.beats;
    bit          ab;
    bit [31:0]   rd;
    tr.aborted_by_reset = 1'b0;
    tr.burst_rdata.delete();
    if (n > 1 && tr.burst_wdata.size() > 0) tr.wdata = tr.burst_wdata[0];
    abort_on_reset(tr, ab); if (ab) return;
    // IDLE
    vif.htrans <= 2'b00; // IDLE
    vif.haddr  <= '0;
    vif.hwrite <= 0;
    vif.hsize  <= '0;
    vif.hburst <= '0;
    vif.hprot  <= tr.hprot;
    vif.hwdata <= '0;
    vif.hsel  <= 1;
    vif.hready <= 1;
    @(posedge vif.hclk);
    abort_on_reset(tr, ab); if (ab) return;

    for (int unsigned i = 0; i < n; i++) begin
      // address phase of beat i
      vif.haddr  <= tr.addr + 4 * i;
      vif.htrans <= (i == 0) ? 2'b10 : 2'b11; // NONSEQ / SEQ
      vif.hwrite <= tr.write;
      vif.hsize  <= tr.hsize;
      vif.hburst <= tr.hburst;
      vif.hprot  <= tr.hprot;
      if (i == 0 && tr.write) vif.hwdata <= tr.wdata;
      // HREADY low: the previous transfer (another slave) is still in its data
      // phase, so this address phase is extended and must not be taken yet
      if (i == 0 && tr.wait_cycles > 0) begin
        vif.hready <= 1'b0;
        repeat (tr.wait_cycles) @(posedge vif.hclk);
        abort_on_reset(tr, ab); if (ab) return;
        vif.hready <= 1'b1;
      end
      @(posedge vif.hclk);
      abort_on_reset(tr, ab); if (ab) return;
      // data phase of beat i
      if (tr.write) vif.hwdata <= (i < tr.burst_wdata.size()) ? tr.burst_wdata[i] : tr.wdata;
      while (vif.hreadyout !== 1'b1) begin
        abort_on_reset(tr, ab); if (ab) return;
        @(posedge vif.hclk);
      end
      // Sample at negedge: avoids the NBA race on HRDATA at posedge
      @(negedge vif.hclk);
      abort_on_reset(tr, ab); if (ab) return;
      if (!tr.write) begin
        rd = vif.hrdata;
        if (i == 0) tr.rdata = rd;
        tr.burst_rdata.push_back(rd);
      end
      tr.hresp  = vif.hresp;
      tr.hready = vif.hreadyout;
      // BUSY after the first beat: the master is not ready with the next one.
      // HADDR already shows the next beat address, the slave must ignore it.
      if (i == 0 && tr.busy_cycles > 0) begin
        vif.htrans <= 2'b01; // BUSY
        vif.haddr  <= tr.addr + 4;
        repeat (tr.busy_cycles) @(posedge vif.hclk);
        abort_on_reset(tr, ab); if (ab) return;
      end
    end

    // Return bus to IDLE
    vif.htrans <= 2'b00;
    vif.hsel   <= 1'b0;
    vif.hready <= 1'b1;
    @(posedge vif.hclk);
  endtask
endclass


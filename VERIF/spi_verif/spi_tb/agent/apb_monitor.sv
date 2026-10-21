//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_monitor
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: APB monitor: publishes completed transfers and transfers aborted by reset
//=================================================================================

class apb_monitor extends uvm_monitor;

  `uvm_component_utils(apb_monitor)

  virtual apb_if                    vif;
  uvm_analysis_port #(apb_seq_item) ap;

  function new(string name = "apb_monitor", uvm_component parent = null);
    super.new(name, parent);
    ap = new("ap", this);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual apb_if)::read_by_name(get_full_name(), "apb_vif", vif))
      `uvm_fatal("NOVIF", "apb_vif not found in uvm_resource_db")
  endfunction

  task run_phase(uvm_phase phase);
    apb_seq_item tr;
    bit          inflight;
    bit [31:0]   a, wd;
    bit          wr;
    bit [3:0]    st;

    inflight = 1'b0;
    forever begin
      @(vif.mon_cb);
      if (vif.mon_cb.presetn !== 1'b1) begin
        // reset active: an unfinished transfer is reported as aborted, nothing else is sampled
        if (inflight) begin
          tr = apb_seq_item::type_id::create("apb_abort_tr");
          tr.paddr            = a;
          tr.pwdata           = wd;
          tr.pwrite           = wr;
          tr.pstrb            = st;
          tr.aborted_by_reset = 1'b1;
          tr.abort_in_access  = (vif.mon_cb.penable === 1'b1);
          tr.t_sample         = $time;
          ap.write(tr);
          inflight = 1'b0;
        end
        continue;
      end
      if (vif.mon_cb.psel === 1'b1) begin
        if (vif.mon_cb.penable !== 1'b1) begin
          // SETUP phase
          inflight = 1'b1;
          a  = vif.mon_cb.paddr;
          wd = vif.mon_cb.pwdata;
          wr = vif.mon_cb.pwrite;
          st = vif.mon_cb.pstrb;
        end else if (vif.mon_cb.pready === 1'b1) begin
          // ACCESS phase completed
          tr = apb_seq_item::type_id::create("apb_tr");
          tr.paddr    = vif.mon_cb.paddr;
          tr.pwdata   = vif.mon_cb.pwdata;
          tr.pwrite   = vif.mon_cb.pwrite;
          tr.pstrb    = vif.mon_cb.pstrb;
          tr.pprot    = vif.mon_cb.pprot;
          tr.prdata   = vif.mon_cb.prdata;
          tr.pslverr  = vif.mon_cb.pslverr;
          tr.t_sample = $time;
          ap.write(tr);
          inflight = 1'b0;
        end
      end else begin
        inflight = 1'b0;
      end
    end
  endtask

endclass

//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : reset_monitor
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Reset monitor: reports reset assert / de-assert events and reset width
//=================================================================================

class reset_monitor extends uvm_monitor;

  `uvm_component_utils(reset_monitor)

  virtual reset_if                    vif;
  uvm_analysis_port #(reset_seq_item) ap;

  function new(string name = "reset_monitor", uvm_component parent = null);
    super.new(name, parent);
    ap = new("ap", this);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual reset_if)::read_by_name(get_full_name(), "reset_vif", vif))
      `uvm_fatal("NOVIF", "reset_vif not found in uvm_resource_db")
  endfunction

  task run_phase(uvm_phase phase);
    reset_seq_item tr;
    logic          last;
    time           t_assert;

    last     = vif.rst_n;
    t_assert = $time;
    forever begin
      @(vif.rst_n);
      if (vif.rst_n !== last && (vif.rst_n === 1'b0 || vif.rst_n === 1'b1)) begin
        tr = reset_seq_item::type_id::create("rst_ev");
        tr.t_event   = $time;
        tr.is_assert = (vif.rst_n === 1'b0);
        if (tr.is_assert) begin
          t_assert = $time;
        end else begin
          tr.width_cycles = int'(($time - t_assert) / CLK_PERIOD);
        end
        `uvm_info("RST_MON", $sformatf("Reset %s at %0t", tr.is_assert ? "ASSERT" : "DE-ASSERT", $time), UVM_MEDIUM)
        ap.write(tr);
        last = vif.rst_n;
      end
    end
  endtask

endclass

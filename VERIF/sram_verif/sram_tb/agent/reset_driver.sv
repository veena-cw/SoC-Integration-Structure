// ------------------------------------------------------------
// reset_driver.sv
//
// Owns rst_n of one reset_if exclusively. Never touches other
// interfaces -- the AXI driver/monitor react to rst_n
// themselves.
//
// Reset semantics:
//   - rst_n starts at 0 (reset_if initial block), so the DUT is
//     held in reset until a reset_sequence runs.
//   - Assert and release both happen on the falling edge of the
//     domain clock: assertion is asynchronous to the DUT's
//     posedge flops, release never races a rising edge.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class reset_driver extends uvm_driver #(reset_seq_item);

    `uvm_component_utils(reset_driver)

    virtual reset_if rst_vif;

    // UVM constructor.
    function new(string name = "reset_driver", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // Get rst_vif from uvm_resource_db.
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_resource_db#(virtual reset_if)::read_by_name(
                get_full_name(), "rst_vif", rst_vif))
            `uvm_fatal(get_type_name(), "reset_if not set")
    endfunction

    // Hold reset at power-up, then drive one reset pulse per item.
    task run_phase(uvm_phase phase);
        rst_vif.rst_n = 1'b0;
        forever begin
            seq_item_port.get_next_item(req);
            drive_reset(req);
            seq_item_port.item_done();
        end
    endtask

    // Wait delay_cycles, assert rst_n on a falling clock edge, hold it for
    // pulse_cycles, release on a falling edge.
    task drive_reset(reset_seq_item tr);
        repeat (tr.delay_cycles) @(posedge rst_vif.clk);

        // ---- ASSERT ----
        @(negedge rst_vif.clk);
        rst_vif.rst_n = 1'b0;
        `uvm_info(get_type_name(),
                  $sformatf("RESET ASSERT  @ %0t (%s)", $time, tr.convert2string()), UVM_LOW)

        // ---- HOLD ----
        repeat (tr.pulse_cycles) @(posedge rst_vif.clk);

        // ---- DEASSERT ----
        @(negedge rst_vif.clk);
        rst_vif.rst_n = 1'b1;
        `uvm_info(get_type_name(), $sformatf("RESET DEASSERT @ %0t", $time), UVM_LOW)
    endtask

endclass

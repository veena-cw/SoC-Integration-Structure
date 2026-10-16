// ------------------------------------------------------------
// reset_monitor.sv
//
// Passive observer on rst_n. Publishes a reset_seq_item on
// every assert (pulse_cycles=0) and every deassert
// (pulse_cycles = measured low time in clocks).
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class reset_monitor extends uvm_monitor;

    `uvm_component_utils(reset_monitor)

    virtual reset_if rst_vif;

    uvm_analysis_port #(reset_seq_item) ap;

    function new(string name = "reset_monitor", uvm_component parent = null);
        super.new(name, parent);
        ap = new("ap", this);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_resource_db#(virtual reset_if)::read_by_name(
                get_full_name(), "rst_vif", rst_vif))
            `uvm_fatal(get_type_name(), "reset_if not set")
    endfunction

    task run_phase(uvm_phase phase);
        int unsigned   low_cycles;
        reset_seq_item tr;

        forever begin
            @(rst_vif.rst_n);
            if (rst_vif.rst_n === 1'b0) begin
                tr = reset_seq_item::type_id::create("rst_assert");
                tr.pulse_cycles = 0;
                ap.write(tr);
                `uvm_info(get_type_name(), $sformatf("Reset ASSERTED @ %0t", $time), UVM_MEDIUM)

                low_cycles = 0;
                fork begin
                    fork
                        forever begin @(posedge rst_vif.clk); low_cycles++; end
                        wait (rst_vif.rst_n === 1'b1);
                    join_any
                    disable fork;
                end join

                tr = reset_seq_item::type_id::create("rst_deassert");
                tr.pulse_cycles = low_cycles;
                ap.write(tr);
                `uvm_info(get_type_name(),
                          $sformatf("Reset DEASSERTED @ %0t (%0d clocks low)", $time, low_cycles),
                          UVM_MEDIUM)
            end
        end
    endtask

endclass

// ------------------------------------------------------------
// reset_monitor
//
// Passive observer on rst_n. Emits a reset_seq_item on the
// analysis port at every assert and every deassert.
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

        time assert_time;
        bit  in_reset;
        reset_seq_item tr;

        // Initialize from current value
        in_reset = (rst_vif.rst_n === 1'b0);
        if (in_reset) assert_time = $time;

        forever begin
            @(rst_vif.rst_n);

            if (rst_vif.rst_n === 1'b0) begin
                // ---- ASSERT ----
                assert_time = $time;
                in_reset    = 1'b1;

                tr = reset_seq_item::type_id::create("rst_assert");
                tr.delay       = 0;
                tr.pulse_width = 0;
                ap.write(tr);

                `uvm_info(get_type_name(),
                          $sformatf("Reset ASSERTED @ %0t", $time),
                          UVM_MEDIUM)
            end
            else begin
                // ---- DEASSERT ----
                tr = reset_seq_item::type_id::create("rst_deassert");
                tr.delay       = 0;
                tr.pulse_width = in_reset ? ($time - assert_time) : 0;
                ap.write(tr);

                in_reset = 1'b0;

                `uvm_info(get_type_name(),
                          $sformatf("Reset DEASSERTED @ %0t (width=%0t)",
                                    $time, tr.pulse_width),
                          UVM_MEDIUM)
            end
        end
    endtask

endclass

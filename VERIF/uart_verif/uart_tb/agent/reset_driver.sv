// ------------------------------------------------------------
// reset_driver
//
// Owns rst_n exclusively. Drives an async low pulse, then
// releases. Does NOT touch any other interface and does NOT
// poke into other agents -- the handshake is done by the other
// drivers waiting on rst_n via reset_if (see uart_driver).
//
// Reset semantics:
//   - rst_n starts at 0 (from reset_if's initial block).
//   - Each sequence item = { delay; rst_n=0; #pulse_width; rst_n=1; }.
//   - Drive is asynchronous to clk (matches DUT's negedge PRESETn).
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class reset_driver extends uvm_driver #(reset_seq_item);

    `uvm_component_utils(reset_driver)

    virtual reset_if rst_vif;

    function new(string name = "reset_driver", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_resource_db#(virtual reset_if)::read_by_name(
                get_full_name(), "rst_vif", rst_vif))
            `uvm_fatal(get_type_name(), "reset_if not set")
    endfunction

    task run_phase(uvm_phase phase);
        // Make sure we own the line from time 0
        rst_vif.rst_n = 1'b0;

        forever begin
            seq_item_port.get_next_item(req);
            drive_reset(req);
            seq_item_port.item_done();
        end
    endtask

    task drive_reset(reset_seq_item tr);
        if (tr.delay > 0) #(tr.delay);

        // ---- ASSERT (async) ----
        rst_vif.rst_n = 1'b0;
        `uvm_info(get_type_name(),
                  $sformatf("RESET ASSERT  @ %0t (pulse_width=%0t)", $time, tr.pulse_width),
                  UVM_LOW)

        // ---- HOLD ----
        #(tr.pulse_width);

        // ---- DEASSERT (async) ----
        rst_vif.rst_n = 1'b1;
        `uvm_info(get_type_name(),
                  $sformatf("RESET DEASSERT @ %0t", $time),
                  UVM_LOW)
    endtask

endclass

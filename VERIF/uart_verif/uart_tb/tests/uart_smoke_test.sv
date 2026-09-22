// ------------------------------------------------------------
// uart_smoke_test.sv
//
// Runs all four mandatory modes back-to-back in one test:
// D1_TO_D2, D2_TO_D1, HALF_DUPLEX, FULL_DUPLEX. Each mode's own
// uart_virtual_sequence.body() already does its own reset +
// config + d1-only register regression before the data-transfer
// portion, so each call here is a complete, self-contained
// scenario.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_smoke_test extends uart_base_test;

    `uvm_component_utils(uart_smoke_test)

    function new(string name = "uart_smoke_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    virtual task run_phase(uvm_phase phase);
        phase.raise_objection(this);

        `uvm_info(get_type_name(), "=== SMOKE: D1_TO_D2 ===", UVM_LOW)
        run_scenario(uart_virtual_sequence::D1_TO_D2, 4);

        `uvm_info(get_type_name(), "=== SMOKE: D2_TO_D1 ===", UVM_LOW)
        run_scenario(uart_virtual_sequence::D2_TO_D1, 4);

        `uvm_info(get_type_name(), "=== SMOKE: HALF_DUPLEX ===", UVM_LOW)
        run_scenario(uart_virtual_sequence::HALF_DUPLEX, 4);

        `uvm_info(get_type_name(), "=== SMOKE: FULL_DUPLEX ===", UVM_LOW)
        run_scenario(uart_virtual_sequence::FULL_DUPLEX, 4);

        phase.drop_objection(this);
    endtask

endclass

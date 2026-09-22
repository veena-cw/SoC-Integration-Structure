// ------------------------------------------------------------
// uart_sequencer.sv
//
// Used by both the d1 and d2 uart_agent instances. d1's
// sequencer additionally gets hooked to the RAL model's
// default_map in uart_env (ral_model.default_map.set_sequencer),
// which is a connect_phase wiring decision made in the env --
// this class itself carries nothing RAL-specific.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_sequencer extends uvm_sequencer #(uart_seq_item);

    `uvm_component_utils(uart_sequencer)

    function new(string name = "uart_sequencer", uvm_component parent = null);
        super.new(name, parent);
    endfunction

endclass

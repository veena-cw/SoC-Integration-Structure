// ------------------------------------------------------------
// uart_virtual_sequencer.sv
//
// Holds one sequencer handle per agent, plus the shared RAL
// model and adapter -- uart_virtual_sequence needs both handles
// to redirect ral_model.default_map between d1_sequencer and
// d2_sequencer depending on which device is sending/receiving
// for the current transfer (see redirect_to_d1()/redirect_to_d2()
// in uart_virtual_sequence.sv).
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_virtual_sequencer extends uvm_sequencer;

    `uvm_component_utils(uart_virtual_sequencer)

    uart_sequencer   d1_sequencer;
    uart_sequencer   d2_sequencer;
    reset_sequencer  reset_seqr;

    uart_ral_block   ral_model;
    uart_apb_adapter adapter;

    // Set by uart_env.connect_phase() -- lets uart_virtual_sequence
    // tell the scoreboard to discard a dangling expected-queue
    // entry when recv_byte_on_d1/d2 times out. See
    // uart_scoreboard.discard_d1_to_d2_pending()/
    // discard_d2_to_d1_pending() for why this matters.
    uart_scoreboard scoreboard;

    function new(string name = "uart_virtual_sequencer", uvm_component parent = null);
        super.new(name, parent);
    endfunction

endclass

// ------------------------------------------------------------
// reset_sequence.sv
//
// Emits one reset_seq_item on a reset_agent's sequencer.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class reset_sequence extends uvm_sequence #(reset_seq_item);

    `uvm_object_utils(reset_sequence)

    int unsigned delay_cycles = 0;
    int unsigned pulse_cycles = 10;

    function new(string name = "reset_sequence");
        super.new(name);
    endfunction

    virtual task body();
        reset_seq_item tr;
        tr = reset_seq_item::type_id::create("tr");
        start_item(tr);
        tr.delay_cycles = delay_cycles;
        tr.pulse_cycles = pulse_cycles;
        finish_item(tr);
    endtask

endclass

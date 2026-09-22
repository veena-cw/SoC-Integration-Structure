// ------------------------------------------------------------
// reset_sequence
//
// A uvm_sequence that emits one reset_seq_item. This is what
// callers must use -- reset_seq_item itself is a
// uvm_sequence_item and has no start() method.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class reset_sequence extends uvm_sequence #(reset_seq_item);

    `uvm_object_utils(reset_sequence)

    rand time delay;
    rand time pulse_width;

    function new(string name = "reset_sequence");
        super.new(name);
        delay       = 0;
        pulse_width = 100;
    endfunction

    virtual task body();
        reset_seq_item tr;
        tr = reset_seq_item::type_id::create("tr");
        tr.delay       = delay;
        tr.pulse_width = pulse_width;

        start_item(tr);
        finish_item(tr);
    endtask

endclass

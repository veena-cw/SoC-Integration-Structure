// ------------------------------------------------------------
// reset_seq_item.sv
//
// Carries a single reset pulse request: optional delay before
// asserting, and pulse width (how long rst_n stays low).
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class reset_seq_item extends uvm_sequence_item;

    `uvm_object_utils(reset_seq_item)

    rand time delay;        // wait this long before asserting rst_n = 0
    rand time pulse_width;  // how long to hold rst_n = 0

    constraint c_sane {
        delay       >= 0;
        pulse_width >  0;
    }

    function new(string name = "reset_seq_item");
        super.new(name);
        delay       = 0;
        pulse_width = 100;   // 10 clocks at 10ns period
    endfunction

    function string convert2string();
        return $sformatf("delay=%0t pulse_width=%0t", delay, pulse_width);
    endfunction

endclass

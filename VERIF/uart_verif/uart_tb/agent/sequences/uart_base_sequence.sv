`include "uvm_macros.svh"
import uvm_pkg::*;

// ------------------------------------------------------------
// uart_base_sequence
//
// Common base for the raw-APB sequences below. Holds nothing
// today beyond the uvm_sequence parameterization; kept as its
// own class so shared helpers can be added later without
// touching every leaf sequence.
// ------------------------------------------------------------

class uart_base_sequence extends uvm_sequence #(uart_seq_item);

    `uvm_object_utils(uart_base_sequence)

    function new(string name = "uart_base_sequence");
        super.new(name);
    endfunction

endclass

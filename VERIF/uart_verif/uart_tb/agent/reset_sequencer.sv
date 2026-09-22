`include "uvm_macros.svh"
import uvm_pkg::*;

class reset_sequencer extends uvm_sequencer #(reset_seq_item);

    `uvm_component_utils(reset_sequencer)

    function new(string name = "reset_sequencer", uvm_component parent = null);
        super.new(name, parent);
    endfunction

endclass

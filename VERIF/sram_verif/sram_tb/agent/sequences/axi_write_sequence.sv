// ------------------------------------------------------------
// axi_write_sequence.sv -- num_txn random writes within the knobs.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class axi_write_sequence extends axi_base_sequence;

    `uvm_object_utils(axi_write_sequence)

    // UVM constructor.
    function new(string name = "axi_write_sequence");
        super.new(name);
    endfunction

    // num_txn random writes within the knobs.
    virtual task body();
        axi_seq_item tr;
        repeat (num_txn) gen_and_send(1'b1, tr);
    endtask

endclass

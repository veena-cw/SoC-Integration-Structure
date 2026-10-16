// ------------------------------------------------------------
// axi_read_sequence.sv -- num_txn random reads within the knobs.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class axi_read_sequence extends axi_base_sequence;

    `uvm_object_utils(axi_read_sequence)

    function new(string name = "axi_read_sequence");
        super.new(name);
    endfunction

    virtual task body();
        axi_seq_item tr;
        repeat (num_txn) gen_and_send(1'b0, tr);
    endtask

endclass

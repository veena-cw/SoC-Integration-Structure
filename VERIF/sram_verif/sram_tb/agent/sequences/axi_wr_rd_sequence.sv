// ------------------------------------------------------------
// axi_wr_rd_sequence.sv
//
// num_txn x { random write within the knobs ; read back the same
// burst shape }. The scoreboard checks the read data against its
// byte-level memory model.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class axi_wr_rd_sequence extends axi_base_sequence;

    `uvm_object_utils(axi_wr_rd_sequence)

    // UVM constructor.
    function new(string name = "axi_wr_rd_sequence");
        super.new(name);
    endfunction

    // num_txn x (random write, then read back the same burst shape).
    virtual task body();
        axi_seq_item wr, rd;
        repeat (num_txn) begin
            gen_and_send(1'b1, wr);
            if (wr.aborted) continue;
            read_back(wr, rd);
        end
    endtask

endclass

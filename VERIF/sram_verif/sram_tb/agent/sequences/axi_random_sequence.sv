// ------------------------------------------------------------
// axi_random_sequence.sv
//
// Random mix of writes and reads within the knobs. write_pct of
// the bursts are writes; half of the reads re-read the shape of
// an earlier write (so data is really checked), the rest are
// fully random reads (unwritten bytes must read back as zero).
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class axi_random_sequence extends axi_base_sequence;

    `uvm_object_utils(axi_random_sequence)

    int unsigned write_pct = 50;

    function new(string name = "axi_random_sequence");
        super.new(name);
    endfunction

    virtual task body();
        axi_seq_item tr, hist[$];
        repeat (num_txn) begin
            if ($urandom_range(1, 100) <= write_pct || hist.size() == 0) begin
                gen_and_send(1'b1, tr);
                if (!tr.aborted) hist.push_back(tr);
                if (hist.size() > 64) void'(hist.pop_front());
            end
            else if ($urandom_range(0, 1))
                read_back(hist[$urandom_range(0, hist.size() - 1)], tr);
            else
                gen_and_send(1'b0, tr);
        end
    endtask

endclass

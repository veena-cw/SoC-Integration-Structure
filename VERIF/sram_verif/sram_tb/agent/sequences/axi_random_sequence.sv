// ------------------------------------------------------------
// axi_random_sequence.sv
//
// Random mix of writes and reads within the knobs. write_pct of
// the bursts are writes; half of the reads re-read the shape of
// an earlier write (so data is really checked), the rest are
// fully random reads (unwritten bytes must read back as zero).
// With exclusive_en in the agent config, ~1 in 10 steps is an
// exclusive read/write pair instead (see axi_base_sequence).
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class axi_random_sequence extends axi_base_sequence;

    `uvm_object_utils(axi_random_sequence)

    int unsigned write_pct = 50;

    // UVM constructor.
    function new(string name = "axi_random_sequence");
        super.new(name);
    endfunction

    // num_txn random steps: write, re-read of an earlier write, random read,
    // or (exclusive_en) an exclusive pair.
    virtual task body();
        axi_seq_item tr, hist[$];
        repeat (num_txn) begin
            if (get_cfg().exclusive_en && $urandom_range(1, 10) == 1)
                excl_pair($urandom_range(0, 2) == 0);
            else if ($urandom_range(1, 100) <= write_pct || hist.size() == 0) begin
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

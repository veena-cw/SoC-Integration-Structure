// ------------------------------------------------------------
// axi_exclusive_sequence.sv
//
// num_txn exclusive read/write pairs (AXI4 A7.2), one in three
// with a normal write to the same bytes in between. Does nothing
// unless the agent config has exclusive_en=1 (off for sram_top).
// Responses are checked by sram_scoreboard against
// cfg.slave_exclusive.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class axi_exclusive_sequence extends axi_base_sequence;

    `uvm_object_utils(axi_exclusive_sequence)

    function new(string name = "axi_exclusive_sequence");
        super.new(name);
    endfunction

    virtual task body();
        if (!get_cfg().exclusive_en) begin
            `uvm_info(get_type_name(), "exclusive_en=0 -- skipped", UVM_LOW)
            return;
        end
        repeat (num_txn) excl_pair($urandom_range(0, 2) == 0);
    endtask

endclass

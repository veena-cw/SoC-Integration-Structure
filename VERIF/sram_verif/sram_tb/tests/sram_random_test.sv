// ------------------------------------------------------------
// sram_random_test.sv
//
// Constrained-random mix over the whole stimulus space: every
// size, length, burst type, aligned/unaligned start, strobe
// mode and ID, across the full 1 MB window. +NUM_TXN=<n>.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class sram_random_test extends sram_base_test;

    `uvm_component_utils(sram_random_test)

    function new(string name = "sram_random_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    virtual task run_main();
        axi_random_sequence s = axi_random_sequence::type_id::create("s");
        s.num_txn   = num_txn;
        s.write_pct = 50;
        s.start(env.axi_agt.sequencer);
    endtask

endclass

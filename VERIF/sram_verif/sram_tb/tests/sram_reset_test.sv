// ------------------------------------------------------------
// sram_reset_test.sv
//
// Resets both domains (aresetn and sram_resetn, asserted at the
// same instant, SRAM side released last) in the middle of random
// traffic, several times, then runs clean traffic to prove
// recovery. Bytes touched by aborted writes are excluded from
// checking until rewritten (see sram_scoreboard).
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class sram_reset_test extends sram_base_test;

    `uvm_component_utils(sram_reset_test)

    // UVM constructor.
    function new(string name = "sram_reset_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // Random traffic with resets of both domains in the middle of it.
    virtual task run_main();
        sram_reset_traffic_vseq v = sram_reset_traffic_vseq::type_id::create("v");
        v.num_resets    = 3;
        v.txn_per_phase = 20;
        v.start(env.virt_seqr);
    endtask

endclass

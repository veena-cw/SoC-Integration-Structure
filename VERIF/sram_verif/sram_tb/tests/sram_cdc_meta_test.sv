// ------------------------------------------------------------
// sram_cdc_meta_test.sv
//
// Test plan CDC_006 -- metastability injection. With injection on
// (cdc_meta_ctrl::pct = 30), every time an input of one of the four
// 2-flop pointer synchronizers changes, there is a 30 % chance that
// the first flop captures the old value of the changing bit, so the
// new pointer reaches the other domain one clock late (tb_top,
// CDC_META_INJECT). The design must not care: the scoreboard must
// see exactly the same data, and the Gray / synchronizer SVA
// (cdc_checks.sv, CDC_005) must stay quiet.
//
// Traffic: constrained-random write/read mix plus write/read-back of
// random bursts (default random delays).
// check_phase: every synchronizer must have been injected at least
// once; the per-synchronizer counts are printed.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class sram_cdc_meta_test extends sram_base_test;

    `uvm_component_utils(sram_cdc_meta_test)

    localparam int unsigned META_PCT = 30;

    // UVM constructor.
    function new(string name = "sram_cdc_meta_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // Turn metastability injection on before any traffic.
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        cdc_meta_ctrl::set_pct(META_PCT);
    endfunction

    // Random mix, then write / read-back pairs.
    virtual task run_main();
        axi_random_sequence s = axi_random_sequence::type_id::create("s");
        s.num_txn   = num_txn;
        s.write_pct = 50;
        s.start(env.axi_agt.sequencer);
        wr_rd_seq(40, 0, 4, 0, 15, 1, 1, 1).start(env.axi_agt.sequencer);
    endtask

    // Every synchronizer must have been hit; print the counts.
    function void check_phase(uvm_phase phase);
        string names[4] = '{"req_wptr_sync", "req_rptr_sync", "resp_wptr_sync", "resp_rptr_sync"};
        string r = $sformatf("\n  metastability injections (%0d %% per input change):", META_PCT);
        super.check_phase(phase);
        foreach (names[i]) begin
            int unsigned n = cdc_meta_ctrl::count.exists(names[i]) ? cdc_meta_ctrl::count[names[i]] : 0;
            r = {r, $sformatf("\n    %-15s %0d", names[i], n)};
            if (n == 0)
                `uvm_error(get_type_name(), $sformatf("no metastability injected on %s", names[i]))
        end
        `uvm_info(get_type_name(), r, UVM_NONE)
    endfunction

endclass

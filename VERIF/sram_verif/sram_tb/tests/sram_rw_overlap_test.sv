// ------------------------------------------------------------
// sram_rw_overlap_test.sv
//
// Test plan ARB_001 -- read/write mutual exclusion on the
// single-port SRAM. The slave must accept at most one of AW / AR
// per cycle.
//
// The driver runs in pipelined mode (2 outstanding, zero delays),
// so each write is queued together with a read to a different
// 4 KB page and both address channels go valid in the same cycle.
// Every pair is waited for before the next one is queued.
//
// Expected on the current RTL: FAIL. axi4_slave drives awready
// and arready from the same "both FSMs idle" term, so both are
// accepted together. tb_top flags it as WB_RW_OVERLAP; the read
// then waits forever for its data (AXI_TIMEOUT). A correct slave
// accepts one, finishes it, then the other -- and the test passes.
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

// num_txn pairs of { single-beat write to page 2i, read of page 2i+1 },
// queued back to back so AW and AR are presented in the same cycle.
class sram_rw_overlap_seq extends axi_base_sequence;

    `uvm_object_utils(sram_rw_overlap_seq)

    // UVM constructor.
    function new(string name = "sram_rw_overlap_seq");
        super.new(name);
    endfunction

    // Queue one full-width single-beat burst without waiting for its
    // response (the pipelined driver returns the item as soon as it is
    // queued).
    task queue_burst(bit wr, bit [`AXI_ADDR_WIDTH-1:0] a, output axi_seq_item tr);
        tr = axi_seq_item::type_id::create(wr ? "wr" : "rd");
        apply_cfg(tr);
        start_item(tr);
        if (!tr.randomize() with {
                write     == local::wr;
                addr      == local::a;
                len       == 0;
                size      == 4;
                burst     == AXI_INCR;
                strb_mode == STRB_FULL;
                lock      == 1'b0;
            })
            `uvm_fatal(get_type_name(), "queue_burst: randomize failed")
        finish_item(tr);
    endtask

    // Write + read per pair, then wait for both before the next pair.
    // Stops at the first pair that times out: the slave stays hung, so
    // every later pair would only repeat the same timeout.
    virtual task body();
        axi_seq_item wr, rd;
        for (int i = 0; i < num_txn; i++) begin
            queue_burst(1'b1, `SRAM_BASE_ADDR + (2 * i)     * 32'h1000, wr);
            queue_burst(1'b0, `SRAM_BASE_ADDR + (2 * i + 1) * 32'h1000, rd);
            wait_done(wr);
            wait_done(rd);
            if (wr.timed_out || rd.timed_out) begin
                `uvm_info(get_type_name(),
                    $sformatf("pair %0d hung -- slave stuck, stopping", i), UVM_NONE)
                break;
            end
        end
    endtask

endclass

class sram_rw_overlap_test extends sram_base_test;

    `uvm_component_utils(sram_rw_overlap_test)

    // UVM constructor.
    function new(string name = "sram_rw_overlap_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // Pipelined master with no delays, so AW and AR start together;
    // short watchdog because the DUT is expected to hang.
    virtual function void configure_axi(axi_agent_config cfg);
        cfg.set_zero_delays();
        cfg.max_outstanding_wr = 2;
        cfg.max_outstanding_rd = 2;
        cfg.timeout_base       = 500;
        cfg.timeout_per_beat   = 50;
    endfunction

    // 16 write/read pairs presented in the same cycle.
    virtual task run_main();
        sram_rw_overlap_seq s = sram_rw_overlap_seq::type_id::create("s");
        s.num_txn = 16;
        s.start(env.axi_agt.sequencer);
    endtask

endclass

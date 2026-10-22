// ------------------------------------------------------------
// sram_pipelined_test.sv
//
// Several bursts in flight on one channel at a time (pipelined
// driver, 4 outstanding):
//   phase 1: writes only  -- each new AW is presented while the
//            slave is still busy with the previous write, so AWVALID
//            waits for AWREADY
//   (wait until every write has completed)
//   phase 2: reads only   -- the same bursts are read back with up to
//            4 reads queued, so ARVALID waits for ARREADY
// Each phase repeats 4 times. Writes and reads are never presented
// together, so this stays clear of the AW+AR acceptance bug
// (sram_rw_overlap_test). The scoreboard checks the read data.
//
// Covers: cg_sram_handshake addr_wait (RD/WR), cover_aw_while_busy,
// cg_sram_pipe reads.
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

// Queue num_txn random writes without waiting, wait for all of them,
// then queue a read of each written burst and wait for those.
class sram_pipelined_seq extends axi_base_sequence;

    `uvm_object_utils(sram_pipelined_seq)

    // UVM constructor.
    function new(string name = "sram_pipelined_seq");
        super.new(name);
    endfunction

    // Queue a read of the same burst shape as 'shape' without waiting.
    task queue_read(axi_seq_item shape, output axi_seq_item tr);
        tr = axi_seq_item::type_id::create("rd");
        apply_cfg(tr);
        start_item(tr);
        if (!tr.randomize() with {
                write == 1'b0;
                addr  == shape.addr;
                len   == shape.len;
                size  == shape.size;
                burst == shape.burst;
                lock  == 1'b0;
            })
            `uvm_fatal(get_type_name(), "queue_read: randomize failed")
        finish_item(tr);
    endtask

    // Writes-only phase, drain, reads-only phase, drain.
    virtual task body();
        axi_seq_item wr[$], rd[$], tr;

        for (int i = 0; i < num_txn; i++) begin
            gen_and_send(1'b1, tr);          // returns as soon as it is queued
            wr.push_back(tr);
        end
        foreach (wr[i]) wait_done(wr[i]);

        foreach (wr[i]) begin
            queue_read(wr[i], tr);
            rd.push_back(tr);
        end
        foreach (rd[i]) wait_done(rd[i]);
    endtask

endclass

class sram_pipelined_test extends sram_base_test;

    `uvm_component_utils(sram_pipelined_test)

    // UVM constructor.
    function new(string name = "sram_pipelined_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // Pipelined master: up to 4 write and 4 read bursts in flight.
    virtual function void configure_axi(axi_agent_config cfg);
        cfg.max_outstanding_wr = 4;
        cfg.max_outstanding_rd = 4;
    endfunction

    // 4 rounds of { 16 queued writes ; 16 queued reads of them }.
    virtual task run_main();
        for (int k = 0; k < 4; k++) begin
            sram_pipelined_seq s = sram_pipelined_seq::type_id::create("s");
            s.num_txn = 16;
            s.len_max = 15;
            s.start(env.axi_agt.sequencer);
        end
    endtask

endclass

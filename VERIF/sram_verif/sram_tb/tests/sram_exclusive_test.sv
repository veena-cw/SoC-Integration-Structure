// ------------------------------------------------------------
// sram_exclusive_test.sv
//
// Exclusive accesses (AxLOCK=1) to sram_top, which has no exclusive
// monitor: every exclusive read and write must complete with OKAY,
// never EXOKAY, and an exclusive write must still update memory
// (AXI4 A7.2.5). The scoreboard checks both (cfg.slave_exclusive=0).
//
//   1. one exclusive read/write pair per legal beat count
//      (1/2/4/8/16 beats of 8 bytes, <= 128 bytes, aligned)
//   2. 30 random exclusive pairs (a third with a normal write between)
//   3. a normal write + read, so AWLOCK and ARLOCK both fall again
//
// Covers: AWLOCK / ARLOCK toggle, cg_sram_excl OKAY bins.
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

// One exclusive read/write pair (same ID and shape) per beat count.
class sram_excl_beats_seq extends axi_base_sequence;

    `uvm_object_utils(sram_excl_beats_seq)

    // UVM constructor.
    function new(string name = "sram_excl_beats_seq");
        super.new(name);
    endfunction

    // 8-byte beats, 1..16 beats, each burst on its own 128-byte block.
    virtual task body();
        int unsigned beats[5] = '{1, 2, 4, 8, 16};
        axi_seq_item rd, wr;
        foreach (beats[i]) begin
            bit [`AXI_ADDR_WIDTH-1:0] a = `SRAM_BASE_ADDR + 32'h2000 + i * 128;
            directed(1'b0, a, beats[i] - 1, 3, AXI_INCR, STRB_FULL, rd, `AXI_ID_WIDTH'(i), 1'b1, 1'b1);
            directed(1'b1, a, beats[i] - 1, 3, AXI_INCR, STRB_FULL, wr, `AXI_ID_WIDTH'(i), 1'b1, 1'b1);
        end
    endtask

endclass

class sram_exclusive_test extends sram_base_test;

    `uvm_component_utils(sram_exclusive_test)

    // UVM constructor.
    function new(string name = "sram_exclusive_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // Exclusive accesses on, no exclusive monitor expected.
    virtual function void configure_axi(axi_agent_config cfg);
        cfg.exclusive_en    = 1'b1;
        cfg.slave_exclusive = 1'b0;
    endfunction

    // Directed pairs per beat count, random pairs, then a normal write + read.
    virtual task run_main();
        axi_seq_item wr, rd;
        sram_excl_beats_seq    d = sram_excl_beats_seq::type_id::create("d");
        axi_exclusive_sequence s = axi_exclusive_sequence::type_id::create("s");
        d.start(env.axi_agt.sequencer);
        s.num_txn = 30;
        s.start(env.axi_agt.sequencer);
        write_burst(`SRAM_BASE_ADDR, 0, 4, AXI_INCR, STRB_FULL, wr);
        read_back(wr, rd);
    endtask

endclass

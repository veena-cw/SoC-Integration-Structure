// ------------------------------------------------------------
// sram_oor_burst_test.sv
//
// Multi-beat bursts starting outside the SRAM window: every beat
// must return DECERR and the slave must stay alive.
//
// Test plan AXI_ADDR_006. axi4_slave used to go SR_DATA -> SR_REQ for
// beat 2 with no memory request and hang; it now stays in SR_DATA for
// an out-of-range burst (AXI_TIMEOUT from the driver if that regresses).
//
// Reads cover INCR, FIXED, WRAP and a 256-beat INCR. An in-range
// write + read-back before and after them checks the slave recovers
// and that the bad reads left memory alone (scoreboard).
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

class sram_oor_burst_test extends sram_base_test;

    `uvm_component_utils(sram_oor_burst_test)

    // UVM constructor.
    function new(string name = "sram_oor_burst_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // Short watchdog, so a hung out-of-range read fails quickly.
    virtual function void configure_axi(axi_agent_config cfg);
        cfg.timeout_base     = 500;
        cfg.timeout_per_beat = 50;
    endfunction

    // Multi-beat bursts outside the SRAM window (must return DECERR).
    virtual task run_main();
        axi_seq_item      wr, good, rd;
        write_burst(`SRAM_BASE_ADDR + 32'h4000, 7, 4, AXI_INCR, STRB_FULL, good);
        write_burst(`SRAM_END_ADDR + 32'h1, 3,  4, AXI_INCR, STRB_FULL, wr);
        write_burst(32'h0000_1000,         15, 4, AXI_INCR, STRB_FULL, wr);
        read_burst(`SRAM_END_ADDR + 32'h1, 3,   4, AXI_INCR,  rd);
        read_burst(32'h0000_1000,          15,  4, AXI_INCR,  rd);
        read_burst(`SRAM_END_ADDR + 32'h1, 7,   4, AXI_FIXED, rd);
        read_burst(`SRAM_END_ADDR + 32'h1, 3,   4, AXI_WRAP,  rd);
        read_burst(32'h0000_2000,          255, 4, AXI_INCR,  rd);
        read_back(good, rd);
        write_burst(`SRAM_BASE_ADDR + 32'h5000, 3, 4, AXI_INCR, STRB_FULL, wr);
        read_back(wr, rd);
    endtask

endclass

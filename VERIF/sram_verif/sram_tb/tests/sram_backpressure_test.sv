// ------------------------------------------------------------
// sram_backpressure_test.sv
//
// Slow master: long random wvalid gaps and bready / rready
// back-pressure (up to 16 cycles) on random traffic.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class sram_backpressure_test extends sram_base_test;

    `uvm_component_utils(sram_backpressure_test)

    // UVM constructor.
    function new(string name = "sram_backpressure_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // Long random VALID gaps and READY back-pressure (up to 16 cycles).
    virtual function void configure_axi(axi_agent_config cfg);
        cfg.max_addr_delay   = 8;
        cfg.max_wvalid_gap   = 16;
        cfg.max_bready_delay = 16;
        cfg.max_rready_delay = 16;
        cfg.timeout_per_beat = 400;
    endfunction

    // Random write/read-back traffic under heavy back-pressure.
    virtual task run_main();
        wr_rd_seq(60, 0, 4, 0, 31, 1, 1, 1).start(env.axi_agt.sequencer);
    endtask

endclass

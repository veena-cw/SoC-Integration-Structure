// ------------------------------------------------------------
// sram_oor_burst_test.sv
//
// Multi-beat bursts starting outside the SRAM window: every beat
// must return DECERR and the slave must stay alive.
//
// NOTE: from RTL review, axi4_slave returns the first beat from
// SR_DATA, then moves to SR_REQ for beat 2 without issuing a
// memory request, so a multi-beat out-of-range READ is expected
// to hang -- the driver watchdog reports it as AXI_TIMEOUT.
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

class sram_oor_burst_test extends sram_base_test;

    `uvm_component_utils(sram_oor_burst_test)

    function new(string name = "sram_oor_burst_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    virtual function void configure_axi(axi_agent_config cfg);
        cfg.timeout_base     = 500;
        cfg.timeout_per_beat = 50;
    endfunction

    virtual task run_main();
        axi_seq_item      wr, rd;
        write_burst(`SRAM_END_ADDR + 32'h1, 3,  4, AXI_INCR, STRB_FULL, wr);
        write_burst(32'h0000_1000,         15, 4, AXI_INCR, STRB_FULL, wr);
        read_burst(`SRAM_END_ADDR + 32'h1, 3,  4, AXI_INCR, rd);
        read_burst(32'h0000_1000,         15, 4, AXI_INCR, rd);
    endtask

endclass

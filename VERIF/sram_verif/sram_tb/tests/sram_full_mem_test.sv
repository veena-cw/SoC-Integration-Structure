// ------------------------------------------------------------
// sram_full_mem_test.sv
//
// Writes every one of the 65536 words (256 x 256-beat INCR
// bursts, 16 B/beat) and reads the whole 1 MB back. Long run.
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

class sram_full_mem_test extends sram_base_test;

    `uvm_component_utils(sram_full_mem_test)

    function new(string name = "sram_full_mem_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    virtual function void configure_axi(axi_agent_config cfg);
        cfg.set_zero_delays();
    endfunction

    virtual task run_main();
        axi_seq_item      wr, rd;
        for (int i = 0; i < 256; i++)
            write_burst(`SRAM_BASE_ADDR + i * 32'h1000, 255, 4, AXI_INCR, STRB_FULL, wr);
        for (int i = 0; i < 256; i++)
            read_burst(`SRAM_BASE_ADDR + i * 32'h1000, 255, 4, AXI_INCR, rd);
    endtask

endclass

// ------------------------------------------------------------
// sram_strobe_test.sv
//
// WSTRB coverage:
//   * random sparse strobes at every size, aligned/unaligned
//   * all-zero strobes (memory must not change)
//   * full-word write then random-strobe overwrite, read back
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

class sram_strobe_test extends sram_base_test;

    `uvm_component_utils(sram_strobe_test)

    // UVM constructor.
    function new(string name = "sram_strobe_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // Random, zero and overwrite strobe patterns at every size.
    virtual task run_main();
        axi_seq_item      wr, rd;
        bit [31:0]        a;

        for (int sz = 0; sz <= 4; sz++) begin
            wr_rd_seq(8, sz, sz, 0, 15, 1, 1, 1, -1, STRB_RANDOM).start(env.axi_agt.sequencer);
            wr_rd_seq(4, sz, sz, 0, 7,  1, 1, 1, -1, STRB_ZERO  ).start(env.axi_agt.sequencer);
        end
        for (int i = 0; i < 32; i++) begin
            a = `SRAM_BASE_ADDR + 32'h6_0000 + i * 32'h40;
            write_burst(a, 3, 4, AXI_INCR, STRB_FULL,   wr);
            write_burst(a, 3, 4, AXI_INCR, STRB_RANDOM, wr);
            write_burst(a, 3, 4, AXI_INCR, STRB_ZERO,   wr);
            read_back(wr, rd);
        end
    endtask

endclass

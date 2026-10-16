// ------------------------------------------------------------
// sram_unaligned_test.sv
//
// Unaligned start addresses (addr not a multiple of 2^AxSIZE).
// Legal for FIXED and INCR with AxSIZE>0 (WRAP must be aligned).
//   1. random unaligned FIXED / INCR bursts for sizes 2..16 B
//   2. directed: every non-aligned byte offset for each size,
//      INCR len=3 and FIXED len=1
// The first beat is a partial transfer: only lanes from the
// start address to the end of its size container are valid.
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

class sram_unaligned_test extends sram_base_test;

    `uvm_component_utils(sram_unaligned_test)

    function new(string name = "sram_unaligned_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    virtual task run_main();
        axi_seq_item      wr, rd;
        bit [31:0]        a;

        for (int sz = 1; sz <= 4; sz++) begin
            `uvm_info(get_type_name(), $sformatf("UNALIGNED random size=%0d (%0d B)", sz, 1 << sz), UVM_LOW)
            wr_rd_seq(8, sz, sz, 0, 15, 1, 0, 0, 0).start(env.axi_agt.sequencer);  // FIXED
            wr_rd_seq(8, sz, sz, 0, 63, 0, 1, 0, 0).start(env.axi_agt.sequencer);  // INCR
        end
        for (int sz = 1; sz <= 4; sz++) begin
            for (int off = 1; off < (1 << sz); off++) begin
                a = `SRAM_BASE_ADDR + 32'h2000 + sz * 32'h100 + off;
                write_burst(a, 3, sz, AXI_INCR, STRB_FULL, wr);
                read_back(wr, rd);
                write_burst(a + 32'h40, 1, sz, AXI_FIXED, STRB_FULL, wr);
                read_back(wr, rd);
            end
        end
    endtask

endclass

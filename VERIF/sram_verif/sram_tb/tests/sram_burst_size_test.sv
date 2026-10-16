// ------------------------------------------------------------
// sram_burst_size_test.sv
//
// AxSIZE sweep 0..4 (1, 2, 4, 8, 16 bytes per beat):
//   * every legal burst type x aligned / unaligned, random len
//   * a maximum-length (256-beat) INCR burst at each size
// Narrow transfers exercise the byte-lane steering inside the
// 128-bit word.
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

class sram_burst_size_test extends sram_base_test;

    `uvm_component_utils(sram_burst_size_test)

    function new(string name = "sram_burst_size_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    virtual task run_main();
        axi_seq_item      wr, rd;
        for (int sz = 0; sz <= 4; sz++) begin
            `uvm_info(get_type_name(), $sformatf("SIZE %0d (%0d B/beat)", sz, 1 << sz), UVM_LOW)
            wr_rd_seq(5, sz, sz, 0, 15, 1, 1, 1, 1).start(env.axi_agt.sequencer);
            if (sz > 0)
                wr_rd_seq(5, sz, sz, 0, 15, 1, 1, 0, 0).start(env.axi_agt.sequencer);

            write_burst(`SRAM_BASE_ADDR + 32'h4_0000 + sz * 32'h1000, 255, sz, AXI_INCR, STRB_FULL, wr);
            read_back(wr, rd);
        end
    endtask

endclass

// ------------------------------------------------------------
// sram_aligned_test.sv
//
// Aligned start addresses only: every AxSIZE (1..16 B) x every
// burst type (FIXED / INCR / WRAP), random lengths, write then
// read back.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class sram_aligned_test extends sram_base_test;

    `uvm_component_utils(sram_aligned_test)

    // UVM constructor.
    function new(string name = "sram_aligned_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // Aligned bursts: every size x FIXED / INCR / WRAP, written and read back.
    virtual task run_main();
        for (int sz = 0; sz <= 4; sz++) begin
            `uvm_info(get_type_name(), $sformatf("ALIGNED size=%0d (%0d B)", sz, 1 << sz), UVM_LOW)
            wr_rd_seq(6, sz, sz, 0, 15, 1, 0, 0, 1).start(env.axi_agt.sequencer);  // FIXED
            wr_rd_seq(6, sz, sz, 0, 63, 0, 1, 0, 1).start(env.axi_agt.sequencer);  // INCR
            wr_rd_seq(6, sz, sz, 0, 15, 0, 0, 1, 1).start(env.axi_agt.sequencer);  // WRAP
        end
    endtask

endclass

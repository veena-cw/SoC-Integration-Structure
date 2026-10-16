// ------------------------------------------------------------
// sram_back2back_test.sv
//
// Zero-delay master: no wvalid gaps, bready/rready always high.
// Long full-width INCR bursts stress the request path through
// the CDC FIFO (writes at aclk rate into the 750 MHz domain).
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

class sram_back2back_test extends sram_base_test;

    `uvm_component_utils(sram_back2back_test)

    function new(string name = "sram_back2back_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    virtual function void configure_axi(axi_agent_config cfg);
        cfg.set_zero_delays();
        cfg.w_before_aw_en = 1'b1;
    endfunction

    virtual task run_main();
        axi_seq_item      wr, rd;
        for (int i = 0; i < 8; i++) begin
            write_burst(`SRAM_BASE_ADDR + 32'hA_0000 + i * 32'h1000, 255, 4, AXI_INCR, STRB_FULL, wr);
            read_back(wr, rd);
        end
        wr_rd_seq(50, 0, 4, 0, 255, 1, 1, 1).start(env.axi_agt.sequencer);
    endtask

endclass

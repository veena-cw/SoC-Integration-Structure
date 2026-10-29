// ------------------------------------------------------------
// sram_req_fifo_full_test.sv
//
// Read issued while the CDC request FIFO is full: the read FSM must
// wait in SR_REQ until mem_ready returns (axi4_slave.sv, "if
// (mem_ready)" in SR_REQ -- its else branch is the code-coverage
// target).
//
// Run with a slow sram_clk (test_names/testcase passes
// +SRAM_CLK_MHZ=25; zero AXI delays are set here), so the SRAM side
// drains the request FIFO far slower than aclk fills it:
//   phase 1: FIFO_DEPTH-beat writes -- exactly fill the 8-entry
//            request FIFO; the read address follows the write
//            response with no gap and stalls in SR_REQ
//   phase 2: 2*FIFO_DEPTH-beat writes -- overflow the FIFO mid-burst.
//            sram_top must hold WREADY low while mem_ready is low
//            (W gated in sram_top.sv, the WB_WRITE_DROP fix): no beat
//            may be lost -- tb_top flags a drop as WB_WRITE_DROP and
//            the read-back would mismatch in the scoreboard.
// The scoreboard checks the read data.
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

class sram_req_fifo_full_test extends sram_base_test;

    `uvm_component_utils(sram_req_fifo_full_test)

    localparam int unsigned FIFO_DEPTH = 8;

    // UVM constructor.
    function new(string name = "sram_req_fifo_full_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // No VALID/READY gaps, so the read follows the write response at once.
    virtual function void configure_axi(axi_agent_config cfg);
        cfg.set_zero_delays();
    endfunction

    // Phase 1: bursts that just fill the FIFO; phase 2: bursts that
    // overflow it. Each written burst is read back at once.
    virtual task run_main();
        axi_seq_item wr, rd;
        for (int i = 0; i < 4; i++) begin
            write_burst(`SRAM_BASE_ADDR + i * 32'h1_0000, FIFO_DEPTH - 1, 4, AXI_INCR, STRB_FULL, wr);
            read_back(wr, rd);
        end
        for (int i = 0; i < 4; i++) begin
            write_burst(`SRAM_BASE_ADDR + 32'h8_0000 + i * 32'h1_0000, 2 * FIFO_DEPTH - 1, 4,
                        AXI_INCR, STRB_FULL, wr);
            read_back(wr, rd);
        end
    endtask

endclass

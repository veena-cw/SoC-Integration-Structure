// ------------------------------------------------------------
// sram_fsm_recovery_test.sv
//
// Robustness / code coverage of axi4_slave's write-FSM default
// branch (axi4_slave.sv, "default: sw_state <= SW_IDLE"), which no
// legal traffic can reach: sw_state has only 3 states in 2 bits.
//
//   1. random write / read-back traffic
//   2. with the bus idle, tb_top forces sw_state to the illegal
//      encoding 2'b11 for one clock (uvm_event "inject_sw_illegal")
//      and checks it returns to SW_IDLE (FSM_RECOVERY) -- 4 times
//   3. more random traffic: the slave must still work normally
//
// The read FSM's default branch is not injected: sr_state uses all
// four 2-bit encodings, so that branch is dead code (waived in
// sim/code_cov_waivers.txt).
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class sram_fsm_recovery_test extends sram_base_test;

    `uvm_component_utils(sram_fsm_recovery_test)

    // UVM constructor.
    function new(string name = "sram_fsm_recovery_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // Ask tb_top to force the illegal write-FSM state and wait until it
    // has checked the recovery. Called only while the bus is idle (every
    // burst of wr_rd_seq has completed).
    task inject_illegal_sw_state();
        uvm_event inject = uvm_event_pool::get_global("inject_sw_illegal");
        uvm_event done   = uvm_event_pool::get_global("inject_sw_illegal_done");
        repeat (2) @(posedge env.axi_agt.vif.aclk);
        inject.trigger();
        done.wait_trigger();
        repeat (2) @(posedge env.axi_agt.vif.aclk);
    endtask

    // Traffic, 4 injections between traffic phases, traffic again.
    virtual task run_main();
        wr_rd_seq(10, 0, 4, 0, 15, 1, 1, 1).start(env.axi_agt.sequencer);
        for (int k = 0; k < 4; k++) begin
            inject_illegal_sw_state();
            wr_rd_seq(5, 0, 4, 0, 15, 1, 1, 1).start(env.axi_agt.sequencer);
        end
    endtask

endclass

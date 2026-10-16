// ------------------------------------------------------------
// axi_agent_config.sv
//
// Active/passive + timing knobs for the AXI master driver.
// All delays are in aclk cycles and chosen uniformly in
// [0 : max_*] per address phase / beat / response.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class axi_agent_config extends uvm_object;

    `uvm_object_utils(axi_agent_config)

    uvm_active_passive_enum is_active       = UVM_ACTIVE;
    bit                     coverage_enable = 1'b1;

    int unsigned max_addr_delay   = 2;  // before AWVALID / ARVALID
    int unsigned max_wvalid_gap   = 2;  // idle cycles between W beats
    int unsigned max_bready_delay = 2;  // BREADY held low
    int unsigned max_rready_delay = 2;  // RREADY held low per beat

    // 1: W may start before / together with AW. 0: W waits for AW.
    bit          w_before_aw_en   = 1'b1;

    // Watchdog per transaction:
    //   timeout_base + timeout_per_beat * (len+1)  aclk cycles
    int unsigned timeout_base     = 2000;
    int unsigned timeout_per_beat = 200;

    function new(string name = "axi_agent_config");
        super.new(name);
    endfunction

    function void set_zero_delays();
        max_addr_delay   = 0;
        max_wvalid_gap   = 0;
        max_bready_delay = 0;
        max_rready_delay = 0;
    endfunction

endclass

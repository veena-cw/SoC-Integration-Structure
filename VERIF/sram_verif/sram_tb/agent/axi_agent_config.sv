// ------------------------------------------------------------
// axi_agent_config.sv
//
// Active/passive + timing knobs for the AXI master driver.
// All delays are in aclk cycles and chosen uniformly in
// [0 : max_*] per address phase / beat / response.
//
// Optional AXI4 features (IHI0022). The agent supports all of
// them; sram_top does not, so every one is OFF by default and the
// SRAM tests leave them off. sram_base_test can turn them on with
// plusargs (+AXI4_EXCLUSIVE, +AXI4_OUTSTANDING=<n>, ...).
//
//   exclusive_en       : sequences may issue exclusive accesses
//                        (AxLOCK=1, A7.2). Otherwise AxLOCK=0.
//   slave_exclusive    : the slave has an exclusive monitor, so the
//                        scoreboard expects EXOKAY / failed writes.
//                        0 = slave without exclusive support: OKAY,
//                        and an exclusive write updates memory.
//   region_en          : random AxREGION (else 0)
//   user_en            : random AxUSER / WUSER (else 0)
//   max_outstanding_wr : write bursts in flight at once (1 = one
//   max_outstanding_rd : burst at a time, the original behaviour)
//   rd_interleave_ok   : slave may interleave R beats of different
//                        IDs (A5.3.1); otherwise it is an error
//   hazard_guard       : with >1 outstanding, hold a burst until no
//                        in-flight burst overlaps its bytes (keeps the
//                        scoreboard's ordering assumption valid for
//                        any slave)
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

    // ---- Optional AXI4 features (all off for sram_top) ----------
    bit          exclusive_en       = 1'b0;
    bit          slave_exclusive    = 1'b0;
    bit          region_en          = 1'b0;
    bit          user_en            = 1'b0;
    int unsigned max_outstanding_wr = 1;
    int unsigned max_outstanding_rd = 1;
    bit          rd_interleave_ok   = 1'b0;
    bit          hazard_guard       = 1'b1;

    // UVM constructor; all knobs keep the defaults declared above.
    function new(string name = "axi_agent_config");
        super.new(name);
    endfunction

    // Remove every random delay: VALID as early as possible, READY always high.
    function void set_zero_delays();
        max_addr_delay   = 0;
        max_wvalid_gap   = 0;
        max_bready_delay = 0;
        max_rready_delay = 0;
    endfunction

    // 1 when more than one burst may be in flight (driver pipelined mode).
    function bit pipelined();
        return (max_outstanding_wr > 1) || (max_outstanding_rd > 1);
    endfunction

    // One-line summary of the optional AXI4 feature knobs (driver log).
    function string convert2string();
        return $sformatf({"exclusive_en=%0b slave_exclusive=%0b region_en=%0b user_en=%0b ",
                          "outstanding wr/rd=%0d/%0d rd_interleave_ok=%0b hazard_guard=%0b"},
                         exclusive_en, slave_exclusive, region_en, user_en,
                         max_outstanding_wr, max_outstanding_rd, rd_interleave_ok, hazard_guard);
    endfunction

endclass

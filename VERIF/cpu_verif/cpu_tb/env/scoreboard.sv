// scoreboard.sv
// Two checks, matching what's described in the test plan (section 4/8):
//   1. tohost decode  - BlackParrot's host convention: program writes 0 => PASS,
//      a nonzero value indicates failure, to the tohost address. This alone is
//      enough to gate the selected BP-DV test pass/fail.
//   2. reference-model hook (commit-level) - stubbed here via a DPI import so this
//      environment can be extended from "does it finish cleanly" to full
//      instruction-by-instruction comparison against Spike/Dromajo without
//      changing the agent or sequences. See reference_model_pkg.sv.

`ifndef SCOREBOARD_SV
`define SCOREBOARD_SV

`uvm_analysis_imp_decl(_axi)

class bedrock_scoreboard extends uvm_component;
  `uvm_component_utils(bedrock_scoreboard)

  uvm_analysis_imp #(bedrock_txn, bedrock_scoreboard) ap_imp;
  uvm_analysis_imp_axi #(cpu_axi_txn#(), bedrock_scoreboard) axi_imp;

  bit [63:0] tohost_addr = 64'h0010_2000;
  bit        finished;
  bit        test_passed;
  int        test_id;
  int        n_checks;
  int        n_mismatches;
  bit        require_axi_burst;
  bit        axi_burst_seen;
  int        axi_burst_count;
  int        axi_max_burst_beats;

  function new(string name, uvm_component parent);
    super.new(name, parent);
    ap_imp = new("ap_imp", this);
    axi_imp = new("axi_imp", this);
    test_id = 3;
    void'($value$plusargs("BP_TEST_ID=%d", test_id));
    begin
      int require_burst_arg;
      require_burst_arg = 0;
      void'($value$plusargs("REQUIRE_AXI_BURST=%d", require_burst_arg));
      require_axi_burst = (require_burst_arg != 0);
    end
  endfunction

  // called by the monitor's analysis port for every accepted mem_fwd/mem_rev beat
  function void write(bedrock_txn t);
    n_checks++;

    // Decode tohost writes coming from the DUT side.  The DUT's outbound
    // processor-to-host channel is mem_fwd, so outgoing_mon labels it FWD.
    if (!finished && t.dir == BEDROCK_FWD && t.msg_type == E_MEM_WR && t.addr == tohost_addr) begin
      finished    = 1'b1;
      test_passed = (t.data == 64'h0);
      if (test_passed)
        `uvm_info("SCOREBOARD", $sformatf("tohost == 0 : BP-DV-%03d PASSED", test_id), UVM_NONE)
      else begin
        n_mismatches++;
        `uvm_error("SCOREBOARD", $sformatf("tohost == 0x%0h : BP-DV-%03d FAILED", t.data, test_id))
      end
    end

    // Extension point: for full commit-level checking, call into the reference
    // model here for every retired instruction and compare PC/reg writeback,
    // e.g. reference_model_pkg::step_and_compare(...). Left as a stub so this
    // environment runs standalone without a Spike/Dromajo build dependency.
  endfunction

  function void write_axi(cpu_axi_txn#() t);
    n_checks++;

    if (t.burst_beats > 1) begin
      axi_burst_seen = 1'b1;
      axi_burst_count++;
      if (t.burst_beats > axi_max_burst_beats)
        axi_max_burst_beats = t.burst_beats;
    end

    if (!finished && t.direction == cpu_axi_txn#()::AXI_WRITE && t.addr == tohost_addr) begin
      finished    = 1'b1;
      test_passed = (t.data == 64'h0);
      if (test_passed)
        `uvm_info("SCOREBOARD", $sformatf("AXI tohost == 0 : BP-DV-%03d PASSED", test_id), UVM_NONE)
      else begin
        n_mismatches++;
        `uvm_error("SCOREBOARD", $sformatf("AXI tohost == 0x%0h : BP-DV-%03d FAILED", t.data, test_id))
      end
    end
  endfunction

  function void report_phase(uvm_phase phase);
    super.report_phase(phase);
    if (!finished)
      `uvm_error("SCOREBOARD", $sformatf("BP-DV-%03d did not write tohost before the test ended", test_id))

    `uvm_info("AXI_BURST", $sformatf(
      "seen=%0b transactions=%0d max_beats=%0d required=%0b",
      axi_burst_seen, axi_burst_count, axi_max_burst_beats,
      require_axi_burst), UVM_NONE)

    if (require_axi_burst && !axi_burst_seen) begin
      test_passed = 1'b0;
      n_mismatches++;
      `uvm_error("AXI_BURST",
        "BP-DV-025 expected AWLEN/ARLEN > 0, but no multi-beat AXI burst was observed")
    end

    `uvm_info("SCOREBOARD",
      $sformatf("checks=%0d mismatches=%0d finished=%0b passed=%0b",
                 n_checks, n_mismatches, finished, test_passed), UVM_NONE)
  endfunction

endclass

`endif

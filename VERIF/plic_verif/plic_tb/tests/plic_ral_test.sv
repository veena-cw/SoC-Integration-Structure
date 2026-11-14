//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				:
//  Module            				:
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   :
//=================================================================================
//  Description: xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//=================================================================================

`include "uvm_macros.svh"
import uvm_pkg::*;
import plic_ral_pkg::*;
import plic_ral_block_pkg::*;
import plic_ral_sequences_pkg::*;
import plic_ahb_lite_item_pkg::*;

// -------------------------------------------------------------------
// Base test - ALWAYS includes reset to reach stable known state
// -------------------------------------------------------------------
// TEST NAME: plic_base_test
// PURPOSE: Generic YAML-driven UVM RAL test.
// REGISTERS TESTED: Determined dynamically by the associated sequence.
// REGISTERS SKIPPED: Determined dynamically from access and metadata.
// WHY SKIPPED: Registers unsuitable for the selected verification behavior.
// EXPECTED RESULT: All applicable checks pass without project-specific assumptions.
class plic_base_test extends uvm_test;
  `uvm_component_utils(plic_base_test)
  plic_env env;
  function new(string name = "plic_base_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    env = plic_env::type_id::create("env", this);
  endfunction
  // Central reset task - called at start of every test's run_phase
  task do_reset();
    plic_reset_seq rst_seq;
    rst_seq = plic_reset_seq::type_id::create("rst_seq");
    rst_seq.delay = 0;
    rst_seq.pulse_width = 100; // 100 time units ~ 5-10 clocks, ensures stable reset
    `uvm_info(get_type_name(), $sformatf("BaseTest: driving reset pulse width %0t to reach known stable state", rst_seq.pulse_width), UVM_LOW)
    // rst_seq is a uvm_sequence, rst_tr was a uvm_sequence_item (cannot call start() on item)
    rst_seq.start(env.reset_agent.seqr);
    // Wait for deassert and a couple clocks for DUT stabilization
    wait (env.reset_agent.mon.vif.rst_n === 1'b1);
    #20; // allow DUT to stabilize after reset deassert
    // Also reset RAL mirror/desired to HW reset values for consistency
    env.ral_model.reset();
    `uvm_info(get_type_name(), "BaseTest: reset complete, DUT and RAL in known stable state", UVM_LOW)
  endtask
  // PASS only when the test produced no UVM_ERROR / UVM_FATAL
  function void report_phase(uvm_phase phase);
    uvm_report_server svr = uvm_report_server::get_server();
    int errors = svr.get_severity_count(UVM_ERROR) + svr.get_severity_count(UVM_FATAL);
    super.report_phase(phase);
    if (errors == 0) `uvm_info("TEST_RESULT", $sformatf("*** %s : PASSED ***", get_type_name()), UVM_NONE)
    else             `uvm_info("TEST_RESULT", $sformatf("*** %s : FAILED (%0d errors) ***", get_type_name(), errors), UVM_NONE)
  endfunction
endclass

// Raw AHB transfer with every bus knob exposed (bypasses the RAL adapter so
// HSIZE, HPROT, HBURST, wait states, BUSY and bursts can be driven)
class plic_ahb_raw_seq extends uvm_sequence #(plic_ahb_lite_item);
  `uvm_object_utils(plic_ahb_raw_seq)
  bit [31:0]   addr;
  bit          write;
  bit [31:0]   wdata;
  bit [2:0]    hsize       = 3'b010;
  bit [2:0]    hburst      = 3'b000;
  bit [3:0]    hprot       = 4'b0011;
  int unsigned wait_cycles = 0;
  int unsigned busy_cycles = 0;
  int unsigned beats       = 1;
  bit [31:0]   burst_wdata[$];
  plic_ahb_lite_item item;   // completed transfer (rdata / burst_rdata)

  function new(string name = "plic_ahb_raw_seq");
    super.new(name);
  endfunction

  task body();
    item = plic_ahb_lite_item::type_id::create("item");
    item.addr = addr; item.write = write; item.wdata = wdata;
    item.hsize = hsize; item.hburst = hburst; item.htrans = 2'b10; item.hprot = hprot;
    item.wait_cycles = wait_cycles; item.busy_cycles = busy_cycles; item.beats = beats;
    item.burst_wdata = burst_wdata;
    start_item(item);
    finish_item(item);
  endtask
endclass

// Kept for older test code: a single sub-word read
class plic_ahb_subword_seq extends plic_ahb_raw_seq;
  `uvm_object_utils(plic_ahb_subword_seq)
  function new(string name = "plic_ahb_subword_seq");
    super.new(name);
  endfunction
endclass

// Helpers shared by the bus-level register tests
class plic_ahb_reg_base_test extends plic_base_test;
  `uvm_component_utils(plic_ahb_reg_base_test)
  function new(string name = "plic_ahb_reg_base_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task ahb(bit write, bit [31:0] addr, bit [31:0] wdata = 0, bit [2:0] hsize = 3'b010,
           output bit [31:0] rdata, input bit [3:0] hprot = 4'b0011,
           int unsigned wait_cycles = 0, int unsigned busy_cycles = 0, bit [2:0] hburst = 3'b000);
    plic_ahb_raw_seq seq = plic_ahb_raw_seq::type_id::create("raw");
    seq.addr = addr; seq.write = write; seq.wdata = wdata; seq.hsize = hsize; seq.hprot = hprot;
    seq.wait_cycles = wait_cycles; seq.busy_cycles = busy_cycles; seq.hburst = hburst;
    seq.start(env.agent.sequencer);
    rdata = seq.item.rdata;
  endtask

  task ahb_wr(bit [31:0] addr, bit [31:0] wdata, bit [2:0] hsize = 3'b010);
    bit [31:0] rd;
    ahb(1, addr, wdata, hsize, rd);
  endtask

  // Read the register through RAL and compare with the predicted mirror
  task check_reg(string name, string ctx);
    uvm_status_e status;
    `uvm_info(get_type_name(), $sformatf("[%s] mirror check %s (expect 0x%08h)", ctx, name,
              env.ral_model.get_reg_by_name(name).get_mirrored_value()), UVM_LOW)
    env.ral_model.get_reg_by_name(name).mirror(status, UVM_CHECK);
  endtask

  function bit [31:0] mirrored(string name);
    return env.ral_model.get_reg_by_name(name).get_mirrored_value();
  endfunction
endclass

// TEST NAME: plic_ahb_subword_test
// PURPOSE: AHB byte and half-word transfers. Sub-word reads on every byte
//          lane, sub-word writes to EL / PRIORITY / IE / THRESHOLD on every
//          lane: only the addressed bytes may change (gen_wval byte enables).
//          Each write is followed by a full-word read compared with the
//          byte-merged RAL prediction.
class plic_ahb_subword_test extends plic_ahb_reg_base_test;
  `uvm_component_utils(plic_ahb_subword_test)

  function new(string name = "plic_ahb_subword_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  // Fill the register with a full-word pattern first, so a byte that must
  // keep its value is not simply zero
  task byte_lanes(string name, bit [31:0] base_val, bit [7:0] byte_val);
    bit [31:0] a = env.ral_model.get_reg_by_name(name).get_address();
    ahb_wr(a, base_val);
    check_reg(name, "full-word preset");
    for (int b = 0; b < 4; b++) begin
      ahb_wr(a + b, {4{byte_val ^ b[7:0]}}, 3'b000);   // byte lane b, data on every lane
      check_reg(name, $sformatf("byte write lane %0d", b));
    end
    for (int h = 0; h < 4; h += 2) begin
      ahb_wr(a + h, {2{16'h5A00 | h}}, 3'b001);        // half-word lanes h, h+1
      check_reg(name, $sformatf("half-word write lanes %0d-%0d", h, h + 1));
    end
  endtask

  task run_phase(uvm_phase phase);
    bit [31:0] rd;
    phase.raise_objection(this);
    do_reset();
    // Sub-word reads on every lane (CONFIG_0 is read-only)
    for (int b = 0; b < 4; b++) ahb(0, 32'h0000_0000 + b, 0, 3'b000, rd);
    for (int h = 0; h < 4; h += 2) ahb(0, 32'h0000_0000 + h, 0, 3'b001, rd);

    byte_lanes("EL_0",        32'hA5A5_A5A5, 8'h3C);
    byte_lanes("PRIORITY_0",  32'h7654_3210, 8'h51);
    byte_lanes("PRIORITY_7",  32'h1234_5670, 8'h26);
    byte_lanes("IE_1_1",      32'hF0F0_0F0F, 8'h81);
    byte_lanes("THRESHOLD_2", 32'h0000_0006, 8'h03);
    phase.drop_objection(this);
  endtask
endclass

// -------------------------------------------------------------------
// Base smoke (kept for backward compat) - runs simple reg_access_seq
// -------------------------------------------------------------------
// TEST NAME: plic_ral_test
// PURPOSE: Generic YAML-driven UVM RAL test.
// REGISTERS TESTED: Determined dynamically by the associated sequence.
// REGISTERS SKIPPED: Determined dynamically from access and metadata.
// WHY SKIPPED: Registers unsuitable for the selected verification behavior.
// EXPECTED RESULT: All applicable checks pass without project-specific assumptions.
class plic_ral_test extends plic_base_test;
  `uvm_component_utils(plic_ral_test)
  plic_reg_access_seq seq;
  function new(string name = "plic_ral_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    seq = plic_reg_access_seq::type_id::create("seq", this);
  endfunction
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    do_reset(); // <-- always reset first
    seq.model = env.ral_model;
    seq.start(env.agent.sequencer);
    phase.drop_objection(this);
  endtask
endclass

// -------------------------------------------------------------------
// 1) RESET / DEFAULT VALUE TEST - reads reset values via mirror()
//    Shows: reset (get_reset), mirrored (predictor), desired (get), DUT read
// -------------------------------------------------------------------
// TEST NAME: plic_reg_reset_test
// PURPOSE: Generic YAML-driven UVM RAL test.
// REGISTERS TESTED: Determined dynamically by the associated sequence.
// REGISTERS SKIPPED: Determined dynamically from access and metadata.
// WHY SKIPPED: Registers unsuitable for the selected verification behavior.
// EXPECTED RESULT: All applicable checks pass without project-specific assumptions.
class plic_reg_reset_test extends plic_base_test;
  `uvm_component_utils(plic_reg_reset_test)
  plic_reg_reset_seq seq;
  function new(string name = "plic_reg_reset_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    seq = plic_reg_reset_seq::type_id::create("seq", this);
  endfunction
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    do_reset();
    `uvm_info(get_type_name(), "RESET TEST: verifying default values match mirrored/predictor", UVM_LOW)
    seq.model = env.ral_model;
    seq.start(env.agent.sequencer);
    env.scoreboard.check_reset_values();
    env.scoreboard.check_mirror_desired("after_reset_test");
    phase.drop_objection(this);
  endtask
endclass

// -------------------------------------------------------------------
// 2) WRITE -> READ TEST - write followed by read, desired vs mirrored
// -------------------------------------------------------------------
// TEST NAME: plic_reg_write_read_test
// PURPOSE: Generic YAML-driven UVM RAL test.
// REGISTERS TESTED: Determined dynamically by the associated sequence.
// REGISTERS SKIPPED: Determined dynamically from access and metadata.
// WHY SKIPPED: Registers unsuitable for the selected verification behavior.
// EXPECTED RESULT: All applicable checks pass without project-specific assumptions.
class plic_reg_write_read_test extends plic_base_test;
  `uvm_component_utils(plic_reg_write_read_test)
  plic_reg_write_read_seq seq;
  function new(string name = "plic_reg_write_read_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    seq = plic_reg_write_read_seq::type_id::create("seq", this);
  endfunction
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    do_reset();
    `uvm_info(get_type_name(), "WRITE-READ TEST: frontdoor write then read, check mirrored vs desired", UVM_LOW)
    seq.model = env.ral_model;
    seq.start(env.agent.sequencer);
    env.scoreboard.check_mirror_desired("after_write_read");
    phase.drop_objection(this);
  endtask
endclass

// -------------------------------------------------------------------
// 3) WALKING ONES TEST - walks 1 across each bit, catches stuck bits
// -------------------------------------------------------------------
// TEST NAME: plic_reg_walk_one_test
// PURPOSE: Generic YAML-driven UVM RAL test.
// REGISTERS TESTED: Determined dynamically by the associated sequence.
// REGISTERS SKIPPED: Determined dynamically from access and metadata.
// WHY SKIPPED: Registers unsuitable for the selected verification behavior.
// EXPECTED RESULT: All applicable checks pass without project-specific assumptions.
class plic_reg_walk_one_test extends plic_base_test;
  `uvm_component_utils(plic_reg_walk_one_test)
  plic_reg_walk_one_seq seq;
  function new(string name = "plic_reg_walk_one_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    seq = plic_reg_walk_one_seq::type_id::create("seq", this);
  endfunction
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    do_reset();
    `uvm_info(get_type_name(), "WALKING-ONES TEST: one hot across each register + inverse", UVM_LOW)
    seq.model = env.ral_model;
    seq.start(env.agent.sequencer);
    env.scoreboard.check_mirror_desired("after_walk_one");
    phase.drop_objection(this);
  endtask
endclass

// -------------------------------------------------------------------
// 4) MIRROR / DESIRED / PREDICTOR / SCOREBOARD DEMO TEST
// -------------------------------------------------------------------
// TEST NAME: plic_reg_mirror_predict_test
// PURPOSE: Generic YAML-driven UVM RAL test.
// REGISTERS TESTED: Determined dynamically by the associated sequence.
// REGISTERS SKIPPED: Determined dynamically from access and metadata.
// WHY SKIPPED: Registers unsuitable for the selected verification behavior.
// EXPECTED RESULT: All applicable checks pass without project-specific assumptions.
class plic_reg_mirror_predict_test extends plic_base_test;
  `uvm_component_utils(plic_reg_mirror_predict_test)
  plic_reg_mirror_predict_seq seq;
  function new(string name = "plic_reg_mirror_predict_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    seq = plic_reg_mirror_predict_seq::type_id::create("seq", this);
  endfunction
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    do_reset();
    // Reset checking must happen before this sequence changes RAL desired/mirrored values.
    env.scoreboard.check_reset_values();
    `uvm_info(get_type_name(), "MIRROR/DESIRED TEST: set(desired) -> update(DUT) -> read/mirror(check)", UVM_LOW)
    seq.model = env.ral_model;
    seq.start(env.agent.sequencer);
    env.scoreboard.check_mirror_desired("after_mirror_predict");
    phase.drop_objection(this);
  endtask
endclass

// -------------------------------------------------------------------
// 5) SCOREBOARD INTEGRATION TEST
// -------------------------------------------------------------------
// TEST NAME: plic_scoreboard_test
// PURPOSE: Generic YAML-driven UVM RAL test.
// REGISTERS TESTED: Determined dynamically by the associated sequence.
// REGISTERS SKIPPED: Determined dynamically from access and metadata.
// WHY SKIPPED: Registers unsuitable for the selected verification behavior.
// EXPECTED RESULT: All applicable checks pass without project-specific assumptions.
class plic_scoreboard_test extends plic_base_test;
  `uvm_component_utils(plic_scoreboard_test)
  plic_reg_reset_seq       reset_seq;
  plic_reg_write_read_seq  wr_seq;
  plic_reg_walk_one_seq    walk_seq;
  function new(string name = "plic_scoreboard_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    reset_seq = plic_reg_reset_seq::type_id::create("reset_seq", this);
    wr_seq    = plic_reg_write_read_seq::type_id::create("wr_seq", this);
    walk_seq  = plic_reg_walk_one_seq::type_id::create("walk_seq", this);
  endfunction
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    do_reset();
    `uvm_info(get_type_name(), "SCOREBOARD TEST: reset -> write_read -> walk_one (scoreboard + predictor active)", UVM_LOW)
    reset_seq.model = env.ral_model; reset_seq.start(env.agent.sequencer);
    wr_seq.model    = env.ral_model; wr_seq.start(env.agent.sequencer);
    walk_seq.model  = env.ral_model; walk_seq.start(env.agent.sequencer);
    `uvm_info(get_type_name(), $sformatf("SNOOPED %0d bus transactions, scoreboard will report in report_phase", env.scoreboard.write_cnt), UVM_LOW)
    phase.drop_objection(this);
  endtask
endclass

// TEST NAME: plic_reg_all_ones_test
// PURPOSE: all-ones write to every writable register kind and to the
//          read-only CONFIG registers. Reserved / RO bits must read back as
//          their old value (RAL predicts field by field, RO not at all).
class plic_reg_all_ones_test extends plic_ahb_reg_base_test;
  `uvm_component_utils(plic_reg_all_ones_test)
  function new(string name = "plic_reg_all_ones_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  task run_phase(uvm_phase phase);
    string regs[] = '{"CONFIG_0", "CONFIG_1", "EL_1", "PRIORITY_0", "PRIORITY_5",
                      "IE_2_0", "THRESHOLD_0", "THRESHOLD_3"};
    phase.raise_objection(this);
    do_reset();
    foreach (regs[i]) begin
      ahb_wr(env.ral_model.get_reg_by_name(regs[i]).get_address(), 32'hFFFF_FFFF);
      check_reg(regs[i], "all-ones write");
      ahb_wr(env.ral_model.get_reg_by_name(regs[i]).get_address(), 32'h0000_0000);
      check_reg(regs[i], "zero write");
    end
    phase.drop_objection(this);
  endtask
endclass

// TEST NAME: plic_ahb_protocol_test
// PURPOSE: AHB-Lite protocol corners the RAL path never drives:
//          - HPROT values (ignored by the DUT, accesses must still work)
//          - HREADY low in the address phase (another slave's wait states):
//            the transfer is taken only when HREADY returns high
//          - BUSY after a beat, with HADDR already on the next register:
//            the BUSY address must not be written or read
//          - INCR4 write burst and INCR8 / INCR read bursts
//          - accesses with the upper HADDR bits set (outside the register
//            map): no register may change
class plic_ahb_protocol_test extends plic_ahb_reg_base_test;
  `uvm_component_utils(plic_ahb_protocol_test)
  function new(string name = "plic_ahb_protocol_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task burst(bit write, bit [31:0] addr, bit [2:0] hburst, int unsigned beats,
             bit [31:0] wdata[$], int unsigned busy, string regs[$]);
    plic_ahb_raw_seq seq = plic_ahb_raw_seq::type_id::create("burst");
    seq.addr = addr; seq.write = write; seq.hburst = hburst; seq.beats = beats;
    seq.burst_wdata = wdata; seq.busy_cycles = busy;
    seq.start(env.agent.sequencer);
    if (!write)
      foreach (regs[i])
        if (seq.item.burst_rdata[i] !== mirrored(regs[i]))
          `uvm_error("BURST_RD", $sformatf("beat %0d (%s): read 0x%08h expected 0x%08h",
                     i, regs[i], seq.item.burst_rdata[i], mirrored(regs[i])))
  endtask

  task run_phase(uvm_phase phase);
    bit [31:0] rd;
    bit [31:0] no_data[$];
    string     no_regs[$];
    bit [3:0]  prots[] = '{4'b0000, 4'b1111, 4'b0101, 4'b1010, 4'b0011};
    string     all_rw[$] = '{"EL_0", "EL_1", "PRIORITY_0", "PRIORITY_1", "PRIORITY_2", "PRIORITY_3",
                             "PRIORITY_4", "PRIORITY_5", "PRIORITY_6", "PRIORITY_7",
                             "IE_0_0", "IE_0_1", "IE_1_0", "IE_1_1", "IE_2_0", "IE_2_1", "IE_3_0", "IE_3_1",
                             "THRESHOLD_0", "THRESHOLD_1", "THRESHOLD_2", "THRESHOLD_3"};
    phase.raise_objection(this);
    do_reset();

    // HPROT
    foreach (prots[i]) begin
      ahb(1, 'h50, i + 1, 3'b010, rd, prots[i]);
      ahb(0, 'h50, 0, 3'b010, rd, prots[i]);
      if (rd !== i + 1)
        `uvm_error("HPROT", $sformatf("HPROT=%b: THRESHOLD_0 read 0x%0h expected 0x%0h", prots[i], rd, i + 1))
    end

    // HREADY low before the address phase is accepted
    ahb(1, 'h54, 5, 3'b010, rd, 4'b0011, 3);
    check_reg("THRESHOLD_1", "write after 3 HREADY-low cycles");
    ahb(0, 'h54, 0, 3'b010, rd, 4'b0011, 2);
    if (rd !== 5) `uvm_error("HREADY", $sformatf("read after HREADY-low: 0x%0h expected 5", rd))

    // BUSY ending an INCR burst: HADDR shows THRESHOLD_3 during BUSY
    ahb(1, 'h58, 3, 3'b010, rd, 4'b0011, 0, 2, 3'b001);
    check_reg("THRESHOLD_2", "INCR write + BUSY");
    check_reg("THRESHOLD_3", "BUSY address not written");
    ahb(0, 'h58, 0, 3'b010, rd, 4'b0011, 0, 3, 3'b001);
    if (rd !== 3) `uvm_error("BUSY", $sformatf("INCR read + BUSY: 0x%0h expected 3", rd))

    // INCR4 write burst over IE_0_0..IE_1_1, one BUSY after the first beat
    burst(1, 'h30, 3'b011, 4, {32'h0000_00FF, 32'h8000_0001, 32'h1234_5678, 32'hFFFF_0000}, 1, no_regs);
    foreach (all_rw[i]) if (all_rw[i].substr(0, 1) == "IE") check_reg(all_rw[i], "INCR4 write burst");
    // INCR8 read burst over PRIORITY_0..7, INCR read burst over IE_0_0..IE_1_1
    burst(0, 'h10, 3'b101, 8, no_data, 0, {"PRIORITY_0", "PRIORITY_1", "PRIORITY_2", "PRIORITY_3",
                                     "PRIORITY_4", "PRIORITY_5", "PRIORITY_6", "PRIORITY_7"});
    burst(0, 'h30, 3'b001, 4, no_data, 2, {"IE_0_0", "IE_0_1", "IE_1_0", "IE_1_1"});

    // Upper address bits: walking one on HADDR[15:7] over the THRESHOLD_0 offset
    for (int b = 7; b < 16; b++) begin
      ahb(0, (32'h1 << b) | 'h50, 0, 3'b010, rd);
      ahb(1, (32'h1 << b) | 'h50, 32'hFFFF_FFFF, 3'b010, rd);
    end
    foreach (all_rw[i]) check_reg(all_rw[i], "after out-of-map accesses");
    phase.drop_objection(this);
  endtask
endclass


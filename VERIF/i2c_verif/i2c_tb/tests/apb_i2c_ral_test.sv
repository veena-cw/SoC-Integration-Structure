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

// Generated RAL Tests for APB_to_I2C_Controller (APB)
// Bus: APB | Contains basic UVM testcases:
//   1) Default/reset value read (mirror/desired/predictor)
//   2) Write followed by read with desired/mirrored checks + scoreboard
//   3) Walking-ones / walking-zeros across each register
//   4) Mirror / Desired / Predictor explicit demo
// Scoreboard: tb/apb_i2c_scoreboard.sv  is instantiated in env and snoops via monitor.analysis_port
// Predictor: tb/apb_i2c_*_predictor.sv  updates mirror = DUT automatically via predict()
// Reset: tb/apb_i2c_reset_if/agent via resource_db, base test always pulses reset first
// BaseTest ensures DUT starts from known stable state via do_reset() before any ops
`include "uvm_macros.svh"
import uvm_pkg::*;
import apb_i2c_ral_pkg::*;
import apb_i2c_ral_block_pkg::*;
import apb_i2c_ral_sequences_pkg::*;

// -------------------------------------------------------------------
// Base test - ALWAYS includes reset to reach stable known state
// -------------------------------------------------------------------
// TEST NAME: apb_i2c_base_test
// PURPOSE: Generic YAML-driven UVM RAL test.
// REGISTERS TESTED: Determined dynamically by the associated sequence.
// REGISTERS SKIPPED: Determined dynamically from access and metadata.
// WHY SKIPPED: Registers unsuitable for the selected verification behavior.
// EXPECTED RESULT: All applicable checks pass without project-specific assumptions.
class apb_i2c_base_test extends uvm_test;
  `uvm_component_utils(apb_i2c_base_test)
  apb_i2c_ral_env env;
  function new(string name = "apb_i2c_base_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    env = apb_i2c_ral_env::type_id::create("env", this);
  endfunction
  // Central reset task - called at start of every test's run_phase
  task do_reset();
    apb_i2c_reset_seq rst_seq;
    rst_seq = apb_i2c_reset_seq::type_id::create("rst_seq");
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
endclass

// -------------------------------------------------------------------
// Base smoke (kept for backward compat) - runs simple reg_access_seq
// -------------------------------------------------------------------
// TEST NAME: apb_i2c_ral_test
// PURPOSE: Generic YAML-driven UVM RAL test.
// REGISTERS TESTED: Determined dynamically by the associated sequence.
// REGISTERS SKIPPED: Determined dynamically from access and metadata.
// WHY SKIPPED: Registers unsuitable for the selected verification behavior.
// EXPECTED RESULT: All applicable checks pass without project-specific assumptions.
class apb_i2c_ral_test extends apb_i2c_base_test;
  `uvm_component_utils(apb_i2c_ral_test)
  apb_i2c_reg_access_seq seq;
  function new(string name = "apb_i2c_ral_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    seq = apb_i2c_reg_access_seq::type_id::create("seq", this);
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
// TEST NAME: apb_i2c_reg_reset_test
// PURPOSE: Generic YAML-driven UVM RAL test.
// REGISTERS TESTED: Determined dynamically by the associated sequence.
// REGISTERS SKIPPED: Determined dynamically from access and metadata.
// WHY SKIPPED: Registers unsuitable for the selected verification behavior.
// EXPECTED RESULT: All applicable checks pass without project-specific assumptions.
class apb_i2c_reg_reset_test extends apb_i2c_base_test;
  `uvm_component_utils(apb_i2c_reg_reset_test)
  apb_i2c_reg_reset_seq seq;
  function new(string name = "apb_i2c_reg_reset_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    seq = apb_i2c_reg_reset_seq::type_id::create("seq", this);
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
// TEST NAME: apb_i2c_reg_write_read_test
// PURPOSE: Generic YAML-driven UVM RAL test.
// REGISTERS TESTED: Determined dynamically by the associated sequence.
// REGISTERS SKIPPED: Determined dynamically from access and metadata.
// WHY SKIPPED: Registers unsuitable for the selected verification behavior.
// EXPECTED RESULT: All applicable checks pass without project-specific assumptions.
class apb_i2c_reg_write_read_test extends apb_i2c_base_test;
  `uvm_component_utils(apb_i2c_reg_write_read_test)
  apb_i2c_reg_write_read_seq seq;
  apb_i2c_reg_write_seq   wseq;
  function new(string name = "apb_i2c_reg_write_read_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    seq = apb_i2c_reg_write_read_seq::type_id::create("seq", this);
    wseq = apb_i2c_reg_write_seq :: type_id :: create("wseq",this);
  endfunction
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    do_reset();
    `uvm_info(get_type_name(), "WRITE-READ TEST: frontdoor write then read, check mirrored vs desired", UVM_LOW)
    wseq.model = env.ral_model;
    wseq.start(env.agent.sequencer);
   env.scoreboard.check_mirror_desired("after_write_read");
    phase.drop_objection(this);
  endtask
endclass

// -------------------------------------------------------------------
// 3) WALKING ONES TEST - walks 1 across each bit, catches stuck bits
// -------------------------------------------------------------------
// TEST NAME: apb_i2c_reg_walk_one_test
// PURPOSE: Generic YAML-driven UVM RAL test.
// REGISTERS TESTED: Determined dynamically by the associated sequence.
// REGISTERS SKIPPED: Determined dynamically from access and metadata.
// WHY SKIPPED: Registers unsuitable for the selected verification behavior.
// EXPECTED RESULT: All applicable checks pass without project-specific assumptions.
class apb_i2c_reg_walk_one_test extends apb_i2c_base_test;
  `uvm_component_utils(apb_i2c_reg_walk_one_test)
  apb_i2c_reg_walk_one_seq seq;
  function new(string name = "apb_i2c_reg_walk_one_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    seq = apb_i2c_reg_walk_one_seq::type_id::create("seq", this);
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
// TEST NAME: apb_i2c_reg_mirror_predict_test
// PURPOSE: Generic YAML-driven UVM RAL test.
// REGISTERS TESTED: Determined dynamically by the associated sequence.
// REGISTERS SKIPPED: Determined dynamically from access and metadata.
// WHY SKIPPED: Registers unsuitable for the selected verification behavior.
// EXPECTED RESULT: All applicable checks pass without project-specific assumptions.
class apb_i2c_reg_mirror_predict_test extends apb_i2c_base_test;
  `uvm_component_utils(apb_i2c_reg_mirror_predict_test)
  apb_i2c_reg_mirror_predict_seq seq;
  function new(string name = "apb_i2c_reg_mirror_predict_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    seq = apb_i2c_reg_mirror_predict_seq::type_id::create("seq", this);
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
// TEST NAME: apb_i2c_scoreboard_test
// PURPOSE: Generic YAML-driven UVM RAL test.
// REGISTERS TESTED: Determined dynamically by the associated sequence.
// REGISTERS SKIPPED: Determined dynamically from access and metadata.
// WHY SKIPPED: Registers unsuitable for the selected verification behavior.
// EXPECTED RESULT: All applicable checks pass without project-specific assumptions.
class apb_i2c_scoreboard_test extends apb_i2c_base_test;
  `uvm_component_utils(apb_i2c_scoreboard_test)
  apb_i2c_reg_reset_seq       reset_seq;
  apb_i2c_reg_write_read_seq  wr_seq;
  apb_i2c_reg_walk_one_seq    walk_seq;
  function new(string name = "apb_i2c_scoreboard_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    reset_seq = apb_i2c_reg_reset_seq::type_id::create("reset_seq", this);
    wr_seq    = apb_i2c_reg_write_read_seq::type_id::create("wr_seq", this);
    walk_seq  = apb_i2c_reg_walk_one_seq::type_id::create("walk_seq", this);
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

class apb_i2c_reg_write_test extends apb_i2c_base_test;
  `uvm_component_utils(apb_i2c_reg_write_test)

  apb_i2c_reg_write_seq   wseq;
  function new(string name = "apb_i2c_reg_write_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
  //  seq = apb_i2c_reg_write_read_seq::type_id::create("seq", this);
    wseq = apb_i2c_reg_write_seq :: type_id :: create("wseq",this);
  endfunction
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    do_reset();
    `uvm_info(get_type_name(), "WRITE TEST: frontdoor write, check mirrored vs desired", UVM_LOW)
    wseq.model = env.ral_model;
    wseq.slave_addr = 7'h50;
  wseq.read_write = 1'b0;
  wseq.tx_data    = 32'h000000A5;

    wseq.start(env.agent.sequencer);
   // env.scoreboard.check_mirror_desired("after_write_read");
    phase.drop_objection(this);
  endtask
endclass


class apb_i2c_reg_read_test extends apb_i2c_base_test;
  `uvm_component_utils(apb_i2c_reg_read_test)

  apb_i2c_reg_read_seq   rseq;
  function new(string name = "apb_i2c_reg_read_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
  //  seq = apb_i2c_reg_write_read_seq::type_id::create("seq", this);
    rseq = apb_i2c_reg_read_seq :: type_id :: create("rseq",this);
  endfunction
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    do_reset();
    `uvm_info(get_type_name(), "READ TEST: frontdoor read, check mirrored vs desired", UVM_LOW)
    rseq.model = env.ral_model;
    rseq.slave_addr = 7'h50;
  rseq.read_write = 1'b1;

    rseq.start(env.agent.sequencer);
   // env.scoreboard.check_mirror_desired("after_write_read");
    phase.drop_objection(this);
  endtask
endclass

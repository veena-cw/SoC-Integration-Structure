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
  plic_ral_env env;
  function new(string name = "plic_base_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    env = plic_ral_env::type_id::create("env", this);
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


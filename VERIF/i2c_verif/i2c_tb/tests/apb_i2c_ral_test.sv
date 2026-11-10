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
  virtual i2c_irq_if irq_vif;
  bit select_salve;
  bit p_enable;
  function new(string name = "apb_i2c_base_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    env = apb_i2c_ral_env::type_id::create("env", this);
    
     // Get IRQ interface
    if (!uvm_config_db#(virtual i2c_irq_if)::get(
          this,
          "",
          "irq_vif",
          irq_vif
        )) begin

      `uvm_fatal("IRQ_VIF",
                 "Failed to get i2c_irq_if in test")
    end
    
    /*
     uvm_resource_db#(bit)::set(
    "*",
    "select_salve",
    1'b1,
    this);	
    
      uvm_resource_db#(bit)::set(
    "*",
    "p_enable",
    1'b1,
    this);*/

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
 // apb_i2c_reg_write_read_seq seq;
  apb_i2c_reg_write_seq   wseq;
  apb_i2c_reg_read_seq  rseq;
  function new(string name = "apb_i2c_reg_write_read_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    rseq = apb_i2c_reg_read_seq::type_id::create("rseq", this);
    wseq = apb_i2c_reg_write_seq :: type_id :: create("wseq",this);
  endfunction
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    do_reset();
    `uvm_info(get_type_name(), "WRITE-READ TEST: frontdoor write then read, check mirrored vs desired", UVM_LOW)
    wseq.model = env.ral_model;
     rseq.model = env.ral_model;
    wseq.start(env.agent.sequencer);
    rseq.start(env.agent.sequencer);
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
   wseq.slave_addr = 7'h55;
  wseq.read_write = 1'b0;

 

    repeat(50)
    wseq.start(env.agent.sequencer);
    #10;
   // env.scoreboard.check_mirror_desired("after_write_read");
    phase.drop_objection(this);
  endtask
endclass


class apb_i2c_reg_write_push_test extends apb_i2c_base_test;
  `uvm_component_utils(apb_i2c_reg_write_push_test)

  apb_i2c_reg_write_push_seq   wseq;
  function new(string name = "apb_i2c_reg_write_push_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    wseq = apb_i2c_reg_write_push_seq :: type_id :: create("wseq",this);
  endfunction
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    do_reset();
    `uvm_info(get_type_name(), "WRITE PUSH TEST: frontdoor write, check mirrored vs desired", UVM_LOW)
    wseq.model = env.ral_model;
   wseq.slave_addr = 7'h55;
  wseq.read_write = 1'b0;

    repeat(5)
    wseq.start(env.agent.sequencer);
    #1000ns;
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
    rseq.slave_addr = 7'h55;
  rseq.read_write = 1'b1;
 // rseq.tx_data    = 32'h0000d500;
     repeat(1)
    rseq.start(env.agent.sequencer);
   // env.scoreboard.check_mirror_desired("after_write_read");
    phase.drop_objection(this);
  endtask
endclass


class apb_i2c_reg_write_wrong_addr_test extends apb_i2c_base_test;
  `uvm_component_utils(apb_i2c_reg_write_wrong_addr_test)

  apb_i2c_reg_write_wrong_addr_seq   wr_seq;
  function new(string name = "apb_i2c_reg_write_wrong_addr_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    wr_seq = apb_i2c_reg_write_wrong_addr_seq :: type_id :: create("wr_seq",this);
  endfunction
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    do_reset();
    `uvm_info(get_type_name(), "WRONG ADDR TEST:", UVM_LOW)
    wr_seq.model = env.ral_model;
   // rseq.slave_addr = 7'h55;
  //rseq.read_write = 1'b1;
    repeat(10)
    wr_seq.start(env.agent.sequencer);
    
    phase.drop_objection(this);
  endtask
  
  endclass
 // apb_i2c_write_data_nack_test
  
  class apb_i2c_write_data_nack_test extends apb_i2c_base_test;
  `uvm_component_utils(apb_i2c_write_data_nack_test)

  apb_i2c_write_data_nack_seq   wr_seq;
  function new(string name = "apb_i2c_write_data_nack_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    wr_seq = apb_i2c_write_data_nack_seq :: type_id :: create("wr_seq",this);
   uvm_resource_db#(bit)::set(
    "*",
    "generate_nack",
    1'b1,
    this
);	
  endfunction
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    do_reset();
    `uvm_info(get_type_name(), "WRITE + NACK:", UVM_LOW)
    wr_seq.model = env.ral_model;
   // rseq.slave_addr = 7'h55;
  //rseq.read_write = 1'b1;
    repeat(50)
    wr_seq.start(env.agent.sequencer);
    
    phase.drop_objection(this);
  endtask
  
endclass



  class apb_i2c_invalid_addr_test extends apb_i2c_base_test;
  `uvm_component_utils(apb_i2c_invalid_addr_test)

  apb_i2c_invalid_addr_seq   wr_seq;
  function new(string name = "apb_i2c_invalid_addr_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    wr_seq = apb_i2c_invalid_addr_seq :: type_id :: create("wr_seq",this);
   uvm_resource_db#(bit)::set(
    "*",
    "generate_nack",
    1'b1,
    this
);	
  endfunction
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    do_reset();
    `uvm_info(get_type_name(), "WRITE + NACK:", UVM_LOW)
    wr_seq.model = env.ral_model;
  //  rseq.slave_addr = 7'h55;
  // rseq.read_write = 1'b1;
    repeat(50)
    wr_seq.start(env.agent.sequencer);
    
    phase.drop_objection(this);
  endtask
  
endclass


class apb_i2c_valid_addr_unused_test extends apb_i2c_base_test;
  `uvm_component_utils(apb_i2c_valid_addr_unused_test)
  

  apb_i2c_valid_addr_unused_seq   wr_seq;
  function new(string name = "apb_i2c_valid_addr_unused_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    wr_seq = apb_i2c_valid_addr_unused_seq :: type_id :: create("wr_seq",this);
  endfunction
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    do_reset();
    `uvm_info(get_type_name(), "WRONG ADDR- WITHIN THE RANGE :", UVM_LOW)
    wr_seq.model = env.ral_model;
    repeat(10)
    wr_seq.start(env.agent.sequencer);
    
    phase.drop_objection(this);
  endtask
  
  endclass
  
  
  class apb_i2c_irq_test extends apb_i2c_base_test;

  `uvm_component_utils(apb_i2c_irq_test)

  // IRQ enable sequence
  i2c_irq_enable_seq irq_en_seq;



  // APB sequences
  apb_i2c_irq_reg_write_seq seq1;
apb_i2c_reg_write_seq  wseq;

  function new(string name = "apb_i2c_irq_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction
 virtual function void build_phase(uvm_phase phase);
    super.build_phase(phase);

   
  endfunction

  virtual task run_phase(uvm_phase phase);

    phase.raise_objection(this);
 	do_reset();
    `uvm_info(get_type_name(), "IRQ TEST:", UVM_LOW)

    seq1 = apb_i2c_irq_reg_write_seq::type_id::create("seq1");
     wseq = apb_i2c_reg_write_seq :: type_id :: create("wseq",this);
      //  seq1.irq_seqr = env.irq_agent.irq_sequencer;
    seq1.model = env.ral_model;
    seq1.irq_enable = 1'b1;
   seq1.slave_addr = 7'h55;
   seq1.read_write = 1'b0;
   
   
   
   wseq.model = env.ral_model;
   wseq.slave_addr = 7'h55;
   wseq.read_write = 1'b0;
  wseq. irq_enable = 0;
  
    //============================================================
    // 1. Enable IRQ - only once
    //============================================================

    irq_en_seq =
      i2c_irq_enable_seq::type_id::create("irq_en_seq");



    //============================================================
    // 2. Wait for FIRST interrupt
    //============================================================

    `uvm_info("IRQ_TEST",
              "Waiting for first I2C interrupt...",
              UVM_LOW)

   // @(posedge irq_vif.i2c_irq);

    `uvm_info("IRQ_TEST",
              "First I2C interrupt received",
              UVM_LOW)


//  repeat(3)
    seq1.start(env.agent.sequencer);
    wseq.start(env.agent.sequencer);
     seq1.irq_enable = 1'b1;
   seq1.slave_addr = 7'h55;
   seq1.read_write = 1'b1;
    
     seq1.start(env.agent.sequencer);

    phase.drop_objection(this);

  endtask
  
  endclass
  
  class apb_i2c_irq_ready_test extends apb_i2c_base_test;

  `uvm_component_utils(apb_i2c_irq_ready_test)

  apb_i2c_reg_write_seq   wseq;
  // APB sequences
  apb_i2c_irq_reg_write_seq seq1;
  
uvm_status_e   status;
    uvm_reg_data_t status_value;
    uvm_reg_data_t ctrl_value;
bit busy;
    bit done;
    bit slave_error;

  function new(string name = "apb_i2c_irq_ready_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction
 virtual function void build_phase(uvm_phase phase);
    super.build_phase(phase);

   
  endfunction

  virtual task run_phase(uvm_phase phase);

    phase.raise_objection(this);
 	do_reset();
    `uvm_info(get_type_name(), "IRQ TEST:", UVM_LOW)

    seq1 = apb_i2c_irq_reg_write_seq::type_id::create("seq1");
   wseq = apb_i2c_reg_write_seq :: type_id :: create("wseq",this);
   
   
    seq1.model = env.ral_model;
   wseq.slave_addr = 7'h55;
   wseq.read_write = 1'b0;
    //============================================================
    // 1. Enable IRQ - only once
    //============================================================


  
    //==========================================================
    //  WRITE CTRL_REG
    //==========================================================

    ctrl_value = '0;

    ctrl_value[16] = 1;



    `uvm_info(
      "I2C_WRITE",
      $sformatf(
        "CTRL_REG <= 0x%08h",
        ctrl_value
      ),
      UVM_MEDIUM
    );


    env.ral_model.CTRL_REG.write(
      status,
      ctrl_value,
      UVM_FRONTDOOR
    );


    if (status != UVM_IS_OK) begin

      `uvm_fatal(
        "I2C_WRITE",
        "CTRL_REG write failed"
      )

    end



    //============================================================
    // 2. Wait for FIRST interrupt
    //============================================================

    `uvm_info("IRQ_TEST",
              "Waiting for first I2C interrupt...",
              UVM_LOW)

   @(posedge irq_vif.i2c_irq);

    `uvm_info("IRQ_TEST",
              "First I2C interrupt received",
              UVM_LOW)


  
       env.ral_model.STATUS_REG.read(
        status,
        status_value,
        UVM_FRONTDOOR
      );


      if (status != UVM_IS_OK) begin

        `uvm_fatal(
          "I2C_WRITE",
          "STATUS_REG read failed"
        )

      end


      busy = status_value[0];


      `uvm_info(
        "I2C_WRITE",
        $sformatf(
          "STATUS = 0x%08h BUSY=%0b",
          status_value,
          busy
        ),
        UVM_MEDIUM
      );

//  repeat(3)
  //  seq1.start(env.agent.sequencer);
#10;

    phase.drop_objection(this);

  endtask

endclass
  
  class apb_i2c_r_access_hold_test extends apb_i2c_base_test;

  `uvm_component_utils(apb_i2c_r_access_hold_test)

  function new(string name = "apb_i2c_r_access_hold_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function void build_phase(uvm_phase phase);
    super.build_phase(phase);
  endfunction

  virtual task run_phase(uvm_phase phase);

    apb_i2c_r_access_hold_seq seq;
apb_i2c_reg_read_seq  rseq;
    phase.raise_objection(this);

    `uvm_info("R_ACCESS_TEST",
              "Starting R_ACCESS hold branch coverage test",
              UVM_MEDIUM)

    // Apply reset using the base-test reset task.
    do_reset();

    // Create and start directed sequence.
    seq = apb_i2c_r_access_hold_seq::type_id::create("seq");
     rseq = apb_i2c_reg_read_seq :: type_id :: create("rseq",this);
 	seq.model = env.ral_model;
 	rseq.model = env.ral_model;

    seq.start(env.agent.sequencer);
#50ns;

 
    `uvm_info("R_ACCESS_TEST",
              "Completed R_ACCESS hold branch coverage test",
              UVM_MEDIUM)
#500ns;
    phase.drop_objection(this);

  endtask
 

endclass


  class apb_i2c_irq_error_status_test extends apb_i2c_base_test;

  `uvm_component_utils(apb_i2c_irq_error_status_test)

  // IRQ enable sequence
  i2c_irq_enable_seq irq_en_seq;



  // APB sequences
  apb_i2c_irq_error_reg_write_seq   seq1;


  function new(string name = "apb_i2c_irq_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction
 virtual function void build_phase(uvm_phase phase);
    super.build_phase(phase);

   
  endfunction

  virtual task run_phase(uvm_phase phase);

    phase.raise_objection(this);
 	do_reset();
    `uvm_info(get_type_name(), "IRQ TEST:", UVM_LOW)

    seq1 = apb_i2c_irq_error_reg_write_seq::type_id::create("seq1");
      //  seq1.irq_seqr = env.irq_agent.irq_sequencer;
    seq1.model = env.ral_model;
    seq1.irq_enable = 1'b1;
    //============================================================
    // 1. Enable IRQ - only once
    //============================================================

    irq_en_seq =
      i2c_irq_enable_seq::type_id::create("irq_en_seq");



    //============================================================
    // 2. Wait for FIRST interrupt
    //============================================================

    `uvm_info("IRQ_TEST",
              "Waiting for first I2C interrupt...",
              UVM_LOW)

   // @(posedge irq_vif.i2c_irq);

    `uvm_info("IRQ_TEST",
              "First I2C interrupt received",
              UVM_LOW)


//  repeat(3)
    seq1.start(env.agent.sequencer);


    phase.drop_objection(this);

  endtask
  
  endclass
  
  class apb_i2c_reg_write_no_enable_test extends apb_i2c_base_test;
  `uvm_component_utils(apb_i2c_reg_write_no_enable_test)

  apb_i2c_reg_write_seq   wseq;
  function new(string name = "apb_i2c_reg_write_no_enable_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
  //  seq = apb_i2c_reg_write_read_seq::type_id::create("seq", this);
    wseq = apb_i2c_reg_write_seq :: type_id :: create("wseq",this);
    
    
    
   uvm_resource_db#(bit)::set(
  "*",
  "select_salve",
  1'b1,
  this
);

uvm_resource_db#(bit)::set(
  "*",
  "p_enable",
  1'b0,
  this
);


`uvm_info("APB_CONFIG",
          $sformatf("select_salve=%0b p_enable=%0b",
                     1'b1, 1'b0),
          UVM_LOW)
  endfunction
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    do_reset();
    `uvm_info(get_type_name(), "WRITE TEST: frontdoor write, check mirrored vs desired", UVM_LOW)
    wseq.model = env.ral_model;
   wseq.slave_addr = 7'h55;
  wseq.read_write = 1'b0;

 

    repeat(10)
    wseq.start(env.agent.sequencer);
    #10;
   // env.scoreboard.check_mirror_desired("after_write_read");
    phase.drop_objection(this);
  endtask
endclass
/*
class apb_i2c_default_coverage_test extends apb_i2c_base_test;

  `uvm_component_utils(apb_i2c_default_coverage_test)

  apb_i2c_default_coverage_seq seq;

  function new(string name = "apb_i2c_default_coverage_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);

    phase.raise_objection(this);

    do_reset();

    seq = apb_i2c_default_coverage_seq::type_id::create("seq");

    seq.start(env.agent.sequencer);

#500;

    phase.drop_objection(this);

  endtask

endclass
*/
//============================================================
// TEST: apb_i2c_fsm_default_test
//
// PURPOSE:
// Exercise uncovered I2C master FSM default branches.
//
// FLOW:
// 1. Reuse existing APB-I2C base test setup.
// 2. Run FSM fault-injection sequence.
// 3. Check STOP default recovery.
// 4. Check main FSM default recovery when supported.
//============================================================


class apb_i2c_fsm_default_test extends apb_i2c_ral_test;

  `uvm_component_utils(apb_i2c_fsm_default_test)

  apb_i2c_fsm_default_seq seq;

  function new(
    string name = "apb_i2c_fsm_default_test",
    uvm_component parent = null
  );

    super.new(name, parent);

  endfunction

  //============================================================
  // RUN PHASE
  //============================================================

  virtual task run_phase(uvm_phase phase);

    phase.raise_objection(
      this,
      "I2C FSM default test started"
    );

    `uvm_info(
      get_type_name(),
      "Starting I2C master default branch verification",
      UVM_MEDIUM
    )

    //==========================================================
    // 1. RESET DUT
    //==========================================================

    do_reset();

    //==========================================================
    // 2. CREATE SEQUENCE
    //==========================================================

    seq = apb_i2c_fsm_default_seq::type_id::create("seq");

    //==========================================================
    // 3. CONNECT RAL MODEL
    //==========================================================

    seq.model = env.ral_model;

    if (seq.model == null) begin
      `uvm_fatal(
        "RAL_MODEL",
        "env.ral_model is NULL"
      )
    end

    //==========================================================
    // 4. START SEQUENCE
    //
    // RAL frontdoor accesses use the sequencer configured
    // in the register map.
    //==========================================================

    seq.start(null);

    //==========================================================
    // 5. REPORT
    //==========================================================

    if (seq.stop_default_pass) begin

      `uvm_info(
        get_type_name(),
        "PASS: STOP nested default branch verified",
        UVM_NONE
      )

    end
    else begin

      `uvm_error(
        get_type_name(),
        "FAIL: STOP nested default branch verification failed"
      )

    end

    `uvm_info(
      get_type_name(),
      "I2C master default branch verification finished",
      UVM_LOW
    )

    phase.drop_objection(
      this,
      "I2C FSM default test completed"
    );

  endtask

endclass


class apb_i2c_strobe_coverage_test extends apb_i2c_ral_test;

  `uvm_component_utils(apb_i2c_strobe_coverage_test)

  apb_i2c_strobe_coverage_seq seq;

  function new(
    string name = "apb_i2c_strobe_coverage_test",
    uvm_component parent = null
  );

    super.new(name, parent);

  endfunction

  //============================================================
  // RUN PHASE
  //============================================================

  virtual task run_phase(uvm_phase phase);

    phase.raise_objection(
      this,
      "apb_i2c_strobe_coverage_test started"
    );
    
    do_reset();

    //==========================================================
    // 2. CREATE SEQUENCE
    //==========================================================

    seq = apb_i2c_strobe_coverage_seq::type_id::create("seq");

    //==========================================================
    // 3. CONNECT RAL MODEL
    //==========================================================

    seq.model = env.ral_model;


 seq.start(env.agent.sequencer);
  
  #500;

    phase.drop_objection(this);
    
  endtask

endclass


class apb_i2c_reset_mid_transfer_test extends apb_i2c_base_test;

  `uvm_component_utils(apb_i2c_reset_mid_transfer_test)

  apb_i2c_reset_mid_transfer_seq reset_seq;

  virtual apb_i2c_reset_if rst_vif;
  virtual apb_i2c_apb_if   apb_vif;
  virtual apb_i2c_i2c_if   i2c_vif;

  //============================================================
  // Constructor
  //============================================================

  function new(string name = "apb_i2c_reset_mid_transfer_test",
               uvm_component parent = null);

    super.new(name, parent);

  endfunction

  //============================================================
  // Build phase
  //============================================================

  virtual function void build_phase(uvm_phase phase);

    super.build_phase(phase);

    if (!uvm_config_db#(virtual apb_i2c_reset_if)::get(
          this, "", "rst_vif", rst_vif))

      `uvm_fatal("RESET_TEST", "Cannot get rst_vif")

    if (!uvm_config_db#(virtual apb_i2c_apb_if)::get(
          this, "", "vif", apb_vif))

      `uvm_fatal("RESET_TEST", "Cannot get apb_vif")

    if (!uvm_config_db#(virtual apb_i2c_i2c_if)::get(
          this, "", "vif", i2c_vif))

      `uvm_fatal("RESET_TEST", "Cannot get i2c_vif")

  endfunction

  //============================================================
  // Run phase
  //============================================================

  virtual task run_phase(uvm_phase phase);

    phase.raise_objection(this);

    // Initial reset before starting the transaction.

    `uvm_info("RESET_TEST",
              "Applying initial reset",
              UVM_LOW)

    do_reset();

    // Create sequence.

    reset_seq =
      apb_i2c_reset_mid_transfer_seq::type_id::create(
        "reset_seq"
      );

    reset_seq.model   = env.ral_model;
    reset_seq.rst_vif = rst_vif;
    reset_seq.apb_vif = apb_vif;
    reset_seq.i2c_vif = i2c_vif;

    // Start sequence on APB sequencer.

    reset_seq.start(env.agent.sequencer);

    phase.drop_objection(this);

  endtask

endclass

class apb_i2c_reg_all_1s_0s_test extends apb_i2c_base_test;
  `uvm_component_utils(apb_i2c_reg_all_1s_0s_test)
 // apb_i2c_reg_write_read_seq seq;
  apb_i2c_reg_write_seq   wseq;
  apb_i2c_reg_read_seq  rseq;
   virtual apb_i2c_i2c_if   i2c_vif;
  function new(string name = "apb_i2c_reg_all_1s_0s_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    rseq = apb_i2c_reg_read_seq::type_id::create("rseq", this);
    wseq = apb_i2c_reg_write_seq :: type_id :: create("wseq",this);
    
    if (!uvm_config_db#(virtual apb_i2c_i2c_if)::get(
          this, "", "vif", i2c_vif))

      `uvm_fatal("RESET_TEST", "Cannot get i2c_vif")
  endfunction
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    do_reset();
    `uvm_info(get_type_name(), "WRITE-READ TEST: frontdoor write then read, check mirrored vs desired", UVM_LOW)
    wseq.model = env.ral_model;
     rseq.model = env.ral_model;
     
     wseq.tx_data_lower = 8'h00;
    wseq.start(env.agent.sequencer);
    
         wseq.tx_data_lower = 8'hff;
    wseq.start(env.agent.sequencer);
    
     i2c_vif.temp_reg  = 8'h00;
    rseq.start(env.agent.sequencer);
         i2c_vif.temp_reg  = 8'hFF;
    rseq.start(env.agent.sequencer);
    
    
   env.scoreboard.check_mirror_desired("after_write_read");
    phase.drop_objection(this);
  endtask
endclass

//      // verilator_coverage annotation
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
%000001   `uvm_component_utils(apb_i2c_base_test)
-000000  point: type=line comment=block hier=$unit::apb_i2c_base_test__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_base_test__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_base_test__Vclpkg
          apb_i2c_ral_env env;
%000001   function new(string name = "apb_i2c_base_test", uvm_component parent = null);
-000001  point: type=line comment=block hier=$unit::apb_i2c_base_test__Vclpkg
%000001     super.new(name, parent);
-000001  point: type=line comment=block hier=$unit::apb_i2c_base_test__Vclpkg
          endfunction
%000001   function void build_phase(uvm_phase phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_base_test__Vclpkg
%000001     super.build_phase(phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_base_test__Vclpkg
%000001     env = apb_i2c_ral_env::type_id::create("env", this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_base_test__Vclpkg
          endfunction
          // Central reset task - called at start of every test's run_phase
%000001   task do_reset();
-000001  point: type=line comment=block hier=$unit::apb_i2c_base_test__Vclpkg
%000001     apb_i2c_reset_seq rst_seq;
-000001  point: type=line comment=block hier=$unit::apb_i2c_base_test__Vclpkg
%000001     rst_seq = apb_i2c_reset_seq::type_id::create("rst_seq");
-000001  point: type=line comment=block hier=$unit::apb_i2c_base_test__Vclpkg
%000001     rst_seq.delay = 0;
-000001  point: type=line comment=block hier=$unit::apb_i2c_base_test__Vclpkg
%000001     rst_seq.pulse_width = 100; // 100 time units ~ 5-10 clocks, ensures stable reset
-000001  point: type=line comment=block hier=$unit::apb_i2c_base_test__Vclpkg
%000001     `uvm_info(get_type_name(), $sformatf("BaseTest: driving reset pulse width %0t to reach known stable state", rst_seq.pulse_width), UVM_LOW)
-000001  point: type=line comment=block hier=$unit::apb_i2c_base_test__Vclpkg
-000001  point: type=branch comment=if hier=$unit::apb_i2c_base_test__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_base_test__Vclpkg
            // rst_seq is a uvm_sequence, rst_tr was a uvm_sequence_item (cannot call start() on item)
%000001     rst_seq.start(env.reset_agent.seqr);
-000001  point: type=line comment=block hier=$unit::apb_i2c_base_test__Vclpkg
            // Wait for deassert and a couple clocks for DUT stabilization
%000001     wait (env.reset_agent.mon.vif.rst_n === 1'b1);
-000001  point: type=line comment=block hier=$unit::apb_i2c_base_test__Vclpkg
%000001     #20; // allow DUT to stabilize after reset deassert
-000001  point: type=line comment=block hier=$unit::apb_i2c_base_test__Vclpkg
            // Also reset RAL mirror/desired to HW reset values for consistency
%000001     env.ral_model.reset();
-000001  point: type=line comment=block hier=$unit::apb_i2c_base_test__Vclpkg
%000001     `uvm_info(get_type_name(), "BaseTest: reset complete, DUT and RAL in known stable state", UVM_LOW)
-000001  point: type=line comment=block hier=$unit::apb_i2c_base_test__Vclpkg
-000001  point: type=branch comment=if hier=$unit::apb_i2c_base_test__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_base_test__Vclpkg
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
%000001   `uvm_component_utils(apb_i2c_ral_test)
-000000  point: type=line comment=block hier=$unit::apb_i2c_ral_test__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_test__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_ral_test__Vclpkg
          apb_i2c_reg_access_seq seq;
%000000   function new(string name = "apb_i2c_ral_test", uvm_component parent = null);
-000000  point: type=line comment=block hier=$unit::apb_i2c_ral_test__Vclpkg
%000000     super.new(name, parent);
-000000  point: type=line comment=block hier=$unit::apb_i2c_ral_test__Vclpkg
          endfunction
%000000   function void build_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_ral_test__Vclpkg
%000000     super.build_phase(phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_ral_test__Vclpkg
%000000     seq = apb_i2c_reg_access_seq::type_id::create("seq", this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_ral_test__Vclpkg
          endfunction
%000000   task run_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_ral_test__Vclpkg
%000000     phase.raise_objection(this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_ral_test__Vclpkg
%000000     do_reset(); // <-- always reset first
-000000  point: type=line comment=block hier=$unit::apb_i2c_ral_test__Vclpkg
%000000     seq.model = env.ral_model;
-000000  point: type=line comment=block hier=$unit::apb_i2c_ral_test__Vclpkg
%000000     seq.start(env.agent.sequencer);
-000000  point: type=line comment=block hier=$unit::apb_i2c_ral_test__Vclpkg
%000000     phase.drop_objection(this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_ral_test__Vclpkg
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
%000001   `uvm_component_utils(apb_i2c_reg_reset_test)
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_reset_test__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_reg_reset_test__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_reset_test__Vclpkg
          apb_i2c_reg_reset_seq seq;
%000000   function new(string name = "apb_i2c_reg_reset_test", uvm_component parent = null);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_reset_test__Vclpkg
%000000     super.new(name, parent);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_reset_test__Vclpkg
          endfunction
%000000   function void build_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_reset_test__Vclpkg
%000000     super.build_phase(phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_reset_test__Vclpkg
%000000     seq = apb_i2c_reg_reset_seq::type_id::create("seq", this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_reset_test__Vclpkg
          endfunction
%000000   task run_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_reset_test__Vclpkg
%000000     phase.raise_objection(this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_reset_test__Vclpkg
%000000     do_reset();
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_reset_test__Vclpkg
%000000     `uvm_info(get_type_name(), "RESET TEST: verifying default values match mirrored/predictor", UVM_LOW)
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_reset_test__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_reg_reset_test__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_reg_reset_test__Vclpkg
%000000     seq.model = env.ral_model;
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_reset_test__Vclpkg
%000000     seq.start(env.agent.sequencer);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_reset_test__Vclpkg
%000000     env.scoreboard.check_reset_values();
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_reset_test__Vclpkg
%000000     env.scoreboard.check_mirror_desired("after_reset_test");
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_reset_test__Vclpkg
%000000     phase.drop_objection(this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_reset_test__Vclpkg
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
%000001   `uvm_component_utils(apb_i2c_reg_write_read_test)
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_write_read_test__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_reg_write_read_test__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_write_read_test__Vclpkg
          apb_i2c_reg_write_read_seq seq;
          apb_i2c_reg_write_seq   wseq;
%000000   function new(string name = "apb_i2c_reg_write_read_test", uvm_component parent = null);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_write_read_test__Vclpkg
%000000     super.new(name, parent);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_write_read_test__Vclpkg
          endfunction
%000000   function void build_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_write_read_test__Vclpkg
%000000     super.build_phase(phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_write_read_test__Vclpkg
%000000     seq = apb_i2c_reg_write_read_seq::type_id::create("seq", this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_write_read_test__Vclpkg
%000000     wseq = apb_i2c_reg_write_seq :: type_id :: create("wseq",this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_write_read_test__Vclpkg
          endfunction
%000000   task run_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_write_read_test__Vclpkg
%000000     phase.raise_objection(this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_write_read_test__Vclpkg
%000000     do_reset();
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_write_read_test__Vclpkg
%000000     `uvm_info(get_type_name(), "WRITE-READ TEST: frontdoor write then read, check mirrored vs desired", UVM_LOW)
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_write_read_test__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_reg_write_read_test__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_reg_write_read_test__Vclpkg
%000000     wseq.model = env.ral_model;
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_write_read_test__Vclpkg
%000000     wseq.start(env.agent.sequencer);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_write_read_test__Vclpkg
%000000    env.scoreboard.check_mirror_desired("after_write_read");
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_write_read_test__Vclpkg
%000000     phase.drop_objection(this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_write_read_test__Vclpkg
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
%000001   `uvm_component_utils(apb_i2c_reg_walk_one_test)
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_walk_one_test__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_reg_walk_one_test__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_walk_one_test__Vclpkg
          apb_i2c_reg_walk_one_seq seq;
%000000   function new(string name = "apb_i2c_reg_walk_one_test", uvm_component parent = null);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_walk_one_test__Vclpkg
%000000     super.new(name, parent);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_walk_one_test__Vclpkg
          endfunction
%000000   function void build_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_walk_one_test__Vclpkg
%000000     super.build_phase(phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_walk_one_test__Vclpkg
%000000     seq = apb_i2c_reg_walk_one_seq::type_id::create("seq", this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_walk_one_test__Vclpkg
          endfunction
%000000   task run_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_walk_one_test__Vclpkg
%000000     phase.raise_objection(this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_walk_one_test__Vclpkg
%000000     do_reset();
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_walk_one_test__Vclpkg
%000000     `uvm_info(get_type_name(), "WALKING-ONES TEST: one hot across each register + inverse", UVM_LOW)
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_walk_one_test__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_reg_walk_one_test__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_reg_walk_one_test__Vclpkg
%000000     seq.model = env.ral_model;
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_walk_one_test__Vclpkg
%000000     seq.start(env.agent.sequencer);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_walk_one_test__Vclpkg
%000000     env.scoreboard.check_mirror_desired("after_walk_one");
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_walk_one_test__Vclpkg
%000000     phase.drop_objection(this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_walk_one_test__Vclpkg
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
%000001   `uvm_component_utils(apb_i2c_reg_mirror_predict_test)
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_mirror_predict_test__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_reg_mirror_predict_test__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_mirror_predict_test__Vclpkg
          apb_i2c_reg_mirror_predict_seq seq;
%000000   function new(string name = "apb_i2c_reg_mirror_predict_test", uvm_component parent = null);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_mirror_predict_test__Vclpkg
%000000     super.new(name, parent);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_mirror_predict_test__Vclpkg
          endfunction
%000000   function void build_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_mirror_predict_test__Vclpkg
%000000     super.build_phase(phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_mirror_predict_test__Vclpkg
%000000     seq = apb_i2c_reg_mirror_predict_seq::type_id::create("seq", this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_mirror_predict_test__Vclpkg
          endfunction
%000000   task run_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_mirror_predict_test__Vclpkg
%000000     phase.raise_objection(this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_mirror_predict_test__Vclpkg
%000000     do_reset();
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_mirror_predict_test__Vclpkg
            // Reset checking must happen before this sequence changes RAL desired/mirrored values.
%000000     env.scoreboard.check_reset_values();
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_mirror_predict_test__Vclpkg
%000000     `uvm_info(get_type_name(), "MIRROR/DESIRED TEST: set(desired) -> update(DUT) -> read/mirror(check)", UVM_LOW)
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_mirror_predict_test__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_reg_mirror_predict_test__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_reg_mirror_predict_test__Vclpkg
%000000     seq.model = env.ral_model;
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_mirror_predict_test__Vclpkg
%000000     seq.start(env.agent.sequencer);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_mirror_predict_test__Vclpkg
%000000     env.scoreboard.check_mirror_desired("after_mirror_predict");
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_mirror_predict_test__Vclpkg
%000000     phase.drop_objection(this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_mirror_predict_test__Vclpkg
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
%000001   `uvm_component_utils(apb_i2c_scoreboard_test)
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard_test__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_scoreboard_test__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard_test__Vclpkg
          apb_i2c_reg_reset_seq       reset_seq;
          apb_i2c_reg_write_read_seq  wr_seq;
          apb_i2c_reg_walk_one_seq    walk_seq;
%000000   function new(string name = "apb_i2c_scoreboard_test", uvm_component parent = null);
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard_test__Vclpkg
%000000     super.new(name, parent);
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard_test__Vclpkg
          endfunction
%000000   function void build_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard_test__Vclpkg
%000000     super.build_phase(phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard_test__Vclpkg
%000000     reset_seq = apb_i2c_reg_reset_seq::type_id::create("reset_seq", this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard_test__Vclpkg
%000000     wr_seq    = apb_i2c_reg_write_read_seq::type_id::create("wr_seq", this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard_test__Vclpkg
%000000     walk_seq  = apb_i2c_reg_walk_one_seq::type_id::create("walk_seq", this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard_test__Vclpkg
          endfunction
%000000   task run_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard_test__Vclpkg
%000000     phase.raise_objection(this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard_test__Vclpkg
%000000     do_reset();
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard_test__Vclpkg
%000000     `uvm_info(get_type_name(), "SCOREBOARD TEST: reset -> write_read -> walk_one (scoreboard + predictor active)", UVM_LOW)
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard_test__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard_test__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard_test__Vclpkg
%000000     reset_seq.model = env.ral_model; reset_seq.start(env.agent.sequencer);
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard_test__Vclpkg
%000000     wr_seq.model    = env.ral_model; wr_seq.start(env.agent.sequencer);
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard_test__Vclpkg
%000000     walk_seq.model  = env.ral_model; walk_seq.start(env.agent.sequencer);
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard_test__Vclpkg
%000000     `uvm_info(get_type_name(), $sformatf("SNOOPED %0d bus transactions, scoreboard will report in report_phase", env.scoreboard.write_cnt), UVM_LOW)
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard_test__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard_test__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard_test__Vclpkg
%000000     phase.drop_objection(this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard_test__Vclpkg
          endtask
          
          
        endclass
        
        class apb_i2c_reg_write_test extends apb_i2c_base_test;
%000008   `uvm_component_utils(apb_i2c_reg_write_test)
-000008  point: type=line comment=block hier=$unit::apb_i2c_reg_write_test__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_reg_write_test__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_write_test__Vclpkg
        
          apb_i2c_reg_write_seq   wseq;
%000001   function new(string name = "apb_i2c_reg_write_test", uvm_component parent = null);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reg_write_test__Vclpkg
%000001     super.new(name, parent);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reg_write_test__Vclpkg
          endfunction
%000001   function void build_phase(uvm_phase phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reg_write_test__Vclpkg
%000001     super.build_phase(phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reg_write_test__Vclpkg
          //  seq = apb_i2c_reg_write_read_seq::type_id::create("seq", this);
%000001     wseq = apb_i2c_reg_write_seq :: type_id :: create("wseq",this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reg_write_test__Vclpkg
          endfunction
%000001   task run_phase(uvm_phase phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reg_write_test__Vclpkg
%000001     phase.raise_objection(this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reg_write_test__Vclpkg
%000001     do_reset();
-000001  point: type=line comment=block hier=$unit::apb_i2c_reg_write_test__Vclpkg
%000001     `uvm_info(get_type_name(), "WRITE TEST: frontdoor write, check mirrored vs desired", UVM_LOW)
-000001  point: type=line comment=block hier=$unit::apb_i2c_reg_write_test__Vclpkg
-000001  point: type=branch comment=if hier=$unit::apb_i2c_reg_write_test__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_reg_write_test__Vclpkg
%000001     wseq.model = env.ral_model;
-000001  point: type=line comment=block hier=$unit::apb_i2c_reg_write_test__Vclpkg
%000001   wseq.slave_addr = 7'h55;
-000001  point: type=line comment=block hier=$unit::apb_i2c_reg_write_test__Vclpkg
%000001   wseq.read_write = 1'b0;
-000001  point: type=line comment=block hier=$unit::apb_i2c_reg_write_test__Vclpkg
         
~000025     repeat(25)
-000001  point: type=line comment=block hier=$unit::apb_i2c_reg_write_test__Vclpkg
+000025  point: type=line comment=block hier=$unit::apb_i2c_reg_write_test__Vclpkg
 000025     wseq.start(env.agent.sequencer);
+000025  point: type=line comment=block hier=$unit::apb_i2c_reg_write_test__Vclpkg
           // env.scoreboard.check_mirror_desired("after_write_read");
%000001     phase.drop_objection(this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reg_write_test__Vclpkg
          endtask
        endclass
        
        
        class apb_i2c_reg_read_test extends apb_i2c_base_test;
%000001   `uvm_component_utils(apb_i2c_reg_read_test)
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_read_test__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_reg_read_test__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_read_test__Vclpkg
        
          apb_i2c_reg_read_seq   rseq;
%000000   function new(string name = "apb_i2c_reg_read_test", uvm_component parent = null);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_read_test__Vclpkg
%000000     super.new(name, parent);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_read_test__Vclpkg
          endfunction
%000000   function void build_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_read_test__Vclpkg
%000000     super.build_phase(phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_read_test__Vclpkg
          //  seq = apb_i2c_reg_write_read_seq::type_id::create("seq", this);
%000000     rseq = apb_i2c_reg_read_seq :: type_id :: create("rseq",this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_read_test__Vclpkg
          endfunction
%000000   task run_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_read_test__Vclpkg
%000000     phase.raise_objection(this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_read_test__Vclpkg
%000000     do_reset();
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_read_test__Vclpkg
%000000     `uvm_info(get_type_name(), "READ TEST: frontdoor read, check mirrored vs desired", UVM_LOW)
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_read_test__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_reg_read_test__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_reg_read_test__Vclpkg
%000000     rseq.model = env.ral_model;
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_read_test__Vclpkg
%000000     rseq.slave_addr = 7'h55;
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_read_test__Vclpkg
%000000   rseq.read_write = 1'b1;
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_read_test__Vclpkg
%000000     repeat(25)
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_read_test__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_read_test__Vclpkg
%000000     rseq.start(env.agent.sequencer);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_read_test__Vclpkg
           // env.scoreboard.check_mirror_desired("after_write_read");
%000000     phase.drop_objection(this);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reg_read_test__Vclpkg
          endtask
        endclass
        

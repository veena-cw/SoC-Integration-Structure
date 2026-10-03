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
        
        // Generated RAL Env (APB) for APB_to_I2C_Controller
        // Integrates: ral_model + adapter + predictor + agent + scoreboard
        // Predictor updates mirror from monitor bus; scoreboard observes same bus for checks
        `include "uvm_macros.svh"
        import uvm_pkg::*;
        import apb_i2c_apb_item_pkg::*;
        import apb_i2c_apb_predictor_pkg::*;
        import apb_i2c_ral_pkg::*;
        import apb_i2c_ral_block_pkg::*;
        import apb_i2c_apb_adapter_pkg::*;
        class apb_i2c_ral_env extends uvm_env;
%000001   `uvm_component_utils(apb_i2c_ral_env)
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
          apb_i2c_ral_block ral_model;
          apb_i2c_apb_adapter adapter;
          apb_i2c_apb_predictor predictor;
          apb_i2c_apb_agent agent;
          apb_i2c_scoreboard scoreboard; // <--- scoreboard uses mirror/desired/predictor concepts
          apb_i2c_reset_agent reset_agent; // reset agent for stable known state
          apb_i2c_i2c_agent  i2c_agent;
          apb_i2c_apb_coverage  coverage;
%000001   function new(string name = "apb_i2c_ral_env", uvm_component parent = null);
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
%000001     super.new(name, parent);
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
          endfunction
%000001   function void build_phase(uvm_phase phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
%000001     super.build_phase(phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
%000001     ral_model = apb_i2c_ral_block::type_id::create("ral_model", this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
%000001     ral_model.build();
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
%000001     ral_model.lock_model();
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
%000001     adapter = apb_i2c_apb_adapter::type_id::create("adapter", this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
%000001     predictor = apb_i2c_apb_predictor::type_id::create("predictor", this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
%000001     agent = apb_i2c_apb_agent::type_id::create("agent", this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
%000001     i2c_agent = apb_i2c_i2c_agent::type_id::create("i2c_agent", this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
%000001     scoreboard = apb_i2c_scoreboard::type_id::create("scoreboard", this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
%000001     reset_agent = apb_i2c_reset_agent::type_id::create("reset_agent", this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
%000001     coverage = apb_i2c_apb_coverage::type_id::create("coverage",this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
          endfunction
%000001   function void connect_phase(uvm_phase phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
%000001     super.connect_phase(phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
%000001     ral_model.default_map.set_sequencer(agent.sequencer, adapter);
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
            // Disable map auto-prediction so the explicit bus predictor is the single
            // source of RAL mirror updates, including RO-write suppression.
%000001     ral_model.default_map.set_auto_predict(0);
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
%000001     predictor.map = ral_model.default_map;
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
%000001     predictor.adapter = adapter;
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
            // Predictor snoops bus to keep mirror = DUT
%000001     agent.monitor.analysis_port.connect(predictor.bus_in);
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
            // Scoreboard also snoops bus (parallel) to demonstrate mirror/desired checks
%000001     agent.monitor.analysis_port.connect(scoreboard.bus_in);
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
%000001     i2c_agent.monitor.analysis_port.connect(scoreboard.i2c_in);
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
%000001      agent.monitor.analysis_port.connect(coverage.analysis_export);
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
%000001     scoreboard.ral_model = ral_model;
-000001  point: type=line comment=block hier=$unit::apb_i2c_ral_env__Vclpkg
          endfunction
        endclass
        

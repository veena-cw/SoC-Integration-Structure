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

// Generated RAL Env (APB) for RoaLogic_PLIC
// Integrates: ral_model + adapter + predictor + agent + scoreboard
// Predictor updates mirror from monitor bus; scoreboard observes same bus for checks
`include "uvm_macros.svh"
import uvm_pkg::*;
import plic_apb_item_pkg::*;
import plic_apb_predictor_pkg::*;
import plic_ral_pkg::*;
import plic_ral_block_pkg::*;
import plic_apb_adapter_pkg::*;
class plic_ral_env extends uvm_env;
  `uvm_component_utils(plic_ral_env)
  plic_ral_block ral_model;
  plic_apb_adapter adapter;
  plic_apb_predictor predictor;
  plic_apb_agent agent;
  plic_scoreboard scoreboard; // <--- scoreboard uses mirror/desired/predictor concepts
  plic_reset_agent reset_agent; // reset agent for stable known state
  function new(string name = "plic_ral_env", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    ral_model = plic_ral_block::type_id::create("ral_model", this);
    ral_model.build();
    ral_model.lock_model();
    adapter = plic_apb_adapter::type_id::create("adapter", this);
    predictor = plic_apb_predictor::type_id::create("predictor", this);
    agent = plic_apb_agent::type_id::create("agent", this);
    scoreboard = plic_scoreboard::type_id::create("scoreboard", this);
    reset_agent = plic_reset_agent::type_id::create("reset_agent", this);
  endfunction
  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    ral_model.default_map.set_sequencer(agent.sequencer, adapter);
    // Disable map auto-prediction so the explicit bus predictor is the single
    // source of RAL mirror updates, including RO-write suppression.
    ral_model.default_map.set_auto_predict(0);
    predictor.map = ral_model.default_map;
    predictor.adapter = adapter;
    // Predictor snoops bus to keep mirror = DUT
    agent.monitor.analysis_port.connect(predictor.bus_in);
    // Scoreboard also snoops bus (parallel) to demonstrate mirror/desired checks
    agent.monitor.analysis_port.connect(scoreboard.bus_in);
    scoreboard.ral_model = ral_model;
  endfunction
endclass

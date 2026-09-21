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

// Generated RAL Env (AHB-Lite) for RoaLogic_PLIC
// Integrates: ral_model + adapter + predictor + agent + scoreboard
`include "uvm_macros.svh"
import uvm_pkg::*;
import plic_ahb_lite_item_pkg::*;
import plic_ahb_lite_predictor_pkg::*;
import plic_ral_pkg::*;
import plic_ral_block_pkg::*;
import plic_ahb_lite_adapter_pkg::*;
class plic_ral_env extends uvm_env;
  `uvm_component_utils(plic_ral_env)
  plic_ral_block ral_model;
  plic_ahb_lite_adapter adapter;
  plic_ahb_lite_predictor predictor;
  plic_ahb_lite_agent agent;
  plic_scoreboard scoreboard;
  plic_reset_agent reset_agent;
  function new(string name = "plic_ral_env", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    ral_model = plic_ral_block::type_id::create("ral_model", this);
    ral_model.build();
    ral_model.lock_model();
    adapter = plic_ahb_lite_adapter::type_id::create("adapter", this);
    predictor = plic_ahb_lite_predictor::type_id::create("predictor", this);
    agent = plic_ahb_lite_agent::type_id::create("agent", this);
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
    agent.monitor.analysis_port.connect(predictor.bus_in);
    agent.monitor.analysis_port.connect(scoreboard.bus_in);
    scoreboard.ral_model = ral_model;
  endfunction
endclass

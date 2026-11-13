//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_vsequencer
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequencer of tpu_env (CPU model sequencer, clock & reset sequencer,
//               IRQ monitor, external memory model, scoreboard).
//=================================================================================
// Virtual sequencer: handles to the agent sequencers, the IRQ monitor (irq waits; the IRQ agent is passive) and the
// memory model (configuration object), an analysis
// port for expected results (connected to the scoreboard) and a read-only handle to the scoreboard for
// statistics (burst counts, last write burst, read-burst times) that some tests inspect.
class tpu_host_vsequencer extends uvm_sequencer;
  `uvm_component_utils(tpu_host_vsequencer)

  tpu_host_axilm_agent_sequencer axilm_seqr;
  tpu_host_clk_rst_agent_sequencer rst_seqr;
  tpu_host_irq_agent_monitor     irq_mon;
  tpu_host_axis_agent_cfg        mem;
  tpu_host_scoreboard            scb;
  uvm_analysis_port #(tpu_host_exp_item) exp_ap;

  function new(string name = "tpu_host_vsequencer", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    exp_ap = new("exp_ap", this);
  endfunction
endclass : tpu_host_vsequencer

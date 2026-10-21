//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_env
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: UVM environment: master/slave passive agents, APB/reset active agents, virtual sequencer, scoreboard, coverage
//=================================================================================

class apb_spi_env extends uvm_env;

  `uvm_component_utils(apb_spi_env)

  spi_master_agent         mst_agent;
  spi_slave_agent          slv_agent;
  apb_agent                apb_agt;
  reset_agent              rst_agt;
  apb_spi_virtual_sequencer vseqr;
  apb_spi_scoreboard       scoreboard;
  apb_spi_coverage         coverage;
  // register layer
  apb_spi_ral_block        ral_model;
  apb_spi_apb_adapter      ral_adapter;
  apb_spi_apb_predictor    ral_predictor;

  function new(string name = "apb_spi_env", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    mst_agent  = spi_master_agent::type_id::create("mst_agent", this);
    slv_agent  = spi_slave_agent::type_id::create("slv_agent", this);
    apb_agt    = apb_agent::type_id::create("apb_agt", this);
    rst_agt    = reset_agent::type_id::create("rst_agt", this);
    vseqr      = apb_spi_virtual_sequencer::type_id::create("vseqr", this);
    scoreboard = apb_spi_scoreboard::type_id::create("scoreboard", this);
    coverage   = apb_spi_coverage::type_id::create("coverage", this);
    ral_model     = apb_spi_ral_block::type_id::create("ral_model", this);
    ral_model.build();
    ral_model.lock_model();
    ral_adapter   = apb_spi_apb_adapter::type_id::create("ral_adapter");
    ral_predictor = apb_spi_apb_predictor::type_id::create("ral_predictor", this);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    // monitors -> scoreboard
    apb_agt.monitor.ap.connect(scoreboard.apb_imp);
    mst_agent.monitor.ap.connect(scoreboard.mst_imp);
    mst_agent.monitor.start_ap.connect(scoreboard.mst_start_imp);
    slv_agent.monitor.ap.connect(scoreboard.slv_imp);
    rst_agt.monitor.ap.connect(scoreboard.rst_imp);
    // monitors -> coverage
    apb_agt.monitor.ap.connect(coverage.apb_imp);
    mst_agent.monitor.ap.connect(coverage.mst_imp);
    mst_agent.monitor.start_ap.connect(coverage.mst_start_imp);
    slv_agent.monitor.ap.connect(coverage.slv_imp);
    rst_agt.monitor.ap.connect(coverage.rst_imp);
    // virtual sequencer -> active-agent sequencers
    vseqr.apb_sqr = apb_agt.sequencer;
    vseqr.rst_sqr = rst_agt.sequencer;
    vseqr.ral_model = ral_model;
    // register layer: frontdoor access through the APB agent, mirror updated only by the predictor
    if (apb_agt.sequencer != null)
      ral_model.default_map.set_sequencer(apb_agt.sequencer, ral_adapter);
    ral_model.default_map.set_auto_predict(0);
    ral_predictor.map     = ral_model.default_map;
    ral_predictor.adapter = ral_adapter;
    apb_agt.monitor.ap.connect(ral_predictor.bus_in);
    rst_agt.monitor.ap.connect(ral_predictor.rst_imp);
    scoreboard.ral_model = ral_model;
  endfunction

endclass

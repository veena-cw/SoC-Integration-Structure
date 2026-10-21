//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_base_test
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: UVM base test: builds the env, publishes the agent configs through uvm_resource_db, power-on reset, pass/fail report
//=================================================================================

class apb_spi_base_test extends uvm_test;

  `uvm_component_utils(apb_spi_base_test)

  apb_spi_env              env;
  apb_agent_config         apb_cfg;
  reset_agent_config       rst_cfg;
  spi_master_agent_config  mst_cfg;
  spi_slave_agent_config   slv_cfg;

  function new(string name = "apb_spi_base_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  // Derived tests override this to change the agent configs before they are published.
  virtual function void configure_agents();
  endfunction

  function void build_phase(uvm_phase phase);
    string scope;
    super.build_phase(phase);

    apb_cfg = apb_agent_config::type_id::create("apb_cfg");
    rst_cfg = reset_agent_config::type_id::create("rst_cfg");
    mst_cfg = spi_master_agent_config::type_id::create("mst_cfg");
    slv_cfg = spi_slave_agent_config::type_id::create("slv_cfg");
    apb_cfg.is_active = UVM_ACTIVE;
    rst_cfg.is_active = UVM_ACTIVE;
    mst_cfg.is_active = UVM_PASSIVE;
    slv_cfg.is_active = UVM_PASSIVE;
    configure_agents();

    // Test -> uvm_resource_db -> agent_config -> agent -> driver/monitor/sequencer
    scope = {get_full_name(), ".env*"};
    uvm_resource_db#(apb_agent_config)::set(scope,        "apb_agent_config",        apb_cfg, this);
    uvm_resource_db#(reset_agent_config)::set(scope,      "reset_agent_config",      rst_cfg, this);
    uvm_resource_db#(spi_master_agent_config)::set(scope, "spi_master_agent_config", mst_cfg, this);
    uvm_resource_db#(spi_slave_agent_config)::set(scope,  "spi_slave_agent_config",  slv_cfg, this);

    env = apb_spi_env::type_id::create("env", this);
  endfunction

  function void end_of_elaboration_phase(uvm_phase phase);
    super.end_of_elaboration_phase(phase);
    uvm_top.set_timeout(5ms, 0);
    uvm_top.print_topology();
  endfunction

  task run_phase(uvm_phase phase);
    phase.raise_objection(this, "test running");
    apply_reset();
    run_scenario();
    #(20 * CLK_PERIOD);
    phase.drop_objection(this, "test done");
  endtask

  // The DUT powers up in reset (reset_if.rst_n = 0): release it through the reset agent.
  task apply_reset();
    reset_sequence r;
    r = reset_sequence::type_id::create("apply_rst");
    r.delay_cycles = 0;
    r.pulse_cycles = 5;
    r.start(env.rst_agt.sequencer);
    env.ral_model.reset();   // RAL mirror/desired back to the hardware reset values
  endtask

  // Overridden by every derived test.
  virtual task run_scenario();
  endtask

  task run_vseq(apb_spi_base_vseq seq);
    seq.start(env.vseqr);
  endtask

  function void report_phase(uvm_phase phase);
    uvm_report_server svr;
    super.report_phase(phase);
    svr = uvm_report_server::get_server();
    if (svr.get_severity_count(UVM_FATAL) + svr.get_severity_count(UVM_ERROR) == 0)
      `uvm_info("TEST_RESULT", "*** TEST PASSED ***", UVM_NONE)
    else
      `uvm_info("TEST_RESULT", $sformatf("*** TEST FAILED *** (%0d error(s), %0d fatal)",
                svr.get_severity_count(UVM_ERROR), svr.get_severity_count(UVM_FATAL)), UVM_NONE)
  endfunction

endclass

//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_base_test
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Base test (tpu_<feature> tests extend it): agent modes and external memory model
//               through uvm_resource_db, tpu_env build, runs the test's virtual sequence.
//=================================================================================
// Base test. Agent active / passive modes and the external memory model are published through
// uvm_resource_db before the env is built. run_phase: reset pulse, then the virtual sequence
// created by create_vseq() (tests override it), then a drain time.
class tpu_base_test extends uvm_test;
  `uvm_component_utils(tpu_base_test)

  tpu_env                 env;
  tpu_host_axis_agent_cfg mem;
  time                    drain_time = 1us;

  function new(string name = "tpu_base_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    // --- agent active / passive configuration ---
    uvm_resource_db#(uvm_active_passive_enum)::set("*.axilm_agent*",   "is_active", UVM_ACTIVE,  this);  // CPU model (AXI4-Lite master)
    uvm_resource_db#(uvm_active_passive_enum)::set("*.axis_agent*",    "is_active", UVM_ACTIVE,  this);  // external memory model (AXI4 slave)
    uvm_resource_db#(uvm_active_passive_enum)::set("*.clk_rst_agent*", "is_active", UVM_ACTIVE,  this);  // fixed-ratio clocks, rst_n
    uvm_resource_db#(uvm_active_passive_enum)::set("*.irq_agent*",     "is_active", UVM_PASSIVE, this);  // irq monitor
    // --- external memory model ---
    mem = tpu_host_axis_agent_cfg::type_id::create("axi_mem_cfg");
    configure_mem(mem);
    uvm_resource_db#(tpu_host_axis_agent_cfg)::set("*", "axi_mem_cfg", mem, this);
    env = tpu_env::type_id::create("env", this);
  endfunction

  // tests override to change memory latency / error knobs
  virtual function void configure_mem(tpu_host_axis_agent_cfg m);
  endfunction

  // tests override to return their virtual sequence
  virtual function tpu_host_base_vseq create_vseq();
    return tpu_host_base_vseq::type_id::create("vseq");
  endfunction

  function void end_of_elaboration_phase(uvm_phase phase);
    super.end_of_elaboration_phase(phase);
    if (uvm_report_enabled(UVM_HIGH)) uvm_root::get().print_topology();
  endfunction

  task run_phase(uvm_phase phase);
    tpu_host_base_vseq vs;
    phase.raise_objection(this);
    phase.get_objection().set_drain_time(this, drain_time);
    vs = create_vseq();
    vs.start(env.vseqr);
    phase.drop_objection(this);
  endtask

  // TEST PASSED / FAILED banner from the report server counts (any UVM_ERROR or UVM_FATAL fails the test).
  // A run stopped by UVM_FATAL never reaches this phase; `make run` / `make regression` then report FAILED
  // because the log has no "TEST PASSED" line.
  function void report_phase(uvm_phase phase);
    uvm_report_server rs;
    int n_err, n_fat, n_warn;
    string verdict, line;
    super.report_phase(phase);
    rs     = uvm_report_server::get_server();
    n_err  = rs.get_severity_count(UVM_ERROR);
    n_fat  = rs.get_severity_count(UVM_FATAL);
    n_warn = rs.get_severity_count(UVM_WARNING);
    verdict = (n_err + n_fat == 0) ? "TEST PASSED" : "TEST FAILED";
    line    = "****************************************************************";
    `uvm_info("TEST", $sformatf("\n%s\n**  %s : %s\n**  UVM_ERROR %0d   UVM_FATAL %0d   UVM_WARNING %0d\n%s",
              line, verdict, get_type_name(), n_err, n_fat, n_warn, line), UVM_NONE)
  endfunction

  // the base vseq resets the DUT first; individual vseqs call hw_reset() themselves when needed
endclass : tpu_base_test

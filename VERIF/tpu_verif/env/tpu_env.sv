//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_env
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Environment of tpu_host_top (UVM TB block of TPU_Verification_Scope.pptx): CPU model
//               (AXI4-Lite master agent), external memory model (AXI4 slave agent), clock & reset agent,
//               passive IRQ agent, coverage collector, scoreboard, virtual sequencer.
//=================================================================================
// Active / passive modes come from the test through uvm_resource_db. The CSR map (no RAL) is tpu_host_pkg, the
// register mirror lives in the scoreboard, the Q8.8 reference model (tpu_host_ref_model) is used by the virtual
// sequences to build the expected external memory, which the scoreboard compares with the DUT's DMA writes.
class tpu_env extends uvm_env;
  `uvm_component_utils(tpu_env)

  tpu_host_axilm_agent    axilm_agent;      // CPU model: AXI4-Lite master
  tpu_host_axis_agent     axis_agent;       // external memory model: AXI4 slave
  tpu_host_clk_rst_agent  clk_rst_agent;    // fixed-ratio clocks, rst_n
  tpu_host_irq_agent      irq_agent;        // passive, irq monitor
  tpu_host_coverage       cov;              // coverage collector CG01-CG07
  tpu_host_scoreboard     scoreboard;
  tpu_host_vsequencer     vseqr;
  tpu_host_axis_agent_cfg mem;

  function new(string name = "tpu_env", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(tpu_host_axis_agent_cfg)::read_by_name(get_full_name(), "axi_mem_cfg", mem, this))
      `uvm_fatal("NOCFG", "axi_mem_cfg not found in resource_db")
    axilm_agent   = tpu_host_axilm_agent::type_id::create("axilm_agent", this);
    axis_agent    = tpu_host_axis_agent::type_id::create("axis_agent", this);
    clk_rst_agent = tpu_host_clk_rst_agent::type_id::create("clk_rst_agent", this);
    irq_agent     = tpu_host_irq_agent::type_id::create("irq_agent", this);
    cov           = tpu_host_coverage::type_id::create("cov", this);
    scoreboard    = tpu_host_scoreboard::type_id::create("scoreboard", this);
    vseqr         = tpu_host_vsequencer::type_id::create("vseqr", this);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    axilm_agent.monitor.ap.connect(scoreboard.axilm_agent_export);
    axis_agent.monitor.ap.connect(scoreboard.axis_agent_export);
    clk_rst_agent.monitor.ap.connect(scoreboard.reset_export);
    irq_agent.monitor.ap.connect(scoreboard.irq_export);
    axilm_agent.monitor.ap.connect(cov.axil_export);
    axis_agent.monitor.ap.connect(cov.axi_export);
    clk_rst_agent.monitor.ap.connect(cov.rst_export);
    irq_agent.monitor.ap.connect(cov.irq_export);
    vseqr.exp_ap.connect(scoreboard.exp_export);
    vseqr.axilm_seqr = axilm_agent.sequencer;
    vseqr.rst_seqr   = clk_rst_agent.sequencer;
    vseqr.irq_mon    = irq_agent.monitor;
    vseqr.mem        = mem;
    vseqr.scb        = scoreboard;
  endfunction
endclass : tpu_env

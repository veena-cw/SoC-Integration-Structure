// ------------------------------------------------------------
// sram_env.sv
//
//   axi_agent      -> sram_top s_axi_* (AXI4 master, agent 0)
//   axi_agent_<i>  -> extra AXI agents, i = 1..NUM_AXI_AGENTS-1, each on
//                     its own axi_if (tb_top g_axi_agent[i]). Not part
//                     of the SRAM checking: their monitor.ap is free for
//                     a future scoreboard; virt_seqr.axi_seqrs[i] holds
//                     their sequencers (null when passive).
//   axi_rst_agent  -> aresetn     (aclk domain)
//   sram_rst_agent -> sram_resetn (sram_clk domain)
//   scoreboard     <- axi monitor + sram reset monitor
//   cov            <- axi monitor + both reset monitors
//                     (each gated by its agent's coverage_enable)
//   virt_seqr      -> handles to the three sequencers
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

class sram_env extends uvm_env;

    `uvm_component_utils(sram_env)

    axi_agent    axi_agts[];                  // [0] = sram_top's master
    axi_agent    axi_agt;                     // = axi_agts[0]
    reset_agent  axi_rst_agt;
    reset_agent  sram_rst_agt;

    sram_virtual_sequencer virt_seqr;
    sram_scoreboard        scoreboard;
    sram_coverage          cov;

    // UVM constructor.
    function new(string name = "sram_env", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // Component name of AXI agent i: "axi_agent" for 0 (unchanged),
    // "axi_agent_<i>" for the others. Configs / vifs are published
    // under uvm_test_top.env.<this name>.
    // Number of AXI agents = tb_top parameter NUM_AXI_AGENTS, published
    // by tb_top as "num_axi_agents" (1 if not found).
    static function int num_axi_agents();
        int n = 1;
        void'(uvm_resource_db#(int)::read_by_name("uvm_test_top", "num_axi_agents", n));
        return (n < 1) ? 1 : n;
    endfunction

    static function string agent_name(int i);
        return (i == 0) ? "axi_agent" : $sformatf("axi_agent_%0d", i);
    endfunction

    // Create the AXI agent, the two reset agents, the virtual sequencer,
    // the scoreboard and the coverage collector.
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        axi_agts = new[num_axi_agents()];
        foreach (axi_agts[i])
            axi_agts[i] = axi_agent::type_id::create(agent_name(i), this);
        axi_agt      = axi_agts[0];
        axi_rst_agt  = reset_agent::type_id::create("axi_rst_agent",  this);
        sram_rst_agt = reset_agent::type_id::create("sram_rst_agent", this);
        virt_seqr    = sram_virtual_sequencer::type_id::create("virt_seqr", this);
        scoreboard   = sram_scoreboard::type_id::create("scoreboard", this);
        cov          = sram_coverage  ::type_id::create("cov", this);
    endfunction

    // Connect monitors to scoreboard and coverage, hand the AXI config to
    // both, and fill the virtual sequencer's handles.
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        axi_agt.monitor.ap.connect(scoreboard.axi_imp);
        sram_rst_agt.monitor.ap.connect(scoreboard.sram_rst_imp);
        scoreboard.cfg = axi_agt.cfg;
        cov.cfg        = axi_agt.cfg;
        if (axi_agt.cfg.coverage_enable)
            axi_agt.monitor.ap.connect(cov.axi_imp);
        if (axi_rst_agt.cfg.coverage_enable)
            axi_rst_agt.monitor.ap.connect(cov.axi_rst_imp);
        if (sram_rst_agt.cfg.coverage_enable)
            sram_rst_agt.monitor.ap.connect(cov.sram_rst_imp);

        virt_seqr.axi_seqr      = axi_agt.sequencer;
        virt_seqr.axi_seqrs = new[axi_agts.size()];
        foreach (axi_agts[i])
            virt_seqr.axi_seqrs[i] = axi_agts[i].sequencer;
        virt_seqr.axi_rst_seqr  = axi_rst_agt.sequencer;
        virt_seqr.sram_rst_seqr = sram_rst_agt.sequencer;
    endfunction

endclass

// ------------------------------------------------------------
// sram_env.sv
//
//   axi_agent      -> sram_top s_axi_* (AXI4 master)
//   axi_rst_agent  -> aresetn     (aclk domain)
//   sram_rst_agent -> sram_resetn (sram_clk domain)
//   scoreboard     <- axi monitor + sram reset monitor
//   cov            <- axi monitor
//   virt_seqr      -> handles to the three sequencers
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class sram_env extends uvm_env;

    `uvm_component_utils(sram_env)

    axi_agent    axi_agt;
    reset_agent  axi_rst_agt;
    reset_agent  sram_rst_agt;

    sram_virtual_sequencer virt_seqr;
    sram_scoreboard        scoreboard;
    sram_coverage          cov;

    function new(string name = "sram_env", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        axi_agt      = axi_agent  ::type_id::create("axi_agent",      this);
        axi_rst_agt  = reset_agent::type_id::create("axi_rst_agent",  this);
        sram_rst_agt = reset_agent::type_id::create("sram_rst_agent", this);
        virt_seqr    = sram_virtual_sequencer::type_id::create("virt_seqr", this);
        scoreboard   = sram_scoreboard::type_id::create("scoreboard", this);
        cov          = sram_coverage  ::type_id::create("cov", this);
    endfunction

    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        axi_agt.monitor.ap.connect(scoreboard.axi_imp);
        sram_rst_agt.monitor.ap.connect(scoreboard.sram_rst_imp);
        if (axi_agt.cfg.coverage_enable)
            axi_agt.monitor.ap.connect(cov.analysis_export);

        virt_seqr.axi_seqr      = axi_agt.sequencer;
        virt_seqr.axi_rst_seqr  = axi_rst_agt.sequencer;
        virt_seqr.sram_rst_seqr = sram_rst_agt.sequencer;
    endfunction

endclass

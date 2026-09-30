// bp_env.sv
`ifndef BP_ENV_SV
`define BP_ENV_SV

class bp_env extends uvm_env;
  `uvm_component_utils(bp_env)

  cpu_reset_agent   reset_agt;
  bedrock_agent      bedrock_agt;
  bedrock_monitor    outgoing_mon;
  bedrock_scoreboard sb;
  bp_coverage        cov;
  cpu_axi_agent#()  axi_agt;
  cpu_axi_coverage#() axi_cov;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    reset_agt   = cpu_reset_agent::type_id::create("reset_agt", this);
    bedrock_agt = bedrock_agent::type_id::create("bedrock_agt", this);
    outgoing_mon = bedrock_monitor::type_id::create("outgoing_mon", this);
    sb          = bedrock_scoreboard::type_id::create("sb", this);
    cov         = bp_coverage::type_id::create("cov", this);
    axi_agt     = cpu_axi_agent#()::type_id::create("axi_agt", this);
    axi_cov     = cpu_axi_coverage#()::type_id::create("axi_cov", this);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    bedrock_agt.bedrock_mon.ap.connect(sb.ap_imp);
    outgoing_mon.ap.connect(sb.ap_imp);
    bedrock_agt.bedrock_mon.ap.connect(cov.analysis_export);
    outgoing_mon.ap.connect(cov.analysis_export);
    axi_agt.monitor.ap.connect(axi_cov.analysis_export);
    axi_agt.monitor.ap.connect(sb.axi_imp);
  endfunction

endclass

`endif

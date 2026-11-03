class csi2_env extends uvm_env;
  `uvm_component_utils(csi2_env)

  csi2_env_config       cfg;
  csi2_ppi_agent        ppi_agent;
  csi2_axi_agent        axi_agent;
  csi2_axi4_lite_agent  axi_lite_agent;
  csi2_axi_write_monitor axi_monitor;
  csi2_rx_internal_monitor internal_monitor;
  csi2_reset_agent      reset_agent;
  csi2_scoreboard       scoreboard;

  function new(string name = "csi2_env", uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(csi2_env_config)::get(this, "", "env_cfg", cfg))
      `uvm_fatal("ENV", "Missing environment configuration")
    if (cfg.mode != CSI2_RX_STANDALONE)
      `uvm_fatal("ENV_MODE", "Current repository contains RX RTL only")

    ppi_agent = csi2_ppi_agent::type_id::create("ppi_agent", this);
    axi_agent = csi2_axi_agent::type_id::create("axi_agent", this);
    axi_lite_agent = csi2_axi4_lite_agent::type_id::create(
        "axi_lite_agent", this);
    internal_monitor = csi2_rx_internal_monitor::type_id::create(
        "internal_monitor", this);
    reset_agent = csi2_reset_agent::type_id::create("reset_agent", this);
    scoreboard  = csi2_scoreboard::type_id::create("scoreboard", this);

  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    // Preserve the env.axi_monitor handle used by the existing tests.
    axi_monitor = axi_agent.monitor;
    ppi_agent.driver.expected_ap.connect(scoreboard.expected_fifo.analysis_export);
    axi_agent.monitor.ap.connect(scoreboard.actual_fifo.analysis_export);
    internal_monitor.short_ap.connect(scoreboard.short_actual_fifo.analysis_export);
  endfunction
endclass : csi2_env

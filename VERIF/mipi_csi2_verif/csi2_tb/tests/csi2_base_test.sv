class csi2_base_test extends uvm_test;
  `uvm_component_utils(csi2_base_test)

  csi2_env_config   env_cfg;
  csi2_reset_config rst_cfg;
  csi2_env          env;

  function new(string name = "csi2_base_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    env_cfg = csi2_env_config::type_id::create("env_cfg");
    env_cfg.mode = CSI2_RX_STANDALONE;

    if (!uvm_config_db#(virtual c_phy_bfm_if)::get(null, "", "phy_vif",
                                                   env_cfg.phy_vif))
      `uvm_fatal("BASE_TEST", "Failed to get C-PHY BFM interface")
    if (!uvm_config_db#(virtual csi2_axi_write_if)::get(null, "", "axi_vif",
                                                        env_cfg.axi_vif))
      `uvm_fatal("BASE_TEST", "Failed to get AXI write interface")
    if (!uvm_config_db#(virtual csi2_reset_if)::get(null, "", "rst_vif",
                                                     env_cfg.rst_vif))
      `uvm_fatal("BASE_TEST", "Failed to get reset interface")
    if (!uvm_config_db#(virtual csi2_rx_status_if)::get(null, "", "status_vif",
                                                        env_cfg.status_vif))
      `uvm_fatal("BASE_TEST", "Failed to get RX status interface")

    rst_cfg = csi2_reset_config::type_id::create("rst_cfg");
    rst_cfg.vif = env_cfg.rst_vif;
    uvm_config_db#(csi2_env_config)::set(this, "*", "env_cfg", env_cfg);
    uvm_config_db#(csi2_reset_config)::set(this, "*", "rst_cfg", rst_cfg);
    env = csi2_env::type_id::create("env", this);
  endfunction

  task apply_reset();
    csi2_reset_sequence sequence_h;
    sequence_h = csi2_reset_sequence::type_id::create("reset_sequence");
    sequence_h.delay_cycles = 0;
    sequence_h.assertion_cycles = 10;
    sequence_h.start(env.reset_agent.rst_sr);
  endtask

  virtual task run_scenario();
    `uvm_fatal("BASE_TEST", "run_scenario() must be implemented")
  endtask

  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    fork
      run_scenario();
      begin
        repeat (10000) @(env_cfg.axi_vif.mon_cb);
        `uvm_fatal("TIMEOUT", "CSI-2 RX test timed out")
      end
    join_any
    disable fork;
    phase.drop_objection(this);
  endtask
endclass : csi2_base_test

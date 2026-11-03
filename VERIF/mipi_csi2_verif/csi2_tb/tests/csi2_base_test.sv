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
    if (!uvm_config_db#(virtual csi2_axi4_lite_if)::get(
          null, "", "axi_lite_vif", env_cfg.axi_lite_vif))
      `uvm_fatal("BASE_TEST", "Failed to get AXI4-Lite interface")
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
    configure_receiver();
  endtask

  task axi4_lite_write(
    input bit [31:0] address,
    input bit [31:0] data,
    input bit [3:0]  strobe,
    output bit [1:0] response
  );
    csi2_axi4_lite_sequence sequence_h;
    sequence_h = csi2_axi4_lite_sequence::type_id::create(
        "axi4_lite_write_sequence");
    sequence_h.operation    = CSI2_AXI4L_WRITE;
    sequence_h.address      = address;
    sequence_h.write_data   = data;
    sequence_h.write_strobe = strobe;
    sequence_h.start(env.axi_lite_agent.sequencer);
    response = sequence_h.response;
  endtask

  task axi4_lite_read(
    input bit [31:0] address,
    output bit [31:0] data,
    output bit [1:0] response
  );
    csi2_axi4_lite_sequence sequence_h;
    sequence_h = csi2_axi4_lite_sequence::type_id::create(
        "axi4_lite_read_sequence");
    sequence_h.operation = CSI2_AXI4L_READ;
    sequence_h.address   = address;
    sequence_h.start(env.axi_lite_agent.sequencer);
    data     = sequence_h.read_data;
    response = sequence_h.response;
  endtask

  task configure_receiver();
    bit [1:0] response;
    // csi2_reg: lane_configuration 2 selects four lanes; mode_selection 0
    // selects C-PHY.  Every RX data test starts from this legal state.
    axi4_lite_write(32'h0000_0000, 32'h0000_0002, 4'hf, response);
    if (response != 2'b00)
      `uvm_error("AXI4L_CFG", "Lane configuration write failed")
    axi4_lite_write(32'h0000_0004, 32'h0000_0000, 4'hf, response);
    if (response != 2'b00)
      `uvm_error("AXI4L_CFG", "Mode selection write failed")
  endtask

  task drain_pipeline(int unsigned cycles = 3000);
    repeat (cycles) @(env_cfg.axi_vif.mon_cb);
  endtask

  task report_rx_status(string report_id);
    `uvm_info(report_id,
      $sformatf("BFM status=%0d state=%0d dtype=0x%02h lane_err=%0b llp_err=%0b pixel_valid=%0d axi_wr_en=%0d AW=%0d W=%0d B=%0d orphan-W=%0d zero-strobe=%0d effective=%0d",
        env_cfg.phy_vif.last_status,
        env_cfg.phy_vif.bfm_state,
        env_cfg.status_vif.dtype,
        env_cfg.status_vif.lane_err,
        env_cfg.status_vif.llp_err_vld,
        env.internal_monitor.pixel_valid_cycles,
        env.internal_monitor.axi_wr_en_cycles,
        env.axi_monitor.aw_handshake_count,
        env.axi_monitor.w_handshake_count,
        env.axi_monitor.b_handshake_count,
        env.axi_monitor.orphan_w_count,
        env.axi_monitor.zero_strobe_count,
        env.axi_monitor.effective_write_count), UVM_NONE)
  endtask

  virtual task run_scenario();
    `uvm_fatal("BASE_TEST", "run_scenario() must be implemented")
  endtask

  task run_phase(uvm_phase phase);
    csi2_axi_slave_sequence response_sequence;
    phase.raise_objection(this);
    response_sequence = csi2_axi_slave_sequence::type_id::create(
        "response_sequence");
    response_sequence.awready_delay = env_cfg.axi_awready_delay;
    response_sequence.wready_delay  = env_cfg.axi_wready_delay;
    response_sequence.bvalid_delay  = env_cfg.axi_bvalid_delay;
    response_sequence.bresp         = env_cfg.axi_bresp;
    fork
      response_sequence.start(env.axi_agent.sequencer);
      run_scenario();
      begin
        repeat (10000) @(env_cfg.axi_vif.mon_cb);
        `uvm_fatal("TIMEOUT", "CSI-2 RX test timed out")
      end
    join_any
    disable fork;
    phase.drop_objection(this);
  endtask
  task shutdown_phase (uvm_phase phase);
	uvm_objection objection;
	super.shutdown_phase(phase);
	objection=phase.get_objection();
	objection.set_drain_time(this,100ns);
	$display("shut down phase : extended time period :%0t",$time);
  endtask

endclass : csi2_base_test

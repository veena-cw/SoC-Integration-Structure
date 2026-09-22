class csi2_base_test extends uvm_test;
  `uvm_component_utils(csi2_base_test)

  csi2_env_config   env_cfg;
  csi2_tx_config    tx_cfg[];
  csi2_rx_config    rx_cfg[];
  csi2_reset_config rst_cfg;
  csi2_env          en;
  csi2_rx_sequence  replay_sq;

  int unsigned no_of_tx_agents = 1;
  int unsigned no_of_rx_agents = 1;

  function new(string name = "csi2_base_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    env_cfg = csi2_env_config::type_id::create("env_cfg");
    env_cfg.no_of_tx_agents = no_of_tx_agents;
    env_cfg.no_of_rx_agents = no_of_rx_agents;

    tx_cfg = new[no_of_tx_agents];
    foreach(tx_cfg[i]) begin
      tx_cfg[i] = csi2_tx_config::type_id::create($sformatf("tx_cfg[%0d]", i));

      if(!uvm_config_db#(virtual csi2_if)::get(null, "", "vif", tx_cfg[i].vif))
        `uvm_fatal("BASE_TEST", "Failed to get CSI-2 interface")

      if(!uvm_config_db#(virtual csi2_reset_if)::get(null, "", "rst_vif",
                                                     tx_cfg[i].rst_vif))
        `uvm_fatal("BASE_TEST", "Failed to get reset interface for TX")

      tx_cfg[i].is_active = (i < 2) ? UVM_ACTIVE : UVM_PASSIVE;
      uvm_config_db#(csi2_tx_config)::set(
          this, $sformatf("en.tx_agt_tp.tx_ag[%0d]*", i), "tx_cfg", tx_cfg[i]);
    end

    rst_cfg = csi2_reset_config::type_id::create("rst_cfg");
    if(!uvm_config_db#(virtual csi2_reset_if)::get(null, "", "rst_vif",
                                                   rst_cfg.vif))
      `uvm_fatal("BASE_TEST", "Failed to get reset interface")
    uvm_config_db#(csi2_reset_config)::set(this, "*", "rst_cfg", rst_cfg);

    rx_cfg = new[no_of_rx_agents];
    foreach(rx_cfg[i]) begin
      rx_cfg[i] = csi2_rx_config::type_id::create($sformatf("rx_cfg[%0d]", i));

      if(!uvm_config_db#(virtual csi2_if)::get(null, "", "vif", rx_cfg[i].vif))
        `uvm_fatal("BASE_TEST", "Failed to get CSI-2 interface for RX")

      rx_cfg[i].is_active = UVM_ACTIVE;
      rx_cfg[i].rst_vif   = rst_cfg.vif;
      uvm_config_db#(csi2_rx_config)::set(
          this, $sformatf("en.rx_agt_tp.rx_ag[%0d]*", i), "rx_cfg", rx_cfg[i]);
    end

    uvm_config_db#(csi2_env_config)::set(this, "*", "env_cfg", env_cfg);
    en = csi2_env::type_id::create("en", this);
  endfunction

  function void end_of_elaboration_phase(uvm_phase phase);
    super.end_of_elaboration_phase(phase);
    uvm_root::get().print_topology();
  endfunction

  task apply_reset();
    csi2_reset_sequence sq;
    sq = csi2_reset_sequence::type_id::create("reset_sq");
    sq.start(en.rst_agt.rst_sr);
  endtask

  task send_one();
    csi2_tx_sequence sq;
    sq = csi2_tx_sequence::type_id::create("packet_sq");
    sq.start(en.tx_agt_tp.tx_ag[0].tx_sr);
  endtask

  task send_short(bit [5:0] dt);
    csi2_tx_short_sequence sq;
    sq = csi2_tx_short_sequence::type_id::create("short_sq");
    sq.dt = dt;
    sq.start(en.tx_agt_tp.tx_ag[0].tx_sr);
  endtask

  task check_one();
    int unsigned target;
    target = en.sb.compared_count + 1;
    send_one();
    wait(en.sb.compared_count == target);
  endtask

  task run_initial_baseline();
    apply_reset();
    check_one();
  endtask

  virtual task run_scenario();
    `uvm_fatal("BASE_TEST", "run_scenario() must be implemented by a derived test")
  endtask

  task run_phase(uvm_phase phase);
    phase.raise_objection(this);

    replay_sq = csi2_rx_sequence::type_id::create("replay_sq");
    replay_sq.captured_fifo = en.captured_fifo;
    replay_sq.cfg = rx_cfg[0];

    `uvm_info("TEST", $sformatf("Running UVM test class: %s", get_type_name()),
              UVM_LOW)

    fork
      replay_sq.start(en.rx_agt_tp.rx_ag[0].rx_sr);
      begin
        run_scenario();
        repeat(20) @(tx_cfg[0].vif.rx_mon_cb);
      end
      begin
        repeat(10000) @(tx_cfg[0].vif.tx_mon_cb);
        `uvm_fatal("TIMEOUT", "Timed out waiting for CSI-2 test completion")
      end
    join_any
    disable fork;

    if(en.captured_fifo.used() != 0 || en.rx_agt_tp.rx_ag[0].rx_dr.busy)
      `uvm_error("TEST", "Replay did not drain")

    phase.drop_objection(this);
  endtask
endclass : csi2_base_test

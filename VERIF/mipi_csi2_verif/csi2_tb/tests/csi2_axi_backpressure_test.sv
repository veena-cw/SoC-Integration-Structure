class csi2_axi_backpressure_test extends csi2_base_test;
  `uvm_component_utils(csi2_axi_backpressure_test)
  function new(string name = "csi2_axi_backpressure_test", uvm_component parent = null); super.new(name, parent); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    env_cfg.axi_awready_delay = 5;
    env_cfg.axi_wready_delay  = 7;
    env_cfg.axi_bvalid_delay  = 3;
  endfunction
  virtual task run_scenario();
    csi2_raw6_seq sequence_h;
    apply_reset();
    sequence_h = csi2_raw6_seq::type_id::create("backpressure_sequence");
    sequence_h.start(env.ppi_agent.sequencer);
    drain_pipeline(5000);
    report_rx_status("RX_AXI_BACKPRESSURE_STATUS");
  endtask
endclass : csi2_axi_backpressure_test

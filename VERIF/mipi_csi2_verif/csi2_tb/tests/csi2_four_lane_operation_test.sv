class csi2_four_lane_operation_test extends csi2_base_test;
  `uvm_component_utils(csi2_four_lane_operation_test)
  function new(string name = "csi2_four_lane_operation_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual task run_scenario();
    csi2_raw6_seq sequence_h;
    env_cfg.active_segment_mask = 4'hf;
    apply_reset();
    sequence_h = csi2_raw6_seq::type_id::create("four_lane_sequence");
    sequence_h.start(env.ppi_agent.sequencer);
    drain_pipeline();
    report_rx_status("RX_FOUR_LANE_STATUS");
  endtask
endclass : csi2_four_lane_operation_test

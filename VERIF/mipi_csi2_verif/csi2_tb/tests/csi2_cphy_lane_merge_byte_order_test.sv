class csi2_cphy_lane_merge_byte_order_test extends csi2_base_test;
  `uvm_component_utils(csi2_cphy_lane_merge_byte_order_test)
  function new(string name = "csi2_cphy_lane_merge_byte_order_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual task run_scenario();
    csi2_lane_merge_byte_order_seq sequence_h;
    apply_reset();
    sequence_h = csi2_lane_merge_byte_order_seq::type_id::create("lane_order_sequence");
    sequence_h.start(env.ppi_agent.sequencer);
    drain_pipeline();
    report_rx_status("RX_LANE_ORDER_STATUS");
  endtask
endclass : csi2_cphy_lane_merge_byte_order_test

class csi2_cphy_error_input_aggregation_test extends csi2_base_test;
  `uvm_component_utils(csi2_cphy_error_input_aggregation_test)
  function new(string name = "csi2_cphy_error_input_aggregation_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual task run_scenario();
    csi2_error_input_aggregation_seq sequence_h;
    apply_reset();
    sequence_h = csi2_error_input_aggregation_seq::type_id::create("error_aggregation_sequence");
    sequence_h.start(env.ppi_agent.sequencer);
    drain_pipeline();
    report_rx_status("RX_ERROR_AGGREGATION_STATUS");
  endtask
endclass : csi2_cphy_error_input_aggregation_test

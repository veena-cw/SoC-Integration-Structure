class csi2_b2b_long_packet_test extends csi2_base_test;
  `uvm_component_utils(csi2_b2b_long_packet_test)
  function new(string name = "csi2_b2b_long_packet_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual task run_scenario();
    csi2_back_to_back_long_seq sequence_h;
    apply_reset();
    sequence_h = csi2_back_to_back_long_seq::type_id::create("b2b_long_sequence");
    sequence_h.start(env.ppi_agent.sequencer);
    drain_pipeline(5000);
    report_rx_status("RX_B2B_LONG_STATUS");
  endtask
endclass : csi2_b2b_long_packet_test

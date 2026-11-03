class csi2_payload_valid_gap_test extends csi2_base_test;
  `uvm_component_utils(csi2_payload_valid_gap_test)
  function new(string name = "csi2_payload_valid_gap_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual task run_scenario();
    csi2_payload_valid_gap_seq sequence_h;
    apply_reset();
    sequence_h = csi2_payload_valid_gap_seq::type_id::create("payload_gap_sequence");
    sequence_h.start(env.ppi_agent.sequencer);
    drain_pipeline();
    report_rx_status("RX_PAYLOAD_GAP_STATUS");
  endtask
endclass : csi2_payload_valid_gap_test

class csi2_generic_short_packet_test extends csi2_base_test;
  `uvm_component_utils(csi2_generic_short_packet_test)
  function new(string name = "csi2_generic_short_packet_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual task run_scenario();
    csi2_generic_short_packet_seq sequence_h;
    apply_reset();
    sequence_h = csi2_generic_short_packet_seq::type_id::create("generic_short_sequence");
    sequence_h.start(env.ppi_agent.sequencer);
    drain_pipeline();
    report_rx_status("RX_GENERIC_SHORT_STATUS");
  endtask
endclass : csi2_generic_short_packet_test

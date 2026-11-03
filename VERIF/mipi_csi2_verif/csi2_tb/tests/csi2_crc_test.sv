class csi2_crc_test extends csi2_base_test;
  `uvm_component_utils(csi2_crc_test)

  function new(string name = "csi2_crc_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual task run_scenario();
    csi2_crc_good_packet_seq good_h;
    csi2_crc_error_seq bad_h;
    apply_reset();
    good_h = csi2_crc_good_packet_seq::type_id::create("good_crc_sequence");
    bad_h = csi2_crc_error_seq::type_id::create("bad_crc_sequence");
    good_h.start(env.ppi_agent.sequencer);
    bad_h.start(env.ppi_agent.sequencer);
    drain_pipeline(5000);
    report_rx_status("RX_CRC_STATUS");
  endtask
endclass : csi2_crc_test

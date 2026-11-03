class csi2_crc_error_test extends csi2_base_test;
  `uvm_component_utils(csi2_crc_error_test)
  function new(string name = "csi2_crc_error_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual task run_scenario();
    csi2_crc_error_seq sequence_h;
    apply_reset();
    sequence_h = csi2_crc_error_seq::type_id::create("crc_error_sequence");
    sequence_h.start(env.ppi_agent.sequencer);
    drain_pipeline();
    report_rx_status("RX_CRC_ERROR_STATUS");
  endtask
endclass : csi2_crc_error_test

class csi2_cphy_fixed_64bit_ppi_test extends csi2_base_test;
  `uvm_component_utils(csi2_cphy_fixed_64bit_ppi_test)
  function new(string name = "csi2_cphy_fixed_64bit_ppi_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual task run_scenario();
    csi2_fixed_64bit_ppi_seq sequence_h;
    apply_reset();
    sequence_h = csi2_fixed_64bit_ppi_seq::type_id::create("fixed64_sequence");
    sequence_h.start(env.ppi_agent.sequencer);
    drain_pipeline();
    report_rx_status("RX_FIXED64_STATUS");
  endtask
endclass : csi2_cphy_fixed_64bit_ppi_test

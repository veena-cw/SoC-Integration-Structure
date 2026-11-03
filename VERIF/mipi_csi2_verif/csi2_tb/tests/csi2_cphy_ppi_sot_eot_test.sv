class csi2_cphy_ppi_sot_eot_test extends csi2_base_test;
  `uvm_component_utils(csi2_cphy_ppi_sot_eot_test)
  function new(string name = "csi2_cphy_ppi_sot_eot_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual task run_scenario();
    csi2_sot_eot_seq sequence_h;
    apply_reset();
    sequence_h = csi2_sot_eot_seq::type_id::create("sot_eot_sequence");
    sequence_h.start(env.ppi_agent.sequencer);
    drain_pipeline();
    report_rx_status("RX_SOT_EOT_STATUS");
  endtask
endclass : csi2_cphy_ppi_sot_eot_test

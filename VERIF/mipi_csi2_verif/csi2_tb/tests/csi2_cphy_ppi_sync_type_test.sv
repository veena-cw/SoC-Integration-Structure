class csi2_cphy_ppi_sync_type_test extends csi2_base_test;
  `uvm_component_utils(csi2_cphy_ppi_sync_type_test)
  function new(string name = "csi2_cphy_ppi_sync_type_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual task run_scenario();
    csi2_sync_type_seq sequence_h;
    env_cfg.rtl_sync_workaround = 1'b0;
    apply_reset();
    sequence_h = csi2_sync_type_seq::type_id::create("sync_type_sequence");
    sequence_h.start(env.ppi_agent.sequencer);
    drain_pipeline();
    report_rx_status("RX_SYNC_TYPE_STATUS");
  endtask
endclass : csi2_cphy_ppi_sync_type_test

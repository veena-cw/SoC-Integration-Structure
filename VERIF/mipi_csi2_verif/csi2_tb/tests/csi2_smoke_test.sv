class csi2_smoke_test extends csi2_base_test;
  `uvm_component_utils(csi2_smoke_test)

  function new(string name = "csi2_smoke_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual task run_scenario();
    csi2_raw6_seq sequence_h;
    apply_reset();
    sequence_h = csi2_raw6_seq::type_id::create("smoke_sequence");
    sequence_h.start(env.ppi_agent.sequencer);
    drain_pipeline();
    report_rx_status("RX_SMOKE_STATUS");
  endtask
endclass : csi2_smoke_test

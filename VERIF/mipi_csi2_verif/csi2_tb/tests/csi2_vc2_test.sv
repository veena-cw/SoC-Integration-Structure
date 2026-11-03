class csi2_vc2_test extends csi2_base_test;
  `uvm_component_utils(csi2_vc2_test)
  function new(string name = "csi2_vc2_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual task run_scenario();
    csi2_vc2_seq sequence_h;
    apply_reset();
    sequence_h = csi2_vc2_seq::type_id::create("vc2_sequence");
    sequence_h.start(env.ppi_agent.sequencer);
    drain_pipeline();
    report_rx_status("RX_VC2_STATUS");
  endtask
endclass : csi2_vc2_test

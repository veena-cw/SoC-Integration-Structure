class csi2_vc1_test extends csi2_base_test;
  `uvm_component_utils(csi2_vc1_test)
  function new(string name = "csi2_vc1_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual task run_scenario();
    csi2_vc1_seq sequence_h;
    apply_reset();
    sequence_h = csi2_vc1_seq::type_id::create("vc1_sequence");
    sequence_h.start(env.ppi_agent.sequencer);
    drain_pipeline();
    report_rx_status("RX_VC1_STATUS");
  endtask
endclass : csi2_vc1_test

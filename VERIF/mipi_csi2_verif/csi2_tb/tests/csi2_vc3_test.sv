class csi2_vc3_test extends csi2_base_test;
  `uvm_component_utils(csi2_vc3_test)
  function new(string name = "csi2_vc3_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual task run_scenario();
    csi2_vc3_seq sequence_h;
    apply_reset();
    sequence_h = csi2_vc3_seq::type_id::create("vc3_sequence");
    sequence_h.start(env.ppi_agent.sequencer);
    drain_pipeline();
    report_rx_status("RX_VC3_STATUS");
  endtask
endclass : csi2_vc3_test

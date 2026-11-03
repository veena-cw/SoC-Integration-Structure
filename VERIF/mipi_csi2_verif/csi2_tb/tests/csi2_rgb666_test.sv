class csi2_rgb666_test extends csi2_base_test;
  `uvm_component_utils(csi2_rgb666_test)
  function new(string name = "csi2_rgb666_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual task run_scenario();
    csi2_rgb666_seq sequence_h;
    apply_reset();
    sequence_h = csi2_rgb666_seq::type_id::create("rgb666_sequence");
    sequence_h.start(env.ppi_agent.sequencer);
    drain_pipeline();
    report_rx_status("RX_RGB666_STATUS");
  endtask
endclass : csi2_rgb666_test

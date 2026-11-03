class csi2_short_long_mix_test extends csi2_base_test;
  `uvm_component_utils(csi2_short_long_mix_test)
  function new(string name = "csi2_short_long_mix_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual task run_scenario();
    csi2_short_long_mix_seq sequence_h;
    apply_reset();
    sequence_h = csi2_short_long_mix_seq::type_id::create("short_long_sequence");
    sequence_h.start(env.ppi_agent.sequencer);
    drain_pipeline(5000);
    report_rx_status("RX_SHORT_LONG_STATUS");
  endtask
endclass : csi2_short_long_mix_test

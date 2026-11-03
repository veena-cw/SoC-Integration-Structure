class csi2_random_stress_test extends csi2_base_test;
  `uvm_component_utils(csi2_random_stress_test)
  function new(string name = "csi2_random_stress_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual task run_scenario();
    csi2_random_stress_seq sequence_h;
    apply_reset();
    sequence_h = csi2_random_stress_seq::type_id::create("random_stress_sequence");
    sequence_h.start(env.ppi_agent.sequencer);
    drain_pipeline(10000);
    report_rx_status("RX_RANDOM_STRESS_STATUS");
  endtask
endclass : csi2_random_stress_test

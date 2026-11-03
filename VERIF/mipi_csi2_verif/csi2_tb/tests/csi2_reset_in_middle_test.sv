class csi2_reset_in_middle_test extends csi2_base_test;
  `uvm_component_utils(csi2_reset_in_middle_test)
  function new(string name = "csi2_reset_in_middle_test", uvm_component parent = null); super.new(name, parent); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    env_cfg.reset_interruption_test = 1'b1;
  endfunction
  virtual task run_scenario();
    csi2_raw6_seq sequence_h;
    csi2_reset_sequence reset_h;
    apply_reset();
    sequence_h = csi2_raw6_seq::type_id::create("reset_middle_data");
    reset_h = csi2_reset_sequence::type_id::create("reset_middle_pulse");
    reset_h.delay_cycles = 30;
    reset_h.assertion_cycles = 10;
    fork
      sequence_h.start(env.ppi_agent.sequencer);
      reset_h.start(env.reset_agent.rst_sr);
    join
    drain_pipeline(100);
    report_rx_status("RX_RESET_MIDDLE_STATUS");
  endtask
endclass : csi2_reset_in_middle_test

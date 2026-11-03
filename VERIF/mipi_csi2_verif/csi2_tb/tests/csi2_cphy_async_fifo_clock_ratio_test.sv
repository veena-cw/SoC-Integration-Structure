class csi2_cphy_async_fifo_clock_ratio_test extends csi2_base_test;
  `uvm_component_utils(csi2_cphy_async_fifo_clock_ratio_test)
  function new(string name = "csi2_cphy_async_fifo_clock_ratio_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual task run_scenario();
    csi2_raw6_seq sequence_h;
    apply_reset();
    sequence_h = csi2_raw6_seq::type_id::create("async_ratio_sequence");
    sequence_h.start(env.ppi_agent.sequencer);
    drain_pipeline(5000);
    report_rx_status("RX_ASYNC_RATIO_STATUS");
  endtask
endclass : csi2_cphy_async_fifo_clock_ratio_test

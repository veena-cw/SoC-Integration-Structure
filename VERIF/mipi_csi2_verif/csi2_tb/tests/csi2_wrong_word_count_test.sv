class csi2_wrong_word_count_test extends csi2_base_test;
  `uvm_component_utils(csi2_wrong_word_count_test)
  function new(string name = "csi2_wrong_word_count_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual task run_scenario();
    csi2_wrong_word_count_seq sequence_h;
    apply_reset();
    sequence_h = csi2_wrong_word_count_seq::type_id::create("wrong_wc_sequence");
    sequence_h.start(env.ppi_agent.sequencer);
    drain_pipeline();
    report_rx_status("RX_WRONG_WC_STATUS");
  endtask
endclass : csi2_wrong_word_count_test

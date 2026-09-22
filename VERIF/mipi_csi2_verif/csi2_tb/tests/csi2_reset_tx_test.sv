class csi2_reset_tx_test extends csi2_base_test;
  `uvm_component_utils(csi2_reset_tx_test)

  function new(string name = "csi2_reset_tx_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual task run_scenario();
    int unsigned before_count;

    run_initial_baseline();
    before_count = en.sb.compared_count;

    fork
      send_one();
      begin
        do @(tx_cfg[0].vif.tx_mon_cb);
        while(!(tx_cfg[0].vif.tx_mon_cb.px_valid_i &&
                tx_cfg[0].vif.tx_mon_cb.px_ready_o));
        apply_reset();
      end
    join

    if(en.sb.compared_count != before_count)
      `uvm_error("RESET_TEST", "Interrupted TX packet was compared")
  endtask
endclass : csi2_reset_tx_test

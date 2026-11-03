class csi2_reset_idle_test extends csi2_base_test;
  `uvm_component_utils(csi2_reset_idle_test)
  function new(string name = "csi2_reset_idle_test", uvm_component parent = null); super.new(name, parent); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    env_cfg.control_only_test = 1'b1;
  endfunction
  virtual task run_scenario();
    apply_reset();
    repeat (20) @(env_cfg.phy_vif.bfm_clk);
    apply_reset();
    drain_pipeline(20);
    report_rx_status("RX_RESET_IDLE_STATUS");
  endtask
endclass : csi2_reset_idle_test

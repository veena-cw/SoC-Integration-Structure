class csi2_ecc1_test extends csi2_base_test;
  `uvm_component_utils(csi2_ecc1_test)

  function new(string name = "csi2_ecc1_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual task run_scenario();
    run_initial_baseline();
    rx_cfg[0].fault = RX_ECC1;
    check_one();
    rx_cfg[0].fault = RX_CLEAN;
    check_one();
  endtask
endclass : csi2_ecc1_test

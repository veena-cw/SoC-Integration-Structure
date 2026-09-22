class csi2_smoke_test extends csi2_base_test;
  `uvm_component_utils(csi2_smoke_test)

  function new(string name = "csi2_smoke_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual task run_scenario();
    run_initial_baseline();
    check_one();
  endtask
endclass : csi2_smoke_test

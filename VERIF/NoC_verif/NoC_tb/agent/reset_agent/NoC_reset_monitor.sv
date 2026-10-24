class NoC_reset_monitor extends uvm_monitor;
  `uvm_component_utils(NoC_reset_monitor)

  uvm_analysis_port#(NoC_reset_seq_item) rst_mn2sb;
  NoC_reset_config NoC_reset_cfg;

  function new(string name = "NoC_reset_monitor", uvm_component parent = null);
    super.new(name, parent);
    rst_mn2sb = new("rst_mn2sb", this);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(NoC_reset_config)::get(this, "", "NoC_reset_cfg", NoC_reset_cfg))
      `uvm_fatal("CONFIG_ERROR", "NoC_RESET_MONITOR : configuration is not working properly")
  endfunction
endclass

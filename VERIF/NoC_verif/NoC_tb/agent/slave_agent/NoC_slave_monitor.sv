class NoC_slave_monitor extends uvm_monitor;
  `uvm_component_utils(NoC_slave_monitor)

  uvm_analysis_port#(NoC_slave_seq_item) r_mn2sb;
  NoC_slave_config NoC_slave_cfg;

  function new(string name = "NoC_slave_monitor", uvm_component parent = null);
    super.new(name, parent);
    r_mn2sb = new("r_mn2sb", this);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(NoC_slave_config)::get(this, "", "NoC_slave_cfg", NoC_slave_cfg))
      `uvm_fatal("CONFIG_ERROR", "NoC_SLAVE_MONITOR : configuration is not working properly")
  endfunction
endclass

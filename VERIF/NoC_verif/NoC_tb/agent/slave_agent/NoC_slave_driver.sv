class NoC_slave_driver extends uvm_driver#(NoC_slave_seq_item);
  `uvm_component_utils(NoC_slave_driver)

  NoC_slave_config NoC_slave_cfg;

  function new(string name = "NoC_slave_driver", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(NoC_slave_config)::get(this, "", "NoC_slave_cfg", NoC_slave_cfg))
      `uvm_fatal("CONFIG_ERROR", "NoC_SLAVE_DRIVER : configuration is not working properly")
  endfunction
endclass

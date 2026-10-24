class NoC_reset_driver extends uvm_driver#(NoC_reset_seq_item);
  `uvm_component_utils(NoC_reset_driver)

  NoC_reset_config NoC_reset_cfg;

  function new(string name = "NoC_reset_driver", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(NoC_reset_config)::get(this, "", "NoC_reset_cfg", NoC_reset_cfg))
      `uvm_fatal("CONFIG_ERROR", "NoC_RESET_DRIVER : configuration is not working properly")
  endfunction
endclass

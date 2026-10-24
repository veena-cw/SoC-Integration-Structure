class NoC_slave_config extends uvm_object;
  `uvm_object_utils(NoC_slave_config)

  uvm_active_passive_enum is_active;

  function new(string name = "NoC_slave_config");
    super.new(name);
  endfunction
endclass

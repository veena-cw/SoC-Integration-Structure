class NoC_reset_config extends uvm_object;
  `uvm_object_utils(NoC_reset_config)

  uvm_active_passive_enum is_active;

  function new(string name = "NoC_reset_config");
    super.new(name);
    is_active = UVM_ACTIVE;
  endfunction
endclass

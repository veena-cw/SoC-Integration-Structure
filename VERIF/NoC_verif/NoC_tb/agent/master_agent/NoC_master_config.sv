class NoC_master_config extends uvm_object;
    `uvm_object_utils(NoC_master_config)

	function new(string name = "NoC_master_config");
	       super.new(name);
	endfunction 
	uvm_active_passive_enum is_active;
endclass
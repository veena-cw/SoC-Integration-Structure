class env_config extends uvm_object;
    `uvm_object_utils(env_config)
	 NoC_master_config NoC_master_cfg[];
	 NoC_slave_config NoC_slave_cfg[];
	 int no_of_NoC_master_agents = 0;
	 int no_of_NoC_slave_agents = 0;

	 function new(string name = "env_config");
	          super.new(name);
	 endfunction

endclass

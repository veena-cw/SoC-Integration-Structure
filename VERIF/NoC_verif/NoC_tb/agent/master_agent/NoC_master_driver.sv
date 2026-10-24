class NoC_master_driver extends uvm_driver;
 `uvm_component_utils(NoC_master_driver)
 NoC_master_config NoC_master_cfg;
 function new(string name = "NoC_master_driver" , uvm_component parent);
          super.new(name,parent);
 endfunction
 function void build_phase(uvm_phase phase);
	    if(!uvm_config_db#(NoC_master_config)::get(this,"","NoC_master_cfg",NoC_master_cfg))
		   `uvm_fatal("CONFIG_ERROR","WR_DRIVER :configuration is not working properly")
	endfunction 
endclass

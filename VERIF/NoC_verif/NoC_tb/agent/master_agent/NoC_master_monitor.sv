class NoC_master_monitor extends uvm_monitor ;
 `uvm_component_utils(NoC_master_monitor)
  uvm_analysis_port#(seq_item) w_mn2sb;
  NoC_master_config NoC_master_cfg;
  function new(string name = NoC_master_monitor , uvm_component parent);
           super.new(name,parent);
		   w_mn2sb = new("w_mn2sb",this);
  endfunction
  function void build_phase(uvm_phase phase);
	    if(!uvm_config_db#(NoC_master_config)::get(this,"","NoC_master_cfg",NoC_master_cfg))
		   `uvm_fatal("CONFIG_ERROR","WR_MONITOR :configuration is not working properly")
	endfunction 
  
endclass

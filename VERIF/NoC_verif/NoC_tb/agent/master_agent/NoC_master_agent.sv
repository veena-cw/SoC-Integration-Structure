class NoC_master_agent extends uvm_agent;
  `uvm_component_utils(NoC_master_agent)
   NoC_master_driver  NoC_master_drv;
   NoC_master_monitor NoC_master_mon;
   NoC_master_config  NoC_master_cfg;
   NoC_master_sqr     NoC_master_sr;
    function new(string name = "NoC_master_agent",uvm_component parent);
            super.new(name,parent);
    endfunction
    function void build_phase(uvm_phase phase);
        if(!uvm_config_db#(NoC_master_config)::get(this,"","NoC_master_cfg",NoC_master_cfg))
		   `uvm_fatal("CONFIG_ERROR","NoC_master_AGENT :configuration is not working properly")
		else
		    begin
		    NoC_master_mon = NoC_master_monitor::type_id::create("NoC_master_mon",this);
		    if(NoC_master_cfg.is_active == UVM_ACTIVE)
			  begin
			   NoC_master_drv = NoC_master_driver::type_id::create("NoC_master_drv",this);
			   NoC_master_sr  = NoC_master_sqr::type_id::create("NoC_master_sr",this);
			   end
		    end
    endfunction
	
	function void connect_phase(uvm_phase phase);
	   if(NoC_master_drv !== null && NoC_master_sr !== null)
	    NoC_master_drv.seq_item_port.connect(NoC_master_sr.seq_item_export);
    endfunction
	
  endclass
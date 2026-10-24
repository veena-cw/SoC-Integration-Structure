class NoC_master_agt_top extends uvm_env;
   `uvm_component_utils(NoC_master_agt_top)
    NoC_env_config env_cfg;
    NoC_master_agent NoC_master_agt[];
	function new(string name = "NoC_master_agt_top",uvm_component parent);
             super.new(name,parent);
    endfunction

    function void build_phase(uvm_phase phase);
	    if(!uvm_config_db#(NoC_env_config)::get(this,"","env_cfg",env_cfg))
		    `uvm_fatal("CONFIG_ERROR","NoC_master_AGT_TOP :configuration is not working properly")
		else
		   begin
		         NoC_master_agt = new[env_cfg.no_of_NoC_master_agents];
		         foreach(env_cfg.NoC_master_cfg[i])
			    begin
				NoC_master_agt[i] = NoC_master_agent::type_id::create($sformatf("NoC_master_agt[%0d]",i),this);
		            end
			end
    endfunction

   endclass

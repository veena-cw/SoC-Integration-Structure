class csi2_tx_agent_top extends uvm_env;
  `uvm_component_utils(csi2_tx_agent_top)
   csi2_env_config env_cfg;
   csi2_tx_agent tx_ag[];

  function new(string name = "csi2_tx_agent_top",uvm_component parent);
           super.new(name,parent);
  endfunction

  function void build_phase(uvm_phase phase);
           super.build_phase(phase);
	if(!uvm_config_db#(csi2_env_config)::get(this,"","env_cfg",env_cfg))
	  `uvm_fatal("csi2_tx_agent_top","CONFIGURATION FAILED AT csi2_tx_agent_top")
	else
	  begin
	    tx_ag = new[env_cfg.no_of_tx_agents];
	    foreach(tx_ag[i])
		   tx_ag[i] = csi2_tx_agent::type_id::create($sformatf("tx_ag[%0d]",i),this);
	  end
   endfunction

endclass

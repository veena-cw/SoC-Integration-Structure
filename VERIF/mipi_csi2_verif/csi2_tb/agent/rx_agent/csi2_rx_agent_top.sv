class csi2_rx_agent_top extends uvm_env;
  `uvm_component_utils(csi2_rx_agent_top)
   csi2_env_config env_cfg;
   csi2_rx_agent rx_ag[];

  function new(string name = "csi2_rx_agent_top",uvm_component parent);
           super.new(name,parent);
  endfunction

  function void build_phase(uvm_phase phase);
           super.build_phase(phase);
	if(!uvm_config_db#(csi2_env_config)::get(this,"","env_cfg",env_cfg))
	  `uvm_fatal("csi2_rx_agent_top","CONFIGURATION FAILED AT csi2_rx_agent_top")
	else
	  begin
	    rx_ag = new[env_cfg.no_of_rx_agents];
	    foreach(rx_ag[i])
		   rx_ag[i] = csi2_rx_agent::type_id::create($sformatf("rx_ag[%0d]",i),this);
	  end
   endfunction

endclass

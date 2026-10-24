class NoC_slave_agt_top extends uvm_env;
  `uvm_component_utils(NoC_slave_agt_top)

  NoC_env_config env_cfg;
  NoC_slave_agent NoC_slave_agt[];

  function new(string name = "NoC_slave_agt_top", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(NoC_env_config)::get(this, "", "env_cfg", env_cfg))
      `uvm_fatal("CONFIG_ERROR", "NoC_SLAVE_AGT_TOP : configuration is not working properly")
    else begin
      NoC_slave_agt = new[env_cfg.no_of_NoC_slave_agents];
      foreach (env_cfg.NoC_slave_cfg[i]) begin
        NoC_slave_agt[i] = NoC_slave_agent::type_id::create($sformatf("NoC_slave_agt[%0d]", i), this);
      end
    end
  endfunction
endclass

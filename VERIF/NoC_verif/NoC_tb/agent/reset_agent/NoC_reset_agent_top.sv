class NoC_reset_agt_top extends uvm_env;
  `uvm_component_utils(NoC_reset_agt_top)

  NoC_reset_agent  NoC_reset_agt;
  NoC_reset_config NoC_reset_cfg;

  function new(string name = "NoC_reset_agt_top", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    // The current env_config/test do not yet contain reset-agent configuration.
    // Create the single reset-agent configuration locally so the existing
    // environment can instantiate a usable active reset agent.
    NoC_reset_cfg = NoC_reset_config::type_id::create("NoC_reset_cfg");
    NoC_reset_cfg.is_active = UVM_ACTIVE;
    uvm_config_db#(NoC_reset_config)::set(this, "NoC_reset_agt*", "NoC_reset_cfg", NoC_reset_cfg);

    NoC_reset_agt = NoC_reset_agent::type_id::create("NoC_reset_agt", this);
  endfunction
endclass

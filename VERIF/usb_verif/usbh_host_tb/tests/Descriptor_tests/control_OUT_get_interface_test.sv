class control_OUT_get_interface_test extends base_test;

  `uvm_component_utils(control_OUT_get_interface_test)

  function new(string name = "control_OUT_get_interface_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);

    axi4_agent_control_OUT_set_address_seq set_addr_seq_h;
    axi4_agent_control_OUT_set_configuration_seq set_config_seq_h;
    axi4_agent_control_OUT_get_interface_seq get_interface_seq_h; // Declare handle

    phase.raise_objection(this);

    // Create sequences
    set_addr_seq_h = axi4_agent_control_OUT_set_address_seq::type_id::create("set_addr_seq_h");
    set_config_seq_h = axi4_agent_control_OUT_set_configuration_seq::type_id::create("set_config_seq_h");
    get_interface_seq_h = axi4_agent_control_OUT_get_interface_seq::type_id::create("get_interface_seq_h");

    set_addr_seq_h.start(env.axi4_agent.sequencer);       // Assign device address
    #500;

    set_config_seq_h.start(env.axi4_agent.sequencer);     // Configure device
    #500;

    get_interface_seq_h.start(env.axi4_agent.sequencer);  // Read interface alternate setting
    #800;

    phase.drop_objection(this);

  endtask

endclass : control_OUT_get_interface_test

// CLEAR_FEATURE: Clear ENDPOINT_HALT on EP1 OUT of Device_address = 5.
// First SET_ADDRESS
// Set_configuration
// Call device_bfm.halt_endpoint(1); in top_tb.
// then do CLEAR_FEATURE

class control_OUT_clear_feature_test extends base_test; 

  `uvm_component_utils(control_OUT_clear_feature_test)

  function new(string name = "control_OUT_clear_feature_test",
               uvm_component parent = null);
  endfunction

  task run_phase(uvm_phase phase);
    axi4_agent_control_OUT_clear_feature_seq clear_feature_seq_h;
    axi4_agent_control_OUT_set_configuration_seq set_config_seq_h;
    axi4_agent_control_OUT_set_address_seq set_addr_seq_h;

    phase.raise_objection(this);

    clear_feature_seq_h = axi4_agent_control_OUT_clear_feature_seq::type_id::create("clear_feature_seq_h");
    set_addr_seq_h = axi4_agent_control_OUT_set_address_seq::type_id::create("set_addr_seq_h");
    set_config_seq_h = axi4_agent_control_OUT_set_configuration_seq::type_id::create("set_config_seq_h");
    
    set_addr_seq_h.start(env.axi4_agent.sequencer); // Set_address
    #500;
    set_config_seq_h.start(env.axi4_agent.sequencer); // Set_configuration
    #500;
    usbh_top_tb.device_bfm.halt_endpoint(1);
    `uvm_info("USB_TEST", "EP1 halted; starting CLEAR_FEATURE", UVM_MEDIUM) 
    clear_feature_seq_h.start(env.axi4_agent.sequencer); // clear_feature
    
    // Give DUT + Device BFM time to perform USB transaction
    #800;
    
    phase.drop_objection(this);
    //phase.phase_done.set_drain_time(this, 50);
  endtask

endclass : control_OUT_clear_feature_test


class usbh_get_status_interface_test extends usbh_base_test;

  `uvm_component_utils(usbh_get_status_interface_test)

  function new(string name = "usbh_get_status_interface_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual task run_phase(uvm_phase phase);
    

    axi4_agent_control_OUT_set_address_seq set_addr_seq;
    axi4_agent_control_OUT_set_configuration_seq set_cfg_seq;
    axi4_agent_control_GET_STATUS_interface_seq get_status_seq;

    phase.raise_objection(this);

    set_addr_seq = axi4_agent_control_OUT_set_address_seq::type_id::create(
        "set_addr_seq");
    set_cfg_seq = axi4_agent_control_OUT_set_configuration_seq::type_id::create(
        "set_cfg_seq");
    get_status_seq =
        axi4_agent_control_GET_STATUS_interface_seq::type_id::create(
        "get_status_seq");

    // 1. Assign address 5; SET_ADDRESS status stage
    //    completes at the default address 0.
    set_addr_seq.start(env.axi4_agent.sequencer);
    #500;
    // 2. Configure the device with configuration value 1.
    set_cfg_seq.start(env.axi4_agent.sequencer);
    #500;
    // 3. Read interface 0 status at address 5.
    get_status_seq.start(env.axi4_agent.sequencer);
    #500;
    phase.drop_objection(this);
  endtask

endclass


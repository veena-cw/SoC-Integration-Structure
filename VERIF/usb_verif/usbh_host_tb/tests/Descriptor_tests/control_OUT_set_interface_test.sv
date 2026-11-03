class control_OUT_set_interface_test extends base_test;
  // Use base class methods for events.
  usbh_host_axi4_agent_base_seq base_seq_h;
   
  `uvm_component_utils(control_OUT_set_interface_test)

  function new(string name = "control_OUT_set_interface_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    logic [31:0] status;
    localparam logic [7:0] EXPECTED_ALT_SETTING = 8'd0;
    axi4_agent_control_OUT_set_address_seq   set_addr_seq_h;
    axi4_agent_control_OUT_set_configuration_seq set_config_seq_h;
    axi4_agent_control_OUT_set_interface_seq set_interface_seq_h;
    axi4_agent_control_OUT_get_interface_seq get_interface_seq_h;

    phase.raise_objection(this);
    // Create the base sequence object
    base_seq_h = usbh_host_axi4_agent_base_seq::type_id::create("base_seq_h");
    // Create the required USB control-transfer sequences
    set_addr_seq_h      = axi4_agent_control_OUT_set_address_seq::type_id::create("set_addr_seq_h");
    set_config_seq_h    = axi4_agent_control_OUT_set_configuration_seq::type_id::create("set_config_seq_h");
    set_interface_seq_h = axi4_agent_control_OUT_set_interface_seq::type_id::create("set_interface_seq_h");
    get_interface_seq_h = axi4_agent_control_OUT_get_interface_seq::type_id::create("get_interface_seq_h");

    set_addr_seq_h.start(env.axi4_agent.sequencer);       // Assign device address
    //base_seq_h.wait_usb_done(status); // Wait for SETUP transaction completion                        //
    #500;

    set_config_seq_h.start(env.axi4_agent.sequencer);     // Activate configuration 1
    //base_seq_h.wait_usb_done(status); // Wait for SETUP transaction completion      //
    #500;

    set_interface_seq_h.start(env.axi4_agent.sequencer);  // Select interface alternate setting
    //base_seq_h.wait_usb_done(status); // Wait for SETUP transaction completion      //
    #500;       // Allow transaction to complete
    
    get_interface_seq_h.start(env.axi4_agent.sequencer);
    #500;

	// Compare actual setting with requested setting
	if (get_interface_seq_h.interface_data[7:0]
	    !== EXPECTED_ALT_SETTING) begin

	  `uvm_fatal("SET_INTERFACE_CHECK",
	    $sformatf(
	      "SET_INTERFACE verification FAILED: expected alternate setting=0x%02h, actual=0x%02h",
	      EXPECTED_ALT_SETTING,
	      get_interface_seq_h.interface_data[7:0]
	    ))
	end
	else begin
	  `uvm_info("SET_INTERFACE_CHECK",
	    $sformatf(
	      "SET_INTERFACE verification PASSED: interface 0 alternate setting=0x%02h",
	      get_interface_seq_h.interface_data[7:0]
	    ),
	    UVM_LOW)
	end
    
    phase.drop_objection(this);
  endtask

endclass : control_OUT_set_interface_test

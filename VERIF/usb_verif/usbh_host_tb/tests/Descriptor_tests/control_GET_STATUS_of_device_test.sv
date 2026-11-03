/*
For meaningful coverage, prioritize:
1. Device GET_STATUS — verify the returned device status bits against your BFM's modeled self-powered and remote-wakeup state.
2. Endpoint GET_STATUS — verify the halt bit before and after SET_FEATURE and CLEAR_FEATURE, using a valid non-control endpoint that supports halt.
3. Interface GET_STATUS — check the two reserved bytes are zero, if your DUT/BFM supports this request.
*/
// SET_ADDRESS → GET_STATUS(Device) → compare status bits

// =========================================================================
class control_GET_STATUS_of_device_test extends base_test;

  // Use base class methods for events.
  usbh_host_axi4_agent_base_seq base_seq_h;
   
  `uvm_component_utils(control_GET_STATUS_of_device_test)

  function new(string name = "control_GET_STATUS_of_device_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    logic [31:0] status;
    localparam logic [7:0] EXPECTED_ALT_SETTING = 8'd0;
    axi4_agent_control_OUT_set_address_seq   set_addr_seq_h;
    axi4_agent_control_GET_STATUS_device_seq get_status_seq_h;

    phase.raise_objection(this);
    // Create the base sequence object
    base_seq_h = usbh_host_axi4_agent_base_seq::type_id::create("base_seq_h");
    
    set_addr_seq_h      = axi4_agent_control_OUT_set_address_seq::type_id::create("set_addr_seq_h");
    get_status_seq_h = axi4_agent_control_GET_STATUS_device_seq::type_id::create( "get_status_seq_h");

    set_addr_seq_h.start(env.axi4_agent.sequencer);       // Assign device address
    //base_seq_h.wait_usb_done(status); // Wait for SETUP transaction completion                        //
    #500;
    get_status_seq_h.start(env.axi4_agent.sequencer);
    //base_seq_h.wait_usb_done(status); // Wait for SETUP transaction completion      //
    #500;
  phase.drop_objection(this);
  endtask

endclass
// control_get_status_test


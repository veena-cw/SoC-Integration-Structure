// Control OUT: SET_ADDRESS Transfer Test
class control_OUT_set_address_test extends base_test; 

  `uvm_component_utils(control_OUT_set_address_test)

  function new(string name = "control_OUT_set_address_test",
               uvm_component parent = null);
  endfunction

  task run_phase(uvm_phase phase);
    axi4_agent_control_OUT_set_address_seq sequence_h;
    axi4_agent_control_IN_get_configuration_seq seq_h;

    phase.raise_objection(this);

	    sequence_h = axi4_agent_control_OUT_set_address_seq::type_id::create("sequence_h");
	    seq_h = axi4_agent_control_IN_get_configuration_seq :: type_id::create("seq_h");
	    
	    sequence_h.start(env.axi4_agent.sequencer);
	    #700;// Give DUT + Device BFM time to perform USB transaction
	    seq_h.start(env.axi4_agent.sequencer);
	    // Allow outstanding DUT/BFM activity to settle after the test ends.
	    phase.phase_done.set_drain_time(this, 500);
    
    phase.drop_objection(this);
  endtask

endclass : control_OUT_set_address_test


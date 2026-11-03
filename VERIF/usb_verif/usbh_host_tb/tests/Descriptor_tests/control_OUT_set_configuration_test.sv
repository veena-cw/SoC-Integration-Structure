// Control OUT: SETUP Transfer Test
class control_OUT_set_configuration_test extends base_test; 

  `uvm_component_utils(control_OUT_set_configuration_test)

  function new(string name = "control_OUT_set_configuration_test",
               uvm_component parent = null);
  endfunction

  task run_phase(uvm_phase phase);
    axi4_agent_control_OUT_set_configuration_seq sequence_h;

    phase.raise_objection(this);

    sequence_h = axi4_agent_control_OUT_set_configuration_seq::type_id::create("sequence_h");
    sequence_h.start(env.axi4_agent.sequencer);
    // Give DUT + Device BFM time to perform USB transaction
    #1000;
    phase.drop_objection(this);
    //phase.phase_done.set_drain_time(this, 50);
  endtask

endclass : control_OUT_set_configuration_test


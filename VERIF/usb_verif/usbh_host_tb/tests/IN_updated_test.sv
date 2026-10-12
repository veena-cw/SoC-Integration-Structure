// IN Transfer Test
class IN_updated_test extends base_test; 

  `uvm_component_utils(IN_updated_test)

  function new(string name = "IN_updated_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    usbh_host_axi4_agent_cfg_IN_seq_updated sequence_h;

    phase.raise_objection(this);

    sequence_h = usbh_host_axi4_agent_cfg_IN_seq_updated::type_id::create("sequence_h");
    sequence_h.start(env.axi4_agent.sequencer);
    // Give DUT + Device BFM time to perform USB transaction
    #1000;
    phase.drop_objection(this);
    //phase.phase_done.set_drain_time(this, 50);
  endtask

endclass : IN_updated_test




//usbh_host_axi4_agent_cfg_IN_seq_updated

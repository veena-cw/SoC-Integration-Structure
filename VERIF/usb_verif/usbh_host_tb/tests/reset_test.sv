class reset_test_1 extends base_test;

  `uvm_component_utils(reset_test_1)

  function new(string name = "reset_test_1", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    usbh_host_axi4_agent_cfg_reset_seq sequence_h;

    phase.raise_objection(this);

    sequence_h = usbh_host_axi4_agent_cfg_reset_seq::type_id::create("sequence_h");
    sequence_h.start(env.axi4_agent.sequencer);

    phase.drop_objection(this);
  endtask

endclass : reset_test_1

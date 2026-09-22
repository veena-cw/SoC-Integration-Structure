class pid_data0_test extends base_test;

  `uvm_component_utils(pid_data0_test)

  function new(string name = "pid_data0_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    usbh_host_axi4_agent_cfg_in_seq sequence_h;

    phase.raise_objection(this);

    sequence_h = usbh_host_axi4_agent_cfg_in_seq::type_id::create("sequence_h");
    sequence_h.start(env.axi4_agent.sequencer);

    phase.drop_objection(this);
  endtask

endclass : pid_data0_test




class axi4_out_of_range_addr_test extends base_test;

  `uvm_component_utils(axi4_out_of_range_addr_test)

  function new(string name = "axi4_out_of_range_addr_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);

    axi4_agent_out_of_range_addr_seq seq;

    phase.raise_objection(this);

    seq = axi4_agent_out_of_range_addr_seq::type_id::create(
            "out_of_range_seq");

    seq.start(env.axi4_agent.sequencer);
    #1000;

    phase.drop_objection(this);

  endtask

endclass


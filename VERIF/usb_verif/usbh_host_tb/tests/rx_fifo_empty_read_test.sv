class rx_fifo_empty_read_test extends base_test;
  `uvm_component_utils(rx_fifo_empty_read_test)
  function new(string name="rx_fifo_empty_read_test", uvm_component parent=null); super.new(name,parent); endfunction
  task run_phase(uvm_phase phase);
    rx_fifo_empty_read_seq s;
    phase.raise_objection(this);
    s = rx_fifo_empty_read_seq::type_id::create("s");
    s.start(env.axi4_agent.sequencer);
    #1000;
    phase.drop_objection(this);
  endtask
endclass

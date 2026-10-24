class NoC_slave_sqr extends uvm_sequencer#(NoC_slave_seq_item);
  `uvm_component_utils(NoC_slave_sqr)

  function new(string name = "NoC_slave_sqr", uvm_component parent = null);
    super.new(name, parent);
  endfunction
endclass

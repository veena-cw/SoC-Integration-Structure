class NoC_reset_sqr extends uvm_sequencer#(NoC_reset_seq_item);
  `uvm_component_utils(NoC_reset_sqr)

  function new(string name = "NoC_reset_sqr", uvm_component parent = null);
    super.new(name, parent);
  endfunction
endclass

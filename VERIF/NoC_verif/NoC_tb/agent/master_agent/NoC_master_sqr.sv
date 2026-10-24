class NoC_master_sqr extends uvm_sequencer#(NoC_master_seq_item);
 `uvm_component_utils(NoC_master_sqr)
  function new(string name = "NoC_master_sqr",uvm_component parent);
           super.new(name,parent);
  endfunction
endclass

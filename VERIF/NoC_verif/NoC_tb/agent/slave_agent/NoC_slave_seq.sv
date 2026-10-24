class NoC_slave_seq extends uvm_sequence#(NoC_slave_seq_item);
  `uvm_object_utils(NoC_slave_seq)

  function new(string name = "NoC_slave_seq");
    super.new(name);
  endfunction
endclass

class NoC_reset_seq extends uvm_sequence#(NoC_reset_seq_item);
  `uvm_object_utils(NoC_reset_seq)

  function new(string name = "NoC_reset_seq");
    super.new(name);
  endfunction
endclass

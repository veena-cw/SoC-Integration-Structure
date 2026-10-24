class NoC_master_seq extends uvm_sequence#(NoC_master_seq_item);
  `uvm_object_utils(NoC_master_seq)
  function new(string name = "NoC_master_seq");
           super.new(name);
  endfunction
endclass

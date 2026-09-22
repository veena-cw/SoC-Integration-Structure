class csi2_reset_sequencer extends uvm_sequencer#(csi2_reset_sequence_item);
  `uvm_component_utils(csi2_reset_sequencer)
  function new(string name = "csi2_reset_sequencer",uvm_component parent);
           super.new(name,parent);
  endfunction
endclass
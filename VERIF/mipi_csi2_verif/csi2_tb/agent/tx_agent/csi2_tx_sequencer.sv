class csi2_tx_sequencer extends uvm_sequencer#(csi2_packet_item);
  `uvm_component_utils(csi2_tx_sequencer)
  function new(string name = "csi2_tx_sequencer",uvm_component parent);
           super.new(name,parent);
  endfunction
endclass
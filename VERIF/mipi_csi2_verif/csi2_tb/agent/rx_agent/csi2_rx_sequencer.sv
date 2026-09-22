class csi2_rx_sequencer extends uvm_sequencer#(csi2_rx_lane_item);
  `uvm_component_utils(csi2_rx_sequencer)
  function new(string name="csi2_rx_sequencer",uvm_component parent); super.new(name,parent); endfunction
endclass

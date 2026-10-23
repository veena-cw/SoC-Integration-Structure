class csi2_ppi_sequencer extends uvm_sequencer #(csi2_rx_packet_item);
  `uvm_component_utils(csi2_ppi_sequencer)
  function new(string name = "csi2_ppi_sequencer", uvm_component parent);
    super.new(name, parent);
  endfunction
endclass : csi2_ppi_sequencer

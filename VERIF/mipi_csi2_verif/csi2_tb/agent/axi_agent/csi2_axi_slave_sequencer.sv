class csi2_axi_slave_sequencer extends uvm_sequencer #(csi2_axi_slave_item);
  `uvm_component_utils(csi2_axi_slave_sequencer)

  function new(string name = "csi2_axi_slave_sequencer",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction
endclass : csi2_axi_slave_sequencer

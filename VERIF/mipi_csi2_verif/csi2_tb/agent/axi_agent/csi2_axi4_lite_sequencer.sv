class csi2_axi4_lite_sequencer extends uvm_sequencer #(csi2_axi4_lite_item);
  `uvm_component_utils(csi2_axi4_lite_sequencer)

  function new(string name = "csi2_axi4_lite_sequencer",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction
endclass : csi2_axi4_lite_sequencer

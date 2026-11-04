class eth_axi_sequencer extends uvm_sequencer #(eth_axi_item);

`uvm_component_utils(eth_axi_sequencer)
function new(string n,uvm_component p);
super.new(n,p);
endfunction
endclass


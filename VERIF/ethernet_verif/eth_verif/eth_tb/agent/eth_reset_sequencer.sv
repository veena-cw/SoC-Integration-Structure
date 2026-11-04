class eth_reset_sequencer extends uvm_sequencer #(eth_reset_item);

`uvm_component_utils(eth_reset_sequencer)
function new(string n,uvm_component p);
super.new(n,p);
endfunction
endclass


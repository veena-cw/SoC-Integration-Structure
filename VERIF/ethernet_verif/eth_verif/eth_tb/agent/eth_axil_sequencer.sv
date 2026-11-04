class eth_axil_sequencer extends uvm_sequencer #(eth_axil_item);

`uvm_component_utils(eth_axil_sequencer)
function new(string n,uvm_component p);
super.new(n,p);
endfunction
endclass


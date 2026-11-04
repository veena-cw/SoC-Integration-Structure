class eth_reset_monitor extends uvm_monitor;

`uvm_component_utils(eth_reset_monitor)
function new(string n,uvm_component p);
super.new(n,p);
endfunction
endclass


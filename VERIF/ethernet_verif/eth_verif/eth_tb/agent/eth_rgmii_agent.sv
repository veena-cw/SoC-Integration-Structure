class eth_rgmii_agent extends uvm_agent;

`uvm_component_utils(eth_rgmii_agent) eth_rgmii_monitor mon;

function new(string n,uvm_component p);
super.new(n,p);
endfunction
function void build_phase(uvm_phase phase);
mon=eth_rgmii_monitor::type_id::create("mon",this);
endfunction
endclass


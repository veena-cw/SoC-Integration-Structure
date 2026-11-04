class eth_reset_agent extends uvm_agent;

`uvm_component_utils(eth_reset_agent) eth_reset_sequencer sqr;
eth_reset_driver drv;
eth_reset_monitor mon;
function new(string n,uvm_component p);
super.new(n,p);
endfunction
function void build_phase(uvm_phase phase);
sqr=eth_reset_sequencer::type_id::create("sqr",this);
drv=eth_reset_driver::type_id::create("drv",this);
mon=eth_reset_monitor::type_id::create("mon",this);
endfunction
function void connect_phase(uvm_phase phase);
drv.seq_item_port.connect(sqr.seq_item_export);
endfunction
endclass


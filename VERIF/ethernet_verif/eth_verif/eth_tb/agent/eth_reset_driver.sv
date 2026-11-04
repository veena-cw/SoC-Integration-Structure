class eth_reset_driver extends uvm_driver #(eth_reset_item);

`uvm_component_utils(eth_reset_driver) virtual eth_reset_if vif;

function new(string n,uvm_component p);
super.new(n,p);
endfunction
function void build_phase(uvm_phase phase);
if(!uvm_config_db#(virtual eth_reset_if)::get(this,"","vif",vif))
`uvm_fatal("NOVIF","reset vif")
endfunction

task run_phase(uvm_phase phase);
 forever begin seq_item_port.get_next_item(req);
vif.rst_n<=0;
repeat(req.cycles) @(posedge vif.clk);
vif.rst_n<=1;
seq_item_port.item_done();
end
endtask

endclass


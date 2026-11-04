class eth_ral_env extends uvm_env;

`uvm_component_utils(eth_ral_env) eth_dma_reg_block ral;
eth_axil_reg_adapter adapter;
function new(string n,uvm_component p);
super.new(n,p);
endfunction
function void build_phase(uvm_phase phase);
ral=eth_dma_reg_block::type_id::create("ral");
ral.build();
adapter=eth_axil_reg_adapter::type_id::create("adapter");
endfunction
endclass


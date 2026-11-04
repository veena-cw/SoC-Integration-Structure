class eth_irq_monitor extends uvm_monitor;

`uvm_component_utils(eth_irq_monitor) virtual eth_irq_if vif;

function new(string n,uvm_component p);
super.new(n,p);
endfunction
function void build_phase(uvm_phase phase);
void'(uvm_config_db#(virtual eth_irq_if)::get(this,"","vif",vif));
endfunction
task run_phase(uvm_phase phase);
forever begin @(posedge vif.clk);
if(vif.irq_tx_compl||vif.irq_rx_compl||vif.irq_dma_err)
`uvm_info("IRQ",$sformatf("TX=%0b RX=%0b ERR=%0b",vif.irq_tx_compl,vif.irq_rx_compl,vif.irq_dma_err),UVM_LOW) end
endtask

endclass


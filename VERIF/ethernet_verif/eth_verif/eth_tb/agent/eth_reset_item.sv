class eth_reset_item extends uvm_sequence_item;

`uvm_object_utils(eth_reset_item) rand int unsigned cycles;
 constraint c {cycles inside {[2:20]};
}
function new(string name="eth_reset_item");
 super.new(name);

endfunction

endclass


class eth_frame_item extends uvm_sequence_item;

`uvm_object_utils(eth_frame_item) rand byte unsigned data[];

function new(string name="eth_frame_item");
 super.new(name);

endfunction

function string hex_string();
 string s="";                                                   //Declares local verification data used by this component.
 foreach(data[i]) s={s,$sformatf("%02x ",data[i])};             //Processes each element of the transaction data array.
 return s;

endfunction

endclass


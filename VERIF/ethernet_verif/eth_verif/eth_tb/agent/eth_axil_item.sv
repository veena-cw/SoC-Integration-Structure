class eth_axil_item extends uvm_sequence_item;

`uvm_object_utils(eth_axil_item) rand bit write;
 rand bit [31:0] addr,data;                                 //Declares a randomizable transaction field.
 rand bit [3:0] strb;                                       //Declares a randomizable transaction field.
 bit [1:0] resp;                                            //Declares local verification data used by this component.

function new(string name="eth_axil_item");
 super.new(name);
 strb='1;

endfunction

endclass


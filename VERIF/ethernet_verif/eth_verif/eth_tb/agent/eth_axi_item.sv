class eth_axi_item extends uvm_sequence_item;

`uvm_object_utils(eth_axi_item) typedef enum {AXI_RD,AXI_WR} kind_e;
 rand kind_e kind;                                                      //Declares a randomizable transaction field.
 rand bit [31:0] addr;                                                  //Declares a randomizable transaction field.
 rand bit [7:0] len;                                                    //Declares a randomizable transaction field.
 rand bit [2:0] size;                                                   //Declares a randomizable transaction field.
 bit [63:0] data_q[$];                                                  //Declares local verification data used by this component.
 bit [7:0] strb_q[$];                                                   //Declares local verification data used by this component.

function new(string name="eth_axi_item");
 super.new(name);

endfunction

endclass


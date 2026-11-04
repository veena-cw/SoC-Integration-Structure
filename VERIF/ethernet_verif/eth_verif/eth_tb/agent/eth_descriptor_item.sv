class eth_descriptor_item extends uvm_sequence_item;

`uvm_object_utils(eth_descriptor_item) rand bit [63:0] buf_addr;
 rand bit own,ioc,eor;                                                                  //Declares a randomizable transaction field.
 rand bit [15:0] buf_size;                                                              //Declares a randomizable transaction field.
 bit valid,err_sum,crc_err,over_under;                                                  //Declares local verification data used by this component.
 bit [15:0] frame_len;                                                                  //Declares local verification data used by this component.

function new(string name="eth_descriptor_item");
 super.new(name);

endfunction

function void print_desc(string p="DESC");

`uvm_info(p,$sformatf("BUF_ADDR=%016h SIZE=%0d OWN=%0b IOC=%0b EOR=%0b VALID=%0b ERR=%0b FRAME_LEN=%0d",buf_addr,buf_size,own,ioc,eor,valid,err_sum,frame_len),UVM_LOW)
endfunction

endclass


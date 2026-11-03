class csi2_axi_slave_item extends uvm_sequence_item;
  `uvm_object_utils(csi2_axi_slave_item)

  int unsigned awready_delay;
  int unsigned wready_delay;
  int unsigned bvalid_delay;
  bit [1:0]    bresp = 2'b00;

  function new(string name = "csi2_axi_slave_item");
    super.new(name);
  endfunction
endclass : csi2_axi_slave_item

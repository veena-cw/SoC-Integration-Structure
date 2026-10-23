class csi2_axi_write_item extends uvm_sequence_item;
  `uvm_object_utils(csi2_axi_write_item)

  logic [31:0] address;
  logic [31:0] awid;
  logic [7:0]  awlen;
  logic [2:0]  awsize;
  logic [1:0]  awburst;
  bit          aw_seen;
  logic        wlast;
  byte unsigned accepted_bytes[$];

  function new(string name = "csi2_axi_write_item");
    super.new(name);
  endfunction
endclass : csi2_axi_write_item

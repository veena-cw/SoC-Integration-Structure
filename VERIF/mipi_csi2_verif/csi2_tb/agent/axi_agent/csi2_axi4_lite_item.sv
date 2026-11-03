typedef enum bit {CSI2_AXI4L_READ, CSI2_AXI4L_WRITE} csi2_axi4_lite_op_e;

class csi2_axi4_lite_item extends uvm_sequence_item;
  `uvm_object_utils(csi2_axi4_lite_item)

  csi2_axi4_lite_op_e operation;
  bit [31:0] address;
  bit [31:0] write_data;
  bit [3:0]  write_strobe = 4'hf;
  bit [31:0] read_data;
  bit [1:0]  response;
  int unsigned address_delay;
  int unsigned data_delay;

  function new(string name = "csi2_axi4_lite_item");
    super.new(name);
  endfunction

  function string convert2string();
    return $sformatf("op=%s addr=0x%08h wdata=0x%08h strb=0x%0h rdata=0x%08h resp=0x%0h",
                     operation == CSI2_AXI4L_WRITE ? "WRITE" : "READ",
                     address, write_data, write_strobe, read_data, response);
  endfunction
endclass : csi2_axi4_lite_item

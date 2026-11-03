class csi2_axi4_lite_sequence extends uvm_sequence #(csi2_axi4_lite_item);
  `uvm_object_utils(csi2_axi4_lite_sequence)

  csi2_axi4_lite_op_e operation;
  bit [31:0] address;
  bit [31:0] write_data;
  bit [3:0]  write_strobe = 4'hf;
  bit [31:0] read_data;
  bit [1:0]  response;
  int unsigned address_delay;
  int unsigned data_delay;

  function new(string name = "csi2_axi4_lite_sequence");
    super.new(name);
  endfunction

  task body();
    csi2_axi4_lite_item req;
    req = csi2_axi4_lite_item::type_id::create("req");
    start_item(req);
    req.operation     = operation;
    req.address       = address;
    req.write_data    = write_data;
    req.write_strobe  = write_strobe;
    req.address_delay = address_delay;
    req.data_delay    = data_delay;
    finish_item(req);
    get_response(req);
    read_data = req.read_data;
    response  = req.response;
  endtask
endclass : csi2_axi4_lite_sequence

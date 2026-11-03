class csi2_axi_slave_sequence extends uvm_sequence #(csi2_axi_slave_item);
  `uvm_object_utils(csi2_axi_slave_sequence)

  int unsigned awready_delay;
  int unsigned wready_delay;
  int unsigned bvalid_delay;
  bit [1:0]    bresp = 2'b00;

  function new(string name = "csi2_axi_slave_sequence");
    super.new(name);
  endfunction

  task body();
    forever begin
      csi2_axi_slave_item req;
      req = csi2_axi_slave_item::type_id::create("req");
      start_item(req);
      req.awready_delay = awready_delay;
      req.wready_delay  = wready_delay;
      req.bvalid_delay  = bvalid_delay;
      req.bresp         = bresp;
      finish_item(req);
    end
  endtask
endclass : csi2_axi_slave_sequence

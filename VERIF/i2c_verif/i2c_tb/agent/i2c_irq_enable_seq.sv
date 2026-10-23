class i2c_irq_enable_seq extends uvm_sequence #(i2c_irq_item);

  `uvm_object_utils(i2c_irq_enable_seq)

  function new(string name = "i2c_irq_enable_seq");
    super.new(name);
  endfunction

  virtual task body();

    i2c_irq_item req;

    req = i2c_irq_item::type_id::create("req");

    start_item(req);

    req.irq_enable = 1'b1;

    finish_item(req);

  endtask

endclass

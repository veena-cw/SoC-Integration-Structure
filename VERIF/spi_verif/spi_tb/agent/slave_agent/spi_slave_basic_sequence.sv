class spi_slave_basic_sequence extends uvm_sequence #(spi_slave_item);

    `uvm_object_utils(spi_slave_basic_sequence)

    bit cpol;
    bit cpha;
    bit lsb_first;
    bit [1:0] cs_sel;
    bit       continuous_cs;
    int unsigned num_words;
    bit [7:0] tx_data[];

    function new(string name = "spi_slave_basic_sequence");
      super.new(name);
    endfunction

    task body();
      spi_slave_item req;

      req = spi_slave_item::type_id::create("req");
      start_item(req);

      req.cpol          = cpol;
      req.cpha          = cpha;
      req.lsb_first     = lsb_first;
      req.cs_sel        = cs_sel;
      req.continuous_cs = continuous_cs;
      req.num_words     = num_words;
      req.tx_data       = new[num_words];

      foreach (tx_data[i])
        req.tx_data[i] = tx_data[i];

      finish_item(req);
    endtask

  endclass

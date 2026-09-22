//This sequence converts virtual sequence configuration into a spi_master_item

class spi_master_basic_sequence extends uvm_sequence #(spi_master_item);

    `uvm_object_utils(spi_master_basic_sequence)

    bit cpol;
    bit cpha;
    bit lsb_first;
    bit [15:0] clk_div;
    bit [1:0]  cs_sel;
    bit [7:0]  cs_setup;
    bit [7:0]  cs_hold;
    bit        continuous_cs;
    int unsigned num_words;
    bit [7:0] tx_data[];

    function new(string name = "spi_master_basic_sequence");
      super.new(name);
    endfunction

    task body();
      spi_master_item req;

      req = spi_master_item::type_id::create("req");
      start_item(req);

      req.cpol          = cpol;
      req.cpha          = cpha;
      req.lsb_first     = lsb_first;
      req.clk_div       = clk_div;
      req.cs_sel        = cs_sel;
      req.cs_setup      = cs_setup;
      req.cs_hold       = cs_hold;
      req.continuous_cs = continuous_cs;
      req.num_words     = num_words;
      req.tx_data       = new[num_words];

      foreach (tx_data[i])
        req.tx_data[i] = tx_data[i];

      finish_item(req);
    endtask

  endclass

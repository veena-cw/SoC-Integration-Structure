//This represents data actually read from the Master RX FIFO(3C)
//what actually came out of Master RX FIFO
class spi_master_rx_word extends uvm_sequence_item;

    bit [7:0] data;

    `uvm_object_utils_begin(spi_master_rx_word)
      `uvm_field_int(data, UVM_ALL_ON)
    `uvm_object_utils_end

    function new(string name = "spi_master_rx_word");
      super.new(name);
    endfunction

  endclass

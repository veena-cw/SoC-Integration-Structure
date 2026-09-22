class spi_slave_item extends uvm_sequence_item;

    rand bit cpol;
    rand bit cpha;
    rand bit lsb_first;
    rand bit [1:0] cs_sel;
    rand bit       continuous_cs;
    rand int unsigned num_words;
    rand bit [7:0] tx_data[];

    constraint c_num_words {
      num_words inside {[1:16]};
      tx_data.size() == num_words;
    }

    constraint c_cs {
      cs_sel inside {[0:3]};
    }

   	 `uvm_object_utils_begin(spi_slave_item)
      `uvm_field_int(cpol,          UVM_ALL_ON)
      `uvm_field_int(cpha,          UVM_ALL_ON)
      `uvm_field_int(lsb_first,     UVM_ALL_ON)
      `uvm_field_int(cs_sel,        UVM_ALL_ON)
      `uvm_field_int(continuous_cs, UVM_ALL_ON)
      `uvm_field_int(num_words,     UVM_ALL_ON)
      `uvm_field_array_int(tx_data, UVM_ALL_ON)
    `uvm_object_utils_end

    function new(string name = "spi_slave_item");
      super.new(name);
    endfunction

  endclass

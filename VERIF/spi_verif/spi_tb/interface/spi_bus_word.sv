//This is not a stimulus item
//It represents something the slave monitor observed on the real SPI bus
//This becomes the actual result used by the scorboard.
//what happened on SPI pins
import uvm_pkg::*;
`include "uvm_macros.svh"
class spi_bus_word extends uvm_sequence_item;

    bit [7:0] mosi_word;
    bit [7:0] miso_word;
    bit [1:0] cs_index;
    bit       cpol;
    bit       cpha;
    bit       lsb_first;

    `uvm_object_utils_begin(spi_bus_word)
      `uvm_field_int(mosi_word, UVM_ALL_ON)
      `uvm_field_int(miso_word, UVM_ALL_ON)
      `uvm_field_int(cs_index,  UVM_ALL_ON)
      `uvm_field_int(cpol,      UVM_ALL_ON)
      `uvm_field_int(cpha,      UVM_ALL_ON)
      `uvm_field_int(lsb_first, UVM_ALL_ON)
    `uvm_object_utils_end

    function new(string name = "spi_bus_word");
      super.new(name);
    endfunction

  endclass

//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : spi_slave_seq_item
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: SPI slave-side transaction: decoded byte and the slave RX FIFO probe word
//=================================================================================

class spi_slave_seq_item extends uvm_sequence_item;

  spi_slave_item_kind_e kind;
  bit [DATA_WIDTH-1:0]  rx_data;       // SLV_BYTE: MOSI word decoded with the slave's sampling rule
                                       // SLV_RX_PROBE: word read from the slave RX FIFO output
  bit [DATA_WIDTH-1:0]  tx_data;       // SLV_BYTE: MISO word the slave presented
  int unsigned          edge_count;
  int unsigned          bit_count;
  bit                   cpol;
  bit                   cpha;
  bit                   lsb_first;
  time                  t_start;
  time                  t_end;

  `uvm_object_utils(spi_slave_seq_item)

  function new(string name = "spi_slave_seq_item");
    super.new(name);
  endfunction

  function string convert2string();
    return $sformatf("%s rx=0x%02h tx=0x%02h cpol=%0b cpha=%0b lsb=%0b",
                     kind.name(), rx_data, tx_data, cpol, cpha, lsb_first);
  endfunction

endclass

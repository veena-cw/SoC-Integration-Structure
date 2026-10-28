//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : spi_master_seq_item
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: SPI master-side byte transaction collected by spi_master_monitor (one byte, plus CS setup/hold timing and the programmed configuration)
//=================================================================================

class spi_master_seq_item extends uvm_sequence_item;

  // decoded data (sampled at the master's sampling edges)
  bit [DATA_WIDTH-1:0] mosi_data;      // word the master transmitted
  bit [DATA_WIDTH-1:0] miso_data;      // word the master received
  // observed bus behaviour
  bit [1:0]            cs_sel;         // index of the asserted chip select
  int unsigned         edge_count;     // SCK edges observed in the byte (expected 2*DATA_WIDTH)
  int unsigned         bit_count;      // bits sampled in the byte (expected DATA_WIDTH)
  int unsigned         byte_idx;       // byte index within one CS-low burst (0 = first byte)
  int unsigned         hp_min;         // shortest / longest SCK half period in PCLK cycles
  int unsigned         hp_max;
  int unsigned         setup_clks;     // CS fall -> first SCK edge (byte_idx==0 only)
  int unsigned         hold_clks;      // last SCK edge -> CS rise (last_in_burst only)
  bit                  last_in_burst;
  bit                  sck_idle;       // SCK level just before the first edge of the byte (must equal CPOL)
  bit                  sck_first;      // SCK level right after the first edge (must equal !CPOL)
  // programmed configuration (probed from the DUT registers)
  bit                  cpol;
  bit                  cpha;
  bit                  lsb_first;
  bit                  inter_byte;
  bit [1:0]            cs_sel_cfg;
  bit [15:0]           clk_div;
  bit [7:0]            cs_setup;
  bit [7:0]            cs_hold;
  time                 t_start;
  time                 t_end;

  `uvm_object_utils(spi_master_seq_item)

  function new(string name = "spi_master_seq_item");
    super.new(name);
  endfunction

  function string convert2string();
    return $sformatf("cs=%0d byte=%0d mosi=0x%02h miso=0x%02h cpol=%0b cpha=%0b lsb=%0b div=%0d setup_clks=%0d hold_clks=%0d last=%0b",
                     cs_sel, byte_idx, mosi_data, miso_data, cpol, cpha, lsb_first, clk_div, setup_clks, hold_clks, last_in_burst);
  endfunction

endclass


//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : spi_slave_if
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: SPI slave-side observation interface (slave_cb clocking block) on the apb_spi_top SPI pins
//=================================================================================

`timescale 1ns/1ps
interface spi_slave_if (input logic pclk, input logic presetn);

  // SPI pins as seen by the internal slave (chip select 0 only)
  logic        sck;
  logic        mosi;
  logic        miso;
  logic        cs_n;
  // Read-only sideband
  logic        cpol;
  logic        cpha;
  logic        lsb_first;
  logic        xfer_done;   // slave xfer_done pulse (receive-complete)
  logic [7:0]  rx_data;     // slave RX FIFO read data

  clocking slave_cb @(posedge pclk);
    default input #1step;
    input presetn, sck, mosi, miso, cs_n;
    input cpol, cpha, lsb_first, xfer_done, rx_data;
  endclocking

endinterface

`timescale 1ns/1ps

interface spi_bus_if();
  logic       sck;
  logic       mosi;
  logic       miso;
  logic [3:0] cs_n;
endinterface

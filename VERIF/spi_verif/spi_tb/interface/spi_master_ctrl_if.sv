`timescale 1ns/1ps
//This interface connects the UVM master agent to the control side of spi_master
interface spi_master_ctrl_if(input logic clk_i);

  logic rst_ni;

  //configuration signals
  logic        cpol_i;//SCK idle level
  logic        cpha_i;//sampling/shifting phase
  logic        lsb_first_i;//MSB_first or LSB-first
  logic [15:0] clk_div_i;//SPI SCK frequency
  logic [1:0]  cs_sel_i; //select CS0/1/2/3
  logic [7:0]  cs_setup_cycles_i;//Time between CS assertion and the first SCK edge
  logic [7:0]  cs_hold_cycles_i;//Time between the last SCK edge and CS deassertion
  logic        cs_inter_byte_i;//keep CS active across multiple words

  //TX FIFO signals--> These are used to load data into master TX FIFO
  logic       tx_we_i;
  logic [7:0] tx_wdata_i;
  logic       tx_full_o;
  logic       tx_empty_o;
  logic [4:0] tx_count_o;

  //RX FIFO signals--> These are used to retrieve received data
  logic       rx_re_i;
  logic [7:0] rx_rdata_o;
  logic       rx_full_o;
  logic       rx_empty_o;
  logic [4:0] rx_count_o;

  //Transfer control
  logic start_i;
  logic busy_o;
  logic xfer_done_o;
  
  

 //To avoild race conditions between DUT and testbench
  clocking drv_cb @(posedge clk_i);
    default input #1step output #0;

    output rst_ni;
    output cpol_i;
    output cpha_i;
    output lsb_first_i;
    output clk_div_i;
    output cs_sel_i;
    output cs_setup_cycles_i;
    output cs_hold_cycles_i;
    output cs_inter_byte_i;

    output tx_we_i;
    output tx_wdata_i;
    output rx_re_i;
    output start_i;

    input  tx_full_o;
    input  tx_empty_o;
    input  tx_count_o;
    input  rx_rdata_o;
    input  rx_full_o;
    input  rx_empty_o;
    input  rx_count_o;
    input  busy_o;
    input  xfer_done_o;
  endclocking

  clocking mon_cb @(posedge clk_i);
    default input #1step;

    input rst_ni;
    input cpol_i;
    input cpha_i;
    input lsb_first_i;
    input clk_div_i;
    input cs_sel_i;
    input cs_setup_cycles_i;
    input cs_hold_cycles_i;
    input cs_inter_byte_i;

    input tx_we_i;
    input tx_wdata_i;
    input tx_full_o;
    input tx_empty_o;
    input tx_count_o;

    input rx_re_i;
    input rx_rdata_o;
    input rx_full_o;
    input rx_empty_o;
    input rx_count_o;

    input start_i;
    input busy_o;
    input xfer_done_o;
  endclocking

endinterface

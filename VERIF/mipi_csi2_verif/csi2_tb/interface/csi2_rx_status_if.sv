`timescale 1ns/1ps

interface csi2_rx_status_if(
  input logic bfm_clk,
  input logic aclk
);
  logic       rst_n;
  logic [5:0] dtype;
  logic       lane_err;
  logic       llp_err_vld;
  logic [2:0] llp_err;
  logic       rx_pixel_dvalid;

  // Debug observation points requested for the AXI zero-strobe investigation.
  logic axi_wr_en;
  logic axi_full;
  logic data_length_vld;
  logic axi_fifo_empty;
  logic axi_fifo_rd_vld;

  clocking rx_cb @(posedge bfm_clk);
    default input #1step;
    input rst_n, dtype, lane_err, llp_err_vld, llp_err, rx_pixel_dvalid;
  endclocking

  clocking axi_cb @(posedge aclk);
    default input #1step;
    input rst_n, axi_wr_en, axi_full, data_length_vld;
    input axi_fifo_empty, axi_fifo_rd_vld;
  endclocking
endinterface : csi2_rx_status_if

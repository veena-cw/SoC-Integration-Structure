`timescale 1ns/1ps

interface csi2_rx_status_if(
  input logic bfm_clk,
  input logic aclk,
  input logic llp_clk
);
  logic       rst_n;
  logic [5:0] dtype;
  logic       lane_err;
  logic       llp_err_vld;
  logic [2:0] llp_err;
  logic       rx_pixel_dvalid;

  logic       short_pkt_vld;
  logic [4:0] llp_dec_ctr;
  logic       rx_lm_byte_vld_r;

  logic [1:0] decoded_vc;
  logic [2:0] decoded_vcx;

  logic [7:0] short_data_lsb;
  logic [7:0] short_data_msb;

  logic frame_start_vld;
  logic frame_end_vld;
  logic line_start_vld;
  logic line_end_vld;
  logic generic_short_vld;
  logic long_pkt_vld;

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


clocking llp_cb @(posedge llp_clk);
  default input #1step;
  input long_pkt_vld;
  input rst_n;
  input dtype;
  input short_pkt_vld;
  input llp_dec_ctr;
  input rx_lm_byte_vld_r;
  input decoded_vc;
  input decoded_vcx;
  input short_data_lsb;
  input short_data_msb;
  input frame_start_vld;
  input frame_end_vld;
  input line_start_vld;
  input line_end_vld;
  input generic_short_vld;
endclocking
endinterface : csi2_rx_status_if

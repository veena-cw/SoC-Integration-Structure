
//`timescale 1ns / 1ps

module fifo18Kb #(
    parameter DATA_WIDTH = 32,
    parameter DEPTH      = 512
)(
    input  logic                  aclk,
    input  logic                  sd_clk,
    input  logic                  rst,

    input  logic [31:0]           axi_data_in,
    input  logic [31:0]           sd_data_in,

    output logic [31:0]           sd_data_out,
    output logic [31:0]           axi_data_out,

    input  logic                  sd_rd_en,
    input  logic                  axi_rd_en,

    input  logic                  axi_wr_en,
    input  logic                  sd_wr_en,

    output logic                  sd_full_o
);

    logic tx_full;
    logic tx_empty;
    logic rx_empty;

    //==========================================================
    // TX FIFO
    // AXI/aclk domain -> SD/sd_clk domain
    //==========================================================

    asynchronous_fifo #(
        .DEPTH     (DEPTH),
        .DATA_WIDTH(DATA_WIDTH)
    ) tx_fifo (
        // Write side : AXI/aclk domain
        .wclk    (aclk),
        .wrst_n  (~rst),
        .w_en    (axi_wr_en),
        .data_in (axi_data_in),

        // Read side : SD/sd_clk domain
        .rclk     (sd_clk),
        .rrst_n   (~rst),
        .r_en     (sd_rd_en),
        .data_out (sd_data_out),

        .full  (tx_full),
        .empty (tx_empty)
    );


    //==========================================================
    // RX FIFO
    // SD/sd_clk domain -> AXI/aclk domain
    //==========================================================

    asynchronous_fifo #(
        .DEPTH     (DEPTH),
        .DATA_WIDTH(DATA_WIDTH)
    ) rx_fifo (
        // Write side : SD/sd_clk domain
        .wclk    (sd_clk),
        .wrst_n  (~rst),
        .w_en    (sd_wr_en),
        .data_in (sd_data_in),

        // Read side : AXI/aclk domain
        .rclk     (aclk),
        .rrst_n   (~rst),
        .r_en     (axi_rd_en),
        .data_out (axi_data_out),

        .full  (sd_full_o),
        .empty (rx_empty)
    );

endmodule

`timescale 1ns/1ps

module fifo_mem #(
    parameter integer DEPTH      = 8,
    parameter integer DATA_WIDTH = 128,
    parameter integer PTR_WIDTH  = 3
)(
    input                    wclk,
    input                    w_en,
    input                    rclk,
    input                    r_en,
    input   [PTR_WIDTH:0]    b_wptr,
    input   [PTR_WIDTH:0]    b_rptr,
    input   [DATA_WIDTH-1:0] data_in,
    input                    full,
    input                    empty,
    output reg  [DATA_WIDTH-1:0] data_out
);

    reg [DATA_WIDTH-1:0] fifo [0:DEPTH-1];

    always @(posedge wclk) begin
        if (w_en && !full)
            fifo[b_wptr[PTR_WIDTH-1:0]] <= data_in;
    end

    always @(posedge rclk) begin
        if (r_en && !empty)
            data_out <= fifo[b_rptr[PTR_WIDTH-1:0]];
    end

endmodule


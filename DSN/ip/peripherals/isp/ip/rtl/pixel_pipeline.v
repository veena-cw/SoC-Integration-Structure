`timescale 1ns/1ps
module pixel_pipeline #(
    parameter MAX_WIDTH = 2048
)(
    input  wire        clk,
    input  wire        reset_n,
    input  wire        clear_i,
    input  wire [7:0]  raw_pixel,
    input  wire        pixel_valid,
    input  wire [15:0] image_width_i,
    input  wire [1:0]  sensor_pattern,
    input  wire [1:0]  filter_type,
    input  wire        filter_enable,
    output wire [23:0] processed_pixel,
    output wire        pixel_out_valid
);
    wire [23:0] rgb_pixel;
    wire        rgb_valid;

    raw2rgb #(.MAX_WIDTH(MAX_WIDTH)) demosaic (
        .clk(clk), .reset_n(reset_n), .clear_i(clear_i),
        .raw_pixel(raw_pixel), .pixel_valid(pixel_valid),
        .image_width_i(image_width_i), .sensor_pattern(sensor_pattern),
        .rgb_pixel(rgb_pixel), .rgb_valid(rgb_valid)
    );

    img_filter #(.MAX_WIDTH(MAX_WIDTH)) filter (
        .clk(clk), .reset_n(reset_n), .clear_i(clear_i),
        .pixel_in(rgb_pixel), .pixel_valid(rgb_valid),
        .row_width_i(image_width_i - 16'd1),      // demosaic output row length
        .filter_type(filter_type), .filter_enable(filter_enable),
        .pixel_out(processed_pixel), .pixel_out_valid(pixel_out_valid)
    );
endmodule

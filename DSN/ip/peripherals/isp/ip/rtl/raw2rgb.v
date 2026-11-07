`timescale 1ns/1ps
// Bayer -> RGB888, 2x2 demosaic using one line buffer.
// Output pixel (x,y) valid for x>=1, y>=1  => (W-1) x (H-1) pixels.
// sensor_pattern: 00 RGGB, 01 GRBG, 10 GBRG, 11 BGGR
module raw2rgb #(
    parameter MAX_WIDTH = 2048
)(
    input  wire        clk,
    input  wire        reset_n,
    input  wire        clear_i,
    input  wire [7:0]  raw_pixel,
    input  wire        pixel_valid,
    input  wire [15:0] image_width_i,
    input  wire [1:0]  sensor_pattern,
    output reg  [23:0] rgb_pixel,
    output reg         rgb_valid
);
    localparam CW = $clog2(MAX_WIDTH);

    reg [7:0]  line_buf [0:MAX_WIDTH-1];   // previous row
    reg [15:0] x;
    reg        y_seen, y_par;
    reg [7:0]  left_px, upleft_px;
    reg [7:0]  t_r, t_g, t_b;

    wire [7:0] up_px = line_buf[x[CW-1:0]];
    wire [7:0] a = upleft_px, b = up_px, c = left_px, d = raw_pixel;

    wire px = x[0], py = y_par;
    wire rx = sensor_pattern[0], ry = sensor_pattern[1];   // parity of the R site
    wire d_is_r   = (px == rx) && (py == ry);
    wire d_is_b   = (px != rx) && (py != ry);
    wire d_g_rrow = (py == ry);                            // G pixel on a red row

    wire last_col = (x == image_width_i - 16'd1);

    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            x <= 0; y_seen <= 0; y_par <= 0;
            left_px <= 0; upleft_px <= 0;
            rgb_pixel <= 0; rgb_valid <= 0;
        end else if (clear_i) begin
            x <= 0; y_seen <= 0; y_par <= 0;
            rgb_valid <= 0;
        end else begin
            rgb_valid <= 1'b0;
            if (pixel_valid) begin
                line_buf[x[CW-1:0]] <= raw_pixel;
                left_px   <= raw_pixel;
                upleft_px <= up_px;

                if (x != 0 && y_seen) begin
                    if (d_is_r) begin
                        t_r = d; t_b = a; t_g = ({1'b0,b} + {1'b0,c}) >> 1;
                    end else if (d_is_b) begin
                        t_b = d; t_r = a; t_g = ({1'b0,b} + {1'b0,c}) >> 1;
                    end else if (d_g_rrow) begin   // G on red row: R left, B above
                        t_r = c; t_b = b; t_g = ({1'b0,d} + {1'b0,a}) >> 1;
                    end else begin                 // G on blue row: B left, R above
                        t_b = c; t_r = b; t_g = ({1'b0,d} + {1'b0,a}) >> 1;
                    end
                    rgb_pixel <= {t_r, t_g, t_b};
                    rgb_valid <= 1'b1;
                end

                if (last_col) begin
                    x <= 0; y_seen <= 1'b1; y_par <= ~y_par;
                end else
                    x <= x + 1'b1;
            end
        end
    end
endmodule

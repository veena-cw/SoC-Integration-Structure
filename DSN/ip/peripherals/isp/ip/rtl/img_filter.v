`timescale 1ns/1ps
// 3x3 convolution on RGB888 with real line buffers.
// Output valid for x>=2, y>=2 of the incoming stream => (W-2) x (H-2) pixels.
// filter_type: 00 identity, 01 gaussian (/16), 10 sharpen, 11 edge-enhance
// filter_enable=0 forces identity (same latency / frame geometry).
module img_filter #(
    parameter MAX_WIDTH = 2048
)(
    input  wire        clk,
    input  wire        reset_n,
    input  wire        clear_i,
    input  wire [23:0] pixel_in,
    input  wire        pixel_valid,
    input  wire [15:0] row_width_i,        // pixels per incoming row
    input  wire [1:0]  filter_type,
    input  wire        filter_enable,
    output reg  [23:0] pixel_out,
    output reg         pixel_out_valid
);
    localparam CW = $clog2(MAX_WIDTH);

    reg [23:0] lb1 [0:MAX_WIDTH-1];   // row y-1
    reg [23:0] lb2 [0:MAX_WIDTH-1];   // row y-2
    reg [15:0] x;
    reg [1:0]  y_cnt;                 // saturates at 2
    reg [23:0] pt0, pt1, pm0, pm1, pc0, pc1;   // previous two columns per row

    wire [23:0] mid = lb1[x[CW-1:0]];
    wire [23:0] top = lb2[x[CW-1:0]];

    wire [1:0] sel   = filter_enable ? filter_type : 2'b00;
    wire [2:0] shamt = (sel == 2'b01) ? 3'd4 : 3'd0;
    wire       last_col = (x == row_width_i - 16'd1);

    function signed [4:0] kval(input [1:0] s, input integer n);
        begin
            case (s)
                2'b01:   kval = (n==4) ? 5'sd4 : (n==1||n==3||n==5||n==7) ? 5'sd2 : 5'sd1;
                2'b10:   kval = (n==4) ? 5'sd5 : (n==1||n==3||n==5||n==7) ? -5'sd1 : 5'sd0;
                2'b11:   kval = (n==4) ? 5'sd8 : -5'sd1;
                default: kval = (n==4) ? 5'sd1 : 5'sd0;
            endcase
        end
    endfunction

    function [7:0] clip(input signed [19:0] v);
        begin
            if (v < 0)        clip = 8'd0;
            else if (v > 255) clip = 8'd255;
            else              clip = v[7:0];
        end
    endfunction

    reg [23:0] win [0:8];
    reg signed [19:0] acc_r, acc_g, acc_b;
    reg signed [4:0]  kk;
    integer n;

    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            x <= 0; y_cnt <= 0;
            pt0 <= 0; pt1 <= 0; pm0 <= 0; pm1 <= 0; pc0 <= 0; pc1 <= 0;
            pixel_out <= 0; pixel_out_valid <= 0;
        end else if (clear_i) begin
            x <= 0; y_cnt <= 0;
            pixel_out_valid <= 0;
        end else begin
            pixel_out_valid <= 1'b0;
            if (pixel_valid) begin
                lb1[x[CW-1:0]] <= pixel_in;
                lb2[x[CW-1:0]] <= mid;

                pt0 <= pt1; pt1 <= top;
                pm0 <= pm1; pm1 <= mid;
                pc0 <= pc1; pc1 <= pixel_in;

                if (x >= 2 && y_cnt == 2) begin
                    win[0]=pt0; win[1]=pt1; win[2]=top;
                    win[3]=pm0; win[4]=pm1; win[5]=mid;
                    win[6]=pc0; win[7]=pc1; win[8]=pixel_in;
                    acc_r = 0; acc_g = 0; acc_b = 0;
                    for (n = 0; n < 9; n = n + 1) begin
                        kk    = kval(sel, n);
                        acc_r = acc_r + kk * $signed({1'b0, win[n][23:16]});
                        acc_g = acc_g + kk * $signed({1'b0, win[n][15:8]});
                        acc_b = acc_b + kk * $signed({1'b0, win[n][7:0]});
                    end
                    acc_r = acc_r >>> shamt;
                    acc_g = acc_g >>> shamt;
                    acc_b = acc_b >>> shamt;
                    pixel_out       <= {clip(acc_r), clip(acc_g), clip(acc_b)};
                    pixel_out_valid <= 1'b1;
                end

                if (last_col) begin
                    x <= 0;
                    if (y_cnt != 2) y_cnt <= y_cnt + 1'b1;
                end else
                    x <= x + 1'b1;
            end
        end
    end
endmodule

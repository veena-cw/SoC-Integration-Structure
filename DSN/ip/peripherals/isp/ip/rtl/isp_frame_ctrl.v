`timescale 1ns/1ps
// Frame controller: busy/done status, pixel counting, SOF/LAST generation,
// abort / soft-reset handling.
//
// Geometry: demosaic (2x2) removes 1 row/col, 3x3 filter removes 2 more,
// so the RGB output frame is (W-3) x (H-3).  Minimum frame is 4x4.
module isp_frame_ctrl (
    input  wire        clk,
    input  wire        reset_n,

    // commands from AXI-Lite register block (1-cycle pulses)
    input  wire        isp_start_i,
    input  wire        isp_abort_i,
    input  wire        isp_soft_reset_i,
    input  wire [15:0] image_width_i,
    input  wire [15:0] image_height_i,
    input  wire [7:0]  format_i,            // only 8'h00 (RAW8 -> RGB888) is implemented

    // datapath events
    input  wire        raw_pixel_valid_i,   // from AXI4 slave serializer
    input  wire        pipe_pixel_valid_i,  // pipeline RGB output valid
    input  wire        frame_done_i,        // TLAST accepted on AXI-Stream

    // status / control
    output reg         isp_busy_o,
    output reg         isp_done_o,          // sticky until next start/abort
    output wire        raw_active_o,        // raw pixel is part of the frame
    output reg         pipe_clear_o,        // clears pipeline/out FIFO/stream reg
    output reg         fifo_flush_o,        // clears input FIFO (abort/reset)
    output wire        out_sof_o,
    output wire        out_last_o,
    output reg         config_error_o       // pulse: bad start request
);
    wire [31:0] total_raw = image_width_i * image_height_i;
    wire [31:0] total_out = (image_width_i - 16'd3) * (image_height_i - 16'd3);
    wire        cfg_ok    = (image_width_i >= 16'd4) && (image_height_i >= 16'd4) && (format_i == 8'h00);

    reg [31:0] raw_cnt, out_cnt;

    assign raw_active_o = isp_busy_o && (raw_cnt < total_raw);
    assign out_sof_o    = (out_cnt == 32'd0);
    assign out_last_o   = (out_cnt == total_out - 32'd1);

    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            isp_busy_o <= 0; isp_done_o <= 0;
            pipe_clear_o <= 0; fifo_flush_o <= 0; config_error_o <= 0;
            raw_cnt <= 0; out_cnt <= 0;
        end else begin
            pipe_clear_o   <= 1'b0;
            fifo_flush_o   <= 1'b0;
            config_error_o <= 1'b0;

            if (isp_abort_i || isp_soft_reset_i) begin
                isp_busy_o   <= 1'b0;
                isp_done_o   <= 1'b0;
                raw_cnt      <= 0;
                out_cnt      <= 0;
                pipe_clear_o <= 1'b1;
                fifo_flush_o <= 1'b1;
            end else begin
                if (isp_start_i) begin
                    if (!isp_busy_o && cfg_ok) begin
                        isp_busy_o   <= 1'b1;
                        isp_done_o   <= 1'b0;
                        raw_cnt      <= 0;
                        out_cnt      <= 0;
                        pipe_clear_o <= 1'b1;
                    end else
                        config_error_o <= 1'b1;
                end

                if (isp_busy_o) begin
                    if (raw_pixel_valid_i && raw_active_o) raw_cnt <= raw_cnt + 1'b1;
                    if (pipe_pixel_valid_i)                out_cnt <= out_cnt + 1'b1;
                    if (frame_done_i) begin
                        isp_busy_o <= 1'b0;
                        isp_done_o <= 1'b1;
                    end
                end
            end
        end
    end
endmodule

`timescale 1ns/1ps
`default_nettype none

// Width and ordering adapter between a 32-bit host beat and the two 16-bit UB host-write channels.
//
// UB host write ordering (from unified_buffer.sv): when both channels are valid in the same cycle,
// channel 1 lands at the LOWER address and channel 0 at the next address. A single valid word must
// use channel 0. Memory image is little-endian Q8.8 int16: word 0 in beat[15:0], word 1 in beat[31:16].
module tpu_data_formatter (
    // host beat -> UB write channels
    input  logic [31:0] h2d_beat,
    input  logic [1:0]  h2d_nwords,       // 1 or 2 valid words in this beat
    output logic [15:0] ub_wr_data_0,
    output logic [15:0] ub_wr_data_1,
    output logic        ub_wr_valid_0,
    output logic        ub_wr_valid_1,

    // UB read-back words -> host beat
    input  logic [15:0] d2h_lo,           // ub_memory[addr]
    input  logic [15:0] d2h_hi,           // ub_memory[addr+1]
    input  logic [1:0]  d2h_nwords,
    output logic [31:0] d2h_beat,
    output logic [3:0]  d2h_strb
);
    always_comb begin
        ub_wr_data_0  = 16'h0000;
        ub_wr_data_1  = 16'h0000;
        ub_wr_valid_0 = 1'b0;
        ub_wr_valid_1 = 1'b0;
        if (h2d_nwords == 2'd2) begin
            ub_wr_data_1  = h2d_beat[15:0];    // lower address word
            ub_wr_data_0  = h2d_beat[31:16];   // higher address word
            ub_wr_valid_0 = 1'b1;
            ub_wr_valid_1 = 1'b1;
        end else if (h2d_nwords == 2'd1) begin
            ub_wr_data_0  = h2d_beat[15:0];
            ub_wr_valid_0 = 1'b1;
        end
    end

    always_comb begin
        d2h_beat = {16'h0000, d2h_lo};
        d2h_strb = 4'b0000;
        if (d2h_nwords == 2'd2) begin
            d2h_beat = {d2h_hi, d2h_lo};
            d2h_strb = 4'b1111;
        end else if (d2h_nwords == 2'd1) begin
            d2h_strb = 4'b0011;
        end
    end
endmodule
`default_nettype wire

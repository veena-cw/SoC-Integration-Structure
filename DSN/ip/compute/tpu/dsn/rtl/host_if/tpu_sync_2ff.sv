`timescale 1ns/1ps
`default_nettype none

// Two flop synchronizer for single bit levels (or gray coded values). Do not use for multi bit
// binary buses; those cross through asynchronous_fifo.
module tpu_sync_2ff #(
    parameter int W = 1
)(
    input  logic         clk,        // destination clock
    input  logic         rst_n,      // destination domain reset, active low, async assert
    input  logic [W-1:0] d,
    output logic [W-1:0] q
);
    (* ASYNC_REG = "TRUE" *) logic [W-1:0] s1;
    (* ASYNC_REG = "TRUE" *) logic [W-1:0] s2;
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            s1 <= '0;
            s2 <= '0;
        end else begin
            s1 <= d;
            s2 <= s1;
        end
    end
    assign q = s2;
endmodule
`default_nettype wire

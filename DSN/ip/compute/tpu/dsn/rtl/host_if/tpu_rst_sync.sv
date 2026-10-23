`timescale 1ns/1ps
`default_nettype none

// Reset synchronizer: asynchronous assert, synchronous deassert, two flops. Active low.
module tpu_rst_sync (
    input  logic clk,
    input  logic arst_n,
    output logic rst_n_sync
);
    (* ASYNC_REG = "TRUE" *) logic s1;
    (* ASYNC_REG = "TRUE" *) logic s2;
    always_ff @(posedge clk or negedge arst_n) begin
        if (!arst_n) begin
            s1 <= 1'b0;
            s2 <= 1'b0;
        end else begin
            s1 <= 1'b1;
            s2 <= s1;
        end
    end
    assign rst_n_sync = s2;
endmodule
`default_nettype wire

`timescale 1ns/1ps

module synchronizer #(
    parameter integer WIDTH = 4
)(
    input               clk,
    input               rst_n,
    input   [WIDTH-1:0] d_in,
    output reg  [WIDTH-1:0] d_out
);

    (* ASYNC_REG = "TRUE" *) reg [WIDTH-1:0] q1;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            q1    <= '0;
            d_out <= '0;
        end else begin
            q1    <= d_in;
            d_out <= q1;
        end
    end

endmodule


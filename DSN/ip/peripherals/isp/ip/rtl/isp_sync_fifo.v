`timescale 1ns/1ps
// First-word-fall-through synchronous FIFO (DEPTH must be a power of 2)
module isp_sync_fifo #(
    parameter WIDTH  = 26,
    parameter DEPTH  = 16,
    parameter ALMOST = 8
)(
    input  wire             clk,
    input  wire             reset_n,
    input  wire             clear,
    input  wire             wr_en,
    input  wire [WIDTH-1:0] wr_data,
    input  wire             rd_en,
    output wire [WIDTH-1:0] rd_data,
    output wire             empty,
    output wire             full,
    output wire             almost_full,
    output reg              overflow,    // 1-cycle pulse: write while full
    output reg              underflow    // 1-cycle pulse: read while empty
);
    localparam AW = $clog2(DEPTH);

    reg [WIDTH-1:0] mem [0:DEPTH-1];
    reg [AW-1:0]    wp, rp;
    reg [AW:0]      count;

    wire do_wr = wr_en && !full;
    wire do_rd = rd_en && !empty;

    assign empty       = (count == 0);
    assign full        = (count == DEPTH);
    assign almost_full = (count >= ALMOST);
    assign rd_data     = mem[rp];

    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            wp <= 0; rp <= 0; count <= 0;
            overflow <= 1'b0; underflow <= 1'b0;
        end else if (clear) begin
            wp <= 0; rp <= 0; count <= 0;
            overflow <= 1'b0; underflow <= 1'b0;
        end else begin
            overflow  <= wr_en && full;
            underflow <= rd_en && empty;
            if (do_wr) begin mem[wp] <= wr_data; wp <= wp + 1'b1; end
            if (do_rd) rp <= rp + 1'b1;
            if (do_wr && !do_rd)      count <= count + 1'b1;
            else if (!do_wr && do_rd) count <= count - 1'b1;
        end
    end
endmodule

`timescale 1ns/1ps

module wptr_handler #(
    parameter integer PTR_WIDTH = 3
)(
    input  wire               wclk,
    input  wire               wrst_n,
    input  wire               w_en,
    input  wire [PTR_WIDTH:0] g_rptr_sync,
    output reg  [PTR_WIDTH:0] b_wptr,
    output reg  [PTR_WIDTH:0] g_wptr,
    output reg                full
);

    wire [PTR_WIDTH:0] b_wptr_next;
    wire [PTR_WIDTH:0] g_wptr_next;
    wire               full_next;

    assign b_wptr_next = b_wptr + (w_en && !full);
    assign g_wptr_next = (b_wptr_next >> 1) ^ b_wptr_next;

    // Full = next write pointer equals the synced read pointer with its two MSBs
    // inverted. At DEPTH=2 (PTR_WIDTH=1) those two bits are the whole pointer, so
    // there is no [PTR_WIDTH-2:0] remainder to concatenate.
    generate
        if (PTR_WIDTH == 1) begin : gen_depth2_full
            assign full_next = (g_wptr_next == ~g_rptr_sync);
        end else begin : gen_normal_full
            assign full_next =
                (g_wptr_next ==
                 {~g_rptr_sync[PTR_WIDTH:PTR_WIDTH-1],
                   g_rptr_sync[PTR_WIDTH-2:0]});
        end
    endgenerate

    always @(posedge wclk or negedge wrst_n) begin
        if (!wrst_n) begin
            b_wptr <= '0;
            g_wptr <= '0;
            full   <= 1'b0;
        end else begin
            b_wptr <= b_wptr_next;
            g_wptr <= g_wptr_next;
            full   <= full_next;
        end
    end

endmodule


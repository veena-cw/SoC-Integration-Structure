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

    assign full_next =
        (g_wptr_next ==
         {~g_rptr_sync[PTR_WIDTH:PTR_WIDTH-1],
           g_rptr_sync[PTR_WIDTH-2:0]});

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


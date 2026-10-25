
module wptr_handler #(parameter PTR_WIDTH = 9) (
    input  wire                  wclk,
    input  wire                  wrst_n,
    input  wire                  w_en,
    input  wire [PTR_WIDTH:0]    g_rptr_sync,
    output reg  [PTR_WIDTH:0]    b_wptr,
    output reg  [PTR_WIDTH:0]    g_wptr,
    output reg                   full
);

    wire [PTR_WIDTH:0] b_wptr_next;
    wire [PTR_WIDTH:0] g_wptr_next;
    wire               wfull;

    // Advance the write pointer only when a write is accepted.
    assign b_wptr_next = b_wptr + (w_en && !full);

    // Binary-to-Gray conversion.
    assign g_wptr_next = (b_wptr_next >> 1) ^ b_wptr_next;

    generate
        if (PTR_WIDTH == 0) begin : gen_depth1_full

            // Depth 1: one-bit pointers.
            assign wfull = (g_wptr_next != g_rptr_sync);

        end else begin : gen_normal_full

            // Standard asynchronous FIFO full detection.
            assign wfull =
                (g_wptr_next ==
                 {~g_rptr_sync[PTR_WIDTH:PTR_WIDTH-1],
                   g_rptr_sync[PTR_WIDTH-2:0]});

        end
    endgenerate

    // Register the pointers and full flag.
    always @(posedge wclk or negedge wrst_n) begin
        if (!wrst_n) begin
            b_wptr <= '0;
            g_wptr <= '0;
            full   <= 1'b0;
        end else begin
            b_wptr <= b_wptr_next;
            g_wptr <= g_wptr_next;
            full   <= wfull;
        end
    end

endmodule


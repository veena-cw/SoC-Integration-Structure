module rptr_handler #(
    parameter PTR_WIDTH = 2
) (
    input  wire                  rclk,
    input  wire                  rrst_n,
    input  wire                  r_en,
    input  wire [PTR_WIDTH:0]    g_wptr_sync,
 
    output reg  [PTR_WIDTH:0]    b_rptr,
    output reg  [PTR_WIDTH:0]    g_rptr,
    output reg                   empty
);
 
    wire [PTR_WIDTH:0] b_rptr_next;
    wire [PTR_WIDTH:0] g_rptr_next;
    wire               rempty;
 
    // Advance the read pointer only when a read is accepted.
    assign b_rptr_next =
        b_rptr + (r_en && !empty);
 
    // Binary-to-Gray conversion.
    assign g_rptr_next =
        (b_rptr_next >> 1) ^ b_rptr_next;
 
    // Predict whether the FIFO will be empty after this clock.
    assign rempty =
        (g_wptr_sync == g_rptr_next);
 
    always @(posedge rclk or negedge rrst_n) begin
        if (!rrst_n) begin
            b_rptr <= {(PTR_WIDTH+1){1'b0}};
            g_rptr <= {(PTR_WIDTH+1){1'b0}};
            empty  <= 1'b1;
        end
        else begin
            b_rptr <= b_rptr_next;
            g_rptr <= g_rptr_next;
            empty  <= rempty;
        end
    end
 
endmodule

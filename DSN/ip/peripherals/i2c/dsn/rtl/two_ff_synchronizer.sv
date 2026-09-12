module two_ff_synchronizer (
    input  wire clk,          // Destination clock domain
    input  wire rst_n,        // Active-low asynchronous reset
    input  wire async_in,     // Asynchronous input signal
    output reg  sync_out      // Synchronized output signal
);

    // First stage flip-flop
    reg sync_ff1;

    // Sequential logic for synchronization
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            sync_ff1  <= 1'b0;
            sync_out  <= 1'b0;
        end else begin
            sync_ff1  <= async_in; // Capture async signal
            sync_out  <= sync_ff1; // Second stage
        end
    end

endmodule


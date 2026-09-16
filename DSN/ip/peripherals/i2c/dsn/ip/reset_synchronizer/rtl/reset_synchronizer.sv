// Synchronizes the asynchronous system-level reset to the IP-level synchronous reset

module reset_synchronizer (
    input   clk,                  // Destination clock
    input   async_reset_n,        // Asynchronous active-low reset
    output wire sync_reset_n     // Synchronized active-low reset
);

    // Two flip-flops used to synchronize reset deassertion
    logic [1:0] reset_sync_ff;

    // Reset is asserted asynchronously and deasserted synchronously
    always_ff @(posedge clk or negedge async_reset_n) begin
        if (!async_reset_n)
            // Immediately assert reset
            reset_sync_ff <= 2'b00;
        else
            // Shift logic '1' through the two flip-flops
            reset_sync_ff <= {reset_sync_ff[0], 1'b1};
    end

    // Second flip-flop provides the synchronized reset output
    assign sync_reset_n = reset_sync_ff[1];

endmodule
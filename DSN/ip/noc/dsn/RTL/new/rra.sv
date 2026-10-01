module round_robin_arbiter_5to1 (
    input  logic       clk,
    input  logic       rst_n,

    input  logic [4:0] req,
    output logic [4:0] grant
);

    logic [2:0] pointer;
    logic [2:0] granted_index;

    logic [4:0] next_grant;
    logic       found;
    logic       wait_cycle;

    integer i;
    integer index;

    // Combinational arbitration
    always_comb begin

        next_grant    = 5'b0;
        granted_index = pointer;
        found          = 1'b0;

        // Do not generate grant during the mandatory
        // one-cycle gap
        if (!wait_cycle) begin

            for (i = 0; i < 5; i = i + 1) begin

                index = pointer + i;

                if (index >= 5)
                    index = index - 5;

                if (req[index] && !found) begin
                    next_grant[index] = 1'b1;
                    granted_index     = index[2:0];
                    found              = 1'b1;
                end

            end
        end
    end

    // Sequential logic
    always_ff @(posedge clk or negedge rst_n) begin

        if (!rst_n) begin
            pointer    <= 3'd0;
            grant      <= 5'b0;
            wait_cycle <= 1'b0;
        end
        else begin

            // Registered one-cycle grant
            grant <= next_grant;

            if (found) begin

                // After every grant, force one idle cycle
                wait_cycle <= 1'b1;

                // Move round-robin pointer
                if (granted_index == 3'd4)
                    pointer <= 3'd0;
                else
                    pointer <= granted_index + 3'd1;

            end
            else begin

                // End the one-cycle gap
                wait_cycle <= 1'b0;

            end
        end
    end

endmodule
module round_robin_arbiter_2to1 (
    input  logic       clk,
    input  logic       rst_n,

    input  logic [1:0] req,
    output logic [1:0] grant
);

    logic       pointer;         // 1 bit: only 2 requesters
    logic       granted_index;

    integer i;
    integer index;
    logic   found;

    always_comb begin

        grant         = 2'b0;
        granted_index = pointer;
        found         = 1'b0;

        for (i = 0; i < 2; i = i + 1) begin

            index = pointer + i;

            if (index >= 2)
                index = index - 2;

            if (req[index] && !found) begin
                grant[index]  = 1'b1;
                granted_index = index[0];
                found         = 1'b1;
            end
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin

        if (!rst_n) begin
            pointer <= 1'b0;
        end
        else if (found) begin

            if (granted_index == 1'b1)
                pointer <= 1'b0;
            else
                pointer <= granted_index + 1'b1;

        end
    end

endmodule

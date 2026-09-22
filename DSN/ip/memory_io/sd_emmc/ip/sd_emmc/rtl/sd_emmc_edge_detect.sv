module edge_detect (
    input  logic rst,
    input  logic clk,
    input  logic sig,
    output logic rise,
    output logic fall
);

    logic [1:0] sig_reg;

    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            sig_reg <= 2'b00;
        else
            sig_reg <= {sig_reg[0], sig};
    end

    assign rise = (sig_reg[0] == 1'b1 && sig_reg[1] == 1'b0) ? 1'b1 : 1'b0;
    assign fall = (sig_reg[0] == 1'b0 && sig_reg[1] == 1'b1) ? 1'b1 : 1'b0;

endmodule
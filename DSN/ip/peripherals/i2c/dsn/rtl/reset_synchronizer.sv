
module reset_synchronizer #(
    parameter int STAGES = 2
)(
    input  logic clk,
    input  logic rst_n_in,    // ACTIVE LOW, asynchronous
    output logic rst_n_out    // ACTIVE LOW, de-asserts synchronously
);

    logic [STAGES-1:0] sync_ff;

    always_ff @(posedge clk or negedge rst_n_in) begin
        if (!rst_n_in)
            sync_ff <= '0;
        else
            sync_ff <= {sync_ff[STAGES-2:0], 1'b1};
    end

    assign rst_n_out = sync_ff[STAGES-1];

endmodule

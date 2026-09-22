module monostable_domain_cross (
    input  logic rst,
    input  logic clk_a,
    input  logic in,
    input  logic clk_b,
    output logic out
);

    // Changes level when 'in' is seen in clk_a domain
    logic toggle_clk_a;

    always_ff @(posedge clk_a or posedge rst) begin
        if (rst)
            toggle_clk_a <= 1'b0;
        else
            toggle_clk_a <= toggle_clk_a ^ in;
    end

    // Synchronize toggle signal into clk_b domain
    logic [2:0] sync_clk_b;

    always_ff @(posedge clk_b or posedge rst) begin
        if (rst)
            sync_clk_b <= 3'b000;
        else
            sync_clk_b <= {sync_clk_b[1:0], toggle_clk_a};
    end

    // Recreate a single-cycle pulse in clk_b domain
    assign out = sync_clk_b[2] ^ sync_clk_b[1];

endmodule
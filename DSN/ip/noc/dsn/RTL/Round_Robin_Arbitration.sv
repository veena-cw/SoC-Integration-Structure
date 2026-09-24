// Parameterized Router Arbitration + Forwarding
module noc_router #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 64,
    parameter DEST_WIDTH = 5,   // enough bits for all destinations
    parameter NUM_MASTERS = 4   // configurable number of ingress ports
)(
    input  logic                  clk,
    input  logic                  rst_n,

    // Ingress requests (flattened arrays)
    input  logic [NUM_MASTERS-1:0]              req_valid,
    input  logic [NUM_MASTERS*ADDR_WIDTH-1:0]   req_addr,
    input  logic [NUM_MASTERS*DATA_WIDTH-1:0]   req_data,

    // Destination select
    output logic [DEST_WIDTH-1:0] dest_sel,

    // Example egress ports (expand as needed)
    output logic                  lpddr_valid,
	output logic [ADDR_WIDTH-1:0] lpddr_addr,
    output logic [DATA_WIDTH-1:0] lpddr_data,

    output logic                  sram_valid,
    output logic [ADDR_WIDTH-1:0] sram_addr,
    output logic [DATA_WIDTH-1:0] sram_data,

    output logic                  apb_valid,
    output logic [ADDR_WIDTH-1:0] apb_addr,
    output logic [DATA_WIDTH-1:0] apb_data
);

    // -------------------------------
    // Round-robin arbitration
    // -------------------------------
    logic [$clog2(NUM_MASTERS)-1:0] grant_idx;
    logic [$clog2(NUM_MASTERS)-1:0] rr_ptr;
	  always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rr_ptr <= '0;
        end else if (|req_valid) begin
            // find next valid master starting from rr_ptr
            automatic int i;
            grant_idx = rr_ptr;
            for (i = 0; i < NUM_MASTERS; i++) begin
                if (req_valid[(rr_ptr+i)%NUM_MASTERS]) begin
                    grant_idx <= (rr_ptr+i)%NUM_MASTERS;
                    rr_ptr    <= (rr_ptr+i+1)%NUM_MASTERS; // advance pointer
                    break;
                end
            end
        end
    end
	// -------------------------------
    // Forward selected request
    // -------------------------------
    logic [ADDR_WIDTH-1:0] sel_addr;
    logic [DATA_WIDTH-1:0] sel_data;

    always_comb begin
        sel_addr = req_addr[grant_idx*ADDR_WIDTH +: ADDR_WIDTH];
        sel_data = req_data[grant_idx*DATA_WIDTH +: DATA_WIDTH];
    end

    // Routing table instance
    noc_routing_table #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .DEST_WIDTH(DEST_WIDTH)
    ) u_routing (
        .axi_addr(sel_addr),
        .dest_sel(dest_sel)
    );
	 // Drive egress ports based on dest_sel
    assign lpddr_valid = (dest_sel == 5'd0);
    assign lpddr_addr  = sel_addr;
    assign lpddr_data  = sel_data;

    assign sram_valid  = (dest_sel == 5'd1);
    assign sram_addr   = sel_addr;
    assign sram_data   = sel_data;

    assign apb_valid   = (dest_sel == 5'd6);
    assign apb_addr    = sel_addr;
    assign apb_data    = sel_data;

endmodule
`default_nettype none
`timescale 1ns/1ns

// SYSTOLIC ARRAY
// > NxN grid of Processing Elements for matrix multiplication
// > Weight-stationary dataflow: weights pre-loaded, activations stream through
// > Computes C = A @ B where:
//   - A (activations) enters from west edge, flows east
//   - B (weights) are pre-loaded into PEs
//   - C (results) accumulate and exit from south edge
//
// Matrix multiply timing for NxN array:
// - Weight load: N cycles (one row per cycle, broadcast to columns)
// - Compute: 2N-1 cycles (diagonal wavefront through array)
// - Total: 3N-1 cycles for one tile
//
// Data flow visualization (4x4 example):
//
//   West inputs (activations)    North inputs (partial sums = 0)
//        |                              |
//        v                              v
//   A[0] -> PE[0,0] -> PE[0,1] -> PE[0,2] -> PE[0,3] -> (east, unused)
//   A[1] -> PE[1,0] -> PE[1,1] -> PE[1,2] -> PE[1,3] ->
//   A[2] -> PE[2,0] -> PE[2,1] -> PE[2,2] -> PE[2,3] ->
//   A[3] -> PE[3,0] -> PE[3,1] -> PE[3,2] -> PE[3,3] ->
//              |          |          |          |
//              v          v          v          v
//           C[*,0]     C[*,1]     C[*,2]     C[*,3]   (south outputs)

module systolic_array #(
    parameter N = 8,                    // Array dimensions (NxN)
    parameter DATA_WIDTH = 8,           // INT8 precision
    parameter ACC_WIDTH = 32            // Accumulator precision
) (
    input wire clk,
    input wire reset,

    // Global control signals (active for all PEs)
    input wire enable,                  // Enable computation
    input wire weight_load,             // When high, west inputs are weights to load
    input wire clear_acc,               // Clear all PE accumulators

    // Weight loading interface
    // During weight_load, we load one row of weights per cycle
    // weight_data contains N weights (one per column)
    input wire signed [DATA_WIDTH-1:0] weight_data [N-1:0],
    input wire [N-1:0] weight_row_select,  // One-hot: which row to load weights into

    // Activation inputs (west edge) - one per row
    // Activations are fed in with proper skewing for systolic flow
    input wire signed [DATA_WIDTH-1:0] activation_in [N-1:0],
    input wire [N-1:0] activation_valid,

    // Partial sum inputs (north edge) - typically all zeros
    input wire signed [ACC_WIDTH-1:0] psum_in [N-1:0],

    // Result outputs (south edge) - accumulated partial sums
    output wire signed [ACC_WIDTH-1:0] result_out [N-1:0],
    output wire [N-1:0] result_valid,

    // Debug: access any PE's internal state
    output wire signed [DATA_WIDTH-1:0] debug_weights [N-1:0][N-1:0],
    output wire signed [ACC_WIDTH-1:0] debug_accumulators [N-1:0][N-1:0]
);

    // Internal wiring: horizontal data flow (west to east)
    // data_h[row][col] is the input to PE[row][col] from the west
    // data_h[row][0] comes from activation_in[row]
    // data_h[row][col+1] comes from PE[row][col]'s east output
    wire signed [DATA_WIDTH-1:0] data_h [N-1:0][N:0];   // N rows, N+1 columns (includes input)

    // Internal wiring: vertical psum flow (north to south)
    // psum_v[row][col] is the input to PE[row][col] from the north
    // psum_v[0][col] comes from psum_in[col]
    // psum_v[row+1][col] comes from PE[row][col]'s south output
    wire signed [ACC_WIDTH-1:0] psum_v [N:0][N-1:0];    // N+1 rows, N columns (includes input/output)

    // PE enable signals (can be per-PE for fine-grained control)
    wire pe_enable [N-1:0][N-1:0];

    // PE weight load signals - each PE gets weight_load only when its row is selected
    wire pe_weight_load [N-1:0][N-1:0];

    // Connect external inputs to array edges
    genvar i, j;
    generate
        for (i = 0; i < N; i = i + 1) begin : input_connections
            // West edge: activation inputs connect to first column of horizontal wires
            assign data_h[i][0] = activation_in[i];

            // North edge: partial sum inputs connect to first row of vertical wires
            assign psum_v[0][i] = psum_in[i];

            // South edge: result outputs come from last row of vertical wires
            assign result_out[i] = psum_v[N][i];
        end
    endgenerate

    // Validity tracking for outputs
    // Track when valid data reaches the south edge
    // With skewed input, results emerge diagonally
    reg [N-1:0] valid_pipeline [2*N-1:0];

    integer p;
    always @(posedge clk) begin
        if (reset) begin
            for (p = 0; p < 2*N; p = p + 1) begin
                valid_pipeline[p] <= {N{1'b0}};
            end
        end else if (enable && !weight_load) begin
            // Shift validity through pipeline
            valid_pipeline[0] <= activation_valid;
            for (p = 1; p < 2*N; p = p + 1) begin
                valid_pipeline[p] <= valid_pipeline[p-1];
            end
        end
    end

    // Result valid when data has propagated through array
    // For row i, result is valid after N + i cycles
    generate
        for (i = 0; i < N; i = i + 1) begin : result_valid_gen
            assign result_valid[i] = valid_pipeline[N-1+i][i];
        end
    endgenerate

    // Instantiate NxN Processing Elements
    generate
        for (i = 0; i < N; i = i + 1) begin : pe_rows
            for (j = 0; j < N; j = j + 1) begin : pe_cols

                // PE enable: always enabled when array is enabled
                assign pe_enable[i][j] = enable;

                // PE weight load: only when weight_load is active AND this row is selected
                assign pe_weight_load[i][j] = weight_load && weight_row_select[i];

                // Determine west input to this PE
                // During weight loading: use weight_data[j] (column's weight)
                // During compute: use data_h[i][j] (from west neighbor or input)
                wire signed [DATA_WIDTH-1:0] pe_west_input;
                assign pe_west_input = pe_weight_load[i][j] ? weight_data[j] : data_h[i][j];

                // Instantiate PE
                pe #(
                    .DATA_WIDTH(DATA_WIDTH),
                    .ACC_WIDTH(ACC_WIDTH)
                ) pe_inst (
                    .clk(clk),
                    .reset(reset),
                    .enable(pe_enable[i][j]),

                    .weight_load(pe_weight_load[i][j]),
                    .clear_acc(clear_acc),

                    .data_in_west(pe_west_input),
                    .psum_in_north(psum_v[i][j]),

                    .data_out_east(data_h[i][j+1]),
                    .psum_out_south(psum_v[i+1][j]),

                    .weight_debug(debug_weights[i][j]),
                    .acc_debug(debug_accumulators[i][j])
                );
            end
        end
    endgenerate

endmodule

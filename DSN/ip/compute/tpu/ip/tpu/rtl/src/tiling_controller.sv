`default_nettype none
`timescale 1ns/1ns

// TPU TILING CONTROLLER
// > Manages 3-level nested loop tiling for large matrix operations
// > Automatically computes tile addresses and iteration counts
// > Supports arbitrary matrix sizes with edge tile handling
//
// For C[M,N] = A[M,K] @ B[K,N]:
//   Outer loop:  M tiles (rows of output)
//   Middle loop: N tiles (columns of output)
//   Inner loop:  K tiles (reduction dimension)
//
// Each tile is TILE_SIZE x TILE_SIZE (default 8x8)
//
// Address calculation:
//   A_tile_addr = A_base + (m_tile * K + k_tile * TILE_SIZE) * sizeof(int8)
//   B_tile_addr = B_base + (k_tile * N + n_tile * TILE_SIZE) * sizeof(int8)
//   C_tile_addr = C_base + (m_tile * N + n_tile * TILE_SIZE) * sizeof(int32)

module tiling_controller #(
    parameter TILE_SIZE = 8,            // 8x8 tile (matches systolic array)
    parameter MAX_DIM = 4096,           // Maximum matrix dimension
    parameter ADDR_WIDTH = 14           // Unified buffer address width
) (
    input wire clk,
    input wire reset,

    // Configuration (set before starting)
    input wire [15:0]           matrix_m,           // Output rows
    input wire [15:0]           matrix_n,           // Output columns
    input wire [15:0]           matrix_k,           // Reduction dimension
    input wire [ADDR_WIDTH-1:0] base_addr_a,        // Base address for A matrix
    input wire [ADDR_WIDTH-1:0] base_addr_b,        // Base address for B matrix
    input wire [ADDR_WIDTH-1:0] base_addr_c,        // Base address for C matrix

    // Control
    input wire                  start,              // Start tiling iteration
    input wire                  advance,            // Advance to next tile
    output reg                  done,               // All tiles processed
    output reg                  active,             // Currently iterating

    // Current tile indices
    output reg [15:0]           tile_m,             // Current M tile index
    output reg [15:0]           tile_n,             // Current N tile index
    output reg [15:0]           tile_k,             // Current K tile index

    // Tile counts
    output wire [15:0]          num_tiles_m,        // Total M tiles
    output wire [15:0]          num_tiles_n,        // Total N tiles
    output wire [15:0]          num_tiles_k,        // Total K tiles

    // Current tile addresses
    output reg [ADDR_WIDTH-1:0] addr_a_tile,        // Address of current A tile
    output reg [ADDR_WIDTH-1:0] addr_b_tile,        // Address of current B tile
    output reg [ADDR_WIDTH-1:0] addr_c_tile,        // Address of current C tile

    // Current tile dimensions (for edge tiles)
    output reg [7:0]            tile_rows_a,        // Rows in current A tile
    output reg [7:0]            tile_cols_a,        // Cols in current A tile (= rows of B)
    output reg [7:0]            tile_rows_b,        // Rows in current B tile
    output reg [7:0]            tile_cols_b,        // Cols in current B tile
    output reg [7:0]            tile_rows_c,        // Rows in current C tile
    output reg [7:0]            tile_cols_c,        // Cols in current C tile

    // Accumulation control
    output reg                  first_k_tile,       // First K tile (clear accumulator)
    output reg                  last_k_tile,        // Last K tile (write back results)

    // Loop interface for sequencer
    input wire                  loop_check,
    input wire [1:0]            loop_level,         // 0=K, 1=N, 2=M
    output reg                  loop_iteration_done,
    output reg [13:0]           loop_target_pc,
    input wire [13:0]           loop_start_pc,

    // Debug
    output wire [15:0]          debug_total_tiles
);

    // Calculate tile counts (ceiling division)
    assign num_tiles_m = (matrix_m + TILE_SIZE - 1) / TILE_SIZE;
    assign num_tiles_n = (matrix_n + TILE_SIZE - 1) / TILE_SIZE;
    assign num_tiles_k = (matrix_k + TILE_SIZE - 1) / TILE_SIZE;
    assign debug_total_tiles = num_tiles_m * num_tiles_n * num_tiles_k;

    // Address stride calculations (in bytes/words)
    // A is M x K, stored row-major
    // B is K x N, stored row-major
    // C is M x N, stored row-major

    // Helper function to calculate minimum
    function [15:0] min_dim;
        input [15:0] a, b;
        begin
            min_dim = (a < b) ? a : b;
        end
    endfunction

    // Calculate addresses
    wire [31:0] a_offset;
    wire [31:0] b_offset;
    wire [31:0] c_offset;

    // A[tile_m * TILE_SIZE, tile_k * TILE_SIZE]
    // Offset = (tile_m * TILE_SIZE * K + tile_k * TILE_SIZE) * 1 byte
    assign a_offset = (tile_m * TILE_SIZE * matrix_k + tile_k * TILE_SIZE);

    // B[tile_k * TILE_SIZE, tile_n * TILE_SIZE]
    // Offset = (tile_k * TILE_SIZE * N + tile_n * TILE_SIZE) * 1 byte
    assign b_offset = (tile_k * TILE_SIZE * matrix_n + tile_n * TILE_SIZE);

    // C[tile_m * TILE_SIZE, tile_n * TILE_SIZE]
    // Offset = (tile_m * TILE_SIZE * N + tile_n * TILE_SIZE) * 4 bytes (INT32)
    assign c_offset = (tile_m * TILE_SIZE * matrix_n + tile_n * TILE_SIZE) * 4;

    // State machine
    localparam IDLE = 2'b00;
    localparam RUNNING = 2'b01;
    localparam COMPLETE = 2'b10;

    reg [1:0] state;

    // Main tiling logic
    always @(posedge clk) begin
        if (reset) begin
            state <= IDLE;
            done <= 1'b0;
            active <= 1'b0;
            tile_m <= 16'd0;
            tile_n <= 16'd0;
            tile_k <= 16'd0;
            addr_a_tile <= {ADDR_WIDTH{1'b0}};
            addr_b_tile <= {ADDR_WIDTH{1'b0}};
            addr_c_tile <= {ADDR_WIDTH{1'b0}};
            tile_rows_a <= 8'd0;
            tile_cols_a <= 8'd0;
            tile_rows_b <= 8'd0;
            tile_cols_b <= 8'd0;
            tile_rows_c <= 8'd0;
            tile_cols_c <= 8'd0;
            first_k_tile <= 1'b0;
            last_k_tile <= 1'b0;
            loop_iteration_done <= 1'b0;
            loop_target_pc <= 14'd0;
        end else begin
            // Default
            loop_iteration_done <= 1'b0;

            case (state)
                IDLE: begin
                    done <= 1'b0;

                    if (start) begin
                        // Initialize tile indices
                        tile_m <= 16'd0;
                        tile_n <= 16'd0;
                        tile_k <= 16'd0;

                        // Calculate initial addresses
                        addr_a_tile <= base_addr_a;
                        addr_b_tile <= base_addr_b;
                        addr_c_tile <= base_addr_c;

                        // Calculate initial tile dimensions
                        tile_rows_a <= min_dim(TILE_SIZE, matrix_m);
                        tile_cols_a <= min_dim(TILE_SIZE, matrix_k);
                        tile_rows_b <= min_dim(TILE_SIZE, matrix_k);
                        tile_cols_b <= min_dim(TILE_SIZE, matrix_n);
                        tile_rows_c <= min_dim(TILE_SIZE, matrix_m);
                        tile_cols_c <= min_dim(TILE_SIZE, matrix_n);

                        first_k_tile <= 1'b1;
                        last_k_tile <= (num_tiles_k == 1);

                        active <= 1'b1;
                        state <= RUNNING;
                    end
                end

                RUNNING: begin
                    if (advance) begin
                        // Advance to next tile
                        // Order: K (innermost) -> N -> M (outermost)

                        if (tile_k + 1 < num_tiles_k) begin
                            // Advance K
                            tile_k <= tile_k + 1;
                            first_k_tile <= 1'b0;
                            last_k_tile <= (tile_k + 2 >= num_tiles_k);

                            // Update A address (advance by TILE_SIZE columns)
                            addr_a_tile <= base_addr_a + ((tile_m * TILE_SIZE * matrix_k + (tile_k + 1) * TILE_SIZE) >> 2);

                            // Update B address (advance by TILE_SIZE rows)
                            addr_b_tile <= base_addr_b + (((tile_k + 1) * TILE_SIZE * matrix_n + tile_n * TILE_SIZE) >> 2);

                            // Update tile dimensions for edge cases
                            tile_cols_a <= min_dim(TILE_SIZE, matrix_k - (tile_k + 1) * TILE_SIZE);
                            tile_rows_b <= min_dim(TILE_SIZE, matrix_k - (tile_k + 1) * TILE_SIZE);

                        end else if (tile_n + 1 < num_tiles_n) begin
                            // K done, advance N
                            tile_k <= 16'd0;
                            tile_n <= tile_n + 1;
                            first_k_tile <= 1'b1;
                            last_k_tile <= (num_tiles_k == 1);

                            // Reset A to start of row
                            addr_a_tile <= base_addr_a + ((tile_m * TILE_SIZE * matrix_k) >> 2);

                            // Update B address (advance by TILE_SIZE columns)
                            addr_b_tile <= base_addr_b + (((tile_n + 1) * TILE_SIZE) >> 2);

                            // Update C address
                            addr_c_tile <= base_addr_c + ((tile_m * TILE_SIZE * matrix_n + (tile_n + 1) * TILE_SIZE) >> 2);

                            // Update tile dimensions
                            tile_cols_a <= min_dim(TILE_SIZE, matrix_k);
                            tile_rows_b <= min_dim(TILE_SIZE, matrix_k);
                            tile_cols_b <= min_dim(TILE_SIZE, matrix_n - (tile_n + 1) * TILE_SIZE);
                            tile_cols_c <= min_dim(TILE_SIZE, matrix_n - (tile_n + 1) * TILE_SIZE);

                            // Signal loop iteration
                            if (loop_check && loop_level == 2'b00) begin
                                loop_iteration_done <= 1'b1;
                                loop_target_pc <= loop_start_pc;
                            end

                        end else if (tile_m + 1 < num_tiles_m) begin
                            // N done, advance M
                            tile_k <= 16'd0;
                            tile_n <= 16'd0;
                            tile_m <= tile_m + 1;
                            first_k_tile <= 1'b1;
                            last_k_tile <= (num_tiles_k == 1);

                            // Update all addresses for new row
                            addr_a_tile <= base_addr_a + (((tile_m + 1) * TILE_SIZE * matrix_k) >> 2);
                            addr_b_tile <= base_addr_b;
                            addr_c_tile <= base_addr_c + (((tile_m + 1) * TILE_SIZE * matrix_n) >> 2);

                            // Update tile dimensions
                            tile_rows_a <= min_dim(TILE_SIZE, matrix_m - (tile_m + 1) * TILE_SIZE);
                            tile_cols_a <= min_dim(TILE_SIZE, matrix_k);
                            tile_rows_b <= min_dim(TILE_SIZE, matrix_k);
                            tile_cols_b <= min_dim(TILE_SIZE, matrix_n);
                            tile_rows_c <= min_dim(TILE_SIZE, matrix_m - (tile_m + 1) * TILE_SIZE);
                            tile_cols_c <= min_dim(TILE_SIZE, matrix_n);

                            // Signal loop iteration
                            if (loop_check && loop_level == 2'b01) begin
                                loop_iteration_done <= 1'b1;
                                loop_target_pc <= loop_start_pc;
                            end

                        end else begin
                            // All tiles complete
                            done <= 1'b1;
                            active <= 1'b0;
                            state <= COMPLETE;

                            // Signal loop iteration for outermost loop
                            if (loop_check && loop_level == 2'b10) begin
                                loop_iteration_done <= 1'b1;
                                loop_target_pc <= loop_start_pc;
                            end
                        end
                    end
                end

                COMPLETE: begin
                    // Stay complete until reset or new start
                    if (start) begin
                        tile_m <= 16'd0;
                        tile_n <= 16'd0;
                        tile_k <= 16'd0;
                        done <= 1'b0;
                        active <= 1'b1;
                        first_k_tile <= 1'b1;
                        last_k_tile <= (num_tiles_k == 1);
                        state <= RUNNING;
                    end
                end

                default: state <= IDLE;
            endcase
        end
    end

endmodule

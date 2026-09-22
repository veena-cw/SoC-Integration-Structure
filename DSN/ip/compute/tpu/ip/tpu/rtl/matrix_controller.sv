`default_nettype none
`timescale 1ns/1ns

// TPU MATRIX CONTROLLER
// > 14-state FSM for complete matrix multiplication orchestration
// > Coordinates weight FIFO, activation FIFO, systolic array, and accumulator
// > Handles tiled matrix multiply with double-buffering
//
// State Machine:
//   IDLE              - Waiting for matmul command
//   LOAD_WEIGHTS      - Start weight prefetch to FIFO
//   WAIT_WEIGHTS      - Wait for weight prefetch complete
//   LOAD_ACTIVATIONS  - Start activation prefetch to FIFO
//   WAIT_ACTIVATIONS  - Wait for activation prefetch complete
//   BROADCAST_WEIGHTS - Load weights from FIFO to systolic array
//   WAIT_BROADCAST    - Wait for weight loading complete
//   STREAM_COMPUTE    - Stream activations and compute
//   DRAIN_PIPELINE    - Wait for systolic array pipeline to drain
//   ACCUMULATE        - Capture results in accumulator (with accumulate mode)
//   NEXT_K_TILE       - Advance to next K tile (inner loop)
//   NEXT_N_TILE       - Advance to next N tile (middle loop)
//   NEXT_M_TILE       - Advance to next M tile (outer loop)
//   WRITEBACK         - Write results from accumulator to memory
//   DONE              - Matrix multiply complete

module matrix_controller #(
    parameter N = 8,                    // Systolic array dimension
    parameter ADDR_WIDTH = 14           // Unified buffer address width
) (
    input wire clk,
    input wire reset,

    // Command interface
    input wire                  start,              // Start matmul operation
    input wire                  accumulate_mode,    // Add to existing results
    output reg                  busy,               // Operation in progress
    output reg                  done,               // Operation complete

    // Matrix configuration
    input wire [15:0]           matrix_m,
    input wire [15:0]           matrix_n,
    input wire [15:0]           matrix_k,
    input wire [ADDR_WIDTH-1:0] addr_a,
    input wire [ADDR_WIDTH-1:0] addr_b,
    input wire [ADDR_WIDTH-1:0] addr_c,

    // Weight FIFO interface
    output reg                  weight_prefetch_start,
    output reg [ADDR_WIDTH-1:0] weight_prefetch_addr,
    output reg [7:0]            weight_prefetch_rows,
    input wire                  weight_prefetch_done,
    input wire                  weight_buffer_ready,
    output reg                  weight_drain_enable,
    output reg                  weight_drain_row_done,
    input wire                  weight_buffer_empty,

    // Activation FIFO interface
    output reg                  activation_load_start,
    output reg [ADDR_WIDTH-1:0] activation_load_addr,
    output reg [7:0]            activation_load_rows,
    output reg [7:0]            activation_load_cols,
    output reg [ADDR_WIDTH-1:0] activation_load_stride,
    input wire                  activation_load_done,
    input wire                  activation_buffer_ready,
    output reg                  activation_stream_enable,
    input wire                  activation_stream_done,

    // Systolic array interface
    output reg                  array_enable,
    output reg                  array_weight_load,
    output reg                  array_clear_acc,
    input wire [N-1:0]          array_result_valid,

    // Accumulator interface
    output reg                  acc_results_enable,
    output reg                  acc_accumulate_mode,
    output reg                  acc_clear,
    output reg [7:0]            acc_tile_row,
    input wire                  acc_busy,
    output reg                  acc_quant_enable,
    input wire                  acc_quant_done,

    // Memory controller interface (for writeback)
    output reg                  mem_write_req,
    output reg [ADDR_WIDTH-1:0] mem_write_addr,
    output reg [31:0]           mem_write_data,
    input wire                  mem_write_ack,

    // Tiling interface
    output reg                  tile_advance,
    input wire                  tile_done,
    input wire                  first_k_tile,
    input wire                  last_k_tile,
    input wire [15:0]           tile_m,
    input wire [15:0]           tile_n,
    input wire [15:0]           tile_k,
    input wire [ADDR_WIDTH-1:0] tile_addr_a,
    input wire [ADDR_WIDTH-1:0] tile_addr_b,
    input wire [ADDR_WIDTH-1:0] tile_addr_c,
    input wire [7:0]            tile_rows,
    input wire [7:0]            tile_cols,

    // State output
    output reg [3:0]            matmul_state,

    // Debug
    output wire [31:0]          debug_cycle_count,
    output wire [3:0]           debug_state
);

    // State definitions
    localparam IDLE              = 4'b0000;
    localparam LOAD_WEIGHTS      = 4'b0001;
    localparam WAIT_WEIGHTS      = 4'b0010;
    localparam LOAD_ACTIVATIONS  = 4'b0011;
    localparam WAIT_ACTIVATIONS  = 4'b0100;
    localparam BROADCAST_WEIGHTS = 4'b0101;
    localparam WAIT_BROADCAST    = 4'b0110;
    localparam STREAM_COMPUTE    = 4'b0111;
    localparam DRAIN_PIPELINE    = 4'b1000;
    localparam ACCUMULATE        = 4'b1001;
    localparam NEXT_K_TILE       = 4'b1010;
    localparam NEXT_N_TILE       = 4'b1011;
    localparam NEXT_M_TILE       = 4'b1100;
    localparam WRITEBACK         = 4'b1101;
    localparam MATMUL_DONE       = 4'b1110;

    // Internal state
    reg [3:0] state;
    reg [31:0] cycle_count;
    reg [7:0] weight_row_counter;
    reg [7:0] drain_cycle_counter;
    reg first_k_tile_reg;
    reg last_k_tile_reg;
    reg writeback_row;
    reg [7:0] writeback_col;

    // Debug outputs
    assign debug_state = state;
    assign debug_cycle_count = cycle_count;
    assign matmul_state = state;

    // Main state machine
    always @(posedge clk) begin
        if (reset) begin
            state <= IDLE;
            busy <= 1'b0;
            done <= 1'b0;
            cycle_count <= 32'd0;

            weight_prefetch_start <= 1'b0;
            weight_prefetch_addr <= {ADDR_WIDTH{1'b0}};
            weight_prefetch_rows <= 8'd0;
            weight_drain_enable <= 1'b0;
            weight_drain_row_done <= 1'b0;

            activation_load_start <= 1'b0;
            activation_load_addr <= {ADDR_WIDTH{1'b0}};
            activation_load_rows <= 8'd0;
            activation_load_cols <= 8'd0;
            activation_load_stride <= {ADDR_WIDTH{1'b0}};
            activation_stream_enable <= 1'b0;

            array_enable <= 1'b0;
            array_weight_load <= 1'b0;
            array_clear_acc <= 1'b0;

            acc_results_enable <= 1'b0;
            acc_accumulate_mode <= 1'b0;
            acc_clear <= 1'b0;
            acc_tile_row <= 8'd0;
            acc_quant_enable <= 1'b0;

            mem_write_req <= 1'b0;
            mem_write_addr <= {ADDR_WIDTH{1'b0}};
            mem_write_data <= 32'd0;

            tile_advance <= 1'b0;
            weight_row_counter <= 8'd0;
            drain_cycle_counter <= 8'd0;
            first_k_tile_reg <= 1'b0;
            last_k_tile_reg <= 1'b0;
            writeback_row <= 1'b0;
            writeback_col <= 8'd0;
        end else begin
            // Default pulse signals
            weight_prefetch_start <= 1'b0;
            weight_drain_row_done <= 1'b0;
            activation_load_start <= 1'b0;
            acc_clear <= 1'b0;
            acc_quant_enable <= 1'b0;
            tile_advance <= 1'b0;

            // Cycle counter
            if (busy) begin
                cycle_count <= cycle_count + 1;
            end

            case (state)
                IDLE: begin
                    done <= 1'b0;
                    cycle_count <= 32'd0;

                    if (start) begin
                        busy <= 1'b1;
                        first_k_tile_reg <= first_k_tile;
                        last_k_tile_reg <= last_k_tile;
                        state <= LOAD_WEIGHTS;
                    end
                end

                LOAD_WEIGHTS: begin
                    // Start weight prefetch
                    weight_prefetch_start <= 1'b1;
                    weight_prefetch_addr <= tile_addr_b;
                    weight_prefetch_rows <= N;  // Load full tile

                    state <= WAIT_WEIGHTS;
                end

                WAIT_WEIGHTS: begin
                    if (weight_prefetch_done || weight_buffer_ready) begin
                        state <= LOAD_ACTIVATIONS;
                    end
                end

                LOAD_ACTIVATIONS: begin
                    // Start activation load
                    activation_load_start <= 1'b1;
                    activation_load_addr <= tile_addr_a;
                    activation_load_rows <= N;
                    activation_load_cols <= N;
                    activation_load_stride <= matrix_k >> 2;  // Words per row

                    state <= WAIT_ACTIVATIONS;
                end

                WAIT_ACTIVATIONS: begin
                    if (activation_load_done || activation_buffer_ready) begin
                        state <= BROADCAST_WEIGHTS;
                        weight_row_counter <= 8'd0;
                    end
                end

                BROADCAST_WEIGHTS: begin
                    // Load weights from FIFO to systolic array
                    array_weight_load <= 1'b1;
                    weight_drain_enable <= 1'b1;

                    // Wait one cycle then signal row done
                    weight_drain_row_done <= 1'b1;
                    weight_row_counter <= weight_row_counter + 1;

                    if (weight_row_counter >= N - 1) begin
                        state <= WAIT_BROADCAST;
                    end
                end

                WAIT_BROADCAST: begin
                    array_weight_load <= 1'b0;
                    weight_drain_enable <= 1'b0;

                    // Clear accumulator if first K tile
                    if (first_k_tile_reg && !accumulate_mode) begin
                        array_clear_acc <= 1'b1;
                    end

                    state <= STREAM_COMPUTE;
                end

                STREAM_COMPUTE: begin
                    // Enable array and stream activations
                    array_enable <= 1'b1;
                    array_clear_acc <= 1'b0;
                    activation_stream_enable <= 1'b1;

                    // Enable result capture
                    acc_results_enable <= 1'b1;
                    acc_accumulate_mode <= !first_k_tile_reg || accumulate_mode;

                    if (activation_stream_done) begin
                        activation_stream_enable <= 1'b0;
                        state <= DRAIN_PIPELINE;
                        drain_cycle_counter <= 8'd0;
                    end
                end

                DRAIN_PIPELINE: begin
                    // Wait for pipeline to drain (2N-1 cycles)
                    drain_cycle_counter <= drain_cycle_counter + 1;

                    if (drain_cycle_counter >= 2 * N) begin
                        array_enable <= 1'b0;
                        acc_results_enable <= 1'b0;
                        state <= ACCUMULATE;
                    end
                end

                ACCUMULATE: begin
                    // Results captured, decide next step
                    if (last_k_tile_reg) begin
                        // Last K tile - write back results
                        state <= WRITEBACK;
                    end else begin
                        // More K tiles to process
                        state <= NEXT_K_TILE;
                    end
                end

                NEXT_K_TILE: begin
                    // Advance to next K tile
                    tile_advance <= 1'b1;
                    first_k_tile_reg <= 1'b0;
                    // last_k_tile_reg will be updated from tiling controller

                    state <= LOAD_WEIGHTS;
                end

                NEXT_N_TILE: begin
                    // Advance to next N tile
                    tile_advance <= 1'b1;
                    first_k_tile_reg <= 1'b1;

                    state <= LOAD_WEIGHTS;
                end

                NEXT_M_TILE: begin
                    // Advance to next M tile
                    tile_advance <= 1'b1;
                    first_k_tile_reg <= 1'b1;

                    state <= LOAD_WEIGHTS;
                end

                WRITEBACK: begin
                    // Quantize and write back results
                    if (!acc_quant_done) begin
                        acc_quant_enable <= 1'b1;
                    end else begin
                        // Check if more tiles to process
                        if (tile_done) begin
                            state <= MATMUL_DONE;
                        end else begin
                            // Advance to next tile
                            tile_advance <= 1'b1;
                            first_k_tile_reg <= first_k_tile;
                            last_k_tile_reg <= last_k_tile;
                            state <= LOAD_WEIGHTS;
                        end
                    end
                end

                MATMUL_DONE: begin
                    busy <= 1'b0;
                    done <= 1'b1;
                    state <= IDLE;
                end

                default: state <= IDLE;
            endcase
        end
    end

endmodule

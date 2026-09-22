`default_nettype none
`timescale 1ns/1ns

// ACCUMULATOR BUFFER
// > INT32 partial sum storage for systolic array results
// > Supports accumulate mode for tiled matrix multiply (K > tile_size)
// > Supports overwrite mode for direct store
// > Includes quantization unit for INT32 → INT8 conversion
//
// Tiled Matrix Multiply Example:
// For C = A @ B where K > tile_size, we compute:
//   C_tile += A_tile[0:K1] @ B_tile[0:K1]
//   C_tile += A_tile[K1:K2] @ B_tile[K1:K2]
//   ...
//
// Accumulator buffer stores C_tile between iterations.
//
// Quantization (INT32 → INT8):
// out_int8 = clamp(round(in_int32 * scale), -128, 127)
// Scale is typically 1/256 or similar (stored as fixed-point)

module accumulator_buffer #(
    parameter N = 8,                        // Systolic array dimension
    parameter ACC_WIDTH = 32,               // Accumulator precision
    parameter DATA_WIDTH = 8,               // Output precision after quantization
    parameter TILE_SIZE = 8                 // Maximum tile dimension
) (
    input wire clk,
    input wire reset,

    // Systolic array results input (south edge of array)
    input wire signed [ACC_WIDTH-1:0]   result_in [N-1:0],
    input wire [N-1:0]                  result_valid,
    input wire                          results_enable,     // Accept results from array

    // Accumulation control
    input wire                          accumulate_mode,    // 1=add to existing, 0=overwrite
    input wire                          clear_buffer,       // Clear all accumulators

    // Current tile position (for multi-tile accumulation)
    input wire [7:0]                    tile_row_idx,       // Which result row we're writing
    input wire [7:0]                    k_tile_idx,         // K dimension tile index

    // Readback interface
    input wire                          read_enable,
    input wire [7:0]                    read_row,           // Row to read (0 to N-1)
    output reg signed [ACC_WIDTH-1:0]   read_data [N-1:0],  // Full row of INT32 values
    output reg                          read_valid,

    // Quantized output interface
    input wire                          quant_enable,       // Start quantization
    input wire [15:0]                   quant_scale,        // Fixed-point scale (Q8.8)
    input wire                          quant_zero_point,   // Output zero point offset
    output reg signed [DATA_WIDTH-1:0]  quant_out [N-1:0],  // Quantized INT8 output
    output reg                          quant_valid,
    output reg                          quant_done,

    // Write back to unified buffer
    output reg                          wb_request,
    output reg [13:0]                   wb_addr,
    output reg [31:0]                   wb_data,
    input wire                          wb_ack,

    // Status
    output wire                         buffer_busy,
    output wire [7:0]                   rows_accumulated,
    output wire [ACC_WIDTH-1:0]         debug_acc [N-1:0][N-1:0]
);

    // Accumulator storage: N rows x N columns of INT32
    reg signed [ACC_WIDTH-1:0] accumulators [0:N-1][0:N-1];

    // Track which rows have been written
    reg [N-1:0] row_valid;
    reg [7:0] accumulated_rows;

    // Result capture state
    reg [2:0] capture_row;              // Current row being captured (from result_valid timing)
    reg capturing;

    // Quantization state machine
    localparam Q_IDLE = 3'b000;
    localparam Q_COMPUTE = 3'b001;
    localparam Q_CLIP = 3'b010;
    localparam Q_OUTPUT = 3'b011;
    localparam Q_WRITEBACK = 3'b100;
    localparam Q_DONE = 3'b101;

    reg [2:0] quant_state;
    reg [3:0] quant_row;
    reg [3:0] quant_col;
    reg signed [47:0] quant_product;    // Intermediate for scale multiply
    reg signed [DATA_WIDTH-1:0] quant_buffer [0:N-1][0:N-1];

    // Writeback state
    reg [3:0] wb_row;
    reg [3:0] wb_word;                  // 4 INT8s per 32-bit word

    // Output assignments
    assign buffer_busy = capturing || (quant_state != Q_IDLE);
    assign rows_accumulated = accumulated_rows;

    // Debug output
    genvar di, dj;
    generate
        for (di = 0; di < N; di = di + 1) begin : debug_row
            for (dj = 0; dj < N; dj = dj + 1) begin : debug_col
                assign debug_acc[di][dj] = accumulators[di][dj];
            end
        end
    endgenerate

    // Result capture logic
    // Results arrive skewed from systolic array - column i arrives at cycle N-1+i
    integer col;
    always @(posedge clk) begin
        if (reset || clear_buffer) begin
            capturing <= 1'b0;
            capture_row <= 3'd0;
            row_valid <= {N{1'b0}};
            accumulated_rows <= 8'd0;
            // Clear accumulators
            for (col = 0; col < N; col = col + 1) begin
                accumulators[0][col] <= 32'sd0;
                accumulators[1][col] <= 32'sd0;
                accumulators[2][col] <= 32'sd0;
                accumulators[3][col] <= 32'sd0;
                accumulators[4][col] <= 32'sd0;
                accumulators[5][col] <= 32'sd0;
                accumulators[6][col] <= 32'sd0;
                accumulators[7][col] <= 32'sd0;
            end
        end else if (results_enable) begin
            // Capture results as they arrive (skewed)
            // result_valid[i] indicates column i has valid data
            for (col = 0; col < N; col = col + 1) begin
                if (result_valid[col]) begin
                    // Determine which row this result belongs to
                    // Based on systolic timing, results for row r arrive at cycles r to r+N-1
                    if (accumulate_mode) begin
                        accumulators[tile_row_idx][col] <= accumulators[tile_row_idx][col] + result_in[col];
                    end else begin
                        accumulators[tile_row_idx][col] <= result_in[col];
                    end
                end
            end

            // Track accumulated rows
            if (|result_valid && !row_valid[tile_row_idx]) begin
                row_valid[tile_row_idx] <= 1'b1;
                accumulated_rows <= accumulated_rows + 1;
            end
        end
    end

    // Readback logic
    always @(posedge clk) begin
        if (reset) begin
            read_valid <= 1'b0;
            for (col = 0; col < N; col = col + 1) begin
                read_data[col] <= 32'sd0;
            end
        end else begin
            read_valid <= 1'b0;
            if (read_enable && read_row < N) begin
                for (col = 0; col < N; col = col + 1) begin
                    read_data[col] <= accumulators[read_row][col];
                end
                read_valid <= 1'b1;
            end
        end
    end

    // Quantization state machine
    integer qi, qj;
    always @(posedge clk) begin
        if (reset) begin
            quant_state <= Q_IDLE;
            quant_row <= 4'd0;
            quant_col <= 4'd0;
            quant_valid <= 1'b0;
            quant_done <= 1'b0;
            quant_product <= 48'sd0;
            wb_request <= 1'b0;
            wb_addr <= 14'd0;
            wb_data <= 32'd0;
            wb_row <= 4'd0;
            wb_word <= 4'd0;
            for (qi = 0; qi < N; qi = qi + 1) begin
                quant_out[qi] <= 8'sd0;
                for (qj = 0; qj < N; qj = qj + 1) begin
                    quant_buffer[qi][qj] <= 8'sd0;
                end
            end
        end else begin
            case (quant_state)
                Q_IDLE: begin
                    quant_valid <= 1'b0;
                    quant_done <= 1'b0;
                    wb_request <= 1'b0;
                    if (quant_enable) begin
                        quant_row <= 4'd0;
                        quant_col <= 4'd0;
                        quant_state <= Q_COMPUTE;
                    end
                end

                Q_COMPUTE: begin
                    // Multiply accumulator by scale
                    // quant_scale is Q8.8 fixed-point (1.0 = 256)
                    // Product = acc * scale, then shift right by 8
                    quant_product <= accumulators[quant_row][quant_col] * $signed({1'b0, quant_scale});
                    quant_state <= Q_CLIP;
                end

                Q_CLIP: begin
                    // Shift and clip to INT8 range [-128, 127]
                    // Shift right by 8 (scale is Q8.8)
                    begin
                        reg signed [31:0] shifted;
                        shifted = quant_product >>> 8;

                        // Saturating clip
                        if (shifted > 127)
                            quant_buffer[quant_row][quant_col] <= 8'sd127;
                        else if (shifted < -128)
                            quant_buffer[quant_row][quant_col] <= -8'sd128;
                        else
                            quant_buffer[quant_row][quant_col] <= shifted[7:0];
                    end

                    // Advance to next element
                    if (quant_col >= N - 1) begin
                        quant_col <= 4'd0;
                        if (quant_row >= N - 1) begin
                            quant_state <= Q_OUTPUT;
                        end else begin
                            quant_row <= quant_row + 1;
                            quant_state <= Q_COMPUTE;
                        end
                    end else begin
                        quant_col <= quant_col + 1;
                        quant_state <= Q_COMPUTE;
                    end
                end

                Q_OUTPUT: begin
                    // Output quantized results row by row
                    for (qi = 0; qi < N; qi = qi + 1) begin
                        quant_out[qi] <= quant_buffer[quant_row][qi];
                    end
                    quant_valid <= 1'b1;

                    if (quant_row >= N - 1) begin
                        quant_state <= Q_DONE;
                    end else begin
                        quant_row <= quant_row + 1;
                    end
                end

                Q_DONE: begin
                    quant_valid <= 1'b0;
                    quant_done <= 1'b1;
                    quant_state <= Q_IDLE;
                end

                default: quant_state <= Q_IDLE;
            endcase
        end
    end

    // Initialize accumulators to zero
    integer ri, ci;
    initial begin
        for (ri = 0; ri < N; ri = ri + 1) begin
            for (ci = 0; ci < N; ci = ci + 1) begin
                accumulators[ri][ci] = 32'sd0;
                quant_buffer[ri][ci] = 8'sd0;
            end
        end
    end

endmodule

// Simplified accumulator for single-tile operations
module accumulator_simple #(
    parameter N = 8,
    parameter ACC_WIDTH = 32,
    parameter DATA_WIDTH = 8
) (
    input wire clk,
    input wire reset,

    // Input from systolic array
    input wire signed [ACC_WIDTH-1:0] result_in [N-1:0],
    input wire [N-1:0] result_valid,

    // Output (passthrough with optional clipping)
    output wire signed [ACC_WIDTH-1:0] result_out [N-1:0],
    output wire [N-1:0] result_out_valid,

    // Quantized output
    input wire [15:0] quant_scale,
    output wire signed [DATA_WIDTH-1:0] quant_out [N-1:0],
    output wire [N-1:0] quant_valid
);

    // Direct passthrough for full precision
    genvar i;
    generate
        for (i = 0; i < N; i = i + 1) begin : passthrough
            assign result_out[i] = result_in[i];
            assign result_out_valid[i] = result_valid[i];

            // Simple quantization (scale and clip)
            wire signed [47:0] scaled;
            wire signed [31:0] shifted;
            assign scaled = result_in[i] * $signed({1'b0, quant_scale});
            assign shifted = scaled >>> 8;

            assign quant_out[i] = (shifted > 127) ? 8'sd127 :
                                  (shifted < -128) ? -8'sd128 :
                                  shifted[7:0];
            assign quant_valid[i] = result_valid[i];
        end
    endgenerate

endmodule

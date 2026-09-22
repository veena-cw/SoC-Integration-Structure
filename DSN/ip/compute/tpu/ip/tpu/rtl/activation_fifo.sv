`default_nettype none
`timescale 1ns/1ns

// ACTIVATION FIFO
// > Tiled activation buffer with automatic skew generation
// > Converts row-major memory layout to skewed systolic input
// > Handles partial tiles at matrix edges
//
// Skewing for Systolic Array:
// In a systolic array, data must be skewed so that each diagonal
// of the input matrix arrives at the array at the same time.
//
// Example: 4x4 activation tile A, feeding systolic array row inputs
//
// Memory layout (row-major):      Skewed output timing:
//   A[0,0] A[0,1] A[0,2] A[0,3]   Row 0: A[0,0] A[0,1] A[0,2] A[0,3] (no delay)
//   A[1,0] A[1,1] A[1,2] A[1,3]   Row 1: -      A[1,0] A[1,1] A[1,2] A[1,3] (1 cycle delay)
//   A[2,0] A[2,1] A[2,2] A[2,3]   Row 2: -      -      A[2,0] A[2,1] A[2,2] A[2,3] (2 cycle delay)
//   A[3,0] A[3,1] A[3,2] A[3,3]   Row 3: -      -      -      A[3,0] A[3,1] A[3,2] A[3,3] (3 cycle delay)
//
// This skew ensures that A[i,k] and B[k,j] arrive at PE[i,j] together.

module activation_fifo #(
    parameter N = 8,                        // Systolic array dimension
    parameter DATA_WIDTH = 8,               // INT8 activations
    parameter TILE_SIZE = 8,                // NxN tile of activations
    parameter BUFFER_DEPTH = 64             // 8x8 = 64 activations per buffer
) (
    input wire clk,
    input wire reset,

    // Memory interface (to unified buffer)
    output reg                      mem_req,
    output reg [13:0]               mem_addr,
    input wire [31:0]               mem_rdata,      // 4 INT8 values per word
    input wire                      mem_valid,

    // Load control
    input wire                      load_start,
    input wire [13:0]               load_base_addr, // Starting address in unified buffer
    input wire [7:0]                load_rows,      // Number of rows to load (1-N)
    input wire [7:0]                load_cols,      // Number of columns per row (1-N)
    input wire [13:0]               load_stride,    // Address stride between rows
    output wire                     load_done,
    output wire                     load_busy,

    // Systolic array interface (skewed output)
    input wire                      stream_enable,  // Start streaming to array
    output wire signed [DATA_WIDTH-1:0] activation_out [N-1:0],  // N activations, one per row
    output wire [N-1:0]             activation_valid,            // Per-row valid signals
    output wire                     stream_done,                 // All data streamed
    output wire                     buffer_ready,                // Data loaded and ready

    // Tile position (for partial tile handling)
    input wire [15:0]               tile_row,       // Current tile row index
    input wire [15:0]               tile_col,       // Current tile column index
    input wire [15:0]               matrix_rows,    // Total matrix rows
    input wire [15:0]               matrix_cols     // Total matrix columns
);

    // Activation storage buffer
    // Organized as N rows of N columns
    reg signed [DATA_WIDTH-1:0] buffer [0:N-1][0:N-1];

    // Per-row skew shift registers
    // Row i gets i cycles of delay
    // Max delay is N-1 cycles, so we need N-1 stages per row
    reg signed [DATA_WIDTH-1:0] skew_regs [0:N-1][0:N-2];  // N rows, N-1 delay stages each

    // Buffer state
    reg buffer_valid;
    reg [5:0] words_loaded;

    // Stream state
    reg streaming;
    reg [3:0] stream_cycle;             // Current cycle in streaming (0 to 2N-2)
    reg [3:0] stream_col;               // Current column being output per row

    // Load state machine
    localparam LD_IDLE = 3'b000;
    localparam LD_REQUEST = 3'b001;
    localparam LD_WAIT = 3'b010;
    localparam LD_STORE = 3'b011;
    localparam LD_NEXT_ROW = 3'b100;
    localparam LD_DONE = 3'b101;

    reg [2:0] ld_state;
    reg [13:0] ld_addr;
    reg [7:0] ld_row_count;             // Rows remaining
    reg [7:0] ld_col_count;             // Words remaining in current row
    reg [2:0] ld_current_row;           // Current row index
    reg [2:0] ld_current_col;           // Current column position
    reg [7:0] ld_total_rows;
    reg [7:0] ld_total_cols;
    reg [13:0] ld_row_stride;
    reg [13:0] ld_row_base;             // Base address of current row

    // Output assignments
    assign load_done = (ld_state == LD_DONE);
    assign load_busy = (ld_state != LD_IDLE) && (ld_state != LD_DONE);
    assign buffer_ready = buffer_valid && !streaming;
    assign stream_done = streaming && (stream_cycle >= 2*N - 1);

    // Skewed activation output generation
    // Row 0 outputs directly from buffer
    // Row i outputs from skew_regs[i][i-1] (after i stages of delay)
    genvar row;
    generate
        for (row = 0; row < N; row = row + 1) begin : skew_output
            if (row == 0) begin
                // Row 0: no delay, direct from buffer
                assign activation_out[0] = streaming ? buffer[0][stream_col] : 8'sd0;
            end else begin
                // Row i: output from last skew stage
                assign activation_out[row] = streaming ? skew_regs[row][row-1] : 8'sd0;
            end
        end
    endgenerate

    // Valid signals with proper skewing
    // Row i becomes valid i cycles after streaming starts
    generate
        for (row = 0; row < N; row = row + 1) begin : valid_gen
            assign activation_valid[row] = streaming &&
                                           (stream_cycle >= row) &&
                                           (stream_cycle < row + N);
        end
    endgenerate

    // Load state machine
    always @(posedge clk) begin
        if (reset) begin
            ld_state <= LD_IDLE;
            ld_addr <= 14'd0;
            ld_row_count <= 8'd0;
            ld_col_count <= 8'd0;
            ld_current_row <= 3'd0;
            ld_current_col <= 3'd0;
            ld_total_rows <= 8'd0;
            ld_total_cols <= 8'd0;
            ld_row_stride <= 14'd0;
            ld_row_base <= 14'd0;
            mem_req <= 1'b0;
            mem_addr <= 14'd0;
            buffer_valid <= 1'b0;
            words_loaded <= 6'd0;
        end else begin
            case (ld_state)
                LD_IDLE: begin
                    mem_req <= 1'b0;
                    if (load_start && !streaming) begin
                        ld_addr <= load_base_addr;
                        ld_row_base <= load_base_addr;
                        ld_row_count <= load_rows;
                        ld_total_rows <= load_rows;
                        ld_total_cols <= load_cols;
                        ld_row_stride <= load_stride;
                        // Words per row = ceil(cols / 4)
                        ld_col_count <= (load_cols + 3) >> 2;
                        ld_current_row <= 3'd0;
                        ld_current_col <= 3'd0;
                        words_loaded <= 6'd0;
                        buffer_valid <= 1'b0;
                        ld_state <= LD_REQUEST;
                    end
                end

                LD_REQUEST: begin
                    mem_req <= 1'b1;
                    mem_addr <= ld_addr;
                    ld_state <= LD_WAIT;
                end

                LD_WAIT: begin
                    mem_req <= 1'b0;
                    if (mem_valid) begin
                        ld_state <= LD_STORE;
                    end
                end

                LD_STORE: begin
                    // Store 4 activations from 32-bit word
                    // Handle partial last word (columns < 4)
                    if (ld_current_col < N) buffer[ld_current_row][ld_current_col] <= mem_rdata[7:0];
                    if (ld_current_col + 1 < N) buffer[ld_current_row][ld_current_col + 1] <= mem_rdata[15:8];
                    if (ld_current_col + 2 < N) buffer[ld_current_row][ld_current_col + 2] <= mem_rdata[23:16];
                    if (ld_current_col + 3 < N) buffer[ld_current_row][ld_current_col + 3] <= mem_rdata[31:24];

                    words_loaded <= words_loaded + 1;
                    ld_addr <= ld_addr + 1;
                    ld_col_count <= ld_col_count - 1;

                    // Update column position
                    ld_current_col <= ld_current_col + 4;

                    if (ld_col_count <= 1) begin
                        // Done with this row
                        ld_state <= LD_NEXT_ROW;
                    end else begin
                        ld_state <= LD_REQUEST;
                    end
                end

                LD_NEXT_ROW: begin
                    ld_row_count <= ld_row_count - 1;
                    ld_current_row <= ld_current_row + 1;
                    ld_current_col <= 3'd0;

                    if (ld_row_count <= 1) begin
                        // All rows done
                        ld_state <= LD_DONE;
                    end else begin
                        // Move to next row
                        ld_row_base <= ld_row_base + ld_row_stride;
                        ld_addr <= ld_row_base + ld_row_stride;
                        ld_col_count <= (ld_total_cols + 3) >> 2;
                        ld_state <= LD_REQUEST;
                    end
                end

                LD_DONE: begin
                    buffer_valid <= 1'b1;
                    ld_state <= LD_IDLE;
                end

                default: ld_state <= LD_IDLE;
            endcase
        end
    end

    // Streaming and skew logic
    integer i, j;
    always @(posedge clk) begin
        if (reset) begin
            streaming <= 1'b0;
            stream_cycle <= 4'd0;
            stream_col <= 4'd0;
            // Clear skew registers
            for (i = 0; i < N; i = i + 1) begin
                for (j = 0; j < N - 1; j = j + 1) begin
                    skew_regs[i][j] <= 8'sd0;
                end
            end
        end else begin
            if (stream_enable && buffer_valid && !streaming) begin
                // Start streaming
                streaming <= 1'b1;
                stream_cycle <= 4'd0;
                stream_col <= 4'd0;
            end else if (streaming) begin
                // Advance stream
                stream_cycle <= stream_cycle + 1;

                // Update per-row column index (each row starts outputting at different times)
                if (stream_cycle < N - 1) begin
                    stream_col <= stream_cycle + 1;
                end else if (stream_col < N - 1) begin
                    stream_col <= stream_col + 1;
                end

                // Shift skew registers for each row
                for (i = 1; i < N; i = i + 1) begin
                    // First stage gets new data from buffer
                    if (stream_cycle >= i - 1 && stream_cycle < i + N - 1) begin
                        skew_regs[i][0] <= buffer[i][stream_cycle - i + 1];
                    end else begin
                        skew_regs[i][0] <= 8'sd0;
                    end

                    // Shift through delay stages
                    for (j = 1; j < i; j = j + 1) begin
                        skew_regs[i][j] <= skew_regs[i][j-1];
                    end
                end

                // Check if done streaming
                if (stream_cycle >= 2*N - 2) begin
                    streaming <= 1'b0;
                    buffer_valid <= 1'b0;  // Buffer consumed
                end
            end
        end
    end

    // Initialize buffer to zero
    integer r, c;
    initial begin
        for (r = 0; r < N; r = r + 1) begin
            for (c = 0; c < N; c = c + 1) begin
                buffer[r][c] = 8'sd0;
            end
        end
    end

endmodule

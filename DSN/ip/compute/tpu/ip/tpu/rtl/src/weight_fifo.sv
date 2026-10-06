`default_nettype none
`timescale 1ns/1ns

// WEIGHT FIFO
// > Double-buffered weight storage for continuous systolic array operation
// > Buffer A drains to systolic array while Buffer B prefetches from unified buffer
// > Seamless switching enables zero-stall weight streaming
//
// Architecture:
// ┌────────────────────────────────────────────────────┐
// │  Unified Buffer                                    │
// │       │                                            │
// │       ▼ (prefetch)                                 │
// │  ┌─────────┐    ┌─────────┐                       │
// │  │Buffer A │◄──►│Buffer B │  (ping-pong)          │
// │  └────┬────┘    └────┬────┘                       │
// │       │              │                             │
// │       └──────┬───────┘                            │
// │              ▼                                     │
// │     Systolic Array (N weights per cycle)          │
// └────────────────────────────────────────────────────┘
//
// Operation:
// 1. Host triggers prefetch of next weight tile
// 2. FIFO streams from active buffer to systolic array
// 3. When active buffer empties, swap to prefetched buffer
// 4. Repeat for continuous operation

module weight_fifo #(
    parameter N = 8,                        // Systolic array dimension
    parameter DATA_WIDTH = 8,               // INT8 weights
    parameter TILE_SIZE = 8,                // NxN tile of weights
    parameter BUFFER_DEPTH = 64             // 8x8 = 64 weights per buffer
) (
    input wire clk,
    input wire reset,

    // Memory interface (to unified buffer)
    output reg                      mem_req,
    output reg [13:0]               mem_addr,       // 14-bit unified buffer address
    input wire [31:0]               mem_rdata,      // 32-bit word (4 INT8 weights)
    input wire                      mem_valid,
    output wire                     mem_busy,

    // Prefetch control
    input wire                      prefetch_start,
    input wire [13:0]               prefetch_base_addr,  // Starting address in unified buffer
    input wire [7:0]                prefetch_rows,       // Number of rows to prefetch (1-8)
    output wire                     prefetch_done,
    output wire                     prefetch_busy,

    // Systolic array interface
    input wire                      drain_enable,   // Enable draining to systolic array
    input wire                      drain_row_done, // Current row done, advance to next
    output wire signed [DATA_WIDTH-1:0] weight_out [N-1:0],  // N weights for current row
    output wire [N-1:0]             weight_row_select,       // One-hot row selector
    output wire                     weight_valid,
    output wire                     buffer_empty,
    output wire                     buffer_ready,   // Active buffer has data ready

    // Status
    output wire [1:0]               active_buffer,  // Which buffer is active (0=A, 1=B)
    output wire [5:0]               fill_level_a,
    output wire [5:0]               fill_level_b
);

    // Double buffer storage
    // Each buffer holds one complete NxN weight tile
    // Organized as N rows of N weights each
    reg signed [DATA_WIDTH-1:0] buffer_a [0:N-1][0:N-1];
    reg signed [DATA_WIDTH-1:0] buffer_b [0:N-1][0:N-1];

    // Buffer state
    reg active_buf;                     // 0=A active, 1=B active
    reg [2:0] drain_row;                // Current row being drained (0 to N-1)
    reg buffer_a_valid;                 // Buffer A has valid data
    reg buffer_b_valid;                 // Buffer B has valid data
    reg [5:0] words_in_a;               // Words loaded into buffer A
    reg [5:0] words_in_b;               // Words loaded into buffer B

    // Prefetch state machine
    localparam PF_IDLE = 3'b000;
    localparam PF_REQUEST = 3'b001;
    localparam PF_WAIT = 3'b010;
    localparam PF_STORE = 3'b011;
    localparam PF_DONE = 3'b100;

    reg [2:0] pf_state;
    reg [13:0] pf_addr;
    reg [5:0] pf_word_count;            // Words prefetched (4 weights per word)
    reg [5:0] pf_total_words;           // Total words to prefetch
    reg pf_target_buffer;               // Which buffer to prefetch into (opposite of active)

    // Prefetch word position tracking
    reg [2:0] pf_row;                   // Current row being filled
    reg [2:0] pf_col;                   // Current column position (advances by 4 per word)

    // Output assignments
    assign active_buffer = {1'b0, active_buf};
    assign fill_level_a = words_in_a;
    assign fill_level_b = words_in_b;
    assign buffer_empty = (active_buf == 0) ? !buffer_a_valid : !buffer_b_valid;
    assign buffer_ready = (active_buf == 0) ? buffer_a_valid : buffer_b_valid;
    assign prefetch_done = (pf_state == PF_DONE);
    assign prefetch_busy = (pf_state != PF_IDLE) && (pf_state != PF_DONE);
    assign mem_busy = prefetch_busy;

    // Weight output multiplexing
    // Output N weights from current row of active buffer
    genvar i;
    generate
        for (i = 0; i < N; i = i + 1) begin : weight_output
            assign weight_out[i] = (active_buf == 0) ? buffer_a[drain_row][i] : buffer_b[drain_row][i];
        end
    endgenerate

    // Row select one-hot encoding
    assign weight_row_select = (drain_enable && buffer_ready) ? (8'b1 << drain_row) : 8'b0;
    assign weight_valid = drain_enable && buffer_ready;

    // Prefetch state machine
    always @(posedge clk) begin
        if (reset) begin
            pf_state <= PF_IDLE;
            pf_addr <= 14'd0;
            pf_word_count <= 6'd0;
            pf_total_words <= 6'd0;
            pf_target_buffer <= 1'b0;
            pf_row <= 3'd0;
            pf_col <= 3'd0;
            mem_req <= 1'b0;
            mem_addr <= 14'd0;
        end else begin
            case (pf_state)
                PF_IDLE: begin
                    mem_req <= 1'b0;
                    if (prefetch_start) begin
                        pf_addr <= prefetch_base_addr;
                        // Each row needs N/4 words (N weights, 4 per word)
                        // Total words = rows * (N/4) = rows * 2 for N=8
                        pf_total_words <= prefetch_rows * (N >> 2);
                        pf_word_count <= 6'd0;
                        pf_target_buffer <= ~active_buf;  // Prefetch to inactive buffer
                        pf_row <= 3'd0;
                        pf_col <= 3'd0;
                        pf_state <= PF_REQUEST;
                    end
                end

                PF_REQUEST: begin
                    mem_req <= 1'b1;
                    mem_addr <= pf_addr;
                    pf_state <= PF_WAIT;
                end

                PF_WAIT: begin
                    mem_req <= 1'b0;
                    if (mem_valid) begin
                        pf_state <= PF_STORE;
                    end
                end

                PF_STORE: begin
                    // Store 4 weights from 32-bit word into buffer
                    // mem_rdata[7:0] = weight[col], mem_rdata[15:8] = weight[col+1], etc.
                    if (pf_target_buffer == 0) begin
                        buffer_a[pf_row][pf_col]   <= mem_rdata[7:0];
                        buffer_a[pf_row][pf_col+1] <= mem_rdata[15:8];
                        buffer_a[pf_row][pf_col+2] <= mem_rdata[23:16];
                        buffer_a[pf_row][pf_col+3] <= mem_rdata[31:24];
                    end else begin
                        buffer_b[pf_row][pf_col]   <= mem_rdata[7:0];
                        buffer_b[pf_row][pf_col+1] <= mem_rdata[15:8];
                        buffer_b[pf_row][pf_col+2] <= mem_rdata[23:16];
                        buffer_b[pf_row][pf_col+3] <= mem_rdata[31:24];
                    end

                    // Advance position
                    pf_word_count <= pf_word_count + 1;
                    pf_addr <= pf_addr + 1;

                    // Update column, wrap to next row
                    if (pf_col + 4 >= N) begin
                        pf_col <= 3'd0;
                        pf_row <= pf_row + 1;
                    end else begin
                        pf_col <= pf_col + 4;
                    end

                    // Check if done
                    if (pf_word_count + 1 >= pf_total_words) begin
                        pf_state <= PF_DONE;
                    end else begin
                        pf_state <= PF_REQUEST;
                    end
                end

                PF_DONE: begin
                    // Mark target buffer as valid
                    if (pf_target_buffer == 0) begin
                        buffer_a_valid <= 1'b1;
                        words_in_a <= pf_word_count;
                    end else begin
                        buffer_b_valid <= 1'b1;
                        words_in_b <= pf_word_count;
                    end
                    pf_state <= PF_IDLE;
                end

                default: pf_state <= PF_IDLE;
            endcase
        end
    end

    // Drain logic - stream weights to systolic array
    always @(posedge clk) begin
        if (reset) begin
            active_buf <= 1'b0;
            drain_row <= 3'd0;
            buffer_a_valid <= 1'b0;
            buffer_b_valid <= 1'b0;
            words_in_a <= 6'd0;
            words_in_b <= 6'd0;
        end else begin
            if (drain_enable && buffer_ready) begin
                if (drain_row_done) begin
                    if (drain_row >= N - 1) begin
                        // Finished draining current buffer
                        drain_row <= 3'd0;
                        // Invalidate current buffer
                        if (active_buf == 0) begin
                            buffer_a_valid <= 1'b0;
                            words_in_a <= 6'd0;
                        end else begin
                            buffer_b_valid <= 1'b0;
                            words_in_b <= 6'd0;
                        end
                        // Swap to other buffer if it's ready
                        if ((active_buf == 0 && buffer_b_valid) ||
                            (active_buf == 1 && buffer_a_valid)) begin
                            active_buf <= ~active_buf;
                        end
                    end else begin
                        drain_row <= drain_row + 1;
                    end
                end
            end
        end
    end

    // Initialize buffers to zero (for simulation)
    integer r, c;
    initial begin
        for (r = 0; r < N; r = r + 1) begin
            for (c = 0; c < N; c = c + 1) begin
                buffer_a[r][c] = 8'd0;
                buffer_b[r][c] = 8'd0;
            end
        end
    end

endmodule

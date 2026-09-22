`default_nettype none
`timescale 1ns/1ns

// TPU SOFTMAX UNIT
// > Multi-pass softmax implementation for numerical stability
// > Uses max-subtraction trick: softmax(x) = exp(x - max(x)) / sum(exp(x - max(x)))
//
// Algorithm (4 passes over data):
//   Pass 1: Find maximum value (streaming)
//   Pass 2: Subtract max, compute exp via LUT (streaming)
//   Pass 3: Sum all exponentials (streaming)
//   Pass 4: Divide each exp by sum (streaming output)
//
// Memory Interface:
//   - Reads input vector from buffer
//   - Writes intermediate exp values to scratch buffer
//   - Writes final softmax output to destination

module softmax_unit #(
    parameter N = 8,                    // Vector elements processed per cycle
    parameter DATA_WIDTH = 8,           // INT8 data
    parameter ACC_WIDTH = 32,           // Accumulator width for sum
    parameter ADDR_WIDTH = 14,          // Buffer address width
    parameter MAX_VECTOR_LEN = 256      // Maximum softmax vector length
) (
    input wire clk,
    input wire reset,

    // Control interface
    input wire                          start,
    input wire [15:0]                   vector_length,  // Number of elements
    output reg                          busy,
    output reg                          done,

    // Memory read interface
    output reg                          mem_read_req,
    output reg [ADDR_WIDTH-1:0]         mem_read_addr,
    input wire [N*DATA_WIDTH-1:0]       mem_read_data,
    input wire                          mem_read_valid,

    // Memory write interface
    output reg                          mem_write_req,
    output reg [ADDR_WIDTH-1:0]         mem_write_addr,
    output reg [N*DATA_WIDTH-1:0]       mem_write_data,
    input wire                          mem_write_ack,

    // Address configuration
    input wire [ADDR_WIDTH-1:0]         input_addr,     // Input vector base address
    input wire [ADDR_WIDTH-1:0]         scratch_addr,   // Scratch buffer for exp values
    input wire [ADDR_WIDTH-1:0]         output_addr,    // Output vector base address

    // Debug
    output wire [3:0]                   debug_state,
    output wire [ACC_WIDTH-1:0]         debug_exp_sum
);

    // State machine states
    localparam IDLE           = 4'b0000;
    localparam FIND_MAX_START = 4'b0001;
    localparam FIND_MAX_READ  = 4'b0010;
    localparam FIND_MAX_WAIT  = 4'b0011;
    localparam COMPUTE_EXP_START = 4'b0100;
    localparam COMPUTE_EXP_READ  = 4'b0101;
    localparam COMPUTE_EXP_WAIT  = 4'b0110;
    localparam COMPUTE_EXP_WRITE = 4'b0111;
    localparam SUM_EXP_START  = 4'b1000;
    localparam SUM_EXP_READ   = 4'b1001;
    localparam SUM_EXP_WAIT   = 4'b1010;
    localparam DIVIDE_START   = 4'b1011;
    localparam DIVIDE_READ    = 4'b1100;
    localparam DIVIDE_WAIT    = 4'b1101;
    localparam DIVIDE_WRITE   = 4'b1110;
    localparam SOFTMAX_DONE   = 4'b1111;

    reg [3:0] state;
    assign debug_state = state;

    // Processing registers
    reg signed [DATA_WIDTH-1:0] max_value;
    reg [ACC_WIDTH-1:0] exp_sum;
    assign debug_exp_sum = exp_sum;

    reg [15:0] element_counter;
    reg [15:0] total_elements;
    reg [ADDR_WIDTH-1:0] current_read_addr;
    reg [ADDR_WIDTH-1:0] current_write_addr;

    // Exp LUT (256 entries)
    // Input: INT8 [-128, 127] representing (x - max) which is always <= 0
    // Output: exp(x) scaled to fit in 8 bits, Q4.4 format
    // Since x - max <= 0, exp(x - max) is in range (0, 1]
    reg [DATA_WIDTH-1:0] exp_lut [0:255];

    // Reciprocal LUT for division (256 entries)
    // Input: sum >> shift to get 8-bit index
    // Output: 1/sum in Q0.8 format
    reg [DATA_WIDTH-1:0] recip_lut [0:255];

    // Initialize LUTs
    integer i;
    initial begin
        // Exp LUT: exp(x) for x in [-8, 0] mapped to [-128, 127]
        // Output scaled to [0, 255] where 255 = exp(0) = 1
        for (i = 0; i < 256; i = i + 1) begin
            // Map index to x value: x = (i - 128) / 16, range [-8, 8]
            // But for softmax, we only care about negative values (x - max)
            if (i >= 128) begin
                // x >= 0: exp(x) >= 1, clamp to max
                exp_lut[i] = 8'd255;
            end else if (i >= 112) begin
                // -1 <= x < 0: exp in [0.37, 1]
                exp_lut[i] = 128 + ((i - 112) << 3);
            end else if (i >= 96) begin
                // -2 <= x < -1: exp in [0.14, 0.37]
                exp_lut[i] = 48 + ((i - 96) * 5);
            end else if (i >= 80) begin
                // -3 <= x < -2: exp in [0.05, 0.14]
                exp_lut[i] = 16 + ((i - 80) << 1);
            end else if (i >= 64) begin
                // -4 <= x < -3: exp in [0.02, 0.05]
                exp_lut[i] = 4 + ((i - 64) * 3 >> 2);
            end else begin
                // x < -4: exp ≈ 0
                exp_lut[i] = (i >> 4);
            end
        end

        // Reciprocal LUT: 1/x for x in [1, 256]
        // Output in Q0.8 format (0-255 represents 0-1)
        for (i = 0; i < 256; i = i + 1) begin
            if (i == 0) begin
                recip_lut[i] = 8'd255;  // 1/1 = 1 (max value)
            end else begin
                // 1/(i+1) * 256
                recip_lut[i] = 256 / (i + 1);
            end
        end
    end

    // Data processing registers
    reg [N*DATA_WIDTH-1:0] input_data_reg;
    reg [N*DATA_WIDTH-1:0] exp_data_reg;
    reg [N*DATA_WIDTH-1:0] output_data_reg;

    // Per-lane max finding
    reg signed [DATA_WIDTH-1:0] lane_data [0:N-1];
    reg signed [DATA_WIDTH-1:0] lane_max;

    // Per-lane exp computation
    reg [DATA_WIDTH-1:0] lane_exp [0:N-1];
    reg signed [DATA_WIDTH-1:0] lane_shifted [0:N-1];

    // Sum accumulation
    reg [ACC_WIDTH-1:0] lane_exp_sum;

    // Division
    reg [7:0] recip_index;
    reg [DATA_WIDTH-1:0] recip_value;
    reg [31:0] div_product [0:N-1];  // Wider for proper scaling
    reg [31:0] scaled_result;

    integer lane;

    // Find shift amount for sum normalization
    function [4:0] find_shift;
        input [ACC_WIDTH-1:0] val;
        begin
            if (val[31:24] != 0) find_shift = 24;
            else if (val[23:16] != 0) find_shift = 16;
            else if (val[15:8] != 0) find_shift = 8;
            else find_shift = 0;
        end
    endfunction

    reg [4:0] sum_shift;

    // Main state machine
    always @(posedge clk) begin
        if (reset) begin
            state <= IDLE;
            busy <= 1'b0;
            done <= 1'b0;
            mem_read_req <= 1'b0;
            mem_write_req <= 1'b0;
            mem_read_addr <= {ADDR_WIDTH{1'b0}};
            mem_write_addr <= {ADDR_WIDTH{1'b0}};
            mem_write_data <= {(N*DATA_WIDTH){1'b0}};
            max_value <= -8'sd128;
            exp_sum <= {ACC_WIDTH{1'b0}};
            element_counter <= 16'd0;
            total_elements <= 16'd0;
            current_read_addr <= {ADDR_WIDTH{1'b0}};
            current_write_addr <= {ADDR_WIDTH{1'b0}};
            sum_shift <= 5'd0;
        end else begin
            // Default pulse signals
            done <= 1'b0;

            case (state)
                IDLE: begin
                    if (start) begin
                        busy <= 1'b1;
                        total_elements <= vector_length;
                        max_value <= -8'sd128;
                        exp_sum <= {ACC_WIDTH{1'b0}};
                        state <= FIND_MAX_START;
                    end
                end

                // ========== PASS 1: Find Maximum ==========
                FIND_MAX_START: begin
                    element_counter <= 16'd0;
                    current_read_addr <= input_addr;
                    state <= FIND_MAX_READ;
                end

                FIND_MAX_READ: begin
                    if (element_counter < total_elements) begin
                        mem_read_req <= 1'b1;
                        mem_read_addr <= current_read_addr;
                        state <= FIND_MAX_WAIT;
                    end else begin
                        // Done finding max
                        state <= COMPUTE_EXP_START;
                    end
                end

                FIND_MAX_WAIT: begin
                    mem_read_req <= 1'b0;
                    if (mem_read_valid) begin
                        input_data_reg <= mem_read_data;

                        // Find max across lanes
                        lane_max = max_value;
                        for (lane = 0; lane < N; lane = lane + 1) begin
                            lane_data[lane] = $signed(mem_read_data[lane*DATA_WIDTH +: DATA_WIDTH]);
                            if (lane_data[lane] > lane_max) begin
                                lane_max = lane_data[lane];
                            end
                        end
                        max_value <= lane_max;

                        element_counter <= element_counter + N;
                        current_read_addr <= current_read_addr + (N * DATA_WIDTH / 8);
                        state <= FIND_MAX_READ;
                    end
                end

                // ========== PASS 2: Compute exp(x - max) ==========
                COMPUTE_EXP_START: begin
                    element_counter <= 16'd0;
                    current_read_addr <= input_addr;
                    current_write_addr <= scratch_addr;
                    state <= COMPUTE_EXP_READ;
                end

                COMPUTE_EXP_READ: begin
                    if (element_counter < total_elements) begin
                        mem_read_req <= 1'b1;
                        mem_read_addr <= current_read_addr;
                        state <= COMPUTE_EXP_WAIT;
                    end else begin
                        // Done computing exp
                        state <= SUM_EXP_START;
                    end
                end

                COMPUTE_EXP_WAIT: begin
                    mem_read_req <= 1'b0;
                    if (mem_read_valid) begin
                        // Compute exp(x - max) for each lane
                        for (lane = 0; lane < N; lane = lane + 1) begin
                            lane_shifted[lane] = $signed(mem_read_data[lane*DATA_WIDTH +: DATA_WIDTH]) - max_value;
                            // LUT index: shifted value + 128
                            lane_exp[lane] = exp_lut[lane_shifted[lane] + 128];
                            exp_data_reg[lane*DATA_WIDTH +: DATA_WIDTH] <= lane_exp[lane];
                        end

                        state <= COMPUTE_EXP_WRITE;
                    end
                end

                COMPUTE_EXP_WRITE: begin
                    mem_write_req <= 1'b1;
                    mem_write_addr <= current_write_addr;
                    mem_write_data <= exp_data_reg;

                    if (mem_write_ack) begin
                        mem_write_req <= 1'b0;
                        element_counter <= element_counter + N;
                        current_read_addr <= current_read_addr + (N * DATA_WIDTH / 8);
                        current_write_addr <= current_write_addr + (N * DATA_WIDTH / 8);
                        state <= COMPUTE_EXP_READ;
                    end
                end

                // ========== PASS 3: Sum exponentials ==========
                SUM_EXP_START: begin
                    element_counter <= 16'd0;
                    current_read_addr <= scratch_addr;
                    exp_sum <= {ACC_WIDTH{1'b0}};
                    state <= SUM_EXP_READ;
                end

                SUM_EXP_READ: begin
                    if (element_counter < total_elements) begin
                        mem_read_req <= 1'b1;
                        mem_read_addr <= current_read_addr;
                        state <= SUM_EXP_WAIT;
                    end else begin
                        // Done summing, compute reciprocal
                        sum_shift <= find_shift(exp_sum);
                        state <= DIVIDE_START;
                    end
                end

                SUM_EXP_WAIT: begin
                    mem_read_req <= 1'b0;
                    if (mem_read_valid) begin
                        // Sum all lanes
                        lane_exp_sum = 0;
                        for (lane = 0; lane < N; lane = lane + 1) begin
                            lane_exp_sum = lane_exp_sum + mem_read_data[lane*DATA_WIDTH +: DATA_WIDTH];
                        end
                        exp_sum <= exp_sum + lane_exp_sum;

                        element_counter <= element_counter + N;
                        current_read_addr <= current_read_addr + (N * DATA_WIDTH / 8);
                        state <= SUM_EXP_READ;
                    end
                end

                // ========== PASS 4: Divide by sum ==========
                DIVIDE_START: begin
                    element_counter <= 16'd0;
                    current_read_addr <= scratch_addr;
                    current_write_addr <= output_addr;

                    // Compute reciprocal index from sum
                    recip_index <= (exp_sum >> sum_shift);
                    recip_value <= recip_lut[(exp_sum >> sum_shift) & 8'hFF];

                    state <= DIVIDE_READ;
                end

                DIVIDE_READ: begin
                    if (element_counter < total_elements) begin
                        mem_read_req <= 1'b1;
                        mem_read_addr <= current_read_addr;
                        state <= DIVIDE_WAIT;
                    end else begin
                        // Done
                        state <= SOFTMAX_DONE;
                    end
                end

                DIVIDE_WAIT: begin
                    mem_read_req <= 1'b0;
                    if (mem_read_valid) begin
                        // Divide each exp by sum to get softmax probability
                        // Formula: output = (exp_value * recip_value * 127) >> (8 + sum_shift)
                        // This gives (exp_value / exp_sum) * 127 scaled to 0-127 range
                        for (lane = 0; lane < N; lane = lane + 1) begin
                            div_product[lane] = mem_read_data[lane*DATA_WIDTH +: DATA_WIDTH] * recip_value;
                            // Scale by 127 and shift to get proper probability
                            scaled_result = (div_product[lane] * 127) >> (8 + sum_shift);
                            // Clamp to 0-127 range
                            if (scaled_result > 127)
                                output_data_reg[lane*DATA_WIDTH +: DATA_WIDTH] <= 8'd127;
                            else
                                output_data_reg[lane*DATA_WIDTH +: DATA_WIDTH] <= scaled_result[7:0];
                        end

                        state <= DIVIDE_WRITE;
                    end
                end

                DIVIDE_WRITE: begin
                    mem_write_req <= 1'b1;
                    mem_write_addr <= current_write_addr;
                    mem_write_data <= output_data_reg;

                    if (mem_write_ack) begin
                        mem_write_req <= 1'b0;
                        element_counter <= element_counter + N;
                        current_read_addr <= current_read_addr + (N * DATA_WIDTH / 8);
                        current_write_addr <= current_write_addr + (N * DATA_WIDTH / 8);
                        state <= DIVIDE_READ;
                    end
                end

                SOFTMAX_DONE: begin
                    busy <= 1'b0;
                    done <= 1'b1;
                    state <= IDLE;
                end

                default: state <= IDLE;
            endcase
        end
    end

endmodule

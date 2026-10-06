`default_nettype none
`timescale 1ns/1ns

// TPU LAYER NORMALIZATION UNIT
// > Implements layer normalization: y = gamma * (x - mean) / sqrt(var + eps) + beta
// > Multi-pass implementation for numerical stability
//
// Algorithm (4 passes):
//   Pass 1: Compute mean = sum(x) / N
//   Pass 2: Compute variance = sum((x - mean)^2) / N
//   Pass 3: Compute 1/sqrt(var + eps) via LUT
//   Pass 4: Normalize and apply affine transform
//
// Fixed-point representation:
//   - Input/Output: INT8 Q7.0
//   - Mean: INT16 Q8.8
//   - Variance: INT32 Q16.16
//   - Gamma/Beta: INT8 Q0.7 (scale factors)

module layernorm_unit #(
    parameter N = 8,                    // Elements processed per cycle
    parameter DATA_WIDTH = 8,           // INT8 data
    parameter ACC_WIDTH = 32,           // Accumulator width
    parameter ADDR_WIDTH = 14,          // Buffer address width
    parameter MAX_NORM_LEN = 512        // Maximum normalization length
) (
    input wire clk,
    input wire reset,

    // Control interface
    input wire                          start,
    input wire [15:0]                   norm_length,    // Number of elements to normalize
    output reg                          busy,
    output reg                          done,

    // Gamma/Beta parameters (broadcast to all elements)
    input wire signed [DATA_WIDTH-1:0]  gamma,          // Scale parameter
    input wire signed [DATA_WIDTH-1:0]  beta,           // Shift parameter

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
    input wire [ADDR_WIDTH-1:0]         input_addr,
    input wire [ADDR_WIDTH-1:0]         output_addr,

    // Debug
    output wire [3:0]                   debug_state,
    output wire signed [15:0]           debug_mean,
    output wire [31:0]                  debug_variance
);

    // State machine
    localparam IDLE            = 4'b0000;
    localparam MEAN_START      = 4'b0001;
    localparam MEAN_READ       = 4'b0010;
    localparam MEAN_WAIT       = 4'b0011;
    localparam MEAN_COMPUTE    = 4'b0100;
    localparam VAR_START       = 4'b0101;
    localparam VAR_READ        = 4'b0110;
    localparam VAR_WAIT        = 4'b0111;
    localparam VAR_COMPUTE     = 4'b1000;
    localparam NORM_START      = 4'b1001;
    localparam NORM_READ       = 4'b1010;
    localparam NORM_WAIT       = 4'b1011;
    localparam NORM_WRITE      = 4'b1100;
    localparam LAYERNORM_DONE  = 4'b1101;

    reg [3:0] state;
    assign debug_state = state;

    // Statistics registers
    reg signed [ACC_WIDTH-1:0] sum;           // Sum for mean
    reg signed [15:0] mean;                   // Q8.8 mean
    reg [ACC_WIDTH-1:0] var_sum;              // Sum of squared differences
    reg [31:0] variance;                      // Q16.16 variance
    reg [15:0] inv_std;                       // 1/sqrt(var + eps), Q0.16

    assign debug_mean = mean;
    assign debug_variance = variance;

    // Processing counters
    reg [15:0] element_counter;
    reg [15:0] total_elements;
    reg [ADDR_WIDTH-1:0] current_read_addr;
    reg [ADDR_WIDTH-1:0] current_write_addr;

    // Inverse square root LUT (256 entries)
    // Input: variance >> shift to get 8-bit index
    // Output: 1/sqrt(var) in Q0.8 format
    reg [7:0] inv_sqrt_lut [0:255];

    // Initialize LUT
    integer i;
    initial begin
        // inv_sqrt(x) for x in [1, 256]
        // Using approximation: inv_sqrt(x) ≈ 1.5 * r - 0.5 * x * r^3 (Newton's method seed)
        for (i = 0; i < 256; i = i + 1) begin
            if (i == 0) begin
                inv_sqrt_lut[i] = 8'd255;  // 1/sqrt(small) = large
            end else if (i < 4) begin
                inv_sqrt_lut[i] = 255 - (i << 4);
            end else if (i < 16) begin
                inv_sqrt_lut[i] = 192 - (i << 2);
            end else if (i < 64) begin
                inv_sqrt_lut[i] = 128 - (i >> 1);
            end else if (i < 128) begin
                inv_sqrt_lut[i] = 96 - (i >> 2);
            end else begin
                inv_sqrt_lut[i] = 64 - (i >> 3);
            end
        end
    end

    // Per-lane data registers
    reg signed [DATA_WIDTH-1:0] lane_data [0:N-1];
    reg signed [15:0] lane_diff [0:N-1];      // x - mean
    reg signed [31:0] lane_diff_sq [0:N-1];   // (x - mean)^2
    reg signed [31:0] lane_normalized [0:N-1]; // (x - mean) * inv_std
    reg signed [31:0] lane_scaled [0:N-1];    // gamma * normalized
    reg signed [15:0] lane_output [0:N-1];    // + beta

    // Intermediate sums
    reg signed [ACC_WIDTH-1:0] lane_sum;
    reg [ACC_WIDTH-1:0] lane_var_sum;

    integer lane;

    // Epsilon for numerical stability (in variance units)
    localparam [15:0] EPSILON = 16'd256;  // Small constant

    // Find shift for variance normalization
    function [4:0] find_var_shift;
        input [31:0] val;
        begin
            if (val[31:24] != 0) find_var_shift = 24;
            else if (val[23:16] != 0) find_var_shift = 16;
            else if (val[15:8] != 0) find_var_shift = 8;
            else find_var_shift = 0;
        end
    endfunction

    reg [4:0] var_shift;

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
            sum <= {ACC_WIDTH{1'b0}};
            mean <= 16'sd0;
            var_sum <= {ACC_WIDTH{1'b0}};
            variance <= 32'd0;
            inv_std <= 16'd0;
            element_counter <= 16'd0;
            total_elements <= 16'd0;
            var_shift <= 5'd0;
        end else begin
            done <= 1'b0;

            case (state)
                IDLE: begin
                    if (start) begin
                        busy <= 1'b1;
                        total_elements <= norm_length;
                        sum <= {ACC_WIDTH{1'b0}};
                        var_sum <= {ACC_WIDTH{1'b0}};
                        state <= MEAN_START;
                    end
                end

                // ========== PASS 1: Compute Mean ==========
                MEAN_START: begin
                    element_counter <= 16'd0;
                    current_read_addr <= input_addr;
                    sum <= {ACC_WIDTH{1'b0}};
                    state <= MEAN_READ;
                end

                MEAN_READ: begin
                    if (element_counter < total_elements) begin
                        mem_read_req <= 1'b1;
                        mem_read_addr <= current_read_addr;
                        state <= MEAN_WAIT;
                    end else begin
                        state <= MEAN_COMPUTE;
                    end
                end

                MEAN_WAIT: begin
                    mem_read_req <= 1'b0;
                    if (mem_read_valid) begin
                        // Sum all lanes
                        lane_sum = 0;
                        for (lane = 0; lane < N; lane = lane + 1) begin
                            lane_data[lane] = $signed(mem_read_data[lane*DATA_WIDTH +: DATA_WIDTH]);
                            lane_sum = lane_sum + {{24{lane_data[lane][DATA_WIDTH-1]}}, lane_data[lane]};
                        end
                        sum <= sum + lane_sum;

                        element_counter <= element_counter + N;
                        current_read_addr <= current_read_addr + (N * DATA_WIDTH / 8);
                        state <= MEAN_READ;
                    end
                end

                MEAN_COMPUTE: begin
                    // mean = sum / total_elements (Q8.8)
                    // Shift sum left by 8 for fractional precision, then divide
                    mean <= (sum << 8) / $signed({16'd0, total_elements});
                    state <= VAR_START;
                end

                // ========== PASS 2: Compute Variance ==========
                VAR_START: begin
                    element_counter <= 16'd0;
                    current_read_addr <= input_addr;
                    var_sum <= {ACC_WIDTH{1'b0}};
                    state <= VAR_READ;
                end

                VAR_READ: begin
                    if (element_counter < total_elements) begin
                        mem_read_req <= 1'b1;
                        mem_read_addr <= current_read_addr;
                        state <= VAR_WAIT;
                    end else begin
                        state <= VAR_COMPUTE;
                    end
                end

                VAR_WAIT: begin
                    mem_read_req <= 1'b0;
                    if (mem_read_valid) begin
                        // Compute (x - mean)^2 for each lane
                        lane_var_sum = 0;
                        for (lane = 0; lane < N; lane = lane + 1) begin
                            // x in Q8.0, mean in Q8.8, so shift x left by 8
                            lane_data[lane] = $signed(mem_read_data[lane*DATA_WIDTH +: DATA_WIDTH]);
                            lane_diff[lane] = ($signed(lane_data[lane]) << 8) - mean;
                            // Square: Q8.8 * Q8.8 = Q16.16, but we'll accumulate in Q16.16
                            lane_diff_sq[lane] = (lane_diff[lane] * lane_diff[lane]) >> 8;  // Keep Q16.8
                            lane_var_sum = lane_var_sum + lane_diff_sq[lane][ACC_WIDTH-1:0];
                        end
                        var_sum <= var_sum + lane_var_sum;

                        element_counter <= element_counter + N;
                        current_read_addr <= current_read_addr + (N * DATA_WIDTH / 8);
                        state <= VAR_READ;
                    end
                end

                VAR_COMPUTE: begin
                    // variance = var_sum / total_elements + epsilon
                    variance <= (var_sum / {16'd0, total_elements}) + {16'd0, EPSILON};

                    // Find shift for LUT indexing
                    var_shift <= find_var_shift(var_sum / {16'd0, total_elements});

                    // Compute inv_std from LUT
                    inv_std <= {8'd0, inv_sqrt_lut[(var_sum / {16'd0, total_elements}) >> var_shift]};

                    state <= NORM_START;
                end

                // ========== PASS 3 & 4: Normalize and Transform ==========
                NORM_START: begin
                    element_counter <= 16'd0;
                    current_read_addr <= input_addr;
                    current_write_addr <= output_addr;
                    state <= NORM_READ;
                end

                NORM_READ: begin
                    if (element_counter < total_elements) begin
                        mem_read_req <= 1'b1;
                        mem_read_addr <= current_read_addr;
                        state <= NORM_WAIT;
                    end else begin
                        state <= LAYERNORM_DONE;
                    end
                end

                NORM_WAIT: begin
                    mem_read_req <= 1'b0;
                    if (mem_read_valid) begin
                        // Normalize and apply affine transform for each lane
                        for (lane = 0; lane < N; lane = lane + 1) begin
                            // (x - mean) in Q8.8
                            lane_data[lane] = $signed(mem_read_data[lane*DATA_WIDTH +: DATA_WIDTH]);
                            lane_diff[lane] = ($signed(lane_data[lane]) << 8) - mean;

                            // (x - mean) * inv_std, adjust for var_shift
                            // inv_std is Q0.8 scaled by (1 << var_shift/2)
                            lane_normalized[lane] = (lane_diff[lane] * $signed({16'd0, inv_std})) >>> (8 + (var_shift >> 1));

                            // gamma * normalized (gamma is Q0.7, normalized is Q8.8)
                            lane_scaled[lane] = (lane_normalized[lane] * $signed({{24{gamma[DATA_WIDTH-1]}}, gamma})) >>> 7;

                            // + beta (beta is Q0.7 -> scale to Q8.8)
                            lane_output[lane] = lane_scaled[lane][15:0] + ($signed(beta) << 1);

                            // Saturate to INT8 range and store
                            if (lane_output[lane] > 16'sd127 << 8)
                                mem_write_data[lane*DATA_WIDTH +: DATA_WIDTH] <= 8'sd127;
                            else if (lane_output[lane] < -16'sd128 << 8)
                                mem_write_data[lane*DATA_WIDTH +: DATA_WIDTH] <= -8'sd128;
                            else
                                mem_write_data[lane*DATA_WIDTH +: DATA_WIDTH] <= lane_output[lane][15:8];
                        end

                        state <= NORM_WRITE;
                    end
                end

                NORM_WRITE: begin
                    mem_write_req <= 1'b1;
                    mem_write_addr <= current_write_addr;

                    if (mem_write_ack) begin
                        mem_write_req <= 1'b0;
                        element_counter <= element_counter + N;
                        current_read_addr <= current_read_addr + (N * DATA_WIDTH / 8);
                        current_write_addr <= current_write_addr + (N * DATA_WIDTH / 8);
                        state <= NORM_READ;
                    end
                end

                LAYERNORM_DONE: begin
                    busy <= 1'b0;
                    done <= 1'b1;
                    state <= IDLE;
                end

                default: state <= IDLE;
            endcase
        end
    end

endmodule


// RMS Normalization Unit (simpler variant used in modern transformers)
// RMSNorm(x) = x / sqrt(mean(x^2) + eps) * gamma
module rmsnorm_unit #(
    parameter N = 8,
    parameter DATA_WIDTH = 8,
    parameter ACC_WIDTH = 32,
    parameter ADDR_WIDTH = 14
) (
    input wire clk,
    input wire reset,

    input wire                          start,
    input wire [15:0]                   norm_length,
    output reg                          busy,
    output reg                          done,

    input wire signed [DATA_WIDTH-1:0]  gamma,

    output reg                          mem_read_req,
    output reg [ADDR_WIDTH-1:0]         mem_read_addr,
    input wire [N*DATA_WIDTH-1:0]       mem_read_data,
    input wire                          mem_read_valid,

    output reg                          mem_write_req,
    output reg [ADDR_WIDTH-1:0]         mem_write_addr,
    output reg [N*DATA_WIDTH-1:0]       mem_write_data,
    input wire                          mem_write_ack,

    input wire [ADDR_WIDTH-1:0]         input_addr,
    input wire [ADDR_WIDTH-1:0]         output_addr
);

    // State machine
    localparam IDLE = 3'd0;
    localparam RMS_START = 3'd1;
    localparam RMS_READ = 3'd2;
    localparam RMS_WAIT = 3'd3;
    localparam RMS_COMPUTE = 3'd4;
    localparam NORM_START = 3'd5;
    localparam NORM_READ = 3'd6;
    localparam NORM_WAIT = 3'd7;

    reg [2:0] state;
    reg [2:0] next_state;

    reg [ACC_WIDTH-1:0] sq_sum;
    reg [15:0] inv_rms;
    reg [15:0] element_counter;
    reg [15:0] total_elements;
    reg [ADDR_WIDTH-1:0] current_read_addr;
    reg [ADDR_WIDTH-1:0] current_write_addr;

    // Inverse sqrt LUT
    reg [7:0] inv_sqrt_lut [0:255];

    integer i;
    initial begin
        for (i = 0; i < 256; i = i + 1) begin
            if (i == 0) inv_sqrt_lut[i] = 8'd255;
            else if (i < 4) inv_sqrt_lut[i] = 255 - (i << 4);
            else if (i < 16) inv_sqrt_lut[i] = 192 - (i << 2);
            else if (i < 64) inv_sqrt_lut[i] = 128 - (i >> 1);
            else if (i < 128) inv_sqrt_lut[i] = 96 - (i >> 2);
            else inv_sqrt_lut[i] = 64 - (i >> 3);
        end
    end

    reg signed [DATA_WIDTH-1:0] lane_data [0:N-1];
    reg signed [15:0] lane_sq [0:N-1];
    reg signed [31:0] lane_norm [0:N-1];
    reg [ACC_WIDTH-1:0] lane_sq_sum;
    reg [4:0] rms_shift;

    integer lane;

    always @(posedge clk) begin
        if (reset) begin
            state <= IDLE;
            busy <= 1'b0;
            done <= 1'b0;
            mem_read_req <= 1'b0;
            mem_write_req <= 1'b0;
            sq_sum <= 0;
            inv_rms <= 0;
        end else begin
            done <= 1'b0;

            case (state)
                IDLE: begin
                    if (start) begin
                        busy <= 1'b1;
                        total_elements <= norm_length;
                        sq_sum <= 0;
                        state <= RMS_START;
                    end
                end

                RMS_START: begin
                    element_counter <= 0;
                    current_read_addr <= input_addr;
                    state <= RMS_READ;
                end

                RMS_READ: begin
                    if (element_counter < total_elements) begin
                        mem_read_req <= 1'b1;
                        mem_read_addr <= current_read_addr;
                        state <= RMS_WAIT;
                    end else begin
                        state <= RMS_COMPUTE;
                    end
                end

                RMS_WAIT: begin
                    mem_read_req <= 1'b0;
                    if (mem_read_valid) begin
                        lane_sq_sum = 0;
                        for (lane = 0; lane < N; lane = lane + 1) begin
                            lane_data[lane] = $signed(mem_read_data[lane*DATA_WIDTH +: DATA_WIDTH]);
                            lane_sq[lane] = lane_data[lane] * lane_data[lane];
                            lane_sq_sum = lane_sq_sum + {16'd0, lane_sq[lane]};
                        end
                        sq_sum <= sq_sum + lane_sq_sum;
                        element_counter <= element_counter + N;
                        current_read_addr <= current_read_addr + N;
                        state <= RMS_READ;
                    end
                end

                RMS_COMPUTE: begin
                    // mean_sq = sq_sum / total_elements
                    // inv_rms = 1 / sqrt(mean_sq + eps)
                    rms_shift <= (sq_sum / {16'd0, total_elements}) > 32'hFFFF ? 5'd16 : 5'd8;
                    inv_rms <= {8'd0, inv_sqrt_lut[(sq_sum / {16'd0, total_elements}) >> 8]};
                    state <= NORM_START;
                end

                NORM_START: begin
                    element_counter <= 0;
                    current_read_addr <= input_addr;
                    current_write_addr <= output_addr;
                    state <= NORM_READ;
                end

                NORM_READ: begin
                    if (element_counter < total_elements) begin
                        mem_read_req <= 1'b1;
                        mem_read_addr <= current_read_addr;
                        state <= NORM_WAIT;
                    end else begin
                        busy <= 1'b0;
                        done <= 1'b1;
                        state <= IDLE;
                    end
                end

                NORM_WAIT: begin
                    mem_read_req <= 1'b0;
                    if (mem_read_valid) begin
                        for (lane = 0; lane < N; lane = lane + 1) begin
                            lane_data[lane] = $signed(mem_read_data[lane*DATA_WIDTH +: DATA_WIDTH]);
                            lane_norm[lane] = (lane_data[lane] * $signed({16'd0, inv_rms}) * $signed({{24{gamma[7]}}, gamma})) >>> 15;

                            if (lane_norm[lane] > 127)
                                mem_write_data[lane*DATA_WIDTH +: DATA_WIDTH] <= 8'sd127;
                            else if (lane_norm[lane] < -128)
                                mem_write_data[lane*DATA_WIDTH +: DATA_WIDTH] <= -8'sd128;
                            else
                                mem_write_data[lane*DATA_WIDTH +: DATA_WIDTH] <= lane_norm[lane][7:0];
                        end

                        mem_write_req <= 1'b1;
                        mem_write_addr <= current_write_addr;

                        if (mem_write_ack) begin
                            mem_write_req <= 1'b0;
                            element_counter <= element_counter + N;
                            current_read_addr <= current_read_addr + N;
                            current_write_addr <= current_write_addr + N;
                            state <= NORM_READ;
                        end
                    end
                end

                default: state <= IDLE;
            endcase
        end
    end

endmodule

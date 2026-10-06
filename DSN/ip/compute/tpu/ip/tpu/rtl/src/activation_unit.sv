`default_nettype none
`timescale 1ns/1ns

// TPU ACTIVATION UNIT
// > Implements ReLU, GELU, SiLU/Swish activation functions
// > LUT-based implementation for non-linear functions
// > Processes N elements per cycle (parallel activation)
//
// Supported Functions:
//   func_sel=0: ReLU    - max(0, x)
//   func_sel=1: GELU    - 0.5 * x * (1 + tanh(sqrt(2/pi) * (x + 0.044715*x^3)))
//   func_sel=2: SiLU    - x * sigmoid(x)
//   func_sel=3: Sigmoid - 1 / (1 + exp(-x))
//   func_sel=4: Tanh    - (exp(x) - exp(-x)) / (exp(x) + exp(-x))
//
// GELU and SiLU use piecewise linear approximation with 8 segments

module activation_unit #(
    parameter N = 8,                    // Number of parallel lanes
    parameter DATA_WIDTH = 8,           // Input/output width (INT8)
    parameter LUT_ADDR_WIDTH = 8        // 256-entry LUTs
) (
    input wire clk,
    input wire reset,

    // Control interface
    input wire                          enable,         // Start processing
    input wire [2:0]                    func_sel,       // Function select
    output reg                          busy,           // Processing in progress
    output reg                          done,           // Processing complete

    // Data interface (N parallel lanes)
    input wire [N*DATA_WIDTH-1:0]       data_in,        // Packed input data
    input wire                          data_in_valid,
    output reg [N*DATA_WIDTH-1:0]       data_out,       // Packed output data
    output reg                          data_out_valid,

    // Debug
    output wire [3:0]                   debug_state
);

    // Function constants
    localparam FUNC_RELU    = 3'd0;
    localparam FUNC_GELU    = 3'd1;
    localparam FUNC_SILU    = 3'd2;
    localparam FUNC_SIGMOID = 3'd3;
    localparam FUNC_TANH    = 3'd4;

    // State machine
    localparam IDLE     = 2'b00;
    localparam COMPUTE  = 2'b01;
    localparam OUTPUT   = 2'b10;

    reg [1:0] state;
    assign debug_state = {2'b00, state};

    // Internal registers for each lane
    reg signed [DATA_WIDTH-1:0] input_regs [0:N-1];
    reg signed [DATA_WIDTH-1:0] output_regs [0:N-1];

    // Sigmoid LUT (256 entries, Q0.7 format for values 0-1)
    // Input is INT8 [-128, 127], output is INT8 [0, 127] representing [0, 1)
    // sigmoid(x) for x in [-8, 8] mapped to input range
    reg [DATA_WIDTH-1:0] sigmoid_lut [0:255];

    // Tanh LUT (256 entries, Q0.7 format for values -1 to 1)
    // Input is INT8 [-128, 127], output is INT8 [-127, 127] representing [-1, 1)
    reg signed [DATA_WIDTH-1:0] tanh_lut [0:255];

    // GELU approximation coefficients (piecewise linear, 8 segments)
    // Using approximation: GELU(x) ≈ 0.5 * x * (1 + tanh(0.7978845608 * (x + 0.044715 * x^3)))
    // Simplified to piecewise linear for hardware
    reg signed [DATA_WIDTH-1:0] gelu_lut [0:255];

    // Initialize LUTs
    integer i;
    initial begin
        // Sigmoid LUT: sigmoid(x) = 1 / (1 + exp(-x))
        // Map input [-128, 127] to x in [-8, 8], output [0, 127]
        for (i = 0; i < 256; i = i + 1) begin
            // Piecewise linear approximation
            if (i < 32) begin
                // x < -6: sigmoid ≈ 0
                sigmoid_lut[i] = 8'd0;
            end else if (i < 64) begin
                // -6 <= x < -4: linear rise
                sigmoid_lut[i] = (i - 32) >> 1;
            end else if (i < 96) begin
                // -4 <= x < -2: steeper rise
                sigmoid_lut[i] = 16 + (i - 64);
            end else if (i < 128) begin
                // -2 <= x < 0: steep rise to 0.5
                sigmoid_lut[i] = 48 + ((i - 96) * 3 >> 2);
            end else if (i < 160) begin
                // 0 <= x < 2: steep rise from 0.5
                sigmoid_lut[i] = 64 + ((i - 128) * 3 >> 2);
            end else if (i < 192) begin
                // 2 <= x < 4: steeper rise
                sigmoid_lut[i] = 88 + (i - 160);
            end else if (i < 224) begin
                // 4 <= x < 6: linear approach to 1
                sigmoid_lut[i] = 120 + ((i - 192) >> 1);
            end else begin
                // x >= 6: sigmoid ≈ 1
                sigmoid_lut[i] = 8'd127;
            end
        end

        // Tanh LUT: tanh(x) = (exp(x) - exp(-x)) / (exp(x) + exp(-x))
        // Map input [-128, 127] to x in [-4, 4], output [-127, 127]
        for (i = 0; i < 256; i = i + 1) begin
            if (i < 32) begin
                // x < -3: tanh ≈ -1
                tanh_lut[i] = -8'sd127;
            end else if (i < 64) begin
                // -3 <= x < -2
                tanh_lut[i] = -8'sd127 + $signed((i - 32) << 1);
            end else if (i < 96) begin
                // -2 <= x < -1
                tanh_lut[i] = -8'sd63 + $signed((i - 64) << 1);
            end else if (i < 128) begin
                // -1 <= x < 0
                tanh_lut[i] = $signed((i - 128) << 1);
            end else if (i < 160) begin
                // 0 <= x < 1
                tanh_lut[i] = $signed((i - 128) << 1);
            end else if (i < 192) begin
                // 1 <= x < 2
                tanh_lut[i] = 8'sd63 + $signed((i - 160) << 1);
            end else if (i < 224) begin
                // 2 <= x < 3
                tanh_lut[i] = 8'sd127 - $signed((224 - i) << 1);
            end else begin
                // x >= 3: tanh ≈ 1
                tanh_lut[i] = 8'sd127;
            end
        end

        // GELU LUT: GELU(x) ≈ x * sigmoid(1.702 * x)
        // Simplified piecewise approximation
        for (i = 0; i < 256; i = i + 1) begin
            if (i < 64) begin
                // x < -2: GELU ≈ 0
                gelu_lut[i] = 8'd0;
            end else if (i < 96) begin
                // -2 <= x < -1: slight negative region
                gelu_lut[i] = $signed(i - 80) >>> 2;
            end else if (i < 128) begin
                // -1 <= x < 0: transition
                gelu_lut[i] = $signed(i - 128) >>> 1;
            end else if (i < 160) begin
                // 0 <= x < 1: linear-ish
                gelu_lut[i] = (i - 128);
            end else if (i < 192) begin
                // 1 <= x < 2
                gelu_lut[i] = 32 + ((i - 160) * 3 >> 1);
            end else begin
                // x >= 2: approximately linear with slope 1
                gelu_lut[i] = 80 + (i - 192);
            end
        end
    end

    // Lane processing - combinational logic for each activation function
    reg signed [DATA_WIDTH-1:0] relu_result [0:N-1];
    reg signed [DATA_WIDTH-1:0] gelu_result [0:N-1];
    reg signed [DATA_WIDTH-1:0] silu_result [0:N-1];
    reg [DATA_WIDTH-1:0] sigmoid_result [0:N-1];
    reg signed [DATA_WIDTH-1:0] tanh_result [0:N-1];

    // Intermediate calculation registers
    reg signed [15:0] silu_product [0:N-1];  // For x * sigmoid(x)

    integer lane;

    // Combinational activation computation
    always @(*) begin
        for (lane = 0; lane < N; lane = lane + 1) begin
            // ReLU: max(0, x)
            if (input_regs[lane] < 0)
                relu_result[lane] = 0;
            else
                relu_result[lane] = input_regs[lane];

            // Sigmoid lookup (convert signed to unsigned index)
            sigmoid_result[lane] = sigmoid_lut[input_regs[lane] + 128];

            // Tanh lookup
            tanh_result[lane] = tanh_lut[input_regs[lane] + 128];

            // GELU lookup
            gelu_result[lane] = gelu_lut[input_regs[lane] + 128];

            // SiLU: x * sigmoid(x)
            // Scale: input is Q7.0, sigmoid is Q0.7, product is Q7.7
            // Need to shift right by 7 to get Q7.0 result
            silu_product[lane] = $signed(input_regs[lane]) * $signed({1'b0, sigmoid_result[lane]});
            silu_result[lane] = silu_product[lane][14:7];  // Take upper 8 bits
        end
    end

    // Main state machine
    always @(posedge clk) begin
        if (reset) begin
            state <= IDLE;
            busy <= 1'b0;
            done <= 1'b0;
            data_out <= {(N*DATA_WIDTH){1'b0}};
            data_out_valid <= 1'b0;

            for (lane = 0; lane < N; lane = lane + 1) begin
                input_regs[lane] <= {DATA_WIDTH{1'b0}};
                output_regs[lane] <= {DATA_WIDTH{1'b0}};
            end
        end else begin
            // Default
            done <= 1'b0;
            data_out_valid <= 1'b0;

            case (state)
                IDLE: begin
                    if (enable && data_in_valid) begin
                        busy <= 1'b1;

                        // Latch input data
                        for (lane = 0; lane < N; lane = lane + 1) begin
                            input_regs[lane] <= data_in[lane*DATA_WIDTH +: DATA_WIDTH];
                        end

                        state <= COMPUTE;
                    end
                end

                COMPUTE: begin
                    // Apply selected activation function
                    for (lane = 0; lane < N; lane = lane + 1) begin
                        case (func_sel)
                            FUNC_RELU:    output_regs[lane] <= relu_result[lane];
                            FUNC_GELU:    output_regs[lane] <= gelu_result[lane];
                            FUNC_SILU:    output_regs[lane] <= silu_result[lane];
                            FUNC_SIGMOID: output_regs[lane] <= $signed(sigmoid_result[lane]);
                            FUNC_TANH:    output_regs[lane] <= tanh_result[lane];
                            default:      output_regs[lane] <= input_regs[lane];  // Pass-through
                        endcase
                    end

                    state <= OUTPUT;
                end

                OUTPUT: begin
                    // Pack output data
                    for (lane = 0; lane < N; lane = lane + 1) begin
                        data_out[lane*DATA_WIDTH +: DATA_WIDTH] <= output_regs[lane];
                    end

                    data_out_valid <= 1'b1;
                    done <= 1'b1;
                    busy <= 1'b0;
                    state <= IDLE;
                end

                default: state <= IDLE;
            endcase
        end
    end

endmodule


// Streaming activation wrapper for accumulator output
module activation_stream #(
    parameter N = 8,
    parameter DATA_WIDTH = 8
) (
    input wire clk,
    input wire reset,

    // Control
    input wire                          start,
    input wire [2:0]                    func_sel,
    input wire [7:0]                    num_elements,   // Total elements to process
    output reg                          busy,
    output reg                          done,

    // Input stream (from accumulator/quantizer)
    input wire [N*DATA_WIDTH-1:0]       stream_in,
    input wire                          stream_in_valid,
    output reg                          stream_in_ready,

    // Output stream (to memory)
    output reg [N*DATA_WIDTH-1:0]       stream_out,
    output reg                          stream_out_valid,
    input wire                          stream_out_ready
);

    // Internal activation unit
    wire act_busy, act_done;
    wire [N*DATA_WIDTH-1:0] act_data_out;
    wire act_data_out_valid;

    reg act_enable;
    reg [7:0] elements_processed;

    activation_unit #(
        .N(N),
        .DATA_WIDTH(DATA_WIDTH)
    ) act_core (
        .clk(clk),
        .reset(reset),
        .enable(act_enable),
        .func_sel(func_sel),
        .busy(act_busy),
        .done(act_done),
        .data_in(stream_in),
        .data_in_valid(stream_in_valid),
        .data_out(act_data_out),
        .data_out_valid(act_data_out_valid),
        .debug_state()
    );

    // State machine
    localparam IDLE = 2'b00;
    localparam PROCESS = 2'b01;
    localparam WAIT_OUT = 2'b10;

    reg [1:0] state;

    always @(posedge clk) begin
        if (reset) begin
            state <= IDLE;
            busy <= 1'b0;
            done <= 1'b0;
            act_enable <= 1'b0;
            stream_in_ready <= 1'b0;
            stream_out <= {(N*DATA_WIDTH){1'b0}};
            stream_out_valid <= 1'b0;
            elements_processed <= 8'd0;
        end else begin
            // Defaults
            act_enable <= 1'b0;
            done <= 1'b0;

            case (state)
                IDLE: begin
                    if (start) begin
                        busy <= 1'b1;
                        elements_processed <= 8'd0;
                        stream_in_ready <= 1'b1;
                        state <= PROCESS;
                    end
                end

                PROCESS: begin
                    if (stream_in_valid && stream_in_ready) begin
                        act_enable <= 1'b1;
                        stream_in_ready <= 1'b0;
                    end

                    if (act_done) begin
                        stream_out <= act_data_out;
                        stream_out_valid <= 1'b1;
                        state <= WAIT_OUT;
                    end
                end

                WAIT_OUT: begin
                    if (stream_out_ready) begin
                        stream_out_valid <= 1'b0;
                        elements_processed <= elements_processed + N;

                        if (elements_processed + N >= num_elements) begin
                            busy <= 1'b0;
                            done <= 1'b1;
                            stream_in_ready <= 1'b0;
                            state <= IDLE;
                        end else begin
                            stream_in_ready <= 1'b1;
                            state <= PROCESS;
                        end
                    end
                end

                default: state <= IDLE;
            endcase
        end
    end

endmodule

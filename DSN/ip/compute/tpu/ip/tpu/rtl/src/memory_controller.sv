`default_nettype none
`timescale 1ns/1ns

// MEMORY CONTROLLER
// > Arbitrates memory access between multiple consumers
// > Adapted from tiny-gpu controller.sv pattern
// > Round-robin priority with valid/ready handshaking
//
// Consumers (4):
//   0: Host interface - setup and result retrieval
//   1: Weight FIFO - prefetch weights for systolic array
//   2: Activation FIFO - prefetch activations for systolic array
//   3: Accumulator buffer - write back results
//
// State Machine (per channel):
//   IDLE → READ_WAITING → READ_RELAYING → IDLE
//        → WRITE_WAITING → WRITE_RELAYING → IDLE
//
// Features:
// - Multi-channel support for concurrent access
// - Fair round-robin arbitration prevents starvation
// - Backpressure handling via valid/ready protocol

module memory_controller #(
    parameter ADDR_WIDTH = 14,              // Unified buffer address width
    parameter DATA_WIDTH = 32,              // Data bus width
    parameter NUM_CONSUMERS = 4,            // Host, weight FIFO, activation FIFO, accumulator
    parameter NUM_CHANNELS = 2              // Concurrent memory access channels
) (
    input wire clk,
    input wire reset,

    // Consumer Interface
    // Read requests
    input wire [NUM_CONSUMERS-1:0]          consumer_read_valid,
    input wire [ADDR_WIDTH-1:0]             consumer_read_address [NUM_CONSUMERS-1:0],
    output reg [NUM_CONSUMERS-1:0]          consumer_read_ready,
    output reg [DATA_WIDTH-1:0]             consumer_read_data [NUM_CONSUMERS-1:0],

    // Write requests
    input wire [NUM_CONSUMERS-1:0]          consumer_write_valid,
    input wire [ADDR_WIDTH-1:0]             consumer_write_address [NUM_CONSUMERS-1:0],
    input wire [DATA_WIDTH-1:0]             consumer_write_data [NUM_CONSUMERS-1:0],
    output reg [NUM_CONSUMERS-1:0]          consumer_write_ready,

    // Memory Interface (to unified buffer)
    // Channel 0 - typically for reads
    output reg                              mem_ch0_en,
    output reg                              mem_ch0_we,
    output reg [ADDR_WIDTH-1:0]             mem_ch0_addr,
    output reg [DATA_WIDTH-1:0]             mem_ch0_wdata,
    input wire [DATA_WIDTH-1:0]             mem_ch0_rdata,
    input wire                              mem_ch0_valid,

    // Channel 1 - typically for writes or additional reads
    output reg                              mem_ch1_en,
    output reg                              mem_ch1_we,
    output reg [ADDR_WIDTH-1:0]             mem_ch1_addr,
    output reg [DATA_WIDTH-1:0]             mem_ch1_wdata,
    input wire [DATA_WIDTH-1:0]             mem_ch1_rdata,
    input wire                              mem_ch1_valid,

    // Status and debug
    output wire                             busy,
    output wire [NUM_CONSUMERS-1:0]         consumer_pending,
    output wire [2:0]                       debug_state_ch0,
    output wire [2:0]                       debug_state_ch1
);

    // State machine states
    localparam IDLE = 3'b000;
    localparam READ_WAITING = 3'b001;
    localparam READ_RELAYING = 3'b010;
    localparam WRITE_WAITING = 3'b011;
    localparam WRITE_RELAYING = 3'b100;

    // Per-channel state
    reg [2:0] channel_state [0:NUM_CHANNELS-1];
    reg [$clog2(NUM_CONSUMERS)-1:0] current_consumer [0:NUM_CHANNELS-1];

    // Track which consumers are being served (prevent double-scheduling)
    reg [NUM_CONSUMERS-1:0] consumer_being_served;

    // Round-robin priority tracking
    reg [$clog2(NUM_CONSUMERS)-1:0] rr_priority;

    // Output assignments
    assign busy = (channel_state[0] != IDLE) || (channel_state[1] != IDLE);
    assign consumer_pending = (consumer_read_valid | consumer_write_valid) & ~consumer_being_served;
    assign debug_state_ch0 = channel_state[0];
    assign debug_state_ch1 = channel_state[1];

    // Helper function to find next consumer with pending request
    function automatic [$clog2(NUM_CONSUMERS):0] find_next_consumer;
        input [$clog2(NUM_CONSUMERS)-1:0] start;
        input [NUM_CONSUMERS-1:0] read_valid;
        input [NUM_CONSUMERS-1:0] write_valid;
        input [NUM_CONSUMERS-1:0] being_served;
        integer k;
        reg [$clog2(NUM_CONSUMERS)-1:0] idx;
        begin
            find_next_consumer = {1'b0, {$clog2(NUM_CONSUMERS){1'b0}}}; // Invalid by default
            for (k = 0; k < NUM_CONSUMERS; k = k + 1) begin
                idx = (start + k) % NUM_CONSUMERS;
                if ((read_valid[idx] || write_valid[idx]) && !being_served[idx]) begin
                    find_next_consumer = {1'b1, idx}; // Valid flag + consumer index
                    disable find_next_consumer; // SystemVerilog named block exit
                end
            end
        end
    endfunction

    // Channel 0 state machine
    always @(posedge clk) begin
        if (reset) begin
            channel_state[0] <= IDLE;
            current_consumer[0] <= 0;
            mem_ch0_en <= 1'b0;
            mem_ch0_we <= 1'b0;
            mem_ch0_addr <= {ADDR_WIDTH{1'b0}};
            mem_ch0_wdata <= {DATA_WIDTH{1'b0}};
        end else begin
            case (channel_state[0])
                IDLE: begin
                    mem_ch0_en <= 1'b0;
                    mem_ch0_we <= 1'b0;

                    // Look for pending requests using round-robin
                    begin
                        reg [$clog2(NUM_CONSUMERS):0] next;
                        integer j;
                        for (j = 0; j < NUM_CONSUMERS; j = j + 1) begin
                            reg [$clog2(NUM_CONSUMERS)-1:0] idx;
                            idx = (rr_priority + j) % NUM_CONSUMERS;

                            if (consumer_read_valid[idx] && !consumer_being_served[idx]) begin
                                consumer_being_served[idx] <= 1'b1;
                                current_consumer[0] <= idx;

                                mem_ch0_en <= 1'b1;
                                mem_ch0_we <= 1'b0;
                                mem_ch0_addr <= consumer_read_address[idx];
                                channel_state[0] <= READ_WAITING;

                                // Update round-robin priority
                                rr_priority <= (idx + 1) % NUM_CONSUMERS;
                                j = NUM_CONSUMERS; // Break
                            end else if (consumer_write_valid[idx] && !consumer_being_served[idx]) begin
                                consumer_being_served[idx] <= 1'b1;
                                current_consumer[0] <= idx;

                                mem_ch0_en <= 1'b1;
                                mem_ch0_we <= 1'b1;
                                mem_ch0_addr <= consumer_write_address[idx];
                                mem_ch0_wdata <= consumer_write_data[idx];
                                channel_state[0] <= WRITE_WAITING;

                                // Update round-robin priority
                                rr_priority <= (idx + 1) % NUM_CONSUMERS;
                                j = NUM_CONSUMERS; // Break
                            end
                        end
                    end
                end

                READ_WAITING: begin
                    // Wait for memory response
                    if (mem_ch0_valid) begin
                        mem_ch0_en <= 1'b0;
                        consumer_read_ready[current_consumer[0]] <= 1'b1;
                        consumer_read_data[current_consumer[0]] <= mem_ch0_rdata;
                        channel_state[0] <= READ_RELAYING;
                    end
                end

                WRITE_WAITING: begin
                    // Wait for write acknowledgment (single cycle for SRAM)
                    mem_ch0_en <= 1'b0;
                    mem_ch0_we <= 1'b0;
                    consumer_write_ready[current_consumer[0]] <= 1'b1;
                    channel_state[0] <= WRITE_RELAYING;
                end

                READ_RELAYING: begin
                    // Wait for consumer to deassert request
                    if (!consumer_read_valid[current_consumer[0]]) begin
                        consumer_being_served[current_consumer[0]] <= 1'b0;
                        consumer_read_ready[current_consumer[0]] <= 1'b0;
                        channel_state[0] <= IDLE;
                    end
                end

                WRITE_RELAYING: begin
                    // Wait for consumer to deassert request
                    if (!consumer_write_valid[current_consumer[0]]) begin
                        consumer_being_served[current_consumer[0]] <= 1'b0;
                        consumer_write_ready[current_consumer[0]] <= 1'b0;
                        channel_state[0] <= IDLE;
                    end
                end

                default: channel_state[0] <= IDLE;
            endcase
        end
    end

    // Channel 1 state machine (similar to channel 0, starts from different priority)
    always @(posedge clk) begin
        if (reset) begin
            channel_state[1] <= IDLE;
            current_consumer[1] <= 0;
            mem_ch1_en <= 1'b0;
            mem_ch1_we <= 1'b0;
            mem_ch1_addr <= {ADDR_WIDTH{1'b0}};
            mem_ch1_wdata <= {DATA_WIDTH{1'b0}};
        end else begin
            case (channel_state[1])
                IDLE: begin
                    mem_ch1_en <= 1'b0;
                    mem_ch1_we <= 1'b0;

                    // Look for pending requests (start from opposite end for fairness)
                    begin
                        integer j;
                        for (j = 0; j < NUM_CONSUMERS; j = j + 1) begin
                            reg [$clog2(NUM_CONSUMERS)-1:0] idx;
                            // Start from opposite direction for channel 1
                            idx = (rr_priority + NUM_CONSUMERS/2 + j) % NUM_CONSUMERS;

                            if (consumer_read_valid[idx] && !consumer_being_served[idx]) begin
                                consumer_being_served[idx] <= 1'b1;
                                current_consumer[1] <= idx;

                                mem_ch1_en <= 1'b1;
                                mem_ch1_we <= 1'b0;
                                mem_ch1_addr <= consumer_read_address[idx];
                                channel_state[1] <= READ_WAITING;
                                j = NUM_CONSUMERS; // Break
                            end else if (consumer_write_valid[idx] && !consumer_being_served[idx]) begin
                                consumer_being_served[idx] <= 1'b1;
                                current_consumer[1] <= idx;

                                mem_ch1_en <= 1'b1;
                                mem_ch1_we <= 1'b1;
                                mem_ch1_addr <= consumer_write_address[idx];
                                mem_ch1_wdata <= consumer_write_data[idx];
                                channel_state[1] <= WRITE_WAITING;
                                j = NUM_CONSUMERS; // Break
                            end
                        end
                    end
                end

                READ_WAITING: begin
                    if (mem_ch1_valid) begin
                        mem_ch1_en <= 1'b0;
                        consumer_read_ready[current_consumer[1]] <= 1'b1;
                        consumer_read_data[current_consumer[1]] <= mem_ch1_rdata;
                        channel_state[1] <= READ_RELAYING;
                    end
                end

                WRITE_WAITING: begin
                    mem_ch1_en <= 1'b0;
                    mem_ch1_we <= 1'b0;
                    consumer_write_ready[current_consumer[1]] <= 1'b1;
                    channel_state[1] <= WRITE_RELAYING;
                end

                READ_RELAYING: begin
                    if (!consumer_read_valid[current_consumer[1]]) begin
                        consumer_being_served[current_consumer[1]] <= 1'b0;
                        consumer_read_ready[current_consumer[1]] <= 1'b0;
                        channel_state[1] <= IDLE;
                    end
                end

                WRITE_RELAYING: begin
                    if (!consumer_write_valid[current_consumer[1]]) begin
                        consumer_being_served[current_consumer[1]] <= 1'b0;
                        consumer_write_ready[current_consumer[1]] <= 1'b0;
                        channel_state[1] <= IDLE;
                    end
                end

                default: channel_state[1] <= IDLE;
            endcase
        end
    end

    // Initialize consumer outputs
    integer init_i;
    initial begin
        for (init_i = 0; init_i < NUM_CONSUMERS; init_i = init_i + 1) begin
            consumer_read_ready[init_i] = 1'b0;
            consumer_read_data[init_i] = {DATA_WIDTH{1'b0}};
            consumer_write_ready[init_i] = 1'b0;
        end
        consumer_being_served = {NUM_CONSUMERS{1'b0}};
        rr_priority = 0;
    end

endmodule

// Simplified single-channel memory controller
module memory_controller_simple #(
    parameter ADDR_WIDTH = 14,
    parameter DATA_WIDTH = 32,
    parameter NUM_CONSUMERS = 4
) (
    input wire clk,
    input wire reset,

    // Consumer read interface
    input wire [NUM_CONSUMERS-1:0]      consumer_req,
    input wire [NUM_CONSUMERS-1:0]      consumer_we,
    input wire [ADDR_WIDTH-1:0]         consumer_addr [NUM_CONSUMERS-1:0],
    input wire [DATA_WIDTH-1:0]         consumer_wdata [NUM_CONSUMERS-1:0],
    output reg [NUM_CONSUMERS-1:0]      consumer_ack,
    output reg [DATA_WIDTH-1:0]         consumer_rdata,

    // Memory interface
    output reg                          mem_en,
    output reg                          mem_we,
    output reg [ADDR_WIDTH-1:0]         mem_addr,
    output reg [DATA_WIDTH-1:0]         mem_wdata,
    input wire [DATA_WIDTH-1:0]         mem_rdata,
    input wire                          mem_valid
);

    localparam IDLE = 2'b00;
    localparam WAIT = 2'b01;
    localparam ACK = 2'b10;

    reg [1:0] state;
    reg [$clog2(NUM_CONSUMERS)-1:0] current;
    reg [$clog2(NUM_CONSUMERS)-1:0] priority_ptr;

    always @(posedge clk) begin
        if (reset) begin
            state <= IDLE;
            current <= 0;
            priority_ptr <= 0;
            mem_en <= 1'b0;
            mem_we <= 1'b0;
            mem_addr <= {ADDR_WIDTH{1'b0}};
            mem_wdata <= {DATA_WIDTH{1'b0}};
            consumer_ack <= {NUM_CONSUMERS{1'b0}};
            consumer_rdata <= {DATA_WIDTH{1'b0}};
        end else begin
            case (state)
                IDLE: begin
                    consumer_ack <= {NUM_CONSUMERS{1'b0}};
                    begin
                        integer i;
                        for (i = 0; i < NUM_CONSUMERS; i = i + 1) begin
                            reg [$clog2(NUM_CONSUMERS)-1:0] idx;
                            idx = (priority_ptr + i) % NUM_CONSUMERS;
                            if (consumer_req[idx]) begin
                                current <= idx;
                                mem_en <= 1'b1;
                                mem_we <= consumer_we[idx];
                                mem_addr <= consumer_addr[idx];
                                mem_wdata <= consumer_wdata[idx];
                                priority_ptr <= (idx + 1) % NUM_CONSUMERS;
                                state <= WAIT;
                                i = NUM_CONSUMERS;
                            end
                        end
                    end
                end

                WAIT: begin
                    if (mem_valid || mem_we) begin
                        mem_en <= 1'b0;
                        mem_we <= 1'b0;
                        consumer_rdata <= mem_rdata;
                        consumer_ack[current] <= 1'b1;
                        state <= ACK;
                    end
                end

                ACK: begin
                    if (!consumer_req[current]) begin
                        consumer_ack[current] <= 1'b0;
                        state <= IDLE;
                    end
                end

                default: state <= IDLE;
            endcase
        end
    end

endmodule

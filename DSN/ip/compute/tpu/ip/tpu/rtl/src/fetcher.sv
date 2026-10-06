`default_nettype none
`timescale 1ns/1ns

// TPU INSTRUCTION FETCHER
// > Fetches instructions from program memory based on program counter (PC)
// > Supports sequential execution and branch/loop jumps
// > Interfaces with unified buffer or dedicated instruction memory
//
// State Machine:
//   IDLE     - Waiting for fetch request
//   REQUEST  - Send read request to memory
//   WAIT     - Wait for memory response
//   FETCHED  - Instruction ready for decode

module fetcher #(
    parameter ADDR_WIDTH = 14,              // Address width for instruction memory
    parameter INSTR_WIDTH = 32,             // 32-bit instructions
    parameter MAX_PROGRAM_SIZE = 256        // Maximum program size in instructions
) (
    input wire clk,
    input wire reset,

    // Control interface
    input wire                      fetch_enable,       // Start fetch
    input wire                      branch_taken,       // Branch occurred
    input wire [ADDR_WIDTH-1:0]     branch_target,      // Branch target address
    input wire                      halt,               // Halt execution

    // Program counter interface
    output reg [ADDR_WIDTH-1:0]     pc,                 // Current program counter
    output reg [ADDR_WIDTH-1:0]     next_pc,            // Next PC (for sequential)
    input wire [ADDR_WIDTH-1:0]     pc_override,        // External PC override
    input wire                      pc_override_valid,

    // Memory interface (to instruction memory / unified buffer)
    output reg                      mem_req,
    output reg [ADDR_WIDTH-1:0]     mem_addr,
    input wire [INSTR_WIDTH-1:0]    mem_rdata,
    input wire                      mem_valid,

    // Output interface
    output reg [INSTR_WIDTH-1:0]    instruction,        // Fetched instruction
    output reg                      instruction_valid,  // Instruction ready

    // State output
    output reg [2:0]                fetcher_state,

    // Debug
    output wire [ADDR_WIDTH-1:0]    debug_pc,
    output wire                     debug_fetching
);

    // State definitions
    localparam IDLE = 3'b000;
    localparam REQUEST = 3'b001;
    localparam WAIT = 3'b010;
    localparam FETCHED = 3'b011;
    localparam HALTED = 3'b100;

    // Internal state
    reg [2:0] state;
    reg fetch_pending;

    // Debug outputs
    assign debug_pc = pc;
    assign debug_fetching = (state == REQUEST) || (state == WAIT);
    assign fetcher_state = state;

    // Main state machine
    always @(posedge clk) begin
        if (reset) begin
            state <= IDLE;
            pc <= {ADDR_WIDTH{1'b0}};
            next_pc <= {{ADDR_WIDTH-1{1'b0}}, 1'b1};  // Next = PC + 1
            mem_req <= 1'b0;
            mem_addr <= {ADDR_WIDTH{1'b0}};
            instruction <= {INSTR_WIDTH{1'b0}};
            instruction_valid <= 1'b0;
            fetch_pending <= 1'b0;
        end else begin
            case (state)
                IDLE: begin
                    instruction_valid <= 1'b0;
                    mem_req <= 1'b0;

                    if (halt) begin
                        state <= HALTED;
                    end else if (fetch_enable) begin
                        // Handle PC updates
                        if (pc_override_valid) begin
                            pc <= pc_override;
                            next_pc <= pc_override + 1;
                        end else if (branch_taken) begin
                            pc <= branch_target;
                            next_pc <= branch_target + 1;
                        end
                        // If neither override nor branch, PC stays as is (already incremented)

                        state <= REQUEST;
                    end
                end

                REQUEST: begin
                    // Send memory read request
                    mem_req <= 1'b1;
                    mem_addr <= pc;
                    state <= WAIT;
                end

                WAIT: begin
                    mem_req <= 1'b0;  // Deassert after one cycle

                    if (mem_valid) begin
                        // Capture instruction
                        instruction <= mem_rdata;
                        instruction_valid <= 1'b1;
                        state <= FETCHED;

                        // Pre-calculate next sequential PC
                        next_pc <= pc + 1;
                    end
                end

                FETCHED: begin
                    // Instruction is ready, wait for decoder to consume
                    // Auto-advance PC for next fetch
                    if (halt) begin
                        state <= HALTED;
                    end else if (fetch_enable) begin
                        // Start next fetch
                        instruction_valid <= 1'b0;

                        if (pc_override_valid) begin
                            pc <= pc_override;
                            next_pc <= pc_override + 1;
                        end else if (branch_taken) begin
                            pc <= branch_target;
                            next_pc <= branch_target + 1;
                        end else begin
                            pc <= next_pc;  // Sequential execution
                            next_pc <= next_pc + 1;
                        end

                        state <= REQUEST;
                    end else begin
                        // Stay in FETCHED until next fetch requested
                        // But clear valid after one cycle so decoder knows to wait
                        instruction_valid <= 1'b0;
                        state <= IDLE;
                    end
                end

                HALTED: begin
                    // Stay halted until reset
                    instruction_valid <= 1'b0;
                    mem_req <= 1'b0;

                    // Allow restart if halt is deasserted
                    if (!halt && fetch_enable) begin
                        state <= REQUEST;
                    end
                end

                default: state <= IDLE;
            endcase
        end
    end

endmodule

// Instruction memory wrapper (simple ROM for program storage)
module instruction_memory #(
    parameter ADDR_WIDTH = 14,
    parameter DATA_WIDTH = 32,
    parameter DEPTH = 256           // 256 instructions max
) (
    input wire clk,
    input wire reset,

    // Read interface
    input wire                      read_en,
    input wire [ADDR_WIDTH-1:0]     read_addr,
    output reg [DATA_WIDTH-1:0]     read_data,
    output reg                      read_valid,

    // Write interface (for program loading)
    input wire                      write_en,
    input wire [ADDR_WIDTH-1:0]     write_addr,
    input wire [DATA_WIDTH-1:0]     write_data
);

    // Instruction storage
    (* ram_style = "block" *)
    reg [DATA_WIDTH-1:0] mem [0:DEPTH-1];

    // Read logic
    always @(posedge clk) begin
        if (reset) begin
            read_data <= {DATA_WIDTH{1'b0}};
            read_valid <= 1'b0;
        end else begin
            read_valid <= 1'b0;

            if (read_en) begin
                if (read_addr < DEPTH) begin
                    read_data <= mem[read_addr];
                    read_valid <= 1'b1;
                end else begin
                    read_data <= {DATA_WIDTH{1'b0}};  // NOP for out-of-bounds
                    read_valid <= 1'b1;
                end
            end
        end
    end

    // Write logic (for program loading)
    always @(posedge clk) begin
        if (write_en && write_addr < DEPTH) begin
            mem[write_addr] <= write_data;
        end
    end

    // Initialize to NOP
    integer i;
    initial begin
        for (i = 0; i < DEPTH; i = i + 1) begin
            mem[i] = 32'h00000000;  // NOP
        end
    end

endmodule

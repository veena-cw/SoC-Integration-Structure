`default_nettype none
`timescale 1ns/1ns

// UNIFIED BUFFER
// > 64KB dual-port SRAM for TPU data storage
// > Holds activations, weights, and outputs in partitioned address space
// > Port A: Host interface for setup and result retrieval
// > Port B: Systolic array interface for computation
//
// Address Space (64KB = 65536 bytes = 16384 words of 32 bits):
//   0x0000 - 0x13FF: Activations (5KB, 1280 words)
//   0x1400 - 0x2FFF: Weights (7KB, 1792 words)
//   0x3000 - 0x3FFF: Outputs (4KB, 1024 words)
//   0x4000 - 0x4FFF: Scratch space
//
// Features:
// - True dual-port: simultaneous read/write on both ports
// - Byte-addressable with word-aligned access
// - Single-cycle read latency
// - Write-through semantics

module unified_buffer #(
    parameter DEPTH = 16384,                // 64KB / 4 bytes = 16K words
    parameter DATA_WIDTH = 32,              // 32-bit words
    parameter ADDR_WIDTH = 14               // log2(16384) = 14 bits
) (
    input wire clk,
    input wire reset,

    // Port A: Host interface (read/write)
    input wire                      port_a_en,
    input wire                      port_a_we,        // Write enable
    input wire [ADDR_WIDTH-1:0]     port_a_addr,
    input wire [DATA_WIDTH-1:0]     port_a_wdata,
    output reg [DATA_WIDTH-1:0]     port_a_rdata,
    output reg                      port_a_valid,     // Read data valid

    // Port B: Systolic array interface (read/write)
    input wire                      port_b_en,
    input wire                      port_b_we,
    input wire [ADDR_WIDTH-1:0]     port_b_addr,
    input wire [DATA_WIDTH-1:0]     port_b_wdata,
    output reg [DATA_WIDTH-1:0]     port_b_rdata,
    output reg                      port_b_valid,

    // Byte write enables (for partial word writes)
    input wire [3:0]                port_a_byte_en,
    input wire [3:0]                port_b_byte_en,

    // Status signals
    output wire                     busy,
    output wire [ADDR_WIDTH-1:0]    debug_last_addr_a,
    output wire [ADDR_WIDTH-1:0]    debug_last_addr_b
);

    // Memory array - true dual-port SRAM
    // Synthesizers will infer BRAM from this pattern
    (* ram_style = "block" *)
    reg [DATA_WIDTH-1:0] mem [0:DEPTH-1];

    // Address registers for debug
    reg [ADDR_WIDTH-1:0] last_addr_a;
    reg [ADDR_WIDTH-1:0] last_addr_b;

    assign debug_last_addr_a = last_addr_a;
    assign debug_last_addr_b = last_addr_b;
    assign busy = 1'b0;  // SRAM is never busy (single-cycle access)

    // Port A logic
    always @(posedge clk) begin
        if (reset) begin
            port_a_rdata <= {DATA_WIDTH{1'b0}};
            port_a_valid <= 1'b0;
            last_addr_a <= {ADDR_WIDTH{1'b0}};
        end else begin
            port_a_valid <= 1'b0;

            if (port_a_en) begin
                last_addr_a <= port_a_addr;

                if (port_a_we) begin
                    // Write with byte enables
                    if (port_a_byte_en[0]) mem[port_a_addr][7:0]   <= port_a_wdata[7:0];
                    if (port_a_byte_en[1]) mem[port_a_addr][15:8]  <= port_a_wdata[15:8];
                    if (port_a_byte_en[2]) mem[port_a_addr][23:16] <= port_a_wdata[23:16];
                    if (port_a_byte_en[3]) mem[port_a_addr][31:24] <= port_a_wdata[31:24];
                end else begin
                    // Read
                    port_a_rdata <= mem[port_a_addr];
                    port_a_valid <= 1'b1;
                end
            end
        end
    end

    // Port B logic
    always @(posedge clk) begin
        if (reset) begin
            port_b_rdata <= {DATA_WIDTH{1'b0}};
            port_b_valid <= 1'b0;
            last_addr_b <= {ADDR_WIDTH{1'b0}};
        end else begin
            port_b_valid <= 1'b0;

            if (port_b_en) begin
                last_addr_b <= port_b_addr;

                if (port_b_we) begin
                    // Write with byte enables
                    if (port_b_byte_en[0]) mem[port_b_addr][7:0]   <= port_b_wdata[7:0];
                    if (port_b_byte_en[1]) mem[port_b_addr][15:8]  <= port_b_wdata[15:8];
                    if (port_b_byte_en[2]) mem[port_b_addr][23:16] <= port_b_wdata[23:16];
                    if (port_b_byte_en[3]) mem[port_b_addr][31:24] <= port_b_wdata[31:24];
                end else begin
                    // Read
                    port_b_rdata <= mem[port_b_addr];
                    port_b_valid <= 1'b1;
                end
            end
        end
    end

    // Address region constants (exposed as localparams)
    localparam ADDR_ACTIVATION_START = 14'h0000;
    localparam ADDR_ACTIVATION_END   = 14'h13FF;
    localparam ADDR_WEIGHT_START     = 14'h1400;
    localparam ADDR_WEIGHT_END       = 14'h2FFF;
    localparam ADDR_OUTPUT_START     = 14'h3000;
    localparam ADDR_OUTPUT_END       = 14'h3FFF;
    localparam ADDR_SCRATCH_START    = 14'h4000;
    localparam ADDR_SCRATCH_END      = 14'h4FFF;

    // Initialize memory to zero (for simulation)
    integer i;
    initial begin
        for (i = 0; i < DEPTH; i = i + 1) begin
            mem[i] = {DATA_WIDTH{1'b0}};
        end
    end

endmodule

// Helper module: Unified buffer with burst support
// Extends basic buffer with sequential address generation
module unified_buffer_burst #(
    parameter DEPTH = 16384,
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 14,
    parameter BURST_LEN = 8                 // Max burst length
) (
    input wire clk,
    input wire reset,

    // Burst interface (Port A)
    input wire                      burst_start,
    input wire                      burst_write,      // 1=write, 0=read
    input wire [ADDR_WIDTH-1:0]     burst_base_addr,
    input wire [3:0]                burst_len,        // 1-8 words
    input wire [DATA_WIDTH-1:0]     burst_wdata,
    output wire [DATA_WIDTH-1:0]    burst_rdata,
    output wire                     burst_valid,
    output wire                     burst_done,
    input wire                      burst_wdata_valid,

    // Direct access (Port B) - passthrough to underlying buffer
    input wire                      direct_en,
    input wire                      direct_we,
    input wire [ADDR_WIDTH-1:0]     direct_addr,
    input wire [DATA_WIDTH-1:0]     direct_wdata,
    output wire [DATA_WIDTH-1:0]    direct_rdata,
    output wire                     direct_valid
);

    // Burst state machine
    localparam IDLE = 2'b00;
    localparam BURST_READ = 2'b01;
    localparam BURST_WRITE = 2'b10;

    reg [1:0] state;
    reg [3:0] burst_counter;
    reg [ADDR_WIDTH-1:0] current_addr;
    reg burst_active;

    // Internal buffer signals
    wire port_a_en;
    wire port_a_we;
    wire [ADDR_WIDTH-1:0] port_a_addr;
    wire [DATA_WIDTH-1:0] port_a_wdata;
    wire [DATA_WIDTH-1:0] port_a_rdata;
    wire port_a_valid;

    // Connect burst logic to port A
    assign port_a_en = burst_active || burst_start;
    assign port_a_we = (state == BURST_WRITE) && burst_wdata_valid;
    assign port_a_addr = burst_active ? current_addr : burst_base_addr;
    assign port_a_wdata = burst_wdata;
    assign burst_rdata = port_a_rdata;
    assign burst_valid = port_a_valid && (state == BURST_READ);
    assign burst_done = (burst_counter == 0) && burst_active;

    // Burst state machine
    always @(posedge clk) begin
        if (reset) begin
            state <= IDLE;
            burst_counter <= 4'd0;
            current_addr <= {ADDR_WIDTH{1'b0}};
            burst_active <= 1'b0;
        end else begin
            case (state)
                IDLE: begin
                    if (burst_start) begin
                        current_addr <= burst_base_addr;
                        burst_counter <= burst_len;
                        burst_active <= 1'b1;
                        state <= burst_write ? BURST_WRITE : BURST_READ;
                    end
                end

                BURST_READ: begin
                    if (port_a_valid) begin
                        if (burst_counter == 1) begin
                            state <= IDLE;
                            burst_active <= 1'b0;
                        end else begin
                            burst_counter <= burst_counter - 1;
                            current_addr <= current_addr + 1;
                        end
                    end
                end

                BURST_WRITE: begin
                    if (burst_wdata_valid) begin
                        if (burst_counter == 1) begin
                            state <= IDLE;
                            burst_active <= 1'b0;
                        end else begin
                            burst_counter <= burst_counter - 1;
                            current_addr <= current_addr + 1;
                        end
                    end
                end

                default: state <= IDLE;
            endcase
        end
    end

    // Instantiate underlying buffer
    unified_buffer #(
        .DEPTH(DEPTH),
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH)
    ) buffer (
        .clk(clk),
        .reset(reset),

        .port_a_en(port_a_en),
        .port_a_we(port_a_we),
        .port_a_addr(port_a_addr),
        .port_a_wdata(port_a_wdata),
        .port_a_rdata(port_a_rdata),
        .port_a_valid(port_a_valid),
        .port_a_byte_en(4'b1111),

        .port_b_en(direct_en),
        .port_b_we(direct_we),
        .port_b_addr(direct_addr),
        .port_b_wdata(direct_wdata),
        .port_b_rdata(direct_rdata),
        .port_b_valid(direct_valid),
        .port_b_byte_en(4'b1111),

        .busy(),
        .debug_last_addr_a(),
        .debug_last_addr_b()
    );

endmodule

`default_nettype none
`timescale 1ns/1ns

// TPU TOP-LEVEL MODULE
// > Instantiates and connects all TPU components
// > Provides host interface for control and memory access
// > Implements arbitration for shared resources
//
// Architecture:
//   Host Interface -> Instruction Fetcher -> Decoder -> Sequencer
//                                                         |
//                          +-----------------------------+
//                          |
//   Memory Controller <- Weight FIFO <- Systolic Array
//         |                              |
//         +-> Unified Buffer <-----------+
//         |                              |
//         +-> Activation FIFO -----------+
//                                        |
//         Accumulator Buffer <-----------+
//              |
//         Activation Unit -> Softmax/LayerNorm -> Output
//
// Parameters:
//   N          - Systolic array dimension (default 8x8)
//   DATA_WIDTH - Data precision in bits (default 8 for INT8)
//   ACC_WIDTH  - Accumulator precision (default 32 for INT32)
//   ADDR_WIDTH - Memory address width (default 14 for 16K words)
//   MEM_DEPTH  - Unified buffer depth in bytes (default 65536 = 64KB)

module tpu_top #(
    parameter N = 8,
    parameter DATA_WIDTH = 8,
    parameter ACC_WIDTH = 32,
    parameter ADDR_WIDTH = 14,
    parameter MEM_DEPTH = 65536
) (
    input wire clk,
    input wire reset,

    // Host control interface
    input wire                  host_start,
    input wire                  host_stop,
    output wire                 host_busy,
    output wire                 host_done,
    output wire [3:0]           host_state,

    // Host memory interface (for loading program and data)
    input wire                  host_mem_req,
    input wire                  host_mem_write,
    input wire [ADDR_WIDTH-1:0] host_mem_addr,
    input wire [DATA_WIDTH-1:0] host_mem_wdata,
    output wire [DATA_WIDTH-1:0] host_mem_rdata,
    output wire                 host_mem_ready,

    // Instruction memory interface
    input wire                  prog_load_en,
    input wire [ADDR_WIDTH-1:0] prog_load_addr,
    input wire [31:0]           prog_load_data,

    // Debug outputs
    output wire [13:0]          debug_pc,
    output wire [31:0]          debug_cycles,
    output wire [3:0]           debug_seq_state
);

    // =========================================================================
    // Internal signals
    // =========================================================================

    // Fetcher signals
    wire [31:0] instruction;
    wire instruction_valid;
    wire [2:0] fetcher_state;
    wire fetch_enable;
    wire [13:0] fetch_pc;

    // Decoder signals
    wire [7:0] opcode;
    wire [3:0] flags;
    wire [3:0] dst;
    wire [7:0] src1, src2;
    wire decode_enable;
    wire is_memory_op, is_compute_op, is_control_op;
    wire halt_decoded, sync_decoded, loop_decoded, matmul_decoded;

    // Sequencer signals
    wire running, done;
    wire [3:0] seq_state;
    wire pc_branch;
    wire [13:0] pc_branch_target;
    wire loop_check;

    // Memory controller signals
    wire mem_req_a, mem_req_b;
    wire mem_write_a, mem_write_b;
    wire [ADDR_WIDTH-1:0] mem_addr_a, mem_addr_b;
    wire [DATA_WIDTH-1:0] mem_wdata_a, mem_wdata_b;
    wire [DATA_WIDTH-1:0] mem_rdata_a, mem_rdata_b;
    wire mem_ready_a, mem_ready_b;

    // Weight FIFO signals
    wire weight_fifo_req;
    wire [ADDR_WIDTH-1:0] weight_fifo_addr;
    wire [DATA_WIDTH-1:0] weight_fifo_data;
    wire weight_fifo_valid;
    wire weight_fifo_ready;
    wire weight_fifo_empty;

    // Activation FIFO signals
    wire act_fifo_req;
    wire [ADDR_WIDTH-1:0] act_fifo_addr;
    wire [DATA_WIDTH-1:0] act_fifo_data;
    wire act_fifo_valid;
    wire act_fifo_ready;
    wire act_fifo_empty;

    // Systolic array signals
    wire array_enable;
    wire array_weight_load;
    wire array_clear_acc;
    wire signed [DATA_WIDTH-1:0] weight_data [N-1:0];
    wire [N-1:0] weight_row_select;
    wire signed [DATA_WIDTH-1:0] activation_in [N-1:0];
    wire [N-1:0] activation_valid;
    wire signed [ACC_WIDTH-1:0] psum_in [N-1:0];
    wire signed [ACC_WIDTH-1:0] result_out [N-1:0];
    wire [N-1:0] result_valid;

    // Accumulator buffer signals
    wire acc_write_en;
    wire acc_accumulate;
    wire [2:0] acc_row_idx;
    wire signed [ACC_WIDTH-1:0] acc_data_in [N-1:0];
    wire signed [DATA_WIDTH-1:0] acc_quant_out [N-1:0];
    wire acc_output_valid;

    // Activation unit signals
    wire [2:0] act_func_sel;
    wire act_start;
    wire act_busy;
    wire act_done;
    wire [N*DATA_WIDTH-1:0] act_data_in;
    wire [N*DATA_WIDTH-1:0] act_data_out;

    // Matrix controller signals
    wire [3:0] mat_state;
    wire mat_busy, mat_done;
    wire load_busy, load_done;
    wire store_busy, store_done;
    wire compute_busy, compute_done;
    wire matmul_busy, matmul_done;

    // Tiling controller signals
    wire [13:0] tile_m_offset, tile_n_offset, tile_k_offset;
    wire tile_valid;
    wire tiles_done;

    // Loop controller signals
    wire loop_active;
    wire loop_iteration_done;
    wire [13:0] loop_target_pc;

    // =========================================================================
    // Memory arbitration
    // =========================================================================

    // Arbitrate between host, weight FIFO, and activation FIFO for port A
    reg [1:0] arb_grant;
    localparam ARB_HOST = 2'b00;
    localparam ARB_WEIGHT = 2'b01;
    localparam ARB_ACT = 2'b10;

    always @(*) begin
        if (!running && host_mem_req)
            arb_grant = ARB_HOST;
        else if (weight_fifo_req)
            arb_grant = ARB_WEIGHT;
        else if (act_fifo_req)
            arb_grant = ARB_ACT;
        else
            arb_grant = ARB_HOST;  // Default to host
    end

    // Port A multiplexing (for reads)
    assign mem_req_a = (arb_grant == ARB_HOST) ? host_mem_req :
                       (arb_grant == ARB_WEIGHT) ? weight_fifo_req :
                       (arb_grant == ARB_ACT) ? act_fifo_req : 1'b0;

    assign mem_write_a = (arb_grant == ARB_HOST) ? host_mem_write : 1'b0;

    assign mem_addr_a = (arb_grant == ARB_HOST) ? host_mem_addr :
                        (arb_grant == ARB_WEIGHT) ? weight_fifo_addr :
                        (arb_grant == ARB_ACT) ? act_fifo_addr : {ADDR_WIDTH{1'b0}};

    assign mem_wdata_a = host_mem_wdata;
    assign host_mem_rdata = mem_rdata_a;
    assign host_mem_ready = (arb_grant == ARB_HOST) ? mem_ready_a : 1'b0;
    assign weight_fifo_ready = (arb_grant == ARB_WEIGHT) ? mem_ready_a : 1'b0;
    assign act_fifo_ready = (arb_grant == ARB_ACT) ? mem_ready_a : 1'b0;

    // Port B is dedicated for store operations (writes from accumulator)
    wire store_write_en;
    wire [ADDR_WIDTH-1:0] store_addr;
    wire [DATA_WIDTH-1:0] store_data;

    assign mem_req_b = store_write_en;
    assign mem_write_b = store_write_en;
    assign mem_addr_b = store_addr;
    assign mem_wdata_b = store_data;

    // =========================================================================
    // Module instantiations
    // =========================================================================

    // Instruction Fetcher
    fetcher #(
        .ADDR_WIDTH(ADDR_WIDTH)
    ) u_fetcher (
        .clk(clk),
        .reset(reset),
        .enable(fetch_enable),
        .pc_branch(pc_branch),
        .pc_branch_target(pc_branch_target),
        .instruction(instruction),
        .instruction_valid(instruction_valid),
        .current_pc(fetch_pc),
        .state(fetcher_state),
        .prog_load_en(prog_load_en),
        .prog_load_addr(prog_load_addr),
        .prog_load_data(prog_load_data)
    );

    // Instruction Decoder
    decoder u_decoder (
        .clk(clk),
        .reset(reset),
        .enable(decode_enable),
        .instruction(instruction),
        .instruction_valid(instruction_valid),
        .opcode(opcode),
        .flags(flags),
        .dst(dst),
        .src1(src1),
        .src2(src2),
        .is_memory_op(is_memory_op),
        .is_compute_op(is_compute_op),
        .is_control_op(is_control_op),
        .halt_decoded(halt_decoded),
        .sync_decoded(sync_decoded),
        .loop_decoded(loop_decoded),
        .matmul_decoded(matmul_decoded)
    );

    // Sequencer (Master FSM)
    sequencer u_sequencer (
        .clk(clk),
        .reset(reset),
        .start(host_start),
        .stop(host_stop),
        .running(running),
        .done(done),
        .fetch_enable(fetch_enable),
        .fetcher_state(fetcher_state),
        .instruction_valid(instruction_valid),
        .decode_enable(decode_enable),
        .is_memory_op(is_memory_op),
        .is_compute_op(is_compute_op),
        .is_control_op(is_control_op),
        .halt_decoded(halt_decoded),
        .sync_decoded(sync_decoded),
        .loop_decoded(loop_decoded),
        .matmul_decoded(matmul_decoded),
        .load_busy(load_busy),
        .load_done(load_done),
        .store_busy(store_busy),
        .store_done(store_done),
        .compute_busy(compute_busy),
        .compute_done(compute_done),
        .matmul_busy(matmul_busy),
        .matmul_done(matmul_done),
        .loop_check(loop_check),
        .loop_active(loop_active),
        .loop_iteration_done(loop_iteration_done),
        .loop_target_pc(loop_target_pc),
        .pc_branch(pc_branch),
        .pc_branch_target(pc_branch_target),
        .seq_state(seq_state),
        .debug_state(debug_seq_state),
        .debug_cycle_count(debug_cycles)
    );

    // Unified Buffer (Dual-port SRAM)
    unified_buffer #(
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH),
        .MEM_DEPTH(MEM_DEPTH)
    ) u_unified_buffer (
        .clk(clk),
        .reset(reset),
        // Port A (read/write)
        .port_a_req(mem_req_a),
        .port_a_write(mem_write_a),
        .port_a_addr(mem_addr_a),
        .port_a_wdata(mem_wdata_a),
        .port_a_rdata(mem_rdata_a),
        .port_a_ready(mem_ready_a),
        // Port B (write only for stores)
        .port_b_req(mem_req_b),
        .port_b_write(mem_write_b),
        .port_b_addr(mem_addr_b),
        .port_b_wdata(mem_wdata_b),
        .port_b_rdata(mem_rdata_b),
        .port_b_ready(mem_ready_b)
    );

    // Weight FIFO (Double-buffered)
    weight_fifo #(
        .N(N),
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH)
    ) u_weight_fifo (
        .clk(clk),
        .reset(reset),
        .start_load(opcode == 8'h01 && instruction_valid),  // LOAD_W
        .load_addr({src1, src2}),
        .mem_req(weight_fifo_req),
        .mem_addr(weight_fifo_addr),
        .mem_data(mem_rdata_a),
        .mem_ready(weight_fifo_ready),
        .weight_out(weight_data),
        .weight_valid(weight_fifo_valid),
        .load_done(load_done),
        .fifo_empty(weight_fifo_empty)
    );

    // Activation FIFO (Tiled + Skewed)
    activation_fifo #(
        .N(N),
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH)
    ) u_activation_fifo (
        .clk(clk),
        .reset(reset),
        .start_load(opcode == 8'h02 && instruction_valid),  // LOAD_A
        .load_addr({src1, src2}),
        .mem_req(act_fifo_req),
        .mem_addr(act_fifo_addr),
        .mem_data(mem_rdata_a),
        .mem_ready(act_fifo_ready),
        .activation_out(activation_in),
        .activation_valid(activation_valid),
        .load_done(),
        .fifo_empty(act_fifo_empty)
    );

    // Systolic Array
    systolic_array #(
        .N(N),
        .DATA_WIDTH(DATA_WIDTH),
        .ACC_WIDTH(ACC_WIDTH)
    ) u_systolic_array (
        .clk(clk),
        .reset(reset),
        .enable(array_enable),
        .weight_load(array_weight_load),
        .clear_acc(array_clear_acc),
        .weight_data(weight_data),
        .weight_row_select(weight_row_select),
        .activation_in(activation_in),
        .activation_valid(activation_valid),
        .psum_in(psum_in),
        .result_out(result_out),
        .result_valid(result_valid)
    );

    // Connect psum_in to zeros
    generate
        genvar i;
        for (i = 0; i < N; i = i + 1) begin : psum_zero
            assign psum_in[i] = {ACC_WIDTH{1'b0}};
        end
    endgenerate

    // Accumulator Buffer (INT32 storage + quantization)
    accumulator_buffer #(
        .N(N),
        .DATA_WIDTH(DATA_WIDTH),
        .ACC_WIDTH(ACC_WIDTH)
    ) u_accumulator_buffer (
        .clk(clk),
        .reset(reset),
        .write_en(acc_write_en),
        .accumulate(acc_accumulate),
        .row_idx(acc_row_idx),
        .result_in(result_out),
        .result_valid(result_valid),
        .quant_out(acc_quant_out),
        .output_valid(acc_output_valid)
    );

    // Pack accumulator output for activation unit
    generate
        genvar j;
        for (j = 0; j < N; j = j + 1) begin : pack_act
            assign act_data_in[j*DATA_WIDTH +: DATA_WIDTH] = acc_quant_out[j];
        end
    endgenerate

    // Activation Unit (ReLU, GELU, SiLU)
    activation_unit #(
        .N(N),
        .DATA_WIDTH(DATA_WIDTH)
    ) u_activation_unit (
        .clk(clk),
        .reset(reset),
        .func_sel(act_func_sel),
        .start(act_start),
        .data_in(act_data_in),
        .data_out(act_data_out),
        .busy(act_busy),
        .done(act_done)
    );

    // Matrix Controller (orchestrates matmul operations)
    matrix_controller #(
        .N(N),
        .ADDR_WIDTH(ADDR_WIDTH)
    ) u_matrix_controller (
        .clk(clk),
        .reset(reset),
        .start(matmul_decoded && decode_enable),
        .opcode(opcode),
        .src1_addr({src1, src2}),
        .dst_addr({dst, 12'b0}),
        .tile_m_offset(tile_m_offset),
        .tile_n_offset(tile_n_offset),
        .tile_k_offset(tile_k_offset),
        .array_enable(array_enable),
        .weight_load(array_weight_load),
        .clear_acc(array_clear_acc),
        .weight_row_select(weight_row_select),
        .acc_write_en(acc_write_en),
        .acc_accumulate(acc_accumulate),
        .acc_row_idx(acc_row_idx),
        .store_write_en(store_write_en),
        .store_addr(store_addr),
        .store_data(store_data),
        .mat_state(mat_state),
        .busy(matmul_busy),
        .done(matmul_done)
    );

    // Tiling Controller
    tiling_controller #(
        .N(N),
        .ADDR_WIDTH(ADDR_WIDTH)
    ) u_tiling_controller (
        .clk(clk),
        .reset(reset),
        .enable(matmul_busy),
        .m_size(dst),      // From instruction
        .n_size(src1),
        .k_size(src2),
        .m_offset(tile_m_offset),
        .n_offset(tile_n_offset),
        .k_offset(tile_k_offset),
        .tile_valid(tile_valid),
        .tiles_done(tiles_done)
    );

    // =========================================================================
    // Output assignments
    // =========================================================================

    assign host_busy = running;
    assign host_done = done;
    assign host_state = seq_state;
    assign debug_pc = fetch_pc;

    // =========================================================================
    // Activation function selection based on opcode
    // =========================================================================

    assign act_func_sel = (opcode == 8'h05) ? 3'b000 :  // ACT_RELU
                          (opcode == 8'h06) ? 3'b001 :  // ACT_GELU
                          (opcode == 8'h07) ? 3'b010 :  // ACT_SILU
                          3'b000;

    assign act_start = (opcode == 8'h05 || opcode == 8'h06 || opcode == 8'h07) && decode_enable;

    // Compute/load status
    assign load_busy = weight_fifo_req || act_fifo_req;
    assign compute_busy = matmul_busy || act_busy;
    assign compute_done = matmul_done || act_done;

endmodule

`default_nettype wire

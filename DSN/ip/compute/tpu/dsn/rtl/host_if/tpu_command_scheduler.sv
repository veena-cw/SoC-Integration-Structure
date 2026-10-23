`timescale 1ns/1ps
`default_nettype none

// In-order command queue + sequencer.
//
// The existing control_unit is a purely combinational decoder of a 130-bit instruction and has no
// handshake, so this module owns sequencing: it decodes queue entries through control_unit, presents
// the one-cycle strobes (sys_switch_in, ub_rd_start_in, host write valids) exactly as test_tpu.py does,
// holds the level signals (vpu_data_pathway, leak factor, inverse batch size) between instructions,
// and waits on the VPU valid outputs (the only completion signal the core exposes).
//
// Entry format (ENTRY_W = 151):
//   [129:0]   instruction (control_unit layout), or DMA descriptor: [31:0] host addr, [47:32] len, [63:48] ub addr
//   [131:130] op        0 EXEC, 1 DMA_LOAD, 2 DMA_STORE, 3 NOP (idle cycle)
//   [133:132] wait_mode 0 none, 1 VPU ch1 valid fall, 2 wait_cycles, 3 VPU ch1|ch2 valid fall
//   [134]     latch_levels: update held pathway/leak/inv_batch from this instruction
//   [150:135] wait_cycles (wait_mode 2: idle cycles before next entry issues)
// Entries with wait_mode 0 issue on consecutive cycles. QUEUE_DEPTH must be a power of two.
module tpu_command_scheduler #(
    parameter int QUEUE_DEPTH = 16,
    parameter int ENTRY_W     = 151
)(
    input  logic clk,
    input  logic rst_n,

    input  logic               start,
    input  logic               push,
    input  logic [ENTRY_W-1:0] push_entry,
    input  logic [31:0]        timeout_cycles,

    output logic       busy,
    output logic       done_pulse,
    output logic       err_pulse,
    output logic [7:0] err_code,
    output logic [7:0] q_count,
    output logic       q_empty,
    output logic       q_full,

    // to tpu
    output logic        sys_switch_in,
    output logic        ub_rd_start_in,
    output logic        ub_rd_transpose,
    output logic [8:0]  ub_ptr_select,
    output logic [15:0] ub_rd_addr_in,
    output logic [15:0] ub_rd_row_size,
    output logic [15:0] ub_rd_col_size,
    output logic [15:0] ub_wr_host_data_0,
    output logic [15:0] ub_wr_host_data_1,
    output logic        ub_wr_host_valid_0,
    output logic        ub_wr_host_valid_1,
    output logic [3:0]  vpu_data_pathway,
    output logic [15:0] vpu_leak_factor_in,
    output logic [15:0] inv_batch_size_times_two_in,
    input  logic        vpu_valid_1,
    input  logic        vpu_valid_2,

    // to DMA
    output logic        dma_start,
    output logic        dma_is_store,
    output logic [31:0] dma_host_addr,
    output logic [15:0] dma_ub_addr,
    output logic [15:0] dma_len,
    input  logic        dma_done,
    input  logic        dma_err,
    input  logic [7:0]  dma_err_code
);
    localparam [1:0] OP_EXEC = 2'd0, OP_DMA_LD = 2'd1, OP_DMA_ST = 2'd2, OP_NOP = 2'd3;
    localparam [1:0] WM_NONE = 2'd0, WM_VPU = 2'd1, WM_CYCLES = 2'd2, WM_VPU_ANY = 2'd3;
    localparam [1:0] S_IDLE = 2'd0, S_RUN = 2'd1, S_WAIT = 2'd2, S_DMA = 2'd3;
    localparam [7:0] E_QOVF = 8'h01, E_START_BUSY = 8'h02, E_TIMEOUT = 8'h08;
    localparam int   PW = $clog2(QUEUE_DEPTH);

    // ---------------- queue ----------------
    logic [ENTRY_W-1:0] q_mem [0:QUEUE_DEPTH-1];
    logic [PW-1:0]      q_wr, q_rd;
    logic [PW:0]        cnt;
    logic [ENTRY_W-1:0] head;
    assign head    = q_mem[q_rd];
    assign q_empty = (cnt == 0);
    assign q_full  = (cnt == QUEUE_DEPTH);
    assign q_count = {{(8-PW-1){1'b0}}, cnt};

    logic do_push, do_pop;
    assign do_push = push && !q_full;

    // ---------------- sequencer state ----------------
    logic [1:0]         state;
    logic [ENTRY_W-1:0] entry_q;
    logic               issue_valid;
    logic [15:0]        wait_cnt;
    logic [31:0]        tmo_cnt;
    logic               seen_1, seen_any;
    logic [3:0]         pathway_q;
    logic [15:0]        leak_q, invb_q;

    assign busy = (state != S_IDLE);

    logic wait_ok, can_fetch;
    always_comb begin
        wait_ok = 1'b0;
        if (state == S_WAIT) begin
            case (entry_q[133:132])
                WM_CYCLES:  wait_ok = (wait_cnt == 16'd0);
                WM_VPU:     wait_ok = seen_1   && !vpu_valid_1;
                WM_VPU_ANY: wait_ok = seen_any && !(vpu_valid_1 || vpu_valid_2);
                default:    wait_ok = 1'b1;
            endcase
        end
        can_fetch = (state == S_RUN) || (state == S_WAIT && wait_ok);
        do_pop    = can_fetch && !q_empty;
    end

    logic [7:0] ec;
    logic       fatal;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            q_wr <= '0;
            q_rd <= '0;
            cnt  <= '0;
            state <= S_IDLE;
            entry_q <= '0;
            issue_valid <= 1'b0;
            wait_cnt <= '0;
            tmo_cnt  <= '0;
            seen_1   <= 1'b0;
            seen_any <= 1'b0;
            pathway_q <= '0;
            leak_q    <= '0;
            invb_q    <= '0;
            done_pulse <= 1'b0;
            err_pulse  <= 1'b0;
            err_code   <= '0;
            dma_start    <= 1'b0;
            dma_is_store <= 1'b0;
            dma_host_addr <= '0;
            dma_ub_addr   <= '0;
            dma_len       <= '0;
        end else begin
            ec    = 8'h00;
            fatal = 1'b0;
            done_pulse  <= 1'b0;
            issue_valid <= 1'b0;
            dma_start   <= 1'b0;

            // levels are held between instructions
            if (issue_valid && entry_q[134]) begin
                pathway_q <= cu_pathway;
                leak_q    <= cu_leak;
                invb_q    <= cu_invb;
            end

            // queue write / read
            if (push && q_full) ec = ec | E_QOVF;
            if (do_push) begin
                q_mem[q_wr] <= push_entry;
                q_wr        <= q_wr + 1'b1;
            end
            if (do_pop) q_rd <= q_rd + 1'b1;
            cnt <= cnt + {{PW{1'b0}}, do_push} - {{PW{1'b0}}, do_pop};

            if (start && state != S_IDLE) ec = ec | E_START_BUSY;

            case (state)
                S_IDLE: begin
                    if (start) begin
                        if (q_empty) done_pulse <= 1'b1;   // nothing queued
                        else         state <= S_RUN;
                    end
                end

                S_WAIT: begin
                    seen_1   <= seen_1   | vpu_valid_1;
                    seen_any <= seen_any | vpu_valid_1 | vpu_valid_2;
                    if (wait_cnt != 16'd0) wait_cnt <= wait_cnt - 16'd1;
                    if (tmo_cnt != 32'd0)  tmo_cnt  <= tmo_cnt - 32'd1;
                    if (!wait_ok && tmo_cnt == 32'd1 &&
                        (entry_q[133:132] == WM_VPU || entry_q[133:132] == WM_VPU_ANY)) begin
                        ec = ec | E_TIMEOUT;
                        fatal = 1'b1;
                    end
                end

                S_DMA: begin
                    if (dma_done) begin
                        state <= S_RUN;
                    end else if (dma_err) begin
                        ec = ec | dma_err_code;
                        fatal = 1'b1;
                    end
                end

                default: ;
            endcase

            // fetch next entry (from RUN, or from WAIT once its condition is met)
            if (do_pop) begin
                entry_q  <= head;
                seen_1   <= 1'b0;
                seen_any <= 1'b0;
                wait_cnt <= head[150:135];
                tmo_cnt  <= timeout_cycles;
                case (head[131:130])
                    OP_EXEC: begin
                        issue_valid <= 1'b1;
                        state <= (head[133:132] == WM_NONE) ? S_RUN : S_WAIT;
                    end
                    OP_NOP: begin
                        state <= (head[133:132] == WM_NONE) ? S_RUN : S_WAIT;
                    end
                    default: begin   // DMA load / store
                        dma_start     <= 1'b1;
                        dma_is_store  <= (head[131:130] == OP_DMA_ST);
                        dma_host_addr <= head[31:0];
                        dma_len       <= head[47:32];
                        dma_ub_addr   <= head[63:48];
                        state         <= S_DMA;
                    end
                endcase
            end else if (can_fetch && q_empty && !issue_valid) begin
                state      <= S_IDLE;     // queue drained and last strobe has gone out
                done_pulse <= 1'b1;
            end

            // fatal: flush everything
            if (fatal) begin
                q_wr  <= '0;
                q_rd  <= '0;
                cnt   <= '0;
                state <= S_IDLE;
                issue_valid <= 1'b0;
                dma_start   <= 1'b0;
                done_pulse  <= 1'b0;
            end

            err_pulse <= (ec != 8'h00);
            err_code  <= ec;
        end
    end

    // ---------------- decode through the existing control_unit ----------------
    logic        cu_sys_switch, cu_rd_start, cu_rd_transpose, cu_wr_valid_1, cu_wr_valid_2;
    logic [15:0] cu_col, cu_row, cu_addr, cu_wr_data_1, cu_wr_data_2, cu_invb, cu_leak;
    logic [8:0]  cu_ptr;
    logic [3:0]  cu_pathway;

    control_unit cu (
        .instruction(entry_q[129:0]),
        .sys_switch_in(cu_sys_switch),
        .ub_rd_start_in(cu_rd_start),
        .ub_rd_transpose(cu_rd_transpose),
        .ub_wr_host_valid_in_1(cu_wr_valid_1),
        .ub_wr_host_valid_in_2(cu_wr_valid_2),
        .ub_rd_col_size(cu_col),
        .ub_rd_row_size(cu_row),
        .ub_rd_addr_in(cu_addr),
        .ub_ptr_select(cu_ptr),
        .ub_wr_host_data_in_1(cu_wr_data_1),
        .ub_wr_host_data_in_2(cu_wr_data_2),
        .vpu_data_pathway(cu_pathway),
        .inv_batch_size_times_two_in(cu_invb),
        .vpu_leak_factor_in(cu_leak)
    );

    // strobes and read descriptors only exist during the issue cycle (zero otherwise, like the testbench)
    assign sys_switch_in      = issue_valid & cu_sys_switch;
    assign ub_rd_start_in     = issue_valid & cu_rd_start;
    assign ub_rd_transpose    = issue_valid & cu_rd_transpose;
    assign ub_ptr_select      = issue_valid ? cu_ptr  : 9'd0;
    assign ub_rd_addr_in      = issue_valid ? cu_addr : 16'd0;
    assign ub_rd_row_size     = issue_valid ? cu_row  : 16'd0;
    assign ub_rd_col_size     = issue_valid ? cu_col  : 16'd0;
    assign ub_wr_host_valid_0 = issue_valid & cu_wr_valid_1;
    assign ub_wr_host_valid_1 = issue_valid & cu_wr_valid_2;
    assign ub_wr_host_data_0  = (issue_valid & cu_wr_valid_1) ? cu_wr_data_1 : 16'd0;
    assign ub_wr_host_data_1  = (issue_valid & cu_wr_valid_2) ? cu_wr_data_2 : 16'd0;

    // levels take effect in the same cycle as the strobe, then are held
    logic lvl_now;
    assign lvl_now = issue_valid & entry_q[134];
    assign vpu_data_pathway            = lvl_now ? cu_pathway : pathway_q;
    assign vpu_leak_factor_in          = lvl_now ? cu_leak    : leak_q;
    assign inv_batch_size_times_two_in = lvl_now ? cu_invb    : invb_q;
endmodule
`default_nettype wire

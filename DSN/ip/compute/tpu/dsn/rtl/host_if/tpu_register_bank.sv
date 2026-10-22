`timescale 1ns/1ps
`default_nettype none

// CSR bank. Byte offsets (32-bit registers):
//   0x00 CONTROL     W   [0] START  [1] SOFT_RESET  [2] CLEAR  [3] DMA_LOAD (enqueue)  [4] DMA_STORE (enqueue)
//   0x04 STATUS      R   [0] BUSY [1] DONE [2] ERROR [3] Q_EMPTY [4] Q_FULL [5] DMA_BUSY [15:8] Q_COUNT [31:16] UB_WR_PTR
//   0x08 INT_ENABLE  RW  [0] done  [1] error
//   0x0C ERROR_CODE  R   [0] queue overflow [1] start while busy [2] UB overflow [3] timeout
//                        [4] bad register access [5] AXI resp error [6] bad param (misaligned address)
//   0x10 SRC_ADDR    RW  host byte address, DMA_LOAD source (4-byte aligned)
//   0x14 DST_ADDR    RW  host byte address, DMA_STORE destination (4-byte aligned)
//   0x18 TRANSFER_LEN RW number of 16-bit words
//   0x1C UB_ADDR     RW  UB word address for DMA_STORE (DMA_LOAD appends at the UB write pointer)
//   0x20 LEARNING_RATE RW Q8.8, drives tpu.learning_rate_in
//   0x24..0x34 INSTR0..INSTR4 RW  command entry staging; writing INSTR4 pushes the entry
//   0x38 TIMEOUT     RW  cycles (VPU wait and per-DMA-beat); 0 disables
//   0x3C VERSION     R
//
// INSTR0..3 = instruction[31:0], [63:32], [95:64], [127:96].
// INSTR4 = {wait_cycles[31:16], 9'b0, latch_levels[6], wait_mode[5:4], op[3:2], instruction[129:128]}
//   op: 0 EXEC, 1 DMA_LOAD, 2 DMA_STORE, 3 NOP
//   wait_mode: 0 none, 1 wait VPU ch1 valid fall, 2 wait wait_cycles, 3 wait VPU ch1|ch2 valid fall
// DMA entries built by CONTROL bits 3/4 use: instruction[31:0]=host addr, [47:32]=len, [63:48]=ub addr.
module tpu_register_bank #(
    parameter int ADDR_W  = 8,
    parameter int ENTRY_W = 151
)(
    input  logic clk,
    input  logic rst_n,

    input  logic              reg_wr_en,
    input  logic [ADDR_W-1:0] reg_wr_addr,
    input  logic [31:0]       reg_wr_data,
    input  logic [3:0]        reg_wr_strb,
    input  logic [ADDR_W-1:0] reg_rd_addr,
    output logic [31:0]       reg_rd_data,

    // from scheduler / DMA / core
    input  logic        sch_busy,
    input  logic        sch_done_pulse,
    input  logic        sch_err_pulse,
    input  logic [7:0]  sch_err_code,
    input  logic [7:0]  q_count,
    input  logic        q_empty,
    input  logic        q_full,
    input  logic        dma_busy,
    input  logic [15:0] ub_wr_ptr,

    // to scheduler / top
    output logic                start_pulse,
    output logic                soft_reset_pulse,
    output logic                cmd_push,
    output logic [ENTRY_W-1:0]  cmd_entry,
    output logic [15:0]         learning_rate,
    output logic [31:0]         timeout_cycles,
    output logic                irq
);
    localparam int A_CONTROL = 0,  A_STATUS = 1,  A_INT_EN = 2,  A_ERR = 3;
    localparam int A_SRC     = 4,  A_DST    = 5,  A_LEN    = 6,  A_UB  = 7;
    localparam int A_LR      = 8,  A_I0     = 9,  A_I1     = 10, A_I2  = 11, A_I3 = 12, A_I4 = 13;
    localparam int A_TMO     = 14, A_VER    = 15;

    function automatic logic [31:0] merge(input logic [31:0] old_v, input logic [31:0] new_v, input logic [3:0] strb);
        merge = {strb[3] ? new_v[31:24] : old_v[31:24],
                 strb[2] ? new_v[23:16] : old_v[23:16],
                 strb[1] ? new_v[15:8]  : old_v[15:8],
                 strb[0] ? new_v[7:0]   : old_v[7:0]};
    endfunction

    logic [31:0] int_en_q, src_q, dst_q, len_q, ub_q, lr_q, tmo_q;
    logic [31:0] i0_q, i1_q, i2_q, i3_q, i4_q;
    logic        done_q, err_q;
    logic [7:0]  err_code_q;

    logic [ADDR_W-3:0] wr_idx, rd_idx;
    assign wr_idx = reg_wr_addr[ADDR_W-1:2];
    assign rd_idx = reg_rd_addr[ADDR_W-1:2];

    // CONTROL decode
    logic        wr_control;
    logic [31:0] ctl;
    assign wr_control = reg_wr_en && (wr_idx == A_CONTROL);
    assign ctl        = merge(32'h0, reg_wr_data, reg_wr_strb);

    assign soft_reset_pulse = wr_control && ctl[1];
    assign start_pulse      = wr_control && ctl[0] && !ctl[1];
    logic clear_pulse, dma_ld, dma_st, dma_both;
    assign clear_pulse = wr_control && ctl[2];
    assign dma_both    = wr_control && ctl[3] && ctl[4] && !ctl[1];
    assign dma_ld      = wr_control && ctl[3] && !ctl[4] && !ctl[1];
    assign dma_st      = wr_control && ctl[4] && !ctl[3] && !ctl[1];

    // Command push
    logic        wr_i4;
    logic [31:0] i4_merged;
    assign wr_i4     = reg_wr_en && (wr_idx == A_I4);
    assign i4_merged = merge(i4_q, reg_wr_data, reg_wr_strb);
    assign cmd_push  = wr_i4 || dma_ld || dma_st;

    always_comb begin
        cmd_entry = '0;
        if (wr_i4) begin
            cmd_entry[129:0]    = {i4_merged[1:0], i3_q, i2_q, i1_q, i0_q};
            cmd_entry[131:130]  = i4_merged[3:2];
            cmd_entry[133:132]  = i4_merged[5:4];
            cmd_entry[134]      = i4_merged[6];
            cmd_entry[150:135]  = i4_merged[31:16];
        end else if (dma_ld) begin
            cmd_entry[31:0]     = src_q;
            cmd_entry[47:32]    = len_q[15:0];
            cmd_entry[131:130]  = 2'd1;
        end else if (dma_st) begin
            cmd_entry[31:0]     = dst_q;
            cmd_entry[47:32]    = len_q[15:0];
            cmd_entry[63:48]    = ub_q[15:0];
            cmd_entry[131:130]  = 2'd2;
        end
    end

    // Illegal access: unmapped offset, write to read-only register, or conflicting CONTROL bits
    logic bad_access;
    always_comb begin
        bad_access = dma_both;
        if (reg_wr_en) begin
            if (wr_idx > A_VER || wr_idx == A_STATUS || wr_idx == A_ERR || wr_idx == A_VER)
                bad_access = 1'b1;
        end
    end

    // Sticky status next-state
    logic       done_nxt, err_nxt;
    logic [7:0] err_code_nxt;
    always_comb begin
        done_nxt     = done_q;
        err_nxt      = err_q;
        err_code_nxt = err_code_q;
        if (clear_pulse || soft_reset_pulse) begin
            done_nxt     = 1'b0;
            err_nxt      = 1'b0;
            err_code_nxt = 8'h00;
        end
        if (sch_done_pulse) done_nxt = 1'b1;
        if (sch_err_pulse) begin
            err_nxt      = 1'b1;
            err_code_nxt = err_code_nxt | sch_err_code;
        end
        if (bad_access) begin
            err_nxt      = 1'b1;
            err_code_nxt = err_code_nxt | 8'h10;
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            int_en_q <= 32'h0;
            src_q    <= 32'h0;
            dst_q    <= 32'h0;
            len_q    <= 32'h0;
            ub_q     <= 32'h0;
            lr_q     <= 32'h0;
            tmo_q    <= 32'h0001_0000;
            i0_q     <= 32'h0;
            i1_q     <= 32'h0;
            i2_q     <= 32'h0;
            i3_q     <= 32'h0;
            i4_q     <= 32'h0;
            done_q     <= 1'b0;
            err_q      <= 1'b0;
            err_code_q <= 8'h00;
        end else begin
            done_q     <= done_nxt;
            err_q      <= err_nxt;
            err_code_q <= err_code_nxt;
            if (reg_wr_en) begin
                case (wr_idx)
                    A_INT_EN: int_en_q <= merge(int_en_q, reg_wr_data, reg_wr_strb);
                    A_SRC:    src_q    <= merge(src_q,    reg_wr_data, reg_wr_strb);
                    A_DST:    dst_q    <= merge(dst_q,    reg_wr_data, reg_wr_strb);
                    A_LEN:    len_q    <= merge(len_q,    reg_wr_data, reg_wr_strb);
                    A_UB:     ub_q     <= merge(ub_q,     reg_wr_data, reg_wr_strb);
                    A_LR:     lr_q     <= merge(lr_q,     reg_wr_data, reg_wr_strb);
                    A_I0:     i0_q     <= merge(i0_q,     reg_wr_data, reg_wr_strb);
                    A_I1:     i1_q     <= merge(i1_q,     reg_wr_data, reg_wr_strb);
                    A_I2:     i2_q     <= merge(i2_q,     reg_wr_data, reg_wr_strb);
                    A_I3:     i3_q     <= merge(i3_q,     reg_wr_data, reg_wr_strb);
                    A_I4:     i4_q     <= i4_merged;
                    A_TMO:    tmo_q    <= merge(tmo_q,    reg_wr_data, reg_wr_strb);
                    default: ;
                endcase
            end
        end
    end

    assign learning_rate  = lr_q[15:0];
    assign timeout_cycles = tmo_q;
    assign irq = (done_q & int_en_q[0]) | (err_q & int_en_q[1]);

    always_comb begin
        reg_rd_data = 32'h0;
        case (rd_idx)
            A_STATUS: reg_rd_data = {ub_wr_ptr, q_count, 2'b00, dma_busy, q_full, q_empty, err_q, done_q, sch_busy};
            A_INT_EN: reg_rd_data = int_en_q;
            A_ERR:    reg_rd_data = {24'h0, err_code_q};
            A_SRC:    reg_rd_data = src_q;
            A_DST:    reg_rd_data = dst_q;
            A_LEN:    reg_rd_data = len_q;
            A_UB:     reg_rd_data = ub_q;
            A_LR:     reg_rd_data = lr_q;
            A_I0:     reg_rd_data = i0_q;
            A_I1:     reg_rd_data = i1_q;
            A_I2:     reg_rd_data = i2_q;
            A_I3:     reg_rd_data = i3_q;
            A_I4:     reg_rd_data = i4_q;
            A_TMO:    reg_rd_data = tmo_q;
            A_VER:    reg_rd_data = 32'h5450_0001;
            default:  reg_rd_data = 32'h0;
        endcase
    end
endmodule

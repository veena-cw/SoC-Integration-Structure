`timescale 1ns/1ps
`default_nettype none

// Register path clock crossing, built from two asynchronous_fifo instances.
//   write FIFO    (clk_axil -> clk_tpu): {addr, data, strb}, one entry per forwarded AXI4-Lite write.
//                 Popped as soon as it is visible and presented as a one cycle register bank write.
//   snapshot FIFO (clk_tpu -> clk_axil): {applied_cnt, err, status}. A new entry is pushed whenever the
//                 snapshot differs from the last one pushed (and the FIFO has room), so the latest state
//                 always gets through. applied_cnt counts register writes applied in clk_tpu; the
//                 clk_axil side compares it with the writes it issued to keep read-after-write order.
module tpu_reg_cdc #(
    parameter int ADDR_W     = 8,
    parameter int FIFO_DEPTH = 8
)(
    // clk_axil side
    input  logic              clk_axil,
    input  logic              rst_axil_n,
    input  logic              wq_push,
    input  logic [ADDR_W-1:0] wq_addr,
    input  logic [31:0]       wq_data,
    input  logic [3:0]        wq_strb,
    output logic              wq_full,
    output logic              snap_valid,
    output logic [47:0]       snap_data,
    input  logic              snap_pop,

    // clk_tpu side
    input  logic              clk_tpu,
    input  logic              rst_tpu_n,
    output logic              reg_wr_en,
    output logic [ADDR_W-1:0] reg_wr_addr,
    output logic [31:0]       reg_wr_data,
    output logic [3:0]        reg_wr_strb,
    input  logic [31:0]       status_word,
    input  logic [7:0]        err_word
);
    localparam int WQ_W = ADDR_W + 32 + 4;
    localparam logic [47:0] PKT_RST = {8'h00, 8'h00, 32'h0000_0008};   // matches the shadow reset value

    // ---------------- writes: clk_axil -> clk_tpu ----------------
    logic [WQ_W-1:0] wq_q;
    logic            wq_empty;

    asynchronous_fifo #(.DEPTH(FIFO_DEPTH), .DATA_WIDTH(WQ_W)) u_wr_fifo (
        .wclk(clk_axil), .wrst_n(rst_axil_n),
        .rclk(clk_tpu),  .rrst_n(rst_tpu_n),
        .w_en(wq_push && !wq_full),
        .r_en(!wq_empty),
        .data_in({wq_addr, wq_data, wq_strb}),
        .data_out(wq_q),
        .full(wq_full),
        .empty(wq_empty)
    );
    assign reg_wr_en = !wq_empty;
    assign {reg_wr_addr, reg_wr_data, reg_wr_strb} = wq_q;

    // ---------------- status snapshots: clk_tpu -> clk_axil ----------------
    logic [7:0]  applied_cnt;
    logic [47:0] pkt, last_pkt_q;
    logic        snap_full, snap_empty, snap_w_en;

    always_ff @(posedge clk_tpu or negedge rst_tpu_n) begin
        if (!rst_tpu_n) begin
            applied_cnt <= 8'h00;
            last_pkt_q  <= PKT_RST;
        end else begin
            if (reg_wr_en) applied_cnt <= applied_cnt + 8'd1;
            if (snap_w_en) last_pkt_q  <= pkt;
        end
    end

    assign pkt       = {applied_cnt, err_word, status_word};
    assign snap_w_en = (pkt != last_pkt_q) && !snap_full;

    asynchronous_fifo #(.DEPTH(FIFO_DEPTH), .DATA_WIDTH(48)) u_snap_fifo (
        .wclk(clk_tpu),  .wrst_n(rst_tpu_n),
        .rclk(clk_axil), .rrst_n(rst_axil_n),
        .w_en(snap_w_en),
        .r_en(snap_pop && !snap_empty),
        .data_in(pkt),
        .data_out(snap_data),
        .full(snap_full),
        .empty(snap_empty)
    );
    assign snap_valid = !snap_empty;
endmodule
`default_nettype wire

`timescale 1ns/1ps
`default_nettype none

// Host-facing wrapper around the existing tiny-tpu core (2x2 array as instantiated in tpu.sv).
//   AXI4-Lite slave  : CSRs and command queue  (see tpu_register_bank.sv for the map)   clk_axil
//   AXI4 master      : DMA to/from host memory (INCR bursts, 128-bit data)               clk_axi
//   irq              : level, done/error (enable bits in INT_ENABLE), synchronized to    clk_axil
//   TPU core, register bank, scheduler, DMA                                              clk_tpu
// Three asynchronous clocks. Crossings use asynchronous_fifo (register bus and the five AXI4 channels)
// and 2 flop synchronizers (irq, resets). rst_n is one active low asynchronous pin; every domain gets a
// reset that asserts asynchronously and deasserts synchronously.
module tpu_host_top #(
    parameter int AXIL_ADDR_W = 8,
    parameter int UB_DEPTH    = 128,
    parameter int QUEUE_DEPTH = 16,
    parameter int MAX_BURST   = 16,
    parameter int AXI_ID_W    = 1,
    parameter int CDC_FIFO_DEPTH = 8     // power of two, >= 4
)(
    input  logic clk_tpu,                // TPU core, CSRs, scheduler, DMA
    input  logic clk_axil,               // AXI4-Lite slave and irq
    input  logic clk_axi,                // AXI4 master
    input  logic rst_n,                  // active low, asynchronous

    // AXI4-Lite slave
    input  logic [AXIL_ADDR_W-1:0] s_axil_awaddr,
    input  logic [2:0]             s_axil_awprot,
    input  logic                   s_axil_awvalid,
    output logic                   s_axil_awready,
    input  logic [31:0]            s_axil_wdata,
    input  logic [3:0]             s_axil_wstrb,
    input  logic                   s_axil_wvalid,
    output logic                   s_axil_wready,
    output logic [1:0]             s_axil_bresp,
    output logic                   s_axil_bvalid,
    input  logic                   s_axil_bready,
    input  logic [AXIL_ADDR_W-1:0] s_axil_araddr,
    input  logic [2:0]             s_axil_arprot,
    input  logic                   s_axil_arvalid,
    output logic                   s_axil_arready,
    output logic [31:0]            s_axil_rdata,
    output logic [1:0]             s_axil_rresp,
    output logic                   s_axil_rvalid,
    input  logic                   s_axil_rready,

    // AXI4 master (DMA)
    output logic [AXI_ID_W-1:0] m_axi_awid,
    output logic [31:0]         m_axi_awaddr,
    output logic [7:0]          m_axi_awlen,
    output logic [2:0]          m_axi_awsize,
    output logic [1:0]          m_axi_awburst,
    output logic                m_axi_awlock,
    output logic [3:0]          m_axi_awcache,
    output logic [2:0]          m_axi_awprot,
    output logic [3:0]          m_axi_awqos,
    output logic                m_axi_awvalid,
    input  logic                m_axi_awready,
    output logic [127:0]        m_axi_wdata,
    output logic [15:0]         m_axi_wstrb,
    output logic                m_axi_wlast,
    output logic                m_axi_wvalid,
    input  logic                m_axi_wready,
    input  logic [AXI_ID_W-1:0] m_axi_bid,
    input  logic [1:0]          m_axi_bresp,
    input  logic                m_axi_bvalid,
    output logic                m_axi_bready,
    output logic [AXI_ID_W-1:0] m_axi_arid,
    output logic [31:0]         m_axi_araddr,
    output logic [7:0]          m_axi_arlen,
    output logic [2:0]          m_axi_arsize,
    output logic [1:0]          m_axi_arburst,
    output logic                m_axi_arlock,
    output logic [3:0]          m_axi_arcache,
    output logic [2:0]          m_axi_arprot,
    output logic [3:0]          m_axi_arqos,
    output logic                m_axi_arvalid,
    input  logic                m_axi_arready,
    input  logic [AXI_ID_W-1:0] m_axi_rid,
    input  logic [127:0]        m_axi_rdata,
    input  logic [1:0]          m_axi_rresp,
    input  logic                m_axi_rlast,
    input  logic                m_axi_rvalid,
    output logic                m_axi_rready,

    output logic irq
);
    localparam int ENTRY_W = 151;

    // ---------------- resets: async assert, sync deassert, per domain ----------------
    logic rst_tpu_n, rst_axil_n;
    tpu_rst_sync u_rs_tpu  (.clk(clk_tpu),  .arst_n(rst_n), .rst_n_sync(rst_tpu_n));
    tpu_rst_sync u_rs_axil (.clk(clk_axil), .arst_n(rst_n), .rst_n_sync(rst_axil_n));

    // Soft reset (clk_tpu): resets core, scheduler, DMA and the AXI4 crossing FIFOs. CSR values and the
    // register bus FIFOs are kept, so the host can keep reading registers during and after it.
    logic soft_reset_pulse;
    logic [2:0] soft_sr;
    always_ff @(posedge clk_tpu or negedge rst_tpu_n) begin
        if (!rst_tpu_n) soft_sr <= 3'b000;
        else            soft_sr <= {soft_sr[1:0], soft_reset_pulse};
    end
    logic core_rst_n;                      // clk_tpu domain, registered so it is glitch free
    always_ff @(posedge clk_tpu or negedge rst_tpu_n) begin
        if (!rst_tpu_n) core_rst_n <= 1'b0;
        else            core_rst_n <= ~(|soft_sr);
    end
    logic core_rst_axi_n;                  // same reset seen by the clk_axi side of the AXI4 crossing
    tpu_rst_sync u_rs_axi (.clk(clk_axi), .arst_n(core_rst_n), .rst_n_sync(core_rst_axi_n));

    // ---------------- AXI4-Lite (clk_axil) <-> register bank (clk_tpu) ----------------
    logic                   wq_push, wq_full, snap_valid, snap_pop;
    logic [AXIL_ADDR_W-1:0] wq_addr;
    logic [31:0]            wq_data;
    logic [3:0]             wq_strb;
    logic [47:0]            snap_data;

    tpu_host_interface #(.ADDR_W(AXIL_ADDR_W)) host_if (
        .clk(clk_axil), .rst_n(rst_axil_n),
        .s_axil_awaddr(s_axil_awaddr), .s_axil_awprot(s_axil_awprot), .s_axil_awvalid(s_axil_awvalid), .s_axil_awready(s_axil_awready),
        .s_axil_wdata(s_axil_wdata), .s_axil_wstrb(s_axil_wstrb), .s_axil_wvalid(s_axil_wvalid), .s_axil_wready(s_axil_wready),
        .s_axil_bresp(s_axil_bresp), .s_axil_bvalid(s_axil_bvalid), .s_axil_bready(s_axil_bready),
        .s_axil_araddr(s_axil_araddr), .s_axil_arprot(s_axil_arprot), .s_axil_arvalid(s_axil_arvalid), .s_axil_arready(s_axil_arready),
        .s_axil_rdata(s_axil_rdata), .s_axil_rresp(s_axil_rresp), .s_axil_rvalid(s_axil_rvalid), .s_axil_rready(s_axil_rready),
        .wq_push(wq_push), .wq_addr(wq_addr), .wq_data(wq_data), .wq_strb(wq_strb), .wq_full(wq_full),
        .snap_valid(snap_valid), .snap_data(snap_data), .snap_pop(snap_pop)
    );

    logic                   reg_wr_en;
    logic [AXIL_ADDR_W-1:0] reg_wr_addr;
    logic [31:0]            reg_wr_data;
    logic [3:0]             reg_wr_strb;
    logic [31:0]            status_word;
    logic [7:0]             err_word;

    tpu_reg_cdc #(.ADDR_W(AXIL_ADDR_W), .FIFO_DEPTH(CDC_FIFO_DEPTH)) reg_cdc (
        .clk_axil(clk_axil), .rst_axil_n(rst_axil_n),
        .wq_push(wq_push), .wq_addr(wq_addr), .wq_data(wq_data), .wq_strb(wq_strb), .wq_full(wq_full),
        .snap_valid(snap_valid), .snap_data(snap_data), .snap_pop(snap_pop),
        .clk_tpu(clk_tpu), .rst_tpu_n(rst_tpu_n),
        .reg_wr_en(reg_wr_en), .reg_wr_addr(reg_wr_addr), .reg_wr_data(reg_wr_data), .reg_wr_strb(reg_wr_strb),
        .status_word(status_word), .err_word(err_word)
    );

    logic               irq_tpu;
    logic               sch_busy, sch_done, sch_err, q_empty, q_full, dma_busy, start_pulse, cmd_push;
    logic [7:0]         sch_err_code, q_count;
    logic [15:0]        ub_wr_ptr, learning_rate;
    logic [31:0]        timeout_cycles;
    logic [ENTRY_W-1:0] cmd_entry;

    tpu_register_bank #(.ADDR_W(AXIL_ADDR_W), .ENTRY_W(ENTRY_W)) regs (
        .clk(clk_tpu), .rst_n(rst_tpu_n),
        .reg_wr_en(reg_wr_en), .reg_wr_addr(reg_wr_addr), .reg_wr_data(reg_wr_data), .reg_wr_strb(reg_wr_strb),
        .reg_rd_addr('0), .reg_rd_data(),        // read path is served by the AXI4-Lite shadow, see tpu_host_interface.sv
        .sch_busy(sch_busy), .sch_done_pulse(sch_done), .sch_err_pulse(sch_err), .sch_err_code(sch_err_code),
        .q_count(q_count), .q_empty(q_empty), .q_full(q_full), .dma_busy(dma_busy), .ub_wr_ptr(ub_wr_ptr),
        .start_pulse(start_pulse), .soft_reset_pulse(soft_reset_pulse),
        .cmd_push(cmd_push), .cmd_entry(cmd_entry),
        .learning_rate(learning_rate), .timeout_cycles(timeout_cycles), .irq(irq_tpu),
        .status_word(status_word), .err_word(err_word)
    );

    // irq: registered in clk_tpu, then 2 flop synchronizer into clk_axil
    logic irq_q;
    always_ff @(posedge clk_tpu or negedge rst_tpu_n) begin
        if (!rst_tpu_n) irq_q <= 1'b0;
        else            irq_q <= irq_tpu;
    end
    tpu_sync_2ff #(.W(1)) u_irq_sync (.clk(clk_axil), .rst_n(rst_axil_n), .d(irq_q), .q(irq));

    // ---------------- scheduler <-> DMA <-> core ----------------
    logic        sys_switch_in, ub_rd_start_in, ub_rd_transpose;
    logic [8:0]  ub_ptr_select;
    logic [15:0] ub_rd_addr_in, ub_rd_row_size, ub_rd_col_size;
    logic [15:0] sch_wr_d0, sch_wr_d1;
    logic        sch_wr_v0, sch_wr_v1;
    logic [3:0]  vpu_data_pathway;
    logic [15:0] vpu_leak_factor_in, inv_batch_size_times_two_in;
    logic        vpu_valid_1, vpu_valid_2;

    // DMA side of the AXI4 crossing (clk_tpu)
    logic [AXI_ID_W-1:0] dma_axi_awid;
    logic [31:0] dma_axi_awaddr;
    logic [7:0] dma_axi_awlen;
    logic [2:0] dma_axi_awsize;
    logic [1:0] dma_axi_awburst;
    logic dma_axi_awlock;
    logic [3:0] dma_axi_awcache;
    logic [2:0] dma_axi_awprot;
    logic [3:0] dma_axi_awqos;
    logic dma_axi_awvalid;
    logic dma_axi_awready;
    logic [127:0] dma_axi_wdata;
    logic [15:0] dma_axi_wstrb;
    logic dma_axi_wlast;
    logic dma_axi_wvalid;
    logic dma_axi_wready;
    logic [AXI_ID_W-1:0] dma_axi_bid;
    logic [1:0] dma_axi_bresp;
    logic dma_axi_bvalid;
    logic dma_axi_bready;
    logic [AXI_ID_W-1:0] dma_axi_arid;
    logic [31:0] dma_axi_araddr;
    logic [7:0] dma_axi_arlen;
    logic [2:0] dma_axi_arsize;
    logic [1:0] dma_axi_arburst;
    logic dma_axi_arlock;
    logic [3:0] dma_axi_arcache;
    logic [2:0] dma_axi_arprot;
    logic [3:0] dma_axi_arqos;
    logic dma_axi_arvalid;
    logic dma_axi_arready;
    logic [AXI_ID_W-1:0] dma_axi_rid;
    logic [127:0] dma_axi_rdata;
    logic [1:0] dma_axi_rresp;
    logic dma_axi_rlast;
    logic dma_axi_rvalid;
    logic dma_axi_rready;

    logic        dma_start, dma_is_store, dma_done, dma_err;
    logic [31:0] dma_host_addr;
    logic [15:0] dma_ub_addr, dma_len;
    logic [7:0]  dma_err_code;

    tpu_command_scheduler #(.QUEUE_DEPTH(QUEUE_DEPTH), .ENTRY_W(ENTRY_W)) sched (
        .clk(clk_tpu), .rst_n(core_rst_n),
        .start(start_pulse), .push(cmd_push), .push_entry(cmd_entry), .timeout_cycles(timeout_cycles),
        .busy(sch_busy), .done_pulse(sch_done), .err_pulse(sch_err), .err_code(sch_err_code),
        .q_count(q_count), .q_empty(q_empty), .q_full(q_full),
        .sys_switch_in(sys_switch_in), .ub_rd_start_in(ub_rd_start_in), .ub_rd_transpose(ub_rd_transpose),
        .ub_ptr_select(ub_ptr_select), .ub_rd_addr_in(ub_rd_addr_in),
        .ub_rd_row_size(ub_rd_row_size), .ub_rd_col_size(ub_rd_col_size),
        .ub_wr_host_data_0(sch_wr_d0), .ub_wr_host_data_1(sch_wr_d1),
        .ub_wr_host_valid_0(sch_wr_v0), .ub_wr_host_valid_1(sch_wr_v1),
        .vpu_data_pathway(vpu_data_pathway), .vpu_leak_factor_in(vpu_leak_factor_in),
        .inv_batch_size_times_two_in(inv_batch_size_times_two_in),
        .vpu_valid_1(vpu_valid_1), .vpu_valid_2(vpu_valid_2),
        .dma_start(dma_start), .dma_is_store(dma_is_store), .dma_host_addr(dma_host_addr),
        .dma_ub_addr(dma_ub_addr), .dma_len(dma_len),
        .dma_done(dma_done), .dma_err(dma_err), .dma_err_code(dma_err_code)
    );

    logic [15:0] dma_wr_d0, dma_wr_d1, ub_host_rd_addr, ub_host_rd_lo, ub_host_rd_hi;
    logic        dma_wr_v0, dma_wr_v1;

    tpu_dma_engine #(.UB_DEPTH(UB_DEPTH), .MAX_BURST(MAX_BURST), .ID_W(AXI_ID_W)) dma (
        .clk(clk_tpu), .rst_n(core_rst_n),
        .start(dma_start), .is_store(dma_is_store), .host_addr_in(dma_host_addr),
        .ub_addr_in(dma_ub_addr), .len_in(dma_len), .beat_timeout(timeout_cycles),
        .busy(dma_busy), .done_pulse(dma_done), .err_pulse(dma_err), .err_code(dma_err_code),
        .ub_wr_host_data_0(dma_wr_d0), .ub_wr_host_data_1(dma_wr_d1),
        .ub_wr_host_valid_0(dma_wr_v0), .ub_wr_host_valid_1(dma_wr_v1),
        .ub_host_rd_addr(ub_host_rd_addr), .ub_host_rd_data_lo(ub_host_rd_lo), .ub_host_rd_data_hi(ub_host_rd_hi),
        .ub_wr_ptr(ub_wr_ptr),
        .m_axi_awid(dma_axi_awid), .m_axi_awaddr(dma_axi_awaddr), .m_axi_awlen(dma_axi_awlen), .m_axi_awsize(dma_axi_awsize),
        .m_axi_awburst(dma_axi_awburst), .m_axi_awlock(dma_axi_awlock), .m_axi_awcache(dma_axi_awcache), .m_axi_awprot(dma_axi_awprot),
        .m_axi_awqos(dma_axi_awqos), .m_axi_awvalid(dma_axi_awvalid), .m_axi_awready(dma_axi_awready),
        .m_axi_wdata(dma_axi_wdata), .m_axi_wstrb(dma_axi_wstrb), .m_axi_wlast(dma_axi_wlast), .m_axi_wvalid(dma_axi_wvalid), .m_axi_wready(dma_axi_wready),
        .m_axi_bid(dma_axi_bid), .m_axi_bresp(dma_axi_bresp), .m_axi_bvalid(dma_axi_bvalid), .m_axi_bready(dma_axi_bready),
        .m_axi_arid(dma_axi_arid), .m_axi_araddr(dma_axi_araddr), .m_axi_arlen(dma_axi_arlen), .m_axi_arsize(dma_axi_arsize),
        .m_axi_arburst(dma_axi_arburst), .m_axi_arlock(dma_axi_arlock), .m_axi_arcache(dma_axi_arcache), .m_axi_arprot(dma_axi_arprot),
        .m_axi_arqos(dma_axi_arqos), .m_axi_arvalid(dma_axi_arvalid), .m_axi_arready(dma_axi_arready),
        .m_axi_rid(dma_axi_rid), .m_axi_rdata(dma_axi_rdata), .m_axi_rresp(dma_axi_rresp), .m_axi_rlast(dma_axi_rlast),
        .m_axi_rvalid(dma_axi_rvalid), .m_axi_rready(dma_axi_rready)
    );

    // ---------------- AXI4 master crossing: clk_tpu (DMA) -> clk_axi (pins) ----------------
    tpu_axi_cdc #(.ID_W(AXI_ID_W), .FIFO_DEPTH(CDC_FIFO_DEPTH)) axi_cdc (
        .clk_tpu(clk_tpu), .rst_tpu_n(core_rst_n),
        .clk_axi(clk_axi), .rst_axi_n(core_rst_axi_n),
        .s_axi_awid(dma_axi_awid),
        .s_axi_awaddr(dma_axi_awaddr),
        .s_axi_awlen(dma_axi_awlen),
        .s_axi_awsize(dma_axi_awsize),
        .s_axi_awburst(dma_axi_awburst),
        .s_axi_awlock(dma_axi_awlock),
        .s_axi_awcache(dma_axi_awcache),
        .s_axi_awprot(dma_axi_awprot),
        .s_axi_awqos(dma_axi_awqos),
        .s_axi_awvalid(dma_axi_awvalid),
        .s_axi_awready(dma_axi_awready),
        .s_axi_wdata(dma_axi_wdata),
        .s_axi_wstrb(dma_axi_wstrb),
        .s_axi_wlast(dma_axi_wlast),
        .s_axi_wvalid(dma_axi_wvalid),
        .s_axi_wready(dma_axi_wready),
        .s_axi_bid(dma_axi_bid),
        .s_axi_bresp(dma_axi_bresp),
        .s_axi_bvalid(dma_axi_bvalid),
        .s_axi_bready(dma_axi_bready),
        .s_axi_arid(dma_axi_arid),
        .s_axi_araddr(dma_axi_araddr),
        .s_axi_arlen(dma_axi_arlen),
        .s_axi_arsize(dma_axi_arsize),
        .s_axi_arburst(dma_axi_arburst),
        .s_axi_arlock(dma_axi_arlock),
        .s_axi_arcache(dma_axi_arcache),
        .s_axi_arprot(dma_axi_arprot),
        .s_axi_arqos(dma_axi_arqos),
        .s_axi_arvalid(dma_axi_arvalid),
        .s_axi_arready(dma_axi_arready),
        .s_axi_rid(dma_axi_rid),
        .s_axi_rdata(dma_axi_rdata),
        .s_axi_rresp(dma_axi_rresp),
        .s_axi_rlast(dma_axi_rlast),
        .s_axi_rvalid(dma_axi_rvalid),
        .s_axi_rready(dma_axi_rready),
        .m_axi_awid(m_axi_awid),
        .m_axi_awaddr(m_axi_awaddr),
        .m_axi_awlen(m_axi_awlen),
        .m_axi_awsize(m_axi_awsize),
        .m_axi_awburst(m_axi_awburst),
        .m_axi_awlock(m_axi_awlock),
        .m_axi_awcache(m_axi_awcache),
        .m_axi_awprot(m_axi_awprot),
        .m_axi_awqos(m_axi_awqos),
        .m_axi_awvalid(m_axi_awvalid),
        .m_axi_awready(m_axi_awready),
        .m_axi_wdata(m_axi_wdata),
        .m_axi_wstrb(m_axi_wstrb),
        .m_axi_wlast(m_axi_wlast),
        .m_axi_wvalid(m_axi_wvalid),
        .m_axi_wready(m_axi_wready),
        .m_axi_bid(m_axi_bid),
        .m_axi_bresp(m_axi_bresp),
        .m_axi_bvalid(m_axi_bvalid),
        .m_axi_bready(m_axi_bready),
        .m_axi_arid(m_axi_arid),
        .m_axi_araddr(m_axi_araddr),
        .m_axi_arlen(m_axi_arlen),
        .m_axi_arsize(m_axi_arsize),
        .m_axi_arburst(m_axi_arburst),
        .m_axi_arlock(m_axi_arlock),
        .m_axi_arcache(m_axi_arcache),
        .m_axi_arprot(m_axi_arprot),
        .m_axi_arqos(m_axi_arqos),
        .m_axi_arvalid(m_axi_arvalid),
        .m_axi_arready(m_axi_arready),
        .m_axi_rid(m_axi_rid),
        .m_axi_rdata(m_axi_rdata),
        .m_axi_rresp(m_axi_rresp),
        .m_axi_rlast(m_axi_rlast),
        .m_axi_rvalid(m_axi_rvalid),
        .m_axi_rready(m_axi_rready)
    );

    // Host write ports: the scheduler never issues host writes while the DMA runs (strictly in-order),
    // so priority-by-valid is only a safety net.
    logic [15:0] ub_wr_host_data  [0:1];
    logic        ub_wr_host_valid [0:1];
    assign ub_wr_host_valid[0] = dma_wr_v0 | sch_wr_v0;
    assign ub_wr_host_valid[1] = dma_wr_v1 | sch_wr_v1;
    assign ub_wr_host_data[0]  = dma_wr_v0 ? dma_wr_d0 : sch_wr_d0;
    assign ub_wr_host_data[1]  = dma_wr_v1 ? dma_wr_d1 : sch_wr_d1;

    tpu_top #(.SYSTOLIC_ARRAY_WIDTH(2)) core (
        .clk(clk_tpu), .rst(~core_rst_n),      // upstream core keeps its active high reset
        .ub_wr_host_data_in(ub_wr_host_data),
        .ub_wr_host_valid_in(ub_wr_host_valid),
        .ub_rd_start_in(ub_rd_start_in), .ub_rd_transpose(ub_rd_transpose), .ub_ptr_select(ub_ptr_select),
        .ub_rd_addr_in(ub_rd_addr_in), .ub_rd_row_size(ub_rd_row_size), .ub_rd_col_size(ub_rd_col_size),
        .learning_rate_in(learning_rate),
        .vpu_data_pathway(vpu_data_pathway),
        .sys_switch_in(sys_switch_in),
        .vpu_leak_factor_in(vpu_leak_factor_in),
        .inv_batch_size_times_two_in(inv_batch_size_times_two_in),
        .vpu_valid_o_1(vpu_valid_1), .vpu_valid_o_2(vpu_valid_2),
        .ub_host_rd_addr_in(ub_host_rd_addr),
        .ub_host_rd_data_lo(ub_host_rd_lo), .ub_host_rd_data_hi(ub_host_rd_hi),
        .ub_wr_ptr_out(ub_wr_ptr)
    );
endmodule
`default_nettype wire

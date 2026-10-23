`timescale 1ns/1ps
`default_nettype none

// AXI4 master clock crossing, clk_tpu -> clk_axi, one asynchronous_fifo per channel, ending in the standalone
// axi4_master module (clk_axi) that drives the external master port:
//   AW command, W data, AR command : clk_tpu -> clk_axi   -> axi4_master wr_req / wdata / rd_req
//   B response, R data             : clk_axi -> clk_tpu   <- axi4_master wr_resp / rdata
// s_axi_* faces the DMA (clk_tpu) and keeps the valid/ready form it always had: valid = FIFO not empty,
// ready = FIFO not full. The DMA sees an ordinary AXI4 slave with elastic buffering.
// Reset: rst_tpu_n and rst_axi_n must assert together (both come from the same soft reset in the top).
module tpu_axi_cdc #(
    parameter int ID_W       = 1,
    parameter int FIFO_DEPTH = 8
)(
    input  logic clk_tpu,
    input  logic rst_tpu_n,
    input  logic clk_axi,
    input  logic rst_axi_n,

    // ---------------- DMA side (clk_tpu) ----------------
    input  logic [ID_W-1:0] s_axi_awid,
    input  logic [31:0]     s_axi_awaddr,
    input  logic [7:0]      s_axi_awlen,
    input  logic [2:0]      s_axi_awsize,
    input  logic [1:0]      s_axi_awburst,
    input  logic            s_axi_awlock,
    input  logic [3:0]      s_axi_awcache,
    input  logic [2:0]      s_axi_awprot,
    input  logic [3:0]      s_axi_awqos,
    input  logic            s_axi_awvalid,
    output logic            s_axi_awready,
    input  logic [127:0]    s_axi_wdata,
    input  logic [15:0]     s_axi_wstrb,
    input  logic            s_axi_wlast,
    input  logic            s_axi_wvalid,
    output logic            s_axi_wready,
    output logic [ID_W-1:0] s_axi_bid,
    output logic [1:0]      s_axi_bresp,
    output logic            s_axi_bvalid,
    input  logic            s_axi_bready,
    input  logic [ID_W-1:0] s_axi_arid,
    input  logic [31:0]     s_axi_araddr,
    input  logic [7:0]      s_axi_arlen,
    input  logic [2:0]      s_axi_arsize,
    input  logic [1:0]      s_axi_arburst,
    input  logic            s_axi_arlock,
    input  logic [3:0]      s_axi_arcache,
    input  logic [2:0]      s_axi_arprot,
    input  logic [3:0]      s_axi_arqos,
    input  logic            s_axi_arvalid,
    output logic            s_axi_arready,
    output logic [ID_W-1:0] s_axi_rid,
    output logic [127:0]    s_axi_rdata,
    output logic [1:0]      s_axi_rresp,
    output logic            s_axi_rlast,
    output logic            s_axi_rvalid,
    input  logic            s_axi_rready,

    // ---------------- external AXI4 master port (clk_axi) ----------------
    output logic [ID_W-1:0] m_axi_awid,
    output logic [31:0]     m_axi_awaddr,
    output logic [7:0]      m_axi_awlen,
    output logic [2:0]      m_axi_awsize,
    output logic [1:0]      m_axi_awburst,
    output logic            m_axi_awlock,
    output logic [3:0]      m_axi_awcache,
    output logic [2:0]      m_axi_awprot,
    output logic [3:0]      m_axi_awqos,
    output logic            m_axi_awvalid,
    input  logic            m_axi_awready,
    output logic [127:0]    m_axi_wdata,
    output logic [15:0]     m_axi_wstrb,
    output logic            m_axi_wlast,
    output logic            m_axi_wvalid,
    input  logic            m_axi_wready,
    input  logic [ID_W-1:0] m_axi_bid,
    input  logic [1:0]      m_axi_bresp,
    input  logic            m_axi_bvalid,
    output logic            m_axi_bready,
    output logic [ID_W-1:0] m_axi_arid,
    output logic [31:0]     m_axi_araddr,
    output logic [7:0]      m_axi_arlen,
    output logic [2:0]      m_axi_arsize,
    output logic [1:0]      m_axi_arburst,
    output logic            m_axi_arlock,
    output logic [3:0]      m_axi_arcache,
    output logic [2:0]      m_axi_arprot,
    output logic [3:0]      m_axi_arqos,
    output logic            m_axi_arvalid,
    input  logic            m_axi_arready,
    input  logic [ID_W-1:0] m_axi_rid,
    input  logic [127:0]    m_axi_rdata,
    input  logic [1:0]      m_axi_rresp,
    input  logic            m_axi_rlast,
    input  logic            m_axi_rvalid,
    output logic            m_axi_rready
);
    // Payload widths. WLAST, AxLOCK, AxCACHE, AxPROT and AxQOS are not carried: axi4_master generates WLAST from
    // its beat counter and ties the attribute outputs to the same constants the DMA drives.
    localparam int CMD_W = ID_W + 32 + 8 + 3 + 2;
    localparam int WD_W  = 128 + 16;
    localparam int B_W   = ID_W + 2;
    localparam int R_W   = ID_W + 128 + 2 + 1;

    // axi4_master user side (clk_axi)
    logic                  wr_req, wr_req_ack;
    logic [31:0]           wr_addr;
    logic [7:0]            wr_len;
    logic [2:0]            wr_size;
    logic [1:0]            wr_burst;
    logic [ID_W-1:0]       wr_id;
    logic                  wdata_valid, wdata_ready;
    logic [127:0]          wdata;
    logic [15:0]           wstrb;
    logic                  wr_resp_valid, wr_resp_ready;
    logic [1:0]            wr_resp;
    logic [ID_W-1:0]       wr_resp_id;
    logic                  rd_req, rd_req_ack;
    logic [31:0]           rd_addr;
    logic [7:0]            rd_len;
    logic [2:0]            rd_size;
    logic [1:0]            rd_burst;
    logic [ID_W-1:0]       rd_id;
    logic                  rdata_valid, rdata_ready;
    logic [127:0]          rdata;
    logic                  rlast;
    logic [1:0]            rresp;
    logic [ID_W-1:0]       rid_out;

    // ---------------- write command (AW): clk_tpu -> clk_axi ----------------
    logic wc_full, wc_empty;
    logic [CMD_W-1:0] wc_q;
    asynchronous_fifo #(.DEPTH(FIFO_DEPTH), .DATA_WIDTH(CMD_W)) u_wcmd_fifo (
        .wclk(clk_tpu), .wrst_n(rst_tpu_n), .rclk(clk_axi), .rrst_n(rst_axi_n),
        .w_en(s_axi_awvalid && !wc_full), .r_en(wr_req && wr_req_ack),
        .data_in({s_axi_awid, s_axi_awaddr, s_axi_awlen, s_axi_awsize, s_axi_awburst}),
        .data_out(wc_q), .full(wc_full), .empty(wc_empty));
    assign s_axi_awready = !wc_full;
    assign wr_req        = !wc_empty;
    assign {wr_id, wr_addr, wr_len, wr_size, wr_burst} = wc_q;

    // ---------------- write data (W): clk_tpu -> clk_axi ----------------
    logic wd_full, wd_empty;
    logic [WD_W-1:0] wd_q;
    asynchronous_fifo #(.DEPTH(FIFO_DEPTH), .DATA_WIDTH(WD_W)) u_wdata_fifo (
        .wclk(clk_tpu), .wrst_n(rst_tpu_n), .rclk(clk_axi), .rrst_n(rst_axi_n),
        .w_en(s_axi_wvalid && !wd_full), .r_en(wdata_valid && wdata_ready),
        .data_in({s_axi_wstrb, s_axi_wdata}),
        .data_out(wd_q), .full(wd_full), .empty(wd_empty));
    assign s_axi_wready = !wd_full;
    assign wdata_valid  = !wd_empty;
    assign {wstrb, wdata} = wd_q;

    // ---------------- read command (AR): clk_tpu -> clk_axi ----------------
    logic rc_full, rc_empty;
    logic [CMD_W-1:0] rc_q;
    asynchronous_fifo #(.DEPTH(FIFO_DEPTH), .DATA_WIDTH(CMD_W)) u_rcmd_fifo (
        .wclk(clk_tpu), .wrst_n(rst_tpu_n), .rclk(clk_axi), .rrst_n(rst_axi_n),
        .w_en(s_axi_arvalid && !rc_full), .r_en(rd_req && rd_req_ack),
        .data_in({s_axi_arid, s_axi_araddr, s_axi_arlen, s_axi_arsize, s_axi_arburst}),
        .data_out(rc_q), .full(rc_full), .empty(rc_empty));
    assign s_axi_arready = !rc_full;
    assign rd_req        = !rc_empty;
    assign {rd_id, rd_addr, rd_len, rd_size, rd_burst} = rc_q;

    // ---------------- write response (B): clk_axi -> clk_tpu ----------------
    logic b_full, b_empty;
    logic [B_W-1:0] b_q;
    asynchronous_fifo #(.DEPTH(FIFO_DEPTH), .DATA_WIDTH(B_W)) u_b_fifo (
        .wclk(clk_axi), .wrst_n(rst_axi_n), .rclk(clk_tpu), .rrst_n(rst_tpu_n),
        .w_en(wr_resp_valid && !b_full), .r_en(s_axi_bvalid && s_axi_bready),
        .data_in({wr_resp_id, wr_resp}),
        .data_out(b_q), .full(b_full), .empty(b_empty));
    assign wr_resp_ready = !b_full;
    assign s_axi_bvalid  = !b_empty;
    assign {s_axi_bid, s_axi_bresp} = b_q;

    // ---------------- read data (R): clk_axi -> clk_tpu ----------------
    logic r_full, r_empty;
    logic [R_W-1:0] r_q;
    asynchronous_fifo #(.DEPTH(FIFO_DEPTH), .DATA_WIDTH(R_W)) u_r_fifo (
        .wclk(clk_axi), .wrst_n(rst_axi_n), .rclk(clk_tpu), .rrst_n(rst_tpu_n),
        .w_en(rdata_valid && !r_full), .r_en(s_axi_rvalid && s_axi_rready),
        .data_in({rid_out, rdata, rresp, rlast}),
        .data_out(r_q), .full(r_full), .empty(r_empty));
    assign rdata_ready  = !r_full;
    assign s_axi_rvalid = !r_empty;
    assign {s_axi_rid, s_axi_rdata, s_axi_rresp, s_axi_rlast} = r_q;

    // ---------------- standalone AXI4 master (clk_axi), kept outside this project ----------------
    axi4_master #(
        .ADDR_WIDTH(32),
        .DATA_WIDTH(128),
        .ID_WIDTH  (ID_W)
    ) u_axi4_master (
        .aclk(clk_axi), .aresetn(rst_axi_n),
        .wr_req(wr_req), .wr_req_ack(wr_req_ack), .wr_addr(wr_addr), .wr_len(wr_len),
        .wr_size(wr_size), .wr_burst(wr_burst), .wr_id(wr_id),
        .wdata_valid(wdata_valid), .wdata_ready(wdata_ready), .wdata(wdata), .wstrb(wstrb),
        .wr_resp_valid(wr_resp_valid), .wr_resp_ready(wr_resp_ready), .wr_resp(wr_resp), .wr_resp_id(wr_resp_id),
        .rd_req(rd_req), .rd_req_ack(rd_req_ack), .rd_addr(rd_addr), .rd_len(rd_len),
        .rd_size(rd_size), .rd_burst(rd_burst), .rd_id(rd_id),
        .rdata_valid(rdata_valid), .rdata_ready(rdata_ready), .rdata(rdata), .rlast(rlast),
        .rresp(rresp), .rid_out(rid_out),
        .m_axi_awid(m_axi_awid), .m_axi_awaddr(m_axi_awaddr), .m_axi_awlen(m_axi_awlen),
        .m_axi_awsize(m_axi_awsize), .m_axi_awburst(m_axi_awburst), .m_axi_awlock(m_axi_awlock),
        .m_axi_awcache(m_axi_awcache), .m_axi_awprot(m_axi_awprot), .m_axi_awqos(m_axi_awqos),
        .m_axi_awvalid(m_axi_awvalid), .m_axi_awready(m_axi_awready),
        .m_axi_wdata(m_axi_wdata), .m_axi_wstrb(m_axi_wstrb), .m_axi_wlast(m_axi_wlast),
        .m_axi_wvalid(m_axi_wvalid), .m_axi_wready(m_axi_wready),
        .m_axi_bid(m_axi_bid), .m_axi_bresp(m_axi_bresp), .m_axi_bvalid(m_axi_bvalid), .m_axi_bready(m_axi_bready),
        .m_axi_arid(m_axi_arid), .m_axi_araddr(m_axi_araddr), .m_axi_arlen(m_axi_arlen),
        .m_axi_arsize(m_axi_arsize), .m_axi_arburst(m_axi_arburst), .m_axi_arlock(m_axi_arlock),
        .m_axi_arcache(m_axi_arcache), .m_axi_arprot(m_axi_arprot), .m_axi_arqos(m_axi_arqos),
        .m_axi_arvalid(m_axi_arvalid), .m_axi_arready(m_axi_arready),
        .m_axi_rid(m_axi_rid), .m_axi_rdata(m_axi_rdata), .m_axi_rresp(m_axi_rresp),
        .m_axi_rlast(m_axi_rlast), .m_axi_rvalid(m_axi_rvalid), .m_axi_rready(m_axi_rready)
    );

    logic unused;
    assign unused = &{1'b0, s_axi_awlock, s_axi_awcache, s_axi_awprot, s_axi_awqos, s_axi_wlast,
                      s_axi_arlock, s_axi_arcache, s_axi_arprot, s_axi_arqos};
endmodule
`default_nettype wire

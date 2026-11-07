`timescale 1ns/1ps
// ISP top level
//   CPU --AXI4-Lite--> regs ---------------------------> config / control
//   DMA --AXI4-------> axi4 slave -> 32:8 serializer -> raw2rgb -> img_filter
//                                    -> output FIFO -> AXI4-Stream master --> DMA S2MM
module isp_top #(
    parameter MAX_WIDTH = 2048,
    parameter ID_WIDTH  = 4
)(
    input  wire        clk,
    input  wire        reset_n,

    // ---------------- AXI4-Lite slave (CPU) ----------------
    input  wire [31:0] s_axil_awaddr,
    input  wire        s_axil_awvalid,
    output wire        s_axil_awready,
    input  wire [31:0] s_axil_wdata,
    input  wire [3:0]  s_axil_wstrb,
    input  wire        s_axil_wvalid,
    output wire        s_axil_wready,
    output wire [1:0]  s_axil_bresp,
    output wire        s_axil_bvalid,
    input  wire        s_axil_bready,
    input  wire [31:0] s_axil_araddr,
    input  wire        s_axil_arvalid,
    output wire        s_axil_arready,
    output wire [31:0] s_axil_rdata,
    output wire [1:0]  s_axil_rresp,
    output wire        s_axil_rvalid,
    input  wire        s_axil_rready,

    // ---------------- AXI4 write slave (DMA MM2S -> ISP) ----------------
    input  wire [ID_WIDTH-1:0] s_axi_awid,
    input  wire [31:0] s_axi_awaddr,
    input  wire [7:0]  s_axi_awlen,
    input  wire [2:0]  s_axi_awsize,
    input  wire [1:0]  s_axi_awburst,
    input  wire        s_axi_awvalid,
    output wire        s_axi_awready,
    input  wire [31:0] s_axi_wdata,
    input  wire [3:0]  s_axi_wstrb,
    input  wire        s_axi_wlast,
    input  wire        s_axi_wvalid,
    output wire        s_axi_wready,
    output wire [ID_WIDTH-1:0] s_axi_bid,
    output wire [1:0]  s_axi_bresp,
    output wire        s_axi_bvalid,
    input  wire        s_axi_bready,

    // ---------------- AXI4-Stream master (ISP -> DMA S2MM) ----------------
    output wire [31:0] m_axis_tdata,
    output wire        m_axis_tvalid,
    input  wire        m_axis_tready,
    output wire [3:0]  m_axis_tkeep,
    output wire        m_axis_tlast,
    output wire        m_axis_tuser,

    // ---------------- misc ----------------
    output wire [31:0] raw_base_addr_o,   // for DMA programming by software/SoC glue
    output wire [31:0] stride_o,          // line stride in bytes
    output wire [7:0]  axi_burst_len_o,   // AXI_CFG fields, for DMA / interconnect glue
    output wire [7:0]  axi_outstanding_o,
    output wire [3:0]  axi_qos_o,
    output wire        isp_irq_o
);
    // ---- register block <-> core ----
    wire        isp_start, isp_abort, isp_soft_reset;
    wire [1:0]  sensor_pattern, filter_type;
    wire        filter_enable;
    wire [15:0] image_width, image_height;
    wire        isp_busy, isp_done;
    wire [7:0]  format;

    // ---- datapath wires ----
    wire [7:0]  raw_pixel;
    wire        raw_pixel_valid, raw_active;
    wire        pipe_clear, fifo_flush;
    wire        in_fifo_full, in_fifo_empty, axi_input_error;
    wire [23:0] proc_pixel;
    wire        proc_valid;
    wire        out_sof, out_last, cfg_error;

    // ---- output FIFO / stream ----
    wire [25:0] ofifo_rd;
    wire        ofifo_empty, ofifo_full, ofifo_almost_full;
    wire        ofifo_overflow, ofifo_underflow;
    wire        stream_ready;

    wire frame_done = m_axis_tvalid && m_axis_tready && m_axis_tlast;

    // back-pressure: stall serializer while idle or when the output FIFO is filling
    wire pixel_ready = isp_busy && !ofifo_almost_full;

    wire [3:0] error_events = {cfg_error,          // [3] pixel_processing_error (bad start / size)
                               ofifo_underflow,    // [2] fifo_underflow
                               ofifo_overflow,     // [1] fifo_overflow
                               axi_input_error};   // [0] axi_input_error
    wire error_irq_event = |error_events;

    // sticky debug flags (DEBUG_STATUS): stall / overflow / underflow visibility
    wire [5:0] debug_events = {cfg_error, axi_input_error,
                               isp_busy && ofifo_almost_full,   // [3] output-FIFO stall seen
                               in_fifo_full,                    // [2] input FIFO full seen
                               ofifo_underflow, ofifo_overflow};

    axi_lite_reg_interface #(.ADDR_WIDTH(32), .DATA_WIDTH(32)) u_regs (
        .clk(clk), .reset_n(reset_n),
        .s_axi_awaddr(s_axil_awaddr), .s_axi_awvalid(s_axil_awvalid), .s_axi_awready(s_axil_awready),
        .s_axi_wdata(s_axil_wdata), .s_axi_wstrb(s_axil_wstrb), .s_axi_wvalid(s_axil_wvalid), .s_axi_wready(s_axil_wready),
        .s_axi_bresp(s_axil_bresp), .s_axi_bvalid(s_axil_bvalid), .s_axi_bready(s_axil_bready),
        .s_axi_araddr(s_axil_araddr), .s_axi_arvalid(s_axil_arvalid), .s_axi_arready(s_axil_arready),
        .s_axi_rdata(s_axil_rdata), .s_axi_rresp(s_axil_rresp), .s_axi_rvalid(s_axil_rvalid), .s_axi_rready(s_axil_rready),
        .isp_start_o(isp_start), .isp_abort_o(isp_abort), .isp_soft_reset_o(isp_soft_reset),
        .sensor_pattern_o(sensor_pattern), .filter_type_o(filter_type), .filter_enable_o(filter_enable),
        .image_width_o(image_width), .image_height_o(image_height), .raw_base_addr_o(raw_base_addr_o),
        .stride_o(stride_o), .format_o(format), .axi_burst_len_o(axi_burst_len_o),
        .axi_outstanding_o(axi_outstanding_o), .axi_qos_o(axi_qos_o), .debug_events_i(debug_events),
        .isp_busy_i(isp_busy), .isp_done_i(isp_done),
        .frame_done_i(frame_done),
        .error_irq_event_i(error_irq_event), .error_events_i(error_events),
        .isp_irq_o(isp_irq_o)
    );

    isp_frame_ctrl u_ctrl (
        .clk(clk), .reset_n(reset_n),
        .isp_start_i(isp_start), .isp_abort_i(isp_abort), .isp_soft_reset_i(isp_soft_reset),
        .image_width_i(image_width), .image_height_i(image_height), .format_i(format),
        .raw_pixel_valid_i(raw_pixel_valid), .pipe_pixel_valid_i(proc_valid), .frame_done_i(frame_done),
        .isp_busy_o(isp_busy), .isp_done_o(isp_done), .raw_active_o(raw_active),
        .pipe_clear_o(pipe_clear), .fifo_flush_o(fifo_flush),
        .out_sof_o(out_sof), .out_last_o(out_last), .config_error_o(cfg_error)
    );

    isp_axi4_slave #(.ADDR_WIDTH(32), .DATA_WIDTH(32), .ID_WIDTH(ID_WIDTH), .FIFO_DEPTH(16)) u_axi_in (
        .clk(clk), .reset_n(reset_n), .flush_i(fifo_flush), .pixel_ready_i(pixel_ready),
        .s_axi_awid(s_axi_awid), .s_axi_awaddr(s_axi_awaddr), .s_axi_awlen(s_axi_awlen),
        .s_axi_awsize(s_axi_awsize), .s_axi_awburst(s_axi_awburst),
        .s_axi_awvalid(s_axi_awvalid), .s_axi_awready(s_axi_awready),
        .s_axi_wdata(s_axi_wdata), .s_axi_wstrb(s_axi_wstrb), .s_axi_wlast(s_axi_wlast),
        .s_axi_wvalid(s_axi_wvalid), .s_axi_wready(s_axi_wready),
        .s_axi_bid(s_axi_bid), .s_axi_bresp(s_axi_bresp), .s_axi_bvalid(s_axi_bvalid), .s_axi_bready(s_axi_bready),
        .raw_pixel_data_o(raw_pixel), .raw_pixel_valid_o(raw_pixel_valid),
        .input_fifo_full_o(in_fifo_full), .input_fifo_empty_o(in_fifo_empty),
        .input_error_o(axi_input_error)
    );

    pixel_pipeline #(.MAX_WIDTH(MAX_WIDTH)) u_pipe (
        .clk(clk), .reset_n(reset_n), .clear_i(pipe_clear),
        .raw_pixel(raw_pixel), .pixel_valid(raw_pixel_valid && raw_active),
        .image_width_i(image_width), .sensor_pattern(sensor_pattern),
        .filter_type(filter_type), .filter_enable(filter_enable),
        .processed_pixel(proc_pixel), .pixel_out_valid(proc_valid)
    );

    // output FIFO carries {last, sof, rgb888}
    isp_sync_fifo #(.WIDTH(26), .DEPTH(16), .ALMOST(8)) u_out_fifo (
        .clk(clk), .reset_n(reset_n), .clear(pipe_clear),
        .wr_en(proc_valid), .wr_data({out_last, out_sof, proc_pixel}),
        .rd_en(!ofifo_empty && stream_ready), .rd_data(ofifo_rd),
        .empty(ofifo_empty), .full(ofifo_full), .almost_full(ofifo_almost_full),
        .overflow(ofifo_overflow), .underflow(ofifo_underflow)
    );

    isp_rgb_axi_stream_master #(.DATA_WIDTH(32)) u_axis (
        .clk(clk), .reset_n(reset_n), .flush_i(pipe_clear),
        .pixel_data_i(ofifo_rd[23:0]), .pixel_valid_i(!ofifo_empty),
        .pixel_sof_i(ofifo_rd[24]), .pixel_last_i(ofifo_rd[25]), .pixel_ready_o(stream_ready),
        .m_axis_tdata(m_axis_tdata), .m_axis_tvalid(m_axis_tvalid), .m_axis_tready(m_axis_tready),
        .m_axis_tkeep(m_axis_tkeep), .m_axis_tlast(m_axis_tlast), .m_axis_tuser(m_axis_tuser)
    );
endmodule

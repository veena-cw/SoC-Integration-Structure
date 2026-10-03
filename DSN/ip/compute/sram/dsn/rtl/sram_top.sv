//------------------------------------------------------------------------------
// axi4_sram_top.sv
//
// AXI4 -> CDC FIFO -> 750 MHz SRAM integration
//
// Architecture:
//
//                    400 MHz
//                       |
//                       v
//                +--------------+
//                |  axi4_slave  |
//                +--------------+
//                       |
//                    mem_*
//                       |
//                       v
//                +--------------+
//                | axi_sram_cdc |
//                +--------------+
//                  |          ^
//             Req FIFO      Resp FIFO
//             400 -> 750    750 -> 400
//                  |          |
//                  v          |
//                +--------------+
//                |   tc_sram    |
//                |    750 MHz   |
//                +--------------+
//
// NOTE:
// The original axi_sram_adapter is intentionally not instantiated here.
// Its address conversion and SRAM latency handling are now handled by
// axi_sram_cdc.
//------------------------------------------------------------------------------

`timescale 1ns/1ps

module sram_top #(
    parameter int ADDR_WIDTH     = 32,
    parameter int DATA_WIDTH     = 128,
    parameter int ID_WIDTH       = 4,

    // 1 MB SRAM:
    //
    // 128-bit = 16 bytes/word
    // 1 MB / 16 bytes = 65536 words
    // 65536 = 2^16
    //
    parameter int MEM_ADDR_WIDTH = 16,

    parameter int FIFO_DEPTH     = 8,

    parameter logic [ADDR_WIDTH-1:0] SRAM_BASE_ADDR =
        32'h1070_0000
) (
    //==========================================================================
    // AXI clock domain
    //==========================================================================

    input logic aclk,
    input logic aresetn,

    //==========================================================================
    // SRAM clock domain
    //==========================================================================

    input logic sram_clk,
    input logic sram_resetn,

    //==========================================================================
    // AXI4 WRITE ADDRESS
    //==========================================================================

    input  logic [ID_WIDTH-1:0]     s_axi_awid,
    input  logic [ADDR_WIDTH-1:0]   s_axi_awaddr,
    input  logic [7:0]              s_axi_awlen,
    input  logic [2:0]              s_axi_awsize,
    input  logic [1:0]              s_axi_awburst,
    input  logic                    s_axi_awlock,
    input  logic [3:0]              s_axi_awcache,
    input  logic [2:0]              s_axi_awprot,
    input  logic [3:0]              s_axi_awqos,
    input  logic                    s_axi_awvalid,
    output logic                    s_axi_awready,

    //==========================================================================
    // AXI4 WRITE DATA
    //==========================================================================

    input  logic [DATA_WIDTH-1:0]   s_axi_wdata,
    input  logic [DATA_WIDTH/8-1:0] s_axi_wstrb,
    input  logic                    s_axi_wlast,
    input  logic                    s_axi_wvalid,
    output logic                    s_axi_wready,

    //==========================================================================
    // AXI4 WRITE RESPONSE
    //==========================================================================

    output logic [ID_WIDTH-1:0]     s_axi_bid,
    output logic [1:0]              s_axi_bresp,
    output logic                    s_axi_bvalid,
    input  logic                    s_axi_bready,

    //==========================================================================
    // AXI4 READ ADDRESS
    //==========================================================================

    input  logic [ID_WIDTH-1:0]     s_axi_arid,
    input  logic [ADDR_WIDTH-1:0]   s_axi_araddr,
    input  logic [7:0]              s_axi_arlen,
    input  logic [2:0]              s_axi_arsize,
    input  logic [1:0]              s_axi_arburst,
    input  logic                    s_axi_arlock,
    input  logic [3:0]              s_axi_arcache,
    input  logic [2:0]              s_axi_arprot,
    input  logic [3:0]              s_axi_arqos,
    input  logic                    s_axi_arvalid,
    output logic                    s_axi_arready,

    //==========================================================================
    // AXI4 READ DATA
    //==========================================================================

    output logic [ID_WIDTH-1:0]     s_axi_rid,
    output logic [DATA_WIDTH-1:0]   s_axi_rdata,
    output logic [1:0]              s_axi_rresp,
    output logic                    s_axi_rlast,
    output logic                    s_axi_rvalid,
    input  logic                    s_axi_rready
);

    //==========================================================================
    // AXI slave <-> CDC interface
    //==========================================================================

    logic                         mem_req;
    logic                         mem_we;
    logic [ADDR_WIDTH-1:0]        mem_addr;
    logic [DATA_WIDTH-1:0]        mem_wdata;
    logic [DATA_WIDTH/8-1:0]      mem_wstrb;

    logic [DATA_WIDTH-1:0]        mem_rdata;
    logic                         mem_rvalid;
    logic                         mem_ready;

    //==========================================================================
    // CDC <-> SRAM interface
    //==========================================================================

    logic                         sram_req;
    logic                         sram_we;
    logic [MEM_ADDR_WIDTH-1:0]    sram_addr;
    logic [DATA_WIDTH-1:0]        sram_wdata;
    logic [DATA_WIDTH/8-1:0]      sram_be;
    logic [DATA_WIDTH-1:0]        sram_rdata;

    //==========================================================================
    // AXI4 SLAVE
    //==========================================================================

    axi4_slave #(
        .ADDR_WIDTH     (ADDR_WIDTH),
        .DATA_WIDTH     (DATA_WIDTH),
        .ID_WIDTH       (ID_WIDTH),
        .MEM_ADDR_WIDTH (MEM_ADDR_WIDTH),
        .SRAM_BASE_ADDR (SRAM_BASE_ADDR)
    ) u_axi4_slave (
        .aclk           (aclk),
        .aresetn        (aresetn),

        .s_axi_awid     (s_axi_awid),
        .s_axi_awaddr   (s_axi_awaddr),
        .s_axi_awlen    (s_axi_awlen),
        .s_axi_awsize   (s_axi_awsize),
        .s_axi_awburst  (s_axi_awburst),
        .s_axi_awlock   (s_axi_awlock),
        .s_axi_awcache  (s_axi_awcache),
        .s_axi_awprot   (s_axi_awprot),
        .s_axi_awqos    (s_axi_awqos),
        .s_axi_awvalid  (s_axi_awvalid),
        .s_axi_awready  (s_axi_awready),

        .s_axi_wdata    (s_axi_wdata),
        .s_axi_wstrb    (s_axi_wstrb),
        .s_axi_wlast    (s_axi_wlast),
        .s_axi_wvalid   (s_axi_wvalid),
        .s_axi_wready   (s_axi_wready),

        .s_axi_bid      (s_axi_bid),
        .s_axi_bresp    (s_axi_bresp),
        .s_axi_bvalid   (s_axi_bvalid),
        .s_axi_bready   (s_axi_bready),

        .s_axi_arid     (s_axi_arid),
        .s_axi_araddr   (s_axi_araddr),
        .s_axi_arlen    (s_axi_arlen),
        .s_axi_arsize   (s_axi_arsize),
        .s_axi_arburst  (s_axi_arburst),
        .s_axi_arlock   (s_axi_arlock),
        .s_axi_arcache  (s_axi_arcache),
        .s_axi_arprot   (s_axi_arprot),
        .s_axi_arqos    (s_axi_arqos),
        .s_axi_arvalid  (s_axi_arvalid),
        .s_axi_arready  (s_axi_arready),

        .s_axi_rid      (s_axi_rid),
        .s_axi_rdata    (s_axi_rdata),
        .s_axi_rresp    (s_axi_rresp),
        .s_axi_rlast    (s_axi_rlast),
        .s_axi_rvalid   (s_axi_rvalid),
        .s_axi_rready   (s_axi_rready),

        .mem_req        (mem_req),
        .mem_we         (mem_we),
        .mem_addr       (mem_addr),
        .mem_wdata      (mem_wdata),
        .mem_wstrb      (mem_wstrb),
        .mem_rdata      (mem_rdata),
        .mem_rvalid     (mem_rvalid),
        .mem_ready      (mem_ready)
    );

    //==========================================================================
    // CDC BRIDGE
    //==========================================================================

    axi_sram_cdc #(
        .ADDR_WIDTH     (ADDR_WIDTH),
        .DATA_WIDTH     (DATA_WIDTH),
        .FIFO_DEPTH     (FIFO_DEPTH),
        .MEM_ADDR_WIDTH (MEM_ADDR_WIDTH),
        .SRAM_BASE_ADDR (SRAM_BASE_ADDR)
    ) u_axi_sram_cdc (

        // 400 MHz AXI side
        .axi_clk_i      (aclk),
        .axi_reset_i    (~aresetn),

        .mem_req        (mem_req),
        .mem_we         (mem_we),
        .mem_addr       (mem_addr),
        .mem_wdata      (mem_wdata),
        .mem_wstrb      (mem_wstrb),

        .mem_rdata      (mem_rdata),
        .mem_rvalid     (mem_rvalid),
        .mem_ready      (mem_ready),

        // 750 MHz SRAM side
        .sram_clk_i     (sram_clk),
        .sram_reset_i   (~sram_resetn),

        .sram_req       (sram_req),
        .sram_we        (sram_we),
        .sram_addr      (sram_addr),
        .sram_wdata     (sram_wdata),
        .sram_be        (sram_be),

        .sram_rdata     (sram_rdata)
    );

    //==========================================================================
    // 750 MHz SRAM
    //==========================================================================

    tc_sram #(
        .NumWords    (1 << MEM_ADDR_WIDTH),
        .DataWidth   (DATA_WIDTH),
        .ByteWidth   (8),
        .NumPorts    (1),
        .Latency     (1),
        .SimInit     ("zeros"),
        .PrintSimCfg (1'b1)
    ) u_tc_sram (
        .clk_i   (sram_clk),
        .rst_ni  (sram_resetn),

        .req_i   (sram_req),
        .we_i    (sram_we),
        .addr_i  (sram_addr),
        .wdata_i (sram_wdata),
        .be_i    (sram_be),
        .rdata_o (sram_rdata)
    );

endmodule

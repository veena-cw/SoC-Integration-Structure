module lpddr5c_soc_wrapper #(
    parameter ADDR_WIDTH     = 32,
    parameter DATA_WIDTH     = 128,
    parameter ID_WIDTH       = 4,
    parameter DFI_DATA_WIDTH = 64,
    parameter NUM_CHANNELS   = 1
)(
    //============================================================
    // AXI Clock / Reset - 400 MHz
    //============================================================
    input  wire clk_axi_400,
    input  wire rst_axi_n,

    //============================================================
    // AXI4 Slave Interface from NoC
    //============================================================

    input  wire [ID_WIDTH-1:0]   s_axi_awid,
    input  wire [ADDR_WIDTH-1:0] s_axi_awaddr,
    input  wire [7:0]            s_axi_awlen,
    input  wire [2:0]            s_axi_awsize,
    input  wire [1:0]            s_axi_awburst,
    input  wire                  s_axi_awlock,
    input  wire [3:0]            s_axi_awcache,
    input  wire [2:0]            s_axi_awprot,
    input  wire [3:0]            s_axi_awqos,
    input  wire                  s_axi_awvalid,
    output wire                  s_axi_awready,

    input  wire [DATA_WIDTH-1:0] s_axi_wdata,
    input  wire [DATA_WIDTH/8-1:0] s_axi_wstrb,
    input  wire                  s_axi_wlast,
    input  wire                  s_axi_wvalid,
    output wire                  s_axi_wready,

    output wire [ID_WIDTH-1:0]   s_axi_bid,
    output wire [1:0]            s_axi_bresp,
    output wire                  s_axi_bvalid,
    input  wire                  s_axi_bready,

    input  wire [ID_WIDTH-1:0]   s_axi_arid,
    input  wire [ADDR_WIDTH-1:0] s_axi_araddr,
    input  wire [7:0]            s_axi_arlen,
    input  wire [2:0]            s_axi_arsize,
    input  wire [1:0]            s_axi_arburst,
    input  wire                  s_axi_arlock,
    input  wire [3:0]            s_axi_arcache,
    input  wire [2:0]            s_axi_arprot,
    input  wire [3:0]            s_axi_arqos,
    input  wire                  s_axi_arvalid,
    output wire                  s_axi_arready,

    output wire [ID_WIDTH-1:0]   s_axi_rid,
    output wire [DATA_WIDTH-1:0] s_axi_rdata,
    output wire [1:0]            s_axi_rresp,
    output wire                  s_axi_rlast,
    output wire                  s_axi_rvalid,
    input  wire                  s_axi_rready,

    //============================================================
    // DDR PHY Clock - 800 MHz
    //============================================================
    input wire clk_ddr_800,
    input wire rst_ddr_n,

    //============================================================
    // DFI Interface
    //============================================================
    output wire dfi_clk,
    output wire dfi_rst_n,

    output wire [DFI_DATA_WIDTH*NUM_CHANNELS-1:0] dfi_cs_n,
    output wire [DFI_DATA_WIDTH*NUM_CHANNELS-1:0] dfi_cke,
    output wire [DFI_DATA_WIDTH*NUM_CHANNELS-1:0] dfi_ca,
    output wire dfi_rw,
     output wire [ADDR_WIDTH-1:0]        dfi_addr,

    input wire [DFI_DATA_WIDTH*NUM_CHANNELS-1:0] dfi_rddata,
    input wire dfi_rddata_valid,

    output wire [DFI_DATA_WIDTH*NUM_CHANNELS-1:0] dfi_wrdata,
    output wire [DFI_DATA_WIDTH/8*NUM_CHANNELS-1:0] dfi_wrdata_mask,
    output wire dfi_wrdata_en,

    //============================================================
    // APB
    //============================================================
    input  wire pclk,
    input  wire preset_n,
    input  wire psel,
    input  wire penable,
    input  wire pwrite,
    input  wire [15:0] paddr,
    input  wire [31:0] pwdata,
    output wire [31:0] prdata,
    output wire pready,
    output wire pslverr,

    //============================================================
    // Interrupts
    //============================================================
    output wire intr_init_done,
    output wire intr_refresh_err,
    output wire intr_ecc_err,
    output wire intr_training_err,
    output wire intr_parity_err,

    //============================================================
    // Debug
    //============================================================
    output wire [31:0] debug_bus
);

    //============================================================
    // ONLY ONE INSTANTIATION
    //============================================================

    lpddr5c_top #(
        .ADDR_WIDTH     (ADDR_WIDTH),
        .DATA_WIDTH     (DATA_WIDTH),
        .ID_WIDTH       (ID_WIDTH),
        .DFI_DATA_WIDTH (DFI_DATA_WIDTH),
        .NUM_CHANNELS   (NUM_CHANNELS)
    ) u_lpddr5c_top (

        .sys_clk       (clk_axi_400),
        .sys_rst_n     (rst_axi_n),

        // AXI AW
        .s_axi_awid    (s_axi_awid),
        .s_axi_awaddr  (s_axi_awaddr),
        .s_axi_awlen   (s_axi_awlen),
        .s_axi_awsize  (s_axi_awsize),
        .s_axi_awburst (s_axi_awburst),
        .s_axi_awlock  (s_axi_awlock),
        .s_axi_awcache (s_axi_awcache),
        .s_axi_awprot  (s_axi_awprot),
        .s_axi_awqos   (s_axi_awqos),
        .s_axi_awvalid (s_axi_awvalid),
        .s_axi_awready (s_axi_awready),

        // AXI W
        .s_axi_wdata   (s_axi_wdata),
        .s_axi_wstrb   (s_axi_wstrb),
        .s_axi_wlast   (s_axi_wlast),
        .s_axi_wvalid  (s_axi_wvalid),
        .s_axi_wready  (s_axi_wready),

        // AXI B
        .s_axi_bid     (s_axi_bid),
        .s_axi_bresp   (s_axi_bresp),
        .s_axi_bvalid  (s_axi_bvalid),
        .s_axi_bready  (s_axi_bready),

        // AXI AR
        .s_axi_arid    (s_axi_arid),
        .s_axi_araddr  (s_axi_araddr),
        .s_axi_arlen   (s_axi_arlen),
        .s_axi_arsize  (s_axi_arsize),
        .s_axi_arburst (s_axi_arburst),
        .s_axi_arlock  (s_axi_arlock),
        .s_axi_arcache (s_axi_arcache),
        .s_axi_arprot  (s_axi_arprot),
        .s_axi_arqos   (s_axi_arqos),
        .s_axi_arvalid (s_axi_arvalid),
        .s_axi_arready (s_axi_arready),

        // AXI R
        .s_axi_rid     (s_axi_rid),
        .s_axi_rdata   (s_axi_rdata),
        .s_axi_rresp   (s_axi_rresp),
        .s_axi_rlast   (s_axi_rlast),
        .s_axi_rvalid  (s_axi_rvalid),
        .s_axi_rready  (s_axi_rready),

        // DFI
        .dfi_clk       (dfi_clk),
        .dfi_rst_n     (dfi_rst_n),
        .dfi_cs_n      (dfi_cs_n),
        .dfi_cke       (dfi_cke),
        .dfi_ca        (dfi_ca),
        .dfi_rw        (dfi_rw),
        .dfi_addr      (dfi_addr),
        .dfi_rddata    (dfi_rddata),
        .dfi_rddata_valid(dfi_rddata_valid),
        .dfi_wrdata    (dfi_wrdata),
        .dfi_wrdata_mask(dfi_wrdata_mask),
        .dfi_wrdata_en (dfi_wrdata_en),

        // APB
        .pclk          (pclk),
        .preset_n      (preset_n),
        .psel          (psel),
        .penable       (penable),
        .pwrite        (pwrite),
        .paddr         (paddr),
        .pwdata        (pwdata),
        .prdata        (prdata),
        .pready        (pready),
        .pslverr       (pslverr),

        // Interrupts
        .intr_init_done   (intr_init_done),
        .intr_refresh_err (intr_refresh_err),
        .intr_ecc_err     (intr_ecc_err),
        .intr_training_err(intr_training_err),
        .intr_parity_err  (intr_parity_err),

        // Debug
        .debug_bus      (debug_bus)
    );

endmodule

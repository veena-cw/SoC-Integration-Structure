`timescale 1ns / 1ps

module eth_dma_mac_top #(
    // AXI4-Lite Slave Parameters (CPU MMIO Control)
    parameter int AXIL_ADDR_WIDTH = 32,
    parameter int AXIL_DATA_WIDTH = 32,

    // AXI4 Master Parameters (LPDDR Access)
    parameter int AXI_ADDR_WIDTH  = 64,
    parameter int AXI_DATA_WIDTH  = 64,
    parameter int AXI_ID_WIDTH    = 4
)(
    //--------------------------------------------------------------------------
    // Global Clock & Reset
    //--------------------------------------------------------------------------
    input  logic                         clk,
    input  logic                         rst_n,
    //--------------------------------------------------------------------------
    // AXI4 lite Clock & Reset
    //--------------------------------------------------------------------------
    input  logic                         s_axil_clk,
    input  logic                         s_axil_rst_n,
	
	    //--------------------------------------------------------------------------
    // gtx Clock & Reset
    //--------------------------------------------------------------------------
    input  logic                         gtx_clk,
    input  logic                         gtx_clk90,
	input  logic                         gtx_rst,
	
	input  logic                         logic_clk,
    input  logic                         logic_rst,
    //--------------------------------------------------------------------------
    // 1. AXI4-Lite Slave Interface (CPU Doorbell & MMIO Register Access)
    //--------------------------------------------------------------------------
    input  logic [AXIL_ADDR_WIDTH-1:0]   s_axil_awaddr,
    input  logic [2:0]                   s_axil_awprot,
    input  logic                         s_axil_awvalid,
    output logic                         s_axil_awready,

    input  logic [AXIL_DATA_WIDTH-1:0]   s_axil_wdata,
    input  logic [(AXIL_DATA_WIDTH/8)-1:0] s_axil_wstrb,
    input  logic                         s_axil_wvalid,
    output logic                         s_axil_wready,

    output logic [1:0]                   s_axil_bresp,
    output logic                         s_axil_bvalid,
    input  logic                         s_axil_bready,

    input  logic [AXIL_ADDR_WIDTH-1:0]   s_axil_araddr,
    input  logic [2:0]                   s_axil_arprot,
    input  logic                         s_axil_arvalid,
    output logic                         s_axil_arready,

    output logic [AXIL_DATA_WIDTH-1:0]   s_axil_rdata,
    output logic [1:0]                   s_axil_rresp,
    output logic                         s_axil_rvalid,
    input  logic                         s_axil_rready,

    //--------------------------------------------------------------------------
    // 2. AXI4 Master Interface (Direct Memory Access to LPDDR via NoC)
    //--------------------------------------------------------------------------
    // Write Address Channel
    output logic [AXI_ID_WIDTH-1:0]      m_axi_lpddr_awid,
    output logic [AXI_ADDR_WIDTH-1:0]    m_axi_lpddr_awaddr,
    output logic [7:0]                   m_axi_lpddr_awlen,
    output logic [2:0]                   m_axi_lpddr_awsize,
    output logic [1:0]                   m_axi_lpddr_awburst,
    output logic                         m_axi_lpddr_awlock,
    output logic [3:0]                   m_axi_lpddr_awcache,
    output logic [2:0]                   m_axi_lpddr_awprot,
    output logic                         m_axi_lpddr_awvalid,
    input  logic                         m_axi_lpddr_awready,

    // Write Data Channel
    output logic [AXI_DATA_WIDTH-1:0]    m_axi_lpddr_wdata,
    output logic [(AXI_DATA_WIDTH/8)-1:0] m_axi_lpddr_wstrb,
    output logic                         m_axi_lpddr_wlast,
    output logic                         m_axi_lpddr_wvalid,
    input  logic                         m_axi_lpddr_wready,

    // Write Response Channel
    input  logic [AXI_ID_WIDTH-1:0]      m_axi_lpddr_bid,
    input  logic [1:0]                   m_axi_lpddr_bresp,
    input  logic                         m_axi_lpddr_bvalid,
    output logic                         m_axi_lpddr_bready,

    // Read Address Channel
    output logic [AXI_ID_WIDTH-1:0]      m_axi_lpddr_arid,
    output logic [AXI_ADDR_WIDTH-1:0]    m_axi_lpddr_araddr,
    output logic [7:0]                   m_axi_lpddr_arlen,
    output logic [2:0]                   m_axi_lpddr_arsize,
    output logic [1:0]                   m_axi_lpddr_arburst,
    output logic                         m_axi_lpddr_arlock,
    output logic [3:0]                   m_axi_lpddr_arcache,
    output logic [2:0]                   m_axi_lpddr_arprot,
    output logic                         m_axi_lpddr_arvalid,
    input  logic                         m_axi_lpddr_arready,

    // Read Data Channel
    input  logic [AXI_ID_WIDTH-1:0]      m_axi_lpddr_rid,
    input  logic [AXI_DATA_WIDTH-1:0]    m_axi_lpddr_rdata,
    input  logic [1:0]                   m_axi_lpddr_rresp,
    input  logic                         m_axi_lpddr_rlast,
    input  logic                         m_axi_lpddr_rvalid,
    output logic                         m_axi_lpddr_rready,

    //--------------------------------------------------------------------------
    // 3. RGMII External PHY Interface
    //--------------------------------------------------------------------------
    input  wire logic                    rgmii_rx_clk,
    input  wire logic [3:0]              rgmii_rxd,
    input  wire logic                    rgmii_rx_ctl,
    output wire logic                    rgmii_tx_clk,
    output wire logic [3:0]              rgmii_txd,
    output wire logic                    rgmii_tx_ctl,

    //--------------------------------------------------------------------------
    // 4. Sideband Interrupt Signals to CPU
    //--------------------------------------------------------------------------
    output wire logic                    irq_tx_cmpl,
    output wire logic                    irq_rx_cmpl,
    output wire logic                    irq_DMA_err
);

//==============================================================================
// INTERNAL SIGNAL & INTERFACE DECLARATIONS
//==============================================================================

//------------------------------------------------------------------------------
// 1. DMA register bank <-> integration-side signals
//------------------------------------------------------------------------------
// Integration-side DMA configuration outputs.
logic [2:0]               dma_ctrl_o;
logic [2:0]               int_enable_o;
logic [63:0]              tx_base_addr_o;
logic [31:0]              tx_ring_len_o;
logic [63:0]              rx_base_addr_o;
logic [31:0]              rx_ring_len_o;
logic                     dma_cfg_valid_o;
logic                     dma_cfg_ready_i;
// Integration-side status inputs. Assumed synchronous to s_axi_aclk.
logic [3:0]                dma_status_i; // [0]TX_IDLE [1]RX_IDLE [2]TX_FIFO_ERR [3]RX_FIFO_ERR

// One-cycle event inputs used to set INT_STATUS sticky bits.
logic                      tx_compl_evt_i;
logic                      rx_compl_evt_i;
logic                      err_evt_i;

// Derived interrupt indication: INT_STATUS & INT_ENABLE.
logic                      irq_o;

//------------------------------------------------------------------------------
// 2. AXI4 master interfaces driven by taxi_axi_dma. These are flattened
//    onto the m_axi_lpddr_* top-level ports via continuous assigns below
//    the DMA instantiation (wr_mst covers AW/W/B, rd_mst covers AR/R -
//    together they form the single external AXI4 master bus).
//------------------------------------------------------------------------------
taxi_axi_if #(
    .DATA_W (AXI_DATA_WIDTH),
    .ADDR_W (AXI_ADDR_WIDTH),
    .ID_W   (AXI_ID_WIDTH)
) m_axi_wr_if ();

taxi_axi_if #(
    .DATA_W (AXI_DATA_WIDTH),
    .ADDR_W (AXI_ADDR_WIDTH),
    .ID_W   (AXI_ID_WIDTH)
) m_axi_rd_if ();

//------------------------------------------------------------------------------
// 3. AXI4-Stream data path interfaces: DMA <-> Ethernet MAC
//    NOTE (CDC): taxi_axi_dma runs in the "clk" domain while the MAC's
//    s_axis_tx/m_axis_rx ports are consumed in the "logic_clk" domain
//    (see taxi_eth_mac_1g_rgmii_fifo's internal tx_fifo/rx_fifo). If
//    clk and logic_clk are not the same clock, this boundary needs an
//    async FIFO/CDC bridge - none was provided in this file set, so the
//    two interfaces are wired straight through. Verify clk == logic_clk
//    or insert a CDC bridge before sign-off.
//------------------------------------------------------------------------------
taxi_axis_if #(
    .DATA_W  (8),
    .KEEP_EN (1'b0),
    .ID_EN   (1'b1),
    .ID_W    (8),
    .USER_EN (1'b1),
    .USER_W  (1)
) axis_tx_data_if ();   // taxi_axi_dma.m_axis_rd_data -> MAC.s_axis_tx

taxi_axis_if #(
    .DATA_W  (8),
    .KEEP_EN (1'b0),
    .ID_EN   (1'b1),
    .ID_W    (8),
    .USER_EN (1'b1),
    .USER_W  (1)
) axis_rx_data_if ();   // MAC.m_axis_rx -> taxi_axi_dma.s_axis_wr_data

// MAC TX completion/timestamp stream - not consumed at this integration
// level. Sunk immediately so the MAC never stalls waiting on tready.
taxi_axis_if #(
    .DATA_W (96),
    .KEEP_W (1),
    .ID_EN  (1'b1),
    .ID_W   (8)
) axis_tx_cpl_if ();
assign axis_tx_cpl_if.tready = 1'b1;

// MAC statistics stream (STAT_EN defaults to 1'b0 -> inactive).
// Sunk defensively in case STAT_EN is ever enabled.
taxi_axis_if axis_stat_if ();
assign axis_stat_if.tready = 1'b1;

//------------------------------------------------------------------------------
// 4. DMA descriptor interfaces: read (TX, mem->stream) & write (RX, stream->mem)
//------------------------------------------------------------------------------
taxi_dma_desc_if #(
    .SRC_ADDR_W (AXI_ADDR_WIDTH),
    .SRC_SEL_EN (1'b1),
    .SRC_SEL_W  (1),
    .LEN_W      (16),
    .TAG_W      (8),
    .ID_EN      (1'b1),
    .ID_W       (1)
) rd_desc_req_if ();

taxi_dma_desc_if #(
    .LEN_W (16),
    .TAG_W (8),
    .ID_EN (1'b1),
    .ID_W  (1)
) rd_desc_sts_if ();

taxi_dma_desc_if #(
    .DST_ADDR_W (AXI_ADDR_WIDTH),
    .DST_SEL_EN (1'b1),
    .DST_SEL_W  (1),
    .LEN_W      (16),
    .TAG_W      (8),
    .ID_EN      (1'b1),
    .ID_W       (1)
) wr_desc_req_if ();

taxi_dma_desc_if #(
    .LEN_W (16),
    .TAG_W (8),
    .ID_EN (1'b1),
    .ID_W  (1)
) wr_desc_sts_if ();

// Drive the read (TX) descriptor request from the register bank outputs.
// req_src_* fields come from the TX ring config; req_dst_* is unused on
// a pure read (memory->stream) descriptor.
assign rd_desc_req_if.req_src_addr = tx_base_addr_o;
assign rd_desc_req_if.req_src_sel  = dma_ctrl_o[0];   // TX source select
assign rd_desc_req_if.req_src_asid = 'h0;
assign rd_desc_req_if.req_dst_addr = 'h0;
assign rd_desc_req_if.req_dst_sel  = 'h0;
assign rd_desc_req_if.req_dst_asid = 'h0;
assign rd_desc_req_if.req_imm      = 'h0;
assign rd_desc_req_if.req_imm_en   = 1'b0;
assign rd_desc_req_if.req_len      = tx_ring_len_o[15:0];
assign rd_desc_req_if.req_tag      = 8'h00;
assign rd_desc_req_if.req_id       = 1'b0;
assign rd_desc_req_if.req_dest     = 'h0;
assign rd_desc_req_if.req_user     = 'h0;
assign rd_desc_req_if.req_valid    = dma_ctrl_o[0] & dma_cfg_valid_o;   // TX enable
assign dma_cfg_ready_i             = rd_desc_req_if.req_ready | wr_desc_req_if.req_ready;
// Drive the write (RX) descriptor request from the register bank outputs.
// req_dst_* fields come from the RX ring config; req_src_* is unused on
// a pure write (stream->memory) descriptor.
assign wr_desc_req_if.req_src_addr = 'h0;
assign wr_desc_req_if.req_src_sel  = 'h0;
assign wr_desc_req_if.req_src_asid = 'h0;
assign wr_desc_req_if.req_dst_addr = rx_base_addr_o;
assign wr_desc_req_if.req_dst_sel  = dma_ctrl_o[1];   // RX destination select
assign wr_desc_req_if.req_dst_asid = 'h0;
assign wr_desc_req_if.req_imm      = 'h0;
assign wr_desc_req_if.req_imm_en   = 1'b0;
assign wr_desc_req_if.req_len      = rx_ring_len_o[15:0];
assign wr_desc_req_if.req_tag      = 8'h00;
assign wr_desc_req_if.req_id       = 1'b0;
assign wr_desc_req_if.req_dest     = 'h0;
assign wr_desc_req_if.req_user     = 'h0;
assign wr_desc_req_if.req_valid    = dma_ctrl_o[1] & dma_cfg_valid_o;   // RX enable


//------------------------------------------------------------------------------
// 5. MAC status signals
//------------------------------------------------------------------------------
logic                 tx_error_underflow;
logic                 tx_fifo_overflow;
logic                 tx_fifo_bad_frame;
logic                 tx_fifo_good_frame;
logic                 rx_error_bad_frame;
logic                 rx_error_bad_fcs;
logic                 rx_fifo_overflow;
logic                 rx_fifo_bad_frame;
logic                 rx_fifo_good_frame;
logic [1:0]           link_speed;


//==============================================================================
// INSTANCE 1/3 : AXI4-Lite DMA Register Bank (CPU MMIO control)
//==============================================================================
// NOTE: axi4lite_dma_regbank source was not part of this review's file set;
// its port list is assumed correct as originally authored. The only issues
// fixed here are the missing statement terminator and wiring the previously
// undriven dma_status_i / *_compl_evt_i / err_evt_i inputs and irq outputs.
axi4lite_dma_regbank #(32'h0000_0000)
    dma_regbank_inst (
    .s_axi_aclk    (s_axil_clk),
    .s_axi_aresetn (s_axil_rst_n),

    // AXI4-Lite write address channel
    .s_axi_awaddr  (s_axil_awaddr),
    .s_axi_awprot  (s_axil_awprot),
    .s_axi_awvalid (s_axil_awvalid),
    .s_axi_awready (s_axil_awready),

    // AXI4-Lite write data channel
    .s_axi_wdata   (s_axil_wdata),
    .s_axi_wstrb   (s_axil_wstrb),
    .s_axi_wvalid  (s_axil_wvalid),
    .s_axi_wready  (s_axil_wready),

    // AXI4-Lite write response channel
    .s_axi_bresp   (s_axil_bresp),
    .s_axi_bvalid  (s_axil_bvalid),
    .s_axi_bready  (s_axil_bready),

    // AXI4-Lite read address channel
    .s_axi_araddr  (s_axil_araddr),
    .s_axi_arprot  (s_axil_arprot),
    .s_axi_arvalid (s_axil_arvalid),
    .s_axi_arready (s_axil_arready),

    // AXI4-Lite read data channel
    .s_axi_rdata   (s_axil_rdata),
    .s_axi_rresp   (s_axil_rresp),
    .s_axi_rvalid  (s_axil_rvalid),
    .s_axi_rready  (s_axil_rready),

    // Integration-side DMA configuration outputs.
    .dma_ctrl_o     (dma_ctrl_o),
    .int_enable_o   (int_enable_o),
    .tx_base_addr_o (tx_base_addr_o),
    .tx_ring_len_o  (tx_ring_len_o),
    .rx_base_addr_o (rx_base_addr_o),
    .rx_ring_len_o  (rx_ring_len_o),
    .dma_cfg_valid_o(dma_cfg_valid_o),
	.dma_cfg_ready_i (dma_cfg_ready_i),
    // Integration-side status inputs. Assumed synchronous to s_axi_aclk.
    .dma_status_i   (dma_status_i), // [0]TX_IDLE [1]RX_IDLE [2]TX_FIFO_ERR [3]RX_FIFO_ERR

    // One-cycle event inputs used to set INT_STATUS sticky bits.
    .tx_compl_evt_i (tx_compl_evt_i),
    .rx_compl_evt_i (rx_compl_evt_i),
    .err_evt_i      (err_evt_i),

    // Derived interrupt indication: INT_STATUS & INT_ENABLE.
    .irq_o          (irq_o)
);


//==============================================================================
// INSTANCE 2/3 : AXI4 DMA engine (LPDDR memory <-> AXI-Stream)
//==============================================================================
taxi_axi_dma #(
    .AXI_MAX_BURST_LEN (16),
    .UNALIGNED_EN      (1'b1)
) taxi_axi_dma_inst (
    .clk (clk),
    .rst (~rst_n),                  // taxi library convention: active-high reset

    /*
     * DMA read descriptor (TX path: memory -> stream)
     */
    .rd_desc_req (rd_desc_req_if),
    .rd_desc_sts (rd_desc_sts_if),

    /*
     * DMA write descriptor (RX path: stream -> memory)
     */
    .wr_desc_req (wr_desc_req_if),
    .wr_desc_sts (wr_desc_sts_if),

    /*
     * AXI stream read data output -> Ethernet MAC TX
     */
    .m_axis_rd_data (axis_tx_data_if),

    /*
     * AXI stream write data input <- Ethernet MAC RX
     */
    .s_axis_wr_data (axis_rx_data_if),

    /*
     * AXI4 master interface -> LPDDR (flattened to m_axi_lpddr_* below)
     */
    .m_axi_wr (m_axi_wr_if),
    .m_axi_rd (m_axi_rd_if),

    /*
     * Configuration
     */
    .read_enable  (dma_ctrl_o[0]),   // corrected: TX/read now consistently bit 0
    .write_enable (dma_ctrl_o[1]),   // corrected: RX/write now consistently bit 1
    .write_abort  (dma_ctrl_o[2])
);

//------------------------------------------------------------------------------
// AXI4 master interface -> flattened LPDDR top-level ports
//------------------------------------------------------------------------------
// Write address channel
assign m_axi_lpddr_awid    = m_axi_wr_if.awid;
assign m_axi_lpddr_awaddr  = m_axi_wr_if.awaddr;
assign m_axi_lpddr_awlen   = m_axi_wr_if.awlen;
assign m_axi_lpddr_awsize  = m_axi_wr_if.awsize;
assign m_axi_lpddr_awburst = m_axi_wr_if.awburst;
assign m_axi_lpddr_awlock  = m_axi_wr_if.awlock;
assign m_axi_lpddr_awcache = m_axi_wr_if.awcache;
assign m_axi_lpddr_awprot  = m_axi_wr_if.awprot;
assign m_axi_lpddr_awvalid = m_axi_wr_if.awvalid;
assign m_axi_wr_if.awready = m_axi_lpddr_awready;

// Write data channel
assign m_axi_lpddr_wdata  = m_axi_wr_if.wdata;
assign m_axi_lpddr_wstrb  = m_axi_wr_if.wstrb;
assign m_axi_lpddr_wlast  = m_axi_wr_if.wlast;
assign m_axi_lpddr_wvalid = m_axi_wr_if.wvalid;
assign m_axi_wr_if.wready = m_axi_lpddr_wready;

// Write response channel
assign m_axi_wr_if.bid    = m_axi_lpddr_bid;
assign m_axi_wr_if.bresp  = m_axi_lpddr_bresp;
assign m_axi_wr_if.bvalid = m_axi_lpddr_bvalid;
assign m_axi_lpddr_bready = m_axi_wr_if.bready;

// Read address channel
assign m_axi_lpddr_arid    = m_axi_rd_if.arid;
assign m_axi_lpddr_araddr  = m_axi_rd_if.araddr;
assign m_axi_lpddr_arlen   = m_axi_rd_if.arlen;
assign m_axi_lpddr_arsize  = m_axi_rd_if.arsize;
assign m_axi_lpddr_arburst = m_axi_rd_if.arburst;
assign m_axi_lpddr_arlock  = m_axi_rd_if.arlock;
assign m_axi_lpddr_arcache = m_axi_rd_if.arcache;
assign m_axi_lpddr_arprot  = m_axi_rd_if.arprot;
assign m_axi_lpddr_arvalid = m_axi_rd_if.arvalid;
assign m_axi_rd_if.arready = m_axi_lpddr_arready;

// Read data channel
assign m_axi_rd_if.rid    = m_axi_lpddr_rid;
assign m_axi_rd_if.rdata  = m_axi_lpddr_rdata;
assign m_axi_rd_if.rresp  = m_axi_lpddr_rresp;
assign m_axi_rd_if.rlast  = m_axi_lpddr_rlast;
assign m_axi_rd_if.rvalid = m_axi_lpddr_rvalid;
assign m_axi_lpddr_rready = m_axi_rd_if.rready;


//==============================================================================
// INSTANCE 3/3 : 1G Ethernet MAC with RGMII PHY interface + TX/RX FIFOs
//==============================================================================
taxi_eth_mac_1g_rgmii_fifo taxi_eth_mac_1g_rgmii_fifo_inst (
    .gtx_clk   (gtx_clk),
    .gtx_clk90 (gtx_clk90),
    .gtx_rst   (gtx_rst),
    .logic_clk (logic_clk),
    .logic_rst (logic_rst),

    /*
     * Transmit interface (AXI stream) <- DMA read data
     */
    .s_axis_tx     (axis_tx_data_if),
    .m_axis_tx_cpl (axis_tx_cpl_if),

    /*
     * Receive interface (AXI stream) -> DMA write data
     */
    .m_axis_rx (axis_rx_data_if),

    /*
     * RGMII interface
     */
    .rgmii_rx_clk (rgmii_rx_clk),
    .rgmii_rxd    (rgmii_rxd),
    .rgmii_rx_ctl (rgmii_rx_ctl),
    .rgmii_tx_clk (rgmii_tx_clk),
    .rgmii_txd    (rgmii_txd),
    .rgmii_tx_ctl (rgmii_tx_ctl),

    /*
     * Statistics (STAT_EN defaults to 0; sunk defensively above)
     */
    .stat_clk    (logic_clk),
    .stat_rst    (logic_rst),
    .m_axis_stat (axis_stat_if),

    /*
     * Status
     */
    .tx_error_underflow (tx_error_underflow),
    .tx_fifo_overflow   (tx_fifo_overflow),
    .tx_fifo_bad_frame  (tx_fifo_bad_frame),
    .tx_fifo_good_frame (tx_fifo_good_frame),
    .rx_error_bad_frame (rx_error_bad_frame),
    .rx_error_bad_fcs   (rx_error_bad_fcs),
    .rx_fifo_overflow   (rx_fifo_overflow),
    .rx_fifo_bad_frame  (rx_fifo_bad_frame),
    .rx_fifo_good_frame (rx_fifo_good_frame),
    .link_speed         (link_speed),

    /*
     * Configuration
     */
    .cfg_tx_pad_en      (1'b1),
    .cfg_tx_min_pkt_len (8'd60 - 1),
    .cfg_tx_max_pkt_len (16'd1518 - 1),
    .cfg_tx_ifg         (8'd12),
    .cfg_tx_enable      (1'b1),
    .cfg_rx_max_pkt_len (16'd1518 - 1),
    .cfg_rx_enable      (1'b1)
);


//==============================================================================
// STATUS & INTERRUPT DERIVATION (glue logic)
//==============================================================================
// NOTE: axi4lite_dma_regbank internals (exact INT_STATUS/INT_ENABLE bit map)
// were not provided, so irq_tx_cmpl/irq_rx_cmpl/irq_DMA_err are qualified
// from the combined irq_o using int_enable_o as a placeholder split. Replace
// with the real per-event status bits once the regbank source is available.
assign dma_status_i[0] = rd_desc_req_if.req_ready;                    // TX_IDLE
assign dma_status_i[1] = wr_desc_req_if.req_ready;                    // RX_IDLE
assign dma_status_i[2] = tx_fifo_overflow | tx_fifo_bad_frame;        // TX_FIFO_ERR
assign dma_status_i[3] = rx_fifo_overflow | rx_fifo_bad_frame;        // RX_FIFO_ERR

assign tx_compl_evt_i = axis_tx_cpl_if.tvalid;                        // frame TX complete
assign rx_compl_evt_i = rx_fifo_good_frame;                           // frame RX complete
assign err_evt_i      = tx_error_underflow | tx_fifo_overflow | tx_fifo_bad_frame |
                         rx_error_bad_frame | rx_error_bad_fcs       |
                         rx_fifo_overflow   | rx_fifo_bad_frame      |
                         (rd_desc_sts_if.sts_valid & |rd_desc_sts_if.sts_error) |
                         (wr_desc_sts_if.sts_valid & |wr_desc_sts_if.sts_error);

assign irq_tx_cmpl = irq_o & int_enable_o[0];
assign irq_rx_cmpl = irq_o & int_enable_o[1];
assign irq_DMA_err = irq_o & int_enable_o[2];

endmodule


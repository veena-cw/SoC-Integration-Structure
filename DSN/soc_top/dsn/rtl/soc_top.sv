
/*
 * soc_top.sv
 *
 * Integration wrapper for:
 *   - pmu_top
 *   - rom_ctrl
 *   - bp_fe_top
 *   - bp_lce
 *
 * IMPORTANT:
 * bp_fe_top already instantiates bp_fe_pc_gen internally (instance "pc_gen").
 * That is the PC generator used by the real frontend. This wrapper therefore
 * does not add a second, disconnected PC generator.
 *
 * The LCE's BedRock ports are exposed at this top level and must be connected
 * to a compatible CCE/coherence network by the surrounding SoC.
 */

`include "bp_common_defines.svh"
`include "bp_fe_defines.svh"
`include "bp_me_defines.svh"

module soc_top_stub
  import bp_common_pkg::*;
  import bp_fe_pkg::*;
  import bp_be_pkg::*;
#(
  parameter bp_params_e bp_params_p = e_bp_default_cfg,
  parameter int PMU_DIV_WIDTH = 8,

  // Boot ROM controller configuration
  parameter BootRomInitFile = "",
  parameter int ROM_SIZE_BYTES = 32'h8000,
  parameter bit ROM_DISABLE_SCRAMBLING = 1'b1,
    // LPDDR5 controller parameters
  parameter int LPDDR5_ADDR_WIDTH     = 32,
  parameter int LPDDR5_DATA_WIDTH     = 128,
  parameter int LPDDR5_ID_WIDTH       = 4,
  parameter int LPDDR5_DFI_DATA_WIDTH = 64,
  parameter int LPDDR5_NUM_CHANNELS   = 1

  `declare_bp_proc_params(bp_params_p)
  `declare_bp_core_if_widths(vaddr_width_p, paddr_width_p, asid_width_p,
                             branch_metadata_fwd_width_p)
  `declare_bp_fe_icache_engine_if_widths(
      paddr_width_p, icache_tag_width_p, icache_sets_p, icache_assoc_p,
      icache_data_width_p, icache_block_width_p, icache_fill_width_p,
      icache_req_id_width_p
  )
  , localparam cfg_bus_width_lp =
      `bp_cfg_bus_width(vaddr_width_p, hio_width_p, core_id_width_p,
                        cce_id_width_p, lce_id_width_p, did_width_p)
  `declare_bp_bedrock_if_widths(
      paddr_width_p, lce_id_width_p, cce_id_width_p, did_width_p, lce_assoc_p
  )
  `declare_bp_cache_engine_generic_if_widths(
      paddr_width_p, icache_tag_width_p, icache_sets_p, icache_assoc_p,
      icache_data_width_p, icache_block_width_p, icache_fill_width_p,
      icache_req_id_width_p, cache
  )
)
(
  // Reference clock and reset for the PMU
  input  logic ref_clk_i,
  input  logic rst_n_i,
  input  logic pll_lock_i,

  // PMU register access (synchronous to ref_clk_i)
  input  logic       pmu_reg_wr_en_i,
  input  logic [3:0] pmu_reg_addr_i,
  input  logic [7:0] pmu_reg_wdata_i,
  output logic [7:0] pmu_reg_rdata_o,

  // Frontend configuration and command interface
  input  logic [cfg_bus_width_lp-1:0] cfg_bus_i,
  input  logic [fe_cmd_width_lp-1:0]  fe_cmd_i,
  input  logic                        fe_cmd_v_i,
  output logic                        fe_cmd_yumi_o,

  // Frontend queue to the backend/core
  output logic [fe_queue_width_lp-1:0] fe_queue_o,
  output logic                        fe_queue_v_o,
  input  logic                        fe_queue_ready_and_i,

  // LCE identity and configuration (must match the SoC/CCE configuration)
  input  logic [did_width_p-1:0]     lce_did_i,
  input  logic [lce_id_width_p-1:0]   lce_id_i,
  input  bp_common_pkg::bp_lce_mode_e lce_mode_i,

  // LCE <-> CCE BedRock request interface
  output logic [lce_req_header_width_lp-1:0] lce_req_header_o,
  output logic [bedrock_fill_width_p-1:0]    lce_req_data_o,
  output logic                               lce_req_v_o,
  input  logic                               lce_req_ready_and_i,

  // CCE -> LCE command interface
  input  logic [lce_cmd_header_width_lp-1:0] lce_cmd_header_i,
  input  logic [bedrock_fill_width_p-1:0]    lce_cmd_data_i,
  input  logic                               lce_cmd_v_i,
  output logic                               lce_cmd_ready_and_o,

  // CCE -> LCE fill interface
  input  logic [lce_fill_header_width_lp-1:0] lce_fill_header_i,
  input  logic [bedrock_fill_width_p-1:0]     lce_fill_data_i,
  input  logic                                lce_fill_v_i,
  output logic                                lce_fill_ready_and_o,

  // LCE -> CCE fill response interface
  output logic [lce_fill_header_width_lp-1:0] lce_fill_header_o,
  output logic [bedrock_fill_width_p-1:0]     lce_fill_data_o,
  output logic                                lce_fill_v_o,
  input  logic                                lce_fill_ready_and_i,

  // LCE -> CCE response interface
  output logic [lce_resp_header_width_lp-1:0] lce_resp_header_o,
  output logic [bedrock_fill_width_p-1:0]     lce_resp_data_o,
  output logic                                lce_resp_v_o,
  input  logic                                lce_resp_ready_and_i,

  // Useful PMU clock-domain outputs for the rest of the SoC
  output logic clk_cpu_o,
  output logic rst_cpu_n_o,
  output logic clk_noc_o,
  output logic rst_noc_n_o,
  output logic clk_ddr_o,
  output logic rst_ddr_n_o,
  output logic clk_periph_o,
  output logic rst_periph_n_o,

  // ------------------------------------------------------------------------
  // Boot ROM TileLink interfaces.
  // Connect these to the SoC TileLink interconnect/address decoder.
  // ------------------------------------------------------------------------
  input  tlul_pkg::tl_h2d_t rom_tl_i,
  output tlul_pkg::tl_d2h_t rom_tl_o,
  input  tlul_pkg::tl_h2d_t rom_regs_tl_i,
  output tlul_pkg::tl_d2h_t rom_regs_tl_o,

  // ROM configuration and alert interface
  input  prim_rom_pkg::rom_cfg_req_t rom_cfg_i,
  output prim_rom_pkg::rom_cfg_rsp_t rom_cfg_o,
  input  prim_alert_pkg::alert_rx_t [rom_ctrl_reg_pkg::NumAlerts-1:0] rom_alert_rx_i,
  output prim_alert_pkg::alert_tx_t [rom_ctrl_reg_pkg::NumAlerts-1:0] rom_alert_tx_o,

  // Boot ROM controller connections to power manager, key manager and KMAC
  output rom_ctrl_pkg::pwrmgr_data_t rom_pwrmgr_data_o,
  output rom_ctrl_pkg::keymgr_data_t rom_keymgr_data_o,
  input  kmac_pkg::app_rsp_t rom_kmac_data_i,
    output kmac_pkg::app_req_t rom_kmac_data_o,

  // ============================================================
  // LPDDR5 AXI CLOCK AND RESET
  // ============================================================
  input logic lpddr5_clk_axi_i,
  input logic lpddr5_rst_axi_n_i,

  // ============================================================
  // LPDDR5 AXI WRITE ADDRESS CHANNEL
  // ============================================================
  input logic [LPDDR5_ID_WIDTH-1:0]   s_axi_awid,
  input logic [LPDDR5_ADDR_WIDTH-1:0] s_axi_awaddr,
  input logic [7:0]                   s_axi_awlen,
  input logic [2:0]                   s_axi_awsize,
  input logic [1:0]                   s_axi_awburst,
  input logic                         s_axi_awlock,
  input logic [3:0]                   s_axi_awcache,
  input logic [2:0]                   s_axi_awprot,
  input logic [3:0]                   s_axi_awqos,
  input logic                         s_axi_awvalid,
  output logic                        s_axi_awready,

  // ============================================================
  // LPDDR5 AXI WRITE DATA CHANNEL
  // ============================================================
  input logic [LPDDR5_DATA_WIDTH-1:0]   s_axi_wdata,
  input logic [LPDDR5_DATA_WIDTH/8-1:0] s_axi_wstrb,
  input logic                           s_axi_wlast,
  input logic                           s_axi_wvalid,
  output logic                          s_axi_wready,

  // ============================================================
  // LPDDR5 AXI WRITE RESPONSE CHANNEL
  // ============================================================
  output logic [LPDDR5_ID_WIDTH-1:0] s_axi_bid,
  output logic [1:0]                 s_axi_bresp,
  output logic                       s_axi_bvalid,
  input logic                        s_axi_bready,

  // ============================================================
  // LPDDR5 AXI READ ADDRESS CHANNEL
  // ============================================================
  input logic [LPDDR5_ID_WIDTH-1:0]   s_axi_arid,
  input logic [LPDDR5_ADDR_WIDTH-1:0] s_axi_araddr,
  input logic [7:0]                   s_axi_arlen,
  input logic [2:0]                   s_axi_arsize,
  input logic [1:0]                   s_axi_arburst,
  input logic                         s_axi_arlock,
  input logic [3:0]                   s_axi_arcache,
  input logic [2:0]                   s_axi_arprot,
  input logic [3:0]                   s_axi_arqos,
  input logic                         s_axi_arvalid,
  output logic                        s_axi_arready,

  // ============================================================
  // LPDDR5 AXI READ DATA CHANNEL
  // ============================================================
  output logic [LPDDR5_ID_WIDTH-1:0]   s_axi_rid,
  output logic [LPDDR5_DATA_WIDTH-1:0] s_axi_rdata,
  output logic [1:0]                   s_axi_rresp,
  output logic                         s_axi_rlast,
  output logic                         s_axi_rvalid,
  input logic                          s_axi_rready,

  // ============================================================
  // LPDDR5 DDR CLOCK AND RESET
  // ============================================================
  input logic lpddr5_clk_ddr_800_i,
  input logic lpddr5_rst_ddr_n_i,

  // ============================================================
  // LPDDR5 DFI INTERFACE
  // ============================================================
  output logic dfi_clk,
  output logic dfi_rst_n,

  output logic
    [LPDDR5_DFI_DATA_WIDTH*LPDDR5_NUM_CHANNELS-1:0] dfi_cs_n,

  output logic
    [LPDDR5_DFI_DATA_WIDTH*LPDDR5_NUM_CHANNELS-1:0] dfi_cke,

  output logic
    [LPDDR5_DFI_DATA_WIDTH*LPDDR5_NUM_CHANNELS-1:0] dfi_ca,

  output logic dfi_rw,

  output logic [LPDDR5_ADDR_WIDTH-1:0] dfi_addr,

  input logic
    [LPDDR5_DFI_DATA_WIDTH*LPDDR5_NUM_CHANNELS-1:0] dfi_rddata,

  input logic dfi_rddata_valid,

  output logic
    [LPDDR5_DFI_DATA_WIDTH*LPDDR5_NUM_CHANNELS-1:0] dfi_wrdata,

  output logic
    [LPDDR5_DFI_DATA_WIDTH/8*LPDDR5_NUM_CHANNELS-1:0]
      dfi_wrdata_mask,

  output logic dfi_wrdata_en,

  // ============================================================
  // LPDDR5 APB CONFIGURATION INTERFACE
  // ============================================================
  input logic        lpddr5_pclk_i,
  input logic        lpddr5_preset_n_i,
  input logic        psel,
  input logic        penable,
  input logic        pwrite,
  input logic [15:0] paddr,
  input logic [31:0] pwdata,

  output logic [31:0] prdata,
  output logic        pready,
  output logic        pslverr,

  // ============================================================
  // LPDDR5 INTERRUPTS
  // ============================================================
      // LPDDR5 interrupts
  output logic intr_init_done,
  output logic intr_refresh_err,
  output logic intr_ecc_err,
  output logic intr_training_err,
  output logic intr_parity_err,

  // LPDDR5 debug output
  output logic [31:0] debug_bus,

  // ============================================================
  // UART APB INTERFACE
  // ============================================================
  input  logic        uart_psel_i,
  input  logic        uart_penable_i,
  input  logic        uart_pwrite_i,
  input  logic [31:0] uart_paddr_i,
  input  logic [31:0] uart_pwdata_i,
  input  logic [3:0]  uart_pstrb_i,

  output logic [31:0] uart_prdata_o,
  output logic        uart_pready_o,
  output logic        uart_pslverr_o,

  input  logic        uart_divisor_load_i,
  input  logic        uart_irq_en_i,
  input  logic        uart_rx_i,
  output logic        uart_tx_o,
  input  logic        uart_cts_n_i,
  output logic        uart_rts_n_o,
  output logic        uart_irq_o,

   // ============================================================
  // SPI APB INTERFACE
  // ============================================================
  input  logic        spi_psel_i,
  input  logic        spi_penable_i,
  input  logic        spi_pwrite_i,
  input  logic [31:0] spi_paddr_i,
  input  logic [31:0] spi_pwdata_i,
  input  logic [3:0]  spi_pstrb_i,

  output logic [31:0] spi_prdata_o,
  output logic        spi_pready_o,
  output logic        spi_pslverr_o,

  output logic        spi_sck_o,
  output logic        spi_mosi_o,
  output logic        spi_miso_o,
  output logic [3:0]  spi_cs_n_o,
  output logic        spi_irq_o,
  // ============================================================
  // I2C APB INTERFACE
  // ============================================================
  input  logic [31:0] i2c_paddr_i,
  input  logic        i2c_pwrite_i,
  input  logic        i2c_psel_i,
  input  logic        i2c_penable_i,
  input  logic [31:0] i2c_pwdata_i,
  input  logic [3:0]  i2c_pstrb_i,

  output logic [31:0] i2c_prdata_o,
  output logic        i2c_pslverr_o,
  output logic        i2c_pready_o,

  input  logic        i2c_irq_en_i,
  output logic        i2c_irq_o,
  output logic        i2c_scl_o,
  inout  wire         i2c_sda_io,
    // ============================================================
  // GPIO APB INTERFACE
  // ============================================================
  input  logic        gpio_psel_i,
  input  logic        gpio_penable_i,
  input  logic        gpio_pwrite_i,
  input  logic [31:0] gpio_paddr_i,
  input  logic [31:0] gpio_pwdata_i,
  input  logic [3:0]  gpio_pstrb_i,

  output logic [31:0] gpio_prdata_o,
  output logic        gpio_pready_o,
  output logic        gpio_pslverr_o,

  input  logic [31:0] gpio_in_pad_i,
  output logic [31:0] gpio_out_pad_o,
  output logic [31:0] gpio_oen_padoe_o,
  output logic [3:0]  gpio_irq_o,
      // ==========================================================
    // USB AXI and controller clocks/resets
    // ==========================================================
    input  logic        usb_axi_clk_i,
    input  logic        usb_axi_rst_n_i,
    input  logic        usb_clk_i,
    input  logic        usb_rst_n_i,

    // ==========================================================
    // USB AXI4 Write Address Channel
    // ==========================================================
    input  logic [3:0]  usb_awid_i,
    input  logic [31:0] usb_awaddr_i,
    input  logic [7:0]  usb_awlen_i,
    input  logic [2:0]  usb_awsize_i,
    input  logic [1:0]  usb_awburst_i,
    input  logic        usb_awlock_i,
    input  logic [3:0]  usb_awcache_i,
    input  logic [2:0]  usb_awprot_i,
    input  logic [3:0]  usb_awqos_i,
    input  logic        usb_awvalid_i,
    output logic        usb_awready_o,

    // ==========================================================
    // USB AXI4 Write Data Channel
    // ==========================================================
    input  logic [31:0] usb_wdata_i,
    input  logic [3:0]  usb_wstrb_i,
    input  logic        usb_wlast_i,
    input  logic        usb_wvalid_i,
    output logic        usb_wready_o,

    // ==========================================================
    // USB AXI4 Write Response Channel
    // ==========================================================
    output logic [3:0]  usb_bid_o,
    output logic [1:0]  usb_bresp_o,
    output logic        usb_bvalid_o,
    input  logic        usb_bready_i,

    // ==========================================================
    // USB AXI4 Read Address Channel
    // ==========================================================
    input  logic [3:0]  usb_arid_i,
    input  logic [31:0] usb_araddr_i,
    input  logic [7:0]  usb_arlen_i,
    input  logic [2:0]  usb_arsize_i,
    input  logic [1:0]  usb_arburst_i,
    input  logic        usb_arlock_i,
    input  logic [3:0]  usb_arcache_i,
    input  logic [2:0]  usb_arprot_i,
    input  logic [3:0]  usb_arqos_i,
    input  logic        usb_arvalid_i,
    output logic        usb_arready_o,

    // ==========================================================
    // USB AXI4 Read Data Channel
    // ==========================================================
    output logic [3:0]  usb_rid_o,
    output logic [31:0] usb_rdata_o,
    output logic [1:0]  usb_rresp_o,
    output logic        usb_rlast_o,
    output logic        usb_rvalid_o,
    input  logic        usb_rready_i,

    // ==========================================================
    // USB UTMI Interface
    // ==========================================================
    input  logic [7:0]  usb_utmi_data_in_i,
    input  logic        usb_utmi_txready_i,
    input  logic        usb_utmi_rxvalid_i,
    input  logic        usb_utmi_rxactive_i,
    input  logic        usb_utmi_rxerror_i,
    input  logic [1:0]  usb_utmi_linestate_i,

    output logic [7:0]  usb_utmi_data_out_o,
    output logic        usb_utmi_txvalid_o,
    output logic [1:0]  usb_utmi_op_mode_o,
    output logic [1:0]  usb_utmi_xcvrselect_o,
    output logic        usb_utmi_termselect_o,
    output logic        usb_utmi_dppulldown_o,
    output logic        usb_utmi_dmpulldown_o,

    // ==========================================================
    // USB Interrupt
    // ==========================================================
    output logic        usb_intr_o,
// ==========================================================
    // ethernet 
    // ==========================================================
	input  logic         eth_axil_clk_i,
input  logic         eth_axil_rst_n_i,

input  logic [31:0]  eth_awaddr_i,
input  logic [2:0]   eth_awprot_i,
input  logic         eth_awvalid_i,
output logic         eth_awready_o,

input  logic [31:0]  eth_wdata_i,
input  logic [3:0]   eth_wstrb_i,
input  logic         eth_wvalid_i,
output logic         eth_wready_o,

output logic [1:0]   eth_bresp_o,
output logic         eth_bvalid_o,
input  logic         eth_bready_i,

input  logic [31:0]  eth_araddr_i,
input  logic [2:0]   eth_arprot_i,
input  logic         eth_arvalid_i,
output logic         eth_arready_o,

output logic [31:0]  eth_rdata_o,
output logic [1:0]   eth_rresp_o,
output logic         eth_rvalid_o,
input  logic         eth_rready_i,
input  logic        rgmii_rx_clk,
input  logic [3:0]  rgmii_rxd,
input  logic        rgmii_rx_ctl,

output logic        rgmii_tx_clk,
output logic [3:0]  rgmii_txd,
output logic        rgmii_tx_ctl,
input  logic         sd_axi_clk,
input  logic         sd_axi_rst_n,

input  logic [31:0]  sd_awaddr,
input  logic [2:0]   sd_awprot,
input  logic         sd_awvalid,
output logic         sd_awready,

input  logic [31:0]  sd_wdata,
input  logic [3:0]   sd_wstrb,
input  logic         sd_wvalid,
output logic         sd_wready,

output logic [1:0]   sd_bresp,
output logic         sd_bvalid,
input  logic         sd_bready,

input  logic [31:0]  sd_araddr,
input  logic [2:0]   sd_arprot,
input  logic         sd_arvalid,
output logic         sd_arready,

output logic [31:0]  sd_rdata,
output logic [1:0]   sd_rresp,
output logic         sd_rvalid,
input  logic         sd_rready,
//==========================================================
// SD/eMMC Interface
//==========================================================
output logic        SD_CLK,
output logic        sd_cmd_o,
input  logic        sd_cmd_i,
output logic        sd_cmd_t,

output logic [7:0]  sd_dat_o,
input  logic [7:0]  sd_dat_i,
output logic        sd_dat_t,

output logic        sd_interrupt
);

  // Structural nets only; no assignments or behavioral logic.

  // --------------------------------------------------------------------------
  // PMU clock and reset domains
  // --------------------------------------------------------------------------
  logic clk_cpu, rst_cpu_n;
  logic clk_noc, rst_noc_n;
  logic clk_ddr, rst_ddr_n;
  logic clk_periph, rst_periph_n;
  //==========================================================
// Ethernet Internal Signals
//==========================================================
logic irq_tx_cmpl;
logic irq_rx_cmpl;
logic irq_DMA_err;

logic gtx_clk;
logic gtx_clk90;
logic gtx_rst;

logic logic_clk;
logic logic_rst;
assign logic_clk = clk_periph;
assign logic_rst = ~rst_periph_n;

// Temporary for simulation
assign gtx_clk   = clk_periph;
assign gtx_clk90 = clk_periph;
assign gtx_rst   = ~rst_periph_n;
//==========================================================
// SPI Simulation Internal Signals
//==========================================================

// Control Signals
logic        spi_start;
logic [7:0]  spi_length;
logic [39:0] spi_tx_data;
logic [15:0] spi_clk_div;
logic        spi_cs_sel;

// SPI Interface
logic        spi_sclk;
logic        spi_cs_n;
logic        spi_mosi;
logic        spi_miso;

// Status Signals
logic [39:0] spi_rx_data;
logic        spi_done;
logic        spi_error;
logic        spi_irq;
    // ==========================================================
  // CPU TOP - Internal AXI4 Master Signals
  // ==========================================================

  localparam int CPU_AXI_ID_WIDTH   = 4;
  localparam int CPU_AXI_ADDR_WIDTH = paddr_width_p;
  localparam int CPU_AXI_DATA_WIDTH = bedrock_fill_width_p;
  localparam int CPU_AXI_STRB_WIDTH = CPU_AXI_DATA_WIDTH / 8;

  // AXI4 Write Address Channel
  logic [CPU_AXI_ID_WIDTH-1:0]   cpu_m_axi_awid;
  logic [CPU_AXI_ADDR_WIDTH-1:0] cpu_m_axi_awaddr;
  logic [7:0]                    cpu_m_axi_awlen;
  logic [2:0]                    cpu_m_axi_awsize;
  logic [1:0]                    cpu_m_axi_awburst;
  logic                          cpu_m_axi_awvalid;
  logic                          cpu_m_axi_awready;

  // AXI4 Write Data Channel
  logic [CPU_AXI_DATA_WIDTH-1:0] cpu_m_axi_wdata;
  logic [CPU_AXI_STRB_WIDTH-1:0] cpu_m_axi_wstrb;
  logic                          cpu_m_axi_wlast;
  logic                          cpu_m_axi_wvalid;
  logic                          cpu_m_axi_wready;

  // AXI4 Write Response Channel
  logic [CPU_AXI_ID_WIDTH-1:0] cpu_m_axi_bid;
  logic [1:0]                  cpu_m_axi_bresp;
  logic                        cpu_m_axi_bvalid;
  logic                        cpu_m_axi_bready;

  // AXI4 Read Address Channel
  logic [CPU_AXI_ID_WIDTH-1:0]   cpu_m_axi_arid;
  logic [CPU_AXI_ADDR_WIDTH-1:0] cpu_m_axi_araddr;
  logic [7:0]                    cpu_m_axi_arlen;
  logic [2:0]                    cpu_m_axi_arsize;
  logic [1:0]                    cpu_m_axi_arburst;
  logic                          cpu_m_axi_arvalid;
  logic                          cpu_m_axi_arready;

  // AXI4 Read Data Channel
  logic [CPU_AXI_ID_WIDTH-1:0]   cpu_m_axi_rid;
  logic [CPU_AXI_DATA_WIDTH-1:0] cpu_m_axi_rdata;
  logic [1:0]                    cpu_m_axi_rresp;
  logic                        cpu_m_axi_rlast;
  logic                        cpu_m_axi_rvalid;
  logic                        cpu_m_axi_rready;
  logic       cpu_m_axi_awlock;
logic [3:0] cpu_m_axi_awcache;
logic [2:0] cpu_m_axi_awprot;
logic [3:0] cpu_m_axi_awqos;

logic       cpu_m_axi_arlock;
logic [3:0] cpu_m_axi_arcache;
logic [2:0] cpu_m_axi_arprot;
logic [3:0] cpu_m_axi_arqos;

// CPU interrupt source vector
logic [63:0] cpu_plic_src;
    // ==========================================================
  // CPU TOP - DMA Interface Signals
  // ==========================================================
  localparam int CPU_DMA_PKT_WIDTH =
    `bsg_cache_dma_pkt_width(daddr_width_p, l2_block_size_in_words_p);
  logic [num_cce_p-1:0][l2_dmas_p-1:0][CPU_DMA_PKT_WIDTH-1:0]
      cpu_dma_pkt;
  logic [num_cce_p-1:0][l2_dmas_p-1:0]
      cpu_dma_pkt_v;
  logic [num_cce_p-1:0][l2_dmas_p-1:0]
      cpu_dma_pkt_ready;

  logic [num_cce_p-1:0][l2_dmas_p-1:0][l2_fill_width_p-1:0]
      cpu_dma_data_in;
  logic [num_cce_p-1:0][l2_dmas_p-1:0]
      cpu_dma_data_in_v;
  logic [num_cce_p-1:0][l2_dmas_p-1:0]
      cpu_dma_data_in_ready;

  logic [num_cce_p-1:0][l2_dmas_p-1:0][l2_fill_width_p-1:0]
      cpu_dma_data_out;
  logic [num_cce_p-1:0][l2_dmas_p-1:0]
      cpu_dma_data_out_v;
  logic [num_cce_p-1:0][l2_dmas_p-1:0]
      cpu_dma_data_out_ready;

  logic         clk_ddr;
logic         rst_ddr_n;

// AXI4 Interface
logic [3:0]    axi_awid;
logic [31:0]   axi_awaddr;
logic [7:0]    axi_awlen;
logic [2:0]    axi_awsize;
logic [1:0]    axi_awburst;
logic          axi_awlock;
logic [3:0]    axi_awcache;
logic [2:0]    axi_awprot;
logic [3:0]    axi_awqos;
logic          axi_awvalid;
logic          axi_awready;

logic [127:0]  axi_wdata;
logic [15:0]   axi_wstrb;
logic          axi_wlast;
logic          axi_wvalid;
logic          axi_wready;

logic [3:0]    axi_bid;
logic [1:0]    axi_bresp;
logic          axi_bvalid;
logic          axi_bready;

logic [3:0]    axi_arid;
logic [31:0]   axi_araddr;
logic [7:0]    axi_arlen;
logic [2:0]    axi_arsize;
logic [1:0]    axi_arburst;
logic          axi_arlock;
logic [3:0]    axi_arcache;
logic [2:0]    axi_arprot;
logic [3:0]    axi_arqos;
logic          axi_arvalid;
logic          axi_arready;

logic [3:0]    axi_rid;
logic [127:0]  axi_rdata;
logic [1:0]    axi_rresp;
logic          axi_rlast;
logic          axi_rvalid;
logic          axi_rready;

//==========================================================
// TPU AXI4-Lite Interface
//==========================================================
logic [7:0]  tpu_awaddr, tpu_araddr;
logic [2:0]  tpu_awprot, tpu_arprot;
logic        tpu_awvalid, tpu_awready;
logic [31:0] tpu_wdata;
logic [3:0]  tpu_wstrb;
logic        tpu_wvalid, tpu_wready;
logic [1:0]  tpu_bresp;
logic        tpu_bvalid, tpu_bready;
logic        tpu_arvalid, tpu_arready;
logic [31:0] tpu_rdata;
logic [1:0]  tpu_rresp;
logic        tpu_rvalid, tpu_rready;

//==========================================================
// TPU AXI4 Master DMA
//==========================================================
logic         tpu_m_axi_awid;
logic [31:0]  tpu_m_axi_awaddr;
logic [7:0]   tpu_m_axi_awlen;
logic [2:0]   tpu_m_axi_awsize;
logic [1:0]   tpu_m_axi_awburst;
logic         tpu_m_axi_awlock;
logic [3:0]   tpu_m_axi_awcache;
logic [2:0]   tpu_m_axi_awprot;
logic [3:0]   tpu_m_axi_awqos;
logic         tpu_m_axi_awvalid;
logic         tpu_m_axi_awready;

logic [127:0] tpu_m_axi_wdata;
logic [15:0]  tpu_m_axi_wstrb;
logic         tpu_m_axi_wlast;
logic         tpu_m_axi_wvalid;
logic         tpu_m_axi_wready;

logic         tpu_m_axi_bid;
logic [1:0]   tpu_m_axi_bresp;
logic         tpu_m_axi_bvalid;
logic         tpu_m_axi_bready;

logic         tpu_m_axi_arid;
logic [31:0]  tpu_m_axi_araddr;
logic [7:0]   tpu_m_axi_arlen;
logic [2:0]   tpu_m_axi_arsize;
logic [1:0]   tpu_m_axi_arburst;
logic         tpu_m_axi_arlock;
logic [3:0]   tpu_m_axi_arcache;
logic [2:0]   tpu_m_axi_arprot;
logic [3:0]   tpu_m_axi_arqos;
logic         tpu_m_axi_arvalid;
logic         tpu_m_axi_arready;

logic         tpu_m_axi_rid;
logic [127:0] tpu_m_axi_rdata;
logic [1:0]   tpu_m_axi_rresp;
logic         tpu_m_axi_rlast;
logic         tpu_m_axi_rvalid;
logic         tpu_m_axi_rready;

//==========================================================
// TPU Interrupt
//==========================================================
logic tpu_irq;
//==========================================================
// AXI4 to APB Bridge Signals
//==========================================================

//---------------- AXI4 Interface ----------------//
logic [3:0]    axi_awid;
logic [31:0]   axi_awaddr;
logic [7:0]    axi_awlen;
logic [2:0]    axi_awsize;
logic [1:0]    axi_awburst;
logic          axi_awlock;
logic [3:0]    axi_awcache;
logic [2:0]    axi_awprot;
logic [3:0]    axi_awqos;
logic          axi_awvalid;
logic          axi_awready;

logic [127:0]  axi_wdata;
logic [15:0]   axi_wstrb;
logic          axi_wlast;
logic          axi_wvalid;
logic          axi_wready;

logic [3:0]    axi_bid;
logic [1:0]    axi_bresp;
logic          axi_bvalid;
logic          axi_bready;

logic [3:0]    axi_arid;
logic [31:0]   axi_araddr;
logic [7:0]    axi_arlen;
logic [2:0]    axi_arsize;
logic [1:0]    axi_arburst;
logic          axi_arlock;
logic [3:0]    axi_arcache;
logic [2:0]    axi_arprot;
logic [3:0]    axi_arqos;
logic          axi_arvalid;
logic          axi_arready;

logic [3:0]    axi_rid;
logic [127:0]  axi_rdata;
logic [1:0]    axi_rresp;
logic          axi_rlast;
logic          axi_rvalid;
logic          axi_rready;

//---------------- APB Interface ----------------//
logic [31:0]   PADDR;
logic          PSEL;
logic          PENABLE;
logic          PWRITE;
logic [2:0]    PPROT;
logic [31:0]   PWDATA;
logic [3:0]    PSTRB;
logic [31:0]   PRDATA;
logic          PREADY;
logic          PSLVERR;

  // Empty IP placeholders; original instance names and port wiring retained.
  pmu_top_stub #(
    .DIV_WIDTH(PMU_DIV_WIDTH)
  ) u_pmu_top (
    .ref_clk       (ref_clk_i),
    .rst_n         (rst_n_i),
    .pll_lock      (pll_lock_i),
    .reg_wr_en     (pmu_reg_wr_en_i),
    .reg_addr      (pmu_reg_addr_i),
    .reg_wdata     (pmu_reg_wdata_i),
    .reg_rdata     (pmu_reg_rdata_o),
    .clk_cpu       (clk_cpu),
    .rst_cpu_n     (rst_cpu_n),
    .clk_noc       (clk_noc),
    .rst_noc_n     (rst_noc_n),
    .clk_ddr       (clk_ddr),
    .rst_ddr_n     (rst_ddr_n),
    .clk_periph    (clk_periph),
    .rst_periph_n  (rst_periph_n)
  );

  rom_ctrl_stub #(
    .BootRomInitFile       (BootRomInitFile),
    .MemSizeRom            (ROM_SIZE_BYTES),
    .SecDisableScrambling  (ROM_DISABLE_SCRAMBLING)
  ) u_rom_ctrl (
    .clk_i          (clk_cpu),
    .rst_ni         (rst_cpu_n),
    .rom_cfg_i      (rom_cfg_i),
    .rom_cfg_o      (rom_cfg_o),
    .rom_tl_i       (rom_tl_i),
    .rom_tl_o       (rom_tl_o),
    .regs_tl_i      (rom_regs_tl_i),
    .regs_tl_o      (rom_regs_tl_o),
    .alert_rx_i     (rom_alert_rx_i),
    .alert_tx_o     (rom_alert_tx_o),
    .pwrmgr_data_o  (rom_pwrmgr_data_o),
    .keymgr_data_o  (rom_keymgr_data_o),
    .kmac_data_i    (rom_kmac_data_i),
    .kmac_data_o    (rom_kmac_data_o)
  );

  bp_fe_top_stub #(
    .bp_params_p(bp_params_p)
  ) u_bp_fe_top (
    .clk_i                       (clk_cpu),
    .reset_i                     (~rst_cpu_n),
    .cfg_bus_i                   (cfg_bus_i),

    .fe_cmd_i                    (fe_cmd_i),
    .fe_cmd_v_i                  (fe_cmd_v_i),
    .fe_cmd_yumi_o               (fe_cmd_yumi_o),

    .fe_queue_o                  (fe_queue_o),
    .fe_queue_v_o                (fe_queue_v_o),
    .fe_queue_ready_and_i        (fe_queue_ready_and_i),

    .cache_req_o                 (cache_req),
    .cache_req_v_o               (cache_req_v),
    .cache_req_yumi_i            (cache_req_yumi),
    .cache_req_lock_i            (cache_req_lock),
    .cache_req_metadata_o        (cache_req_metadata),
    .cache_req_metadata_v_o      (cache_req_metadata_v),
    .cache_req_id_i              (cache_req_id),
    .cache_req_critical_i        (cache_req_critical),
    .cache_req_last_i            (cache_req_last),
    .cache_req_credits_full_i    (cache_req_credits_full),
    .cache_req_credits_empty_i   (cache_req_credits_empty),

    .data_mem_pkt_i              (cache_data_mem_pkt),
    .data_mem_pkt_v_i            (cache_data_mem_pkt_v),
    .data_mem_pkt_yumi_o         (cache_data_mem_pkt_yumi),
    .data_mem_o                  (cache_data_mem),

    .tag_mem_pkt_i               (cache_tag_mem_pkt),
    .tag_mem_pkt_v_i             (cache_tag_mem_pkt_v),
    .tag_mem_pkt_yumi_o          (cache_tag_mem_pkt_yumi),
    .tag_mem_o                   (cache_tag_mem),

    .stat_mem_pkt_i              (cache_stat_mem_pkt),
    .stat_mem_pkt_v_i            (cache_stat_mem_pkt_v),
    .stat_mem_pkt_yumi_o         (cache_stat_mem_pkt_yumi),
    .stat_mem_o                  (cache_stat_mem)
  );

  bp_lce_stub #(
    .bp_params_p       (bp_params_p),
    .assoc_p           (icache_assoc_p),
    .sets_p            (icache_sets_p),
    .block_width_p     (icache_block_width_p),
    .fill_width_p      (icache_fill_width_p),
    .data_width_p      (icache_data_width_p),
    .id_width_p        (icache_req_id_width_p),
    .tag_width_p       (icache_tag_width_p)
  ) u_bp_lce (
    .clk_i                    (clk_cpu),
    .reset_i                  (~rst_cpu_n),

    // LCE identity/configuration supplied by the surrounding SoC.
    .did_i                    (lce_did_i),
    .lce_id_i                 (lce_id_i),
    .lce_mode_i               (lce_mode_i),

    // Frontend cache-engine request channel
    .cache_req_i              (cache_req),
    .cache_req_v_i            (cache_req_v),
    .cache_req_yumi_o         (cache_req_yumi),
    .cache_req_lock_o         (cache_req_lock),
    .cache_req_metadata_i     (cache_req_metadata),
    .cache_req_metadata_v_i   (cache_req_metadata_v),
    .cache_req_critical_o     (cache_req_critical),
    .cache_req_id_o           (cache_req_id),
    .cache_req_last_o         (cache_req_last),
    .cache_req_credits_full_o (cache_req_credits_full),
    .cache_req_credits_empty_o(cache_req_credits_empty),

    // Cache tag/data/status memories
    .tag_mem_pkt_v_o          (cache_tag_mem_pkt_v),
    .tag_mem_pkt_o            (cache_tag_mem_pkt),
    .tag_mem_pkt_yumi_i       (cache_tag_mem_pkt_yumi),
    .tag_mem_i                (cache_tag_mem),

    .data_mem_pkt_v_o         (cache_data_mem_pkt_v),
    .data_mem_pkt_o           (cache_data_mem_pkt),
    .data_mem_pkt_yumi_i      (cache_data_mem_pkt_yumi),
    .data_mem_i               (cache_data_mem),

    .stat_mem_pkt_v_o         (cache_stat_mem_pkt_v),
    .stat_mem_pkt_o           (cache_stat_mem_pkt),
    .stat_mem_pkt_yumi_i      (cache_stat_mem_pkt_yumi),
    .stat_mem_i               (cache_stat_mem),

    // BedRock interface to an external CCE/coherence network
    .lce_req_header_o         (lce_req_header_o),
    .lce_req_data_o           (lce_req_data_o),
    .lce_req_v_o              (lce_req_v_o),
    .lce_req_ready_and_i      (lce_req_ready_and_i),

    .lce_cmd_header_i         (lce_cmd_header_i),
    .lce_cmd_data_i            (lce_cmd_data_i),
    .lce_cmd_v_i               (lce_cmd_v_i),
    .lce_cmd_ready_and_o       (lce_cmd_ready_and_o),

    .lce_fill_header_i         (lce_fill_header_i),
    .lce_fill_data_i           (lce_fill_data_i),
    .lce_fill_v_i              (lce_fill_v_i),
    .lce_fill_ready_and_o      (lce_fill_ready_and_o),

    .lce_fill_header_o         (lce_fill_header_o),
    .lce_fill_data_o           (lce_fill_data_o),
    .lce_fill_v_o              (lce_fill_v_o),
    .lce_fill_ready_and_i      (lce_fill_ready_and_i),

    .lce_resp_header_o         (lce_resp_header_o),
    .lce_resp_data_o           (lce_resp_data_o),
    .lce_resp_v_o              (lce_resp_v_o),
    .lce_resp_ready_and_i      (lce_resp_ready_and_i)
  );

  cpu_top_stub #(
    .bp_params_p   (bp_params_p),
    .AXI_DATA_WIDTH(CPU_AXI_DATA_WIDTH),
    .ID_WIDTH      (CPU_AXI_ID_WIDTH)
  ) u_cpu_top (
    // Clock and Reset
    .clk_i          (clk_cpu),
    .plic_ahb_clk_i (clk_periph),
    .rt_clk_i       (clk_cpu),
    .reset_i        (~rst_cpu_n),

    // CPU AXI Clock and Reset
    .axi_clk_i      (clk_cpu),
    .axi_reset_i    (~rst_cpu_n),

    // Device IDs
    .my_did_i       ('0),
    .host_did_i     ('0),

    // AXI4 Write Address
    .m_axi_awid     (cpu_m_axi_awid),
    .m_axi_awaddr   (cpu_m_axi_awaddr),
    .m_axi_awlen    (cpu_m_axi_awlen),
    .m_axi_awsize   (cpu_m_axi_awsize),
    .m_axi_awburst  (cpu_m_axi_awburst),
    .m_axi_awvalid  (cpu_m_axi_awvalid),
    .m_axi_awready  (cpu_m_axi_awready),
    .m_axi_awlock  (cpu_m_axi_awlock),
.m_axi_awcache (cpu_m_axi_awcache),
.m_axi_awprot  (cpu_m_axi_awprot),
.m_axi_awqos   (cpu_m_axi_awqos),

    // AXI4 Write Data
    .m_axi_wdata    (cpu_m_axi_wdata),
    .m_axi_wstrb    (cpu_m_axi_wstrb),
    .m_axi_wlast    (cpu_m_axi_wlast),
    .m_axi_wvalid   (cpu_m_axi_wvalid),
    .m_axi_wready   (cpu_m_axi_wready),

    // AXI4 Write Response
    .m_axi_bid      (cpu_m_axi_bid),
    .m_axi_bresp    (cpu_m_axi_bresp),
    .m_axi_bvalid   (cpu_m_axi_bvalid),
    .m_axi_bready   (cpu_m_axi_bready),

    // AXI4 Read Address
    .m_axi_arid     (cpu_m_axi_arid),
    .m_axi_araddr   (cpu_m_axi_araddr),
    .m_axi_arlen    (cpu_m_axi_arlen),
    .m_axi_arsize   (cpu_m_axi_arsize),
    .m_axi_arburst  (cpu_m_axi_arburst),
    .m_axi_arvalid  (cpu_m_axi_arvalid),
    .m_axi_arready  (cpu_m_axi_arready),
    .m_axi_arlock  (cpu_m_axi_arlock),
.m_axi_arcache (cpu_m_axi_arcache),
.m_axi_arprot  (cpu_m_axi_arprot),
.m_axi_arqos   (cpu_m_axi_arqos),

    // AXI4 Read Data
    .m_axi_rid      (cpu_m_axi_rid),
    .m_axi_rdata    (cpu_m_axi_rdata),
    .m_axi_rresp    (cpu_m_axi_rresp),
    .m_axi_rlast    (cpu_m_axi_rlast),
    .m_axi_rvalid   (cpu_m_axi_rvalid),
    .m_axi_rready   (cpu_m_axi_rready),

    // Interrupt Sources
    .plic_src_i     (cpu_plic_src),

    // DMA packet interface
    .dma_pkt_o               (cpu_dma_pkt),
    .dma_pkt_v_o             (cpu_dma_pkt_v),
    .dma_pkt_ready_and_i     (cpu_dma_pkt_ready),

    // DMA incoming data
    .dma_data_i              (cpu_dma_data_in),
    .dma_data_v_i            (cpu_dma_data_in_v),
    .dma_data_ready_and_o    (cpu_dma_data_in_ready),

    // DMA outgoing data
    .dma_data_o              (cpu_dma_data_out),
    .dma_data_v_o            (cpu_dma_data_out_v),
    .dma_data_ready_and_i    (cpu_dma_data_out_ready)
  );

  lpddr5c_soc_wrapper_stub u_lpddr5 (
    // AXI Clock / Reset
        // AXI Clock / Reset
    .clk_axi_400        (lpddr5_clk_axi_i),
    .rst_axi_n          (lpddr5_rst_axi_n_i),

    // AXI Slave Interface
    .s_axi_awid         (s_axi_awid),
    .s_axi_awaddr       (s_axi_awaddr),
    .s_axi_awlen        (s_axi_awlen),
    .s_axi_awsize       (s_axi_awsize),
    .s_axi_awburst      (s_axi_awburst),
    .s_axi_awlock       (s_axi_awlock),
    .s_axi_awcache      (s_axi_awcache),
    .s_axi_awprot       (s_axi_awprot),
    .s_axi_awqos        (s_axi_awqos),
    .s_axi_awvalid      (s_axi_awvalid),
    .s_axi_awready      (s_axi_awready),

    .s_axi_wdata        (s_axi_wdata),
    .s_axi_wstrb        (s_axi_wstrb),
    .s_axi_wlast        (s_axi_wlast),
    .s_axi_wvalid       (s_axi_wvalid),
    .s_axi_wready       (s_axi_wready),

    .s_axi_bid          (s_axi_bid),
    .s_axi_bresp        (s_axi_bresp),
    .s_axi_bvalid       (s_axi_bvalid),
    .s_axi_bready       (s_axi_bready),

    .s_axi_arid         (s_axi_arid),
    .s_axi_araddr       (s_axi_araddr),
    .s_axi_arlen        (s_axi_arlen),
    .s_axi_arsize       (s_axi_arsize),
    .s_axi_arburst      (s_axi_arburst),
    .s_axi_arlock       (s_axi_arlock),
    .s_axi_arcache      (s_axi_arcache),
    .s_axi_arprot       (s_axi_arprot),
    .s_axi_arqos        (s_axi_arqos),
    .s_axi_arvalid      (s_axi_arvalid),
    .s_axi_arready      (s_axi_arready),

    .s_axi_rid          (s_axi_rid),
    .s_axi_rdata        (s_axi_rdata),
    .s_axi_rresp        (s_axi_rresp),
    .s_axi_rlast        (s_axi_rlast),
    .s_axi_rvalid       (s_axi_rvalid),
    .s_axi_rready       (s_axi_rready),

    // DDR Clock
       // DDR Clock
    .clk_ddr_800        (lpddr5_clk_ddr_800_i),
    .rst_ddr_n          (lpddr5_rst_ddr_n_i),

    // DFI
    .dfi_clk            (dfi_clk),
    .dfi_rst_n          (dfi_rst_n),
    .dfi_cs_n           (dfi_cs_n),
    .dfi_cke            (dfi_cke),
    .dfi_ca             (dfi_ca),
    .dfi_rw             (dfi_rw),
    .dfi_addr           (dfi_addr),
    .dfi_rddata         (dfi_rddata),
    .dfi_rddata_valid   (dfi_rddata_valid),
    .dfi_wrdata         (dfi_wrdata),
    .dfi_wrdata_mask    (dfi_wrdata_mask),
    .dfi_wrdata_en      (dfi_wrdata_en),

    // APB
        // APB
    .pclk               (lpddr5_pclk_i),
    .preset_n           (lpddr5_preset_n_i),
    .psel               (psel),
    .penable            (penable),
    .pwrite             (pwrite),
    .paddr              (paddr),
    .pwdata             (pwdata),
    .prdata             (prdata),
    .pready             (pready),
    .pslverr            (pslverr),

    .intr_init_done     (intr_init_done),
    .intr_refresh_err   (intr_refresh_err),
    .intr_ecc_err       (intr_ecc_err),
    .intr_training_err  (intr_training_err),
    .intr_parity_err    (intr_parity_err),

    .debug_bus          (debug_bus)
);

  axi4_usb_slave_stub #(
    .ADDR_WIDTH   (32),
    .DATA_WIDTH   (32),
    .ID_WIDTH     (4),
    .USB_CLK_FREQ (48000000),
    .FIFO_DEPTH   (8)
  ) u_axi4_usb_slave (
    .aclk         (usb_axi_clk_i),
    .aresetn      (usb_axi_rst_n_i),
    .usb_clk      (usb_clk_i),
    .usb_resetn   (usb_rst_n_i),

    .s_axi_awid    (usb_awid_i),
    .s_axi_awaddr  (usb_awaddr_i),
    .s_axi_awlen   (usb_awlen_i),
    .s_axi_awsize  (usb_awsize_i),
    .s_axi_awburst (usb_awburst_i),
    .s_axi_awlock  (usb_awlock_i),
    .s_axi_awcache (usb_awcache_i),
    .s_axi_awprot  (usb_awprot_i),
    .s_axi_awqos   (usb_awqos_i),
    .s_axi_awvalid (usb_awvalid_i),
    .s_axi_awready (usb_awready_o),

    .s_axi_wdata   (usb_wdata_i),
    .s_axi_wstrb   (usb_wstrb_i),
    .s_axi_wlast   (usb_wlast_i),
    .s_axi_wvalid  (usb_wvalid_i),
    .s_axi_wready  (usb_wready_o),

    .s_axi_bid     (usb_bid_o),
    .s_axi_bresp   (usb_bresp_o),
    .s_axi_bvalid  (usb_bvalid_o),
    .s_axi_bready  (usb_bready_i),

    .s_axi_arid    (usb_arid_i),
    .s_axi_araddr  (usb_araddr_i),
    .s_axi_arlen   (usb_arlen_i),
    .s_axi_arsize  (usb_arsize_i),
    .s_axi_arburst (usb_arburst_i),
    .s_axi_arlock  (usb_arlock_i),
    .s_axi_arcache (usb_arcache_i),
    .s_axi_arprot  (usb_arprot_i),
    .s_axi_arqos   (usb_arqos_i),
    .s_axi_arvalid (usb_arvalid_i),
    .s_axi_arready (usb_arready_o),

    .s_axi_rid     (usb_rid_o),
    .s_axi_rdata   (usb_rdata_o),
    .s_axi_rresp   (usb_rresp_o),
    .s_axi_rlast   (usb_rlast_o),
    .s_axi_rvalid  (usb_rvalid_o),
    .s_axi_rready  (usb_rready_i),

    .utmi_data_in_i  (usb_utmi_data_in_i),
    .utmi_txready_i  (usb_utmi_txready_i),
    .utmi_rxvalid_i  (usb_utmi_rxvalid_i),
    .utmi_rxactive_i (usb_utmi_rxactive_i),
    .utmi_rxerror_i  (usb_utmi_rxerror_i),
    .utmi_linestate_i(usb_utmi_linestate_i),

    .utmi_data_out_o (usb_utmi_data_out_o),
    .utmi_txvalid_o  (usb_utmi_txvalid_o),
    .utmi_op_mode_o  (usb_utmi_op_mode_o),
    .utmi_xcvrselect_o(usb_utmi_xcvrselect_o),
    .utmi_termselect_o(usb_utmi_termselect_o),
    .utmi_dppulldown_o(usb_utmi_dppulldown_o),
    .utmi_dmpulldown_o(usb_utmi_dmpulldown_o),

    .intr_o(usb_intr_o)
  );

  uart_apb_top_stub u_uart_apb_top (

    // ---------------------------------------------------------
    // APB CLOCK AND RESET
    // ---------------------------------------------------------
    .PCLK              (clk_periph),
    .PRESETn            (rst_periph_n),

    // ---------------------------------------------------------
    // APB SLAVE INTERFACE
    // ---------------------------------------------------------
    .PSEL              (uart_psel_i),
    .PENABLE           (uart_penable_i),
    .PWRITE             (uart_pwrite_i),
    .PADDR              (uart_paddr_i),
    .PWDATA             (uart_pwdata_i),
    .PSTRB              (uart_pstrb_i),

    .PRDATA             (uart_prdata_o),
    .PREADY             (uart_pready_o),
    .PSLVERR            (uart_pslverr_o),

    // ---------------------------------------------------------
    // UART CONTROL
    // ---------------------------------------------------------
    .divisor_load_i     (uart_divisor_load_i),
    .uart_irq_en        (uart_irq_en_i),

    // ---------------------------------------------------------
    // UART SERIAL INTERFACE
    // ---------------------------------------------------------
    .rx_i               (uart_rx_i),
    .tx_o               (uart_tx_o),

    .cts_n_i            (uart_cts_n_i),
    .rts_n_o            (uart_rts_n_o),

    // ---------------------------------------------------------
    // UART INTERRUPT
    // ---------------------------------------------------------
    .uart_irq           (uart_irq_o)

  );

  apb_spi_top_stub u_apb_spi_top (
    // APB clock and reset
    .PCLK       (clk_periph),
    .PRESETn    (rst_periph_n),

    // APB interface
    .PSEL       (spi_psel_i),
    .PENABLE    (spi_penable_i),
    .PWRITE     (spi_pwrite_i),
    .PADDR      (spi_paddr_i),
    .PWDATA     (spi_pwdata_i),
    .PSTRB      (spi_pstrb_i),

    .PRDATA     (spi_prdata_o),
    .PREADY     (spi_pready_o),
    .PSLVERR    (spi_pslverr_o),

    // SPI interface
    .sck_o      (spi_sck_o),
    .mosi_o     (spi_mosi_o),
    .miso_o     (spi_miso_o),
    .cs_n_o     (spi_cs_n_o),

    // Interrupt
    .spi_irq    (spi_irq_o)
  );

  i2c_top_stub #(
    .DW (32),
    .AW (32)
  ) u_i2c_top (
    .pclk          (clk_periph),
    .presetn       (rst_periph_n),

    .i2c_clk       (clk_periph),
    .i2c_rst_n     (rst_periph_n),

    .t_paddr       (i2c_paddr_i),
    .t_pwrite      (i2c_pwrite_i),
    .t_psel        (i2c_psel_i),
    .t_penable     (i2c_penable_i),
    .t_pwdata      (i2c_pwdata_i),
    .t_pstrb       (i2c_pstrb_i),

    .t_o_prdata    (i2c_prdata_o),
    .t_o_pslverr   (i2c_pslverr_o),
    .t_o_pready    (i2c_pready_o),

    .i2c_irq_en    (i2c_irq_en_i),
    .i2c_irq       (i2c_irq_o),

    .i2c_scl        (i2c_scl_o),
    .i2c_sda        (i2c_sda_io)
  );

  apb_to_gpio_stub #(
    .BASE_ADDR (32'h3003_0000),
    .SIZE      (32'h0001_0000)
  ) u_apb_to_gpio (
    .pclk        (clk_periph),
    .gclk        (clk_periph),
    .presetn     (rst_periph_n),

    .paddr       (gpio_paddr_i),
    .pwrite      (gpio_pwrite_i),
    .psel        (gpio_psel_i),
    .penable     (gpio_penable_i),
    .pwdata      (gpio_pwdata_i),
    .pstrb       (gpio_pstrb_i),

    .prdata      (gpio_prdata_o),
    .pslverr     (gpio_pslverr_o),
    .pready      (gpio_pready_o),

    .in_pad_i    (gpio_in_pad_i),
    .out_pad_o   (gpio_out_pad_o),
    .oen_padoe_o (gpio_oen_padoe_o),
    .gpio_irq    (gpio_irq_o)
  );
eth_dma_mac_top #(
    .AXIL_ADDR_WIDTH(32),
    .AXIL_DATA_WIDTH(32),
    .AXI_ADDR_WIDTH (64),
    .AXI_DATA_WIDTH (64),
    .AXI_ID_WIDTH   (4)
) u_eth (

    .clk                (clk_cpu),
    .rst_n              (rst_cpu_n),

    .s_axil_clk         (eth_axil_clk_i),
    .s_axil_rst_n       (eth_axil_rst_n_i),

    .gtx_clk            (gtx_clk),
    .gtx_clk90          (gtx_clk90),
    .gtx_rst            (gtx_rst),

    .logic_clk          (logic_clk),
    .logic_rst          (logic_rst),

    // AXI-Lite Interface
    .s_axil_awaddr      (eth_awaddr_i),
    .s_axil_awprot      (eth_awprot_i),
    .s_axil_awvalid     (eth_awvalid_i),
    .s_axil_awready     (eth_awready_o),

    .s_axil_wdata       (eth_wdata_i),
    .s_axil_wstrb       (eth_wstrb_i),
    .s_axil_wvalid      (eth_wvalid_i),
    .s_axil_wready      (eth_wready_o),

    .s_axil_bresp       (eth_bresp_o),
    .s_axil_bvalid      (eth_bvalid_o),
    .s_axil_bready      (eth_bready_i),

    .s_axil_araddr      (eth_araddr_i),
    .s_axil_arprot      (eth_arprot_i),
    .s_axil_arvalid     (eth_arvalid_i),
    .s_axil_arready     (eth_arready_o),

    .s_axil_rdata       (eth_rdata_o),
    .s_axil_rresp       (eth_rresp_o),
    .s_axil_rvalid      (eth_rvalid_o),
    .s_axil_rready      (eth_rready_i),

    // RGMII
    .rgmii_rx_clk       (rgmii_rx_clk),
    .rgmii_rxd          (rgmii_rxd),
    .rgmii_rx_ctl       (rgmii_rx_ctl),

    .rgmii_tx_clk       (rgmii_tx_clk),
    .rgmii_txd          (rgmii_txd),
    .rgmii_tx_ctl       (rgmii_tx_ctl),

    // Interrupts
    .irq_tx_cmpl        (irq_tx_cmpl),
    .irq_rx_cmpl        (irq_rx_cmpl),
    .irq_DMA_err        (irq_DMA_err)

    // AXI Master interface will be connected next
);
//==========================================================
// SD/eMMC Controller
//==========================================================
sd_emmc_controller #(
    .C_S00_AXI_DATA_WIDTH(32),
    .C_S00_AXI_ADDR_WIDTH(32)
) u_sd_emmc (

    //======================================================
    // SD Interface
    //======================================================
    .SD_CLK             (SD_CLK),
    .sd_cmd_o           (sd_cmd_o),
    .sd_cmd_i           (sd_cmd_i),
    .sd_cmd_t           (sd_cmd_t),

    .sd_dat_o           (sd_dat_o),
    .sd_dat_i           (sd_dat_i),
    .sd_dat_t           (sd_dat_t),

    .interrupt          (sd_interrupt),

    //======================================================
    // AXI4-Lite Slave Interface
    //======================================================
    .s00_axi_aclk       (sd_axi_clk),
    .s00_axi_aresetn    (sd_axi_rst_n),

    .s00_axi_awaddr     (sd_awaddr),
    .s00_axi_awprot     (sd_awprot),
    .s00_axi_awvalid    (sd_awvalid),
    .s00_axi_awready    (sd_awready),

    .s00_axi_wdata      (sd_wdata),
    .s00_axi_wstrb      (sd_wstrb),
    .s00_axi_wvalid     (sd_wvalid),
    .s00_axi_wready     (sd_wready),

    .s00_axi_bresp      (sd_bresp),
    .s00_axi_bvalid     (sd_bvalid),
    .s00_axi_bready     (sd_bready),

    .s00_axi_araddr     (sd_araddr),
    .s00_axi_arprot     (sd_arprot),
    .s00_axi_arvalid    (sd_arvalid),
    .s00_axi_arready    (sd_arready),

    .s00_axi_rdata      (sd_rdata),
    .s00_axi_rresp      (sd_rresp),
    .s00_axi_rvalid     (sd_rvalid),
    .s00_axi_rready     (sd_rready),

    //======================================================
    // AXI4 Master DMA Interface
    // (Connect these to your AXI NoC/Interconnect)
    //======================================================
    .M_AXI_ACLK         (clk_cpu),
    .M_AXI_ARESETN      (rst_cpu_n),

    .M_AXI_AWID         (),
    .M_AXI_AWADDR       (),
    .M_AXI_AWLEN        (),
    .M_AXI_AWSIZE       (),
    .M_AXI_AWBURST      (),
    .M_AXI_AWLOCK       (),
    .M_AXI_AWCACHE      (),
    .M_AXI_AWPROT       (),
    .M_AXI_AWQOS        (),
    .M_AXI_AWVALID      (),
    .M_AXI_AWREADY      (),

    .M_AXI_WDATA        (),
    .M_AXI_WSTRB        (),
    .M_AXI_WLAST        (),
    .M_AXI_WVALID       (),
    .M_AXI_WREADY       (),

    .M_AXI_BID          (),
    .M_AXI_BRESP        (),
    .M_AXI_BVALID       (),
    .M_AXI_BREADY       (),

    .M_AXI_ARID         (),
    .M_AXI_ARADDR       (),
    .M_AXI_ARLEN        (),
    .M_AXI_ARSIZE       (),
    .M_AXI_ARBURST      (),
    .M_AXI_ARLOCK       (),
    .M_AXI_ARCACHE      (),
    .M_AXI_ARPROT       (),
    .M_AXI_ARQOS        (),
    .M_AXI_ARVALID      (),
    .M_AXI_ARREADY      (),

    .M_AXI_RID          (),
    .M_AXI_RDATA        (),
    .M_AXI_RRESP        (),
    .M_AXI_RLAST        (),
    .M_AXI_RVALID       (),
    .M_AXI_RREADY       ()
);

spi_sim_top u_spi_sim (

    .start      (spi_start),
    .length     (spi_length),
    .tx_data    (spi_tx_data),

    .miso_in    (spi_miso),
    .cs_sel     (spi_cs_sel),
    .clk_div    (spi_clk_div),

    .spi_clk    (spi_sclk),
    .spi_cs_n   (spi_cs_n),
    .spi_mosi   (spi_mosi),
    .spi_miso   (spi_rx_data),

    .done       (spi_done),
    .error      (spi_error),
    .irq        (spi_irq),

    .sys_clk    (clk_periph),
    .sys_rst    (~rst_periph_n)
);
//==========================================================
// SRAM Top
//==========================================================
sram_top #(
    .ADDR_WIDTH     (32),
    .DATA_WIDTH     (128),
    .ID_WIDTH       (4),
    .MEM_ADDR_WIDTH (16),
    .FIFO_DEPTH     (8),
    .SRAM_BASE_ADDR (32'h1070_0000)
) u_sram (

    //======================================================
    // AXI Clock Domain
    //======================================================
    .aclk               (clk_cpu),
    .aresetn            (rst_cpu_n),

    //======================================================
    // SRAM Clock Domain
    //======================================================
    .sram_clk           (clk_ddr),
    .sram_resetn        (rst_ddr_n),

    //======================================================
    // AXI4 Write Address
    //======================================================
    .s_axi_awid         (axi_awid),
    .s_axi_awaddr       (axi_awaddr),
    .s_axi_awlen        (axi_awlen),
    .s_axi_awsize       (axi_awsize),
    .s_axi_awburst      (axi_awburst),
    .s_axi_awlock       (axi_awlock),
    .s_axi_awcache      (axi_awcache),
    .s_axi_awprot       (axi_awprot),
    .s_axi_awqos        (axi_awqos),
    .s_axi_awvalid      (axi_awvalid),
    .s_axi_awready      (axi_awready),

    //======================================================
    // AXI4 Write Data
    //======================================================
    .s_axi_wdata        (axi_wdata),
    .s_axi_wstrb        (axi_wstrb),
    .s_axi_wlast        (axi_wlast),
    .s_axi_wvalid       (axi_wvalid),
    .s_axi_wready       (axi_wready),

    //======================================================
    // AXI4 Write Response
    //======================================================
    .s_axi_bid          (axi_bid),
    .s_axi_bresp        (axi_bresp),
    .s_axi_bvalid       (axi_bvalid),
    .s_axi_bready       (axi_bready),

    //======================================================
    // AXI4 Read Address
    //======================================================
    .s_axi_arid         (axi_arid),
    .s_axi_araddr       (axi_araddr),
    .s_axi_arlen        (axi_arlen),
    .s_axi_arsize       (axi_arsize),
    .s_axi_arburst      (axi_arburst),
    .s_axi_arlock       (axi_arlock),
    .s_axi_arcache      (axi_arcache),
    .s_axi_arprot       (axi_arprot),
    .s_axi_arqos        (axi_arqos),
    .s_axi_arvalid      (axi_arvalid),
    .s_axi_arready      (axi_arready),

    //======================================================
    // AXI4 Read Data
    //======================================================
    .s_axi_rid          (axi_rid),
    .s_axi_rdata        (axi_rdata),
    .s_axi_rresp        (axi_rresp),
    .s_axi_rlast        (axi_rlast),
    .s_axi_rvalid       (axi_rvalid),
    .s_axi_rready       (axi_rready)
);
//==========================================================
// TPU Host Top
//==========================================================
tpu_host_top #(
    .AXIL_ADDR_W    (8),
    .UB_DEPTH       (128),
    .QUEUE_DEPTH    (16),
    .MAX_BURST      (16),
    .AXI_ID_W       (1),
    .CDC_FIFO_DEPTH (8)
) u_tpu (

    //======================================================
    // Clocks & Reset
    //======================================================
    .clk_tpu        (clk_cpu),
    .clk_axil       (clk_periph),
    .clk_axi        (clk_cpu),
    .rst_n          (rst_cpu_n),

    //======================================================
    // AXI4-Lite Slave Interface
    //======================================================
    .s_axil_awaddr  (tpu_awaddr),
    .s_axil_awprot  (tpu_awprot),
    .s_axil_awvalid (tpu_awvalid),
    .s_axil_awready (tpu_awready),

    .s_axil_wdata   (tpu_wdata),
    .s_axil_wstrb   (tpu_wstrb),
    .s_axil_wvalid  (tpu_wvalid),
    .s_axil_wready  (tpu_wready),

    .s_axil_bresp   (tpu_bresp),
    .s_axil_bvalid  (tpu_bvalid),
    .s_axil_bready  (tpu_bready),

    .s_axil_araddr  (tpu_araddr),
    .s_axil_arprot  (tpu_arprot),
    .s_axil_arvalid (tpu_arvalid),
    .s_axil_arready (tpu_arready),

    .s_axil_rdata   (tpu_rdata),
    .s_axil_rresp   (tpu_rresp),
    .s_axil_rvalid  (tpu_rvalid),
    .s_axil_rready  (tpu_rready),

    //======================================================
    // AXI4 Master DMA Interface
    //======================================================
    .m_axi_awid     (tpu_m_axi_awid),
    .m_axi_awaddr   (tpu_m_axi_awaddr),
    .m_axi_awlen    (tpu_m_axi_awlen),
    .m_axi_awsize   (tpu_m_axi_awsize),
    .m_axi_awburst  (tpu_m_axi_awburst),
    .m_axi_awlock   (tpu_m_axi_awlock),
    .m_axi_awcache  (tpu_m_axi_awcache),
    .m_axi_awprot   (tpu_m_axi_awprot),
    .m_axi_awqos    (tpu_m_axi_awqos),
    .m_axi_awvalid  (tpu_m_axi_awvalid),
    .m_axi_awready  (tpu_m_axi_awready),

    .m_axi_wdata    (tpu_m_axi_wdata),
    .m_axi_wstrb    (tpu_m_axi_wstrb),
    .m_axi_wlast    (tpu_m_axi_wlast),
    .m_axi_wvalid   (tpu_m_axi_wvalid),
    .m_axi_wready   (tpu_m_axi_wready),

    .m_axi_bid      (tpu_m_axi_bid),
    .m_axi_bresp    (tpu_m_axi_bresp),
    .m_axi_bvalid   (tpu_m_axi_bvalid),
    .m_axi_bready   (tpu_m_axi_bready),

    .m_axi_arid     (tpu_m_axi_arid),
    .m_axi_araddr   (tpu_m_axi_araddr),
    .m_axi_arlen    (tpu_m_axi_arlen),
    .m_axi_arsize   (tpu_m_axi_arsize),
    .m_axi_arburst  (tpu_m_axi_arburst),
    .m_axi_arlock   (tpu_m_axi_arlock),
    .m_axi_arcache  (tpu_m_axi_arcache),
    .m_axi_arprot   (tpu_m_axi_arprot),
    .m_axi_arqos    (tpu_m_axi_arqos),
    .m_axi_arvalid  (tpu_m_axi_arvalid),
    .m_axi_arready  (tpu_m_axi_arready),

    .m_axi_rid      (tpu_m_axi_rid),
    .m_axi_rdata    (tpu_m_axi_rdata),
    .m_axi_rresp    (tpu_m_axi_rresp),
    .m_axi_rlast    (tpu_m_axi_rlast),
    .m_axi_rvalid   (tpu_m_axi_rvalid),
    .m_axi_rready   (tpu_m_axi_rready),

    //======================================================
    // Interrupt
    //======================================================
    .irq            (tpu_irq)
);

axi4_to_apb_bridge_cdc u_axi4_to_apb_bridge (

    //======================================================
    // AXI Clock & Reset
    //======================================================
    .ACLK       (clk_cpu),
    .ARESETn    (rst_cpu_n),

    //======================================================
    // AXI Write Address
    //======================================================
    .AWID       (axi_awid),
    .AWADDR     (axi_awaddr),
    .AWLEN      (axi_awlen),
    .AWSIZE     (axi_awsize),
    .AWBURST    (axi_awburst),
    .AWLOCK     (axi_awlock),
    .AWCACHE    (axi_awcache),
    .AWPROT     (axi_awprot),
    .AWQOS      (axi_awqos),
    .AWVALID    (axi_awvalid),
    .AWREADY    (axi_awready),

    //======================================================
    // AXI Write Data
    //======================================================
    .WDATA      (axi_wdata),
    .WSTRB      (axi_wstrb),
    .WLAST      (axi_wlast),
    .WVALID     (axi_wvalid),
    .WREADY     (axi_wready),

    //======================================================
    // AXI Write Response
    //======================================================
    .BID        (axi_bid),
    .BRESP      (axi_bresp),
    .BVALID     (axi_bvalid),
    .BREADY     (axi_bready),

    //======================================================
    // AXI Read Address
    //======================================================
    .ARID       (axi_arid),
    .ARADDR     (axi_araddr),
    .ARLEN      (axi_arlen),
    .ARSIZE     (axi_arsize),
    .ARBURST    (axi_arburst),
    .ARLOCK     (axi_arlock),
    .ARCACHE    (axi_arcache),
    .ARPROT     (axi_arprot),
    .ARQOS      (axi_arqos),
    .ARVALID    (axi_arvalid),
    .ARREADY    (axi_arready),

    //======================================================
    // AXI Read Data
    //======================================================
    .RID        (axi_rid),
    .RDATA      (axi_rdata),
    .RRESP      (axi_rresp),
    .RLAST      (axi_rlast),
    .RVALID     (axi_rvalid),
    .RREADY     (axi_rready),

    //======================================================
    // APB Interface
    //======================================================
    .PCLK       (clk_periph),
    .PRESETn    (rst_periph_n),

    .PADDR      (PADDR),
    .PSEL       (PSEL),
    .PENABLE    (PENABLE),
    .PWRITE     (PWRITE),
    .PPROT      (PPROT),
    .PWDATA     (PWDATA),
    .PSTRB      (PSTRB),
    .PRDATA     (PRDATA),
    .PREADY     (PREADY),
    .PSLVERR    (PSLVERR)
);
endmodule

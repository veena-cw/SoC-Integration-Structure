`include "bp_common_defines.svh"   // BlackParrot common definitions
`include "bp_fe_defines.svh"       // BlackParrot frontend definitions
`include "bp_me_defines.svh"       // BlackParrot memory engine definitions

module soc_top_stub                // SoC top-level integration module
  import bp_common_pkg::*;         // Import BlackParrot common package
  import bp_fe_pkg::*;             // Import frontend package
  import bp_be_pkg::*;             // Import backend package
#(
  parameter bp_params_e bp_params_p = e_bp_default_cfg,      // BlackParrot configuration
  parameter int PMU_DIV_WIDTH = 8,                           // PMU clock divider width

  // Boot ROM controller configuration
  parameter BootRomInitFile = "",                            // Boot ROM initialization file
  parameter int ROM_SIZE_BYTES = 32'h8000,                   // Boot ROM size
  parameter bit ROM_DISABLE_SCRAMBLING = 1'b1,               // Disable ROM scrambling

  // LPDDR5 controller parameters
  parameter int LPDDR5_ADDR_WIDTH     = 32,                  // AXI address width
  parameter int LPDDR5_DATA_WIDTH     = 128,                 // AXI data width
  parameter int LPDDR5_ID_WIDTH       = 4,                   // AXI ID width
  parameter int LPDDR5_DFI_DATA_WIDTH = 64,                  // DFI data width
  parameter int LPDDR5_NUM_CHANNELS   = 1                    // Number of LPDDR5 channels

  `declare_bp_proc_params(bp_params_p)                       // BlackParrot processor parameters

  `declare_bp_core_if_widths(
      vaddr_width_p,
      paddr_width_p,
      asid_width_p,
      branch_metadata_fwd_width_p
  )                                                          // Core interface widths

  , localparam cfg_bus_width_lp =
      `bp_cfg_bus_width(
          vaddr_width_p,
          hio_width_p,
          core_id_width_p,
          cce_id_width_p,
          lce_id_width_p,
          did_width_p
      )                                                      // Configuration bus width

  `declare_bp_bedrock_if_widths(
      paddr_width_p,
      lce_id_width_p,
      cce_id_width_p,
      did_width_p,
      lce_assoc_p
  )                                                          // BedRock interface widths

  `declare_bp_cache_engine_generic_if_widths(
      paddr_width_p,
      icache_tag_width_p,
      icache_sets_p,
      icache_assoc_p,
      icache_data_width_p,
      icache_block_width_p,
      icache_fill_width_p,
      icache_req_id_width_p,
      cache
  )                                                          // Cache engine interface widths
)
(
  // Reference clock and reset for the PMU
  input  logic ref_clk_i,                                    // Reference clock
  input  logic rst_n_i,                                      // Active-low reset
  input  logic pll_lock_i,                                   // PLL lock indication

  // PMU register access
  input  logic       pmu_reg_wr_en_i,                        // PMU write enable
  input  logic [3:0] pmu_reg_addr_i,                         // PMU register address
  input  logic [7:0] pmu_reg_wdata_i,                        // PMU write data
  output logic [7:0] pmu_reg_rdata_o,                        // PMU read data

  // Frontend configuration
  input  logic [cfg_bus_width_lp-1:0] cfg_bus_i,             // FE configuration bus
  input  logic [fe_cmd_width_lp-1:0]  fe_cmd_i,              // FE command
  input  logic                        fe_cmd_v_i,            // FE command valid
  output logic                        fe_cmd_yumi_o,         // FE command accepted

  // Frontend queue
  output logic [fe_queue_width_lp-1:0] fe_queue_o,           // FE instruction queue
  output logic                         fe_queue_v_o,         // Queue valid
  input  logic                         fe_queue_ready_and_i, // Queue ready

  // LCE configuration
  input  logic [did_width_p-1:0]       lce_did_i,            // Device ID
  input  logic [lce_id_width_p-1:0]    lce_id_i,             // LCE ID
  input  bp_common_pkg::bp_lce_mode_e  lce_mode_i,           // LCE operating mode

  // LCE Request Interface
  output logic [lce_req_header_width_lp-1:0] lce_req_header_o, // Request header
  output logic [bedrock_fill_width_p-1:0]    lce_req_data_o,   // Request data
  output logic                               lce_req_v_o,      // Request valid
  input  logic                               lce_req_ready_and_i, // Request ready

  // LCE Command Interface
  input  logic [lce_cmd_header_width_lp-1:0] lce_cmd_header_i, // Command header
  input  logic [bedrock_fill_width_p-1:0]    lce_cmd_data_i,   // Command data
  input  logic                               lce_cmd_v_i,      // Command valid
  output logic                               lce_cmd_ready_and_o, // Command ready

  // LCE Fill Interface
  input  logic [lce_fill_header_width_lp-1:0] lce_fill_header_i, // Fill header
  input  logic [bedrock_fill_width_p-1:0]     lce_fill_data_i,   // Fill data
  input  logic                                lce_fill_v_i,      // Fill valid
  output logic                                lce_fill_ready_and_o, // Fill ready

  // LCE Fill Response
  output logic [lce_fill_header_width_lp-1:0] lce_fill_header_o, // Fill response header
  output logic [bedrock_fill_width_p-1:0]     lce_fill_data_o,   // Fill response data
  output logic                                lce_fill_v_o,      // Fill response valid
  input  logic                                lce_fill_ready_and_i, // Fill response ready

  // LCE Response
  output logic [lce_resp_header_width_lp-1:0] lce_resp_header_o, // Response header
  output logic [bedrock_fill_width_p-1:0]     lce_resp_data_o,   // Response data
  output logic                                lce_resp_v_o,      // Response valid
  input  logic                                lce_resp_ready_and_i, // Response ready

  // PMU Outputs
  output logic clk_cpu_o,                     // CPU clock
  output logic rst_cpu_n_o,                   // CPU reset
  output logic clk_noc_o,                     // NoC clock
  output logic rst_noc_n_o,                   // NoC reset
  output logic clk_ddr_o,                     // DDR clock
  output logic rst_ddr_n_o,                   // DDR reset
  output logic clk_periph_o,                  // Peripheral clock
  output logic rst_periph_n_o,                // Peripheral reset

  // Boot ROM TileLink
  input  tlul_pkg::tl_h2d_t rom_tl_i,         // ROM TileLink request
  output tlul_pkg::tl_d2h_t rom_tl_o,         // ROM TileLink response
  input  tlul_pkg::tl_h2d_t rom_regs_tl_i,    // ROM register request
  output tlul_pkg::tl_d2h_t rom_regs_tl_o,    // ROM register response

  // ROM configuration
  input  prim_rom_pkg::rom_cfg_req_t rom_cfg_i,   // ROM configuration request
  output prim_rom_pkg::rom_cfg_rsp_t rom_cfg_o,   // ROM configuration response

  input  prim_alert_pkg::alert_rx_t [rom_ctrl_reg_pkg::NumAlerts-1:0] rom_alert_rx_i, // Alert inputs
  output prim_alert_pkg::alert_tx_t [rom_ctrl_reg_pkg::NumAlerts-1:0] rom_alert_tx_o, // Alert outputs

  // KMAC and Power Manager
  output rom_ctrl_pkg::pwrmgr_data_t rom_pwrmgr_data_o, // Power manager interface
  output rom_ctrl_pkg::keymgr_data_t rom_keymgr_data_o, // Key manager interface
  input  kmac_pkg::app_rsp_t rom_kmac_data_i,           // KMAC response
  output kmac_pkg::app_req_t rom_kmac_data_o            // KMAC request
    // ============================================================
  // LPDDR5 AXI CLOCK AND RESET
  // ============================================================
  input  logic lpddr5_clk_axi_i,          // LPDDR5 AXI interface clock
  input  logic lpddr5_rst_axi_n_i,        // Active-low LPDDR5 AXI reset

  // ============================================================
  // LPDDR5 AXI WRITE ADDRESS CHANNEL
  // ============================================================
  input  logic [LPDDR5_ID_WIDTH-1:0]   s_axi_awid,      // AXI write transaction ID
  input  logic [LPDDR5_ADDR_WIDTH-1:0] s_axi_awaddr,    // AXI write address
  input  logic [7:0]                   s_axi_awlen,     // AXI burst length
  input  logic [2:0]                   s_axi_awsize,    // AXI burst size
  input  logic [1:0]                   s_axi_awburst,   // AXI burst type
  input  logic                         s_axi_awlock,    // AXI lock signal
  input  logic [3:0]                   s_axi_awcache,   // AXI cache attributes
  input  logic [2:0]                   s_axi_awprot,    // AXI protection attributes
  input  logic [3:0]                   s_axi_awqos,     // AXI QoS field
  input  logic                         s_axi_awvalid,   // Write address valid
  output logic                         s_axi_awready,   // Write address ready

  // ============================================================
  // LPDDR5 AXI WRITE DATA CHANNEL
  // ============================================================
  input  logic [LPDDR5_DATA_WIDTH-1:0]   s_axi_wdata,    // AXI write data
  input  logic [LPDDR5_DATA_WIDTH/8-1:0] s_axi_wstrb,    // Write byte strobes
  input  logic                           s_axi_wlast,    // Last write beat
  input  logic                           s_axi_wvalid,   // Write data valid
  output logic                           s_axi_wready,   // Write data ready

  // ============================================================
  // LPDDR5 AXI WRITE RESPONSE CHANNEL
  // ============================================================
  output logic [LPDDR5_ID_WIDTH-1:0] s_axi_bid,      // Write response ID
  output logic [1:0]                 s_axi_bresp,    // Write response status
  output logic                       s_axi_bvalid,   // Write response valid
  input  logic                       s_axi_bready,   // Write response ready

  // ============================================================
  // LPDDR5 AXI READ ADDRESS CHANNEL
  // ============================================================
  input  logic [LPDDR5_ID_WIDTH-1:0]   s_axi_arid,      // Read transaction ID
  input  logic [LPDDR5_ADDR_WIDTH-1:0] s_axi_araddr,    // Read address
  input  logic [7:0]                   s_axi_arlen,     // Read burst length
  input  logic [2:0]                   s_axi_arsize,    // Read burst size
  input  logic [1:0]                   s_axi_arburst,   // Read burst type
  input  logic                         s_axi_arlock,    // Read lock signal
  input  logic [3:0]                   s_axi_arcache,   // Read cache attributes
  input  logic [2:0]                   s_axi_arprot,    // Read protection attributes
  input  logic [3:0]                   s_axi_arqos,     // Read QoS field
  input  logic                         s_axi_arvalid,   // Read address valid
  output logic                         s_axi_arready,   // Read address ready

  // ============================================================
  // LPDDR5 AXI READ DATA CHANNEL
  // ============================================================
  output logic [LPDDR5_ID_WIDTH-1:0]   s_axi_rid,      // Read response ID
  output logic [LPDDR5_DATA_WIDTH-1:0] s_axi_rdata,    // Read data
  output logic [1:0]                   s_axi_rresp,    // Read response status
  output logic                         s_axi_rlast,    // Last read beat
  output logic                         s_axi_rvalid,   // Read data valid
  input  logic                         s_axi_rready,   // Read data ready

  // ============================================================
  // LPDDR5 DDR CLOCK AND RESET
  // ============================================================
  input  logic lpddr5_clk_ddr_800_i,    // LPDDR5 DDR PHY clock
  input  logic lpddr5_rst_ddr_n_i,      // Active-low DDR PHY reset

  // ============================================================
  // LPDDR5 DFI INTERFACE
  // ============================================================
  output logic dfi_clk,                 // DFI interface clock
  output logic dfi_rst_n,               // Active-low DFI reset

  output logic
    [LPDDR5_DFI_DATA_WIDTH*LPDDR5_NUM_CHANNELS-1:0] dfi_cs_n,      // DFI chip select

  output logic
    [LPDDR5_DFI_DATA_WIDTH*LPDDR5_NUM_CHANNELS-1:0] dfi_cke,       // DFI clock enable

  output logic
    [LPDDR5_DFI_DATA_WIDTH*LPDDR5_NUM_CHANNELS-1:0] dfi_ca,        // DFI command/address

  output logic dfi_rw,                  // DFI read/write control

  output logic [LPDDR5_ADDR_WIDTH-1:0] dfi_addr,                   // DFI address

  input logic
    [LPDDR5_DFI_DATA_WIDTH*LPDDR5_NUM_CHANNELS-1:0] dfi_rddata,    // DFI read data

  input logic dfi_rddata_valid,         // DFI read data valid

  output logic
    [LPDDR5_DFI_DATA_WIDTH*LPDDR5_NUM_CHANNELS-1:0] dfi_wrdata,    // DFI write data

  output logic
    [LPDDR5_DFI_DATA_WIDTH/8*LPDDR5_NUM_CHANNELS-1:0]
      dfi_wrdata_mask,                  // DFI write byte mask

  output logic dfi_wrdata_en,           // DFI write enable

  // ============================================================
  // LPDDR5 APB CONFIGURATION INTERFACE
  // ============================================================
  input  logic        lpddr5_pclk_i,        // APB configuration clock
  input  logic        lpddr5_preset_n_i,    // Active-low APB reset
  input  logic        psel,                 // APB peripheral select
  input  logic        penable,              // APB enable
  input  logic        pwrite,               // APB write control
  input  logic [15:0] paddr,                // APB address
  input  logic [31:0] pwdata,               // APB write data

  output logic [31:0] prdata,               // APB read data
  output logic        pready,               // APB ready
  output logic        pslverr,              // APB slave error

  // ============================================================
  // LPDDR5 INTERRUPTS
  // ============================================================
  output logic intr_init_done,              // Initialization complete interrupt
  output logic intr_refresh_err,            // Refresh error interrupt
  output logic intr_ecc_err,                // ECC error interrupt
  output logic intr_training_err,           // Training error interrupt
  output logic intr_parity_err,             // Parity error interrupt

  // LPDDR5 debug output
  output logic [31:0] debug_bus,            // LPDDR5 debug status bus

  // ============================================================
  // UART APB INTERFACE
  // ============================================================
  input  logic        uart_psel_i,          // UART APB select
  input  logic        uart_penable_i,       // UART APB enable
  input  logic        uart_pwrite_i,        // UART APB write control
  input  logic [31:0] uart_paddr_i,         // UART APB address
  input  logic [31:0] uart_pwdata_i,        // UART APB write data
  input  logic [3:0]  uart_pstrb_i,         // UART APB byte strobes

  output logic [31:0] uart_prdata_o,        // UART APB read data
  output logic        uart_pready_o,        // UART APB ready
  output logic        uart_pslverr_o,       // UART APB slave error

  input  logic        uart_divisor_load_i,  // UART baud divisor load
  input  logic        uart_irq_en_i,        // UART interrupt enable
  input  logic        uart_rx_i,            // UART receive pin
  output logic        uart_tx_o,            // UART transmit pin
  input  logic        uart_cts_n_i,         // UART CTS input
  output logic        uart_rts_n_o,         // UART RTS output
  output logic        uart_irq_o,           // UART interrupt output

  // ============================================================
  // SPI APB INTERFACE
  // ============================================================
  input  logic        spi_psel_i,           // SPI APB select
  input  logic        spi_penable_i,        // SPI APB enable
  input  logic        spi_pwrite_i,         // SPI APB write control
  input  logic [31:0] spi_paddr_i,          // SPI APB address
  input  logic [31:0] spi_pwdata_i,         // SPI APB write data
  input  logic [3:0]  spi_pstrb_i,          // SPI APB byte strobes

  output logic [31:0] spi_prdata_o,         // SPI APB read data
  output logic        spi_pready_o,         // SPI APB ready
  output logic        spi_pslverr_o,        // SPI APB slave error

  output logic        spi_sck_o,            // SPI serial clock
  output logic        spi_mosi_o,           // SPI master-out slave-in
  output logic        spi_miso_o,           // SPI master-in slave-out
  output logic [3:0]  spi_cs_n_o,           // SPI chip-select outputs
  output logic        spi_irq_o,            // SPI interrupt output

  // ============================================================
  // I2C APB INTERFACE
  // ============================================================
  input  logic [31:0] i2c_paddr_i,          // I2C APB address
  input  logic        i2c_pwrite_i,         // I2C APB write control
  input  logic        i2c_psel_i,           // I2C APB select
  input  logic        i2c_penable_i,        // I2C APB enable
  input  logic [31:0] i2c_pwdata_i,         // I2C APB write data
  input  logic [3:0]  i2c_pstrb_i,          // I2C APB byte strobes

  output logic [31:0] i2c_prdata_o,         // I2C APB read data
  output logic        i2c_pslverr_o,        // I2C APB slave error
  output logic        i2c_pready_o,         // I2C APB ready

  input  logic        i2c_irq_en_i,         // I2C interrupt enable
  output logic        i2c_irq_o,            // I2C interrupt output
  output logic        i2c_scl_o,            // I2C serial clock
  inout  wire         i2c_sda_io,           // I2C serial data
  
    // ============================================================
  // GPIO APB INTERFACE
  // ============================================================
  input  logic        gpio_psel_i,         // GPIO APB slave select
  input  logic        gpio_penable_i,      // GPIO APB enable
  input  logic        gpio_pwrite_i,       // GPIO APB write control
  input  logic [31:0] gpio_paddr_i,        // GPIO APB address
  input  logic [31:0] gpio_pwdata_i,       // GPIO APB write data
  input  logic [3:0]  gpio_pstrb_i,        // GPIO APB byte strobes

  output logic [31:0] gpio_prdata_o,       // GPIO APB read data
  output logic        gpio_pready_o,       // GPIO APB ready
  output logic        gpio_pslverr_o,      // GPIO APB slave error

  input  logic [31:0] gpio_in_pad_i,       // GPIO input pins
  output logic [31:0] gpio_out_pad_o,      // GPIO output pins
  output logic [31:0] gpio_oen_padoe_o,    // GPIO output enable
  output logic [3:0]  gpio_irq_o,          // GPIO interrupt outputs

  // ============================================================
  // USB AXI AND CONTROLLER CLOCKS / RESETS
  // ============================================================
  input  logic        usb_axi_clk_i,       // USB AXI clock
  input  logic        usb_axi_rst_n_i,     // USB AXI active-low reset
  input  logic        usb_clk_i,           // USB controller clock
  input  logic        usb_rst_n_i,         // USB controller active-low reset

  // ============================================================
  // USB AXI4 WRITE ADDRESS CHANNEL
  // ============================================================
  input  logic [3:0]  usb_awid_i,          // AXI write address ID
  input  logic [31:0] usb_awaddr_i,        // AXI write address
  input  logic [7:0]  usb_awlen_i,         // AXI burst length
  input  logic [2:0]  usb_awsize_i,        // AXI burst size
  input  logic [1:0]  usb_awburst_i,       // AXI burst type
  input  logic        usb_awlock_i,        // AXI lock signal
  input  logic [3:0]  usb_awcache_i,       // AXI cache attributes
  input  logic [2:0]  usb_awprot_i,        // AXI protection attributes
  input  logic [3:0]  usb_awqos_i,         // AXI QoS field
  input  logic        usb_awvalid_i,       // AXI write address valid
  output logic        usb_awready_o,       // AXI write address ready

  // ============================================================
  // USB AXI4 WRITE DATA CHANNEL
  // ============================================================
  input  logic [31:0] usb_wdata_i,         // AXI write data
  input  logic [3:0]  usb_wstrb_i,         // AXI write strobes
  input  logic        usb_wlast_i,         // AXI last write beat
  input  logic        usb_wvalid_i,        // AXI write data valid
  output logic        usb_wready_o,        // AXI write data ready

  // ============================================================
  // USB AXI4 WRITE RESPONSE CHANNEL
  // ============================================================
  output logic [3:0]  usb_bid_o,           // AXI write response ID
  output logic [1:0]  usb_bresp_o,         // AXI write response
  output logic        usb_bvalid_o,        // AXI write response valid
  input  logic        usb_bready_i,        // AXI write response ready

  // ============================================================
  // USB AXI4 READ ADDRESS CHANNEL
  // ============================================================
  input  logic [3:0]  usb_arid_i,          // AXI read address ID
  input  logic [31:0] usb_araddr_i,        // AXI read address
  input  logic [7:0]  usb_arlen_i,         // AXI read burst length
  input  logic [2:0]  usb_arsize_i,        // AXI read burst size
  input  logic [1:0]  usb_arburst_i,       // AXI read burst type
  input  logic        usb_arlock_i,        // AXI read lock
  input  logic [3:0]  usb_arcache_i,       // AXI read cache attributes
  input  logic [2:0]  usb_arprot_i,        // AXI read protection attributes
  input  logic [3:0]  usb_arqos_i,         // AXI read QoS field
  input  logic        usb_arvalid_i,       // AXI read address valid
  output logic        usb_arready_o,       // AXI read address ready

  // ============================================================
  // USB AXI4 READ DATA CHANNEL
  // ============================================================
  output logic [3:0]  usb_rid_o,           // AXI read response ID
  output logic [31:0] usb_rdata_o,         // AXI read data
  output logic [1:0]  usb_rresp_o,         // AXI read response
  output logic        usb_rlast_o,         // AXI last read beat
  output logic        usb_rvalid_o,        // AXI read data valid
  input  logic        usb_rready_i,        // AXI read data ready

  // ============================================================
  // USB UTMI INTERFACE
  // ============================================================
  input  logic [7:0]  usb_utmi_data_in_i,      // UTMI receive data
  input  logic        usb_utmi_txready_i,      // UTMI transmit ready
  input  logic        usb_utmi_rxvalid_i,      // UTMI receive valid
  input  logic        usb_utmi_rxactive_i,     // UTMI receive active
  input  logic        usb_utmi_rxerror_i,      // UTMI receive error
  input  logic [1:0]  usb_utmi_linestate_i,    // UTMI line state

  output logic [7:0]  usb_utmi_data_out_o,     // UTMI transmit data
  output logic        usb_utmi_txvalid_o,      // UTMI transmit valid
  output logic [1:0]  usb_utmi_op_mode_o,      // UTMI operating mode
  output logic [1:0]  usb_utmi_xcvrselect_o,   // UTMI transceiver select
  output logic        usb_utmi_termselect_o,   // UTMI termination select
  output logic        usb_utmi_dppulldown_o,   // UTMI D+ pulldown
  output logic        usb_utmi_dmpulldown_o,   // UTMI D- pulldown

  // ============================================================
  // USB INTERRUPT
  // ============================================================
  output logic        usb_intr_o,          // USB interrupt output

  // ============================================================
  // ETHERNET AXI-LITE INTERFACE
  // ============================================================
  input  logic         eth_axil_clk_i,     // Ethernet AXI-Lite clock
  input  logic         eth_axil_rst_n_i,   // Ethernet AXI-Lite active-low reset

  input  logic [31:0]  eth_awaddr_i,       // AXI-Lite write address
  input  logic [2:0]   eth_awprot_i,       // AXI-Lite write protection
  input  logic         eth_awvalid_i,      // AXI-Lite write address valid
  output logic         eth_awready_o,      // AXI-Lite write address ready

  input  logic [31:0]  eth_wdata_i,        // AXI-Lite write data
  input  logic [3:0]   eth_wstrb_i,        // AXI-Lite write strobes
  input  logic         eth_wvalid_i,       // AXI-Lite write valid
  output logic         eth_wready_o,       // AXI-Lite write ready

  output logic [1:0]   eth_bresp_o,        // AXI-Lite write response
  output logic         eth_bvalid_o,       // AXI-Lite write response valid
  input  logic         eth_bready_i,       // AXI-Lite write response ready

  input  logic [31:0]  eth_araddr_i,       // AXI-Lite read address
  input  logic [2:0]   eth_arprot_i,       // AXI-Lite read protection
  input  logic         eth_arvalid_i,      // AXI-Lite read address valid
  output logic         eth_arready_o,      // AXI-Lite read address ready

  output logic [31:0]  eth_rdata_o,        // AXI-Lite read data
  output logic [1:0]   eth_rresp_o,        // AXI-Lite read response
  output logic         eth_rvalid_o,       // AXI-Lite read valid
  input  logic         eth_rready_i,       // AXI-Lite read ready

  // ============================================================
  // RGMII PHY INTERFACE
  // ============================================================
  input  logic         rgmii_rx_clk,       // RGMII receive clock
  input  logic [3:0]   rgmii_rxd,          // RGMII receive data
  input  logic         rgmii_rx_ctl,       // RGMII receive control

  output logic         rgmii_tx_clk,       // RGMII transmit clock
  output logic [3:0]   rgmii_txd,          // RGMII transmit data
  output logic         rgmii_tx_ctl,       // RGMII transmit control

  // ============================================================
  // SD/eMMC AXI-LITE INTERFACE
  // ============================================================
  input  logic         sd_axi_clk,         // SD/eMMC AXI-Lite clock
  input  logic         sd_axi_rst_n,       // SD/eMMC AXI-Lite active-low reset

  input  logic [31:0]  sd_awaddr,          // SD AXI-Lite write address
  input  logic [2:0]   sd_awprot,          // SD AXI-Lite write protection
  input  logic         sd_awvalid,         // SD AXI-Lite write address valid
  output logic         sd_awready,         // SD AXI-Lite write address ready

  input  logic [31:0]  sd_wdata,           // SD AXI-Lite write data
  input  logic [3:0]   sd_wstrb,           // SD AXI-Lite write strobes
  input  logic         sd_wvalid,          // SD AXI-Lite write valid
  output logic         sd_wready,          // SD AXI-Lite write ready

  output logic [1:0]   sd_bresp,           // SD AXI-Lite write response
  output logic         sd_bvalid,          // SD AXI-Lite write response valid
  input  logic         sd_bready,          // SD AXI-Lite write response ready

  input  logic [31:0]  sd_araddr,          // SD AXI-Lite read address
  input  logic [2:0]   sd_arprot,          // SD AXI-Lite read protection
  input  logic         sd_arvalid,         // SD AXI-Lite read address valid
  output logic         sd_arready,         // SD AXI-Lite read address ready

  output logic [31:0]  sd_rdata,           // SD AXI-Lite read data
  output logic [1:0]   sd_rresp,           // SD AXI-Lite read response
  output logic         sd_rvalid,          // SD AXI-Lite read valid
  input  logic         sd_rready,          // SD AXI-Lite read ready

  // ============================================================
  // SD/eMMC PHYSICAL INTERFACE
  // ============================================================
  output logic         SD_CLK,             // SD/eMMC clock output
  output logic         sd_cmd_o,           // SD/eMMC command output
  input  logic         sd_cmd_i,           // SD/eMMC command input
  output logic         sd_cmd_t,           // SD/eMMC command tri-state control

  output logic [7:0]   sd_dat_o,           // SD/eMMC data output
  input  logic [7:0]   sd_dat_i,           // SD/eMMC data input
  output logic         sd_dat_t,           // SD/eMMC data tri-state control

  output logic         sd_interrupt        // SD/eMMC interrupt output
);
// ============================================================
// PMU Generated Clocks and Resets
// ============================================================
logic clk_cpu, rst_cpu_n;          // CPU clock and active-low reset
logic clk_noc, rst_noc_n;          // NoC clock and active-low reset
logic clk_ddr, rst_ddr_n;          // DDR clock and active-low reset
logic clk_periph, rst_periph_n;    // Peripheral clock and active-low reset

//==========================================================
// Ethernet Internal Signals
//==========================================================
logic irq_tx_cmpl;                 // Ethernet TX complete interrupt
logic irq_rx_cmpl;                 // Ethernet RX complete interrupt
logic irq_DMA_err;                 // Ethernet DMA error interrupt

logic gtx_clk;                     // Ethernet GTX transmit clock
logic gtx_clk90;                   // Ethernet GTX 90-degree phase clock
logic gtx_rst;                     // Ethernet GTX reset

logic logic_clk;                   // Ethernet logic clock
logic logic_rst;                   // Ethernet logic reset

assign logic_clk = clk_periph;     // Use peripheral clock for Ethernet logic
assign logic_rst = ~rst_periph_n;  // Active-high logic reset

// Temporary for simulation
assign gtx_clk   = clk_periph;     // Temporary GTX clock source
assign gtx_clk90 = clk_periph;     // Temporary 90° GTX clock source
assign gtx_rst   = ~rst_periph_n;  // Temporary GTX reset

//==========================================================
// SPI Simulation Internal Signals
//==========================================================

// Control Signals
logic        spi_start;            // SPI transfer start control
logic [7:0]  spi_length;           // SPI transfer length
logic [39:0] spi_tx_data;          // SPI transmit data
logic [15:0] spi_clk_div;          // SPI clock divider
logic        spi_cs_sel;           // SPI chip select

// SPI Interface
logic        spi_sclk;             // SPI serial clock
logic        spi_cs_n;             // SPI chip select (active low)
logic        spi_mosi;             // SPI Master Out Slave In
logic        spi_miso;             // SPI Master In Slave Out

// Status Signals
logic [39:0] spi_rx_data;          // SPI received data
logic        spi_done;             // SPI transfer complete
logic        spi_error;            // SPI error indication
logic        spi_irq;              // SPI interrupt

// ==========================================================
// CPU TOP - Internal AXI4 Master Signals
// ==========================================================

localparam int CPU_AXI_ID_WIDTH   = 4;                     // AXI ID width
localparam int CPU_AXI_ADDR_WIDTH = paddr_width_p;         // AXI address width
localparam int CPU_AXI_DATA_WIDTH = bedrock_fill_width_p;  // AXI data width
localparam int CPU_AXI_STRB_WIDTH = CPU_AXI_DATA_WIDTH/8;  // AXI strobe width

// AXI4 Write Address Channel
logic [CPU_AXI_ID_WIDTH-1:0]   cpu_m_axi_awid;      // Write address ID
logic [CPU_AXI_ADDR_WIDTH-1:0] cpu_m_axi_awaddr;    // Write address
logic [7:0]                    cpu_m_axi_awlen;     // Burst length
logic [2:0]                    cpu_m_axi_awsize;    // Burst size
logic [1:0]                    cpu_m_axi_awburst;   // Burst type
logic                          cpu_m_axi_awvalid;   // Write address valid
logic                          cpu_m_axi_awready;   // Write address ready

// AXI4 Write Data Channel
logic [CPU_AXI_DATA_WIDTH-1:0] cpu_m_axi_wdata;     // Write data
logic [CPU_AXI_STRB_WIDTH-1:0] cpu_m_axi_wstrb;     // Write strobes
logic                          cpu_m_axi_wlast;     // Last write beat
logic                          cpu_m_axi_wvalid;    // Write data valid
logic                          cpu_m_axi_wready;    // Write data ready

// AXI4 Write Response Channel
logic [CPU_AXI_ID_WIDTH-1:0] cpu_m_axi_bid;         // Write response ID
logic [1:0]                  cpu_m_axi_bresp;       // Write response
logic                        cpu_m_axi_bvalid;      // Write response valid
logic                        cpu_m_axi_bready;      // Write response ready

// AXI4 Read Address Channel
logic [CPU_AXI_ID_WIDTH-1:0]   cpu_m_axi_arid;      // Read address ID
logic [CPU_AXI_ADDR_WIDTH-1:0] cpu_m_axi_araddr;    // Read address
logic [7:0]                    cpu_m_axi_arlen;     // Read burst length
logic [2:0]                    cpu_m_axi_arsize;    // Read burst size
logic [1:0]                    cpu_m_axi_arburst;   // Read burst type
logic                          cpu_m_axi_arvalid;   // Read address valid
logic                          cpu_m_axi_arready;   // Read address ready

// AXI4 Read Data Channel
logic [CPU_AXI_ID_WIDTH-1:0]   cpu_m_axi_rid;       // Read response ID
logic [CPU_AXI_DATA_WIDTH-1:0] cpu_m_axi_rdata;     // Read data
logic [1:0]                    cpu_m_axi_rresp;     // Read response
logic                          cpu_m_axi_rlast;     // Last read beat
logic                          cpu_m_axi_rvalid;    // Read data valid
logic                          cpu_m_axi_rready;    // Read data ready

// AXI Optional Signals
logic       cpu_m_axi_awlock;                       // Write lock
logic [3:0] cpu_m_axi_awcache;                      // Write cache attributes
logic [2:0] cpu_m_axi_awprot;                       // Write protection
logic [3:0] cpu_m_axi_awqos;                        // Write QoS

logic       cpu_m_axi_arlock;                       // Read lock
logic [3:0] cpu_m_axi_arcache;                      // Read cache attributes
logic [2:0] cpu_m_axi_arprot;                       // Read protection
logic [3:0] cpu_m_axi_arqos;                        // Read QoS

// CPU interrupt source vector
logic [63:0] cpu_plic_src;                          // PLIC interrupt sources

// ==========================================================
// CPU TOP - DMA Interface Signals
// ==========================================================

localparam int CPU_DMA_PKT_WIDTH =
  `bsg_cache_dma_pkt_width(daddr_width_p, l2_block_size_in_words_p); // DMA packet width

logic [num_cce_p-1:0][l2_dmas_p-1:0][CPU_DMA_PKT_WIDTH-1:0]
    cpu_dma_pkt;                                   // DMA request packets

logic [num_cce_p-1:0][l2_dmas_p-1:0]
    cpu_dma_pkt_v;                                 // DMA request valid

logic [num_cce_p-1:0][l2_dmas_p-1:0]
    cpu_dma_pkt_ready;                             // DMA request ready

logic [num_cce_p-1:0][l2_dmas_p-1:0][l2_fill_width_p-1:0]
    cpu_dma_data_in;                               // DMA input data

logic [num_cce_p-1:0][l2_dmas_p-1:0]
    cpu_dma_data_in_v;                             // DMA input valid

logic [num_cce_p-1:0][l2_dmas_p-1:0]
    cpu_dma_data_in_ready;                         // DMA input ready

logic [num_cce_p-1:0][l2_dmas_p-1:0][l2_fill_width_p-1:0]
    cpu_dma_data_out;                              // DMA output data

logic [num_cce_p-1:0][l2_dmas_p-1:0]
    cpu_dma_data_out_v;                            // DMA output valid

logic [num_cce_p-1:0][l2_dmas_p-1:0]
    cpu_dma_data_out_ready;                        // DMA output ready

// DDR Clock and Reset
logic         clk_ddr;                             // DDR clock
logic         rst_ddr_n;                           // DDR active-low reset

//==========================================================
// Generic AXI4 Interface
//==========================================================
logic [3:0]    axi_awid;                           // Write address ID
logic [31:0]   axi_awaddr;                         // Write address
logic [7:0]    axi_awlen;                          // Write burst length
logic [2:0]    axi_awsize;                         // Write burst size
logic [1:0]    axi_awburst;                        // Write burst type
logic          axi_awlock;                         // Write lock
logic [3:0]    axi_awcache;                        // Write cache
logic [2:0]    axi_awprot;                         // Write protection
logic [3:0]    axi_awqos;                          // Write QoS
logic          axi_awvalid;                        // Write address valid
logic          axi_awready;                        // Write address ready

logic [127:0]  axi_wdata;                          // Write data
logic [15:0]   axi_wstrb;                          // Write strobes
logic          axi_wlast;                          // Last write beat
logic          axi_wvalid;                         // Write data valid
logic          axi_wready;                         // Write data ready

logic [3:0]    axi_bid;                            // Write response ID
logic [1:0]    axi_bresp;                          // Write response
logic          axi_bvalid;                         // Write response valid
logic          axi_bready;                         // Write response ready

logic [3:0]    axi_arid;                           // Read address ID
logic [31:0]   axi_araddr;                         // Read address
logic [7:0]    axi_arlen;                          // Read burst length
logic [2:0]    axi_arsize;                         // Read burst size
logic [1:0]    axi_arburst;                        // Read burst type
logic          axi_arlock;                         // Read lock
logic [3:0]    axi_arcache;                        // Read cache
logic [2:0]    axi_arprot;                         // Read protection
logic [3:0]    axi_arqos;                          // Read QoS
logic          axi_arvalid;                        // Read address valid
logic          axi_arready;                        // Read address ready

logic [3:0]    axi_rid;                            // Read response ID
logic [127:0]  axi_rdata;                          // Read data
logic [1:0]    axi_rresp;                          // Read response
logic          axi_rlast;                          // Last read beat
logic          axi_rvalid;                         // Read data valid
logic          axi_rready;                         // Read data ready

//==========================================================
// TPU AXI4-Lite Interface
//==========================================================
logic [7:0]  tpu_awaddr, tpu_araddr;               // AXI-Lite addresses
logic [2:0]  tpu_awprot, tpu_arprot;               // Protection attributes
logic        tpu_awvalid, tpu_awready;             // Write address handshake
logic [31:0] tpu_wdata;                            // Write data
logic [3:0]  tpu_wstrb;                            // Write strobes
logic        tpu_wvalid, tpu_wready;               // Write data handshake
logic [1:0]  tpu_bresp;                            // Write response
logic        tpu_bvalid, tpu_bready;               // Write response handshake
logic        tpu_arvalid, tpu_arready;             // Read address handshake
logic [31:0] tpu_rdata;                            // Read data
logic [1:0]  tpu_rresp;                            // Read response
logic        tpu_rvalid, tpu_rready;               // Read data handshake

//==========================================================
// TPU AXI4 Master DMA
//==========================================================
logic         tpu_m_axi_awid;                      // DMA write ID
logic [31:0]  tpu_m_axi_awaddr;                    // DMA write address
logic [7:0]   tpu_m_axi_awlen;                     // DMA write burst length
logic [2:0]   tpu_m_axi_awsize;                    // DMA write burst size
logic [1:0]   tpu_m_axi_awburst;                   // DMA write burst type
logic         tpu_m_axi_awlock;                    // DMA write lock
logic [3:0]   tpu_m_axi_awcache;                   // DMA write cache
logic [2:0]   tpu_m_axi_awprot;                    // DMA write protection
logic [3:0]   tpu_m_axi_awqos;                     // DMA write QoS
logic         tpu_m_axi_awvalid;                   // DMA write address valid
logic         tpu_m_axi_awready;                   // DMA write address ready

logic [127:0] tpu_m_axi_wdata;                     // DMA write data
logic [15:0]  tpu_m_axi_wstrb;                     // DMA write strobes
logic         tpu_m_axi_wlast;                     // DMA last write beat
logic         tpu_m_axi_wvalid;                    // DMA write data valid
logic         tpu_m_axi_wready;                    // DMA write data ready

logic         tpu_m_axi_bid;                       // DMA write response ID
logic [1:0]   tpu_m_axi_bresp;                     // DMA write response
logic         tpu_m_axi_bvalid;                    // DMA write response valid
logic         tpu_m_axi_bready;                    // DMA write response ready

logic         tpu_m_axi_arid;                      // DMA read ID
logic [31:0]  tpu_m_axi_araddr;                    // DMA read address
logic [7:0]   tpu_m_axi_arlen;                     // DMA read burst length
logic [2:0]   tpu_m_axi_arsize;                    // DMA read burst size
logic [1:0]   tpu_m_axi_arburst;                   // DMA read burst type
logic         tpu_m_axi_arlock;                    // DMA read lock
logic [3:0]   tpu_m_axi_arcache;                   // DMA read cache
logic [2:0]   tpu_m_axi_arprot;                    // DMA read protection
logic [3:0]   tpu_m_axi_arqos;                     // DMA read QoS
logic         tpu_m_axi_arvalid;                   // DMA read address valid
logic         tpu_m_axi_arready;                   // DMA read address ready

logic         tpu_m_axi_rid;                       // DMA read response ID
logic [127:0] tpu_m_axi_rdata;                     // DMA read data
logic [1:0]   tpu_m_axi_rresp;                     // DMA read response
logic         tpu_m_axi_rlast;                     // DMA last read beat
logic         tpu_m_axi_rvalid;                    // DMA read data valid
logic         tpu_m_axi_rready;                    // DMA read data ready

//==========================================================
// TPU Interrupt
//==========================================================
logic tpu_irq;                                     // TPU interrupt output
//==========================================================
// Generic AXI4 Interface Signals
//==========================================================
logic [3:0]    axi_awid;        // AXI write address ID
logic [31:0]   axi_awaddr;      // AXI write address
logic [7:0]    axi_awlen;       // AXI write burst length
logic [2:0]    axi_awsize;      // AXI write burst size
logic [1:0]    axi_awburst;     // AXI write burst type
logic          axi_awlock;      // AXI write lock signal
logic [3:0]    axi_awcache;     // AXI write cache attributes
logic [2:0]    axi_awprot;      // AXI write protection attributes
logic [3:0]    axi_awqos;       // AXI write QoS
logic          axi_awvalid;     // AXI write address valid
logic          axi_awready;     // AXI write address ready

logic [127:0]  axi_wdata;       // AXI write data
logic [15:0]   axi_wstrb;       // AXI write byte strobes
logic          axi_wlast;       // AXI last write transfer
logic          axi_wvalid;      // AXI write data valid
logic          axi_wready;      // AXI write data ready

logic [3:0]    axi_bid;         // AXI write response ID
logic [1:0]    axi_bresp;       // AXI write response
logic          axi_bvalid;      // AXI write response valid
logic          axi_bready;      // AXI write response ready

logic [3:0]    axi_arid;        // AXI read address ID
logic [31:0]   axi_araddr;      // AXI read address
logic [7:0]    axi_arlen;       // AXI read burst length
logic [2:0]    axi_arsize;      // AXI read burst size
logic [1:0]    axi_arburst;     // AXI read burst type
logic          axi_arlock;      // AXI read lock signal
logic [3:0]    axi_arcache;     // AXI read cache attributes
logic [2:0]    axi_arprot;      // AXI read protection attributes
logic [3:0]    axi_arqos;       // AXI read QoS
logic          axi_arvalid;     // AXI read address valid
logic          axi_arready;     // AXI read address ready

logic [3:0]    axi_rid;         // AXI read response ID
logic [127:0]  axi_rdata;       // AXI read data
logic [1:0]    axi_rresp;       // AXI read response
logic          axi_rlast;       // AXI last read transfer
logic          axi_rvalid;      // AXI read data valid
logic          axi_rready;      // AXI read data ready

//==========================================================
// Generic APB Interface Signals
//==========================================================
logic [31:0]   PADDR;           // APB address
logic          PSEL;            // APB peripheral select
logic          PENABLE;         // APB enable
logic          PWRITE;          // APB write enable
logic [2:0]    PPROT;           // APB protection attributes
logic [31:0]   PWDATA;          // APB write data
logic [3:0]    PSTRB;           // APB byte strobes
logic [31:0]   PRDATA;          // APB read data
logic          PREADY;          // APB ready
logic          PSLVERR;         // APB slave error

//==========================================================
// PMU Top Stub
//==========================================================
pmu_top_stub #(
  .DIV_WIDTH(PMU_DIV_WIDTH)                      // Clock divider width
) u_pmu_top (
  .ref_clk       (ref_clk_i),                   // Reference clock
  .rst_n         (rst_n_i),                     // Active-low reset
  .pll_lock      (pll_lock_i),                  // PLL lock indication
  .reg_wr_en     (pmu_reg_wr_en_i),             // PMU register write enable
  .reg_addr      (pmu_reg_addr_i),              // PMU register address
  .reg_wdata     (pmu_reg_wdata_i),             // PMU register write data
  .reg_rdata     (pmu_reg_rdata_o),             // PMU register read data
  .clk_cpu       (clk_cpu),                     // CPU clock output
  .rst_cpu_n     (rst_cpu_n),                   // CPU reset output
  .clk_noc       (clk_noc),                     // NoC clock output
  .rst_noc_n     (rst_noc_n),                   // NoC reset output
  .clk_ddr       (clk_ddr),                     // DDR clock output
  .rst_ddr_n     (rst_ddr_n),                   // DDR reset output
  .clk_periph    (clk_periph),                  // Peripheral clock output
  .rst_periph_n  (rst_periph_n)                 // Peripheral reset output
);

//==========================================================
// Boot ROM Controller Stub
//==========================================================
rom_ctrl_stub #(
  .BootRomInitFile      (BootRomInitFile),       // Boot ROM initialization file
  .MemSizeRom           (ROM_SIZE_BYTES),        // Boot ROM size
  .SecDisableScrambling (ROM_DISABLE_SCRAMBLING) // Disable ROM scrambling
) u_rom_ctrl (
  .clk_i          (clk_cpu),                     // CPU clock
  .rst_ni         (rst_cpu_n),                   // Active-low reset
  .rom_cfg_i      (rom_cfg_i),                   // ROM configuration request
  .rom_cfg_o      (rom_cfg_o),                   // ROM configuration response
  .rom_tl_i       (rom_tl_i),                    // TileLink request
  .rom_tl_o       (rom_tl_o),                    // TileLink response
  .regs_tl_i      (rom_regs_tl_i),               // Register TileLink request
  .regs_tl_o      (rom_regs_tl_o),               // Register TileLink response
  .alert_rx_i     (rom_alert_rx_i),              // Alert receiver interface
  .alert_tx_o     (rom_alert_tx_o),              // Alert transmitter interface
  .pwrmgr_data_o  (rom_pwrmgr_data_o),           // Power manager interface
  .keymgr_data_o  (rom_keymgr_data_o),           // Key manager interface
  .kmac_data_i    (rom_kmac_data_i),             // KMAC response
  .kmac_data_o    (rom_kmac_data_o)              // KMAC request
);

//==========================================================
// BlackParrot Frontend Stub
//==========================================================
bp_fe_top_stub #(
  .bp_params_p(bp_params_p)                      // BlackParrot configuration
) u_bp_fe_top (
  .clk_i                       (clk_cpu),                    // CPU clock
  .reset_i                     (~rst_cpu_n),                // Active-high reset
  .cfg_bus_i                   (cfg_bus_i),                 // Configuration bus

  .fe_cmd_i                    (fe_cmd_i),                  // Frontend command
  .fe_cmd_v_i                  (fe_cmd_v_i),                // Command valid
  .fe_cmd_yumi_o               (fe_cmd_yumi_o),             // Command accepted

  .fe_queue_o                  (fe_queue_o),                // Frontend queue output
  .fe_queue_v_o                (fe_queue_v_o),              // Queue valid
  .fe_queue_ready_and_i        (fe_queue_ready_and_i),      // Queue ready

  .cache_req_o                 (cache_req),                 // Cache request
  .cache_req_v_o               (cache_req_v),               // Cache request valid
  .cache_req_yumi_i            (cache_req_yumi),            // Cache request accepted
  .cache_req_lock_i            (cache_req_lock),            // Cache lock
  .cache_req_metadata_o        (cache_req_metadata),        // Cache metadata
  .cache_req_metadata_v_o      (cache_req_metadata_v),      // Metadata valid
  .cache_req_id_i              (cache_req_id),             // Cache request ID
  .cache_req_critical_i        (cache_req_critical),       // Critical request
  .cache_req_last_i            (cache_req_last),           // Last request
  .cache_req_credits_full_i    (cache_req_credits_full),   // Credits full
  .cache_req_credits_empty_i   (cache_req_credits_empty),  // Credits empty

  .data_mem_pkt_i              (cache_data_mem_pkt),        // Data memory packet
  .data_mem_pkt_v_i            (cache_data_mem_pkt_v),      // Data packet valid
  .data_mem_pkt_yumi_o         (cache_data_mem_pkt_yumi),   // Data packet accepted
  .data_mem_o                  (cache_data_mem),            // Data memory output

  .tag_mem_pkt_i               (cache_tag_mem_pkt),         // Tag memory packet
  .tag_mem_pkt_v_i             (cache_tag_mem_pkt_v),       // Tag packet valid
  .tag_mem_pkt_yumi_o          (cache_tag_mem_pkt_yumi),    // Tag packet accepted
  .tag_mem_o                   (cache_tag_mem),             // Tag memory output

  .stat_mem_pkt_i              (cache_stat_mem_pkt),        // Status memory packet
  .stat_mem_pkt_v_i            (cache_stat_mem_pkt_v),      // Status packet valid
  .stat_mem_pkt_yumi_o         (cache_stat_mem_pkt_yumi),   // Status packet accepted
  .stat_mem_o                  (cache_stat_mem)            // Status memory output
);

//==========================================================
// BlackParrot LCE Stub
//==========================================================
bp_lce_stub #(
  .bp_params_p       (bp_params_p),              // BlackParrot configuration
  .assoc_p           (icache_assoc_p),           // Cache associativity
  .sets_p            (icache_sets_p),            // Number of cache sets
  .block_width_p     (icache_block_width_p),     // Cache block width
  .fill_width_p      (icache_fill_width_p),      // Cache fill width
  .data_width_p      (icache_data_width_p),      // Cache data width
  .id_width_p        (icache_req_id_width_p),    // Request ID width
  .tag_width_p       (icache_tag_width_p)        // Cache tag width
) u_bp_lce (
  .clk_i                    (clk_cpu),                     // CPU clock
  .reset_i                  (~rst_cpu_n),                 // Active-high reset

  .did_i                    (lce_did_i),                  // Device ID
  .lce_id_i                 (lce_id_i),                   // LCE ID
  .lce_mode_i               (lce_mode_i),                 // LCE operating mode

  .cache_req_i              (cache_req),                  // Cache request
  .cache_req_v_i            (cache_req_v),                // Request valid
  .cache_req_yumi_o         (cache_req_yumi),             // Request accepted
  .cache_req_lock_o         (cache_req_lock),             // Cache lock
  .cache_req_metadata_i     (cache_req_metadata),         // Metadata input
  .cache_req_metadata_v_i   (cache_req_metadata_v),       // Metadata valid
  .cache_req_critical_o     (cache_req_critical),         // Critical request
  .cache_req_id_o           (cache_req_id),               // Request ID
  .cache_req_last_o         (cache_req_last),             // Last request
  .cache_req_credits_full_o (cache_req_credits_full),     // Credits full
  .cache_req_credits_empty_o(cache_req_credits_empty),    // Credits empty

  .tag_mem_pkt_v_o          (cache_tag_mem_pkt_v),        // Tag packet valid
  .tag_mem_pkt_o            (cache_tag_mem_pkt),          // Tag packet
  .tag_mem_pkt_yumi_i       (cache_tag_mem_pkt_yumi),     // Tag packet accepted
  .tag_mem_i                (cache_tag_mem),              // Tag memory

  .data_mem_pkt_v_o         (cache_data_mem_pkt_v),       // Data packet valid
  .data_mem_pkt_o           (cache_data_mem_pkt),         // Data packet
  .data_mem_pkt_yumi_i      (cache_data_mem_pkt_yumi),    // Data packet accepted
  .data_mem_i               (cache_data_mem),             // Data memory

  .stat_mem_pkt_v_o         (cache_stat_mem_pkt_v),       // Status packet valid
  .stat_mem_pkt_o           (cache_stat_mem_pkt),         // Status packet
  .stat_mem_pkt_yumi_i      (cache_stat_mem_pkt_yumi),    // Status packet accepted
  .stat_mem_i               (cache_stat_mem),             // Status memory

  .lce_req_header_o         (lce_req_header_o),           // LCE request header
  .lce_req_data_o           (lce_req_data_o),             // LCE request data
  .lce_req_v_o              (lce_req_v_o),                // LCE request valid
  .lce_req_ready_and_i      (lce_req_ready_and_i),        // LCE request ready

  .lce_cmd_header_i         (lce_cmd_header_i),           // Command header
  .lce_cmd_data_i           (lce_cmd_data_i),             // Command data
  .lce_cmd_v_i              (lce_cmd_v_i),                // Command valid
  .lce_cmd_ready_and_o      (lce_cmd_ready_and_o),        // Command ready

  .lce_fill_header_i        (lce_fill_header_i),          // Fill header
  .lce_fill_data_i          (lce_fill_data_i),            // Fill data
  .lce_fill_v_i             (lce_fill_v_i),               // Fill valid
  .lce_fill_ready_and_o     (lce_fill_ready_and_o),       // Fill ready

  .lce_fill_header_o        (lce_fill_header_o),          // Fill response header
  .lce_fill_data_o          (lce_fill_data_o),            // Fill response data
  .lce_fill_v_o             (lce_fill_v_o),               // Fill response valid
  .lce_fill_ready_and_i     (lce_fill_ready_and_i),       // Fill response ready

  .lce_resp_header_o        (lce_resp_header_o),          // Response header
  .lce_resp_data_o          (lce_resp_data_o),            // Response data
  .lce_resp_v_o             (lce_resp_v_o),               // Response valid
  .lce_resp_ready_and_i     (lce_resp_ready_and_i)        // Response ready
);
cpu_top_stub #(
    .bp_params_p   (bp_params_p),           // BlackParrot processor configuration
    .AXI_DATA_WIDTH(CPU_AXI_DATA_WIDTH),    // CPU AXI data bus width
    .ID_WIDTH      (CPU_AXI_ID_WIDTH)       // CPU AXI ID width
) u_cpu_top (

    // ============================================================
    // Clock and Reset
    // ============================================================
    .clk_i          (clk_cpu),              // CPU core clock
    .plic_ahb_clk_i (clk_periph),           // PLIC AHB clock
    .rt_clk_i       (clk_cpu),              // Real-time clock
    .reset_i        (~rst_cpu_n),           // Active-high reset

    // ============================================================
    // CPU AXI Clock and Reset
    // ============================================================
    .axi_clk_i      (clk_cpu),              // AXI interface clock
    .axi_reset_i    (~rst_cpu_n),           // AXI interface reset

    // ============================================================
    // Device IDs
    // ============================================================
    .my_did_i       ('0),                   // Local device ID
    .host_did_i     ('0),                   // Host device ID

    // ============================================================
    // AXI4 Write Address Channel
    // ============================================================
    .m_axi_awid     (cpu_m_axi_awid),       // Write address ID
    .m_axi_awaddr   (cpu_m_axi_awaddr),     // Write address
    .m_axi_awlen    (cpu_m_axi_awlen),      // Burst length
    .m_axi_awsize   (cpu_m_axi_awsize),     // Burst size
    .m_axi_awburst  (cpu_m_axi_awburst),    // Burst type
    .m_axi_awvalid  (cpu_m_axi_awvalid),    // Write address valid
    .m_axi_awready  (cpu_m_axi_awready),    // Write address ready
    .m_axi_awlock   (cpu_m_axi_awlock),     // Lock transaction
    .m_axi_awcache  (cpu_m_axi_awcache),    // Cache attributes
    .m_axi_awprot   (cpu_m_axi_awprot),     // Protection attributes
    .m_axi_awqos    (cpu_m_axi_awqos),      // QoS attributes

    // ============================================================
    // AXI4 Write Data Channel
    // ============================================================
    .m_axi_wdata    (cpu_m_axi_wdata),      // Write data
    .m_axi_wstrb    (cpu_m_axi_wstrb),      // Byte strobes
    .m_axi_wlast    (cpu_m_axi_wlast),      // Last write transfer
    .m_axi_wvalid   (cpu_m_axi_wvalid),     // Write data valid
    .m_axi_wready   (cpu_m_axi_wready),     // Write data ready

    // ============================================================
    // AXI4 Write Response Channel
    // ============================================================
    .m_axi_bid      (cpu_m_axi_bid),        // Write response ID
    .m_axi_bresp    (cpu_m_axi_bresp),      // Write response
    .m_axi_bvalid   (cpu_m_axi_bvalid),     // Write response valid
    .m_axi_bready   (cpu_m_axi_bready),     // Write response ready

    // ============================================================
    // AXI4 Read Address Channel
    // ============================================================
    .m_axi_arid     (cpu_m_axi_arid),       // Read address ID
    .m_axi_araddr   (cpu_m_axi_araddr),     // Read address
    .m_axi_arlen    (cpu_m_axi_arlen),      // Burst length
    .m_axi_arsize   (cpu_m_axi_arsize),     // Burst size
    .m_axi_arburst  (cpu_m_axi_arburst),    // Burst type
    .m_axi_arvalid  (cpu_m_axi_arvalid),    // Read address valid
    .m_axi_arready  (cpu_m_axi_arready),    // Read address ready
    .m_axi_arlock   (cpu_m_axi_arlock),     // Lock transaction
    .m_axi_arcache  (cpu_m_axi_arcache),    // Cache attributes
    .m_axi_arprot   (cpu_m_axi_arprot),     // Protection attributes
    .m_axi_arqos    (cpu_m_axi_arqos),      // QoS attributes

    // ============================================================
    // AXI4 Read Data Channel
    // ============================================================
    .m_axi_rid      (cpu_m_axi_rid),        // Read response ID
    .m_axi_rdata    (cpu_m_axi_rdata),      // Read data
    .m_axi_rresp    (cpu_m_axi_rresp),      // Read response
    .m_axi_rlast    (cpu_m_axi_rlast),      // Last read transfer
    .m_axi_rvalid   (cpu_m_axi_rvalid),     // Read data valid
    .m_axi_rready   (cpu_m_axi_rready),     // Read data ready

    // ============================================================
    // Interrupt Interface
    // ============================================================
    .plic_src_i     (cpu_plic_src),         // PLIC interrupt sources

    // ============================================================
    // DMA Packet Interface
    // ============================================================
    .dma_pkt_o               (cpu_dma_pkt),             // DMA request packet
    .dma_pkt_v_o             (cpu_dma_pkt_v),           // DMA packet valid
    .dma_pkt_ready_and_i     (cpu_dma_pkt_ready),       // DMA packet ready

    // ============================================================
    // DMA Incoming Data
    // ============================================================
    .dma_data_i              (cpu_dma_data_in),         // DMA read data
    .dma_data_v_i            (cpu_dma_data_in_v),       // DMA read data valid
    .dma_data_ready_and_o    (cpu_dma_data_in_ready),   // DMA read ready

    // ============================================================
    // DMA Outgoing Data
    // ============================================================
    .dma_data_o              (cpu_dma_data_out),        // DMA write data
    .dma_data_v_o            (cpu_dma_data_out_v),      // DMA write valid
    .dma_data_ready_and_i    (cpu_dma_data_out_ready)   // DMA write ready
);


// ============================================================
// LPDDR5 Controller Integration
// ============================================================
lpddr5c_soc_wrapper_stub u_lpddr5 (

    // ============================================================
    // AXI Clock and Reset
    // ============================================================
    .clk_axi_400        (lpddr5_clk_axi_i),         // 400 MHz AXI clock
    .rst_axi_n          (lpddr5_rst_axi_n_i),       // AXI active-low reset

    // ============================================================
    // AXI Slave Interface
    // ============================================================
    .s_axi_awid         (s_axi_awid),               // Write address ID
    .s_axi_awaddr       (s_axi_awaddr),             // Write address
    .s_axi_awlen        (s_axi_awlen),              // Burst length
    .s_axi_awsize       (s_axi_awsize),             // Burst size
    .s_axi_awburst      (s_axi_awburst),            // Burst type
    .s_axi_awlock       (s_axi_awlock),             // Lock signal
    .s_axi_awcache      (s_axi_awcache),            // Cache attributes
    .s_axi_awprot       (s_axi_awprot),             // Protection attributes
    .s_axi_awqos        (s_axi_awqos),              // QoS attributes
    .s_axi_awvalid      (s_axi_awvalid),            // Write address valid
    .s_axi_awready      (s_axi_awready),            // Write address ready

    .s_axi_wdata        (s_axi_wdata),              // Write data
    .s_axi_wstrb        (s_axi_wstrb),              // Byte strobes
    .s_axi_wlast        (s_axi_wlast),              // Last write transfer
    .s_axi_wvalid       (s_axi_wvalid),             // Write data valid
    .s_axi_wready       (s_axi_wready),             // Write data ready

    .s_axi_bid          (s_axi_bid),                // Write response ID
    .s_axi_bresp        (s_axi_bresp),              // Write response
    .s_axi_bvalid       (s_axi_bvalid),             // Write response valid
    .s_axi_bready       (s_axi_bready),             // Write response ready

    .s_axi_arid         (s_axi_arid),               // Read address ID
    .s_axi_araddr       (s_axi_araddr),             // Read address
    .s_axi_arlen        (s_axi_arlen),              // Burst length
    .s_axi_arsize       (s_axi_arsize),             // Burst size
    .s_axi_arburst      (s_axi_arburst),            // Burst type
    .s_axi_arlock       (s_axi_arlock),             // Lock signal
    .s_axi_arcache      (s_axi_arcache),            // Cache attributes
    .s_axi_arprot       (s_axi_arprot),             // Protection attributes
    .s_axi_arqos        (s_axi_arqos),              // QoS attributes
    .s_axi_arvalid      (s_axi_arvalid),            // Read address valid
    .s_axi_arready      (s_axi_arready),            // Read address ready

    .s_axi_rid          (s_axi_rid),                // Read response ID
    .s_axi_rdata        (s_axi_rdata),              // Read data
    .s_axi_rresp        (s_axi_rresp),              // Read response
    .s_axi_rlast        (s_axi_rlast),              // Last read transfer
    .s_axi_rvalid       (s_axi_rvalid),             // Read data valid
    .s_axi_rready       (s_axi_rready),             // Read data ready

    // ============================================================
    // DDR Interface
    // ============================================================
    .clk_ddr_800        (lpddr5_clk_ddr_800_i),     // 800 MHz DDR clock
    .rst_ddr_n          (lpddr5_rst_ddr_n_i),       // DDR active-low reset

    // ============================================================
    // DFI Interface
    // ============================================================
    .dfi_clk            (dfi_clk),                  // DFI clock
    .dfi_rst_n          (dfi_rst_n),                // DFI reset
    .dfi_cs_n           (dfi_cs_n),                 // Chip select
    .dfi_cke            (dfi_cke),                  // Clock enable
    .dfi_ca             (dfi_ca),                   // Command/address bus
    .dfi_rw             (dfi_rw),                   // Read/Write control
    .dfi_addr           (dfi_addr),                 // DFI address
    .dfi_rddata         (dfi_rddata),               // Read data
    .dfi_rddata_valid   (dfi_rddata_valid),         // Read data valid
    .dfi_wrdata         (dfi_wrdata),               // Write data
    .dfi_wrdata_mask    (dfi_wrdata_mask),          // Write data mask
    .dfi_wrdata_en      (dfi_wrdata_en),            // Write enable

    // ============================================================
    // APB Configuration Interface
    // ============================================================
    .pclk               (lpddr5_pclk_i),            // APB clock
    .preset_n           (lpddr5_preset_n_i),        // APB reset
    .psel               (psel),                     // APB select
    .penable            (penable),                  // APB enable
    .pwrite             (pwrite),                   // APB write
    .paddr              (paddr),                    // APB address
    .pwdata             (pwdata),                   // APB write data
    .prdata             (prdata),                   // APB read data
    .pready             (pready),                   // APB ready
    .pslverr            (pslverr),                  // APB slave error

    // ============================================================
    // Interrupt Outputs
    // ============================================================
    .intr_init_done     (intr_init_done),           // Initialization complete
    .intr_refresh_err   (intr_refresh_err),         // Refresh error
    .intr_ecc_err       (intr_ecc_err),             // ECC error
    .intr_training_err  (intr_training_err),        // Training error
    .intr_parity_err    (intr_parity_err),          // Parity error

    .debug_bus          (debug_bus)                 // Debug status bus
);
axi4_usb_slave_stub #(
    .ADDR_WIDTH   (32),          // AXI address width
    .DATA_WIDTH   (32),          // AXI data width
    .ID_WIDTH     (4),           // AXI transaction ID width
    .USB_CLK_FREQ (48000000),    // USB controller clock frequency
    .FIFO_DEPTH   (8)            // Internal FIFO depth
) u_axi4_usb_slave (
    //==========================================================
    // Clock and Reset
    //==========================================================
    .aclk          (usb_axi_clk_i),          // AXI interface clock
    .aresetn       (usb_axi_rst_n_i),        // AXI active-low reset
    .usb_clk       (usb_clk_i),              // USB PHY clock
    .usb_resetn    (usb_rst_n_i),            // USB active-low reset

    //==========================================================
    // AXI4 Write Address Channel
    //==========================================================
    .s_axi_awid    (usb_awid_i),             // Write transaction ID
    .s_axi_awaddr  (usb_awaddr_i),           // Write address
    .s_axi_awlen   (usb_awlen_i),            // Burst length
    .s_axi_awsize  (usb_awsize_i),           // Burst size
    .s_axi_awburst (usb_awburst_i),          // Burst type
    .s_axi_awlock  (usb_awlock_i),           // Exclusive access
    .s_axi_awcache (usb_awcache_i),          // Cache attributes
    .s_axi_awprot  (usb_awprot_i),           // Protection attributes
    .s_axi_awqos   (usb_awqos_i),            // QoS information
    .s_axi_awvalid (usb_awvalid_i),          // Write address valid
    .s_axi_awready (usb_awready_o),          // Write address ready

    //==========================================================
    // AXI4 Write Data Channel
    //==========================================================
    .s_axi_wdata   (usb_wdata_i),            // Write data
    .s_axi_wstrb   (usb_wstrb_i),            // Write strobes
    .s_axi_wlast   (usb_wlast_i),            // Last write transfer
    .s_axi_wvalid  (usb_wvalid_i),           // Write data valid
    .s_axi_wready  (usb_wready_o),           // Write data ready

    //==========================================================
    // AXI4 Write Response Channel
    //==========================================================
    .s_axi_bid     (usb_bid_o),              // Write response ID
    .s_axi_bresp   (usb_bresp_o),            // Write response status
    .s_axi_bvalid  (usb_bvalid_o),           // Write response valid
    .s_axi_bready  (usb_bready_i),           // Master ready for response

    //==========================================================
    // AXI4 Read Address Channel
    //==========================================================
    .s_axi_arid    (usb_arid_i),             // Read transaction ID
    .s_axi_araddr  (usb_araddr_i),           // Read address
    .s_axi_arlen   (usb_arlen_i),            // Burst length
    .s_axi_arsize  (usb_arsize_i),           // Burst size
    .s_axi_arburst (usb_arburst_i),          // Burst type
    .s_axi_arlock  (usb_arlock_i),           // Exclusive access
    .s_axi_arcache (usb_arcache_i),          // Cache attributes
    .s_axi_arprot  (usb_arprot_i),           // Protection attributes
    .s_axi_arqos   (usb_arqos_i),            // QoS information
    .s_axi_arvalid (usb_arvalid_i),          // Read address valid
    .s_axi_arready (usb_arready_o),          // Read address ready

    //==========================================================
    // AXI4 Read Data Channel
    //==========================================================
    .s_axi_rid     (usb_rid_o),              // Read response ID
    .s_axi_rdata   (usb_rdata_o),            // Read data
    .s_axi_rresp   (usb_rresp_o),            // Read response status
    .s_axi_rlast   (usb_rlast_o),            // Last read transfer
    .s_axi_rvalid  (usb_rvalid_o),           // Read data valid
    .s_axi_rready  (usb_rready_i),           // Master ready to accept data

    //==========================================================
    // USB UTMI Interface
    //==========================================================
    .utmi_data_in_i    (usb_utmi_data_in_i),     // UTMI receive data
    .utmi_txready_i    (usb_utmi_txready_i),     // UTMI transmitter ready
    .utmi_rxvalid_i    (usb_utmi_rxvalid_i),     // Valid receive data
    .utmi_rxactive_i   (usb_utmi_rxactive_i),    // Receive active indication
    .utmi_rxerror_i    (usb_utmi_rxerror_i),     // Receive error indication
    .utmi_linestate_i  (usb_utmi_linestate_i),   // USB line state

    .utmi_data_out_o   (usb_utmi_data_out_o),    // Transmit data
    .utmi_txvalid_o    (usb_utmi_txvalid_o),     // Transmit data valid
    .utmi_op_mode_o    (usb_utmi_op_mode_o),     // UTMI operating mode
    .utmi_xcvrselect_o (usb_utmi_xcvrselect_o),  // Transceiver select
    .utmi_termselect_o (usb_utmi_termselect_o),  // Termination select
    .utmi_dppulldown_o (usb_utmi_dppulldown_o),  // D+ pulldown control
    .utmi_dmpulldown_o (usb_utmi_dmpulldown_o),  // D− pulldown control

    //==========================================================
    // USB Interrupt
    //==========================================================
    .intr_o            (usb_intr_o)              // USB interrupt output
);

uart_apb_top_stub u_uart_apb_top (
    .PCLK              (clk_periph),        // APB peripheral clock
    .PRESETn           (rst_periph_n),      // Active-low APB reset

    // ---------------------------------------------------------
    // APB SLAVE INTERFACE
    // ---------------------------------------------------------
    .PSEL              (uart_psel_i),       // APB slave select
    .PENABLE           (uart_penable_i),    // APB enable phase
    .PWRITE            (uart_pwrite_i),     // APB write control
    .PADDR             (uart_paddr_i),      // APB address
    .PWDATA            (uart_pwdata_i),     // APB write data
    .PSTRB             (uart_pstrb_i),      // APB byte strobes

    .PRDATA            (uart_prdata_o),     // APB read data
    .PREADY            (uart_pready_o),     // APB ready response
    .PSLVERR           (uart_pslverr_o),    // APB slave error

    // ---------------------------------------------------------
    // UART CONTROL
    // ---------------------------------------------------------
    .divisor_load_i    (uart_divisor_load_i), // Baud-rate divisor load
    .uart_irq_en       (uart_irq_en_i),       // UART interrupt enable

    // ---------------------------------------------------------
    // UART SERIAL INTERFACE
    // ---------------------------------------------------------
    .rx_i              (uart_rx_i),         // UART receive input
    .tx_o              (uart_tx_o),         // UART transmit output

    .cts_n_i           (uart_cts_n_i),      // Clear-To-Send input
    .rts_n_o           (uart_rts_n_o),      // Request-To-Send output

    // ---------------------------------------------------------
    // UART INTERRUPT
    // ---------------------------------------------------------
    .uart_irq          (uart_irq_o)         // UART interrupt output

);

apb_spi_top_stub u_apb_spi_top (
    //==========================================================
    // APB Clock and Reset
    //==========================================================
    .PCLK       (clk_periph),       // APB peripheral clock
    .PRESETn    (rst_periph_n),     // Active-low APB reset

    //==========================================================
    // APB Slave Interface
    //==========================================================
    .PSEL       (spi_psel_i),       // APB slave select
    .PENABLE    (spi_penable_i),    // APB enable phase
    .PWRITE     (spi_pwrite_i),     // APB write control
    .PADDR      (spi_paddr_i),      // APB address
    .PWDATA     (spi_pwdata_i),     // APB write data
    .PSTRB      (spi_pstrb_i),      // APB byte strobes

    .PRDATA     (spi_prdata_o),     // APB read data
    .PREADY     (spi_pready_o),     // APB ready response
    .PSLVERR    (spi_pslverr_o),    // APB slave error

    //==========================================================
    // SPI Interface
    //==========================================================
    .sck_o      (spi_sck_o),        // SPI serial clock
    .mosi_o     (spi_mosi_o),       // SPI Master-Out Slave-In
    .miso_o     (spi_miso_o),       // SPI Master-In Slave-Out
    .cs_n_o     (spi_cs_n_o),       // Active-low chip select

    //==========================================================
    // Interrupt
    //==========================================================
    .spi_irq    (spi_irq_o)         // SPI interrupt output
);

i2c_top_stub #(
    .DW (32),                       // APB data width
    .AW (32)                        // APB address width
) u_i2c_top (
    //==========================================================
    // Clock and Reset
    //==========================================================
    .pclk          (clk_periph),      // APB peripheral clock
    .presetn       (rst_periph_n),    // Active-low APB reset

    .i2c_clk       (clk_periph),      // I2C functional clock
    .i2c_rst_n     (rst_periph_n),    // Active-low I2C reset

    //==========================================================
    // APB Interface
    //==========================================================
    .t_paddr       (i2c_paddr_i),     // APB address
    .t_pwrite      (i2c_pwrite_i),    // APB write control
    .t_psel        (i2c_psel_i),      // APB slave select
    .t_penable     (i2c_penable_i),   // APB enable
    .t_pwdata      (i2c_pwdata_i),    // APB write data
    .t_pstrb       (i2c_pstrb_i),     // APB byte strobes

    .t_o_prdata    (i2c_prdata_o),    // APB read data
    .t_o_pslverr   (i2c_pslverr_o),   // APB slave error
    .t_o_pready    (i2c_pready_o),    // APB ready response

    //==========================================================
    // I2C Interface
    //==========================================================
    .i2c_irq_en    (i2c_irq_en_i),    // I2C interrupt enable
    .i2c_irq       (i2c_irq_o),       // I2C interrupt output

    .i2c_scl       (i2c_scl_o),       // I2C serial clock
    .i2c_sda       (i2c_sda_io)       // I2C serial data
);

apb_to_gpio_stub #(
    .BASE_ADDR (32'h3003_0000),       // GPIO APB base address
    .SIZE      (32'h0001_0000)        // GPIO address space size
) u_apb_to_gpio (
    //==========================================================
    // Clock and Reset
    //==========================================================
    .pclk        (clk_periph),        // APB peripheral clock
    .gclk        (clk_periph),        // GPIO functional clock
    .presetn     (rst_periph_n),      // Active-low reset

    //==========================================================
    // APB Interface
    //==========================================================
    .paddr       (gpio_paddr_i),      // APB address
    .pwrite      (gpio_pwrite_i),     // APB write control
    .psel        (gpio_psel_i),       // APB slave select
    .penable     (gpio_penable_i),    // APB enable phase
    .pwdata      (gpio_pwdata_i),     // APB write data
    .pstrb       (gpio_pstrb_i),      // APB byte strobes

    .prdata      (gpio_prdata_o),     // APB read data
    .pslverr     (gpio_pslverr_o),    // APB slave error
    .pready      (gpio_pready_o),     // APB ready response

    //==========================================================
    // GPIO Interface
    //==========================================================
    .in_pad_i    (gpio_in_pad_i),     // GPIO input pins
    .out_pad_o   (gpio_out_pad_o),    // GPIO output pins
    .oen_padoe_o (gpio_oen_padoe_o),  // GPIO output enable
    .gpio_irq    (gpio_irq_o)         // GPIO interrupt output
);
eth_dma_mac_top #(
    .AXIL_ADDR_WIDTH(32),    // AXI-Lite address width
    .AXIL_DATA_WIDTH(32),    // AXI-Lite data width
    .AXI_ADDR_WIDTH (64),    // AXI master address width
    .AXI_DATA_WIDTH (64),    // AXI master data width
    .AXI_ID_WIDTH   (4)      // AXI transaction ID width
) u_eth (

    //==========================================================
    // Clock and Reset
    //==========================================================
    .clk                (clk_cpu),           // Core clock
    .rst_n              (rst_cpu_n),         // Active-low core reset

    .s_axil_clk         (eth_axil_clk_i),    // AXI-Lite interface clock
    .s_axil_rst_n       (eth_axil_rst_n_i),  // AXI-Lite active-low reset

    .gtx_clk            (gtx_clk),           // Gigabit TX clock
    .gtx_clk90          (gtx_clk90),         // 90-degree shifted GTX clock
    .gtx_rst            (gtx_rst),           // GTX reset

    .logic_clk          (logic_clk),         // Internal logic clock
    .logic_rst          (logic_rst),         // Internal logic reset

    //==========================================================
    // AXI-Lite Slave Interface
    //==========================================================
    .s_axil_awaddr      (eth_awaddr_i),      // Write address
    .s_axil_awprot      (eth_awprot_i),      // Protection attributes
    .s_axil_awvalid     (eth_awvalid_i),     // Write address valid
    .s_axil_awready     (eth_awready_o),     // Write address ready

    .s_axil_wdata       (eth_wdata_i),       // Write data
    .s_axil_wstrb       (eth_wstrb_i),       // Write strobes
    .s_axil_wvalid      (eth_wvalid_i),      // Write data valid
    .s_axil_wready      (eth_wready_o),      // Write data ready

    .s_axil_bresp       (eth_bresp_o),       // Write response
    .s_axil_bvalid      (eth_bvalid_o),      // Write response valid
    .s_axil_bready      (eth_bready_i),      // Write response ready

    .s_axil_araddr      (eth_araddr_i),      // Read address
    .s_axil_arprot      (eth_arprot_i),      // Protection attributes
    .s_axil_arvalid     (eth_arvalid_i),     // Read address valid
    .s_axil_arready     (eth_arready_o),     // Read address ready

    .s_axil_rdata       (eth_rdata_o),       // Read data
    .s_axil_rresp       (eth_rresp_o),       // Read response
    .s_axil_rvalid      (eth_rvalid_o),      // Read data valid
    .s_axil_rready      (eth_rready_i),      // Read data ready

    //==========================================================
    // RGMII Interface
    //==========================================================
    .rgmii_rx_clk       (rgmii_rx_clk),      // Receive clock
    .rgmii_rxd          (rgmii_rxd),         // Receive data
    .rgmii_rx_ctl       (rgmii_rx_ctl),      // Receive control

    .rgmii_tx_clk       (rgmii_tx_clk),      // Transmit clock
    .rgmii_txd          (rgmii_txd),         // Transmit data
    .rgmii_tx_ctl       (rgmii_tx_ctl),      // Transmit control

    //==========================================================
    // Interrupts
    //==========================================================
    .irq_tx_cmpl        (irq_tx_cmpl),       // TX complete interrupt
    .irq_rx_cmpl        (irq_rx_cmpl),       // RX complete interrupt
    .irq_DMA_err        (irq_DMA_err)        // DMA error interrupt

    // AXI Master interface will be connected next
);

//==========================================================
// SD/eMMC Controller
//==========================================================
sd_emmc_controller #(
    .C_S00_AXI_DATA_WIDTH(32),    // AXI-Lite data width
    .C_S00_AXI_ADDR_WIDTH(32)     // AXI-Lite address width
) u_sd_emmc (

    //======================================================
    // SD/eMMC Interface
    //======================================================
    .SD_CLK             (SD_CLK),            // SD card clock
    .sd_cmd_o           (sd_cmd_o),          // SD command output
    .sd_cmd_i           (sd_cmd_i),          // SD command input
    .sd_cmd_t           (sd_cmd_t),          // SD command tri-state

    .sd_dat_o           (sd_dat_o),          // SD data output
    .sd_dat_i           (sd_dat_i),          // SD data input
    .sd_dat_t           (sd_dat_t),          // SD data tri-state

    .interrupt          (sd_interrupt),      // SD controller interrupt

    //======================================================
    // AXI4-Lite Slave Interface
    //======================================================
    .s00_axi_aclk       (sd_axi_clk),        // AXI-Lite clock
    .s00_axi_aresetn    (sd_axi_rst_n),      // AXI-Lite active-low reset

    .s00_axi_awaddr     (sd_awaddr),         // Write address
    .s00_axi_awprot     (sd_awprot),         // Protection attributes
    .s00_axi_awvalid    (sd_awvalid),        // Write address valid
    .s00_axi_awready    (sd_awready),        // Write address ready

    .s00_axi_wdata      (sd_wdata),          // Write data
    .s00_axi_wstrb      (sd_wstrb),          // Write strobes
    .s00_axi_wvalid     (sd_wvalid),         // Write data valid
    .s00_axi_wready     (sd_wready),         // Write data ready

    .s00_axi_bresp      (sd_bresp),          // Write response
    .s00_axi_bvalid     (sd_bvalid),         // Write response valid
    .s00_axi_bready     (sd_bready),         // Write response ready

    .s00_axi_araddr     (sd_araddr),         // Read address
    .s00_axi_arprot     (sd_arprot),         // Protection attributes
    .s00_axi_arvalid    (sd_arvalid),        // Read address valid
    .s00_axi_arready    (sd_arready),        // Read address ready

    .s00_axi_rdata      (sd_rdata),          // Read data
    .s00_axi_rresp      (sd_rresp),          // Read response
    .s00_axi_rvalid     (sd_rvalid),         // Read data valid
    .s00_axi_rready     (sd_rready),         // Read data ready

    //======================================================
    // AXI4 Master DMA Interface
    //======================================================
    .M_AXI_ACLK         (clk_cpu),           // DMA AXI clock
    .M_AXI_ARESETN      (rst_cpu_n),         // DMA AXI active-low reset

    .M_AXI_AWID         (),                  // Write address ID
    .M_AXI_AWADDR       (),                  // Write address
    .M_AXI_AWLEN        (),                  // Write burst length
    .M_AXI_AWSIZE       (),                  // Write burst size
    .M_AXI_AWBURST      (),                  // Write burst type
    .M_AXI_AWLOCK       (),                  // Write lock
    .M_AXI_AWCACHE      (),                  // Write cache attributes
    .M_AXI_AWPROT       (),                  // Write protection
    .M_AXI_AWQOS        (),                  // Write QoS
    .M_AXI_AWVALID      (),                  // Write address valid
    .M_AXI_AWREADY      (),                  // Write address ready

    .M_AXI_WDATA        (),                  // Write data
    .M_AXI_WSTRB        (),                  // Write strobes
    .M_AXI_WLAST        (),                  // Last write transfer
    .M_AXI_WVALID       (),                  // Write data valid
    .M_AXI_WREADY       (),                  // Write data ready

    .M_AXI_BID          (),                  // Write response ID
    .M_AXI_BRESP        (),                  // Write response
    .M_AXI_BVALID       (),                  // Write response valid
    .M_AXI_BREADY       (),                  // Write response ready

    .M_AXI_ARID         (),                  // Read address ID
    .M_AXI_ARADDR       (),                  // Read address
    .M_AXI_ARLEN        (),                  // Read burst length
    .M_AXI_ARSIZE       (),                  // Read burst size
    .M_AXI_ARBURST      (),                  // Read burst type
    .M_AXI_ARLOCK       (),                  // Read lock
    .M_AXI_ARCACHE      (),                  // Read cache attributes
    .M_AXI_ARPROT       (),                  // Read protection
    .M_AXI_ARQOS        (),                  // Read QoS
    .M_AXI_ARVALID      (),                  // Read address valid
    .M_AXI_ARREADY      (),                  // Read address ready

    .M_AXI_RID          (),                  // Read response ID
    .M_AXI_RDATA        (),                  // Read data
    .M_AXI_RRESP        (),                  // Read response
    .M_AXI_RLAST        (),                  // Last read transfer
    .M_AXI_RVALID       (),                  // Read data valid
    .M_AXI_RREADY       ()                   // Read data ready
);
spi_sim_top u_spi_sim (                         // SPI simulation top module instance

    .start      (spi_start),                   // Start SPI transaction
    .length     (spi_length),                  // Number of bytes/words to transfer
    .tx_data    (spi_tx_data),                 // SPI transmit data

    .miso_in    (spi_miso),                    // MISO input from external SPI device
    .cs_sel     (spi_cs_sel),                  // Chip-select selection
    .clk_div    (spi_clk_div),                 // SPI clock divider configuration

    .spi_clk    (spi_sclk),                    // Generated SPI serial clock
    .spi_cs_n   (spi_cs_n),                    // Active-low SPI chip select
    .spi_mosi   (spi_mosi),                    // SPI MOSI output
    .spi_miso   (spi_rx_data),                 // Received SPI data

    .done       (spi_done),                    // Transfer complete indication
    .error      (spi_error),                   // Transfer error indication
    .irq        (spi_irq),                     // SPI interrupt output

    .sys_clk    (clk_periph),                  // Peripheral system clock
    .sys_rst    (~rst_periph_n)                // Active-high system reset
);

//==========================================================
// SRAM Top
//==========================================================
sram_top #(
    .ADDR_WIDTH     (32),                      // AXI address width
    .DATA_WIDTH     (128),                     // AXI data width
    .ID_WIDTH       (4),                       // AXI transaction ID width
    .MEM_ADDR_WIDTH (16),                      // Internal SRAM address width
    .FIFO_DEPTH     (8),                       // Internal FIFO depth
    .SRAM_BASE_ADDR (32'h1070_0000)            // SRAM base address
) u_sram (                                     // SRAM top instance

    //======================================================
    // AXI Clock Domain
    //======================================================
    .aclk               (clk_cpu),             // AXI interface clock
    .aresetn            (rst_cpu_n),           // Active-low AXI reset

    //======================================================
    // SRAM Clock Domain
    //======================================================
    .sram_clk           (clk_ddr),             // SRAM operating clock
    .sram_resetn        (rst_ddr_n),           // Active-low SRAM reset

    //======================================================
    // AXI4 Write Address
    //======================================================
    .s_axi_awid         (axi_awid),            // AXI write address ID
    .s_axi_awaddr       (axi_awaddr),          // AXI write address
    .s_axi_awlen        (axi_awlen),           // AXI burst length
    .s_axi_awsize       (axi_awsize),          // AXI transfer size
    .s_axi_awburst      (axi_awburst),         // AXI burst type
    .s_axi_awlock       (axi_awlock),          // AXI lock signal
    .s_axi_awcache      (axi_awcache),         // AXI cache attributes
    .s_axi_awprot       (axi_awprot),          // AXI protection attributes
    .s_axi_awqos        (axi_awqos),           // AXI QoS field
    .s_axi_awvalid      (axi_awvalid),         // Write address valid
    .s_axi_awready      (axi_awready),         // Write address ready

    //======================================================
    // AXI4 Write Data
    //======================================================
    .s_axi_wdata        (axi_wdata),           // AXI write data
    .s_axi_wstrb        (axi_wstrb),           // Write byte strobes
    .s_axi_wlast        (axi_wlast),           // Last write beat
    .s_axi_wvalid       (axi_wvalid),          // Write data valid
    .s_axi_wready       (axi_wready),          // Write data ready

    //======================================================
    // AXI4 Write Response
    //======================================================
    .s_axi_bid          (axi_bid),             // Write response ID
    .s_axi_bresp        (axi_bresp),           // Write response status
    .s_axi_bvalid       (axi_bvalid),          // Write response valid
    .s_axi_bready       (axi_bready),          // Write response ready

    //======================================================
    // AXI4 Read Address
    //======================================================
    .s_axi_arid         (axi_arid),            // AXI read address ID
    .s_axi_araddr       (axi_araddr),          // AXI read address
    .s_axi_arlen        (axi_arlen),           // Read burst length
    .s_axi_arsize       (axi_arsize),          // Read transfer size
    .s_axi_arburst      (axi_arburst),         // Read burst type
    .s_axi_arlock       (axi_arlock),          // Read lock signal
    .s_axi_arcache      (axi_arcache),         // Read cache attributes
    .s_axi_arprot       (axi_arprot),          // Read protection attributes
    .s_axi_arqos        (axi_arqos),           // Read QoS field
    .s_axi_arvalid      (axi_arvalid),         // Read address valid
    .s_axi_arready      (axi_arready),         // Read address ready

    //======================================================
    // AXI4 Read Data
    //======================================================
    .s_axi_rid          (axi_rid),             // Read response ID
    .s_axi_rdata        (axi_rdata),           // Read data
    .s_axi_rresp        (axi_rresp),           // Read response status
    .s_axi_rlast        (axi_rlast),           // Last read beat
    .s_axi_rvalid       (axi_rvalid),          // Read data valid
    .s_axi_rready       (axi_rready)           // Read data ready
);
tpu_host_top #(                                // TPU host top module
    .AXIL_ADDR_W    (8),                       // AXI-Lite address width
    .UB_DEPTH       (128),                     // Unified buffer depth
    .QUEUE_DEPTH    (16),                      // Command queue depth
    .MAX_BURST      (16),                      // Maximum AXI burst length
    .AXI_ID_W       (1),                       // AXI ID width
    .CDC_FIFO_DEPTH (8)                        // Clock-domain crossing FIFO depth
) u_tpu (                                      // TPU instance

    //======================================================
    // Clocks & Reset
    //======================================================
    .clk_tpu        (clk_cpu),                 // TPU core clock
    .clk_axil       (clk_periph),              // AXI-Lite interface clock
    .clk_axi        (clk_cpu),                 // AXI master interface clock
    .rst_n          (rst_cpu_n),               // Active-low reset

    //======================================================
    // AXI4-Lite Slave Interface
    //======================================================
    .s_axil_awaddr  (tpu_awaddr),              // AXI-Lite write address
    .s_axil_awprot  (tpu_awprot),              // AXI-Lite protection attributes
    .s_axil_awvalid (tpu_awvalid),             // Write address valid
    .s_axil_awready (tpu_awready),             // Write address ready

    .s_axil_wdata   (tpu_wdata),               // Write data
    .s_axil_wstrb   (tpu_wstrb),               // Write strobes
    .s_axil_wvalid  (tpu_wvalid),              // Write data valid
    .s_axil_wready  (tpu_wready),              // Write data ready

    .s_axil_bresp   (tpu_bresp),               // Write response
    .s_axil_bvalid  (tpu_bvalid),              // Write response valid
    .s_axil_bready  (tpu_bready),              // Write response ready

    .s_axil_araddr  (tpu_araddr),              // Read address
    .s_axil_arprot  (tpu_arprot),              // Read protection attributes
    .s_axil_arvalid (tpu_arvalid),             // Read address valid
    .s_axil_arready (tpu_arready),             // Read address ready

    .s_axil_rdata   (tpu_rdata),               // Read data
    .s_axil_rresp   (tpu_rresp),               // Read response
    .s_axil_rvalid  (tpu_rvalid),              // Read data valid
    .s_axil_rready  (tpu_rready),              // Read data ready

    //======================================================
    // AXI4 Master DMA Interface
    //======================================================
    .m_axi_awid     (tpu_m_axi_awid),          // AXI write address ID
    .m_axi_awaddr   (tpu_m_axi_awaddr),        // AXI write address
    .m_axi_awlen    (tpu_m_axi_awlen),         // Write burst length
    .m_axi_awsize   (tpu_m_axi_awsize),        // Write transfer size
    .m_axi_awburst  (tpu_m_axi_awburst),       // Write burst type
    .m_axi_awlock   (tpu_m_axi_awlock),        // Write lock signal
    .m_axi_awcache  (tpu_m_axi_awcache),       // Write cache attributes
    .m_axi_awprot   (tpu_m_axi_awprot),        // Write protection attributes
    .m_axi_awqos    (tpu_m_axi_awqos),         // Write QoS
    .m_axi_awvalid  (tpu_m_axi_awvalid),       // Write address valid
    .m_axi_awready  (tpu_m_axi_awready),       // Write address ready

    .m_axi_wdata    (tpu_m_axi_wdata),         // Write data
    .m_axi_wstrb    (tpu_m_axi_wstrb),         // Write byte enables
    .m_axi_wlast    (tpu_m_axi_wlast),         // Last write beat
    .m_axi_wvalid   (tpu_m_axi_wvalid),        // Write data valid
    .m_axi_wready   (tpu_m_axi_wready),        // Write data ready

    .m_axi_bid      (tpu_m_axi_bid),           // Write response ID
    .m_axi_bresp    (tpu_m_axi_bresp),         // Write response
    .m_axi_bvalid   (tpu_m_axi_bvalid),        // Write response valid
    .m_axi_bready   (tpu_m_axi_bready),        // Write response ready

    .m_axi_arid     (tpu_m_axi_arid),          // Read address ID
    .m_axi_araddr   (tpu_m_axi_araddr),        // Read address
    .m_axi_arlen    (tpu_m_axi_arlen),         // Read burst length
    .m_axi_arsize   (tpu_m_axi_arsize),        // Read transfer size
    .m_axi_arburst  (tpu_m_axi_arburst),       // Read burst type
    .m_axi_arlock   (tpu_m_axi_arlock),        // Read lock signal
    .m_axi_arcache  (tpu_m_axi_arcache),       // Read cache attributes
    .m_axi_arprot   (tpu_m_axi_arprot),        // Read protection attributes
    .m_axi_arqos    (tpu_m_axi_arqos),         // Read QoS
    .m_axi_arvalid  (tpu_m_axi_arvalid),       // Read address valid
    .m_axi_arready  (tpu_m_axi_arready),       // Read address ready

    .m_axi_rid      (tpu_m_axi_rid),           // Read response ID
    .m_axi_rdata    (tpu_m_axi_rdata),         // Read data
    .m_axi_rresp    (tpu_m_axi_rresp),         // Read response
    .m_axi_rlast    (tpu_m_axi_rlast),         // Last read beat
    .m_axi_rvalid   (tpu_m_axi_rvalid),        // Read data valid
    .m_axi_rready   (tpu_m_axi_rready),        // Read data ready

    //======================================================
    // Interrupt
    //======================================================
    .irq            (tpu_irq)                  // TPU interrupt output
);

axi4_to_apb_bridge_cdc u_axi4_to_apb_bridge (  // AXI4-to-APB bridge instance

    //======================================================
    // AXI Clock & Reset
    //======================================================
    .ACLK       (clk_cpu),                     // AXI clock
    .ARESETn    (rst_cpu_n),                   // Active-low AXI reset

    //======================================================
    // AXI Write Address
    //======================================================
    .AWID       (axi_awid),                    // Write address ID
    .AWADDR     (axi_awaddr),                  // Write address
    .AWLEN      (axi_awlen),                   // Write burst length
    .AWSIZE     (axi_awsize),                  // Write transfer size
    .AWBURST    (axi_awburst),                 // Write burst type
    .AWLOCK     (axi_awlock),                  // Write lock signal
    .AWCACHE    (axi_awcache),                 // Write cache attributes
    .AWPROT     (axi_awprot),                  // Write protection attributes
    .AWQOS      (axi_awqos),                   // Write QoS
    .AWVALID    (axi_awvalid),                 // Write address valid
    .AWREADY    (axi_awready),                 // Write address ready

    //======================================================
    // AXI Write Data
    //======================================================
    .WDATA      (axi_wdata),                   // Write data
    .WSTRB      (axi_wstrb),                   // Write strobes
    .WLAST      (axi_wlast),                   // Last write beat
    .WVALID     (axi_wvalid),                  // Write data valid
    .WREADY     (axi_wready),                  // Write data ready

    //======================================================
    // AXI Write Response
    //======================================================
    .BID        (axi_bid),                     // Write response ID
    .BRESP      (axi_bresp),                   // Write response
    .BVALID     (axi_bvalid),                  // Write response valid
    .BREADY     (axi_bready),                  // Write response ready

    //======================================================
    // AXI Read Address
    //======================================================
    .ARID       (axi_arid),                    // Read address ID
    .ARADDR     (axi_araddr),                  // Read address
    .ARLEN      (axi_arlen),                   // Read burst length
    .ARSIZE     (axi_arsize),                  // Read transfer size
    .ARBURST    (axi_arburst),                 // Read burst type
    .ARLOCK     (axi_arlock),                  // Read lock signal
    .ARCACHE    (axi_arcache),                 // Read cache attributes
    .ARPROT     (axi_arprot),                  // Read protection attributes
    .ARQOS      (axi_arqos),                   // Read QoS
    .ARVALID    (axi_arvalid),                 // Read address valid
    .ARREADY    (axi_arready),                 // Read address ready

    //======================================================
    // AXI Read Data
    //======================================================
    .RID        (axi_rid),                     // Read response ID
    .RDATA      (axi_rdata),                   // Read data
    .RRESP      (axi_rresp),                   // Read response
    .RLAST      (axi_rlast),                   // Last read beat
    .RVALID     (axi_rvalid),                  // Read data valid
    .RREADY     (axi_rready),                  // Read data ready

    //======================================================
    // APB Interface
    //======================================================
    .PCLK       (clk_periph),                  // APB clock
    .PRESETn    (rst_periph_n),                // Active-low APB reset

    .PADDR      (PADDR),                       // APB address
    .PSEL       (PSEL),                        // APB slave select
    .PENABLE    (PENABLE),                     // APB enable
    .PWRITE     (PWRITE),                      // APB write control
    .PPROT      (PPROT),                       // APB protection attributes
    .PWDATA     (PWDATA),                      // APB write data
    .PSTRB      (PSTRB),                       // APB write strobes
    .PRDATA     (PRDATA),                      // APB read data
    .PREADY     (PREADY),                      // APB ready
    .PSLVERR    (PSLVERR)                      // APB slave error
);

endmodule                                     

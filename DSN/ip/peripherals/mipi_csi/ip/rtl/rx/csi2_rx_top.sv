`include "ifdef.sv"

`include "async_fifo2_1.sv"
`include "lane_merging.sv"
`include "sync_fifo.sv"
`include "crc.sv"
`include "llp.sv"
`include "rx_buffer_register_3.sv"
`include "rx_byte_counter_2.sv"
`include "bpuf_2.sv"
`include "axim.sv"
`include "csi2_reg.sv"
`include "axi_slave.sv"
module csi2_rx_top #(
    parameter integer RX_PIXEL_DATA_W = 80,
    parameter integer AXI_DATA_W      = 64,
    parameter integer AXI_STRB_W      = AXI_DATA_W / 8
)(

//==============================================================================
// CSI-2 PPI INTERFACE
//==============================================================================

    input  logic         rxwordclkhs,
    input  logic         cphy_rxwordclkhs,
    input  logic         rxclkesc,
    input  logic         rst_n,

    input  logic         rxactivehs,
    input  logic         rxcalibrationprehs,
    input  logic         rxerrcalhs,
    input  logic         rxlpdtesc,
    input  logic         rxulpsesc,
    input  logic         rxvalidesc,
    input  logic         direction,
    input  logic         stopstate,
    input  logic         ulpsactivenot,

    input  logic         errsoths,
    input  logic         errsotsynchs,
    input  logic         erresc,
    input  logic         errsyncesc,
    input  logic         errcontrol,
    input  logic         errcontentionlp0,
    input  logic         errcontentionlp1,

    input  logic         rx_lane_sts_reg7,
    input  logic         rx_lane_sts_reg4,

    input  logic [1:0]   rxcalibrationformat,
    input  logic [63:0]  rxdatahs,

    input  logic [3:0]   rxinvalidcodehs,
    input  logic [3:0]   rxvalidhs,
    input  logic [3:0]   rxsynchs,

    input  logic [2:0]   rxsynctypehs0,
    input  logic [2:0]   rxsynctypehs1,
    input  logic [2:0]   rxsynctypehs2,
    input  logic [2:0]   rxsynctypehs3,

    input  logic [3:0]   rxalpvalidhs,

    input  logic [3:0]   rxalpcode0,
    input  logic [3:0]   rxalpcode1,
    input  logic [3:0]   rxalpcode2,
    input  logic [3:0]   rxalpcode3,

    input  logic [3:0]   rxalpnibble0,
    input  logic [3:0]   rxalpnibble1,
    input  logic [3:0]   rxalpnibble2,
    input  logic [3:0]   rxalpnibble3,

    input  logic [3:0]   rxtriggeresc,
    input  logic [7:0]   rxdataesc,

//==============================================================================
// CSI-2 PHY CONTROL OUTPUTS
//==============================================================================

    output logic         turnrequest,
    output logic         turndisable,
    output logic         forcerxmode,
    output logic         enable,
    output logic         rxalp_lpselect,

    output logic [1:0]   rxdatawidthhs,
    output logic [2:0]   alpwakestate,

//==============================================================================
// CONFIGURATION REGISTER OUTPUTS
// These are driven by csi2_reg through AXI4-Lite writes.
//==============================================================================

    output logic [31:0]  lane_configuration,
    output logic [31:0]  mode_selection,

//==============================================================================
// CLOCK AND RESET
//==============================================================================

    input  logic         aclk,
    input  logic         areset_n,
    input  logic         rd_rst_n,

//==============================================================================
// AXI4-LITE SLAVE INTERFACE
// Used by the processor to access CSI-2 RX configuration/status registers.
//==============================================================================

    // Write address channel
    input  logic [31:0]  s_axi_awaddr,
    input  logic         s_axi_awvalid,
    output logic         s_axi_awready,

    // Write data channel
    input  logic [31:0]  s_axi_wdata,
    input  logic [3:0]   s_axi_wstrb,
    input  logic         s_axi_wvalid,
    output logic         s_axi_wready,

    // Write response channel
    output logic [1:0]   s_axi_bresp,
    output logic         s_axi_bvalid,
    input  logic         s_axi_bready,

    // Read address channel
    input  logic [31:0]  s_axi_araddr,
    input  logic         s_axi_arvalid,
    output logic         s_axi_arready,

    // Read data channel
    output logic [31:0]  s_axi_rdata,
    output logic [1:0]   s_axi_rresp,
    output logic         s_axi_rvalid,
    input  logic         s_axi_rready,

//==============================================================================
// AXI MASTER WRITE DATA CHANNEL
// Pixel data is transferred to system memory.
//==============================================================================

    output logic                     wvalid,
    output logic                     wlast,
    output logic [AXI_DATA_W-1:0]    wdata,
    output logic [AXI_STRB_W-1:0]    wstrb,
    input  logic                     wready,

//==============================================================================
// AXI MASTER WRITE ADDRESS CHANNEL
//==============================================================================

    input  logic         awready,
    output logic         awvalid,

    output logic [31:0]  awid,
    output logic [7:0]   awlen,
    output logic [2:0]   awsize,
    output logic [1:0]   awburst,
    output logic [31:0]  awaddr,
    output logic [3:0]   awcache,
    output logic [2:0]   awprot,
    output logic [3:0]   awqos,
    output logic [3:0]   awregion,

//==============================================================================
// AXI MASTER WRITE RESPONSE CHANNEL
//==============================================================================

    input  logic [1:0]   bresp,
    input  logic         bvalid,
    output logic         bready

);

//==============================================================================
// INTERNAL SIGNAL DECLARATIONS
//==============================================================================

// AXI master status
logic [1:0] axim_sts;

// AXI master internal control signals
logic awlock;
logic awuser;
logic wuser;
logic axim_err;

// RX buffer valid signals
logic rx_buff_reg_vld1;
logic rx_buff_reg_vld2;
logic rx_buff_reg_vld3;
logic rx_buff_reg_vld4;
logic rx_buff_reg_vld5;
logic rx_buff_reg_vld6;
logic rx_buff_reg_vld7;
logic rx_buff_reg_vld8;
logic rx_buff_reg_vld9;
logic rx_buff_reg_vld10;
logic rx_buff_reg_vld;

// Pixel converter signals
logic rx_pixel_dvalid;
logic [RX_PIXEL_DATA_W-1:0] rx_pixel_data;

// Packet control
logic pkt_en;
logic long_pkt_vld;

// LLP signals
logic llp_bp_vld;
logic llp_err_vld;
logic [2:0] llp_err;
logic [7:0] llp_bp_data;
logic [5:0] dtype_sts_reg;

// Lane merger signals
logic rx_lm_byte_vld;
logic [7:0] rx_lm_byte_data;
logic lane_err;

// RX byte counters
logic [1:0] rx_byte_ctr24;
logic [1:0] rx_byte_ctr16;
logic [2:0] rx_byte_ctr56;
logic [2:0] rx_byte_ctr40;
logic [3:0] rx_byte_ctr72;

// RX buffer registers
logic [7:0]  rx_buff_reg1;
logic [15:0] rx_buff_reg2;
logic [23:0] rx_buff_reg3;
logic [31:0] rx_buff_reg4;
logic [39:0] rx_buff_reg5;
logic [47:0] rx_buff_reg6;
logic [55:0] rx_buff_reg7;
logic [63:0] rx_buff_reg8;
logic [71:0] rx_buff_reg9;
logic [79:0] rx_buff_reg10;

// Calibration/status signals for register block
logic [15:0] rxalpnibble_reg;
logic [15:0] rxalpcode_reg;
logic        rxerrcalhs_reg;
logic [1:0]  rxcalibrationformat_reg;

//==============================================================================
// CALIBRATION SIGNAL CONNECTIONS
//==============================================================================

assign rxalpnibble_reg = {
    rxalpnibble3,
    rxalpnibble2,
    rxalpnibble1,
    rxalpnibble0
};

assign rxalpcode_reg = {
    rxalpcode3,
    rxalpcode2,
    rxalpcode1,
    rxalpcode0
};

assign rxerrcalhs_reg          = rxerrcalhs;
assign rxcalibrationformat_reg = rxcalibrationformat;

//==============================================================================
// 1. LANE MERGING
//==============================================================================

lane_merging_rx lane_merging_rx_inst (

    .rxwordclkhs          (rxwordclkhs),
    .cphy_rxwordclkhs     (cphy_rxwordclkhs),
    .rxclkesc             (rxclkesc),
    .rst_n                (rst_n),

    .rxactivehs           (rxactivehs),
    .rx_lane_sts_reg7     (rx_lane_sts_reg7),
    .rx_lane_sts_reg4     (rx_lane_sts_reg4),

    .rxcalibrationprehs   (rxcalibrationprehs),
    .rxerrcalhs           (rxerrcalhs),
    .rxlpdtesc            (rxlpdtesc),
    .rxulpsesc            (rxulpsesc),
    .rxvalidesc           (rxvalidesc),

    .direction            (direction),
    .stopstate            (stopstate),
    .ulpsactivenot        (ulpsactivenot),

    .errsoths             (errsoths),
    .errsotsynchs         (errsotsynchs),
    .erresc               (erresc),
    .errsyncesc           (errsyncesc),
    .errcontrol           (errcontrol),
    .errcontentionlp0     (errcontentionlp0),
    .errcontentionlp1     (errcontentionlp1),

    .rxinvalidcodehs      (rxinvalidcodehs),
    .rxvalidhs            (rxvalidhs),
    .rxsynchs             (rxsynchs),
    .rxcalibrationformat  (rxcalibrationformat),

    .rxsynctypehs0        (rxsynctypehs0),
    .rxsynctypehs1        (rxsynctypehs1),
    .rxsynctypehs2        (rxsynctypehs2),
    .rxsynctypehs3        (rxsynctypehs3),

    .rxalpvalidhs         (rxalpvalidhs),
    .rxalpcode0           (rxalpcode0),
    .rxalpcode1           (rxalpcode1),
    .rxalpcode2           (rxalpcode2),
    .rxalpcode3           (rxalpcode3),

    .rxalpnibble0         (rxalpnibble0),
    .rxalpnibble1         (rxalpnibble1),
    .rxalpnibble2         (rxalpnibble2),
    .rxalpnibble3         (rxalpnibble3),

    .rxtriggeresc         (rxtriggeresc),
    .rxdataesc            (rxdataesc),
    .rxdatahs             (rxdatahs),

    .turnrequest          (turnrequest),
    .turndisable          (turndisable),
    .forcerxmode          (forcerxmode),
    .enable               (enable),
    .rxalp_lpselect       (rxalp_lpselect),
    .alpwakestate         (alpwakestate),

    .rx_lm_byte_vld       (rx_lm_byte_vld),
    .lane_err             (lane_err),
    .rxdatawidthhs        (rxdatawidthhs),
    .rx_lm_byte_data      (rx_lm_byte_data),
    .pkt_en               (pkt_en)

);

//==============================================================================
// 2. LOW LEVEL PROTOCOL (LLP)
//==============================================================================

llp_rx llp_rx_inst (

    .cphy_rxwordclkhs     (cphy_rxwordclkhs),
    .rst_n                (rst_n),

    .rx_lm_byte_vld       (rx_lm_byte_vld),
    .rx_lm_byte_data      (rx_lm_byte_data),

    .rx_lane_sts_reg4     (rx_lane_sts_reg4),
    .rx_lane_sts_reg7     (rx_lane_sts_reg7),

    .pkt_en               (pkt_en),

    .llp_bp_vld           (llp_bp_vld),
    .llp_err_vld          (llp_err_vld),
    .llp_err              (llp_err),
    .long_pkt_vld         (long_pkt_vld),
    .dtype_sts_reg        (dtype_sts_reg),
    .llp_bp_data           (llp_bp_data)

);

//==============================================================================
// 3. RX BUFFER REGISTER
//==============================================================================

rx_buffer_register rx_buffer_register_inst (

    .cphy_rxwordclkhs     (cphy_rxwordclkhs),
    .rst_n                (rst_n),

    .byte_data_vld        (llp_bp_vld),
    .byte_data            (llp_bp_data),
    .data_type_rx         (dtype_sts_reg),

    .rx_buff_reg_vld1     (rx_buff_reg_vld1),
    .rx_buff_reg_vld2     (rx_buff_reg_vld2),
    .rx_buff_reg_vld3     (rx_buff_reg_vld3),
    .rx_buff_reg_vld4     (rx_buff_reg_vld4),
    .rx_buff_reg_vld5     (rx_buff_reg_vld5),
    .rx_buff_reg_vld6     (rx_buff_reg_vld6),
    .rx_buff_reg_vld7     (rx_buff_reg_vld7),
    .rx_buff_reg_vld8     (rx_buff_reg_vld8),
    .rx_buff_reg_vld9     (rx_buff_reg_vld9),
    .rx_buff_reg_vld10    (rx_buff_reg_vld10),

    .rx_buff_reg_vld      (rx_buff_reg_vld),

    .rx_buff_reg1         (rx_buff_reg1),
    .rx_buff_reg2         (rx_buff_reg2),
    .rx_buff_reg3         (rx_buff_reg3),
    .rx_buff_reg4         (rx_buff_reg4),
    .rx_buff_reg5         (rx_buff_reg5),
    .rx_buff_reg6         (rx_buff_reg6),
    .rx_buff_reg7         (rx_buff_reg7),
    .rx_buff_reg8         (rx_buff_reg8),
    .rx_buff_reg9         (rx_buff_reg9),
    .rx_buff_reg10        (rx_buff_reg10)

);

//==============================================================================
// 4. RX BYTE COUNTER
//==============================================================================

rx_byte_counter rx_byte_counter_inst (

    .cphy_rxwordclkhs     (cphy_rxwordclkhs),
    .rst_n                (rst_n),

    .byte_data_valid      (llp_bp_vld),
    .data_type_rx_reg     (dtype_sts_reg),
    .rx_buf_reg_vld       (rx_buff_reg_vld),

    .rx_byte_ctr24        (rx_byte_ctr24),
    .rx_byte_ctr16        (rx_byte_ctr16),
    .rx_byte_ctr56        (rx_byte_ctr56),
    .rx_byte_ctr40        (rx_byte_ctr40),
    .rx_byte_ctr72        (rx_byte_ctr72)

);

//==============================================================================
// 5. BYTE-TO-PIXEL CONVERTER (BPUF)
//==============================================================================

bp_rx bp_rx_inst (

    .cphy_rxwordclkhs     (cphy_rxwordclkhs),
    .rst_n                (rst_n),

    .rx_buff_reg_vld      (rx_buff_reg_vld),

    .rx_buff_reg_vld1     (rx_buff_reg_vld1),
    .rx_buff_reg_vld2     (rx_buff_reg_vld2),
    .rx_buff_reg_vld3     (rx_buff_reg_vld3),
    .rx_buff_reg_vld4     (rx_buff_reg_vld4),
    .rx_buff_reg_vld5     (rx_buff_reg_vld5),
    .rx_buff_reg_vld6     (rx_buff_reg_vld6),
    .rx_buff_reg_vld7     (rx_buff_reg_vld7),
    .rx_buff_reg_vld8     (rx_buff_reg_vld8),
    .rx_buff_reg_vld9     (rx_buff_reg_vld9),
    .rx_buff_reg_vld10    (rx_buff_reg_vld10),

    .rx_buff_reg1         (rx_buff_reg1),
    .rx_buff_reg2         (rx_buff_reg2),
    .rx_buff_reg3         (rx_buff_reg3),
    .rx_buff_reg4         (rx_buff_reg4),
    .rx_buff_reg5         (rx_buff_reg5),
    .rx_buff_reg6         (rx_buff_reg6),
    .rx_buff_reg7         (rx_buff_reg7),
    .rx_buff_reg8         (rx_buff_reg8),
    .rx_buff_reg9         (rx_buff_reg9),
    .rx_buff_reg10        (rx_buff_reg10),

    .rx_byte_ctr24        (rx_byte_ctr24),
    .rx_byte_ctr16        (rx_byte_ctr16),
    .rx_byte_ctr56        (rx_byte_ctr56),
    .rx_byte_ctr40        (rx_byte_ctr40),
    .rx_byte_ctr72        (rx_byte_ctr72),

    .rx_pixel_dvalid      (rx_pixel_dvalid),
    .rx_pixel_data        (rx_pixel_data),

    .enable_r             (enable)

);

//==============================================================================
// 6. AXI MASTER
// Transfers converted pixel data to system memory.
// This is the existing full AXI master datapath; it is not AXI4-Lite.
//==============================================================================

axi_master axim_inst (

    .cphy_rxwordclkhs     (cphy_rxwordclkhs),

    .aclk                 (aclk),
    .areset_n             (areset_n),
    .rd_rst_n             (rd_rst_n),

    .data_type_rx_reg     (dtype_sts_reg),
    .rx_pixel_dvalid      (rx_pixel_dvalid),
    .rx_pixel_data        (rx_pixel_data),

    .awready              (awready),
    .wready               (wready),
    .bvalid               (bvalid),
    .bresp                (bresp),

    .wvalid               (wvalid),
    .awvalid              (awvalid),
    .wlast                (wlast),

    .awcache              (awcache),
    .awlock               (awlock),
    .awuser               (awuser),
    .wuser                (wuser),

    .bready               (bready),
    .axim_err             (axim_err),
    .awburst              (awburst),
    .axim_sts             (axim_sts),

    .awsize               (awsize),
    .awqos                (awqos),
    .awregion             (awregion),
    .awlen                (awlen),
    .awprot               (awprot),
    .awaddr               (awaddr),
    .awid                 (awid),

    .wstrb                (wstrb),
    .wdata                (wdata)

);

//==============================================================================
// 7. CSI-2 RX REGISTER BLOCK WITH AXI4-LITE SLAVE
//
// csi2_reg contains the axi_slave module internally.
// The processor accesses configuration/status registers through s_axi_*.
//==============================================================================

csi2_reg #(
    .ADDR_W               (32)
) csi2_reg_inst (

    .aclk                 (aclk),
    .areset_n             (areset_n),

    // AXI4-Lite write address
    .s_axi_awaddr         (s_axi_awaddr),
    .s_axi_awvalid        (s_axi_awvalid),
    .s_axi_awready        (s_axi_awready),

    // AXI4-Lite write data
    .s_axi_wdata          (s_axi_wdata),
    .s_axi_wstrb          (s_axi_wstrb),
    .s_axi_wvalid         (s_axi_wvalid),
    .s_axi_wready         (s_axi_wready),

    // AXI4-Lite write response
    .s_axi_bresp          (s_axi_bresp),
    .s_axi_bvalid         (s_axi_bvalid),
    .s_axi_bready         (s_axi_bready),

    // AXI4-Lite read address
    .s_axi_araddr         (s_axi_araddr),
    .s_axi_arvalid        (s_axi_arvalid),
    .s_axi_arready        (s_axi_arready),

    // AXI4-Lite read data
    .s_axi_rdata          (s_axi_rdata),
    .s_axi_rresp          (s_axi_rresp),
    .s_axi_rvalid         (s_axi_rvalid),
    .s_axi_rready         (s_axi_rready),

    // CSI-2 RX status inputs
    .axim_err             (axim_err),
    .rx_lane_sts_reg7     (rx_lane_sts_reg7),
    .rx_lane_sts_reg4     (rx_lane_sts_reg4),
    .lane_err             (lane_err),
    .llp_err_vld          (llp_err_vld),
    .axim_sts             (axim_sts),
    .llp_err              (llp_err),
    .dtype_sts_reg        (dtype_sts_reg),

    // Calibration inputs
    .rxalpnibble_reg      (rxalpnibble_reg),
    .rxalpcode_reg        (rxalpcode_reg),
    .rxerrcalhs_reg       (rxerrcalhs_reg),
    .rxcalibrationformat_reg (rxcalibrationformat_reg),

    // Configuration outputs
    .lane_configuration   (lane_configuration),
    .mode_selection       (mode_selection)

);

endmodule

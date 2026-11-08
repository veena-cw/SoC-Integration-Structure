//==============================================================================
// File: csi2_reg.sv
// Description: Complete CSI-2 RX AXI4-Lite slave + register block
//
// AXI4-Lite:
//   32-bit data bus, independent read/write channels
//   Single-beat transactions
//
// Register map:
//   0x00 : LANE_CONFIGURATION  R/W
//   0x04 : MODE_SELECTION      R/W
//   0x08 : AXI_MASTER_STATUS   R
//   0x0C : CSI2_RX_ERROR       R
//   0x10 : DATA_TYPE_STATUS    R
//   0x14 : RX_ALP_CODE         R
//   0x18 : RX_ALP_NIBBLE       R
//   0x1C : RX_CALIBRATION_FMT  R
//   0x20 : RX_ERROR_CAL_HS     R
//
// Configuration encoding:
//   lane_configuration: 0=1 lane, 1=2 lanes, 2=4 lanes
//   mode_selection:     0=C-PHY, 1=D-PHY
//==============================================================================

module csi2_reg #(
  parameter ADDR_W = 32
)(
  input  logic                 aclk,
  input  logic                 areset_n,

  // AXI4-Lite Write Address Channel
  input  logic [ADDR_W-1:0]    s_axi_awaddr,
  input  logic                 s_axi_awvalid,
  output logic                 s_axi_awready,

  // AXI4-Lite Write Data Channel
  input  logic [31:0]          s_axi_wdata,
  input  logic [3:0]           s_axi_wstrb,
  input  logic                 s_axi_wvalid,
  output logic                 s_axi_wready,

  // AXI4-Lite Write Response Channel
  output logic [1:0]           s_axi_bresp,
  output logic                 s_axi_bvalid,
  input  logic                 s_axi_bready,

  // AXI4-Lite Read Address Channel
  input  logic [ADDR_W-1:0]    s_axi_araddr,
  input  logic                 s_axi_arvalid,
  output logic                 s_axi_arready,

  // AXI4-Lite Read Data Channel
  output logic [31:0]          s_axi_rdata,
  output logic [1:0]           s_axi_rresp,
  output logic                 s_axi_rvalid,
  input  logic                 s_axi_rready,

  // CSI-2 RX Status Inputs
  input  logic                 axim_err,
  input  logic                 rx_lane_sts_reg7,
  input  logic                 rx_lane_sts_reg4,
  input  logic                 lane_err,
  input  logic                 llp_err_vld,
  input  logic [1:0]           axim_sts,
  input  logic [2:0]           llp_err,
  input  logic [5:0]           dtype_sts_reg,

  // Calibration Inputs
  input  logic [15:0]          rxalpnibble_reg,
  input  logic [15:0]          rxalpcode_reg,
  input  logic                 rxerrcalhs_reg,
  input  logic [1:0]           rxcalibrationformat_reg,

  // Configuration Outputs to CSI-2 RX Controller
  output logic [31:0]          lane_configuration,
  output logic [31:0]          mode_selection
);

  //==========================================================================
  // AXI4-Lite <-> Register Bus Internal Signals
  //==========================================================================
  logic                 reg_wr_en;
  logic [ADDR_W-1:0]    reg_waddr;
  logic [31:0]          reg_wdata;
  logic [3:0]           reg_wstrb;
  logic [2:0]           reg_wprot;
  logic                 reg_wr_done;
  logic                 reg_wr_ok;
  logic                 reg_wr_err;

  logic                 reg_rd_en;
  logic [ADDR_W-1:0]    reg_raddr;
  logic [2:0]           reg_rprot;
  logic [31:0]          reg_rdata;
  logic                 reg_rd_valid;
  logic                 reg_rd_ok;
  logic                 reg_rd_err;

  // Register accesses complete in a single cycle:
  //  - write completes in the same cycle reg_wr_en is asserted
  //  - read data is combinational from reg_raddr, so it is always valid
  assign reg_wr_done  = reg_wr_en;
  assign reg_wr_err   = ~reg_wr_ok;
  assign reg_rd_valid = 1'b1;
  assign reg_rd_err   = ~reg_rd_ok;

  //==========================================================================
  // AXI4-Lite Slave
  //==========================================================================
  axi_slave #(
    .ADDR_W(ADDR_W)
  ) u_axi_slave (
    .al_aclk       (aclk),
    .al_areset_n   (areset_n),

    // Write address channel
    .al_awaddr     (s_axi_awaddr),
    .al_awprot     (3'b000),
    .al_awvalid    (s_axi_awvalid),
    .al_awready    (s_axi_awready),

    // Write data channel
    .al_wdata      (s_axi_wdata),
    .al_wstrb      (s_axi_wstrb),
    .al_wvalid     (s_axi_wvalid),
    .al_wready     (s_axi_wready),

    // Write response channel
    .al_bresp      (s_axi_bresp),
    .al_bvalid     (s_axi_bvalid),
    .al_bready     (s_axi_bready),

    // Read address channel
    .al_araddr     (s_axi_araddr),
    .al_arprot     (3'b000),
    .al_arvalid    (s_axi_arvalid),
    .al_arready    (s_axi_arready),

    // Read data channel
    .al_rdata      (s_axi_rdata),
    .al_rresp      (s_axi_rresp),
    .al_rvalid     (s_axi_rvalid),
    .al_rready     (s_axi_rready),

    // Register write interface
    .reg_wr_en     (reg_wr_en),
    .reg_waddr     (reg_waddr),
    .reg_wdata     (reg_wdata),
    .reg_wstrb     (reg_wstrb),
    .reg_wprot     (reg_wprot),
    .reg_wr_done   (reg_wr_done),
    .reg_wr_err    (reg_wr_err),

    // Register read interface
    .reg_rd_en     (reg_rd_en),
    .reg_raddr     (reg_raddr),
    .reg_rprot     (reg_rprot),
    .reg_rdata     (reg_rdata),
    .reg_rd_valid  (reg_rd_valid),
    .reg_rd_err    (reg_rd_err)
  );

  //==========================================================================
  // Register Address Definitions
  //==========================================================================
  localparam logic [ADDR_W-1:0] ADDR_LANE_CFG = 'h00;
  localparam logic [ADDR_W-1:0] ADDR_MODE_SEL = 'h04;
  localparam logic [ADDR_W-1:0] ADDR_AXIM_STS = 'h08;
  localparam logic [ADDR_W-1:0] ADDR_RX_ERROR = 'h0C;
  localparam logic [ADDR_W-1:0] ADDR_DTYPE    = 'h10;
  localparam logic [ADDR_W-1:0] ADDR_ALP_CODE = 'h14;
  localparam logic [ADDR_W-1:0] ADDR_ALP_NIB  = 'h18;
  localparam logic [ADDR_W-1:0] ADDR_CAL_FMT  = 'h1C;
  localparam logic [ADDR_W-1:0] ADDR_CAL_ERR  = 'h20;

  //==========================================================================
  // Status Register Storage
  //==========================================================================
  logic       csi2_rx_err_reg;
  logic [5:0] dtype_reg;
  logic [1:0] axim_rsp_sts_reg;

  //==========================================================================
  // Write Address Validation (only configuration registers are writable)
  //==========================================================================
  always_comb begin
    case (reg_waddr)
      ADDR_LANE_CFG,
      ADDR_MODE_SEL: reg_wr_ok = 1'b1;
      default:       reg_wr_ok = 1'b0;
    endcase
  end

  //==========================================================================
  // Read Address Validation
  //==========================================================================
  always_comb begin
    case (reg_raddr)
      ADDR_LANE_CFG,
      ADDR_MODE_SEL,
      ADDR_AXIM_STS,
      ADDR_RX_ERROR,
      ADDR_DTYPE,
      ADDR_ALP_CODE,
      ADDR_ALP_NIB,
      ADDR_CAL_FMT,
      ADDR_CAL_ERR: reg_rd_ok = 1'b1;
      default:      reg_rd_ok = 1'b0;
    endcase
  end

  //==========================================================================
  // Writable Configuration Registers (WSTRB enables individual bytes)
  //==========================================================================
  integer i;

  always_ff @(posedge aclk or negedge areset_n) begin
    if (!areset_n) begin
      lane_configuration <= 32'h0000_0000;
      mode_selection     <= 32'h0000_0000;
    end
    else if (reg_wr_en && reg_wr_ok) begin
      case (reg_waddr)
        ADDR_LANE_CFG: begin
          for (i = 0; i < 4; i = i + 1)
            if (reg_wstrb[i])
              lane_configuration[i*8 +: 8] <= reg_wdata[i*8 +: 8];
        end

        ADDR_MODE_SEL: begin
          for (i = 0; i < 4; i = i + 1)
            if (reg_wstrb[i])
              mode_selection[i*8 +: 8] <= reg_wdata[i*8 +: 8];
        end

        default: ;
      endcase
    end
  end

  //==========================================================================
  // AXI Master Response Status Register: 0x08
  //==========================================================================
  always_ff @(posedge aclk or negedge areset_n) begin
    if (!areset_n)
      axim_rsp_sts_reg <= 2'b00;
    else
      axim_rsp_sts_reg <= axim_sts;
  end

  //==========================================================================
  // CSI-2 RX Error Register: 0x0C
  // Sticky error; cleared when a new transmission starts.
  //==========================================================================
  always_ff @(posedge aclk or negedge areset_n) begin
    if (!areset_n)
      csi2_rx_err_reg <= 1'b0;
    else if (rx_lane_sts_reg7)
      csi2_rx_err_reg <= 1'b0;
    else if (axim_err || lane_err || llp_err_vld || (|llp_err))
      csi2_rx_err_reg <= 1'b1;
  end

  //==========================================================================
  // Data Type Status Register: 0x10
  //==========================================================================
  always_ff @(posedge aclk or negedge areset_n) begin
    if (!areset_n)
      dtype_reg <= 6'h0F;
    else if (rx_lane_sts_reg7)
      dtype_reg <= 6'h0F;
    else
      dtype_reg <= dtype_sts_reg;
  end

  //==========================================================================
  // Read Data Multiplexer (combinational path to the AXI4-Lite slave)
  //==========================================================================
  always_comb begin
    reg_rdata = 32'h0000_0000;

    case (reg_raddr)
      ADDR_LANE_CFG: reg_rdata = lane_configuration;
      ADDR_MODE_SEL: reg_rdata = mode_selection;
      ADDR_AXIM_STS: reg_rdata = {30'b0, axim_rsp_sts_reg};
      ADDR_RX_ERROR: reg_rdata = {31'b0, csi2_rx_err_reg};
      ADDR_DTYPE:    reg_rdata = {26'b0, dtype_reg};
      ADDR_ALP_CODE: reg_rdata = {16'b0, rxalpcode_reg};
      ADDR_ALP_NIB:  reg_rdata = {16'b0, rxalpnibble_reg};
      ADDR_CAL_FMT:  reg_rdata = {30'b0, rxcalibrationformat_reg};
      ADDR_CAL_ERR:  reg_rdata = {31'b0, rxerrcalhs_reg};
      default:       reg_rdata = 32'h0000_0000;
    endcase
  end

  // rx_lane_sts_reg4 is retained as an input for compatibility with
  // the CSI-2 RX status interface; it is not used by the register behavior.
  // reg_rd_en / reg_wprot / reg_rprot are unused in this block.

endmodule

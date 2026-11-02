
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

  //--------------------------------------------------------------------------
  // AXI4-Lite Write Address Channel
  //--------------------------------------------------------------------------
  input  logic [ADDR_W-1:0]    s_axi_awaddr,
  input  logic                 s_axi_awvalid,
  output logic                 s_axi_awready,

  //--------------------------------------------------------------------------
  // AXI4-Lite Write Data Channel
  //--------------------------------------------------------------------------
  input  logic [31:0]          s_axi_wdata,
  input  logic [3:0]           s_axi_wstrb,
  input  logic                 s_axi_wvalid,
  output logic                 s_axi_wready,

  //--------------------------------------------------------------------------
  // AXI4-Lite Write Response Channel
  //--------------------------------------------------------------------------
  output logic [1:0]           s_axi_bresp,
  output logic                 s_axi_bvalid,
  input  logic                 s_axi_bready,

  //--------------------------------------------------------------------------
  // AXI4-Lite Read Address Channel
  //--------------------------------------------------------------------------
  input  logic [ADDR_W-1:0]    s_axi_araddr,
  input  logic                 s_axi_arvalid,
  output logic                 s_axi_arready,

  //--------------------------------------------------------------------------
  // AXI4-Lite Read Data Channel
  //--------------------------------------------------------------------------
  output logic [31:0]          s_axi_rdata,
  output logic [1:0]           s_axi_rresp,
  output logic                 s_axi_rvalid,
  input  logic                 s_axi_rready,

  //--------------------------------------------------------------------------
  // CSI-2 RX Status Inputs
  //--------------------------------------------------------------------------
  input  logic                 axim_err,
  input  logic                 rx_lane_sts_reg7,
  input  logic                 rx_lane_sts_reg4,
  input  logic                 lane_err,
  input  logic                 llp_err_vld,
  input  logic [1:0]           axim_sts,
  input  logic [2:0]           llp_err,
  input  logic [5:0]           dtype_sts_reg,

  //--------------------------------------------------------------------------
  // Calibration Inputs
  //--------------------------------------------------------------------------
  input  logic [15:0]          rxalpnibble_reg,
  input  logic [15:0]          rxalpcode_reg,
  input  logic                 rxerrcalhs_reg,
  input  logic [1:0]           rxcalibrationformat_reg,

  //--------------------------------------------------------------------------
  // Configuration Outputs to CSI-2 RX Controller
  //--------------------------------------------------------------------------
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
  logic                 reg_wr_ok;

  logic [ADDR_W-1:0]    reg_raddr;
  logic [31:0]          reg_rdata;
  logic                 reg_rd_ok;

  //==========================================================================
  // AXI4-Lite Slave
  //==========================================================================

  axi_slave #(
    .ADDR_W (ADDR_W)
  ) u_axi_slave (
    .aclk       (aclk),
    .areset_n   (areset_n),

    // Write address
    .awaddr     (s_axi_awaddr),
    .awvalid    (s_axi_awvalid),
    .awready    (s_axi_awready),

    // Write data
    .wdata      (s_axi_wdata),
    .wstrb      (s_axi_wstrb),
    .wvalid     (s_axi_wvalid),
    .wready     (s_axi_wready),

    // Write response
    .bresp      (s_axi_bresp),
    .bvalid     (s_axi_bvalid),
    .bready     (s_axi_bready),

    // Read address
    .araddr     (s_axi_araddr),
    .arvalid    (s_axi_arvalid),
    .arready    (s_axi_arready),

    // Read data
    .rdata      (s_axi_rdata),
    .rresp      (s_axi_rresp),
    .rvalid     (s_axi_rvalid),
    .rready     (s_axi_rready),

    // Register bus
    .reg_wr_en  (reg_wr_en),
    .reg_waddr  (reg_waddr),
    .reg_wdata  (reg_wdata),
    .reg_wstrb  (reg_wstrb),
    .reg_wr_ok  (reg_wr_ok),

    .reg_raddr  (reg_raddr),
    .reg_rdata  (reg_rdata),
    .reg_rd_ok  (reg_rd_ok)
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
  // Write Address Validation
  // Only configuration registers are writable.
  //==========================================================================

  always_comb begin
    reg_wr_ok = 1'b0;

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
    reg_rd_ok = 1'b1;

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
  // Writable Configuration Registers
  //==========================================================================
  // Writes occur only when the AXI4-Lite slave asserts reg_wr_en.
  // WSTRB enables individual bytes.
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
          for (i = 0; i < 4; i = i + 1) begin
            if (reg_wstrb[i])
              lane_configuration[i*8 +: 8]
                <= reg_wdata[i*8 +: 8];
          end
        end

        ADDR_MODE_SEL: begin
          for (i = 0; i < 4; i = i + 1) begin
            if (reg_wstrb[i])
              mode_selection[i*8 +: 8]
                <= reg_wdata[i*8 +: 8];
          end
        end

        default: begin
        end

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
    else if (axim_err || lane_err ||
             llp_err_vld || (|llp_err))
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
  // Read Data Multiplexer
  // Combinational read path to the AXI4-Lite slave.
  //==========================================================================

  always_comb begin
    reg_rdata = 32'h0000_0000;

    case (reg_raddr)

      ADDR_LANE_CFG:
        reg_rdata = lane_configuration;

      ADDR_MODE_SEL:
        reg_rdata = mode_selection;

      ADDR_AXIM_STS:
        reg_rdata = {30'b0, axim_rsp_sts_reg};

      ADDR_RX_ERROR:
        reg_rdata = {31'b0, csi2_rx_err_reg};

      ADDR_DTYPE:
        reg_rdata = {26'b0, dtype_reg};

      ADDR_ALP_CODE:
        reg_rdata = {16'b0, rxalpcode_reg};

      ADDR_ALP_NIB:
        reg_rdata = {16'b0, rxalpnibble_reg};

      ADDR_CAL_FMT:
        reg_rdata = {30'b0, rxcalibrationformat_reg};

      ADDR_CAL_ERR:
        reg_rdata = {31'b0, rxerrcalhs_reg};

      default:
        reg_rdata = 32'h0000_0000;

    endcase
  end

  // rx_lane_sts_reg4 is retained as an input for compatibility with
  // the CSI-2 RX status interface. It is not used by the original
  // register behavior shown here.

endmodule


//==============================================================================
// AXI4-Lite Slave
//==============================================================================

module axi_slave #(
  parameter ADDR_W = 32
)(
  input  logic                 aclk,
  input  logic                 areset_n,

  // Write address channel
  input  logic [ADDR_W-1:0]    awaddr,
  input  logic                 awvalid,
  output logic                 awready,

  // Write data channel
  input  logic [31:0]          wdata,
  input  logic [3:0]           wstrb,
  input  logic                 wvalid,
  output logic                 wready,

  // Write response channel
  output logic [1:0]           bresp,
  output logic                 bvalid,
  input  logic                 bready,

  // Read address channel
  input  logic [ADDR_W-1:0]    araddr,
  input  logic                 arvalid,
  output logic                 arready,

  // Read data channel
  output logic [31:0]          rdata,
  output logic [1:0]           rresp,
  output logic                 rvalid,
  input  logic                 rready,

  // Register bus
  output logic                 reg_wr_en,
  output logic [ADDR_W-1:0]    reg_waddr,
  output logic [31:0]          reg_wdata,
  output logic [3:0]           reg_wstrb,
  input  logic                 reg_wr_ok,

  output logic [ADDR_W-1:0]    reg_raddr,
  input  logic [31:0]          reg_rdata,
  input  logic                 reg_rd_ok
);

  localparam logic [1:0] RESP_OKAY   = 2'b00;
  localparam logic [1:0] RESP_SLVERR = 2'b10;

  //==========================================================================
  // Write controller
  //==========================================================================

  localparam logic [1:0] W_COLLECT = 2'd0,
                         W_EXEC    = 2'd1,
                         W_RESP    = 2'd2;

  logic [1:0]        wstate;
  logic [ADDR_W-1:0] awaddr_q;
  logic [31:0]       wdata_q;
  logic [3:0]        wstrb_q;
  logic              aw_pending;
  logic              w_pending;

  assign awready = (wstate == W_COLLECT) && !aw_pending;
  assign wready  = (wstate == W_COLLECT) && !w_pending;

  assign reg_waddr = awaddr_q;
  assign reg_wdata = wdata_q;
  assign reg_wstrb = wstrb_q;
  assign reg_wr_en = (wstate == W_EXEC);

  always_ff @(posedge aclk or negedge areset_n) begin
    if (!areset_n) begin
      wstate     <= W_COLLECT;
      awaddr_q   <= '0;
      wdata_q    <= '0;
      wstrb_q    <= '0;
      aw_pending <= 1'b0;
      w_pending  <= 1'b0;
      bvalid     <= 1'b0;
      bresp      <= RESP_OKAY;
    end
    else begin
      case (wstate)

        W_COLLECT: begin
          if (awvalid && awready) begin
            awaddr_q   <= awaddr;
            aw_pending <= 1'b1;
          end

          if (wvalid && wready) begin
            wdata_q   <= wdata;
            wstrb_q   <= wstrb;
            w_pending <= 1'b1;
          end

          // Pending flags include transactions captured on earlier cycles.
          if ((aw_pending || (awvalid && awready)) &&
              (w_pending  || (wvalid  && wready)))
            wstate <= W_EXEC;
        end

        W_EXEC: begin
          // Register block samples reg_wr_en on this clock edge.
          bresp  <= reg_wr_ok ? RESP_OKAY : RESP_SLVERR;
          bvalid <= 1'b1;
          wstate <= W_RESP;
        end

        W_RESP: begin
          if (bvalid && bready) begin
            bvalid     <= 1'b0;
            aw_pending <= 1'b0;
            w_pending  <= 1'b0;
            wstate     <= W_COLLECT;
          end
        end

        default: wstate <= W_COLLECT;

      endcase
    end
  end

  //==========================================================================
  // Read controller
  //==========================================================================

  localparam logic [1:0] R_IDLE  = 2'd0,
                         R_FETCH = 2'd1,
                         R_DATA  = 2'd2;

  logic [1:0]        rstate;
  logic [ADDR_W-1:0] araddr_q;

  assign arready   = (rstate == R_IDLE);
  assign reg_raddr = araddr_q;

  always_ff @(posedge aclk or negedge areset_n) begin
    if (!areset_n) begin
      rstate   <= R_IDLE;
      araddr_q <= '0;
      rdata    <= '0;
      rresp    <= RESP_OKAY;
      rvalid   <= 1'b0;
    end
    else begin
      case (rstate)

        R_IDLE: begin
          if (arvalid && arready) begin
            araddr_q <= araddr;
            rstate   <= R_FETCH;
          end
        end

        R_FETCH: begin
          rdata  <= reg_rd_ok ? reg_rdata : 32'h0000_0000;
          rresp  <= reg_rd_ok ? RESP_OKAY : RESP_SLVERR;
          rvalid <= 1'b1;
          rstate <= R_DATA;
        end

        R_DATA: begin
          // Hold response signals until the master accepts the data.
          if (rvalid && rready) begin
            rvalid <= 1'b0;
            rstate <= R_IDLE;
          end
        end

        default: rstate <= R_IDLE;

      endcase
    end
  end

endmodule


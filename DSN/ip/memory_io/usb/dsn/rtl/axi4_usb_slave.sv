/*
`timescale 1ns/1ps

// -----------------------------------------------------------------------------
// AXI4 USB Host Wrapper
//
// Full AXI4 slave interface -> existing USB Host cfg_* interface.
//
// Normal USB register accesses are single-beat 32-bit AXI transactions:
//   AWLEN  = 0
//   ARLEN  = 0
//   AWSIZE = 3'b010
//   ARSIZE = 3'b010
//
// The existing usbh_host.v is not modified. This wrapper translates AXI4
// transactions into the cfg_* interface already implemented by usbh_host.
//
// AXI4 Master / NoC
//        |
//        v
// +-------------------+
// | axi4_usb_slave    |
// | AXI4 -> cfg_*     |
// +---------+---------+
//           |
//           v
//      usbh_host.v
//           |
//           v
//       USB / UTMI
//
// Unsupported multi-beat / non-32-bit accesses are completed with DECERR.
// -----------------------------------------------------------------------------

module axi4_usb_slave #(
    parameter int ADDR_WIDTH   = 32,
    parameter int DATA_WIDTH   = 32,
    parameter int ID_WIDTH     = 4,
    parameter int USB_CLK_FREQ = 48000000
) (
    input  logic                     aclk,
    input  logic                     aresetn,

    // -----------------------------------------------------------------
    // AXI4 Write Address Channel
    // -----------------------------------------------------------------
    input  logic [ID_WIDTH-1:0]      s_axi_awid,
    input  logic [ADDR_WIDTH-1:0]    s_axi_awaddr,
    input  logic [7:0]               s_axi_awlen,
    input  logic [2:0]               s_axi_awsize,
    input  logic [1:0]               s_axi_awburst,
    input  logic                     s_axi_awlock,
    input  logic [3:0]               s_axi_awcache,
    input  logic [2:0]               s_axi_awprot,
    input  logic [3:0]               s_axi_awqos,
    input  logic                     s_axi_awvalid,
    output logic                     s_axi_awready,

    // -----------------------------------------------------------------
    // AXI4 Write Data Channel
    // -----------------------------------------------------------------
    input  logic [DATA_WIDTH-1:0]    s_axi_wdata,
    input  logic [DATA_WIDTH/8-1:0]  s_axi_wstrb,
    input  logic                     s_axi_wlast,
    input  logic                     s_axi_wvalid,
    output logic                     s_axi_wready,

    // -----------------------------------------------------------------
    // AXI4 Write Response Channel
    // -----------------------------------------------------------------
    output logic [ID_WIDTH-1:0]      s_axi_bid,
    output logic [1:0]               s_axi_bresp,
    output logic                     s_axi_bvalid,
    input  logic                     s_axi_bready,

    // -----------------------------------------------------------------
    // AXI4 Read Address Channel
    // -----------------------------------------------------------------
    input  logic [ID_WIDTH-1:0]      s_axi_arid,
    input  logic [ADDR_WIDTH-1:0]    s_axi_araddr,
    input  logic [7:0]               s_axi_arlen,
    input  logic [2:0]               s_axi_arsize,
    input  logic [1:0]               s_axi_arburst,
    input  logic                     s_axi_arlock,
    input  logic [3:0]               s_axi_arcache,
    input  logic [2:0]               s_axi_arprot,
    input  logic [3:0]               s_axi_arqos,
    input  logic                     s_axi_arvalid,
    output logic                     s_axi_arready,

    // -----------------------------------------------------------------
    // AXI4 Read Data Channel
    // -----------------------------------------------------------------
    output logic [ID_WIDTH-1:0]      s_axi_rid,
    output logic [DATA_WIDTH-1:0]    s_axi_rdata,
    output logic [1:0]               s_axi_rresp,
    output logic                     s_axi_rlast,
    output logic                     s_axi_rvalid,
    input  logic                     s_axi_rready,

    // -----------------------------------------------------------------
    // USB UTMI Interface
    // -----------------------------------------------------------------
    input  logic [7:0]               utmi_data_in_i,
    input  logic                     utmi_txready_i,
    input  logic                     utmi_rxvalid_i,
    input  logic                     utmi_rxactive_i,
    input  logic                     utmi_rxerror_i,
    input  logic [1:0]               utmi_linestate_i,

    output logic [7:0]               utmi_data_out_o,
    output logic                     utmi_txvalid_o,
    output logic [1:0]               utmi_op_mode_o,
    output logic [1:0]               utmi_xcvrselect_o,
    output logic                     utmi_termselect_o,
    output logic                     utmi_dppulldown_o,
    output logic                     utmi_dmpulldown_o,

    // USB interrupt
    output logic                     intr_o
);

    localparam logic [1:0] RESP_OKAY   = 2'b00;
    localparam logic [1:0] RESP_DECERR = 2'b11;

    // -----------------------------------------------------------------
    // Existing usbh_host cfg_* interface
    // -----------------------------------------------------------------
    logic        cfg_awvalid;
    logic [31:0] cfg_awaddr;
    logic        cfg_wvalid;
    logic [31:0] cfg_wdata;
    //logic [3:0]  cfg_wstrb;
    logic        cfg_bready;
    logic        cfg_arvalid;
    logic [31:0] cfg_araddr;
    logic        cfg_rready;

    logic        cfg_awready;
    logic        cfg_wready;
    logic        cfg_bvalid;
    logic [1:0]  cfg_bresp;
    logic        cfg_arready;
    logic        cfg_rvalid;
    logic [31:0] cfg_rdata;
    logic [1:0]  cfg_rresp;

    // usbh_host.v uses active-high reset.
    wire usb_rst = ~aresetn;

    // -----------------------------------------------------------------
    // Existing USB Host
    // -----------------------------------------------------------------
    usbh_host #(
        .USB_CLK_FREQ(USB_CLK_FREQ)
    ) u_usbh_host (
        .clk_i                  (aclk),
        .rst_i                  (usb_rst),

        .cfg_awvalid_i          (cfg_awvalid),
        .cfg_awaddr_i           (cfg_awaddr),
        .cfg_wvalid_i           (cfg_wvalid),
        .cfg_wdata_i            (cfg_wdata),
//        .cfg_wstrb_i            (cfg_wstrb),
        .cfg_bready_i           (cfg_bready),
        .cfg_arvalid_i          (cfg_arvalid),
        .cfg_araddr_i           (cfg_araddr),
        .cfg_rready_i           (cfg_rready),

        .cfg_awready_o          (cfg_awready),
        .cfg_wready_o           (cfg_wready),
        .cfg_bvalid_o           (cfg_bvalid),
        .cfg_bresp_o            (cfg_bresp),
        .cfg_arready_o          (cfg_arready),
        .cfg_rvalid_o           (cfg_rvalid),
        .cfg_rdata_o            (cfg_rdata),
        .cfg_rresp_o            (cfg_rresp),

        .intr_o                 (intr_o),

        .utmi_data_in_i         (utmi_data_in_i),
        .utmi_txready_i         (utmi_txready_i),
        .utmi_rxvalid_i         (utmi_rxvalid_i),
        .utmi_rxactive_i        (utmi_rxactive_i),
        .utmi_rxerror_i         (utmi_rxerror_i),
        .utmi_linestate_i       (utmi_linestate_i),

        .utmi_data_out_o        (utmi_data_out_o),
        .utmi_txvalid_o         (utmi_txvalid_o),
        .utmi_op_mode_o         (utmi_op_mode_o),
        .utmi_xcvrselect_o      (utmi_xcvrselect_o),
        .utmi_termselect_o      (utmi_termselect_o),
        .utmi_dppulldown_o      (utmi_dppulldown_o),
        .utmi_dmpulldown_o      (utmi_dmpulldown_o)
    );

    // -----------------------------------------------------------------
    // WRITE SIDE
    // AW and W are independent AXI4 channels.
    // -----------------------------------------------------------------
    typedef enum logic [1:0] {
        WR_IDLE,
        WR_WAIT_W,
        WR_CFG,
        WR_RESP
    } wr_state_t;

    wr_state_t wr_state;

    logic [ID_WIDTH-1:0] awid_q;
    logic [ADDR_WIDTH-1:0] awaddr_q;
    logic [7:0] awlen_q;
    logic [2:0] awsize_q;
    logic [1:0] awburst_q;
    logic aw_unsupported_q;

    logic [DATA_WIDTH-1:0] wdata_q;
    logic [DATA_WIDTH/8-1:0] wstrb_q;

    logic [1:0] bresp_q;

    assign s_axi_awready = (wr_state == WR_IDLE);
    assign s_axi_wready  = (wr_state == WR_WAIT_W);
    assign s_axi_bvalid  = (wr_state == WR_RESP);
    assign s_axi_bid     = awid_q;
    assign s_axi_bresp   = bresp_q;

    // USB host register interface is 32-bit and single-beat.
    wire wr_supported =
        (DATA_WIDTH == 32) &&
        (awlen_q   == 8'd0) &&
        (awsize_q  == 3'd2) &&
        ((awburst_q == 2'b00) || (awburst_q == 2'b01));

    // Drive cfg_* only for a supported single-beat write.
    assign cfg_awvalid = (wr_state == WR_CFG) && wr_supported;
    assign cfg_awaddr  = awaddr_q[31:0];

    assign cfg_wvalid  = (wr_state == WR_CFG) && wr_supported;
    assign cfg_wdata   = wdata_q[31:0];
//    assign cfg_wstrb   = wstrb_q[3:0];

    assign cfg_bready  = (wr_state == WR_CFG) && wr_supported;

    always_ff @(posedge aclk) begin
        if (!aresetn) begin
            wr_state          <= WR_IDLE;
            awid_q            <= '0;
            awaddr_q          <= '0;
            awlen_q           <= '0;
            awsize_q          <= '0;
            awburst_q         <= '0;
            aw_unsupported_q  <= 1'b0;
            wdata_q           <= '0;
            wstrb_q           <= '0;
            bresp_q           <= RESP_OKAY;
        end
        else begin
            case (wr_state)

                WR_IDLE: begin
                    if (s_axi_awvalid && s_axi_awready) begin
                        awid_q   <= s_axi_awid;
                        awaddr_q <= s_axi_awaddr;
                        awlen_q  <= s_axi_awlen;
                        awsize_q <= s_axi_awsize;
                        awburst_q <= s_axi_awburst;

                        aw_unsupported_q <=
                            (DATA_WIDTH != 32) ||
                            (s_axi_awlen != 8'd0) ||
                            (s_axi_awsize != 3'd2) ||
                            ((s_axi_awburst != 2'b00) &&
                             (s_axi_awburst != 2'b01));

                        wr_state <= WR_WAIT_W;
                    end
                end

                WR_WAIT_W: begin
                    if (s_axi_wvalid && s_axi_wready) begin
                        wdata_q <= s_axi_wdata;
                        wstrb_q <= s_axi_wstrb;

                        if (aw_unsupported_q) begin
                            // Consume the complete unsupported burst.
                            if (s_axi_wlast) begin
                                bresp_q  <= RESP_DECERR;
                                wr_state <= WR_RESP;
                            end
                        end
                        else if (s_axi_wlast) begin
                            // Normal one-beat USB register write.
                            wr_state <= WR_CFG;
                        end
                        else begin
                            // AWLEN=0 but WLAST missing: terminate with error.
                            bresp_q  <= RESP_DECERR;
                            wr_state <= WR_RESP;
                        end
                    end
                end

                WR_CFG: begin
                    // usbh_host accepts the write and produces cfg_bvalid.
                    if (cfg_bvalid) begin
                        bresp_q  <= cfg_bresp;
                        wr_state <= WR_RESP;
                    end
                end

                WR_RESP: begin
                    if (s_axi_bvalid && s_axi_bready)
                        wr_state <= WR_IDLE;
                end

                default: begin
                    wr_state <= WR_IDLE;
                end

            endcase
        end
    end

    // -----------------------------------------------------------------
    // READ SIDE
    // -----------------------------------------------------------------
    typedef enum logic [1:0] {
        RD_IDLE,
        RD_CFG,
        RD_RESP
    } rd_state_t;

    rd_state_t rd_state;

    logic [ID_WIDTH-1:0] arid_q;
    logic [ADDR_WIDTH-1:0] araddr_q;
    logic [7:0] arlen_q;
    logic [2:0] arsize_q;
    logic [1:0] arburst_q;
    logic rd_unsupported_q;

    logic [DATA_WIDTH-1:0] rdata_q;
    logic [1:0] rresp_q;

    assign s_axi_arready = (rd_state == RD_IDLE);

    wire rd_supported =
        (DATA_WIDTH == 32) &&
        (arlen_q   == 8'd0) &&
        (arsize_q  == 3'd2) &&
        ((arburst_q == 2'b00) || (arburst_q == 2'b01));

    assign cfg_arvalid = (rd_state == RD_CFG) && !rd_unsupported_q;
    assign cfg_araddr  = araddr_q[31:0];
    assign cfg_rready  = (rd_state == RD_CFG) && !rd_unsupported_q;

    assign s_axi_rid    = arid_q;
    assign s_axi_rdata  = rdata_q;
    assign s_axi_rresp  = rresp_q;
    assign s_axi_rvalid = (rd_state == RD_RESP);
    assign s_axi_rlast  = (rd_state == RD_RESP);

    always_ff @(posedge aclk) begin
        if (!aresetn) begin
            rd_state         <= RD_IDLE;
            arid_q           <= '0;
            araddr_q         <= '0;
            arlen_q          <= '0;
            arsize_q         <= '0;
            arburst_q        <= '0;
            rd_unsupported_q <= 1'b0;
            rdata_q          <= '0;
            rresp_q          <= RESP_OKAY;
        end
        else begin
            case (rd_state)

                RD_IDLE: begin
                    if (s_axi_arvalid && s_axi_arready) begin
                        arid_q    <= s_axi_arid;
                        araddr_q  <= s_axi_araddr;
                        arlen_q   <= s_axi_arlen;
                        arsize_q  <= s_axi_arsize;
                        arburst_q <= s_axi_arburst;

                        rd_unsupported_q <=
                            (DATA_WIDTH != 32) ||
                            (s_axi_arlen != 8'd0) ||
                            (s_axi_arsize != 3'd2) ||
                            ((s_axi_arburst != 2'b00) &&
                             (s_axi_arburst != 2'b01));

                        rd_state <= RD_CFG;
                    end
                end

                RD_CFG: begin
                    if (rd_unsupported_q) begin
                        rdata_q  <= '0;
                        rresp_q  <= RESP_DECERR;
                        rd_state <= RD_RESP;
                    end
                    else if (cfg_rvalid) begin
                        rdata_q  <= cfg_rdata;
                        rresp_q  <= cfg_rresp;
                        rd_state <= RD_RESP;
                    end
                end

                RD_RESP: begin
                    if (s_axi_rvalid && s_axi_rready)
                        rd_state <= RD_IDLE;
                end

                default: begin
                    rd_state <= RD_IDLE;
                end

            endcase
        end
    end

endmodule
*/
























`timescale 1ns/1ps

// -----------------------------------------------------------------------------
// AXI4 USB Host Wrapper with CDC
//
// AXI4 clock domain : aclk       (400 MHz in the SoC)
// USB clock domain  : usb_clk    (250 MHz in the SoC)
//
// The existing usbh_host is NOT modified.
//
// AXI -> USB:
//   AXI transaction -> command bundle -> Async FIFO -> USB cfg_*
//
// USB -> AXI:
//   cfg_* response -> response Async FIFO -> AXI response channel
//
// The UTMI interface remains entirely in the USB clock domain.
// -----------------------------------------------------------------------------

module axi4_usb_slave #(
    parameter int ADDR_WIDTH   = 32,
    parameter int DATA_WIDTH   = 32,
    parameter int ID_WIDTH     = 4,
    parameter int USB_CLK_FREQ = 48000000,
    parameter int FIFO_DEPTH   = 8
) (
    input  logic                     aclk,
    input  logic                     aresetn,

    // USB controller clock domain
    input  logic                     usb_clk,
    input  logic                     usb_resetn,

    // AXI4 Write Address Channel
    input  logic [ID_WIDTH-1:0]      s_axi_awid,
    input  logic [ADDR_WIDTH-1:0]    s_axi_awaddr,
    input  logic [7:0]               s_axi_awlen,
    input  logic [2:0]               s_axi_awsize,
    input  logic [1:0]               s_axi_awburst,
    input  logic                     s_axi_awlock,
    input  logic [3:0]               s_axi_awcache,
    input  logic [2:0]               s_axi_awprot,
    input  logic [3:0]               s_axi_awqos,
    input  logic                     s_axi_awvalid,
    output logic                     s_axi_awready,

    // AXI4 Write Data Channel
    input  logic [DATA_WIDTH-1:0]    s_axi_wdata,
    input  logic [DATA_WIDTH/8-1:0]  s_axi_wstrb,
    input  logic                     s_axi_wlast,
    input  logic                     s_axi_wvalid,
    output logic                     s_axi_wready,

    // AXI4 Write Response Channel
    output logic [ID_WIDTH-1:0]      s_axi_bid,
    output logic [1:0]               s_axi_bresp,
    output logic                     s_axi_bvalid,
    input  logic                     s_axi_bready,

    // AXI4 Read Address Channel
    input  logic [ID_WIDTH-1:0]      s_axi_arid,
    input logic [ADDR_WIDTH-1:0]     s_axi_araddr,
    input logic [7:0]                s_axi_arlen,
    input logic [2:0]                s_axi_arsize,
    input logic [1:0]                s_axi_arburst,
    input logic                     s_axi_arlock,
    input logic [3:0]               s_axi_arcache,
    input logic [2:0]               s_axi_arprot,
    input logic [3:0]               s_axi_arqos,
    input logic                     s_axi_arvalid,
    output logic                     s_axi_arready,

    // AXI4 Read Data Channel
    output logic [ID_WIDTH-1:0]      s_axi_rid,
    output logic [DATA_WIDTH-1:0]    s_axi_rdata,
    output logic [1:0]               s_axi_rresp,
    output logic                     s_axi_rlast,
    output logic                     s_axi_rvalid,
    input logic                     s_axi_rready,

    // USB UTMI Interface
    input  logic [7:0]               utmi_data_in_i,
    input  logic                     utmi_txready_i,
    input  logic                     utmi_rxvalid_i,
    input  logic                     utmi_rxactive_i,
    input  logic                     utmi_rxerror_i,
    input  logic [1:0]               utmi_linestate_i,

    output logic [7:0]               utmi_data_out_o,
    output logic                     utmi_txvalid_o,
    output logic [1:0]               utmi_op_mode_o,
    output logic [1:0]               utmi_xcvrselect_o,
    output logic                     utmi_termselect_o,
    output logic                     utmi_dppulldown_o,
    output logic                     utmi_dmpulldown_o,

    // USB interrupt
    output logic                     intr_o
);

    localparam logic [1:0] RESP_OKAY   = 2'b00;
    localparam logic [1:0] RESP_DECERR = 2'b11;

    // -------------------------------------------------------------------------
    // FIFO bundle definitions
    //
    // Command FIFO:
    //   {AXI ID, WRITE/READ, address, write data, write strobe}
    //
    // Write response FIFO:
    //   {AXI ID, BRESP}
    //
    // Read response FIFO:
    //   {AXI ID, RRESP, RDATA}
    // -------------------------------------------------------------------------
    localparam int CMD_WIDTH  = ID_WIDTH + 1 + ADDR_WIDTH + DATA_WIDTH + (DATA_WIDTH/8);
    localparam int BRS_WIDTH  = ID_WIDTH + 2;
    localparam int RRS_WIDTH  = ID_WIDTH + 2 + DATA_WIDTH;

    // -------------------------------------------------------------------------
    // Existing USB Host cfg_* interface
    // These signals now belong to the USB clock domain.
    // -------------------------------------------------------------------------
    logic        cfg_awvalid;
    logic [31:0] cfg_awaddr;
    logic        cfg_wvalid;
    logic [31:0] cfg_wdata;
    logic        cfg_bready;

    logic        cfg_arvalid;
    logic [31:0] cfg_araddr;
    logic        cfg_rready;

    logic        cfg_awready;
    logic        cfg_wready;
    logic        cfg_bvalid;
    logic [1:0]  cfg_bresp;

    logic        cfg_arready;
    logic        cfg_rvalid;
    logic [31:0] cfg_rdata;
    logic [1:0]  cfg_rresp;

    logic usb_intr;

    // -------------------------------------------------------------------------
    // Existing USB Host -- KEEP usbh_host unchanged.
    // It now runs from the dedicated 250 MHz USB clock.
    // -------------------------------------------------------------------------
    usbh_host #(
        .USB_CLK_FREQ(USB_CLK_FREQ)
    ) u_usbh_host (
        .clk_i                  (usb_clk),
        .rst_i                  (~usb_resetn),

        .cfg_awvalid_i          (cfg_awvalid),
        .cfg_awaddr_i           (cfg_awaddr),
        .cfg_wvalid_i           (cfg_wvalid),
        .cfg_wdata_i            (cfg_wdata),
        .cfg_bready_i           (cfg_bready),

        .cfg_arvalid_i          (cfg_arvalid),
        .cfg_araddr_i           (cfg_araddr),
        .cfg_rready_i           (cfg_rready),

        .cfg_awready_o          (cfg_awready),
        .cfg_wready_o           (cfg_wready),
        .cfg_bvalid_o           (cfg_bvalid),
        .cfg_bresp_o             (cfg_bresp),

        .cfg_arready_o           (cfg_arready),
        .cfg_rvalid_o            (cfg_rvalid),
        .cfg_rdata_o             (cfg_rdata),
        .cfg_rresp_o             (cfg_rresp),

        .intr_o                  (usb_intr),

        .utmi_data_in_i          (utmi_data_in_i),
        .utmi_txready_i          (utmi_txready_i),
        .utmi_rxvalid_i          (utmi_rxvalid_i),
        .utmi_rxactive_i         (utmi_rxactive_i),
        .utmi_rxerror_i          (utmi_rxerror_i),
        .utmi_linestate_i        (utmi_linestate_i),

        .utmi_data_out_o         (utmi_data_out_o),
        .utmi_txvalid_o          (utmi_txvalid_o),
        .utmi_op_mode_o          (utmi_op_mode_o),
        .utmi_xcvrselect_o       (utmi_xcvrselect_o),
        .utmi_termselect_o       (utmi_termselect_o),
        .utmi_dppulldown_o       (utmi_dppulldown_o),
        .utmi_dmpulldown_o       (utmi_dmpulldown_o)
    );

    // -------------------------------------------------------------------------
    // AXI DOMAIN
    // -------------------------------------------------------------------------

    typedef enum logic [2:0] {
        WR_IDLE,
        WR_WAIT_W,
        WR_FIFO,
        WR_WAIT_RESP,
        WR_RESP
    } wr_state_t;

    typedef enum logic [2:0] {
        RD_IDLE,
        RD_FIFO,
        RD_WAIT_RESP,
        RD_RESP
    } rd_state_t;

    wr_state_t wr_state;
    rd_state_t rd_state;

    logic [ID_WIDTH-1:0] awid_q;
    logic [ADDR_WIDTH-1:0] awaddr_q;
    logic [7:0] awlen_q;
    logic [2:0] awsize_q;
    logic [1:0] awburst_q;
    logic aw_unsupported_q;

    logic [DATA_WIDTH-1:0] wdata_q;
    logic [DATA_WIDTH/8-1:0] wstrb_q;

    logic [ID_WIDTH-1:0] arid_q;
    logic [ADDR_WIDTH-1:0] araddr_q;
    logic [7:0] arlen_q;
    logic [2:0] arsize_q;
    logic [1:0] arburst_q;
    logic rd_unsupported_q;

    logic [ID_WIDTH-1:0] bid_q;
    logic [1:0] bresp_q;

    logic [ID_WIDTH-1:0] rid_q;
    logic [DATA_WIDTH-1:0] rdata_q;
    logic [1:0] rresp_q;
     // USB host register interface is 32-bit and single-beat.
    wire wr_supported =
        (DATA_WIDTH == 32) &&
        (awlen_q == 8'd0) &&
        (awsize_q == 3'd2) &&
        ((awburst_q == 2'b00) || (awburst_q == 2'b01));

    wire rd_supported =
        (DATA_WIDTH == 32) &&
        (arlen_q == 8'd0) &&
        (arsize_q == 3'd2) &&
        ((arburst_q == 2'b00) || (arburst_q == 2'b01));

    // -------------------------------------------------------------------------
    // AXI -> USB command FIFO
    // -------------------------------------------------------------------------
    logic [CMD_WIDTH-1:0] cmd_fifo_in;
    logic [CMD_WIDTH-1:0] cmd_fifo_out;
    logic cmd_fifo_wr_en;
    logic cmd_fifo_rd_en;
    logic cmd_fifo_full;
    logic cmd_fifo_empty;

    // One FIFO write port is shared by read and write commands.
    // Write command has priority if both become ready in the same AXI cycle.
    wire wr_cmd_request = (wr_state == WR_FIFO) && wr_supported;
    wire rd_cmd_request = (rd_state == RD_FIFO) && rd_supported;

    wire cmd_push_write = wr_cmd_request && !cmd_fifo_full;
    wire cmd_push_read  = !cmd_push_write && rd_cmd_request && !cmd_fifo_full;

    assign cmd_fifo_wr_en = cmd_push_write || cmd_push_read;

    assign cmd_fifo_in =
        cmd_push_write ?
        {awid_q, 1'b1, awaddr_q, wdata_q, wstrb_q} :
        {arid_q, 1'b0, araddr_q, {DATA_WIDTH{1'b0}},
         {(DATA_WIDTH/8){1'b0}}};

    asynchronous_fifo #(
        .DEPTH(FIFO_DEPTH),
        .DATA_WIDTH(CMD_WIDTH)
    ) u_cmd_fifo (
        .wclk     (aclk),
        .wrst_n   (aresetn),
        .rclk     (usb_clk),
        .rrst_n   (usb_resetn),
        .w_en     (cmd_fifo_wr_en),
        .r_en     (cmd_fifo_rd_en),
        .data_in  (cmd_fifo_in),
        .data_out (cmd_fifo_out),
        .full     (cmd_fifo_full),
        .empty    (cmd_fifo_empty)
    );

    // -------------------------------------------------------------------------
    // USB -> AXI write response FIFO
    // -------------------------------------------------------------------------
    logic [BRS_WIDTH-1:0] br_fifo_in;
    logic [BRS_WIDTH-1:0] br_fifo_out;
    logic br_fifo_wr_en;
    logic br_fifo_rd_en;
    logic br_fifo_full;
    logic br_fifo_empty;

    asynchronous_fifo #(
        .DEPTH(FIFO_DEPTH),
        .DATA_WIDTH(BRS_WIDTH)
    ) u_bresp_fifo (
        .wclk     (usb_clk),
        .wrst_n   (usb_resetn),
        .rclk     (aclk),
        .rrst_n   (aresetn),
        .w_en     (br_fifo_wr_en),
        .r_en     (br_fifo_rd_en),
        .data_in  (br_fifo_in),
        .data_out (br_fifo_out),
        .full     (br_fifo_full),
        .empty    (br_fifo_empty)
    );

    // -------------------------------------------------------------------------
    // USB -> AXI read response FIFO
    // -------------------------------------------------------------------------
    logic [RRS_WIDTH-1:0] rr_fifo_in;
    logic [RRS_WIDTH-1:0] rr_fifo_out;
    logic rr_fifo_wr_en;
    logic rr_fifo_rd_en;
    logic rr_fifo_full;
    logic rr_fifo_empty;

    asynchronous_fifo #(
        .DEPTH(FIFO_DEPTH),
        .DATA_WIDTH(RRS_WIDTH)
    ) u_rresp_fifo (
        .wclk     (usb_clk),
        .wrst_n   (usb_resetn),
        .rclk     (aclk),
        .rrst_n   (aresetn),
        .w_en     (rr_fifo_wr_en),
        .r_en     (rr_fifo_rd_en),
        .data_in  (rr_fifo_in),
        .data_out (rr_fifo_out),
        .full     (rr_fifo_full),
        .empty    (rr_fifo_empty)
    );

    // AXI outputs.
    assign s_axi_awready = (wr_state == WR_IDLE);
    assign s_axi_wready  = (wr_state == WR_WAIT_W);
    assign s_axi_bvalid  = (wr_state == WR_RESP);
    assign s_axi_bid     = bid_q;
    assign s_axi_bresp   = bresp_q;

    assign s_axi_arready = (rd_state == RD_IDLE);
    assign s_axi_rvalid  = (rd_state == RD_RESP);
    assign s_axi_rid     = rid_q;
    assign s_axi_rdata   = rdata_q;
    assign s_axi_rresp   = rresp_q;
    assign s_axi_rlast   = (rd_state == RD_RESP);

    // -------------------------------------------------------------------------
    // AXI write FSM
    // -------------------------------------------------------------------------
    always_ff @(posedge aclk) begin
        if (!aresetn) begin
            wr_state         <= WR_IDLE;
            awid_q           <= '0;
            awaddr_q         <= '0;
            awlen_q          <= '0;
            awsize_q         <= '0;
            awburst_q        <= '0;
            aw_unsupported_q <= 1'b0;
            wdata_q          <= '0;
            wstrb_q          <= '0;
            bid_q            <= '0;
            bresp_q          <= RESP_OKAY;
        end
        else begin
            case (wr_state)

                WR_IDLE: begin
                    if (s_axi_awvalid && s_axi_awready) begin
                        awid_q   <= s_axi_awid;
                        awaddr_q <= s_axi_awaddr;
                        awlen_q  <= s_axi_awlen;
                        awsize_q <= s_axi_awsize;
                        awburst_q <= s_axi_awburst;

                        aw_unsupported_q <=
                            (DATA_WIDTH != 32) ||
                            (s_axi_awlen != 8'd0) ||
                            (s_axi_awsize != 3'd2) ||
                            ((s_axi_awburst != 2'b00) &&
                             (s_axi_awburst != 2'b01));

                        wr_state <= WR_WAIT_W;
                    end
                end

                WR_WAIT_W: begin
                    if (s_axi_wvalid && s_axi_wready) begin
                        wdata_q <= s_axi_wdata;
                        wstrb_q <= s_axi_wstrb;

                        if (aw_unsupported_q) begin
                            if (s_axi_wlast) begin
                                bid_q    <= awid_q;
                                bresp_q  <= RESP_DECERR;
                                wr_state <= WR_RESP;
                            end
                        end
                        else if (s_axi_wlast) begin
                            wr_state <= WR_FIFO;
                        end
                        else begin
                            bid_q    <= awid_q;
                            bresp_q  <= RESP_DECERR;
                            wr_state <= WR_RESP;
                        end
                    end
                end

                WR_FIFO: begin
                    if (cmd_push_write) begin
                        wr_state <= WR_WAIT_RESP;
                    end
                end

                WR_WAIT_RESP: begin
                    if (baxi_state == BAXI_LOAD)
                        wr_state <= WR_RESP;
                end

                WR_RESP: begin
                    if (s_axi_bvalid && s_axi_bready)
                        wr_state <= WR_IDLE;
                end

                default: wr_state <= WR_IDLE;

            endcase
        end
    end

    // -------------------------------------------------------------------------
    // AXI read FSM
    // -------------------------------------------------------------------------
    always_ff @(posedge aclk) begin
        if (!aresetn) begin
            rd_state         <= RD_IDLE;
            arid_q           <= '0;
            araddr_q         <= '0;
            arlen_q          <= '0;
            arsize_q         <= '0;
            arburst_q        <= '0;
            rd_unsupported_q <= 1'b0;
            rid_q            <= '0;
            rdata_q          <= '0;
            rresp_q          <= RESP_OKAY;
        end
        else begin
            case (rd_state)

                RD_IDLE: begin
                    if (s_axi_arvalid && s_axi_arready) begin
                        arid_q    <= s_axi_arid;
                        araddr_q  <= s_axi_araddr;
                        arlen_q   <= s_axi_arlen;
                        arsize_q  <= s_axi_arsize;
                        arburst_q <= s_axi_arburst;

                        rd_unsupported_q <=
                            (DATA_WIDTH != 32) ||
                            (s_axi_arlen != 8'd0) ||
                            (s_axi_arsize != 3'd2) ||
                            ((s_axi_arburst != 2'b00) &&
                             (s_axi_arburst != 2'b01));

                        rd_state <= RD_FIFO;
                    end
                end

                RD_FIFO: begin
                    if (rd_unsupported_q) begin
                        rid_q    <= arid_q;
                        rdata_q  <= '0;
                        rresp_q  <= RESP_DECERR;
                        rd_state <= RD_RESP;
                    end
                    else if (cmd_push_read) begin
                        rd_state <= RD_WAIT_RESP;
                    end
                end

                RD_WAIT_RESP: begin
                    if (raxi_state == RAXI_LOAD)
                        rd_state <= RD_RESP;
                end

                RD_RESP: begin
                    if (s_axi_rvalid && s_axi_rready)
                        rd_state <= RD_IDLE;
                end

                default: rd_state <= RD_IDLE;

            endcase
        end
    end

    // -------------------------------------------------------------------------
    // AXI response FIFO read side.
    //
    // FIFO has registered data_out, so:
    //   IDLE -> assert rd_en for one AXI cycle
    //   LOAD -> capture data_out on the following cycle
    // -------------------------------------------------------------------------
    typedef enum logic [1:0] {
        BAXI_IDLE,
        BAXI_LOAD
    } baxi_state_t;

    typedef enum logic [1:0] {
        RAXI_IDLE,
        RAXI_LOAD
    } raxi_state_t;

    baxi_state_t baxi_state;
    raxi_state_t raxi_state;

    assign br_fifo_rd_en = (baxi_state == BAXI_IDLE) &&
                           (wr_state == WR_WAIT_RESP) &&
                           !br_fifo_empty;

    assign rr_fifo_rd_en = (raxi_state == RAXI_IDLE) &&
                           (rd_state == RD_WAIT_RESP) &&
                           !rr_fifo_empty;

    always_ff @(posedge aclk) begin
        if (!aresetn) begin
            baxi_state <= BAXI_IDLE;
        end
        else begin
            case (baxi_state)
                BAXI_IDLE: begin
                    if (wr_state == WR_WAIT_RESP && !br_fifo_empty)
                        baxi_state <= BAXI_LOAD;
                end

                BAXI_LOAD: begin
                    bid_q   <= br_fifo_out[BRS_WIDTH-1:2];
                    bresp_q <= br_fifo_out[1:0];
                    baxi_state <= BAXI_IDLE;
                end

                default: baxi_state <= BAXI_IDLE;
            endcase
        end
    end

    always_ff @(posedge aclk) begin
        if (!aresetn) begin
            raxi_state <= RAXI_IDLE;
        end
        else begin
            case (raxi_state)
                RAXI_IDLE: begin
                    if (rd_state == RD_WAIT_RESP && !rr_fifo_empty)
                        raxi_state <= RAXI_LOAD;
                end

                RAXI_LOAD: begin
                    rid_q   <= rr_fifo_out[RRS_WIDTH-1 -: ID_WIDTH];
                    rresp_q <= rr_fifo_out[DATA_WIDTH+1:DATA_WIDTH];
                    rdata_q <= rr_fifo_out[DATA_WIDTH-1:0];
                    raxi_state <= RAXI_IDLE;
                end

                default: raxi_state <= RAXI_IDLE;
            endcase
        end
    end

    // -------------------------------------------------------------------------
    // USB CLOCK DOMAIN
    // -------------------------------------------------------------------------

    typedef enum logic [2:0] {
        USB_CMD_IDLE,
        USB_CMD_LOAD,
        USB_WRITE,
        USB_READ
    } usb_cfg_state_t;

    usb_cfg_state_t usb_cfg_state;

    logic [ID_WIDTH-1:0] usb_cmd_id_q;
    logic                 usb_cmd_write_q;
    logic [ADDR_WIDTH-1:0] usb_cmd_addr_q;
    logic [DATA_WIDTH-1:0] usb_cmd_wdata_q;
    logic [DATA_WIDTH/8-1:0] usb_cmd_wstrb_q;

    assign cmd_fifo_rd_en = (usb_cfg_state == USB_CMD_IDLE) &&
                            !cmd_fifo_empty;

    assign cfg_awvalid = (usb_cfg_state == USB_WRITE);
    assign cfg_awaddr  = usb_cmd_addr_q[31:0];
    assign cfg_wvalid  = (usb_cfg_state == USB_WRITE);
    assign cfg_wdata   = usb_cmd_wdata_q[31:0];
    assign cfg_bready  = (usb_cfg_state == USB_WRITE) && !br_fifo_full;

    assign cfg_arvalid = (usb_cfg_state == USB_READ);
    assign cfg_araddr  = usb_cmd_addr_q[31:0];
    assign cfg_rready  = (usb_cfg_state == USB_READ) && !rr_fifo_full;

    assign br_fifo_wr_en = (usb_cfg_state == USB_WRITE) &&
                           cfg_bvalid && !br_fifo_full;

    assign br_fifo_in = {
        usb_cmd_id_q,
        (br_fifo_wr_en ? cfg_bresp : RESP_OKAY)
    };

    assign rr_fifo_wr_en = (usb_cfg_state == USB_READ) &&
                           cfg_rvalid && !rr_fifo_full;

    assign rr_fifo_in = {
        usb_cmd_id_q,
        (rr_fifo_wr_en ? cfg_rresp : RESP_OKAY),
        (rr_fifo_wr_en ? cfg_rdata : 32'b0)
    };

    always_ff @(posedge usb_clk) begin
        if (!usb_resetn) begin
            usb_cfg_state   <= USB_CMD_IDLE;
            usb_cmd_id_q    <= '0;
            usb_cmd_write_q <= 1'b0;
            usb_cmd_addr_q  <= '0;
            usb_cmd_wdata_q <= '0;
            usb_cmd_wstrb_q <= '0;
        end
        else begin
            case (usb_cfg_state)

                USB_CMD_IDLE: begin
                    if (!cmd_fifo_empty)
                        usb_cfg_state <= USB_CMD_LOAD;
                end

                USB_CMD_LOAD: begin
                    usb_cmd_id_q    <= cmd_fifo_out[CMD_WIDTH-1 -: ID_WIDTH];
                    usb_cmd_write_q <= cmd_fifo_out[CMD_WIDTH-ID_WIDTH-1];
                    usb_cmd_addr_q  <= cmd_fifo_out[
                        (DATA_WIDTH + (DATA_WIDTH/8) + ADDR_WIDTH)-1 -: ADDR_WIDTH
                    ];
                    usb_cmd_wdata_q <= cmd_fifo_out[(DATA_WIDTH + (DATA_WIDTH/8))-1 -: DATA_WIDTH];
                    usb_cmd_wstrb_q <= cmd_fifo_out[(DATA_WIDTH/8)-1:0];

                    if (cmd_fifo_out[CMD_WIDTH-ID_WIDTH-1])
                        usb_cfg_state <= USB_WRITE;
                    else
                        usb_cfg_state <= USB_READ;
                end

                USB_WRITE: begin
                    if (cfg_bvalid && !br_fifo_full)
                        usb_cfg_state <= USB_CMD_IDLE;
                end

                USB_READ: begin
                    if (cfg_rvalid && !rr_fifo_full)
                        usb_cfg_state <= USB_CMD_IDLE;
                end

                default: usb_cfg_state <= USB_CMD_IDLE;

            endcase
        end
    end

    // -------------------------------------------------------------------------
    // Interrupt CDC: USB clock -> AXI clock.
    //
    // This is safe if usb_intr is a level-type interrupt. If usbh_host emits
    // a pulse shorter than an AXI clock period, use a toggle/event synchronizer
    // instead.
    // -------------------------------------------------------------------------
    (* ASYNC_REG = "TRUE" *) logic intr_sync1;
    (* ASYNC_REG = "TRUE" *) logic intr_sync2;

    always_ff @(posedge aclk) begin
        if (!aresetn) begin
            intr_sync1 <= 1'b0;
            intr_sync2 <= 1'b0;
        end
        else begin
            intr_sync1 <= usb_intr;
            intr_sync2 <= intr_sync1;
        end
    end

    assign intr_o = intr_sync2;

endmodule


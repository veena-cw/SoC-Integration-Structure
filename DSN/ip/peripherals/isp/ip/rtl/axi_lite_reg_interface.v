`timescale 1ns/1ps
// AXI4-Lite register block.
// Register map: 00 CONTROL(WO pulses: [0]start [1]abort [2]soft_reset)
//   04 STATUS(RO [0]busy [1]done)  08 CONFIG([1:0]pattern [3:2]filter [4]enable)
//   0C IMAGE_SIZE([15:0]w [31:16]h) 10 RAW_BASE  14 IRQ_ENABLE
//   18 IRQ_STATUS(W1C [0]frame_done [1]error)  1C ERROR_STATUS(W1C [3:0])
//   20 STRIDE(RW bytes)  24 FORMAT(RW [3:0]in [7:4]out; 0=RAW8/RGB888)
//   28 AXI_CFG(RW [7:0]burst_len [15:8]outstanding [19:16]qos)
//   2C FRAME_COUNT(RO, write-any or soft-reset clears)
//   30 DEBUG_STATUS(sticky, W1C [5:0])
module axi_lite_reg_interface #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32
)(
    input  wire                    clk,
    input  wire                    reset_n,

    input  wire [ADDR_WIDTH-1:0]   s_axi_awaddr,
    input  wire                    s_axi_awvalid,
    output wire                    s_axi_awready,

    input  wire [DATA_WIDTH-1:0]   s_axi_wdata,
    input  wire [DATA_WIDTH/8-1:0] s_axi_wstrb,
    input  wire                    s_axi_wvalid,
    output wire                    s_axi_wready,

    output reg  [1:0]              s_axi_bresp,
    output reg                     s_axi_bvalid,
    input  wire                    s_axi_bready,

    input  wire [ADDR_WIDTH-1:0]   s_axi_araddr,
    input  wire                    s_axi_arvalid,
    output wire                    s_axi_arready,

    output reg  [DATA_WIDTH-1:0]   s_axi_rdata,
    output reg  [1:0]              s_axi_rresp,
    output reg                     s_axi_rvalid,
    input  wire                    s_axi_rready,

    output reg                     isp_start_o,
    output reg                     isp_abort_o,
    output reg                     isp_soft_reset_o,

    output wire [1:0]              sensor_pattern_o,
    output wire [1:0]              filter_type_o,
    output wire                    filter_enable_o,
    output wire [15:0]             image_width_o,
    output wire [15:0]             image_height_o,
    output wire [31:0]             raw_base_addr_o,
    output wire [31:0]             stride_o,
    output wire [7:0]              format_o,
    output wire [7:0]              axi_burst_len_o,
    output wire [7:0]              axi_outstanding_o,
    output wire [3:0]              axi_qos_o,

    input  wire                    isp_busy_i,
    input  wire                    isp_done_i,
    input  wire                    frame_done_i,
    input  wire                    error_irq_event_i,
    input  wire [3:0]              error_events_i,
    input  wire [5:0]              debug_events_i,

    output wire                    isp_irq_o
);
    localparam ISP_CONTROL   = 8'h00;
    localparam ISP_STATUS    = 8'h04;
    localparam ISP_CONFIG    = 8'h08;
    localparam IMAGE_SIZE    = 8'h0C;
    localparam RAW_BASE_ADDR = 8'h10;
    localparam IRQ_ENABLE    = 8'h14;
    localparam IRQ_STATUS    = 8'h18;
    localparam ERROR_STATUS  = 8'h1C;
    localparam STRIDE        = 8'h20;
    localparam FORMAT        = 8'h24;
    localparam AXI_CFG       = 8'h28;
    localparam FRAME_COUNT   = 8'h2C;
    localparam DEBUG_STATUS  = 8'h30;

    reg [31:0] config_reg, image_size_reg, raw_base_addr_reg, irq_enable_reg;
    reg [1:0]  irq_status_reg;
    reg [3:0]  error_status_reg;
    reg [31:0] stride_reg, format_reg, axi_cfg_reg, frame_count_reg;
    reg [5:0]  debug_status_reg;

    reg [ADDR_WIDTH-1:0]     awaddr_reg;
    reg                      aw_hold;
    reg [DATA_WIDTH-1:0]     wdata_reg;
    reg [DATA_WIDTH/8-1:0]   wstrb_reg;
    reg                      w_hold;
    integer i;

    assign s_axi_awready = !aw_hold && !s_axi_bvalid;
    assign s_axi_wready  = !w_hold  && !s_axi_bvalid;
    assign s_axi_arready = !s_axi_rvalid;

    assign sensor_pattern_o = config_reg[1:0];
    assign filter_type_o    = config_reg[3:2];
    assign filter_enable_o  = config_reg[4];
    assign image_width_o    = image_size_reg[15:0];
    assign image_height_o   = image_size_reg[31:16];
    assign raw_base_addr_o  = raw_base_addr_reg;
    assign stride_o         = stride_reg;
    assign format_o         = format_reg[7:0];
    assign axi_burst_len_o  = axi_cfg_reg[7:0];
    assign axi_outstanding_o= axi_cfg_reg[15:8];
    assign axi_qos_o        = axi_cfg_reg[19:16];

    assign isp_irq_o = (irq_status_reg[0] & irq_enable_reg[0]) |
                       (irq_status_reg[1] & irq_enable_reg[1]);

    wire wr_fire = aw_hold && w_hold && !s_axi_bvalid;

    // ---- AW / W capture ----
    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            awaddr_reg <= 0; aw_hold <= 0;
            wdata_reg  <= 0; wstrb_reg <= 0; w_hold <= 0;
        end else begin
            if (s_axi_awvalid && s_axi_awready) begin
                awaddr_reg <= s_axi_awaddr; aw_hold <= 1'b1;
            end
            if (s_axi_wvalid && s_axi_wready) begin
                wdata_reg <= s_axi_wdata; wstrb_reg <= s_axi_wstrb; w_hold <= 1'b1;
            end
            if (wr_fire) begin aw_hold <= 1'b0; w_hold <= 1'b0; end
        end
    end

    // ---- register write / status ----
    // FIX: W1C clear and hardware set are merged in ONE expression
    // (the original "error_status_reg <= error_status_reg | events" ran after
    // the clear and overwrote it, so ERROR_STATUS could never be cleared).
    reg [1:0] irq_clr;
    reg [3:0] err_clr;
    reg [5:0] dbg_clr;
    reg       fc_clr;

    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            config_reg <= 0; image_size_reg <= 0; raw_base_addr_reg <= 0; irq_enable_reg <= 0;
            irq_status_reg <= 0; error_status_reg <= 0;
            stride_reg <= 0; format_reg <= 0; frame_count_reg <= 0; debug_status_reg <= 0;
            axi_cfg_reg <= 32'h0000_040F;   // burst 16 beats, 4 outstanding, QoS 0
            isp_start_o <= 0; isp_abort_o <= 0; isp_soft_reset_o <= 0;
            s_axi_bvalid <= 0; s_axi_bresp <= 2'b00;
        end else begin
            isp_start_o <= 0; isp_abort_o <= 0; isp_soft_reset_o <= 0;
            irq_clr = 2'b00;  err_clr = 4'h0;  dbg_clr = 6'h0;  fc_clr = 1'b0;

            if (s_axi_bvalid && s_axi_bready) s_axi_bvalid <= 0;

            if (wr_fire) begin
                s_axi_bvalid <= 1'b1;
                s_axi_bresp  <= 2'b00;
                case (awaddr_reg[7:0])
                    ISP_CONTROL: if (wstrb_reg[0]) begin
                        isp_start_o      <= wdata_reg[0];
                        isp_abort_o      <= wdata_reg[1];
                        isp_soft_reset_o <= wdata_reg[2];
                    end
                    ISP_CONFIG:    for (i=0;i<4;i=i+1) if (wstrb_reg[i]) config_reg[i*8+:8]        <= wdata_reg[i*8+:8];
                    IMAGE_SIZE:    for (i=0;i<4;i=i+1) if (wstrb_reg[i]) image_size_reg[i*8+:8]    <= wdata_reg[i*8+:8];
                    RAW_BASE_ADDR: for (i=0;i<4;i=i+1) if (wstrb_reg[i]) raw_base_addr_reg[i*8+:8] <= wdata_reg[i*8+:8];
                    IRQ_ENABLE:    for (i=0;i<4;i=i+1) if (wstrb_reg[i]) irq_enable_reg[i*8+:8]    <= wdata_reg[i*8+:8];
                    IRQ_STATUS:    if (wstrb_reg[0]) irq_clr = wdata_reg[1:0];
                    ERROR_STATUS:  if (wstrb_reg[0]) err_clr = wdata_reg[3:0];
                    STRIDE:        for (i=0;i<4;i=i+1) if (wstrb_reg[i]) stride_reg[i*8+:8]  <= wdata_reg[i*8+:8];
                    FORMAT:        for (i=0;i<4;i=i+1) if (wstrb_reg[i]) format_reg[i*8+:8]  <= wdata_reg[i*8+:8];
                    AXI_CFG:       for (i=0;i<4;i=i+1) if (wstrb_reg[i]) axi_cfg_reg[i*8+:8] <= wdata_reg[i*8+:8];
                    FRAME_COUNT:   fc_clr = 1'b1;                       // any write clears the counter
                    DEBUG_STATUS:  if (wstrb_reg[0]) dbg_clr = wdata_reg[5:0];
                    default:       s_axi_bresp <= 2'b10;   // SLVERR (incl. write to RO STATUS)
                endcase
            end

            // set has priority over clear
            irq_status_reg[0] <= (irq_status_reg[0] & ~irq_clr[0]) | frame_done_i;
            irq_status_reg[1] <= (irq_status_reg[1] & ~irq_clr[1]) | error_irq_event_i;
            error_status_reg  <= (error_status_reg  & ~err_clr)    | error_events_i;
            debug_status_reg  <= (debug_status_reg  & ~dbg_clr)    | debug_events_i;
            if (fc_clr || isp_soft_reset_o) frame_count_reg <= 32'd0;
            else if (frame_done_i)          frame_count_reg <= frame_count_reg + 1'b1;
        end
    end

    // ---- read ----
    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            s_axi_rdata <= 0; s_axi_rresp <= 2'b00; s_axi_rvalid <= 0;
        end else begin
            if (s_axi_rvalid && s_axi_rready) s_axi_rvalid <= 0;
            if (s_axi_arvalid && s_axi_arready) begin
                s_axi_rvalid <= 1'b1;
                s_axi_rresp  <= 2'b00;
                case (s_axi_araddr[7:0])
                    ISP_CONTROL:   s_axi_rdata <= 32'h0;
                    ISP_STATUS:    s_axi_rdata <= {30'b0, isp_done_i, isp_busy_i};
                    ISP_CONFIG:    s_axi_rdata <= config_reg;
                    IMAGE_SIZE:    s_axi_rdata <= image_size_reg;
                    RAW_BASE_ADDR: s_axi_rdata <= raw_base_addr_reg;
                    IRQ_ENABLE:    s_axi_rdata <= irq_enable_reg;
                    IRQ_STATUS:    s_axi_rdata <= {30'b0, irq_status_reg};
                    ERROR_STATUS:  s_axi_rdata <= {28'b0, error_status_reg};
                    STRIDE:        s_axi_rdata <= stride_reg;
                    FORMAT:        s_axi_rdata <= format_reg;
                    AXI_CFG:       s_axi_rdata <= axi_cfg_reg;
                    FRAME_COUNT:   s_axi_rdata <= frame_count_reg;
                    DEBUG_STATUS:  s_axi_rdata <= {26'b0, debug_status_reg};
                    default: begin s_axi_rdata <= 32'h0; s_axi_rresp <= 2'b10; end
                endcase
            end
        end
    end
endmodule

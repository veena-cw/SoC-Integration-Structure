
module axi_lite_dsi_reg_interface #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32
)(
    // AXI Interface Clock and Reset
    input  logic                         s_axi_aclk,
    input  logic                         s_axi_aresetn,

    // AXI Write Address Channel
    input  logic [ADDR_WIDTH-1:0]        s_axi_awaddr,
    input  logic                         s_axi_awvalid,
    output logic                         s_axi_awready,

    // AXI Write Data Channel
    input  logic [DATA_WIDTH-1:0]        s_axi_wdata,
    input  logic [(DATA_WIDTH/8)-1:0]    s_axi_wstrb,
    input  logic                         s_axi_wvalid,
    output logic                         s_axi_wready,

    // AXI Write Response Channel
    output logic [1:0]                   s_axi_bresp,
    output logic                         s_axi_bvalid,
    input  logic                         s_axi_bready,

    // AXI Read Address Channel
    input  logic [ADDR_WIDTH-1:0]        s_axi_araddr,
    input  logic                         s_axi_arvalid,
    output logic                         s_axi_arready,

    // AXI Read Data Channel
    output logic [DATA_WIDTH-1:0]        s_axi_rdata,
    output logic                         s_axi_rvalid,
    output logic [1:0]                   s_axi_rresp,
    input  logic                         s_axi_rready,

    // DSI Controller Interface
    output logic [31:0]                  dsi_control,
    output logic [31:0]                  dsi_status,
    output logic [31:0]                  dsi_escape_mode,
    output logic [31:0]                  dsi_error_status,

    input  logic [31:0]                  dsi_status_in,
    input  logic [31:0]                  dsi_error_in,

    input  logic                         txready_esc,
    input  logic                         txlpdt_esc,
    input  logic [3:0]                   txtrigger_esc,
    input  logic                         stopstate
);

    //==========================================================
    // REGISTER ADDRESS MAP
    //==========================================================

    localparam DSI_CONTROL_REG       = 32'h0000_0000;
    localparam DSI_STATUS_REG        = 32'h0000_0004;
    localparam DSI_ERROR_STS         = 32'h0000_0008;
    localparam DSI_ESCAPE_MODE_REG   = 32'h0000_000C;
    localparam DSI_ERROR_INJEC_REG   = 32'h0000_0010;


    //==========================================================
    // INTERNAL REGISTERS
    //==========================================================

    logic [31:0] control_reg;
    logic [31:0] status_reg;
    logic [31:0] escape_mode_reg;
    logic [31:0] error_reg;
    logic [31:0] error_injec_reg;

    logic [2:0] wr_en_dsi;

    //==========================================================
    // AXI WRITE CHANNEL STORAGE
    //==========================================================

    // Stores accepted write address
    logic [ADDR_WIDTH-1:0] awaddr_reg;

    // Stores accepted write data
    logic [DATA_WIDTH-1:0] wdata_reg;

    // Stores accepted write strobes
    logic [(DATA_WIDTH/8)-1:0] wstrb_reg;

    // Pending transaction flags
    logic aw_pending;
    logic w_pending;

    // Write transaction commit
    logic write_commit;

    // Write response decoder
    logic [1:0] write_resp;


    //==========================================================
    // AXI WRITE ADDRESS CHANNEL
    //==========================================================

    assign s_axi_awready = !aw_pending && !s_axi_bvalid;

    always_ff @(posedge s_axi_aclk or negedge s_axi_aresetn) begin

        if (!s_axi_aresetn) begin
            awaddr_reg <= '0;
            aw_pending <= 1'b0;
        end

        else begin

            if (s_axi_awvalid && s_axi_awready) begin

                awaddr_reg <= s_axi_awaddr;
                aw_pending <= 1'b1;

            end

            else if (write_commit) begin

                aw_pending <= 1'b0;

            end

        end

    end


    //==========================================================
    // AXI WRITE DATA CHANNEL
    //==========================================================

    assign s_axi_wready = !w_pending && !s_axi_bvalid;

    always_ff @(posedge s_axi_aclk or negedge s_axi_aresetn) begin

        if (!s_axi_aresetn) begin
            wdata_reg <= '0;
            wstrb_reg <= '0;
            w_pending <= 1'b0;
        end

        else begin

            if (s_axi_wvalid && s_axi_wready) begin

                wdata_reg <= s_axi_wdata;
                wstrb_reg <= s_axi_wstrb;

                w_pending <= 1'b1;

            end

            else if (write_commit) begin

                w_pending <= 1'b0;

            end

        end

    end


    //==========================================================
    // WRITE TRANSACTION COMMIT
    //==========================================================

    // Commit only after both address and data are accepted.

    assign write_commit = aw_pending &&
                          w_pending &&
                          !s_axi_bvalid;


    //==========================================================
    // WRITE RESPONSE DECODER
    //==========================================================

    always_comb begin

        case (awaddr_reg)

            // Writable registers
            DSI_CONTROL_REG,
            DSI_ESCAPE_MODE_REG,
            DSI_ERROR_INJEC_REG:

                write_resp = 2'b00; // OKAY


            // Read-only registers
            DSI_STATUS_REG,
            DSI_ERROR_STS:

                write_resp = 2'b10; // SLVERR


            // Unmapped addresses
            default:

                write_resp = 2'b11; // DECERR

        endcase

    end


    //==========================================================
    // DSI REGISTER WRITE ENABLE DECODER
    //==========================================================

    // wr_en_dsi[0] = DSI Control Register
    // wr_en_dsi[1] = DSI Escape Mode Register
    // wr_en_dsi[2] = DSI Error Injection Register

    assign wr_en_dsi = write_commit ? {

        (awaddr_reg == DSI_ERROR_INJEC_REG),
        (awaddr_reg == DSI_ESCAPE_MODE_REG),
        (awaddr_reg == DSI_CONTROL_REG)

    } : 3'b000;


    //==========================================================
    // DSI CONTROL REGISTER
    //==========================================================

    always_ff @(posedge s_axi_aclk or negedge s_axi_aresetn) begin

        if (!s_axi_aresetn) begin

            control_reg <= 32'h0000_0000;

        end

        else if (wr_en_dsi[0]) begin

            // Byte 0
            control_reg[7:0] <=
                (control_reg[7:0] & ~{8{wstrb_reg[0]}}) |
                (wdata_reg[7:0] & {8{wstrb_reg[0]}});

            // Byte 1
            control_reg[15:8] <=
                (control_reg[15:8] & ~{8{wstrb_reg[1]}}) |
                (wdata_reg[15:8] & {8{wstrb_reg[1]}});

            // Byte 2
            control_reg[23:16] <=
                (control_reg[23:16] & ~{8{wstrb_reg[2]}}) |
                (wdata_reg[23:16] & {8{wstrb_reg[2]}});

            // Byte 3
            if (wstrb_reg[3]) begin

                // Mutual exclusion handling
                control_reg[25:24] <= (&wdata_reg[25:24]) ?
                                      2'b01 : wdata_reg[25:24];

                control_reg[31:26] <= {1'b0, wdata_reg[30:26]};

            end

        end

        else begin

            // Stop-state handling
            control_reg[25:24] <= (!stopstate) ?
                                  control_reg[25:24] : 2'b00;

        end

    end


    //==========================================================
    // DSI ESCAPE MODE REGISTER
    //==========================================================

    always_ff @(posedge s_axi_aclk or negedge s_axi_aresetn) begin

        if (!s_axi_aresetn) begin

            escape_mode_reg <= 32'h0000_0000;

        end

        else if (wr_en_dsi[1]) begin

            escape_mode_reg[7:0] <=
                (escape_mode_reg[7:0] & ~{8{wstrb_reg[0]}}) |
                (wdata_reg[7:0] & {8{wstrb_reg[0]}});

            escape_mode_reg[15:8] <=
                (escape_mode_reg[15:8] & ~{8{wstrb_reg[1]}}) |
                (wdata_reg[15:8] & {8{wstrb_reg[1]}});

            escape_mode_reg[23:16] <=
                (escape_mode_reg[23:16] & ~{8{wstrb_reg[2]}}) |
                ({2'b00, wdata_reg[21:16]} & {8{wstrb_reg[2]}});

            escape_mode_reg[31:24] <= 8'h00; // Reserved

        end

        else begin

            // Hardware status updates
            escape_mode_reg[18] <= txready_esc ?
                                   (~txready_esc) : escape_mode_reg[18];

            escape_mode_reg[9] <= txlpdt_esc ?
                                  (~txlpdt_esc) : escape_mode_reg[9];

            escape_mode_reg[8:5] <=
                txtrigger_esc ^ escape_mode_reg[8:5];

        end

    end


    //==========================================================
    // DSI ERROR INJECTION REGISTER
    //==========================================================

    always_ff @(posedge s_axi_aclk or negedge s_axi_aresetn) begin

        if (!s_axi_aresetn) begin

            error_injec_reg <= 32'h0000_0000;

        end

        else if (wr_en_dsi[2]) begin

            error_injec_reg[7:0] <=
                (error_injec_reg[7:0] & ~{8{wstrb_reg[0]}}) |
                (wdata_reg[7:0] & {8{wstrb_reg[0]}});

            error_injec_reg[15:8] <=
                (error_injec_reg[15:8] & ~{8{wstrb_reg[1]}}) |
                (wdata_reg[15:8] & {8{wstrb_reg[1]}});

            error_injec_reg[23:16] <=
                (error_injec_reg[23:16] & ~{8{wstrb_reg[2]}}) |
                (wdata_reg[23:16] & {8{wstrb_reg[2]}});

            error_injec_reg[31:24] <=
                (error_injec_reg[31:24] & ~{8{wstrb_reg[3]}}) |
                ({7'h00, wdata_reg[24]} & {8{wstrb_reg[3]}});

        end

    end


    //==========================================================
    // AXI WRITE RESPONSE CHANNEL
    //==========================================================

    always_ff @(posedge s_axi_aclk or negedge s_axi_aresetn) begin

        if (!s_axi_aresetn) begin

            s_axi_bvalid <= 1'b0;
            s_axi_bresp  <= 2'b00;

        end

        else begin

            if (write_commit) begin

                s_axi_bvalid <= 1'b1;
                s_axi_bresp  <= write_resp;

            end

            else if (s_axi_bvalid && s_axi_bready) begin

                s_axi_bvalid <= 1'b0;

            end

        end

    end


    //==========================================================
    // AXI READ ADDRESS CHANNEL
    //==========================================================

    // Accept a new read address when no previous read response
    // is waiting for the master.

    assign s_axi_arready = !s_axi_rvalid;


    //==========================================================
    // DSI STATUS AND ERROR REGISTER UPDATE
    //==========================================================

    always_ff @(posedge s_axi_aclk or negedge s_axi_aresetn) begin

        if (!s_axi_aresetn) begin

            status_reg <= 32'h0000_0000;
            error_reg  <= 32'h0000_0000;

        end

        else begin

            status_reg <= dsi_status_in;
            error_reg  <= dsi_error_in;

        end

    end


    //==========================================================
    // AXI READ DATA AND RESPONSE CHANNEL
    //==========================================================

    always_ff @(posedge s_axi_aclk or negedge s_axi_aresetn) begin

        if (!s_axi_aresetn) begin

            s_axi_rdata  <= '0;
            s_axi_rresp  <= 2'b00;
            s_axi_rvalid <= 1'b0;

        end

        else begin

            if (s_axi_arvalid && s_axi_arready) begin

                s_axi_rvalid <= 1'b1;

                case (s_axi_araddr)

                    DSI_CONTROL_REG: begin

                        s_axi_rdata <= control_reg;
                        s_axi_rresp <= 2'b00; // OKAY

                    end

                    DSI_STATUS_REG: begin

                        s_axi_rdata <= status_reg;
                        s_axi_rresp <= 2'b00; // OKAY

                    end

                    DSI_ERROR_STS: begin

                        s_axi_rdata <= error_reg;
                        s_axi_rresp <= 2'b00; // OKAY

                    end

                    DSI_ESCAPE_MODE_REG: begin

                        s_axi_rdata <= escape_mode_reg;
                        s_axi_rresp <= 2'b00; // OKAY

                    end

                    DSI_ERROR_INJEC_REG: begin

                        s_axi_rdata <= error_injec_reg;
                        s_axi_rresp <= 2'b00; // OKAY

                    end

                    default: begin

                        s_axi_rdata <= '0;
                        s_axi_rresp <= 2'b11; // DECERR

                    end

                endcase

            end

            else if (s_axi_rvalid && s_axi_rready) begin

                s_axi_rvalid <= 1'b0;

            end

        end

    end


    //==========================================================
    // OUTPUT ASSIGNMENTS
    //==========================================================

    assign dsi_control      = control_reg;
    assign dsi_status       = status_reg;
    assign dsi_escape_mode  = escape_mode_reg;
    assign dsi_error_status = error_reg;

endmodule



module axi_slave #(
    parameter ADDR_W = 32
)(
    input  logic                 al_aclk,
    input  logic                 al_areset_n,

    //==============================================================
    // AXI4-Lite WRITE ADDRESS CHANNEL
    //==============================================================
    input  logic [ADDR_W-1:0]        al_awaddr,
    input  logic [2:0]              al_awprot,
    input  logic                	al_wvalid,
    output logic                  	al_wready,

    //==============================================================
    // AXI4-Lite WRITE DATA CHANNEL
    //==============================================================
    input  logic [31:0]             al_wdata,
    input  logic [3:0]              al_wstrb,
    input  logic                 al_wvalid,
    output logic                    al_wready,

    //==============================================================
    // AXI4-Lite WRITE RESPONSE CHANNEL
    //==============================================================
    output logic [1:0]            al_bresp,
    output logic                 al_bvalid,
    input  logic                 al_bready,

    //==============================================================
    // AXI4-Lite READ ADDRESS CHANNEL
    //==============================================================
    input  logic [ADDR_W-1:0]        al_araddr,
    input  logic [2:0]               al_arprot,
    input  logic                 	al_rvalid,
    output logic                    al_rready,

    //==============================================================
    // AXI4-Lite READ DATA CHANNEL
    //==============================================================
    output logic [31:0]              al_rdata,
    output logic [1:0]               al_rresp,
    output logic                    al_rvalid,
    input  logic                 al_rready,

    //==============================================================
    // REGISTER WRITE INTERFACE
    //==============================================================
    output logic                 reg_wr_en,
    output logic [ADDR_W-1:0]    reg_waddr,
    output logic [31:0]          reg_wdata,
    output logic [3:0]           reg_wstrb,
    output logic [2:0]           reg_wprot,

    input  logic                 reg_wr_done,
    input  logic                 reg_wr_err,

    //==============================================================
    // REGISTER READ INTERFACE
    //==============================================================
    output logic                 reg_rd_en,
    output logic [ADDR_W-1:0]    reg_raddr,
    output logic [2:0]           reg_rprot,

    input  logic [31:0]          reg_rdata,
    input  logic                 reg_rd_valid,
    input  logic                 reg_rd_err
);

    //==============================================================
    // AXI RESPONSE ENCODING
    //==============================================================
    localparam [1:0] RESP_OKAY   = 2'b00;
    localparam [1:0] RESP_SLVERR = 2'b10;

    //==============================================================
    // WRITE FSM STATES
    //==============================================================
    localparam [1:0] W_COLLECT = 2'd0,
                     W_EXEC    = 2'd1,
                     W_WAIT    = 2'd2,
                     W_RESP    = 2'd3;

    logic [1:0] wstate;

    // Captured write transaction
    logic [ADDR_W-1:0] al_awaddr_q;
    logic [2:0]        al_awprot_q;
    logic [31:0]       al_wdata_q;
    logic [3:0]        al_wstrb_q;

    logic aw_pending;
    logic w_pending;

    logic aw_handshake;
    logic w_handshake;

    //==============================================================
    // WRITE CHANNEL HANDSHAKES
    //==============================================================

    assign al_wready = (wstate == W_COLLECT) && !aw_pending;
    assign al_wready  = (wstate == W_COLLECT) && !w_pending;

    assign aw_handshake = al_wvalid && al_wready;
    assign w_handshake  = al_wvalid && al_wready;

    //==============================================================
    // REGISTER WRITE INTERFACE
    //==============================================================

    assign reg_wr_en = (wstate == W_EXEC);

    assign reg_waddr = al_awaddr_q;
    assign reg_wdata = al_wdata_q;
    assign reg_wstrb = al_wstrb_q;
    assign reg_wprot = al_awprot_q;

    //==============================================================
    // WRITE FSM
    //==============================================================

    always_ff @(posedge al_aclk or negedge al_areset_n) begin

        if (!al_areset_n) begin

            wstate     <= W_COLLECT;

            al_awaddr_q   <= '0;
            al_awprot_q   <= '0;
            al_wdata_q    <= '0;
            al_wstrb_q    <= '0;

            aw_pending <= 1'b0;
            w_pending  <= 1'b0;

            al_bvalid     <= 1'b0;
            al_bresp      <= RESP_OKAY;

        end

        else begin

            case (wstate)

                //--------------------------------------------------
                // COLLECT ADDRESS AND DATA INDEPENDENTLY
                //--------------------------------------------------
                W_COLLECT: begin

                    if (aw_handshake) begin
                        al_awaddr_q   <= al_awaddr;
                        al_awprot_q   <= al_awprot;
                        aw_pending <= 1'b1;
                    end

                    if (w_handshake) begin
                        al_wdata_q   <= al_wdata;
                        al_wstrb_q   <= al_wstrb;
                        w_pending <= 1'b1;
                    end

                    // Move forward when both channels are captured.
                    if ((aw_pending || aw_handshake) &&
                        (w_pending  || w_handshake)) begin

                        wstate <= W_EXEC;

                    end

                end

                //--------------------------------------------------
                // ISSUE ONE-CYCLE REGISTER WRITE REQUEST
                //--------------------------------------------------
                W_EXEC: begin

                    // reg_wr_en is HIGH in this state.
                    // Capture an immediate completion if available.

                    if (reg_wr_done) begin

                        al_bresp  <= reg_wr_err ?
                                  RESP_SLVERR : RESP_OKAY;

                        al_bvalid <= 1'b1;
                        wstate <= W_RESP;

                    end

                    else begin

                        wstate <= W_WAIT;

                    end

                end

                //--------------------------------------------------
                // WAIT FOR REGISTER WRITE COMPLETION
                //--------------------------------------------------
                W_WAIT: begin

                    if (reg_wr_done) begin

                        al_bresp  <= reg_wr_err ?
                                  RESP_SLVERR : RESP_OKAY;

                        al_bvalid <= 1'b1;
                        wstate <= W_RESP;

                    end

                end

                //--------------------------------------------------
                // WRITE RESPONSE
                //--------------------------------------------------
                W_RESP: begin

                    // Hold BVALID and BRESP until BREADY.

                    if (al_bvalid && al_bready) begin

                        al_bvalid     <= 1'b0;

                        aw_pending <= 1'b0;
                        w_pending  <= 1'b0;

                        wstate     <= W_COLLECT;

                    end

                end

                default: begin

                    wstate <= W_COLLECT;

                end

            endcase

        end

    end

    //==============================================================
    // READ FSM STATES
    //==============================================================

    localparam [1:0] R_IDLE  = 2'd0,
                     R_REQ   = 2'd1,
                     R_WAIT  = 2'd2,
                     R_DATA  = 2'd3;

    logic [1:0] rstate;

    // Captured read transaction
    logic [ADDR_W-1:0] al_araddr_q;
    logic [2:0]        al_arprot_q;

    //==============================================================
    // READ CHANNEL HANDSHAKE
    //==============================================================

    assign al_rready = (rstate == R_IDLE);

    //==============================================================
    // REGISTER READ INTERFACE
    //==============================================================

    assign reg_rd_en = (rstate == R_REQ);

    assign reg_raddr = al_araddr_q;
    assign reg_rprot = al_arprot_q;

    //==============================================================
    // READ FSM
    //==============================================================

    always_ff @(posedge al_aclk or negedge al_areset_n) begin

        if (!al_areset_n) begin

            rstate   <= R_IDLE;

            al_araddr_q <= '0;
            al_arprot_q <= '0;

            al_rdata    <= '0;
            al_rresp    <= RESP_OKAY;
            al_rvalid   <= 1'b0;

        end

        else begin

            case (rstate)

                //--------------------------------------------------
                // WAIT FOR READ ADDRESS
                //--------------------------------------------------
                R_IDLE: begin

                    if (al_rvalid && al_rready) begin

                        al_araddr_q <= al_araddr;
                        al_arprot_q <= al_arprot;

                        rstate <= R_REQ;

                    end

                end

                //--------------------------------------------------
                // ISSUE ONE-CYCLE REGISTER READ REQUEST
                //--------------------------------------------------
                R_REQ: begin

                    // reg_rd_en is HIGH in this state.
                    // Check for immediate register response.

                    if (reg_rd_valid) begin

                        al_rdata <= reg_rdata;

                        al_rresp <= reg_rd_err ?
                                 RESP_SLVERR : RESP_OKAY;

                        al_rvalid <= 1'b1;

                        rstate <= R_DATA;

                    end

                    else begin

                        rstate <= R_WAIT;

                    end

                end

                //--------------------------------------------------
                // WAIT FOR REGISTER READ DATA
                //--------------------------------------------------
                R_WAIT: begin

                    if (reg_rd_valid) begin

                        al_rdata <= reg_rdata;

                        al_rresp <= reg_rd_err ?
                                 RESP_SLVERR : RESP_OKAY;

                        al_rvalid <= 1'b1;

                        rstate <= R_DATA;

                    end

                end

                //--------------------------------------------------
                // READ RESPONSE
                //--------------------------------------------------
                R_DATA: begin

                    // Keep RVALID, RDATA and RRESP stable
                    // until the AXI master accepts the response.

                    if (al_rvalid && al_rready) begin

                        al_rvalid <= 1'b0;

                        rstate <= R_IDLE;

                    end

                end

                default: begin

                    rstate <= R_IDLE;

                end

            endcase

        end

    end

endmodule


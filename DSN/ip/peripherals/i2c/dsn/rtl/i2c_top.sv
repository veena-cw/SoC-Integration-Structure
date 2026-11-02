//==============================================================
// i2c_top : APB (pclk, 100 MHz) <-> I2C master (i2c_clk, 50 MHz)
//
// One transfer at a time -> ONE request/response toggle handshake:
//
//   pclk  : tx_req pulse      -> req_t toggles
//   i2c   : req_t synced      -> req_evt -> cmd_q captured, i2c_start
//   i2c   : master done pulse -> rsp_t toggles
//   pclk  : rsp_t synced      -> i2c_done pulse
//
//   i2c_busy (pclk) = req_t ^ rsp_t_sd  : high from the cycle after
//   tx_req until the same edge i2c_done is seen -> no gap, no
//   stretching logic needed.
//
// Bundled-data buses (tx_data -> cmd_q, data_out/ack_error ->
// apb_slave) are NOT synchronized bit by bit: the source holds them
// stable while the toggle is in flight and the destination only
// samples them after the synchronized toggle arrives.
// Constrain with set_max_delay -datapath_only (or set_bus_skew):
//   tx_data[*]            -> cmd_q[*]
//   m_data_out / m_ack_err -> apb_slave rx / status flops
//==============================================================
module i2c_top #(
<<<<<<< HEAD
    parameter DW = 32,
    parameter AW = 32,
    localparam SW = int'($ceil(DW/8))
=======
    parameter DW = 32,
    parameter AW = 32,
    localparam SW = DW/8
>>>>>>> 297f5f0 (Added MIPI DSI TX RTL modules and updated I2C and CSI interfaces)
)(
    // APB CLOCK DOMAIN
    input  logic pclk,          // 100 MHz
    input  logic presetn,       // ACTIVE LOW



<<<<<<< HEAD
    // I2C CLOCK DOMAIN
    input  logic i2c_clk,       // 50 MHz
    input  logic i2c_rst_n,     // ACTIVE LOW



    input  logic [AW-1:0] t_paddr,
    input  logic          t_pwrite,
    input  logic          t_psel,
    input  logic          t_penable,
    input  logic [DW-1:0] t_pwdata,
    input  logic [SW-1:0] t_pstrb,



    output logic [DW-1:0] t_o_prdata,
    output logic          t_o_pslverr,
    output logic          t_o_pready,
    output logic          i2c_irq,      // interrupt enable is CTRL[16]



    output logic       i2c_scl,
    inout  logic       i2c_sda
);



    pullup(i2c_sda);
=======
    output logic [DW-1:0] t_o_prdata,
    output logic          t_o_pslverr,
    output logic          t_o_pready,
    output logic          i2c_irq,      // pclk domain; enable is CTRL[16]

    output logic          i2c_scl,
    inout  logic          i2c_sda
);

    pullup(i2c_sda);    // simulation pull-up; use the board pull-up in hardware

    //==========================================================
    // RESETS
    // A reset on EITHER pin resets BOTH domains so the two toggles
    // (req_t / rsp_t) can never disagree. Async assert, sync release.
    //==========================================================
    logic link_rst_n, pclk_rst_n, i2c_rst_n_sync;

    assign link_rst_n = presetn & i2c_rst_n;

    reset_synchronizer u_pclk_rst_sync (
        .clk           (pclk),
        .async_reset_n (link_rst_n),
        .sync_reset_n  (pclk_rst_n)
    );

    reset_synchronizer u_i2c_rst_sync (
        .clk           (i2c_clk),
        .async_reset_n (link_rst_n),
        .sync_reset_n  (i2c_rst_n_sync)
    );
>>>>>>> 297f5f0 (Added MIPI DSI TX RTL modules and updated I2C and CSI interfaces)

    //==========================================================
    // APB SLAVE (pclk)
    //==========================================================
    logic        tx_req;
    logic [15:0] tx_data;       // [15]=R/W [14:8]=slave addr [7:0]=data
    logic        i2c_busy;
    logic        i2c_done;
    logic        i2c_nack;
    logic [7:0]  rd_data;

<<<<<<< HEAD

    //-----------------------------------------------------
    // NOTE: Address decode / out-of-range error handling lives
    // inside apb_slave (reported via STATUS[3]).
    // The interrupt enable is a CTRL register bit (CTRL[16]),
    // generated in apb_slave and synchronized to i2c_clk here.
    //-----------------------------------------------------



    logic ready;
    logic ack_error;
    logic busy;
    logic done;
    logic [7:0] data_out;
    //---------------------------------------------------



    // TX path (APB -> I2C)
    logic [31:0] tx_data_apb;      // command bus from apb_slave
    logic        tx_req_apb;       // push event (pclk)
    logic        tx_busy;          // command in flight (pclk)
    logic        tx_pending;       // command waiting (i2c_clk)
    logic        tx_ack_i2c;       // pop event (i2c_clk)
    logic [31:0] tx_data_i2c;      // command bus seen by I2C side



    // RX path (I2C -> APB)
    logic [7:0]  rx_data_i2c;      // byte from i2c_master
    logic        rx_req_i2c;       // push event (i2c_clk)
    logic        rx_busy;          // byte in flight (i2c_clk)
    logic        rx_pending;       // byte waiting (pclk)
    logic        rx_ack_apb;       // pop event (pclk)
    logic [7:0]  rx_data_apb;      // byte seen by APB side
    //---------------------------------------



    logic [31:0] i2c_cmd_reg;
    logic        i2c_cmd_valid;



    //--------------------------------------------
    logic        i2c_fifo_rw;
    logic [7:0]  i2c_fifo_data;



    logic [6:0]  i2c_slave_address;
=======
    apb_slave #(
        .DW(DW),
        .AW(AW)
    ) apbs (
        .pclk       (pclk),
        .presetn    (pclk_rst_n),
        .i_paddr    (t_paddr),
        .i_pwrite   (t_pwrite),
        .i_psel     (t_psel),
        .i_penable  (t_penable),
        .i_pwdata   (t_pwdata),
        .i_pstrb    (t_pstrb),
        .o_prdata   (t_o_prdata),
        .o_pslverr  (t_o_pslverr),
        .o_pready   (t_o_pready),
        .o_irq      (i2c_irq),
        .tx_req     (tx_req),
        .tx_data    (tx_data),
        .i2c_busy   (i2c_busy),
        .i2c_done   (i2c_done),
        .i2c_nack   (i2c_nack),
        .i_rd_data  (rd_data)
    );

    //==========================================================
    // REQUEST : pclk -> i2c_clk
    //==========================================================
    logic req_t;                 // pclk
    logic req_t_s, req_t_sd;     // i2c_clk (synchronized, delayed)
    logic req_evt;               // i2c_clk, 1-cycle
    logic [15:0] cmd_q;          // i2c_clk, command held for the whole transfer
    logic i2c_start;

    always_ff @(posedge pclk or negedge pclk_rst_n) begin
        if (!pclk_rst_n)   req_t <= 1'b0;
        else if (tx_req)   req_t <= ~req_t;
    end

    synchronizer #(.WIDTH(1)) u_req_sync (
        .clk   (i2c_clk),
        .rst_n (i2c_rst_n_sync),
        .d_in  (req_t),
        .d_out (req_t_s)
    );

    always_ff @(posedge i2c_clk or negedge i2c_rst_n_sync) begin
        if (!i2c_rst_n_sync) begin
            req_t_sd  <= 1'b0;
            cmd_q     <= '0;
            i2c_start <= 1'b0;
        end
        else begin
            req_t_sd  <= req_t_s;
            i2c_start <= req_evt;                 // one cycle after cmd_q is loaded
            if (req_evt) cmd_q <= tx_data;        // bundled data, stable while busy
        end
    end

    assign req_evt = req_t_s ^ req_t_sd;

    //==========================================================
    // I2C MASTER (i2c_clk)
    //==========================================================
    logic [7:0] m_data_out;
    logic       m_ack_error;
    logic       m_done;

    i2c_master i2cm (
        .clk       (i2c_clk),
        .rst_n     (i2c_rst_n_sync),
        .start     (i2c_start),
        .rw        (cmd_q[15]),
        .addr      (cmd_q[14:8]),
        .data_in   (cmd_q[7:0]),
        .data_out  (m_data_out),
        .ack_error (m_ack_error),
        .done      (m_done),
        .i2c_scl   (i2c_scl),
        .i2c_sda   (i2c_sda)
    );
>>>>>>> 297f5f0 (Added MIPI DSI TX RTL modules and updated I2C and CSI interfaces)

    //==========================================================
    // RESPONSE : i2c_clk -> pclk
    //==========================================================
    logic rsp_t;                 // i2c_clk
    logic rsp_t_s, rsp_t_sd;     // pclk (synchronized, delayed)

<<<<<<< HEAD

    logic i2c_apb_busy;
    logic i2c_apb_done;



    logic slverr_sync;



    logic [7:0] rx_data_apb_reg;
    logic       i_rd_data_valid;



    // Interrupt enable (CTRL[16])
    logic irq_en_apb;     // pclk domain, from apb_slave
    logic irq_en_i2c;     // i2c_clk domain, synchronized





    //==========================================================
    // I2C DOMAIN RESET SYNCHRONIZER
    //
    // Async assert, sync de-assert. Every flop in the i2c_clk
    // domain below uses i2c_rst_n_sync, never the raw pin.
    //==========================================================



    logic i2c_rst_n_sync;



    reset_synchronizer u_i2c_rst_sync (
        .clk           (i2c_clk),
        .async_reset_n (i2c_rst_n),
        .sync_reset_n  (i2c_rst_n_sync)
    );





    //==========================================================
    // APB SLAVE
    //==========================================================
    apb_slave #(
        .DW(DW),
        .AW(AW)
        // .I2C_BASE_ADDR / .I2C_END_ADDR can be overridden here if needed
    ) apbs (
        .pclk        (pclk),
        .presetn     (presetn),
        .i_paddr     (t_paddr),
        .i_pwrite    (t_pwrite),
        .i_psel      (t_psel),            // raw psel, decode done inside
        .i_penable   (t_penable),
        .i_pwdata    (t_pwdata),
        .i_pstrb     (t_pstrb),
        .o_prdata    (t_o_prdata),
        .o_pslverr   (t_o_pslverr),
        .o_pready    (t_o_pready),
        .o_irq_en    (irq_en_apb),        // CTRL[16]
        .i2c_busy    (i2c_apb_busy),
        .i2c_done    (i2c_apb_done),
        //======================================================
        // HW INTERFACE
        //======================================================
        .i2c_nack    (slverr_sync),
        .i_rd_data_valid (i_rd_data_valid),



        .tx_req      (tx_req_apb),
        .tx_data     (tx_data_apb),
        .tx_busy     (tx_busy),
        .i_rd_data   (rx_data_apb_reg)
    );





    //==========================================================
    // TX PATH : APB (pclk) -> I2C (i2c_clk)
    //
    // Toggle handshake over 2-FF synchronizers; the 32-bit command
    // bus is NOT synchronized, it is held stable by the sender
    // (apb_slave txdata_reg does not change while tx_busy = 1)
    // and sampled by the receiver only after the request toggle
    // has arrived.
    //
    //   tx_req_t  (pclk)    : toggles on every command push
    //   tx_ack_t  (i2c_clk) : toggles on every command pop
    //
    //   tx_busy    (pclk)    = tx_req_t ^ tx_ack_t_sync
    //   tx_pending (i2c_clk) = tx_req_t_sync ^ tx_ack_t
    //==========================================================
    logic tx_req_t;         // pclk domain
    logic tx_req_t_sync;    // i2c_clk domain
    logic tx_ack_t;         // i2c_clk domain
    logic tx_ack_t_sync;    // pclk domain



    always_ff @(posedge pclk or negedge presetn) begin
        if (!presetn)
            tx_req_t <= 1'b0;
        else if (tx_req_apb)
            tx_req_t <= ~tx_req_t;
    end



    always_ff @(posedge i2c_clk or negedge i2c_rst_n_sync) begin
        if (!i2c_rst_n_sync)
            tx_ack_t <= 1'b0;
        else if (tx_ack_i2c)
            tx_ack_t <= ~tx_ack_t;
    end



    synchronizer #(.WIDTH(1)) ff5 (
        .clk   (i2c_clk),
        .rst_n (i2c_rst_n_sync),
        .d_in  (tx_req_t),
        .d_out (tx_req_t_sync)
    );



    synchronizer #(.WIDTH(1)) ff6 (
        .clk   (pclk),
        .rst_n (presetn),
        .d_in  (tx_ack_t),
        .d_out (tx_ack_t_sync)
    );



    assign tx_busy     = tx_req_t ^ tx_ack_t_sync;
    assign tx_pending  = tx_req_t_sync ^ tx_ack_t;
    assign tx_data_i2c = tx_data_apb;        // stable while pending





    //==========================================================
    // RX PATH : I2C (i2c_clk) -> APB (pclk)
    //
    // Same toggle handshake. The byte is captured into
    // rx_data_hold in the i2c_clk domain and is only overwritten
    // when the previous byte has been acknowledged (rx_busy = 0),
    // so it is stable while pclk samples it.
    //
    //   rx_req_t  (i2c_clk) : toggles on every byte push
    //   rx_ack_t  (pclk)    : toggles on every byte pop
    //==========================================================
    logic       rx_req_t;        // i2c_clk domain
    logic       rx_req_t_sync;   // pclk domain
    logic       rx_ack_t;        // pclk domain
    logic       rx_ack_t_sync;   // i2c_clk domain
    logic [7:0] rx_data_hold;    // i2c_clk domain, held until acked



    always_ff @(posedge i2c_clk or negedge i2c_rst_n_sync) begin
        if (!i2c_rst_n_sync) begin
            rx_req_t     <= 1'b0;
            rx_data_hold <= 8'h00;
        end
        else if (rx_req_i2c && !rx_busy) begin
            rx_data_hold <= rx_data_i2c;
            rx_req_t     <= ~rx_req_t;
        end
    end



    always_ff @(posedge pclk or negedge presetn) begin
        if (!presetn)
            rx_ack_t <= 1'b0;
        else if (rx_ack_apb)
            rx_ack_t <= ~rx_ack_t;
    end



    synchronizer #(.WIDTH(1)) ff7 (
        .clk   (pclk),
        .rst_n (presetn),
        .d_in  (rx_req_t),
        .d_out (rx_req_t_sync)
    );



    synchronizer #(.WIDTH(1)) ff8 (
        .clk   (i2c_clk),
        .rst_n (i2c_rst_n_sync),
        .d_in  (rx_ack_t),
        .d_out (rx_ack_t_sync)
    );



    assign rx_busy     = rx_req_t ^ rx_ack_t_sync;
    assign rx_pending  = rx_req_t_sync ^ rx_ack_t;
    assign rx_data_apb = rx_data_hold;       // stable while pending





    //======================================================
    // HANDSHAKE CONTROL
    //=====================================================
    // i2c side takes the pending command from apb
    assign tx_ack_i2c = tx_pending && !i2c_cmd_valid && !busy;
    // apb side takes the pending received byte from i2c
    assign rx_ack_apb = rx_pending;



    always_ff @(posedge i2c_clk or negedge i2c_rst_n_sync) begin
        if (!i2c_rst_n_sync) begin           // ACTIVE LOW
            i2c_cmd_reg   <= '0;
            i2c_cmd_valid <= 1'b0;
        end
        else begin
            if (tx_ack_i2c) begin
                i2c_cmd_reg   <= tx_data_i2c;
                i2c_cmd_valid <= 1'b1;
            end
            else if (i2c_cmd_valid && !busy) begin
                i2c_cmd_valid <= 1'b0;
            end
        end
    end





    // tx -- 32 bit : slave address / r-w / data bits
    assign i2c_fifo_rw       = i2c_cmd_reg[15];
    assign i2c_slave_address = i2c_cmd_reg[14:8];
    assign i2c_fifo_data     = i2c_cmd_reg[7:0];





    logic i2c_start;



    assign i2c_start =
        (i2c_cmd_valid && !busy) || (rx_req_i2c && !busy);





    //==========================================================
    // i2c_master : ACTIVE LOW reset port (rst_n), driven by the
    // synchronized domain reset.
    //==========================================================



    i2c_master i2cm (



        .clk         (i2c_clk),
        .rst_n       (i2c_rst_n_sync),



        .start       (i2c_start),
        .rw          (i2c_fifo_rw),
        .addr        (i2c_slave_address),
        .data_in     (i2c_fifo_data),
        .data_out    (data_out),



        .i2c_scl     (i2c_scl),
        .i2c_sda     (i2c_sda),



        .ready       (ready),
        .ack_error   (ack_error),



        .i2c_irq     (i2c_irq),
        .i2c_irq_en  (irq_en_i2c),        // CTRL[16], synchronized to i2c_clk



        .busy        (busy),
        .done        (done),



        .rx_req      (rx_req_i2c),
        .rx_data     (rx_data_i2c),
        .rx_busy     (rx_busy)
    );





    always_ff @(posedge pclk or negedge presetn) begin
        if (!presetn) begin
            rx_data_apb_reg <= 8'h00;
            i_rd_data_valid <= 1'b0;
        end
        else begin
            if (rx_ack_apb) begin
                rx_data_apb_reg <= rx_data_apb;
                i_rd_data_valid <= 1'b1;
            end
        end
    end





    //==========================================================
    // I2C -> APB status crossings
    // Destination domain is pclk, so these stay on presetn.
    //==========================================================
    synchronizer #(.WIDTH(1)) ff1 (
        .clk   (pclk),
        .rst_n (presetn),
        .d_in  (busy),
        .d_out (i2c_apb_busy)
    );



    synchronizer #(.WIDTH(1)) ff2 (
        .clk   (pclk),
        .rst_n (presetn),
        .d_in  (done),
        .d_out (i2c_apb_done)
    );



    synchronizer #(.WIDTH(1)) ff3 (
        .clk   (pclk),
        .rst_n (presetn),
        .d_in  (ack_error),
        .d_out (slverr_sync)
    );



    //==========================================================
    // APB -> I2C control crossing
    // CTRL[16] interrupt enable (pclk) -> i2c_clk domain.
    //==========================================================
    synchronizer #(.WIDTH(1)) ff4 (
        .clk   (i2c_clk),
        .rst_n (i2c_rst_n_sync),
        .d_in  (irq_en_apb),
        .d_out (irq_en_i2c)
    );


=======
    always_ff @(posedge i2c_clk or negedge i2c_rst_n_sync) begin
        if (!i2c_rst_n_sync)  rsp_t <= 1'b0;
        else if (m_done)      rsp_t <= ~rsp_t;
    end

    synchronizer #(.WIDTH(1)) u_rsp_sync (
        .clk   (pclk),
        .rst_n (pclk_rst_n),
        .d_in  (rsp_t),
        .d_out (rsp_t_s)
    );

    always_ff @(posedge pclk or negedge pclk_rst_n) begin
        if (!pclk_rst_n) rsp_t_sd <= 1'b0;
        else             rsp_t_sd <= rsp_t_s;
    end

    assign i2c_done = rsp_t_s ^ rsp_t_sd;     // 1-cycle pulse
    assign i2c_busy = req_t   ^ rsp_t_sd;     // falls on the same edge done is consumed
    assign i2c_nack = m_ack_error;            // bundled data, qualified by i2c_done
    assign rd_data  = m_data_out;             // bundled data, qualified by i2c_done
>>>>>>> 297f5f0 (Added MIPI DSI TX RTL modules and updated I2C and CSI interfaces)

endmodule

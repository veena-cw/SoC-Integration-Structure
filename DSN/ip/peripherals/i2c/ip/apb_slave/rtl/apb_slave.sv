
`timescale 1ns/1ps

module apb_slave #(
    parameter DW = 32,
    parameter AW = 32,
    parameter logic [AW-1:0] I2C_BASE_ADDR = 32'h3001_0000,
    parameter logic [AW-1:0] I2C_END_ADDR  = 32'h3001_FFFF,

    localparam SW = int'($ceil(DW/8))
)
(
    input  logic             pclk,
    input  logic             presetn,

    input  logic [AW-1:0]    i_paddr,
    input  logic             i_pwrite,
    input  logic             i_psel,
    input  logic             i_penable,
    input  logic [DW-1:0]    i_pwdata,
    input  logic [SW-1:0]    i_pstrb,

    output logic [DW-1:0]    o_prdata,
    output logic             o_pslverr,
    output logic             o_pready,

    output logic             o_irq_en,

    input  logic             i2c_busy,
    input  logic             i2c_done,

    output logic             tx_req,
    output logic [DW-1:0]    tx_data,
    input  logic             tx_busy,

    input  logic [7:0]       i_rd_data,
    input  logic             i_rd_data_valid,
    input  logic             i2c_nack
);

    //==========================================================
    // APB FSM
    //==========================================================

    typedef enum logic [1:0] {
        IDLE   = 2'b00,
        SETUP  = 2'b01,
        ACCESS = 2'b10
    } state_t;

    state_t state_ff, state_next;

    logic setup_phase;
    logic access_phase;

    assign setup_phase  = i_psel && !i_penable;
    assign access_phase = i_psel &&  i_penable;

    //==========================================================
    // REGISTER ADDRESSES
    //==========================================================

    localparam ADDR_LSB = $clog2(DW/8);

    localparam CTRL_OFFSET   = 8'h10;
    localparam STATUS_OFFSET = 8'h14;
    localparam TXDATA_OFFSET = 8'h18;
    localparam RXDATA_OFFSET = 8'h1C;

    localparam IRQ_EN_BIT = 16;

    localparam logic [AW-1:0] CTRL_ADDR =
        I2C_BASE_ADDR + AW'(CTRL_OFFSET);

    localparam logic [AW-1:0] STATUS_ADDR =
        I2C_BASE_ADDR + AW'(STATUS_OFFSET);

    localparam logic [AW-1:0] TXDATA_ADDR =
        I2C_BASE_ADDR + AW'(TXDATA_OFFSET);

    localparam logic [AW-1:0] RXDATA_ADDR =
        I2C_BASE_ADDR + AW'(RXDATA_OFFSET);

    logic [7:0] reg_addr;

    logic in_window;
    logic reg_hit;
    logic i2c_sel;
    logic decode_err;

    assign in_window =
        (i_paddr >= I2C_BASE_ADDR) &&
        (i_paddr <= I2C_END_ADDR);

    assign reg_hit =
        (i_paddr == CTRL_ADDR)   ||
        (i_paddr == STATUS_ADDR) ||
        (i_paddr == TXDATA_ADDR) ||
        (i_paddr == RXDATA_ADDR);

    assign i2c_sel = in_window && reg_hit;

    // Address decode error only when selected.
    assign decode_err = i_psel && !i2c_sel;

    //==========================================================
    // FSM SEQUENTIAL LOGIC
    //==========================================================

    always_ff @(posedge pclk or negedge presetn) begin
        if (!presetn)
            state_ff <= IDLE;
        else
            state_ff <= state_next;
    end

    //==========================================================
    // FSM NEXT STATE LOGIC
    //==========================================================

    always_comb begin

        state_next = state_ff;

        case (state_ff)

            IDLE: begin
                if (setup_phase)
                    state_next = SETUP;
            end

            SETUP: begin
                if (access_phase)
                    state_next = ACCESS;
                else if (!i_psel)
                    state_next = IDLE;
            end

            ACCESS: begin

                // A new APB SETUP phase starts.
                if (setup_phase)
                    state_next = SETUP;

                // Master has deselected the peripheral.
                else if (!i_psel)
                    state_next = IDLE;

                // Completed access transaction.
                else if (access_phase && o_pready)
                    state_next = IDLE;

                // Otherwise remain in ACCESS during wait states.
            end

            default:
                state_next = IDLE;

        endcase
    end

    //==========================================================
    // REGISTER ADDRESS CAPTURE
    //==========================================================

    always_ff @(posedge pclk or negedge presetn) begin

        if (!presetn)
            reg_addr <= 8'h00;

        else if (setup_phase)
            reg_addr <= i_paddr[7:0];

    end

    //==========================================================
    // INTERNAL REGISTERS
    //==========================================================

    logic [DW-1:0] ctrl_reg;
    logic [DW-1:0] txdata_reg;
    logic [DW-1:0] status_reg;
    logic [DW-1:0] rxdata_reg;

    logic irq_en_q;

    logic ctrl_valid;
    logic tx_valid;

    logic both_valid;
    logic both_valid_d;
    logic tx_req_pulse;

    logic done_sticky;
    logic nack_sticky;
    logic range_err_sticky;

    logic in_pready;

    logic req_rd;
    logic req_wr;

    logic status_read_fire;
    logic decode_err_fire;

    assign o_irq_en = irq_en_q;

    assign both_valid = ctrl_valid && tx_valid;

    assign tx_req_pulse = both_valid && !both_valid_d;

    assign tx_req = tx_req_pulse && !tx_busy;

    assign tx_data = txdata_reg;

    assign rxdata_reg = {{(DW-8){1'b0}}, i_rd_data};

    //==========================================================
    // READ / WRITE REQUEST QUALIFICATION
    //==========================================================

    assign req_rd = access_phase && i2c_sel && !i_pwrite;
    assign req_wr = access_phase && i2c_sel &&  i_pwrite;

    //==========================================================
    // PREADY GENERATION
    //==========================================================

    always_comb begin

        in_pready = 1'b0;

        if (access_phase) begin

            // Invalid address: complete with decode error.
            if (!i2c_sel) begin

                in_pready = 1'b1;

            end

            // Valid address.
            else begin

                if (!i_pwrite) begin

                    // RXDATA waits for valid received data.
                    if (i_paddr == RXDATA_ADDR)
                        in_pready = i_rd_data_valid;

                    // CTRL, STATUS and TXDATA reads.
                    else
                        in_pready = 1'b1;

                end

                else begin

                    // Preserve existing write handshake.
                    if (!tx_busy &&
                        !i2c_busy &&
                        !both_valid)
                        in_pready = 1'b1;

                end

            end

        end

    end

    // Final PREADY.
    assign o_pready = in_pready;

    //==========================================================
    // PSLVERR
    //==========================================================

    // ONLY address decode errors generate PSLVERR.
    // I2C NACK does not generate PSLVERR.

    assign o_pslverr =
        access_phase && decode_err && o_pready;

    //==========================================================
    // STATUS REGISTER
    //
    // [3] = Address decode error
    // [2] = I2C NACK
    // [1] = I2C DONE
    // [0] = I2C BUSY
    //==========================================================

    assign status_reg = {
        28'b0,
        range_err_sticky,
        nack_sticky,
        done_sticky,
        i2c_busy
    };

    // Completed STATUS read handshake.
    assign status_read_fire =
        req_rd &&
        o_pready &&
        (i_paddr == STATUS_ADDR);

    // Invalid address transaction completed.
    assign decode_err_fire =
        decode_err &&
        access_phase &&
        o_pready;

    //==========================================================
    // STATUS STICKY FLAG UPDATE
    //==========================================================

    always_ff @(posedge pclk or negedge presetn) begin

        if (!presetn) begin

            done_sticky      <= 1'b0;
            nack_sticky      <= 1'b0;
            range_err_sticky <= 1'b0;

        end

        else begin

            // Clear sticky flags after completed STATUS read.
            if (status_read_fire) begin

                done_sticky      <= 1'b0;
                nack_sticky      <= 1'b0;
                range_err_sticky <= 1'b0;

            end

            // New events have priority over clearing.
            if (i2c_done)
                done_sticky <= 1'b1;

            if (i2c_nack)
                nack_sticky <= 1'b1;

            if (decode_err_fire)
                range_err_sticky <= 1'b1;

        end

    end

    //==========================================================
    // CTRL AND TXDATA REGISTER WRITE LOGIC
    //==========================================================

    always_ff @(posedge pclk or negedge presetn) begin

        if (!presetn) begin

            ctrl_reg   <= '0;
            txdata_reg <= '0;

            irq_en_q   <= 1'b0;

            ctrl_valid <= 1'b0;
            tx_valid   <= 1'b0;

        end

        else begin

            // Register write only on completed APB handshake.
            if (req_wr && o_pready) begin

                case (i_paddr)

                    CTRL_ADDR: begin

                        // CTRL[16] interrupt enable.
                        if (i_pstrb[2])
                            irq_en_q <= i_pwdata[IRQ_EN_BIT];
                            

                        // CTRL command field [15:8].
                        if (i_pstrb[1]) begin

                            ctrl_reg <= {
                                23'b0,i_pwdata[IRQ_EN_BIT],
                                i_pwdata[15:8]
                            };

                            ctrl_valid <= 1'b1;

                        end

                    end

                    TXDATA_ADDR: begin

                        if (i_pstrb[0])
                            txdata_reg[7:0] <= i_pwdata[7:0];

                        if (i_pstrb[1])
                            txdata_reg[15:8] <= {16'h0 , i_pwdata[15:8] };

                        if (i_pstrb != '0)
                            tx_valid <= 1'b1;

                    end

                    default: begin
                        // No register update.
                    end

                endcase

            end

            // Clear old transaction after pushing to I2C side.
            if (tx_req) begin

                ctrl_valid <= 1'b0;
                tx_valid   <= 1'b0;

            end

        end

    end

    //==========================================================
    // TX REQUEST EDGE DETECTION
    //==========================================================

    always_ff @(posedge pclk or negedge presetn) begin

        if (!presetn)
            both_valid_d <= 1'b0;

        else
            both_valid_d <= both_valid;

    end

    //==========================================================
    // PRDATA GENERATION
    //==========================================================

    always_comb begin

        o_prdata = '0;

        if (req_rd) begin

            case (i_paddr)

                CTRL_ADDR: begin

                    o_prdata = ctrl_reg;
                    o_prdata[IRQ_EN_BIT] = irq_en_q;

                end

                STATUS_ADDR: begin

                    o_prdata = status_reg;

                end

                TXDATA_ADDR: begin

                    o_prdata = txdata_reg;

                end

                RXDATA_ADDR: begin

                    o_prdata = rxdata_reg;

                end

                default: begin

                    o_prdata = '0;

                end

            endcase

        end

    end

endmodule


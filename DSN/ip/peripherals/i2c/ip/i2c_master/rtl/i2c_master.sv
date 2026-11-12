
module i2c_master (
    input  logic       clk,
    input  logic       rst_n,

    input  logic       start,
    input  logic       rw,
    input  logic [6:0] addr,
    input  logic [7:0] data_in,

    output logic [7:0] data_out,
    output logic       ack_error,
    output logic       done,

    output logic       ready,
    output logic       busy,

    input  logic       i2c_irq_en,
    output logic       i2c_irq,

    output logic       rx_req,
    output logic [7:0] rx_data,
    input  logic       rx_busy,

    output logic       i2c_scl,
    inout  wire        i2c_sda
);

    //==========================================================
    // FSM STATES
    //==========================================================

    localparam IDLE       = 3'd0;
    localparam START      = 3'd1;
    localparam ADDR       = 3'd2;
    localparam ACK1       = 3'd3;
    localparam WRITE_DATA = 3'd4;
    localparam READ_DATA  = 3'd5;
    localparam MASTER_ACK = 3'd6;
    localparam STOP       = 3'd7;

    logic [2:0] state;

    //==========================================================
    // INTERNAL REGISTERS
    //==========================================================

    logic [3:0] bit_cnt;
    logic [7:0] shift_reg;
    logic [7:0] rx_buffer;
    logic       rw_reg;

    logic       sda_drive_low;

    logic [7:0] clk_div;
    logic       i2c_tick;

    //==========================================================
    // STATUS SIGNALS
    //==========================================================

    assign busy  = (state != IDLE);
    assign ready = (state == IDLE) && !rx_req;

    // Interrupt is asserted on transaction completion or error.
    // It is disabled when the interrupt enable is low.
    assign i2c_irq = i2c_irq_en && (done || ack_error || ready);

    // Received byte is held in data_out.
    assign rx_data = data_out;

    //==========================================================
    // SDA OPEN-DRAIN CONTROL
    //==========================================================

    assign i2c_sda = sda_drive_low ? 1'b0 : 1'bz;

    //==========================================================
    // I2C CLOCK TICK
    // 50 MHz input clock -> nominal 100 kHz I2C clock
    //==========================================================

    assign i2c_tick = (clk_div == 8'd249);

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            clk_div <= 8'd0;
        end
        else begin
            if (i2c_tick)
                clk_div <= 8'd0;
            else
                clk_div <= clk_div + 1'b1;
        end
    end

    //==========================================================
    // RX REQUEST HANDSHAKE
    //
    // Hold rx_req until the top-level RX CDC logic accepts
    // the received byte and rx_busy becomes asserted.
    //
    // After the CDC transfer completes, rx_busy deasserts.
    // The top-level handshake must ensure that this indication
    // represents acceptance, not merely an unrelated idle state.
    //==========================================================

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rx_req <= 1'b0;
        end
        else begin
            if (rx_req && rx_busy)
                rx_req <= 1'b0;

            if ((state == STOP) &&
                i2c_tick &&
                (bit_cnt == 4'd2) &&
                (rw_reg == 1'b1) &&
                !ack_error) begin
                rx_req <= 1'b1;
            end
        end
    end

    //==========================================================
    // MAIN I2C FSM
    //==========================================================

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state         <= IDLE;
            sda_drive_low <= 1'b0;
            i2c_scl       <= 1'b1;

            ack_error     <= 1'b0;
            done          <= 1'b0;

            bit_cnt       <= 4'd0;
            data_out      <= 8'h00;
            shift_reg     <= 8'h00;
            rx_buffer     <= 8'h00;
            rw_reg        <= 1'b0;
        end
        else begin

            case (state)

                //==================================================
                // IDLE
                //==================================================

                IDLE: begin
                    i2c_scl       <= 1'b1;
                    sda_drive_low <= 1'b0;
                    done          <= 1'b0;

                    if (start && !rx_req) begin
                        shift_reg <= {addr, rw};

                        state     <= START;
                        done      <= 1'b0;
                        ack_error <= 1'b0;
                    end
                end

                //==================================================
                // START CONDITION
                //==================================================

                START: begin
                    rw_reg <= rw;

                    if (i2c_tick) begin
                        i2c_scl       <= 1'b1;
                        sda_drive_low <= 1'b1;

                        bit_cnt <= 4'd7;
                        state   <= ADDR;
                    end
                end

                //==================================================
                // ADDRESS + R/W TRANSMISSION
                //==================================================

                ADDR: begin
                    if (i2c_tick) begin
                        i2c_scl <= ~i2c_scl;

                        if (i2c_scl) begin
                            sda_drive_low <= ~shift_reg[bit_cnt];
                        end
                        else begin
                            if (bit_cnt == 0) begin
                                state <= ACK1;
                            end
                            else begin
                                bit_cnt <= bit_cnt - 1'b1;
                            end
                        end
                    end
                end

                //==================================================
                // SLAVE ACK AFTER ADDRESS
                //==================================================

                ACK1: begin
                    if (i2c_tick) begin
                        i2c_scl <= ~i2c_scl;

                        if (i2c_scl) begin
                            // Release SDA for slave response.
                            sda_drive_low <= 1'b0;
                        end
                        else begin

                            if (i2c_sda !== 1'b0) begin
                                // Address NACK
                                ack_error <= 1'b1;
                                bit_cnt   <= 4'd0;
                                state     <= STOP;
                            end
                            else begin

                                if (rw_reg) begin
                                    // READ operation
                                    bit_cnt <= 4'd7;
                                    state   <= READ_DATA;
                                end
                                else begin
                                    // WRITE operation
                                    bit_cnt   <= 4'd8;
                                    shift_reg <= data_in;
                                    state     <= WRITE_DATA;
                                end
                            end
                        end
                    end
                end

                //==================================================
                // WRITE DATA
                //==================================================

                WRITE_DATA: begin
                    if (i2c_tick) begin

                        if (!i2c_scl) begin
                            i2c_scl <= 1'b1;
                        end
                        else begin
                            i2c_scl <= 1'b0;

                            if (bit_cnt == 0) begin
                                // Release SDA for slave ACK.
                                sda_drive_low <= 1'b0;
                                state         <= MASTER_ACK;
                            end
                            else begin
                                bit_cnt <= bit_cnt - 1'b1;

                                sda_drive_low <=
                                    ~shift_reg[bit_cnt - 1'b1];
                            end
                        end
                    end
                end

                //==================================================
                // READ DATA
                //==================================================

                READ_DATA: begin
                    if (i2c_tick) begin
                        i2c_scl <= ~i2c_scl;

                        if (i2c_scl) begin
                            // Release SDA so slave can drive data.
                            sda_drive_low <= 1'b0;
                        end
                        else begin

                            rx_buffer[bit_cnt] <= i2c_sda;

                            if (bit_cnt == 0) begin
                                // Capture the complete received byte.
                                data_out <= {
                                    rx_buffer[7:1],
                                    i2c_sda
                                };

                                state <= MASTER_ACK;
                            end
                            else begin
                                bit_cnt <= bit_cnt - 1'b1;
                            end
                        end
                    end
                end

                //==================================================
                // MASTER ACK / NACK
                //==================================================

                MASTER_ACK: begin
                    if (i2c_tick) begin
                        i2c_scl <= ~i2c_scl;

                        if (i2c_scl) begin
                            // Release SDA.
                            // Master sends NACK for single-byte read.
                            sda_drive_low <= 1'b0;
                        end
                        else begin

                            if (!rw_reg) begin
                                // WRITE: check slave ACK.
                                if (i2c_sda !== 1'b0)
                                    ack_error <= 1'b1;
                            end

                            bit_cnt <= 4'd0;
                            state   <= STOP;
                        end
                    end
                end

                //==================================================
                // STOP CONDITION
                //
                // Phase 0: SCL=0, SDA=0
                // Phase 1: SCL=1, SDA=0
                // Phase 2: SCL=1, SDA released -> STOP
                //==================================================

                STOP: begin
                  ack_error <= 1'b0;
                    if (i2c_tick) begin

                        case (bit_cnt)

                            4'd0: begin
                                i2c_scl       <= 1'b0;
                                sda_drive_low <= 1'b1;
                                bit_cnt       <= 4'd1;
                            end

                            4'd1: begin
                                i2c_scl <= 1'b1;
                                bit_cnt <= 4'd2;
                            end

                            4'd2: begin
                                // Generate STOP by releasing SDA
                                // while SCL is already HIGH.
                                sda_drive_low <= 1'b0;

                                state <= IDLE;
                                done  <= 1'b1;
                            end

                            default: begin
                                state <= IDLE;
                            end

                        endcase
                    end
                end

                //==================================================
                // DEFAULT
                //==================================================

                default: begin
                    state         <= IDLE;
                    i2c_scl       <= 1'b1;
                    sda_drive_low <= 1'b0;
                    done          <= 1'b0;
                end

            endcase
        end
    end

endmodule

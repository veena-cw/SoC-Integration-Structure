//`timescale 1ns / 1ps

//==============================================================
// i2c_master
//
// RESET CONVENTION: ACTIVE LOW (rst_n)
//   rst_n = 0 -> held in reset
//   rst_n = 1 -> normal operation
//
// All four always_ff blocks below use
//   @(posedge clk or negedge rst_n) / if (!rst_n)
//
// top_fifo drives this with the SYNCHRONIZED i2c domain reset
// (i2c_rst_n_sync), not the raw pin.
//==============================================================

module i2c_master (

    input  logic       clk,
    input  logic       rst_n,      // ACTIVE LOW

    input  logic       start,
    input  logic       rw,
    input  logic [6:0] addr,
    input  logic [7:0] data_in,

    output logic [7:0] data_out,
    output logic       i2c_scl,
    inout  logic       i2c_sda,

    output logic       ready,
    output logic       ack_error,

    output logic       i2c_irq,    // interrupt signal

    //==========================================================
    // I2C BUSY STATUS
    //
    // 1 = transaction in progress
    // 0 = I2C master idle
    //==========================================================

    output logic       busy,
    output logic       done,

    output logic       fifo_wr_en,
    output logic [7:0] fifo_wr_data,

    input  logic       fifo_full
);


    //==========================================================
    // INTERRUPT
    //==========================================================

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            i2c_irq <= 1'b0;
        else
            i2c_irq <= (ready || ack_error || done) ? 1'b1 : 1'b0;
    end


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
    // BIT COUNTER
    //
    // 7 -> 6 -> ... -> 0
    //==========================================================

    logic [3:0] bit_cnt;


    //==========================================================
    // SHIFT REGISTER
    //
    // [7:1] = 7-bit slave address
    // [0]   = R/W
    //
    // Later reused for WRITE data.
    //==========================================================

    logic [7:0] shift_reg;


    //==========================================================
    // RECEIVE BUFFER
    //==========================================================

    logic [7:0] rx_buffer;


    //==========================================================
    // REGISTERED R/W
    //==========================================================

    logic rw_reg;


    //==========================================================
    // SDA OPEN-DRAIN CONTROL
    //
    // 1 -> drive SDA LOW
    // 0 -> release SDA
    //
    // External pull-up makes released SDA HIGH.
    //==========================================================

    logic sda_drive_low;

    assign i2c_sda =
            sda_drive_low ? 1'b0 : 1'bz;


    //==========================================================
    // I2C CLOCK DIVIDER
    //
    // INPUT CLOCK = clk
    //
    // i2c_tick is used to advance the I2C FSM.
    //==========================================================

    logic [7:0] clk_div;
    logic       i2c_tick;

    assign i2c_tick =
            (clk_div == 8'd1);


    //==========================================================
    // RX FIFO WRITE PULSE
    //
    // Single-cycle pulse on the same edge where busy/done/ready
    // are updated at the end of a READ transaction.
    //==========================================================

    always_ff @(posedge clk or negedge rst_n) begin

        if (!rst_n) begin

            fifo_wr_en   <= 1'b0;
            fifo_wr_data <= 8'b0;

        end
        else begin

            fifo_wr_en <= 1'b0; // default: single-cycle pulse

            if ((state == STOP) && i2c_tick && !i2c_scl &&
                (rw_reg == 1'b1) && !ack_error) begin

                fifo_wr_en   <= !fifo_full;
                fifo_wr_data <= data_out;

            end

        end

    end


    //==========================================================
    // CLOCK DIVIDER
    //==========================================================

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
    // MAIN I2C FSM
    //==========================================================

    always_ff @(posedge clk or negedge rst_n) begin

        if (!rst_n) begin

            state         <= IDLE;

            sda_drive_low <= 1'b0;
            i2c_scl       <= 1'b1;

            ready         <= 1'b1;
            ack_error     <= 1'b0;
            busy          <= 1'b0;
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

                    // I2C bus idle
                    i2c_scl       <= 1'b1;
                    sda_drive_low <= 1'b0;

                    ready <= 1'b1;
                    busy  <= 1'b0;
                    done  <= 1'b0;

                    if (start) begin

                        //------------------------------------------
                        // Store address + R/W
                        //------------------------------------------

                        shift_reg <= {addr, rw};

                        //------------------------------------------
                        // Start new transaction
                        //------------------------------------------

                        state <= START;

                        ready <= 1'b0;
                        busy  <= 1'b1;
                        done  <= 1'b0;

                        ack_error <= 1'b0;

                    end

                end


                //==================================================
                // START
                //
                // START condition:
                //
                // SCL = HIGH
                // SDA = HIGH -> LOW
                //==================================================

                START: begin

                    rw_reg <= rw;

                    if (i2c_tick) begin

                        i2c_scl <= 1'b1;
                        busy    <= 1'b1;
                        done    <= 1'b0;

                        // Generate START
                        sda_drive_low <= 1'b1;

                        // Start transmitting from bit 7
                        bit_cnt <= 4'd7;

                        state <= ADDR;

                    end

                end


                //==================================================
                // ADDRESS + R/W
                //==================================================

                ADDR: begin

                    if (i2c_tick) begin

                        // Toggle SCL
                        i2c_scl <= ~i2c_scl;

                        //------------------------------------------
                        // SCL was HIGH before toggle
                        //
                        // SCL becomes LOW.
                        // Put data bit on SDA.
                        //------------------------------------------

                        if (i2c_scl) begin

                            // Data 0 -> drive LOW
                            // Data 1 -> release SDA

                            sda_drive_low <=
                                ~shift_reg[bit_cnt];

                        end

                        //------------------------------------------
                        // SCL was LOW before toggle
                        //
                        // SCL becomes HIGH.
                        // One bit has completed.
                        //------------------------------------------

                        else begin

                            if (bit_cnt == 0) begin

                                // All 8 bits transmitted
                                state <= ACK1;

                            end
                            else begin

                                bit_cnt <= bit_cnt - 1'b1;

                            end

                        end

                    end

                end


                //==================================================
                // ADDRESS ACK
                //
                // Slave response:
                //
                // ACK  = SDA LOW
                // NACK = SDA HIGH
                //==================================================

                ACK1: begin

                    if (i2c_tick) begin

                        i2c_scl <= ~i2c_scl;

                        //------------------------------------------
                        // SCL LOW -> HIGH
                        //------------------------------------------

                        if (i2c_scl) begin

                            // Release SDA.
                            // Slave controls SDA.

                            sda_drive_low <= 1'b0;

                        end

                        //------------------------------------------
                        // SCL HIGH -> LOW
                        //------------------------------------------

                        else begin

                            //--------------------------------------
                            // Check slave ACK
                            //--------------------------------------

                            if (i2c_sda !== 1'b0) begin

                                // NACK received

                                ack_error <= 1'b1;

                                // Transaction failed.
                                // Go to STOP instead of continuing
                                // to WRITE_DATA / READ_DATA.

                                state <= STOP;

                                busy <= 1'b1;
                                done <= 1'b0;

                            end

                            else begin

                                //----------------------------------
                                // ACK received
                                //----------------------------------

                                bit_cnt <= 4'd8;

                                //----------------------------------
                                // READ
                                //----------------------------------

                                if (rw_reg == 1'b1) begin

                                    state <= READ_DATA;

                                end

                                //----------------------------------
                                // WRITE
                                //----------------------------------

                                else begin

                                    shift_reg <= data_in;

                                    state <= WRITE_DATA;

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

                        //------------------------------------------
                        // SCL LOW -> HIGH
                        //------------------------------------------

                        if (!i2c_scl) begin

                            i2c_scl <= 1'b1;

                        end

                        //------------------------------------------
                        // SCL HIGH -> LOW
                        //------------------------------------------

                        else begin

                            i2c_scl <= 1'b0;

                            if (bit_cnt == 0) begin

                                //----------------------------------
                                // All 8 data bits transmitted
                                //
                                // Release SDA for slave ACK.
                                //----------------------------------

                                sda_drive_low <= 1'b0;

                                state <= MASTER_ACK;

                            end

                            else begin

                                bit_cnt <= bit_cnt - 1'b1;

                                //----------------------------------
                                // Put next bit on SDA while SCL LOW
                                //----------------------------------

                                sda_drive_low <=
                                    ~shift_reg[bit_cnt - 1'b1];

                            end

                        end

                    end

                end


                //==================================================
                // READ DATA
                //
                // Master releases SDA.
                // Slave drives SDA.
                // Master samples SDA.
                //==================================================

                READ_DATA: begin

                    if (i2c_tick) begin

                        i2c_scl <= ~i2c_scl;

                        //------------------------------------------
                        // SCL LOW -> HIGH
                        //------------------------------------------

                        if (i2c_scl) begin

                            // Release SDA.
                            // Slave drives data.

                            sda_drive_low <= 1'b0;

                        end

                        //------------------------------------------
                        // SCL HIGH -> LOW
                        //------------------------------------------

                        else begin

                            //--------------------------------------
                            // Sample SDA
                            //
                            // NOTE: bit_cnt arrives here as 8 (set
                            // in ACK1), so the first sample targets
                            // rx_buffer[8] - out of range - and is
                            // dropped. The slave BFM compensates by
                            // driving one dummy bit first. See the
                            // note at the bottom of this file.
                            //--------------------------------------

                            rx_buffer[bit_cnt] <= i2c_sda;

                            if (bit_cnt == 0) begin

                                //----------------------------------
                                // Last bit
                                //----------------------------------

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
                //
                // WRITE:
                //     Slave sends ACK/NACK
                //
                // READ:
                //     Master sends NACK after one byte
                //
                // For a single-byte read, master releases SDA,
                // therefore SDA becomes HIGH = NACK.
                //==================================================

                MASTER_ACK: begin

                    if (i2c_tick) begin

                        i2c_scl <= ~i2c_scl;

                        //------------------------------------------
                        // SCL LOW -> HIGH
                        //------------------------------------------

                        if (i2c_scl) begin

                            //--------------------------------------
                            // Release SDA
                            //--------------------------------------

                            sda_drive_low <= 1'b0;

                        end

                        //------------------------------------------
                        // SCL HIGH -> LOW
                        //------------------------------------------

                        else begin

                            //--------------------------------------
                            // WRITE operation
                            //
                            // Check slave ACK.
                            //--------------------------------------

                            if (rw_reg == 1'b0) begin

                                if (i2c_sda !== 1'b0) begin

                                    // Slave NACKed data

                                    ack_error <= 1'b1;

                                end

                            end

                            //--------------------------------------
                            // READ operation
                            //
                            // SDA was released.
                            // Therefore master sends NACK.
                            //--------------------------------------

                            state <= STOP;

                        end

                    end

                end


                //==================================================
                // STOP
                //
                // STOP condition:
                //
                // SCL HIGH
                // SDA LOW -> HIGH
                //==================================================

                STOP: begin

                    if (i2c_tick) begin

                        i2c_scl <= ~i2c_scl;

                        //------------------------------------------
                        // SCL was HIGH
                        //------------------------------------------

                        if (i2c_scl) begin

                            // Keep SDA LOW

                            sda_drive_low <= 1'b1;

                        end

                        //------------------------------------------
                        // SCL was LOW
                        //------------------------------------------

                        else begin

                            //--------------------------------------
                            // Release SDA
                            //
                            // Pull-up makes SDA HIGH.
                            //
                            // SDA LOW -> HIGH while SCL HIGH
                            // = STOP condition.
                            //--------------------------------------

                            sda_drive_low <= 1'b0;

                            state <= IDLE;

                            //--------------------------------------
                            // Transaction is now finished.
                            //--------------------------------------

                            busy  <= 1'b0;
                            ready <= 1'b1;
                            done  <= 1'b1;

                        end

                    end

                end


                //==================================================
                // DEFAULT
                //==================================================

                default: begin

                    state         <= IDLE;

                    i2c_scl       <= 1'b1;
                    sda_drive_low <= 1'b0;

                    ready <= 1'b1;
                    busy  <= 1'b0;
                    done  <= 1'b0;

                end


            endcase

        end

    end

endmodule


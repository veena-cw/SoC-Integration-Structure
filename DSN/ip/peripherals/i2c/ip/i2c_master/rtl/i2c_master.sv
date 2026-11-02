//==============================================================
// i2c_master : single-byte I2C master (write or read), i2c_clk domain
//
//   start    : 1-cycle pulse, rw/addr/data_in must be stable
//              until done (i2c_top holds them in a register)
//   done     : 1-cycle pulse when STOP completes
//   ack_error: set on NACK (address or write data), cleared on next
//              start; stable when done is high
//   data_out : received byte (read), stable when done is high
//==============================================================
module i2c_master (
    input  logic       clk,
    input  logic       rst_n,      // ACTIVE LOW
    input  logic       start,
    input  logic       rw,         // 0 = write, 1 = read
    input  logic [6:0] addr,
    input  logic [7:0] data_in,
    output logic [7:0] data_out,
    output logic       ack_error,
    output logic       done,
    output logic       i2c_scl,
    inout  logic       i2c_sda
);



    //==========================================================
    // FSM STATES (unchanged)
    //==========================================================
    localparam IDLE       = 3'd0;
    localparam START      = 3'd1;
    localparam ADDR       = 3'd2;
    localparam ACK1       = 3'd3;
    localparam WRITE_DATA = 3'd4;
    localparam READ_DATA  = 3'd5;
    localparam MASTER_ACK = 3'd6;
    localparam STOP       = 3'd7;



    logic [2:0] state;
    logic [3:0] bit_cnt;       // bit counter; reused as 3-phase sequencer in STOP
    logic [7:0] shift_reg;     // {addr,rw} then write data
    logic [7:0] rx_buffer;     // receive shift buffer
    logic       rw_reg;



    //==========================================================
    // SDA open-drain: 1 -> drive low, 0 -> release (external pull-up)
    //==========================================================
    logic sda_drive_low;
    assign i2c_sda = sda_drive_low ? 1'b0 : 1'bz;



    //==========================================================
    // SDA input synchronizer (slave SDA is asynchronous to clk)
    //==========================================================
     logic sda_meta;
   logic sda_sync;



    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            sda_meta <= 1'b1;
            sda_sync <= 1'b1;
        end
        else begin
            sda_meta <= i2c_sda;
            sda_sync <= sda_meta;
        end
    end



    //==========================================================
    // CLOCK DIVIDER : i2c_tick every 250 clk (50 MHz -> 100 kHz SCL)
    //==========================================================
    logic [7:0] clk_div;
    logic       i2c_tick;
    assign i2c_tick = (clk_div == 8'd249);



    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            clk_div <= 8'd0;
        else if (i2c_tick)
            clk_div <= 8'd0;
        else
            clk_div <= clk_div + 1'b1;
    end



    //==========================================================
    // MAIN I2C FSM
    //==========================================================
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state         <= IDLE;
            sda_drive_low <= 1'b0;
            i2c_scl       <= 1'b1;
            ack_error     <= 1'b0;
            done          <= 1'b0;
            bit_cnt       <= 4'd0;
            data_out      <= 8'h00;
            shift_reg     <= 8'h00;
            rx_buffer     <= 8'h00;
            rw_reg        <= 1'b0;
        end
        else begin
            case (state)



                //==================================================
                IDLE: begin
                    i2c_scl       <= 1'b1;
                    sda_drive_low <= 1'b0;
                    done          <= 1'b0;
                    if (start) begin
                        shift_reg <= {addr, rw};
                        ack_error <= 1'b0;
                        state     <= START;
                    end
                end



                //==================================================
                // START : SCL high, SDA high -> low
                //==================================================
                START: begin
                    rw_reg <= rw;
                    if (i2c_tick) begin
                        i2c_scl       <= 1'b1;
                        sda_drive_low <= 1'b1;
                        bit_cnt       <= 4'd7;
                        state         <= ADDR;
                    end
                end



                //==================================================
                // ADDRESS + R/W
                //==================================================
                ADDR: begin
                    if (i2c_tick) begin
                        i2c_scl <= ~i2c_scl;
                        if (i2c_scl) begin
                            // SCL high -> low : put bit on SDA
                            sda_drive_low <= ~shift_reg[bit_cnt];
                        end
                        else begin
                            // SCL low -> high : bit done
                            if (bit_cnt == 0)
                                state <= ACK1;
                            else
                                bit_cnt <= bit_cnt - 1'b1;
                        end
                    end
                end



                //==================================================
                // ADDRESS ACK (ACK = SDA low, NACK = SDA high)
                //==================================================
                ACK1: begin
                    if (i2c_tick) begin
                        i2c_scl <= ~i2c_scl;
                        if (i2c_scl) begin
                            sda_drive_low <= 1'b0;          // release for slave
                        end
                        else begin
                            if (sda_sync != 1'b0) begin
                                ack_error <= 1'b1;          // NACK -> STOP
                                state     <= STOP;
                                bit_cnt   <= 4'd0;
                            end
                            else if (rw_reg == 1'b1) begin
                                bit_cnt <= 4'd7;
                                state   <= READ_DATA;
                            end
                            else begin
                                bit_cnt   <= 4'd8;
                                shift_reg <= data_in;
                                state     <= WRITE_DATA;
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
                            i2c_scl <= 1'b1;                // SCL low -> high
                        end
                        else begin
                            i2c_scl <= 1'b0;                // SCL high -> low
                            if (bit_cnt == 0) begin
                                sda_drive_low <= 1'b0;      // release for slave ACK
                                state         <= MASTER_ACK;
                            end
                            else begin
                                bit_cnt       <= bit_cnt - 1'b1;
                                sda_drive_low <= ~shift_reg[bit_cnt - 1'b1];
                            end
                        end
                    end
                end



                //==================================================
                // READ DATA : bit_cnt 7..0, sample on SCL rising
                //==================================================
                READ_DATA: begin
                    if (i2c_tick) begin
                        i2c_scl <= ~i2c_scl;
                        if (i2c_scl) begin
                            sda_drive_low <= 1'b0;
                        end
                        else begin
                            rx_buffer[bit_cnt] <= sda_sync;
                            if (bit_cnt == 0) begin
                                data_out <= {rx_buffer[7:1], sda_sync};
                                state    <= MASTER_ACK;
                            end
                            else begin
                                bit_cnt <= bit_cnt - 1'b1;
                            end
                        end
                    end
                end



                //==================================================
                // WRITE : slave ACK check.  READ : master releases SDA (NACK)
                //==================================================
                MASTER_ACK: begin
                    if (i2c_tick) begin
                        i2c_scl <= ~i2c_scl;
                        if (i2c_scl) begin
                            sda_drive_low <= 1'b0;
                        end
                        else begin
                            if (rw_reg == 1'b0 && sda_sync != 1'b0)
                                ack_error <= 1'b1;          // slave NACKed data
                            state   <= STOP;
                            bit_cnt <= 4'd0;
                        end
                    end
                end



                //==================================================
                // STOP : SDA rises only after SCL is stable high
                //   phase 0: SCL=0 SDA=0 | 1: SCL=1 | 2: SDA released
                //==================================================
                STOP: begin
                    if (i2c_tick) begin
                        case (bit_cnt)
                            4'd0: begin
                                i2c_scl       <= 1'b0;
                                sda_drive_low <= 1'b1;
                                bit_cnt       <= 4'd1;
                            end
                            4'd1: begin
                                i2c_scl <= 1'b1;
                                bit_cnt <= 4'd2;
                            end
                            4'd2: begin
                                sda_drive_low <= 1'b0;
                                state         <= IDLE;
                                done          <= 1'b1;      // 1-cycle pulse (cleared in IDLE)
                            end
                            default: state <= IDLE;
                        endcase
                    end
                end



                //==================================================
                default: begin
                    state         <= IDLE;
                    i2c_scl       <= 1'b1;
                    sda_drive_low <= 1'b0;
                    done          <= 1'b0;
                end



            endcase
        end
    end
endmodule

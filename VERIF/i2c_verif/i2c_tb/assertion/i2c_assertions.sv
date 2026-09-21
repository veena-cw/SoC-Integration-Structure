module i2c_assertions (
    input logic       clk,
    input logic       rst_n,
    input logic       start,
    input logic [7:0] datain,
    input logic [7:0] dataout,
    input logic       sda,
    input logic       scl
);

    //========================================================
    // RESET CHECK
    // During active-low reset:
    // SDA and SCL must be HIGH
    //========================================================

    property i2c_reset_check;
        @(posedge clk)
        !rst_n |-> (sda && scl);
    endproperty

    assert property (i2c_reset_check)
        else $error("[%0t] SDA/SCL are not HIGH during reset", $time);

    cover property (i2c_reset_check);


    //========================================================
    // UNKNOWN CHECK
    //========================================================

    property no_unknown;
        @(posedge clk)
        disable iff (!rst_n)
        !$isunknown(sda) && !$isunknown(scl);
    endproperty

    assert property (no_unknown)
        else $error("[%0t] Found X/Z on SDA or SCL", $time);


    //========================================================
    // START CONDITION
    // START = SDA HIGH -> LOW while SCL HIGH
    //========================================================

    property i2c_start_check;
        @(posedge clk)
        disable iff (!rst_n)
        $rose(start) |-> (sda == 1'b0 && scl == 1'b1);
    endproperty

    assert property (i2c_start_check)
        else $error("[%0t] START condition failed", $time);

    cover property (i2c_start_check);


    //========================================================
    // STOP CONDITION
    // STOP = SDA LOW -> HIGH while SCL HIGH
    //
    // After START, eventually STOP should occur.
    // Bounded range is used instead of s_eventually
    // for better Vivado compatibility.
    //========================================================

    property i2c_stop_check;
        @(posedge clk)
        disable iff (!rst_n)
        $rose(start) |-> ##[1:100]
        (sda == 1'b1 && scl == 1'b1);
    endproperty

    assert property (i2c_stop_check)
        else $error("[%0t] Invalid I2C STOP condition", $time);

    cover property (i2c_stop_check);


    //========================================================
    // SDA CHANGE ONLY WHEN SCL IS LOW
    //
    // START and STOP are exceptions because SDA changes
    // while SCL is HIGH.
    //========================================================

    property sda_change_on_scl_low;
        @(posedge clk)
        disable iff (!rst_n)

        $changed(sda) &&
        !(scl && $fell(sda)) &&
        !(scl && $rose(sda))

        |-> (scl == 1'b0);
    endproperty

    assert property (sda_change_on_scl_low)
        else $error("[%0t] SDA changed while SCL was HIGH", $time);


    //========================================================
    // ADDRESS CHECK
    //
    // Captures 8 bits:
    // [7:1] = slave address
    // [0]   = R/W
    //========================================================

    property i2c_address_check(bit [7:0] expected_address);

        bit [7:0] captured_address;

        @(posedge clk)
        $rose(start)
        |->
        @(posedge scl)

        (1'b1, captured_address[7] = sda)
        ##1 (1'b1, captured_address[6] = sda)
        ##1 (1'b1, captured_address[5] = sda)
        ##1 (1'b1, captured_address[4] = sda)
        ##1 (1'b1, captured_address[3] = sda)
        ##1 (1'b1, captured_address[2] = sda)
        ##1 (1'b1, captured_address[1] = sda)
        ##1 (1'b1, captured_address[0] = sda)

        ##1 (captured_address === expected_address);

    endproperty

    assert property (i2c_address_check(8'h02))
        else
            $warning("[%0t] I2C ADDRESS CHECK FAILED: expected=%h",
                     $time, 8'h02);


    //========================================================
    // VALID ADDRESS ACK
    //
    // 8 address bits followed by ACK
    // ACK = SDA LOW
    //========================================================

    property i2c_valid_address_ack_check;

        @(posedge clk)

        $rose(start)
        |->
        @(posedge scl)

        ##8 (sda === 1'b0);

    endproperty

    assert property (i2c_valid_address_ack_check)
        else
            $error("[%0t] VALID ADDRESS ACK FAILED", $time);


    //========================================================
    // INVALID ADDRESS NACK
    //
    // Invalid address:
    //
    // START
    // 8 address bits
    // NACK = SDA HIGH
    // STOP
    //========================================================

    property i2c_invalid_address_nack_check;

        @(posedge clk)

        $rose(start)
        |->
        @(posedge scl)

        ##8 (sda === 1'b1);

    endproperty

    assert property (i2c_invalid_address_nack_check)
        else
            $error("[%0t] INVALID ADDRESS NACK FAILED", $time);


    //========================================================
    // WRITE DATA CHECK
    //
    // This example assumes:
    // START
    // 8 address bits
    // ACK
    // 8 data bits
    //========================================================

    property i2c_write_data_check(bit [7:0] expected_data);

        bit [7:0] captured_data;

        @(posedge clk)

        $rose(start)
        |->
        @(posedge scl)

        ##9

        (1'b1, captured_data[7] = sda)
        ##1 (1'b1, captured_data[6] = sda)
        ##1 (1'b1, captured_data[5] = sda)
        ##1 (1'b1, captured_data[4] = sda)
        ##1 (1'b1, captured_data[3] = sda)
        ##1 (1'b1, captured_data[2] = sda)
        ##1 (1'b1, captured_data[1] = sda)
        ##1 (1'b1, captured_data[0] = sda)

        ##1 (captured_data === expected_data);

    endproperty

    assert property (i2c_write_data_check(8'h55))
        else
            $error("[%0t] I2C WRITE DATA mismatch. Expected=55",
                   $time);


    //========================================================
    // DATA ACK
    //
    // ACK = SDA LOW
    //========================================================

    property data_ack;

        @(posedge clk)

        $rose(start)
        |->
        @(posedge scl)

        ##17 (sda === 1'b0);

    endproperty

    assert property (data_ack)
        else
            $warning("[%0t] Data ACK failed", $time);

endmodule

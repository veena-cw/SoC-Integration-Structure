module i2c_assertions #(
	parameter bit ADDR_NACK = 1'b0)
	(
    input logic       clk,
    input logic       rst_n,
    input logic       start,
    input logic [7:0] datain,
    input logic [7:0] dataout,
    input logic       sda,
    input logic       scl
);

 bit start1;
 
 
 logic start_detected;
logic start_pulse;
logic [7:0] captured_address_debug;

always @(negedge sda) begin
    if (scl === 1'b1)
        start_detected <= 1'b1;
end

always @(posedge scl) begin
    start_pulse <= start_detected;
    start_detected <= 1'b0;
end



  //.============================================
  // start condtion genearation 
  //=============================================
  /*
  property i2c_start_assert;
   @(posedge scl) disable iff(!rst_n)
   $fell(sda) |-> (scl ==1) ##0 start1;
   endproperty 
   
    assert property (i2c_start_assert)
        else $error("[%0t] i2c_start_assert fail", $time); */
    //========================================================
    // RESET CHECK
    // During active-low reset:
    // SDA and SCL must be HIGH
    //========================================================

    property i2c_reset_check;
        @(posedge clk) !rst_n |=> (sda && scl);
    endproperty

    assert property (i2c_reset_check)
       else $warning("[%0t] SDA/SCL are not HIGH during reset", $time);

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
/*
    property i2c_start_check;
        @(posedge clk)
        disable iff (!rst_n)
        $rose(start) |=> (sda == 1'b0 && scl == 1'b1);
    endproperty

    assert property (i2c_start_check)
        else $error("[%0t] START condition failed", $time);

    cover property (i2c_start_check);

*/
    //========================================================
    // STOP CONDITION
    // STOP = SDA LOW -> HIGH while SCL HIGH
    //
    // After START, eventually STOP should occur.
    // Bounded range is used instead of s_eventually
    // for better Vivado compatibility.
    //========================================================
logic sda_d;
logic stop_detected;
/*
    property i2c_stop_check;
        @(posedge clk)
        disable iff (!rst_n)
        $rose(start_detected) |-> s_eventually($rose(sda) && scl);
    endproperty

    assert property (i2c_stop_check)
    $display("[%0t] assertion - stop detected",$time);
        else $warning("[%0t] Invalid I2C STOP condition", $time);

    cover property (i2c_stop_check);
*/
/*
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        sda_d        <= 1'b1;
        stop_detected <= 1'b0;
    end
    else begin
        sda_d <= sda;

        stop_detected <= 1'b0;

        if (sda && !sda_d && scl)
            stop_detected <= 1'b1;
    end
end
property i2c_stop_check;

    @(posedge clk)
    disable iff (!rst_n)

    $rose(start_detected)
    |->
    ##[1:100] stop_detected;

endproperty

assert property (i2c_stop_check)
    $display("[%0t] Assertion - STOP detected", $time);
else
    $warning("[%0t] Invalid I2C STOP condition", $time);

cover property (i2c_stop_check);
*/

sequence i2c_stop_sequence;
    $rose(sda) && (scl == 1'b1);
endsequence

property i2c_stop_check;
    @(posedge clk)
    disable iff (!rst_n)
    $rose(start_detected) |-> ##[1:50] i2c_stop_sequence;
endproperty

assert property (i2c_stop_check)
$display("[%0t ] VAL  I2C STOP CONDTION",$time);
else
    $warning("[%0t] Invalid I2C STOP condition", $time);

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

         @(posedge scl)
         start_detected
        |->
       // @(posedge scl)

        (1'b1, captured_address[7] = sda)
        ##1 (1'b1, captured_address[6] = sda)
        ##1 (1'b1, captured_address[5] = sda)
        ##1 (1'b1, captured_address[4] = sda)
        ##1 (1'b1, captured_address[3] = sda)
        ##1 (1'b1, captured_address[2] = sda)
        ##1 (1'b1, captured_address[1] = sda)
        ##1 (1'b1, captured_address[0] = sda)

        ##1 (captured_address[7:1] === expected_address);

    endproperty

    assert property (i2c_address_check(8'h55))
        else
            $warning("[%0t] I2C ADDRESS CHECK FAILED: expected=%h",
                     $time, 8'h55);

    //========================================================
    // VALID ADDRESS ACK
    //
    // 8 address bits followed by ACK
    // ACK = SDA LOW
    //========================================================

  property i2c_valid_address_ack_check;

        

         @(posedge scl)	
        start_detected
	|->
        ##8 (sda === 1'b0);

    endproperty

    assert property (i2c_valid_address_ack_check)
        else
            $error("[%0t] VALID ADDRESS ACK FAILED => SDA = %0b ", $time,sda);


/*
property i2c_invalid_address_nack_check;

    @(posedge scl)

    start_pulse
    |-> 
    ##8 (sda === 1'b1);

endproperty

assert property (i2c_invalid_address_nack_check)
    else
        $error("[%0t] INVALID ADDRESS NACK FAILED", $time);
*/
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
bit check_addr_nack;

initial begin
    check_addr_nack = $test$plusargs("CHECK_ADDR_NACK");
end
/*
   generate
    if (ADDR_NACK) begin : gen_addr_nack_check

        property i2c_invalid_address_nack_check;

            @(posedge scl)
                start_detected
                |-> ##8 (sda === 1'b1);

        endproperty

        assert property (i2c_invalid_address_nack_check)
            else
                $error("[%0t] INVALID ADDRESS NACK FAILED", $time);

    end
endgenerate
*/

property i2c_invalid_address_nack_check;

    @(posedge scl)
        check_addr_nack && start_detected
        |-> ##8 (sda === 1'b1);

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

	@(posedge scl)
   	 start_detected
	|->

        ##9

        (1'b1, captured_data[7] = sda)
        ##1 (1'b1, captured_data[6] = sda)
        ##1 (1'b1, captured_data[5] = sda)
        ##1 (1'b1, captured_data[4] = sda)
        ##1 (1'b1, captured_data[3] = sda)
        ##1 (1'b1, captured_data[2] = sda)
        ##1 (1'b1, captured_data[1] = sda)
        ##1 (1'b1, captured_data[0] = sda)

        ##1 (captured_data[7:0] === expected_data);

    endproperty

    assert property (i2c_write_data_check(datain))
        else
            $error("[%0t] I2C WRITE DATA mismatch. Expected=%0b",
                   $time,datain);


    //========================================================
    // DATA ACK
    //
    // ACK = SDA LOW
    //========================================================

    property data_ack;

       @(posedge scl)
    start_detected
	|->

        ##17 (sda === 1'b0);

    endproperty

    assert property (data_ack)
        else
            $warning("[%0t] Data ACK failed", $time);

endmodule

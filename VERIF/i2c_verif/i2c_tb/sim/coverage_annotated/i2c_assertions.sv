//      // verilator_coverage annotation
        module i2c_assertions (
 125356     input logic       clk,
+125356  point: type=toggle comment=clk:0->1 hier=test_top.dut.i2cm.i2c_assertions_inst
+125355  point: type=toggle comment=clk:1->0 hier=test_top.dut.i2cm.i2c_assertions_inst
%000001     input logic       rst_n,
-000001  point: type=toggle comment=rst_n:0->1 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=rst_n:1->0 hier=test_top.dut.i2cm.i2c_assertions_inst
 000025     input logic       start,
+000025  point: type=toggle comment=start:0->1 hier=test_top.dut.i2cm.i2c_assertions_inst
+000025  point: type=toggle comment=start:1->0 hier=test_top.dut.i2cm.i2c_assertions_inst
%000000     input logic [7:0] datain,
-000000  point: type=toggle comment=datain[0]:0->1 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=datain[0]:1->0 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=datain[1]:0->1 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=datain[1]:1->0 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=datain[2]:0->1 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=datain[2]:1->0 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=datain[3]:0->1 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=datain[3]:1->0 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=datain[4]:0->1 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=datain[4]:1->0 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=datain[5]:0->1 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=datain[5]:1->0 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=datain[6]:0->1 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=datain[6]:1->0 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=datain[7]:0->1 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=datain[7]:1->0 hier=test_top.dut.i2cm.i2c_assertions_inst
%000000     input logic [7:0] dataout,
-000000  point: type=toggle comment=dataout[0]:0->1 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=dataout[0]:1->0 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=dataout[1]:0->1 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=dataout[1]:1->0 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=dataout[2]:0->1 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=dataout[2]:1->0 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=dataout[3]:0->1 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=dataout[3]:1->0 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=dataout[4]:0->1 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=dataout[4]:1->0 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=dataout[5]:0->1 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=dataout[5]:1->0 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=dataout[6]:0->1 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=dataout[6]:1->0 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=dataout[7]:0->1 hier=test_top.dut.i2cm.i2c_assertions_inst
-000000  point: type=toggle comment=dataout[7]:1->0 hier=test_top.dut.i2cm.i2c_assertions_inst
 000217     input logic       sda,
+000217  point: type=toggle comment=sda:0->1 hier=test_top.dut.i2cm.i2c_assertions_inst
+000216  point: type=toggle comment=sda:1->0 hier=test_top.dut.i2cm.i2c_assertions_inst
 000476     input logic       scl
+000476  point: type=toggle comment=scl:0->1 hier=test_top.dut.i2cm.i2c_assertions_inst
+000475  point: type=toggle comment=scl:1->0 hier=test_top.dut.i2cm.i2c_assertions_inst
        );
        
            //========================================================
            // RESET CHECK
            // During active-low reset:
            // SDA and SCL must be HIGH
            //========================================================
        /*
            property i2c_reset_check;
                @(posedge clk) !rst_n |-> (sda && scl);
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
            $display("assertion - stop detected");
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
                |=>
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
        
            assert property (i2c_address_check(8'h055))
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
        
            assert property (i2c_write_data_check(8'ha5))
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
                    $warning("[%0t] Data ACK failed", $time);*/
        
        endmodule
        

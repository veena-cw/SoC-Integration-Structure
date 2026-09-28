
 
module tb_apb_to_i2c_bridge;
 
    //==========================================================
    // PARAMETERS
    //==========================================================
 
    parameter DW = 32;
    parameter AW = 32;
    parameter SW = 4;
 
 
    //==========================================================
    // CLOCKS
    //==========================================================
 
    logic pclk;
    logic i2c_clk;
 
    // APB clock = 100 MHz
    initial begin
        pclk = 1'b0;
        forever #5 pclk = ~pclk;
    end
 
    // I2C controller clock = 50 MHz
    initial begin
        i2c_clk = 1'b0;
        forever #10 i2c_clk = ~i2c_clk;
    end
 
 
    //==========================================================
    // RESET
    //==========================================================
 
    logic presetn;
 
    // Active-low I2C reset (matches DUT's i2c_rst_n port)
    logic i2c_rst_n;
 
 
    //==========================================================
    // APB SIGNALS
    //==========================================================
 
    logic [AW-1:0] t_paddr;
    logic          t_pwrite;
    logic          t_psel;
    logic          t_penable;
    logic [DW-1:0] t_pwdata;
    logic [SW-1:0] t_pstrb;
 
    logic [7:0]    i_rd_data;
 
    logic [DW-1:0] t_o_prdata;
    logic          t_o_pslverr;
    logic          t_o_pready;
 
 
    //==========================================================
    // I2C SIGNALS
    //==========================================================
 
    logic [7:0] data_out;
 
    logic       i2c_irq;
    logic       i2c_scl;
    tri         i2c_sda;
 
 
    //==========================================================
    // I2C SDA PULL-UP
    //==========================================================
 
    pullup(i2c_sda);
 
 
    //==========================================================
    // I2C SLAVE MODEL
    //==========================================================
 
    logic       slave_drive_low;
    logic [7:0] slave_read_data;
 
    integer read_bit_count;
 
 
    // Open-drain SDA
    assign i2c_sda = slave_drive_low ? 1'b0 : 1'bz;
 
 
    //==========================================================
    // DUT
    //==========================================================
 
   i2c_top #(
        .DW(DW),
        .AW(AW)
    ) dut (
 
        .pclk        (pclk),
        .presetn     (presetn),
 
        .i2c_clk     (i2c_clk),
 
        // DUT now has an active-LOW i2c_rst_n port
        // (top_fifo synchronizes it internally to i2c_clk)
        .i2c_rst_n   (i2c_rst_n),
 
        .t_paddr     (t_paddr),
        .t_pwrite    (t_pwrite),
        .t_psel      (t_psel),
        .t_penable   (t_penable),
        .t_pwdata    (t_pwdata),
        .t_pstrb     (t_pstrb),
 
        .t_o_prdata  (t_o_prdata),
        .t_o_pslverr (t_o_pslverr),
        .t_o_pready  (t_o_pready),
 
        .i2c_irq     (i2c_irq),
 
        .i2c_scl     (i2c_scl),
        .i2c_sda     (i2c_sda)
    );
 
 
    //==========================================================
    // I2C SLAVE MODEL
    //
    // WRITE:
    //   Address ACK
    //   Data ACK
    //
    // READ:
    //   Address ACK
    //   Slave sends 8'hA5
    //==========================================================
 
    always @(negedge i2c_scl) begin
 
        if (!presetn) begin
 
            slave_drive_low <= 1'b0;
            read_bit_count  <= 0;
 
        end
        else begin
 
            //==================================================
            // ADDRESS ACK
            //==================================================
 
            if (dut.i2cm.state == dut.i2cm.ACK1) begin
 
                slave_drive_low <= 1'b1;
                read_bit_count  <= 0;
 
            end
 
 
            //==================================================
            // READ DATA
            //==================================================
 
            else if (dut.i2cm.state == dut.i2cm.READ_DATA) begin
 
                case (read_bit_count)
 
                    0: slave_drive_low <= ~slave_read_data[7];
                    1: slave_drive_low <= ~slave_read_data[6];
                    2: slave_drive_low <= ~slave_read_data[5];
                    3: slave_drive_low <= ~slave_read_data[4];
                    4: slave_drive_low <= ~slave_read_data[3];
                    5: slave_drive_low <= ~slave_read_data[2];
                    6: slave_drive_low <= ~slave_read_data[1];
                    7: slave_drive_low <= ~slave_read_data[0];
 
                    default:
                        slave_drive_low <= 1'b0;
 
                endcase
 
                if (read_bit_count < 8)
                    read_bit_count <= read_bit_count + 1;
 
            end
 
 
            //==================================================
            // WRITE DATA ACK
            //==================================================
 
            else if ((dut.i2cm.state == dut.i2cm.MASTER_ACK) &&
                     (dut.i2cm.rw_reg == 1'b0)) begin
 
                slave_drive_low <= 1'b1;
                read_bit_count  <= 0;
 
            end
 
 
            //==================================================
            // OTHERWISE RELEASE SDA
            //==================================================
 
            else begin
 
                slave_drive_low <= 1'b0;
 
                if (dut.i2cm.state != dut.i2cm.READ_DATA)
                    read_bit_count <= 0;
 
            end
 
        end
 
    end
 
 
    //==========================================================
    // APB WRITE TASK
    //==========================================================
 
    task automatic apb_write(
        input logic [31:0] addr,
        input logic [31:0] data
    );
 
        integer timeout_count;
 
        begin
 
            //==================================================
            // SETUP PHASE
            //==================================================
 
            @(posedge pclk);
 
            t_psel    <= 1'b1;
            t_pwrite  <= 1'b1;
            t_paddr   <= addr;
            t_pwdata  <= data;
            t_pstrb   <= 4'b1111;
 
 
            //==================================================
            // ACCESS PHASE
            //==================================================
 
            @(posedge pclk);
 
            t_penable <= 1'b1;
 
 
            //==================================================
            // WAIT FOR PREADY
            //==================================================
 
            timeout_count = 0;
 
            while ((t_o_pready !== 1'b1) &&
                   (timeout_count < 10000)) begin
 
                @(posedge pclk);
                timeout_count++;
 
            end
 
 
            if (t_o_pready !== 1'b1) begin
 
                $display("");
                $display("ERROR : APB WRITE TIMEOUT");
                $display("ADDR = %h DATA = %h", addr, data);
                $display("");
 
                $finish;
 
            end
 
 
            //==================================================
            // APB WRITE COMPLETE
            //==================================================
 
            $display(
                "%0t : APB WRITE COMPLETE : ADDR=%h DATA=%h",
                $time,
                addr,
                data
            );
 
 
            //==================================================
            // RETURN TO IDLE
            //==================================================
 
            @(posedge pclk);
 
            t_psel    <= 1'b0;
            t_penable <= 1'b0;
            t_pwrite  <= 1'b0;
            t_paddr   <= '0;
            t_pwdata  <= '0;
            t_pstrb   <= '0;
 
        end
 
    endtask
 
 
    //==========================================================
    // APB READ TASK
    //
    // Used to retrieve data from RX FIFO.
    //==========================================================
 
    task automatic apb_read_check(
        input logic [31:0] addr,
        input logic [7:0]  expected_data
    );
 
        logic [31:0] read_value;
        integer timeout_count;
 
        begin
 
            //==================================================
            // SETUP PHASE
            //==================================================
 
            @(posedge pclk);
 
            t_psel    <= 1'b1;
            t_pwrite  <= 1'b0;
            t_paddr   <= addr;
            t_pwdata  <= '0;
            t_pstrb   <= 4'b1111;
 
 
            //==================================================
            // ACCESS PHASE
            //==================================================
 
            @(posedge pclk);
 
            t_penable <= 1'b1;
 
 
            //==================================================
            // WAIT FOR PREADY
            //==================================================
 
            timeout_count = 0;
 
            while ((t_o_pready !== 1'b1) &&
                   (timeout_count < 10000)) begin
 
                @(posedge pclk);
                timeout_count++;
 
            end
 
 
            if (t_o_pready !== 1'b1) begin
 
                $display("");
                $display("ERROR : APB READ TIMEOUT");
                $display("ADDR = %h", addr);
                $display("");
 
                $finish;
 
            end
 
 
            //==================================================
            // SAMPLE DUT DATA
            //==================================================
 
            read_value = t_o_prdata;
 
 
            $display(
                "%0t : APB READ DATA = %h",
                $time,
                read_value
            );
 
 
            //==================================================
            // CHECK DATA
            //==================================================
 
            if (read_value[7:0] == expected_data) begin
 
                $display(
                    "%0t : PASS : READ DATA MATCHED : %h",
                    $time,
                    read_value[7:0]
                );
 
            end
            else begin
 
                $display(
                    "%0t : FAIL : EXPECTED=%h GOT=%h",
                    $time,
                    expected_data,
                    read_value[7:0]
                );
 
            end
 
 
            //==================================================
            // CHECK PSLVERR
            //==================================================
 
            if (t_o_pslverr == 1'b0) begin
 
                $display(
                    "%0t : PASS : PSLVERR = 0",
                    $time
                );
 
            end
            else begin
 
                $display(
                    "%0t : FAIL : PSLVERR = 1",
                    $time
                );
 
            end
 
 
            //==================================================
            // RETURN TO IDLE
            //==================================================
 
            @(posedge pclk);
 
            t_psel    <= 1'b0;
            t_penable <= 1'b0;
            t_pwrite  <= 1'b0;
            t_paddr   <= '0;
            t_pwdata  <= '0;
            t_pstrb   <= '0;
 
        end
 
    endtask
 
 
    //==========================================================
    // WAIT FOR I2C TRANSACTION
    //==========================================================
 
    task automatic wait_i2c_done;
 
        integer timeout_count;
 
        begin
 
            //==================================================
            // WAIT FOR BUSY = 1
            //==================================================
 
            timeout_count = 0;
 
            while ((dut.i2cm.busy !== 1'b1) &&
                   (timeout_count < 10000)) begin
 
                @(posedge i2c_clk);
                timeout_count++;
 
            end
 
 
            if (dut.i2cm.busy !== 1'b1) begin
 
                $display("");
                $display("ERROR : I2C BUSY TIMEOUT");
                $display("");
 
                $finish;
 
            end
 
 
            $display(
                "%0t : I2C BUSY = 1",
                $time
            );
 
 
            //==================================================
            // WAIT FOR BUSY = 0
            //==================================================
 
            timeout_count = 0;
 
            while ((dut.i2cm.busy === 1'b1) &&
                   (timeout_count < 10000)) begin
 
                @(posedge i2c_clk);
                timeout_count++;
 
            end
 
 
            if (dut.i2cm.busy === 1'b1) begin
 
                $display("");
                $display("ERROR : I2C TRANSACTION TIMEOUT");
                $display("");
 
                $finish;
 
            end
 
 
            $display(
                "%0t : I2C BUSY = 0",
                $time
            );
 
        end
 
    endtask
 
 
    //==========================================================
    // MAIN TEST
    //==========================================================
 
    initial begin
 
        //======================================================
        // INITIAL VALUES
        //======================================================
 
        presetn   = 1'b0;
 
        // Active-low I2C reset
        i2c_rst_n = 1'b0;
 
        t_paddr   = '0;
        t_pwrite  = 1'b0;
        t_psel    = 1'b0;
        t_penable = 1'b0;
        t_pwdata  = '0;
        t_pstrb   = 4'b1111;
 
        slave_drive_low = 1'b0;
 
        // Data returned by I2C slave during READ
        slave_read_data = 8'hA5;
 
        read_bit_count = 0;
 
 
        //======================================================
        // RESET
        //======================================================
 
        $display("");
        $display("==============================================");
        $display("             RESET");
        $display("==============================================");
 
        $display("I2C RESET ASSERTED : i2c_rst_n = 0");
 
        repeat(5) @(posedge pclk);
 
        // Release APB reset
        presetn = 1'b1;
 
        // Release I2C reset
        i2c_rst_n = 1'b1;
 
        $display("I2C RESET RELEASED : i2c_rst_n = 1");
 
        repeat(5) @(posedge pclk);
 
 
        //======================================================
        // TEST 1 : I2C WRITE
        //======================================================
 
        $display("");
        $display("==============================================");
        $display(" TEST 1 : APB -> TX FIFO -> I2C WRITE");
        $display("==============================================");
 
 
        // CTRL register
        //
        // Address = 0x3001_0010
        //
        // Example:
        //   7-bit slave address = 0x01
        //   R/W = 0 (WRITE)
        //
        // Existing test value retained from uploaded TB.
 
        apb_write(
            32'h3001_0010,
            32'h0000_0102
        );
 
 
        // TX DATA register
 
        apb_write(
            32'h3001_0018,
            32'h0000_0102
        );
 
 
        //======================================================
        // WAIT FOR I2C WRITE TO FINISH
        //======================================================
 
        wait_i2c_done();
 
        $display("WRITE TRANSACTION COMPLETED");
 
 
        //======================================================
        // SECOND TRANSACTION : I2C READ
        //======================================================
 
        $display("");
        $display("==============================================");
        $display(" TEST 2 : APB -> TX FIFO -> I2C READ");
        $display("==============================================");
 
 
        // CTRL register
        //
        // R/W bit = 1
        //
        // Existing test value retained.
 
        apb_write(
            32'h3001_0010,
            32'h0000_8102
        );
 
 
        // TX DATA / command register
 
        apb_write(
            32'h3001_0018,
            32'h0000_8102
        );
 
 
        //======================================================
        // WAIT FOR I2C READ TO FINISH
        //======================================================
 
        wait_i2c_done();
 
 
        $display("I2C READ TRANSACTION COMPLETED");
 
 
        //======================================================
        // WAIT FOR RX FIFO CDC
        //======================================================
 
        repeat(10) @(posedge pclk);
 
 
        //======================================================
        // READ RX DATA
        //======================================================
 
        $display("");
        $display("==============================================");
        $display(" TEST 2 : APB READ FROM RX FIFO");
        $display("==============================================");
 
 
        apb_read_check(
            32'h3001_001C,
            8'hA5
        );
 
 
        $display("READ TRANSACTION COMPLETED");
 
 
        //======================================================
        // FINAL
        //======================================================
 
        $display("");
        $display("==============================================");
        $display(" WRITE TEST : COMPLETED");
        $display(" READ  TEST : COMPLETED");
        $display(" I2C SLAVE  : CONNECTED");
        $display("==============================================");
        $display("");
 
 
        #10000;
 
        $finish;
 
    end
 
 
    //==========================================================
    // APB MONITOR
    //==========================================================
 
    always @(posedge pclk) begin
 
        if (t_psel && t_penable) begin
 
            $display(
                "%0t : APB ACCESS : WRITE=%b ADDR=%h PREADY=%b",
                $time,
                t_pwrite,
                t_paddr,
                t_o_pready
            );
 
        end
 
    end
 
 
    //==========================================================
    // I2C MONITOR
    //==========================================================
 
    always @(posedge i2c_clk) begin
 
        if (dut.i2cm.busy) begin
 
            $display(
                "%0t : I2C BUSY | STATE=%0d | RW=%b | SDA=%b | SCL=%b",
                $time,
                dut.i2cm.state,
                dut.i2cm.rw_reg,
                i2c_sda,
                i2c_scl
            );
 
        end
 
    end
 
 
    //==========================================================
    // FIFO MONITOR
    //==========================================================
 
    always @(posedge i2c_clk) begin
 
        if (dut.fifo_full_tx)
            $display("%0t : TX FIFO FULL", $time);
 
        if (dut.fifo_empty_tx)
            $display("%0t : TX FIFO EMPTY", $time);
 
        if (dut.fifo_full_Rx)
            $display("%0t : RX FIFO FULL", $time);
 
        if (dut.fifo_empty_Rx)
            $display("%0t : RX FIFO EMPTY", $time);
 
    end
 
 
    //==========================================================
    // RESET MONITOR
    //==========================================================
 
    always @(posedge i2c_clk) begin
 
        if (!i2c_rst_n) begin
            $display(
                "%0t : I2C RESET ACTIVE : i2c_rst_n = 0",
                $time
            );
        end
 
    end
 
 
endmodule

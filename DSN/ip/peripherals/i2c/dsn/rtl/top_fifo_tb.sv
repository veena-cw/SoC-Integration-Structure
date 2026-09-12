

//`timescale 1ns/1ps

//module tb_top_fifo;

//    parameter DW = 32;
//    parameter AW = 5;
//    parameter SW = 4;

//    //==========================================================
//    // CLOCKS
//    //==========================================================

//    logic pclk;
//    logic i2c_clk;

//    // APB clock = 100 MHz
//    initial begin
//        pclk = 1'b0;
//        forever #5 pclk = ~pclk;
//    end

//    // I2C controller clock = 50 MHz
//    initial begin
//        i2c_clk = 1'b0;
//        forever #10 i2c_clk = ~i2c_clk;
//    end


//    //==========================================================
//    // RESET
//    //==========================================================

//    logic presetn;
//    logic i2c_rst;


//    //==========================================================
//    // APB SIGNALS
//    //==========================================================

//    logic [AW-1:0] t_paddr;
//    logic          t_pwrite;
//    logic          t_psel;
//    logic          t_penable;
//    logic [DW-1:0] t_pwdata;
//    logic [SW-1:0] t_pstrb;

//    logic [7:0]    i_rd_data;

//    logic [DW-1:0] t_o_prdata;
//    logic          t_o_pslverr;
//    logic          t_o_pready;


//    //==========================================================
//    // I2C SIGNALS
//    //==========================================================

//    logic [7:0] data_out;

//    logic       i2c_scl;
//    tri         i2c_sda;

//    //==========================================================
//    // IMPORTANT
//    //==========================================================
//    // NO I2C SLAVE MODEL
//    //
//    // The testbench does NOT drive i2c_sda.
//    //
//    // Therefore:
//    //     - Master releases SDA -> pullup makes SDA = 1
//    //     - Master drives SDA low -> SDA = 0
//    //
//    // There is NO external ACK.
//    //==========================================================

//    //pullup(i2c_sda);


//    //==========================================================
//    // DUT
//    //==========================================================

//    top_fifo #(
//        .DW(DW),
//        .AW(AW)
//    ) dut (
//        .pclk        (pclk),
//        .presetn     (presetn),

//        .i2c_clk     (i2c_clk),
//        .i2c_rst     (i2c_rst),

//        .t_paddr     (t_paddr),
//        .t_pwrite    (t_pwrite),
//        .t_psel      (t_psel),
//        .t_penable   (t_penable),
//        .t_pwdata    (t_pwdata),
//        .t_pstrb     (t_pstrb),

//        .t_o_prdata  (t_o_prdata),
//        .t_o_pslverr (t_o_pslverr),
//        .t_o_pready  (t_o_pready),

//        .i2c_scl     (i2c_scl),
//        .i2c_sda     (i2c_sda)
//    );


//    //==========================================================
//    // APB WRITE TASK
//    //==========================================================

//    task automatic apb_write(
//        input logic [31:0] addr,
//        input logic [31:0] data
//    );

//        begin

//            //--------------------------------------------------
//            // SETUP PHASE
//            //--------------------------------------------------

//            @(posedge pclk);

//            t_psel    <= 1'b1;
//            t_pwrite  <= 1'b1;
//            t_paddr   <= addr[AW-1:0];
//            t_pwdata  <= data;
//            t_pstrb   <= 4'b1111;


//            //--------------------------------------------------
//            // ACCESS PHASE
//            //--------------------------------------------------

//            @(posedge pclk);

//            t_penable <= 1'b1;


//            //--------------------------------------------------
//            // WAIT FOR PREADY
//            //--------------------------------------------------

//            fork

//                begin
//                    wait(t_o_pready == 1'b1);
//                end

//                begin
//                    repeat(10000) @(posedge pclk);

//                    $display("");
//                    $display("ERROR : APB WRITE TIMEOUT");
//                    $display("");

//                    $finish;
//                end

//            join_any

//            disable fork;


//            $display(
//                "%0t : APB WRITE COMPLETE : ADDR=%h DATA=%h",
//                $time,
//                addr,
//                data
//            );


//            //--------------------------------------------------
//            // RETURN TO IDLE
//            //--------------------------------------------------

//            @(posedge pclk);

//            t_psel    <= 1'b0;
//            t_penable <= 1'b0;
//            t_pwrite  <= 1'b0;
//            t_paddr   <= '0;
//            t_pwdata  <= '0;

//        end

//    endtask


//    //==========================================================
//    // APB READ TASK
//    //==========================================================
//    //
//    // Since there is NO I2C slave, we cannot expect A5.
//    //
//    // This task only checks that APB read completes.
//    //
//    //==========================================================

//    task automatic apb_read(
//        input logic [31:0] addr
//    );

//        logic [31:0] read_value;

//        begin

//            //--------------------------------------------------
//            // SETUP PHASE
//            //--------------------------------------------------

//            @(posedge pclk);

//            t_psel    <= 1'b1;
//            t_pwrite  <= 1'b0;
//            t_paddr   <= addr[AW-1:0];
//            t_pwdata  <= '0;
//            t_pstrb   <= 4'b1111;


//            //--------------------------------------------------
//            // ACCESS PHASE
//            //--------------------------------------------------

//            @(posedge pclk);

//            t_penable <= 1'b1;


//            //--------------------------------------------------
//            // WAIT FOR PREADY
//            //--------------------------------------------------

//            fork

//                begin
//                    wait(t_o_pready == 1'b1);
//                end

//                begin
//                    repeat(10000) @(posedge pclk);

//                    $display("");
//                    $display("ERROR : APB READ TIMEOUT");
//                    $display("");

//                    $finish;
//                end

//            join_any

//            disable fork;


//            //--------------------------------------------------
//            // SAMPLE DUT DATA
//            //--------------------------------------------------

//            read_value = t_o_prdata;

//            $display(
//                "%0t : APB READ DATA = %h",
//                $time,
//                read_value
//            );


//            //--------------------------------------------------
//            // CHECK PSLVERR
//            //--------------------------------------------------

//            if (t_o_pslverr == 1'b0) begin

//                $display(
//                    "%0t : PASS : PSLVERR = 0",
//                    $time
//                );

//            end
//            else begin

//                $display(
//                    "%0t : PSLVERR = 1",
//                    $time
//                );

//            end


//            //--------------------------------------------------
//            // RETURN TO IDLE
//            //--------------------------------------------------

//            @(posedge pclk);

//            t_psel    <= 1'b0;
//            t_penable <= 1'b0;
//            t_pwrite  <= 1'b0;
//            t_paddr   <= '0;

//        end

//    endtask


//    //==========================================================
//    // WAIT FOR I2C TRANSACTION
//    //==========================================================

//    task automatic wait_i2c_done;

//        begin

//            fork

//                begin

//                    wait(dut.i2cm.busy == 1'b1);

//                    $display(
//                        "%0t : I2C BUSY = 1",
//                        $time
//                    );


//                    wait(dut.i2cm.busy == 1'b0);

//                    $display(
//                        "%0t : I2C BUSY = 0",
//                        $time
//                    );

//                end


//                begin

//                    repeat(10000) @(posedge i2c_clk);

//                    $display("");
//                    $display("ERROR : I2C TRANSACTION TIMEOUT");
//                    $display("");

//                    $finish;

//                end

//            join_any

//            disable fork;

//        end

//    endtask


//    //==========================================================
//    // MAIN TEST
//    //==========================================================

//    initial begin

//        //------------------------------------------------------
//        // INITIAL VALUES
//        //------------------------------------------------------

//        presetn = 1'b0;
//        i2c_rst = 1'b1;

//        t_paddr   = '0;
//        t_pwrite  = 1'b0;
//        t_psel    = 1'b0;
//        t_penable = 1'b0;
//        t_pwdata  = '0;
//        t_pstrb   = 4'b1111;


//        //------------------------------------------------------
//        // RESET
//        //------------------------------------------------------

//        $display("");
//        $display("==============================================");
//        $display("             RESET");
//        $display("==============================================");

//        repeat(5) @(posedge pclk);

//        presetn = 1'b1;
//        i2c_rst = 1'b0;

//        repeat(5) @(posedge pclk);


//        //======================================================
//        // TEST 1 : ONE I2C WRITE
//        //======================================================

//        $display("");
//        $display("==============================================");
//        $display(" TEST 1 : APB -> TX FIFO -> I2C WRITE");
//        $display(" WITHOUT I2C SLAVE");
//        $display("==============================================");

//        // Command format:
//        //
//        // bit [11]   = R/W
//        //              0 = WRITE
//        //
//        // bit [10:8] = device select
//        //              000 = I2C
//        //
//        // bit [7:0]  = DATA
//        //
//        // 0000_00A5 = WRITE A5

//        apb_write(
//            32'h0000_0000,
//            32'h0000_00A5
//        );

//        wait_i2c_done();

//        $display("WRITE TRANSACTION COMPLETED");


//        //------------------------------------------------------
//        // Check ACK ERROR
//        //------------------------------------------------------

//        if (dut.i2cm.ack_error == 1'b1) begin

//            $display(
//                "%0t : PASS : I2C ACK ERROR DETECTED",
//                $time
//            );

//        end
//        else begin

//            $display(
//                "%0t : WARNING : NO ACK ERROR DETECTED",
//                $time
//            );

//        end


//        //------------------------------------------------------
//        // Gap
//        //------------------------------------------------------

//        repeat(20) @(posedge pclk);


//        //======================================================
//        // TEST 2 : ONE I2C READ
//        //======================================================

//        $display("");
//        $display("==============================================");
//        $display(" TEST 2 : APB -> TX FIFO -> I2C READ");
//        $display(" WITHOUT I2C SLAVE");
//        $display("==============================================");

//        // bit [11] = 1 -> READ
//        //
//        // bit [10:8] = 000 -> I2C
//        //
//        // bit [7:0] = don't care
//        //
//        // 0000_0800 = READ

//        apb_write(
//            32'h0000_0001,
//            32'h0000_0800
//        );

//        wait_i2c_done();

//        $display("I2C READ TRANSACTION COMPLETED");


//        //------------------------------------------------------
//        // Since no slave exists, SDA is pulled high.
//        //
//        // Therefore read data is NOT expected to be A5.
//        //------------------------------------------------------

//        $display(
//            "%0t : I2C READ DATA FROM MASTER = %h",
//            $time,
//            dut.i2cm.data_out
//        );


//        //------------------------------------------------------
//        // Wait for RX FIFO CDC
//        //------------------------------------------------------

//        repeat(10) @(posedge pclk);


//        //======================================================
//        // TEST 2 : APB READ FROM RX FIFO
//        //======================================================

//        $display("");
//        $display("==============================================");
//        $display(" TEST 2 : APB READ FROM RX FIFO");
//        $display("==============================================");

//        apb_read(
//            32'h0000_0000
//        );


//        //======================================================
//        // FINAL
//        //======================================================

//        $display("");
//        $display("==============================================");
//        $display(" WRITE TEST : COMPLETED");
//        $display(" READ  TEST : COMPLETED");
//        $display(" I2C SLAVE  : NOT CONNECTED");
//        $display("==============================================");
//        $display("");

//        #2000;

//        $finish;

//    end


//    //==========================================================
//    // APB MONITOR
//    //==========================================================

//    always @(posedge pclk) begin

//        if (t_psel && t_penable) begin

//            $display(
//                "%0t : APB ACCESS : WRITE=%b ADDR=%h PREADY=%b",
//                $time,
//                t_pwrite,
//                t_paddr,
//                t_o_pready
//            );

//        end

//    end


//    //==========================================================
//    // I2C MONITOR
//    //==========================================================

//    always @(posedge i2c_clk) begin

//        if (dut.i2cm.busy) begin

//            $display(
//                "%0t : I2C BUSY | STATE=%0d | RW=%b | SDA=%b | SCL=%b",
//                $time,
//                dut.i2cm.state,
//                dut.i2cm.rw_reg,
//                i2c_sda,
//                i2c_scl
//            );

//        end

//    end


//    //==========================================================
//    // FIFO MONITOR
//    //==========================================================

//    always @(posedge i2c_clk) begin

//        if (dut.fifo_full_tx)
//            $display("%0t : TX FIFO FULL", $time);

//        if (dut.fifo_empty_tx)
//            $display("%0t : TX FIFO EMPTY", $time);

//        if (dut.fifo_full_Rx)
//            $display("%0t : RX FIFO FULL", $time);

//        if (dut.fifo_empty_Rx)
//            $display("%0t : RX FIFO EMPTY", $time);

//    end

//endmodule



//`timescale 1ns/1ps

module tb_top_fifo;

    parameter DW = 32;
    parameter AW = 32;
    parameter SW = 4;

    //==========================================================
    // CLOCKS
    //==========================================================

    logic pclk;
    logic i2c_clk;

//     APB clock = 100 MHz
    initial begin
        pclk = 1'b0;
        forever #5 pclk = ~pclk;
    end

     //I2C controller clock = 50 MHz
    initial begin
        i2c_clk = 1'b0;
        forever #10 i2c_clk = ~i2c_clk;
    end


   // ==========================================================
     //RESET
   // ==========================================================

    logic presetn;
    logic i2c_rst;


   // ==========================================================
   //  APB SIGNALS
  //  ==========================================================

    logic [AW-1:0] t_paddr;
    logic          t_pwrite;
    logic          t_psel;
    logic          t_penable;
    logic [DW-1:0] t_pwdata;
    logic [SW-1:0] t_pstrb;
    logic [7 :0]    i_rd_data;

    logic [DW-1:0] t_o_prdata;
    logic          t_o_pslverr;
    logic          t_o_pready;


   // ==========================================================
   //  I2C SIGNALS
   // ==========================================================

    logic [7:0] data_out;

    logic       i2c_irq;
    logic       i2c_scl;
    tri         i2c_sda;

    pullup(i2c_sda);


    //==========================================================
    // I2C SLAVE MODEL
   // ==========================================================

    logic       slave_drive_low;
    logic [7:0] slave_read_data;

    integer read_bit_count;

    // Open-drain SDA
    assign i2c_sda = slave_drive_low ? 1'b0 : 1'bz;


    //==========================================================
    // DUT
   // ==========================================================

    top_fifo #(
        .DW(DW),
        .AW(AW)
    ) dut (
        .pclk        (pclk),
        .presetn     (presetn),

        .i2c_clk     (i2c_clk),
        .i2c_rst     (i2c_rst),

        .t_paddr     (t_paddr),
        .t_pwrite    (t_pwrite),
        .t_psel      (t_psel),
        .t_penable   (t_penable),
        .t_pwdata    (t_pwdata),
        .t_pstrb     (t_pstrb),
       
        .t_o_prdata  (t_o_prdata),
        .t_o_pslverr (t_o_pslverr),
        .t_o_pready  (t_o_pready),

       .i2c_irq(i2c_irq),

        .i2c_scl     (i2c_scl),
        .i2c_sda     (i2c_sda)
    );


   // ==========================================================
   //  I2C SLAVE MODEL
    
   //  WRITE:
     //  Address ACK
     //  Data ACK
    
    // READ:
    //   Address ACK
    //   Slave sends 8'hA5
   // ==========================================================

    always @(negedge i2c_scl) begin

        if (!presetn) begin

            slave_drive_low <= 1'b0;
            read_bit_count  <= 0;

        end
        else begin

           // --------------------------------------------------
            // ADDRESS ACK
           // --------------------------------------------------

            if (dut.i2cm.state == dut.i2cm.ACK1) begin

                slave_drive_low <= 1'b1;
                read_bit_count  <= 0;

            end


           // --------------------------------------------------
           //  READ DATA
           // --------------------------------------------------

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


            //--------------------------------------------------
            // WRITE DATA ACK
           // --------------------------------------------------

            else if ((dut.i2cm.state == dut.i2cm.MASTER_ACK) &&
                     (dut.i2cm.rw_reg == 1'b0)) begin

                slave_drive_low <= 1'b1;
                read_bit_count  <= 0;

            end


            //--------------------------------------------------
            // OTHERWISE RELEASE SDA
           // --------------------------------------------------

            else begin

                slave_drive_low <= 1'b0;

                if (dut.i2cm.state != dut.i2cm.READ_DATA)
                    read_bit_count <= 0;

            end

        end

    end


    /*==========================================================
     APB WRITE TASK
    ========================================================== */

    task automatic apb_write(
        input logic [31:0] addr,
        input logic [31:0] data
    );

        begin

            /*--------------------------------------------------
             SETUP PHASE
            --------------------------------------------------*/

            @(posedge pclk);

            t_psel    <= 1'b1;
            t_pwrite  <= 1'b1;
            t_paddr   <= addr[AW-1:0];
            t_pwdata  <= data;
            t_pstrb   <= 4'b1111;


           /* --------------------------------------------------
             ACCESS PHASE
            -------------------------------------------------- */

            @(posedge pclk);

            t_penable <= 1'b1;


          /*  --------------------------------------------------
             WAIT FOR PREADY
            -------------------------------------------------- */

            fork

                begin
                    wait(t_o_pready == 1'b1);
                end

                begin
                    repeat(10000) @(posedge pclk);

                    $display("");
                    $display("ERROR : APB WRITE TIMEOUT");
                    $display("");

                    $finish;
                end

            join_any

            disable fork;


            $display(
                "%0t : APB WRITE COMPLETE : ADDR=%h DATA=%h",
                $time,
                addr,
                data
            );


           /* --------------------------------------------------
             RETURN TO IDLE
            -------------------------------------------------- */

            @(posedge pclk);

            t_psel    <= 1'b0;
            t_penable <= 1'b0;
            t_pwrite  <= 1'b0;
            t_paddr   <= '0;
            t_pwdata  <= '0;

        end

    endtask


    /* ==========================================================
     APB READ TASK
    
     This READ is used to retrieve data from RX FIFO.
    
     IMPORTANT:
     The task does NOT drive t_o_prdata.
     It checks the actual DUT output.
    ========================================================== */

    task automatic apb_read_check(
        input logic [31:0] addr,
        input logic [7:0]  expected_data
    );

        logic [31:0] read_value;

        begin

           // --------------------------------------------------
           //  SETUP PHASE
           // --------------------------------------------------

            @(posedge pclk);

            t_psel    <= 1'b1;
            t_pwrite  <= 1'b0;
            t_paddr   <= addr[AW-1:0];
            t_pwdata  <= '0;
            t_pstrb   <= 4'b1111;


           // --------------------------------------------------
           //  ACCESS PHASE
           // --------------------------------------------------

            @(posedge pclk);

            t_penable <= 1'b1;


           // --------------------------------------------------
           //  WAIT FOR PREADY
           // --------------------------------------------------

            fork

                begin
                    wait(t_o_pready == 1'b1);
                end

                begin
                    repeat(10000) @(posedge pclk);

                    $display("");
                    $display("ERROR : APB READ TIMEOUT");
                    $display("");

                    $finish;
                end

            join_any

            disable fork;


           // --------------------------------------------------
           //  SAMPLE ACTUAL DUT DATA
           // --------------------------------------------------

            read_value = t_o_prdata;


            $display(
                "%0t : APB READ DATA = %h",
                $time,
                read_value
            );


           // --------------------------------------------------
           //  CHECK DATA
           // --------------------------------------------------

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


          //  --------------------------------------------------
           //  CHECK ERROR
           // --------------------------------------------------

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


//            --------------------------------------------------
  //           RETURN TO IDLE
    //        --------------------------------------------------

            @(posedge pclk);

            t_psel    <= 1'b0;
            t_penable <= 1'b0;
            t_pwrite  <= 1'b0;
            t_paddr   <= '0;

        end

    endtask


    //==========================================================
    // WAIT FOR I2C TRANSACTION
   // ==========================================================

    task automatic wait_i2c_done;

        begin

            fork

                begin

                    wait(dut.i2cm.busy == 1'b1);

                    $display(
                        "%0t : I2C BUSY = 1",
                        $time
                    );

                    wait(dut.i2cm.busy == 1'b0);

                    $display(
                        "%0t : I2C BUSY = 0",
                        $time
                    );

                end

                begin

                    repeat(10000) @(posedge i2c_clk);

                    $display("");
                    $display("ERROR : I2C TRANSACTION TIMEOUT");
                    $display("");

                    $finish;

                end

            join_any

            disable fork;

        end

    endtask


    //==========================================================
    // MAIN TEST
    //==========================================================

    initial begin

       // ------------------------------------------------------
        // INITIAL VALUES
       // ------------------------------------------------------

        presetn = 1'b0;
        i2c_rst = 1'b1;

        t_paddr   = '0;
        t_pwrite  = 1'b0;
        t_psel    = 1'b0;
        t_penable = 1'b0;
        t_pwdata  = '0;
        t_pstrb   = 4'b1111;

        slave_drive_low = 1'b0;

      //   Data returned by I2C slave during READ
       slave_read_data = 8'hA5;

        read_bit_count = 0;


      //  ------------------------------------------------------
       //  RESET
        //------------------------------------------------------

        $display("");
        $display("==============================================");
        $display("             RESET");
        $display("==============================================");

        repeat(5) @(posedge pclk);

        presetn = 1'b1;
        i2c_rst = 1'b0;

        repeat(5) @(posedge pclk);


       // ======================================================
        // TEST 1 : ONE I2C WRITE
       // ======================================================

        $display("");
        $display("==============================================");
        $display(" TEST 1 : APB -> TX FIFO -> I2C WRITE");
        $display("==============================================");

       //  Command format:
        
      //   bit [11]   = R/W
        //              0 = WRITE
        
        // bit [10:8] = device select
          //            000 = I2C
        
      //   bit [7:0]  = DATA
        
        // Therefore:
        
         //0000_00A5 = WRITE A5

        apb_write(
            32'h3001_0010,
            32'h0000_0102
        );
        
         apb_write(
            32'h3001_0018,
            32'h0000_0102
        );


        wait_i2c_done();

        $display("WRITE TRANSACTION COMPLETED");

//#30;
       // ------------------------------------------------------
       //  Gap between transactions
       // ------------------------------------------------------

      //  @(posedge pclk);

apb_write(
            32'h3001_0010,
            32'h0000_8102
        );
        
         apb_write(
            32'h3001_0018,
            32'h0000_8102
        );
        
      wait_i2c_done();
      apb_read_check(
            32'h0000_001C,
            8'hA5
        );
       $display("READ TRANSACTION COMPLETED");
       // ======================================================
       //  TEST 2 : ONE I2C READ
       // ======================================================

        
        $display("");
        $display("==============================================");
        $display(" WRITE TEST : COMPLETED");
        $display(" READ  TEST : COMPLETED");
        $display("==============================================");
        $display("");

        #10000;

        $finish;

    end


   // ==========================================================
   //  APB MONITOR
   // ==========================================================

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


  //  ==========================================================
  //   I2C MONITOR
  //  ==========================================================

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
   //  FIFO MONITOR
   // ==========================================================

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

endmodule
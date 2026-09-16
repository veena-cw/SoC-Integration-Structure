//==============================================================
// top_fifo
//
// RESET CONVENTIONS (both ACTIVE LOW now):
//   presetn    - APB / pclk domain
//   i2c_rst_n  - I2C / i2c_clk domain   <-- was active-HIGH i2c_rst
//
// The raw i2c_rst_n pin is NOT used directly by any flop in the
// I2C domain. It first goes through a reset_synchronizer clocked
// by i2c_clk, producing i2c_rst_n_sync:
//
//   - assertion   : asynchronous (immediate), so the domain is
//                   safely reset even before i2c_clk is running
//   - de-assertion: synchronous to i2c_clk, so no flop in this
//                   domain sees reset release too close to its
//                   own clock edge (recovery/removal timing)
//
// i2c_rst_n_sync drives:
//   - the TX FIFO read-domain reset  (rrst_n)
//   - the RX FIFO write-domain reset (wrst_n)
//   - the i2c command capture register
//   - i2c_master
//
// so the whole I2C domain leaves reset on the same i2c_clk edge.
//==============================================================

module apb_to_i2c_bridge #(
    parameter DW = 32,
    parameter AW = 32,
    localparam SW = int'($ceil(DW/8))
)(
// APB / FIFO WRITE CLOCK DOMAIN
    input  logic pclk,          // 100 MHz
    input  logic presetn,       // ACTIVE LOW

    // I2C / FIFO READ CLOCK DOMAIN
    input  logic i2c_clk,       // 50 MHz
    input  logic i2c_rst_n,     // ACTIVE LOW  (was: i2c_rst, active high)

    input  logic [AW-1:0] t_paddr,
    input  logic          t_pwrite,
    input  logic          t_psel,
    input  logic          t_penable,
    input  logic [DW-1:0] t_pwdata,
    input  logic [SW-1:0] t_pstrb,

    output logic [DW-1:0] t_o_prdata,
    output logic          t_o_pslverr,
    output logic          t_o_pready,

    output logic i2c_irq,

    output logic       i2c_scl,
    inout  logic       i2c_sda
);

  pullup(i2c_sda);

logic i2c_sel ;

localparam I2C_BASE_ADDR = 32'h3001_0000;
localparam I2C_END_ADDR  = 32'h3001_FFFF;

   assign i2c_sel = (t_paddr >= 32'h3001_0000) &&
                 (t_paddr <= 32'h3001_FFFF);

    //logic [7 :0]    i_rd_data;

//-----------------------------------------------------
    logic ready;
    logic ack_error;
    logic busy;
    logic done;
    logic [7:0] data_out;
 //---------------------------------------------------

    logic [31:0] fifo_wr_data_apb;
    logic [7:0] fifo_rd_data_apb;

    logic        fifo_wr_en_apb;
    logic        fifo_rd_en_apb;

    logic        fifo_full_tx;
    logic        fifo_empty_tx;
//----------------------------------
	logic fifo_wr_en_i2c;
	logic fifo_rd_en_i2c;
	logic [7:0] fifo_wr_data_i2c;
	logic [31:0] fifo_rd_data_i2c;

	logic fifo_full_Rx;
	logic fifo_empty_Rx;
//---------------------------------------

    logic [31:0] i2c_cmd_reg;
    logic        i2c_cmd_valid;

//--------------------------------------------
    logic        i2c_fifo_rw;
    logic [2:0]  i2c_fifo_device_sel;
    logic [7:0]  i2c_fifo_data;

    logic [6:0]  i2c_slave_address;


	logic i2c_apb_busy;
	logic i2c_apb_done;

    logic slverr_sync;

    logic in_pslverr;

    logic in_pready;
         logic [7:0] fifo_rd_data_apb_reg;
    //logic apb_pslverr;
   logic i_rd_data_valid;


    //==========================================================
    // I2C DOMAIN RESET SYNCHRONIZER
    //
    // Async assert, sync de-assert. Every flop in the i2c_clk
    // domain below uses i2c_rst_n_sync, never the raw pin.
    //==========================================================

    logic i2c_rst_n_sync;

    reset_synchronizer u_i2c_rst_sync (
        .clk       (i2c_clk),
        .async_reset_n (i2c_rst_n),
        .sync_reset_n  (i2c_rst_n_sync)
    );


    apb_slave #(
        .DW(DW),
        .AW(AW)
    ) apbs (
        .pclk        (pclk),
        .presetn     (presetn),
        .i_paddr     (t_paddr),
        .i_pwrite    (t_pwrite),
        .i_psel      (t_psel),
        .i_penable   (t_penable),
        .i_pwdata    (t_pwdata),
        .i_pstrb     (t_pstrb),
        .o_prdata    (t_o_prdata),
        .o_pslverr   (in_pslverr),
        .o_pready    (in_pready),
		.i2c_busy    (i2c_apb_busy),
		.i2c_done    (i2c_apb_done),
        //======================================================
        // HW INTERFACE
        //======================================================
        .i2c_nack    (slverr_sync),
        .i_rd_data_valid (i_rd_data_valid),

        .fifo_wr_en  (fifo_wr_en_apb),
        .fifo_wr_data(fifo_wr_data_apb),
        .fifo_full   (fifo_full_tx),
        .i_rd_data   (fifo_rd_data_apb_reg)
    );



asynchronous_fifo  #(
        .DEPTH(4),
        .DATA_WIDTH    (32)
    ) fifo_inst_write (

        //======================================================
        // TX FIFO : written by APB (pclk), read by I2C (i2c_clk)
        //======================================================

        .wclk      (pclk),
        .wrst_n    (presetn),
        .rclk      (i2c_clk),
        .rrst_n    (i2c_rst_n_sync),   // synchronized, active low
        .w_en      (fifo_wr_en_apb),
        .r_en      (fifo_rd_en_i2c),
        .data_in   (fifo_wr_data_apb),
        .data_out  (fifo_rd_data_i2c),

        .full      (fifo_full_tx),
        .empty     (fifo_empty_tx)

    );


    asynchronous_fifo  #(
        .DEPTH(4),
        .DATA_WIDTH    (8)
    ) fifo_inst_read (

        //======================================================
        // RX FIFO : written by I2C (i2c_clk), read by APB (pclk)
        //======================================================

        .wclk      (i2c_clk),
        .wrst_n    (i2c_rst_n_sync),   // synchronized, active low
        .rclk      (pclk),
        .rrst_n    (presetn),
        .w_en      (fifo_wr_en_i2c),
        .r_en      (fifo_rd_en_apb),
        .data_in   (fifo_wr_data_i2c),
        .data_out  (fifo_rd_data_apb),
        .full      (fifo_full_Rx),
        .empty     (fifo_empty_Rx)

    );

        //======================================================
        // READ CLOCK DOMAIN
        //=====================================================
        // tx fifo - i2c reads command from apb
        assign fifo_rd_en_i2c = !fifo_empty_tx && !i2c_cmd_valid && !busy;
        // rx fifo - apb reads received byte from i2c
        assign fifo_rd_en_apb = !fifo_empty_Rx;

         always_ff @(posedge i2c_clk or negedge i2c_rst_n_sync) begin
            if (!i2c_rst_n_sync) begin           // ACTIVE LOW
                i2c_cmd_reg   <= '0;
                i2c_cmd_valid <= 1'b0;
            end
            else begin
                if (fifo_rd_en_i2c) begin
                    i2c_cmd_reg   <= fifo_rd_data_i2c;
                    i2c_cmd_valid <= 1'b1;
                end

                else if (i2c_cmd_valid && !busy) begin
                    i2c_cmd_valid <= 1'b0;
                end
            end
        end


// tx -- 32 bit : slave address / r-w / data bits

    assign i2c_fifo_rw = i2c_cmd_reg[15];

    assign i2c_slave_address =
        i2c_cmd_reg[14:8];

    assign i2c_fifo_data =
        i2c_cmd_reg[7:0];


  logic i2c_start;

    assign i2c_start =
             (fifo_rd_en_i2c || fifo_wr_en_i2c)&&
            !busy;


    //==========================================================
    // i2c_master : ACTIVE LOW reset port (rst_n), driven by the
    // synchronized domain reset.
    //==========================================================

    i2c_master i2cm (

        .clk        (i2c_clk),

        .rst_n      (i2c_rst_n_sync),

        .start      (i2c_start),

        .rw         (i2c_fifo_rw),

        .addr       (i2c_slave_address),

        .data_in    (i2c_fifo_data),

        .data_out   (data_out),

        .i2c_scl    (i2c_scl),

        .i2c_sda    (i2c_sda),

        .ready      (ready),

        .ack_error  (ack_error),

        .i2c_irq    (i2c_irq),

        .busy       (busy),

        .done       (done),

		.fifo_wr_en (fifo_wr_en_i2c),    // RX fifo

		.fifo_wr_data(fifo_wr_data_i2c),

		.fifo_full  (fifo_full_Rx)
    );


//assign fifo_rd_data_apb_reg = fifo_rd_data_apb;


   always_ff @(posedge pclk or negedge presetn) begin
    if (!presetn) begin
        fifo_rd_data_apb_reg <= 8'h00;
        i_rd_data_valid <= 0;
    end
    else begin
        if (fifo_rd_en_apb) begin
            fifo_rd_data_apb_reg <= fifo_rd_data_apb;
            i_rd_data_valid <= 1;
        end
    end
end


assign t_o_pslverr = in_pslverr;
assign t_o_pready  = in_pready;


   //==========================================================
   // I2C -> APB status crossings (unchanged)
   // Destination domain is pclk, so these stay on presetn.
   //==========================================================
   synchronizer #(.WIDTH(1))  ff1 ( .clk (pclk),
							.rst_n (presetn),
							.d_in(busy),
							.d_out(i2c_apb_busy));


   synchronizer #(.WIDTH(1))  ff2 ( .clk (pclk),
							.rst_n (presetn),
							.d_in(done),
							.d_out(i2c_apb_done));


   synchronizer #(.WIDTH(1)) ff3 ( .clk (pclk),
							.rst_n (presetn),
							.d_in(ack_error),
							.d_out(slverr_sync));


endmodule

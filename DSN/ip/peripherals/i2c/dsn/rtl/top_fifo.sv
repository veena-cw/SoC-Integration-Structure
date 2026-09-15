//==============================================================
// top_fifo
//
// RESET CONVENTIONS IN THIS MODULE:
//   presetn  - APB domain, ACTIVE LOW
//   i2c_rst  - I2C domain, ACTIVE HIGH
//
// Everything in the I2C domain that needs an active-low reset is
// fed (~i2c_rst): both asynchronous FIFOs and the i2c_master.
//==============================================================

module top_fifo #(
    parameter DW = 32,
    parameter AW = 32,
    localparam SW = int'($ceil(DW/8))
)(
// APB / FIFO WRITE CLOCK DOMAIN
    input  logic pclk,          // 100 MHz
    input  logic presetn,       // ACTIVE LOW

    // I2C / FIFO READ CLOCK DOMAIN
    input  logic i2c_clk,       // 50 MHz
    input  logic i2c_rst,       // ACTIVE HIGH

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
// input logic i2c_irq_en;

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
        // WRITE CLOCK DOMAIN
        //======================================================

        .wclk      (pclk),
        .wrst_n    (presetn),
        .rclk      (i2c_clk),
        .rrst_n    (~i2c_rst),     // i2c_rst is active HIGH
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
        // WRITE CLOCK DOMAIN
        //======================================================

        .wclk      (i2c_clk),
        .wrst_n    (~i2c_rst),     // i2c_rst is active HIGH
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
        //tx fifo- i2c from apb
        assign fifo_rd_en_i2c = !fifo_empty_tx && !i2c_cmd_valid && !busy;
         // rx fifo - apb from rx fifo -- i2c
        assign fifo_rd_en_apb = !fifo_empty_Rx;

         always_ff @(posedge i2c_clk or posedge i2c_rst) begin
            if (i2c_rst) begin           // active HIGH
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


// tx -- 32 bit slave address / r/w / data bits.

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
    // i2c_master uses an ACTIVE LOW reset (rst_n).
    // i2c_rst at this level is ACTIVE HIGH, so it is inverted
    // here - exactly like the two asynchronous FIFOs above.
    //==========================================================

    i2c_master i2cm (

        .clk        (i2c_clk),

        .rst_n      (~i2c_rst),    // <-- POLARITY FIX

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

		.fifo_wr_en (fifo_wr_en_i2c),   // RX fifo

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

   two_ff_synchronizer ff1 ( .clk (pclk),
							.rst_n (presetn),
							.async_in(busy),
							.sync_out(i2c_apb_busy));


   two_ff_synchronizer ff2 ( .clk (pclk),
							.rst_n (presetn),
							.async_in(done),
							.sync_out(i2c_apb_done));


   two_ff_synchronizer ff3 ( .clk (pclk),
							.rst_n (presetn),
							.async_in(ack_error),
							.sync_out(slverr_sync));


endmodule

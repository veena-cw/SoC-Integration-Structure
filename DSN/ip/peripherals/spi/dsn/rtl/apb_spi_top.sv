//=============================================================================
// spi_apb_top.sv
// opensource registers
// APB3/AP-B4 Wrapper for SPI Controller
//=============================================================================
module apb_spi_top(
    // APB Slave Interface
    input  logic         PCLK,
    input  logic         PRESETn,
    input  logic         PSEL,
    input  logic         PENABLE,
    input  logic         PWRITE,
    input  logic [31:0]  PADDR,
    input  logic [31:0]  PWDATA,
    input  logic [3:0]   PSTRB,
    input  logic [2:0]   PPROT,
    output logic [31:0]  PRDATA,
    output logic         PREADY,
    output logic         PSLVERR,
    // SPI Interface
    output logic         sck_o,
    output logic         mosi_o,
    output logic         miso_o,
    output logic [3:0]   cs_n_o,
    output logic         spi_irq
);
    logic        clk;
    logic        rst_n;
    logic [31:0] addr;
    assign clk   = PCLK;
    assign rst_n = PRESETn;
    assign addr  = {16'h0,PADDR[15:0]};
    // Register Offsets
    localparam ADDR_CTRL       = 32'h00;
    localparam ADDR_STATUS     = 32'h04;
    localparam ADDR_IRQ_STAT   = 32'h08;
    localparam ADDR_IRQ_MASK   = 32'h0C;
    localparam ADDR_CLK_DIV    = 32'h10;
    localparam ADDR_TX_DATA    = 32'h14;
    localparam ADDR_RX_DATA    = 32'h18;
    localparam ADDR_FIFO_LVL   = 32'h1C;
    localparam ADDR_ID         = 32'h20;
    localparam ADDR_VERSION    = 32'h24;
    localparam ADDR_SCRATCH0   = 32'h28;
    localparam ADDR_SCRATCH1   = 32'h2C;
    localparam ADDR_SCRATCH2   = 32'h30;
    localparam ADDR_SCRATCH3   = 32'h34;
    localparam ADDR_SCRATCH4   = 32'h38;
    localparam ADDR_SCRATCH5   = 32'h3C;
    // Register Storage

    logic [31:0] ctrl_reg;
    logic [31:0] status_reg;
    logic [31:0] irq_stat_reg;
    logic [31:0] irq_mask_reg;
    logic [31:0] clk_div_reg;
    logic [31:0] tx_data_reg;
    logic [31:0] rx_data_reg;
    logic [31:0] fifo_lvl_reg;
    logic [31:0] id_reg;
    logic [31:0] version_reg;
    logic [31:0] scratch0_reg;
    logic [31:0] scratch1_reg;
    logic [31:0] scratch2_reg;
    logic [31:0] scratch3_reg;
    logic [31:0] scratch4_reg;
    logic [31:0] scratch5_reg;
    
 //=====================================================
// Constant Registers
//=====================================================
assign id_reg      = 32'h5910_017E;  //They are included as identification registers so that software (driver/CPU/OS) can recognize which peripheral it is communicating with.
assign version_reg = 32'h0001_0000;
    // SPI Internal Signals
    logic         m_start;
    logic         m_busy;
    logic         m_done;
    logic         m_tx_we;
    logic         m_rx_re;
    logic         s_tx_we;
    logic         s_rx_re;
    logic         m_tx_full;
    logic         m_tx_empty;
    logic         m_rx_full;
    logic         m_rx_empty;
    logic         s_tx_full;
    logic         s_tx_empty;
    logic         s_rx_full;
    logic         s_rx_empty;
    logic [7:0]   m_rx_data;
    logic [7:0]   s_rx_data;
    logic         irq_tx_empty;
    logic         irq_rx_full;
    logic         irq_done;
    logic         irq_err;
    logic [4:0]   m_tx_count;
    logic [4:0]   m_rx_count;
    logic [4:0]   s_tx_count;
    logic [4:0]   s_rx_count;
;
    // Control Register Mapping

    assign m_start           = ctrl_reg[0];
    assign m_lsb_first_i     = ctrl_reg[1];
    assign m_cpol_i          = ctrl_reg[2];
    assign m_cpha_i          = ctrl_reg[3];
    assign m_cs_inter_byte_i = ctrl_reg[4];
    assign m_cs_sel_i        = ctrl_reg[15:8];
    assign m_cs_setup_i      = ctrl_reg[23:16];
    assign m_cs_hold_i       = ctrl_reg[31:24];
//=====================================================
// CTRL Register
//=====================================================
always_ff @(posedge clk or negedge rst_n)
    if(!rst_n) ctrl_reg <= 32'h0;
    else if(PSEL && PENABLE && PWRITE && (addr == ADDR_CTRL)) ctrl_reg <= PWDATA;
//=====================================================
// IRQ MASK Register
//=====================================================
always_ff @(posedge clk or negedge rst_n)
    if(!rst_n) irq_mask_reg <= 32'h0;
    else if(PSEL && PENABLE && PWRITE && (addr == ADDR_IRQ_MASK))irq_mask_reg <= PWDATA;

//=====================================================
// CLK DIV Register
//=====================================================

always_ff @(posedge clk or negedge rst_n)
    if(!rst_n) clk_div_reg <= 32'h0;
    else if(PSEL && PENABLE && PWRITE && (addr == ADDR_CLK_DIV)) clk_div_reg <= PWDATA;

//=====================================================
// TX DATA Register
//=====================================================

always_ff @(posedge clk or negedge rst_n)
    if(!rst_n) tx_data_reg <= 32'h0;
    else if(PSEL && PENABLE && PWRITE &&(addr == ADDR_TX_DATA)) tx_data_reg <= PWDATA;

assign m_tx_we = PSEL && PENABLE && PWRITE && (addr == ADDR_TX_DATA);
//=====================================================
// RX DATA Register
//=====================================================
always_ff @(posedge clk or negedge rst_n)
    if(!rst_n)rx_data_reg <= 32'h0;
    else if(m_done) rx_data_reg <= {24'h0,m_rx_data};

assign m_rx_re = PSEL && PENABLE && (!PWRITE) && (addr == ADDR_RX_DATA);

//=====================================================
// STATUS Register
//=====================================================

always_ff @(posedge clk or negedge rst_n)
    if(!rst_n) status_reg <= 32'h0;
    else  status_reg <= { 27'h0, m_rx_full, m_rx_empty, m_tx_full, m_tx_empty, m_busy };
//=====================================================
// FIFO LEVEL Register
//=====================================================

always_ff @(posedge clk or negedge rst_n)
    if(!rst_n) fifo_lvl_reg <= 32'h0;
    else fifo_lvl_reg <= {11'h0, m_rx_count,11'h0, m_tx_count };
//=====================================================
// IRQ STATUS Register (Write-1-to-Clear)
//=====================================================
always_ff @(posedge clk or negedge rst_n)
begin
    if(!rst_n)  irq_stat_reg <= 32'h0;
    else begin
        if(irq_tx_empty) irq_stat_reg[0] <= 1'b1;
        if(irq_rx_full) irq_stat_reg[1] <= 1'b1;
        if(irq_done) irq_stat_reg[2] <= 1'b1;
        if(irq_err) irq_stat_reg[3] <= 1'b1;
        if(PSEL && PENABLE && PWRITE &&(addr == ADDR_IRQ_STAT)) irq_stat_reg <= irq_stat_reg & (!PWDATA);
        end
end

//=====================================================
// Scratch Registers
//=====================================================
always_ff @(posedge clk or negedge rst_n)
    if(!rst_n) scratch0_reg <= 32'h0;
    else if(PSEL && PENABLE && PWRITE &&(addr==ADDR_SCRATCH0)) scratch0_reg <= PWDATA;
	
always_ff @(posedge clk or negedge rst_n)
    if(!rst_n) scratch1_reg <= 32'h0;
    else if(PSEL && PENABLE && PWRITE &&(addr==ADDR_SCRATCH1)) scratch1_reg <= PWDATA;

always_ff @(posedge clk or negedge rst_n)
    if(!rst_n) scratch2_reg <= 32'h0;
    else if(PSEL && PENABLE && PWRITE && (addr==ADDR_SCRATCH2)) scratch2_reg <= PWDATA;

always_ff @(posedge clk or negedge rst_n)
    if(!rst_n) scratch3_reg <= 32'h0;
    else if(PSEL && PENABLE && PWRITE && (addr==ADDR_SCRATCH3)) scratch3_reg <= PWDATA;

always_ff @(posedge clk or negedge rst_n)
    if(!rst_n) scratch4_reg <= 32'h0;
    else if(PSEL && PENABLE && PWRITE && (addr==ADDR_SCRATCH4)) scratch4_reg <= PWDATA;

always_ff @(posedge clk or negedge rst_n)
    if(!rst_n) scratch5_reg <= 32'h0;
    else if(PSEL && PENABLE && PWRITE && (addr==ADDR_SCRATCH5)) scratch5_reg <= PWDATA;
//=====================================================
// SPI TOP INSTANCE
//=====================================================
spi_top #(
    .DATA_WIDTH (8),
    .NUM_CS     (4),
    .FIFO_DEPTH (16),
    .DIV_WIDTH  (16),
    .CS_DLY_W   (8)
) u_spi_top (
    .clk_i              (PCLK),
    .rst_ni             (PRESETn),
    //---------------- Master Control ----------------
    .m_cpol_i           (ctrl_reg[2]),
    .m_cpha_i           (ctrl_reg[3]),
    .m_lsb_first_i      (ctrl_reg[1]),
    .m_clk_div_i        (clk_div_reg[15:0]),
    .m_cs_sel_i         (ctrl_reg[15:8]),
    .m_cs_setup_i       (ctrl_reg[23:16]),
    .m_cs_hold_i        (ctrl_reg[31:24]),
    .m_cs_inter_byte_i  (ctrl_reg[4]),
    .m_start_i          (ctrl_reg[0]),
    //---------------- Master TX ----------------
    //.m_tx_we_i    (PSEL && PENABLE && PWRITE && (addr == ADDR_TX_DATA)),
    .m_tx_wdata_i (PWDATA[7:0]),
    .m_tx_we_i          (m_tx_we),
    //.m_tx_wdata_i       (tx_data_reg[7:0]),
    .m_tx_full_o        (m_tx_full),
    .m_tx_empty_o       (m_tx_empty),
    .m_tx_count_o       (m_tx_count),
    //---------------- Master RX ----------------
    .m_rx_re_i          (m_rx_re),
    .m_rx_rdata_o       (m_rx_data),
    .m_rx_full_o        (m_rx_full),
    .m_rx_empty_o       (m_rx_empty),
    .m_rx_count_o       (m_rx_count),
    //---------------- Status ----------------
    .m_busy_o           (m_busy),
    .m_xfer_done_o      (m_done),
    //---------------- Slave ----------------
    .s_cpol_i           (ctrl_reg[2]),
    .s_cpha_i           (ctrl_reg[3]),
    .s_lsb_first_i      (ctrl_reg[1]),
    .s_tx_we_i          (1'b1),
    .s_tx_wdata_i       (8'h0c),
    .s_tx_full_o        (s_tx_full),
    .s_tx_empty_o       (s_tx_empty),
    .s_tx_count_o       (s_tx_count),
    .s_rx_re_i          (1'b1),
    .s_rx_rdata_o       (s_rx_data),
    .s_rx_full_o        (s_rx_full),
    .s_rx_empty_o       (s_rx_empty),
    .s_rx_count_o       (s_rx_count),
    .s_busy_o           (),
    .s_xfer_done_o      (xfer_done_o),
    //---------------- SPI Pins ----------------
    .sck_o              (sck_o),
    .mosi_o             (mosi_o),
    .miso_o             (miso_o),
    .cs_n_o             (cs_n_o),
    //---------------- Interrupts ----------------
    .irq_tx_empty_o     (irq_tx_empty),
    .irq_rx_full_o      (irq_rx_full),
    .irq_done_o         (irq_done),
    .irq_err_o          (irq_err)
);

//=====================================================
// APB READ MUX
//=====================================================
logic addr_hit;
always_comb begin
   PRDATA   = 32'h0000_0000; 
    addr_hit = 1'b1;
    unique case(addr)
        ADDR_CTRL       : PRDATA = ctrl_reg;
        ADDR_STATUS     : PRDATA = status_reg;
        ADDR_IRQ_STAT   : PRDATA = irq_stat_reg;
        ADDR_IRQ_MASK   : PRDATA = irq_mask_reg;
        ADDR_CLK_DIV    : PRDATA = clk_div_reg;
        ADDR_TX_DATA    : PRDATA = tx_data_reg;
        ADDR_RX_DATA    : PRDATA = rx_data_reg;
        ADDR_FIFO_LVL   : PRDATA = fifo_lvl_reg;
        ADDR_ID         : PRDATA = id_reg;
        ADDR_VERSION    : PRDATA = version_reg;
        ADDR_SCRATCH0   : PRDATA = scratch0_reg;
        ADDR_SCRATCH1   : PRDATA = scratch1_reg;
        ADDR_SCRATCH2   : PRDATA = scratch2_reg;
        ADDR_SCRATCH3   : PRDATA = scratch3_reg;
        ADDR_SCRATCH4   : PRDATA = scratch4_reg;
        ADDR_SCRATCH5   : PRDATA = scratch5_reg;
        default : begin
            PRDATA   = 32'h0;
            addr_hit = 1'b0;
        end
    endcase
end

//=====================================================
// Interrupt Generation
//=====================================================
assign spi_irq = (irq_mask_reg[0] & irq_tx_empty) | (irq_mask_reg[1] & irq_rx_full ) |
                 (irq_mask_reg[2] & irq_done    ) | (irq_mask_reg[3] & irq_err     );
				 
//APB Response
assign PREADY  = PSEL & PENABLE;
// Invalid address generates slave error
assign PSLVERR = PSEL & PENABLE & (~addr_hit);

endmodule


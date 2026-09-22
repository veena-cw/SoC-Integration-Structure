module uart_apb_top #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32
)(
    //-----------------------------
    // APB Interface
    //-----------------------------
    input  logic                  PCLK,
    input  logic                  PRESETn,

    input  logic                  PSEL,
    input  logic                  PENABLE,
    input  logic                  PWRITE,

    input  logic [ADDR_WIDTH-1:0] PADDR,
    input  logic [DATA_WIDTH-1:0] PWDATA,
    input  logic [3:0]            PSTRB,

    output logic [DATA_WIDTH-1:0] PRDATA,
    output logic                  PREADY,
    output logic                  PSLVERR,

    //-----------------------------
    // UART External Pins
    //-----------------------------
    input  logic                  rx_i,
    output logic                  tx_o,

    input  logic                  cts_n_i,
    output logic                  rts_n_o,

    output logic                  uart_irq
);

    //------------------------------------------------------------
    // UART Configuration Registers
    //------------------------------------------------------------
    logic [15:0] divisor_reg;
    logic        divisor_load_reg;
    logic [3:0]  data_bits_reg;
    logic        parity_en_reg;
    logic [1:0]  parity_mode_reg;
    logic        stop2_reg;
    logic        flow_en_reg;
    logic [4:0]  rts_thresh_reg;
    logic        tx_wr_en_reg;
    logic [8:0]  tx_wr_data_reg;
    logic        rx_rd_en_reg;
    logic        clear_errors_reg;
    logic        rx_irq_en_reg;
    logic        rx_full_irq_en_reg;
    logic        tx_empty_irq_en_reg;
    logic        err_irq_en_reg;
    //------------------------------------------------------------
    // UART Status Signals
    //------------------------------------------------------------
    logic        tx_full;
    logic        tx_empty;
    logic [4:0]  tx_level;
    logic        rx_full;
    logic        rx_empty;
    logic [8:0]  rx_data;
    logic [4:0]  rx_level;
    logic        frame_err;
    logic        parity_err;
    logic        overrun_err;
    logic        break_err;
	
	 //---------------------------------------------------------
    // APB UART Slave
    //---------------------------------------------------------

 
    uart_top u_uart (
        .clk_i              (PCLK),
        .rst_ni             (PRESETn),
        // Configuration
        .divisor_i          (divisor_reg),
        .divisor_load_i     (divisor_load_reg),
        .data_bits_i        (data_bits_reg),
        .parity_en_i        (parity_en_reg),
        .parity_mode_i      (parity_mode_reg),
        .stop_2_i           (stop2_reg),
        .flow_en_i          (flow_en_reg),
        .rts_thresh_i       (rts_thresh_reg),
        // TX
        .tx_wr_en_i         (tx_wr_en_reg),
        .tx_wr_data_i       (tx_wr_data_reg),

        .tx_full_o          (tx_full),
        .tx_empty_o         (tx_empty),
        .tx_level_o         (tx_level),
        // RX
        .rx_rd_en_i         (rx_rd_en_reg),
        .rx_rd_data_o       (rx_data),
        .rx_full_o          (rx_full),
        .rx_empty_o         (rx_empty),
        .rx_level_o         (rx_level),
        // Error Status
        .frame_err_o        (frame_err),
        .parity_err_o       (parity_err),
        .overrun_o          (overrun_err),
        .break_o            (break_err),
        .clear_errors_i     (clear_errors_reg),
        // IRQ
        .rx_irq_en_i        (rx_irq_en_reg),
        .rx_full_irq_en_i   (rx_full_irq_en_reg),
        .tx_empty_irq_en_i  (tx_empty_irq_en_reg),
        .err_irq_en_i       (err_irq_en_reg),
        .uart_irq              (uart_irq),
        // UART Pins
        .rx_i               (rx_i),
        .tx_o               (tx_o),
        .cts_n_i            (cts_n_i),
        .rts_n_o            (rts_n_o)
    );
	
    // Register Address Map
    localparam DIVISOR_REG_ADDR   = 32'h0000_0000;
    localparam FRAME_REG_ADDR     = 32'h0000_0004;
    localparam FLOW_REG_ADDR      = 32'h0000_0008;
    localparam TXDATA_REG_ADDR    = 32'h0000_000C;
    localparam RXDATA_REG_ADDR    = 32'h0000_0010;
    localparam STATUS_REG_ADDR    = 32'h0000_0014;
    localparam IRQ_REG_ADDR       = 32'h0000_0018;
    localparam CLEAR_REG_ADDR     = 32'h0000_001C;
    // Simple APB Slave
    assign PREADY  = 1'b1;
    assign PSLVERR = 1'b0;
    // APB Write Logic
    always_ff @(posedge PCLK or negedge PRESETn) 
    begin
    if (!PRESETn) begin
        divisor_reg <= 16'd434;
        {divisor_load_reg, parity_en_reg, stop2_reg, flow_en_reg,tx_wr_en_reg, rx_rd_en_reg, clear_errors_reg, rx_irq_en_reg, rx_full_irq_en_reg,tx_empty_irq_en_reg, err_irq_en_reg} <= '0;



        data_bits_reg   <= 4'd8;
        parity_mode_reg <= 2'b00;
        rts_thresh_reg  <= 5'd8;
        tx_wr_data_reg  <= '0;
    end
        else  begin
            // Default pulse signals
            {divisor_load_reg , tx_wr_en_reg,rx_rd_en_reg,clear_errors_reg} <= 1'b0;
            // APB WRITE
if (PSEL && PENABLE && PWRITE)
    case (PADDR)

 DIVISOR_REG_ADDR:
 {divisor_load_reg, divisor_reg}
 <= {1'b1, PWDATA[15:0]};
 FRAME_REG_ADDR:
  {stop2_reg, parity_mode_reg, parity_en_reg, data_bits_reg}
 <= {PWDATA[7], PWDATA[6:5], PWDATA[4], PWDATA[3:0]};

 FLOW_REG_ADDR:
 {rts_thresh_reg, flow_en_reg}
 <= {PWDATA[12:8], PWDATA[0]};
 TXDATA_REG_ADDR: {tx_wr_en_reg, tx_wr_data_reg}
 <= {1'b1, PWDATA[8:0]};
 IRQ_REG_ADDR:
 {err_irq_en_reg, tx_empty_irq_en_reg,
rx_full_irq_en_reg, rx_irq_en_reg}
 <= PWDATA[3:0];
 CLEAR_REG_ADDR:
 clear_errors_reg <= 1'b1;
    endcase
end  
end
// APB Read Logic
always_comb 
begin
    if (PSEL && !PWRITE)
        case (PADDR)
// needs to use always must use flipflops not case
DIVISOR_REG_ADDR:
 PRDATA = {16'h0, divisor_reg};
 FRAME_REG_ADDR:
 PRDATA = {24'h0, stop2_reg, parity_mode_reg,
 parity_en_reg, data_bits_reg};
 FLOW_REG_ADDR:
 PRDATA = {19'h0, rts_thresh_reg, 7'h0, flow_en_reg};
 RXDATA_REG_ADDR:
PRDATA = {23'h0, rx_data};
 STATUS_REG_ADDR:
 PRDATA = {13'h0,
uart_irq,
break_err,
overrun_err,
parity_err,
frame_err,
 rx_level,
tx_level,
rx_empty,
rx_full,
tx_empty,
tx_full};
 IRQ_REG_ADDR:
PRDATA = {28'h0,
err_irq_en_reg,
tx_empty_irq_en_reg,
rx_full_irq_en_reg,
rx_irq_en_reg};
        default:
 PRDATA = 32'h0;
        endcase
    else
 PRDATA = 32'h0;
end
    //------------------------------------------------------------
    // RX FIFO Read Pulse
    //------------------------------------------------------------
    always_ff @(posedge PCLK or negedge PRESETn)
        if(!PRESETn) rx_rd_en_reg <= 1'b0;
        else  rx_rd_en_reg <= (PSEL & PENABLE & (!PWRITE ) & (PADDR == RXDATA_REG_ADDR)) ? 1'b1 : 1'b0;
endmodule


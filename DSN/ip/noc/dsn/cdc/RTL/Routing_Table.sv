module noc_routing_table #(
    parameter int ADDR_WIDTH = 128,
    parameter int DEST_WIDTH = 4
)(
    input  logic [ADDR_WIDTH-1:0] axi_addr,
    output logic [DEST_WIDTH-1:0] dest_sel,

    // APB peripheral selects
    output logic spi_psel,
    output logic i2c_psel,
    output logic uart_psel,
    output logic gpio_psel,
    output logic mipi_psel,
    output logic hdmi_psel,
    output logic timer_psel,
    output logic debug_psel,
    output logic sdemmc_psel
);

    localparam logic [DEST_WIDTH-1:0] LPDDR_PORT    = 4'd0;
    localparam logic [DEST_WIDTH-1:0] SRAM_PORT     = 4'd1;
    localparam logic [DEST_WIDTH-1:0] PCIe_PORT     = 4'd2;
    localparam logic [DEST_WIDTH-1:0] UCIe_PORT     = 4'd3;
    localparam logic [DEST_WIDTH-1:0] ETHERNET_PORT = 4'd4;
    localparam logic [DEST_WIDTH-1:0] USB_PORT      = 4'd5;
	
    localparam logic [DEST_WIDTH-1:0] SDeMMC_PORT    = 4'd6;
    localparam logic [DEST_WIDTH-1:0] CALIPTRA_PORT  = 4'd7;
    localparam logic [DEST_WIDTH-1:0] APB_PORT       = 4'd8;
    localparam logic [DEST_WIDTH-1:0] NVMe_PORT      = 4'd9;
    localparam logic [DEST_WIDTH-1:0] PLIC_PORT      = 4'd10;

  localparam logic [DEST_WIDTH-1:0] ERROR_PORT    = 4'd15;



always_comb begin

    dest_sel = ERROR_PORT;

    spi_psel    = 1'b0;
    i2c_psel    = 1'b0;
    uart_psel   = 1'b0;
    gpio_psel   = 1'b0;
    mipi_psel   = 1'b0;
    hdmi_psel   = 1'b0;
    timer_psel  = 1'b0;
    debug_psel  = 1'b0;

    unique case (axi_addr[31:16])

      16'h1010: dest_sel = PCIe_PORT;
      16'h1020: dest_sel = UCIe_PORT;
      16'h1030: dest_sel = ETHERNET_PORT;
      16'h1040: dest_sel = USB_PORT;
      16'h1050: dest_sel = SDeMMC_PORT;

    

      16'h1060: dest_sel = PLIC_PORT;
      16'h1070: dest_sel = SRAM_PORT;
      16'h1080: dest_sel = LPDDR_PORT;
      16'h1180: dest_sel = NVMe_PORT;

      16'h2000: dest_sel = CALIPTRA_PORT;
      16'h2001: dest_sel = CALIPTRA_PORT;



    16'h3000: begin
    dest_sel = APB_PORT;
    spi_psel = 1'b1;
    end

    16'h3001: begin
    dest_sel = APB_PORT;
    i2c_psel = 1'b1;
    end

    16'h3002: begin
    dest_sel = APB_PORT;
    uart_psel = 1'b1;
    end

    16'h3003: begin
    dest_sel = APB_PORT;
    gpio_psel = 1'b1;
    end

    16'h3004: begin
    dest_sel = APB_PORT;
    mipi_psel = 1'b1;
    end

    16'h3005: begin
    dest_sel = APB_PORT;
    hdmi_psel = 1'b1;
    end

    16'h3006: begin
    dest_sel = APB_PORT;
    timer_psel = 1'b1;
    end

    16'h3007: begin
    dest_sel = APB_PORT;
    debug_psel = 1'b1;
    end

default: dest_sel = ERROR_PORT;

    endcase

end
  
endmodule
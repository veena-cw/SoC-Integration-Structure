// Parameterized Router Arbitration + Forwarding
module noc_router #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 64,
    parameter DEST_WIDTH = 4,   // enough bits for all destinations
    parameter NUM_MASTERS = 4   // configurable number of ingress ports
)(
    input  logic                  clk,
    input  logic                  rst_n,

    // Ingress requests (flattened arrays)
    input  logic [NUM_MASTERS-1:0]              req_valid,
    input  logic [NUM_MASTERS*ADDR_WIDTH-1:0]   req_addr,
    input  logic [NUM_MASTERS*DATA_WIDTH-1:0]   req_data,

    // Destination select
    output logic [DEST_WIDTH-1:0] dest_sel,

    
    output logic                  lpddr_valid,
    output logic [ADDR_WIDTH-1:0] lpddr_addr,
    output logic [DATA_WIDTH-1:0] lpddr_data,

    
    output logic                  sram_valid,
    output logic [ADDR_WIDTH-1:0] sram_addr,
    output logic [DATA_WIDTH-1:0] sram_data,

    output logic                  pcie_valid,
    output logic [ADDR_WIDTH-1:0] pcie_addr,
    output logic [DATA_WIDTH-1:0] pcie_data,

    output logic                  ucie_valid,
    output logic [ADDR_WIDTH-1:0] ucie_addr,
    output logic [DATA_WIDTH-1:0] ucie_data,

  
    output logic                  ethernet_valid,
    output logic [ADDR_WIDTH-1:0] ethernet_addr,
    output logic [DATA_WIDTH-1:0] ethernet_data,

   
    output logic                  usb_valid,
    output logic [ADDR_WIDTH-1:0] usb_addr,
    output logic [DATA_WIDTH-1:0] usb_data,

    
    output logic                  sdemmc_valid,
    output logic [ADDR_WIDTH-1:0] sdemmc_addr,
    output logic [DATA_WIDTH-1:0] sdemmc_data,

    
    output logic                  caliptra_valid,
    output logic [ADDR_WIDTH-1:0] caliptra_addr,
    output logic [DATA_WIDTH-1:0] caliptra_data,

    output logic                  apb_valid,
    output logic [ADDR_WIDTH-1:0] apb_addr,
    output logic [DATA_WIDTH-1:0] apb_data,

    output logic                  nvme_valid,
    output logic [ADDR_WIDTH-1:0] nvme_addr,
    output logic [DATA_WIDTH-1:0] nvme_data,

    output logic                  plic_valid,
    output logic [ADDR_WIDTH-1:0] plic_addr,
    output logic [DATA_WIDTH-1:0] plic_data,
  
  
    output logic                  spi_valid,
    output logic [ADDR_WIDTH-1:0] spi_addr,
    output logic [DATA_WIDTH-1:0] spi_data,

    output logic                  i2c_valid,
    output logic [ADDR_WIDTH-1:0] i2c_addr,
    output logic [DATA_WIDTH-1:0] i2c_data,

    output logic                  uart_valid,
    output logic [ADDR_WIDTH-1:0] uart_addr,
    output logic [DATA_WIDTH-1:0] uart_data,

    output logic                  gpio_valid,
    output logic [ADDR_WIDTH-1:0] gpio_addr,
    output logic [DATA_WIDTH-1:0] gpio_data,

    output logic                  mipi_valid,
    output logic [ADDR_WIDTH-1:0] mipi_addr,
    output logic [DATA_WIDTH-1:0] mipi_data,

    output logic                  hdmi_valid,
    output logic [ADDR_WIDTH-1:0] hdmi_addr,
    output logic [DATA_WIDTH-1:0] hdmi_data,

    output logic                  timer_valid,
    output logic [ADDR_WIDTH-1:0] timer_addr,
    output logic [DATA_WIDTH-1:0] timer_data,

    output logic                  debug_valid,
    output logic [ADDR_WIDTH-1:0] debug_addr,
    output logic [DATA_WIDTH-1:0] debug_data


  
);

    // -------------------------------
    // Round-robin arbitration
    // -------------------------------
    logic [$clog2(NUM_MASTERS)-1:0] grant_idx;
    logic [$clog2(NUM_MASTERS)-1:0] rr_ptr;
	  always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rr_ptr <= '0;
        end else if (|req_valid) begin
            // find next valid master starting from rr_ptr
            automatic int i;
            grant_idx = rr_ptr;
            for (i = 0; i < NUM_MASTERS; i++) begin
                if (req_valid[(rr_ptr+i)%NUM_MASTERS]) begin
                    grant_idx <= (rr_ptr+i)%NUM_MASTERS;
                    rr_ptr    <= (rr_ptr+i+1)%NUM_MASTERS; // advance pointer
                    break;
                end
            end
        end
    end
	// -------------------------------
    // Forward selected request
    // -------------------------------
    logic [ADDR_WIDTH-1:0] sel_addr;
    logic [DATA_WIDTH-1:0] sel_data;
    logic spi_psel;
    logic i2c_psel;
    logic uart_psel;
    logic gpio_psel;
    logic mipi_psel;
    logic hdmi_psel;
    logic timer_psel;
    logic debug_psel;
    logic sdemmc_psel;

    always_comb begin
        sel_addr = req_addr[grant_idx*ADDR_WIDTH +: ADDR_WIDTH];
        sel_data = req_data[grant_idx*DATA_WIDTH +: DATA_WIDTH];
    end

    // Routing table instance
    noc_routing_table #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .DEST_WIDTH(DEST_WIDTH)
    ) u_routing (
        .axi_addr(sel_addr),
        .dest_sel(dest_sel),
        .spi_psel    (spi_psel),
        .i2c_psel    (i2c_psel),
        .uart_psel   (uart_psel),
        .gpio_psel   (gpio_psel),
        .mipi_psel   (mipi_psel),
        .hdmi_psel   (hdmi_psel),
        .timer_psel  (timer_psel),
        .debug_psel  (debug_psel),
        .sdemmc_psel (sdemmc_psel)
    );
	 // Drive egress ports based on dest_sel
        assign lpddr_valid    = (dest_sel == 5'd0);
        assign lpddr_addr     = lpddr_valid ? sel_addr : '0;
        assign lpddr_data     = lpddr_valid ? sel_data : '0;

        assign sram_valid     = (dest_sel == 5'd1);
        assign sram_addr      = sram_valid ? sel_addr : '0;
        assign sram_data      = sram_valid ? sel_data : '0;

        assign PCIe_valid     = (dest_sel == 5'd2);
        assign PCIe_addr      = PCIe_valid ? sel_addr : '0;
        assign PCIe_data      = PCIe_valid ? sel_data : '0;

        assign UCIe_valid     = (dest_sel == 5'd3);
        assign UCIe_addr      = UCIe_valid ? sel_addr : '0;
        assign UCIe_data      = UCIe_valid ? sel_data : '0;

        assign ETHERNET_valid = (dest_sel == 5'd4);
        assign ETHERNET_addr  = ETHERNET_valid ? sel_addr : '0;
        assign ETHERNET_data  = ETHERNET_valid ? sel_data : '0;

        assign USB_valid      = (dest_sel == 5'd5);
        assign USB_addr       = USB_valid ? sel_addr : '0;
        assign USB_data       = USB_valid ? sel_data : '0;

        assign SDeMMC_valid   = (dest_sel == 5'd6);
        assign SDeMMC_addr    = SDeMMC_valid ? sel_addr : '0;
        assign SDeMMC_data    = SDeMMC_valid ? sel_data : '0;

        assign CALIPTRA_valid = (dest_sel == 5'd7);
        assign CALIPTRA_addr  = CALIPTRA_valid ? sel_addr : '0;
        assign CALIPTRA_data  = CALIPTRA_valid ? sel_data : '0;

        assign APB_valid      = (dest_sel == 5'd8);
        assign APB_addr       = APB_valid ? sel_addr : '0;
        assign APB_data       = APB_valid ? sel_data : '0;
	

		assign SPI_valid = spi_psel;
		assign SPI_addr  = spi_psel ? APB_addr : '0;
		assign SPI_data  = spi_psel ? APB_data : '0;

		assign I2C_valid = i2c_psel;
		assign I2C_addr  = i2c_psel ? APB_addr : '0;
		assign I2C_data  = i2c_psel ? APB_data : '0;

		assign UART_valid = uart_psel;
		assign UART_addr  = uart_psel ? APB_addr : '0;
		assign UART_data  = uart_psel ? APB_data : '0;

		assign GPIO_valid = gpio_psel;
		assign GPIO_addr  = gpio_psel ? APB_addr : '0;
		assign GPIO_data  = gpio_psel ? APB_data : '0;

		assign MIPI_valid = mipi_psel;
		assign MIPI_addr  = mipi_psel ? APB_addr : '0;
		assign MIPI_data  = mipi_psel ? APB_data : '0;

		assign HDMI_valid = hdmi_psel;
		assign HDMI_addr  = hdmi_psel ? APB_addr : '0;
		assign HDMI_data  = hdmi_psel ? APB_data : '0;
		
		assign TIMER_valid = timer_psel;
		assign TIMER_addr  = timer_psel ? APB_addr : '0;
		assign TIMER_data  = timer_psel ? APB_data : '0;

		assign DEBUG_valid = debug_psel;
		assign DEBUG_addr  = debug_psel ? APB_addr : '0;
		assign DEBUG_data  = debug_psel ? APB_data : '0;

		assign NVMe_valid = (dest_sel == 5'd9);
        assign NVMe_addr  = NVMe_valid ? sel_addr : '0;
        assign NVMe_data  = NVMe_valid ? sel_data : '0;
	
endmodule
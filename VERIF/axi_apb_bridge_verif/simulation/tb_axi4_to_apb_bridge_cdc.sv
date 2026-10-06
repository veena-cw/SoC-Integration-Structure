`timescale 1ns/1ps
 
//=============================================================================
// tb_axi4_to_apb_bridge_cdc.sv
//
// AXI -> APB bridge verification
//
// Architecture:
//
//       AXI
//        |
//        v
// +-----------------------+
// | axi4_to_apb_bridge    |
// |        _cdc           |
// +-----------------------+
//        |
//        | APB
//        v
// +-----------------------+
// | APB slave decoder     |
// +-----------------------+
//    |    |    |    |
//    v    v    v    v
//   SPI  I2C UART GPIO ...
//    |    |    |
//    +----+----+
//         |
//         v
//    APB response mux
//         |
//         v
//   PRDATA/PREADY/PSLVERR
//         |
//         v
//       DUT
//
// UART/SPI/I2C are real BFMs.
// GPIO/MIPI/HDMI/TIMER/DEBUG use simple dummy APB slaves.
//=============================================================================
 
module tb_axi4_to_apb_bridge_cdc;
 
    parameter AXI_ADDR_WIDTH = 32;
    parameter AXI_DATA_WIDTH = 128;
    parameter APB_DATA_WIDTH = 32;
    parameter AXI_ID_WIDTH   = 4;
 
    localparam AXI_STRB_WIDTH = AXI_DATA_WIDTH / 8;
    localparam APB_STRB_WIDTH = APB_DATA_WIDTH / 8;
    localparam RATIO          = AXI_DATA_WIDTH / APB_DATA_WIDTH;
 
    //=========================================================================
    // Address map
    //=========================================================================
 
    localparam [31:0] SPI_BASE   = 32'h3000_0000;
    localparam [31:0] I2C_BASE   = 32'h3001_0000;
    localparam [31:0] UART_BASE  = 32'h3002_0000;
    localparam [31:0] GPIO_BASE  = 32'h3003_0000;
    localparam [31:0] MIPI_BASE  = 32'h3004_0000;
    localparam [31:0] HDMI_BASE  = 32'h3005_0000;
    localparam [31:0] TIMER_BASE = 32'h3006_0000;
    localparam [31:0] DEBUG_BASE = 32'h3007_0000;
 
    reg [31:0] PERIPH_BASE [0:7];
 
    initial begin
        PERIPH_BASE[0] = SPI_BASE;
        PERIPH_BASE[1] = I2C_BASE;
        PERIPH_BASE[2] = UART_BASE;
        PERIPH_BASE[3] = GPIO_BASE;
        PERIPH_BASE[4] = MIPI_BASE;
        PERIPH_BASE[5] = HDMI_BASE;
        PERIPH_BASE[6] = TIMER_BASE;
        PERIPH_BASE[7] = DEBUG_BASE;
    end
 
    //=========================================================================
    // Clocks and reset
    //=========================================================================
 
    reg ACLK;
    reg PCLK;
 
    reg ARESETn;
    reg PRESETn;
 
    initial begin
        ACLK = 1'b0;
        forever #1.25 ACLK = ~ACLK;
    end
 
    initial begin
        PCLK = 1'b0;
        forever #5 PCLK = ~PCLK;
    end
 
    initial begin
        ARESETn = 1'b0;
        repeat (5) @(posedge ACLK);
        ARESETn = 1'b1;
    end
 
    initial begin
        PRESETn = 1'b0;
        repeat (5) @(posedge PCLK);
        PRESETn = 1'b1;
    end
 
    //=========================================================================
    // AXI WRITE ADDRESS CHANNEL
    //=========================================================================
 
    reg [AXI_ID_WIDTH-1:0]   AWID;
    reg [AXI_ADDR_WIDTH-1:0] AWADDR;
    reg [7:0]                AWLEN;
    reg [2:0]                AWSIZE;
    reg [1:0]                AWBURST;
    reg                      AWLOCK;
    reg [3:0]                AWCACHE;
    reg [2:0]                AWPROT;
    reg                      AWVALID;
 
    wire AWREADY;
 
    //=========================================================================
    // AXI WRITE DATA CHANNEL
    //=========================================================================
 
    reg [AXI_DATA_WIDTH-1:0] WDATA;
    reg [AXI_STRB_WIDTH-1:0] WSTRB;
    reg                      WLAST;
    reg                      WVALID;
 
    wire WREADY;
 
    //=========================================================================
    // AXI WRITE RESPONSE
    //=========================================================================
 
    wire [AXI_ID_WIDTH-1:0] BID;
    wire [1:0]              BRESP;
    wire                    BVALID;
 
    reg BREADY;
 
    //=========================================================================
    // AXI READ ADDRESS
    //=========================================================================
 
    reg [AXI_ID_WIDTH-1:0]   ARID;
    reg [AXI_ADDR_WIDTH-1:0] ARADDR;
    reg [7:0]                ARLEN;
    reg [2:0]                ARSIZE;
    reg [1:0]                ARBURST;
    reg                      ARLOCK;
    reg [3:0]                ARCACHE;
    reg [2:0]                ARPROT;
    reg                      ARVALID;
 
    wire ARREADY;
 
    //=========================================================================
    // AXI READ DATA
    //=========================================================================
 
    wire [AXI_ID_WIDTH-1:0]   RID;
    wire [AXI_DATA_WIDTH-1:0] RDATA;
    wire [1:0]                RRESP;
    wire                      RLAST;
    wire                      RVALID;
 
    reg RREADY;
 
    //=========================================================================
    // APB BUS
    //=========================================================================
 
    wire [AXI_ADDR_WIDTH-1:0] PADDR;
    wire                      PENABLE;
    wire                      PWRITE;
    wire [2:0]                PPROT;
    wire [APB_STRB_WIDTH-1:0] PSTRB;
    wire [APB_DATA_WIDTH-1:0] PWDATA;
 
    reg  [APB_DATA_WIDTH-1:0] PRDATA;
    reg                       PREADY;
    reg                       PSLVERR;
 
    //=========================================================================
    // APB decoder outputs from DUT
    //=========================================================================
 
    wire spi_psel;
    wire i2c_psel;
    wire uart_psel;
    wire gpio_psel;
    wire mipi_psel;
    wire hdmi_psel;
    wire timer_psel;
    wire debug_psel;
 
    wire [7:0] psel_bus;
 
    assign psel_bus = {
        debug_psel,
        timer_psel,
        hdmi_psel,
        mipi_psel,
        gpio_psel,
        uart_psel,
        i2c_psel,
        spi_psel
    };
 
    wire any_psel;
 
    assign any_psel = |psel_bus;
 
    //=========================================================================
    // UART BFM signals
    //=========================================================================
 
    wire [31:0] uart_prdata;
    wire        uart_pready;
    wire        uart_pslverr;
 
    //=========================================================================
    // SPI BFM signals
    //=========================================================================
 
    wire [31:0] spi_prdata;
    wire        spi_pready;
    wire        spi_pslverr;
 
    //=========================================================================
    // I2C BFM signals
    //=========================================================================
 
    wire [31:0] i2c_prdata;
    wire        i2c_pready;
    wire        i2c_pslverr;
 
    //=========================================================================
    // Simple dummy slave response signals
    //=========================================================================
 
    reg [31:0] gpio_prdata;
    reg        gpio_pready;
    reg        gpio_pslverr;
 
    reg [31:0] mipi_prdata;
    reg        mipi_pready;
    reg        mipi_pslverr;
 
    reg [31:0] hdmi_prdata;
    reg        hdmi_pready;
    reg        hdmi_pslverr;
 
    reg [31:0] timer_prdata;
    reg        timer_pready;
    reg        timer_pslverr;
 
    reg [31:0] debug_prdata;
    reg        debug_pready;
    reg        debug_pslverr;
 
    //=========================================================================
    // DUT
    //=========================================================================
 
    axi4_to_apb_bridge_cdc #(
        .AXI_ADDR_WIDTH (AXI_ADDR_WIDTH),
        .AXI_DATA_WIDTH (AXI_DATA_WIDTH),
        .APB_DATA_WIDTH (APB_DATA_WIDTH),
        .AXI_ID_WIDTH   (AXI_ID_WIDTH)
    ) dut (
        .ACLK    (ACLK),
        .ARESETn (ARESETn),
 
        .AWID    (AWID),
        .AWADDR  (AWADDR),
        .AWLEN   (AWLEN),
        .AWSIZE  (AWSIZE),
        .AWBURST (AWBURST),
        .AWLOCK  (AWLOCK),
        .AWCACHE (AWCACHE),
        .AWPROT  (AWPROT),
        .AWVALID (AWVALID),
        .AWREADY (AWREADY),
 
        .WDATA   (WDATA),
        .WSTRB   (WSTRB),
        .WLAST   (WLAST),
        .WVALID  (WVALID),
        .WREADY  (WREADY),
 
        .BID     (BID),
        .BRESP   (BRESP),
        .BVALID  (BVALID),
        .BREADY  (BREADY),
 
        .ARID    (ARID),
        .ARADDR  (ARADDR),
        .ARLEN   (ARLEN),
        .ARSIZE  (ARSIZE),
        .ARBURST (ARBURST),
        .ARLOCK  (ARLOCK),
        .ARCACHE (ARCACHE),
        .ARPROT  (ARPROT),
        .ARVALID (ARVALID),
        .ARREADY (ARREADY),
 
        .RID     (RID),
        .RDATA   (RDATA),
        .RRESP   (RRESP),
        .RLAST   (RLAST),
        .RVALID  (RVALID),
        .RREADY  (RREADY),
 
        .PCLK    (PCLK),
        .PRESETn (PRESETn),
 
        .PADDR   (PADDR),
        .PENABLE (PENABLE),
        .PWRITE  (PWRITE),
        .PPROT   (PPROT),
        .PSTRB   (PSTRB),
        .PWDATA  (PWDATA),
 
        .PRDATA  (PRDATA),
        .PREADY  (PREADY),
        .PSLVERR (PSLVERR),
 
        .spi_psel   (spi_psel),
        .i2c_psel   (i2c_psel),
        .uart_psel  (uart_psel),
        .gpio_psel  (gpio_psel),
        .mipi_psel  (mipi_psel),
        .hdmi_psel  (hdmi_psel),
        .timer_psel (timer_psel),
        .debug_psel (debug_psel)
    );
 
    //=========================================================================
    // UART APB BFM
    //=========================================================================
 
    apb_uart_bfm #(
        .WAIT_CYCLES(0)
    ) uart_bfm (
        .PCLK    (PCLK),
        .PRESETn (PRESETn),
 
        .PSEL    (uart_psel),
        .PENABLE (PENABLE),
        .PWRITE  (PWRITE),
        .PADDR   (PADDR),
        .PWDATA  (PWDATA),
        .PSTRB   (PSTRB),
 
        .PRDATA  (uart_prdata),
        .PREADY  (uart_pready),
        .PSLVERR (uart_pslverr)
    );
 
    //=========================================================================
    // SPI APB BFM
    //=========================================================================
 
    apb_spi_bfm #(
        .WAIT_CYCLES(0)
    ) spi_bfm (
        .PCLK    (PCLK),
        .PRESETn (PRESETn),
 
        .PSEL    (spi_psel),
        .PENABLE (PENABLE),
        .PWRITE  (PWRITE),
        .PADDR   (PADDR),
        .PWDATA  (PWDATA),
        .PSTRB   (PSTRB),
 
        .PRDATA  (spi_prdata),
        .PREADY  (spi_pready),
        .PSLVERR (spi_pslverr)
    );
 
    //=========================================================================
    // I2C APB BFM
    //=========================================================================
 
    apb_i2c_bfm #(
        .WAIT_CYCLES(0)
    ) i2c_bfm (
        .PCLK    (PCLK),
        .PRESETn (PRESETn),
 
        .PSEL    (i2c_psel),
        .PENABLE (PENABLE),
        .PWRITE  (PWRITE),
        .PADDR   (PADDR),
        .PWDATA  (PWDATA),
        .PSTRB   (PSTRB),
 
        .PRDATA  (i2c_prdata),
        .PREADY  (i2c_pready),
        .PSLVERR (i2c_pslverr)
    );
 
    //=========================================================================
    // Dummy APB slaves
    //
    // These are used for:
    // GPIO, MIPI, HDMI, TIMER, DEBUG
    //
    // They provide a simple register-memory behavior.
    //=========================================================================
 
    reg [31:0] dummy_mem [0:4][0:255];
 
    integer d;
    integer a;
 
    initial begin
        for (d = 0; d < 5; d = d + 1) begin
            for (a = 0; a < 256; a = a + 1) begin
                dummy_mem[d][a] = 32'h0;
            end
        end
 
        gpio_prdata  = 32'h0;
        gpio_pready  = 1'b0;
        gpio_pslverr = 1'b0;
 
        mipi_prdata  = 32'h0;
        mipi_pready  = 1'b0;
        mipi_pslverr = 1'b0;
 
        hdmi_prdata  = 32'h0;
        hdmi_pready  = 1'b0;
        hdmi_pslverr = 1'b0;
 
        timer_prdata  = 32'h0;
        timer_pready  = 1'b0;
        timer_pslverr = 1'b0;
 
        debug_prdata  = 32'h0;
        debug_pready  = 1'b0;
        debug_pslverr = 1'b0;
    end
 
    //=========================================================================
    // GPIO dummy slave
    //=========================================================================
 
    always @(posedge PCLK or negedge PRESETn) begin
        if (!PRESETn) begin
            gpio_prdata  <= 32'h0;
            gpio_pready  <= 1'b0;
            gpio_pslverr <= 1'b0;
        end
        else begin
            gpio_pready  <= 1'b0;
            gpio_pslverr <= 1'b0;
 
            if (gpio_psel && PENABLE) begin
 
                gpio_pready <= 1'b1;
 
                if (PWRITE) begin
                    dummy_mem[0][PADDR[9:2]] <= PWDATA;
 
                    $display(
                        "[%0t] GPIO WRITE ADDR=%h DATA=%h",
                        $time,
                        PADDR,
                        PWDATA
                    );
                end
                else begin
                    gpio_prdata <= dummy_mem[0][PADDR[9:2]];
 
                    $display(
                        "[%0t] GPIO READ ADDR=%h DATA=%h",
                        $time,
                        PADDR,
                        dummy_mem[0][PADDR[9:2]]
                    );
                end
            end
        end
    end
 
    //=========================================================================
    // MIPI dummy slave
    //=========================================================================
 
    always @(posedge PCLK or negedge PRESETn) begin
        if (!PRESETn) begin
            mipi_prdata  <= 32'h0;
            mipi_pready  <= 1'b0;
            mipi_pslverr <= 1'b0;
        end
        else begin
            mipi_pready  <= 1'b0;
            mipi_pslverr <= 1'b0;
 
            if (mipi_psel && PENABLE) begin
 
                mipi_pready <= 1'b1;
 
                if (PWRITE) begin
                    dummy_mem[1][PADDR[9:2]] <= PWDATA;
 
                    $display(
                        "[%0t] MIPI WRITE ADDR=%h DATA=%h",
                        $time,
                        PADDR,
                        PWDATA
                    );
                end
                else begin
                    mipi_prdata <= dummy_mem[1][PADDR[9:2]];
 
                    $display(
                        "[%0t] MIPI READ ADDR=%h DATA=%h",
                        $time,
                        PADDR,
                        dummy_mem[1][PADDR[9:2]]
                    );
                end
            end
        end
    end
 
    //=========================================================================
    // HDMI dummy slave
    //=========================================================================
 
    always @(posedge PCLK or negedge PRESETn) begin
        if (!PRESETn) begin
            hdmi_prdata  <= 32'h0;
            hdmi_pready  <= 1'b0;
            hdmi_pslverr <= 1'b0;
        end
        else begin
            hdmi_pready  <= 1'b0;
            hdmi_pslverr <= 1'b0;
 
            if (hdmi_psel && PENABLE) begin
 
                hdmi_pready <= 1'b1;
 
                if (PWRITE) begin
                    dummy_mem[2][PADDR[9:2]] <= PWDATA;
 
                    $display(
                        "[%0t] HDMI WRITE ADDR=%h DATA=%h",
                        $time,
                        PADDR,
                        PWDATA
                    );
                end
                else begin
                    hdmi_prdata <= dummy_mem[2][PADDR[9:2]];
 
                    $display(
                        "[%0t] HDMI READ ADDR=%h DATA=%h",
                        $time,
                        PADDR,
                        dummy_mem[2][PADDR[9:2]]
                    );
                end
            end
        end
    end
 
    //=========================================================================
    // TIMER dummy slave
    //=========================================================================
 
    always @(posedge PCLK or negedge PRESETn) begin
        if (!PRESETn) begin
            timer_prdata  <= 32'h0;
            timer_pready  <= 1'b0;
            timer_pslverr <= 1'b0;
        end
        else begin
            timer_pready  <= 1'b0;
            timer_pslverr <= 1'b0;
 
            if (timer_psel && PENABLE) begin
 
                timer_pready <= 1'b1;
 
                if (PWRITE) begin
                    dummy_mem[3][PADDR[9:2]] <= PWDATA;
 
                    $display(
                        "[%0t] TIMER WRITE ADDR=%h DATA=%h",
                        $time,
                        PADDR,
                        PWDATA
                    );
                end
                else begin
                    timer_prdata <= dummy_mem[3][PADDR[9:2]];
 
                    $display(
                        "[%0t] TIMER READ ADDR=%h DATA=%h",
                        $time,
                        PADDR,
                        dummy_mem[3][PADDR[9:2]]
                    );
                end
            end
        end
    end
 
    //=========================================================================
    // DEBUG dummy slave
    //=========================================================================
 
    always @(posedge PCLK or negedge PRESETn) begin
        if (!PRESETn) begin
            debug_prdata  <= 32'h0;
            debug_pready  <= 1'b0;
            debug_pslverr <= 1'b0;
        end
        else begin
            debug_pready  <= 1'b0;
            debug_pslverr <= 1'b0;
 
            if (debug_psel && PENABLE) begin
 
                debug_pready <= 1'b1;
 
                if (PWRITE) begin
                    dummy_mem[4][PADDR[9:2]] <= PWDATA;
 
                    $display(
                        "[%0t] DEBUG WRITE ADDR=%h DATA=%h",
                        $time,
                        PADDR,
                        PWDATA
                    );
                end
                else begin
                    debug_prdata <= dummy_mem[4][PADDR[9:2]];
 
                    $display(
                        "[%0t] DEBUG READ ADDR=%h DATA=%h",
                        $time,
                        PADDR,
                        dummy_mem[4][PADDR[9:2]]
                    );
                end
            end
        end
    end
 
    //=========================================================================
    // APB RESPONSE MUX
    //
    // This is the important part.
    //
    // Only the selected peripheral is allowed to drive the APB response
    // back to the DUT.
    //=========================================================================
 
    always @(*) begin
 
        PRDATA  = 32'h0000_0000;
        PREADY  = 1'b0;
        PSLVERR = 1'b0;
 
        case (psel_bus)
 
            // SPI
            8'b0000_0001: begin
                PRDATA  = spi_prdata;
                PREADY  = spi_pready;
                PSLVERR = spi_pslverr;
            end
 
            // I2C
            8'b0000_0010: begin
                PRDATA  = i2c_prdata;
                PREADY  = i2c_pready;
                PSLVERR = i2c_pslverr;
            end
 
            // UART
            8'b0000_0100: begin
                PRDATA  = uart_prdata;
                PREADY  = uart_pready;
                PSLVERR = uart_pslverr;
            end
 
            // GPIO
            8'b0000_1000: begin
                PRDATA  = gpio_prdata;
                PREADY  = gpio_pready;
                PSLVERR = gpio_pslverr;
            end
 
            // MIPI
            8'b0001_0000: begin
                PRDATA  = mipi_prdata;
                PREADY  = mipi_pready;
                PSLVERR = mipi_pslverr;
            end
 
            // HDMI
            8'b0010_0000: begin
                PRDATA  = hdmi_prdata;
                PREADY  = hdmi_pready;
                PSLVERR = hdmi_pslverr;
            end
 
            // TIMER
            8'b0100_0000: begin
                PRDATA  = timer_prdata;
                PREADY  = timer_pready;
                PSLVERR = timer_pslverr;
            end
 
            // DEBUG
            8'b1000_0000: begin
                PRDATA  = debug_prdata;
                PREADY  = debug_pready;
                PSLVERR = debug_pslverr;
            end
 
            default: begin
                PRDATA  = 32'h0;
                PREADY  = 1'b0;
                PSLVERR = 1'b0;
            end
 
        endcase
    end
 
    //=========================================================================
    // Initial AXI values
    //=========================================================================
 
    initial begin
 
        AWID    = 0;
        AWADDR  = 0;
        AWLEN   = 0;
        AWSIZE  = 0;
        AWBURST = 0;
        AWLOCK  = 0;
        AWCACHE = 0;
        AWPROT  = 0;
        AWVALID = 0;
 
        WDATA   = 0;
        WSTRB   = 0;
        WLAST   = 0;
        WVALID  = 0;
 
        BREADY  = 0;
 
        ARID    = 0;
        ARADDR  = 0;
        ARLEN   = 0;
        ARSIZE  = 0;
        ARBURST = 0;
        ARLOCK  = 0;
        ARCACHE = 0;
        ARPROT  = 0;
        ARVALID = 0;
 
        RREADY  = 0;
    end
 
    //=========================================================================
    // PSEL name
    //=========================================================================
 
    function automatic [63:0] psel_name(input [7:0] sel);
 
        begin
 
            case (sel)
 
                8'b0000_0001:
                    psel_name = "SPI";
 
                8'b0000_0010:
                    psel_name = "I2C";
 
                8'b0000_0100:
                    psel_name = "UART";
 
                8'b0000_1000:
                    psel_name = "GPIO";
 
                8'b0001_0000:
                    psel_name = "MIPI";
 
                8'b0010_0000:
                    psel_name = "HDMI";
 
                8'b0100_0000:
                    psel_name = "TIMER";
 
                8'b1000_0000:
                    psel_name = "DEBUG";
 
                default:
                    psel_name = "NONE";
 
            endcase
 
        end
 
    endfunction
 
    //=========================================================================
    // PSEL one-hot checker
    //=========================================================================
 
    integer decode_error_count;
 
    initial begin
        decode_error_count = 0;
    end
 
    always @(posedge PCLK) begin
 
        if (PRESETn && PENABLE) begin
 
            if (!$onehot0(psel_bus)) begin
 
                $display(
                    "[%0t] ERROR: Multiple PSEL asserted: %b",
                    $time,
                    psel_bus
                );
 
                decode_error_count =
                    decode_error_count + 1;
            end
 
        end
 
    end
 
    //=========================================================================
    // Also check that PSEL is valid for the current address
    //=========================================================================
 
    always @(posedge PCLK) begin
 
        if (PRESETn && PENABLE) begin
 
            case (PADDR[19:16])
 
                4'h0: begin
                    if (!spi_psel) begin
                        $display(
                            "[%0t] ERROR: SPI address but SPI PSEL not asserted. PADDR=%h",
                            $time, PADDR
                        );
                        decode_error_count++;
                    end
                end
 
                4'h1: begin
                    if (!i2c_psel) begin
                        $display(
                            "[%0t] ERROR: I2C address but I2C PSEL not asserted. PADDR=%h",
                            $time, PADDR
                        );
                        decode_error_count++;
                    end
                end
 
                4'h2: begin
                    if (!uart_psel) begin
                        $display(
                            "[%0t] ERROR: UART address but UART PSEL not asserted. PADDR=%h",
                            $time, PADDR
                        );
                        decode_error_count++;
                    end
                end
 
                4'h3: begin
                    if (!gpio_psel) begin
                        $display(
                            "[%0t] ERROR: GPIO address but GPIO PSEL not asserted. PADDR=%h",
                            $time, PADDR
                        );
                        decode_error_count++;
                    end
                end
 
                4'h4: begin
                    if (!mipi_psel) begin
                        $display(
                            "[%0t] ERROR: MIPI address but MIPI PSEL not asserted. PADDR=%h",
                            $time, PADDR
                        );
                        decode_error_count++;
                    end
                end
 
                4'h5: begin
                    if (!hdmi_psel) begin
                        $display(
                            "[%0t] ERROR: HDMI address but HDMI PSEL not asserted. PADDR=%h",
                            $time, PADDR
                        );
                        decode_error_count++;
                    end
                end
 
                4'h6: begin
                    if (!timer_psel) begin
                        $display(
                            "[%0t] ERROR: TIMER address but TIMER PSEL not asserted. PADDR=%h",
                            $time, PADDR
                        );
                        decode_error_count++;
                    end
                end
 
                4'h7: begin
                    if (!debug_psel) begin
                        $display(
                            "[%0t] ERROR: DEBUG address but DEBUG PSEL not asserted. PADDR=%h",
                            $time, PADDR
                        );
                        decode_error_count++;
                    end
                end
 
            endcase
 
        end
 
    end
 
    //=========================================================================
    // AXI WRITE TASK
    //=========================================================================
 
    task automatic axi_write(
        input [31:0] addr,
        input [AXI_DATA_WIDTH-1:0] data
    );
 
        begin
 
            $display("");
            $display(
                "[%0t] -----------------------------------------",
                $time
            );
 
            $display(
                "[%0t] AXI WRITE START ADDR=%h DATA=%h",
                $time,
                addr,
                data
            );
 
            // Address
            @(posedge ACLK); #0.1; // skew drives off the edge (avoids Verilator NBA-in-task race)
 
            AWID    <= 0;
            AWADDR  <= addr;
            AWLEN   <= 0;
            AWSIZE  <= 3'b100;
            AWBURST <= 2'b01;
            AWLOCK  <= 0;
            AWCACHE <= 0;
            AWPROT  <= 0;
            AWVALID <= 1'b1;
 
            wait (AWREADY);
 
            @(posedge ACLK); #0.1; // skew drives off the edge (avoids Verilator NBA-in-task race)
 
            AWVALID <= 1'b0;
 
            // Write data
            WDATA  <= data;
           // WSTRB  <= {AXI_STRB_WIDTH{1'b1}};
           WSTRB <= 16'b0000_0000_0000_1111;
            WLAST  <= 1'b1;
            WVALID <= 1'b1;
 
            wait (WREADY);
 
            @(posedge ACLK); #0.1; // skew drives off the edge (avoids Verilator NBA-in-task race)
 
            WVALID <= 1'b0;
 
            // Response
            BREADY <= 1'b1;
 
            wait (BVALID);
 
            if (BRESP != 2'b00) begin
 
                $display(
                    "[%0t] AXI WRITE RESPONSE ERROR BRESP=%b",
                    $time,
                    BRESP
                );
 
            end
            else begin
 
                $display(
                    "[%0t] AXI WRITE COMPLETE ADDR=%h",
                    $time,
                    addr
                );
 
            end
 
            @(posedge ACLK); #0.1; // skew drives off the edge (avoids Verilator NBA-in-task race)
 
            BREADY <= 1'b0;
 
        end
 
    endtask
 
    //=========================================================================
    // AXI READ TASK
    //=========================================================================
 
    integer error_count;
 
    initial begin
        error_count = 0;
    end
 
    task automatic axi_read(
        input [31:0] addr,
        input [AXI_DATA_WIDTH-1:0] expected
    );
 
        begin
 
            $display("");
            $display(
                "[%0t] AXI READ START ADDR=%h EXPECTED=%h",
                $time,
                addr,
                expected
            );
 
            @(posedge ACLK); #0.1; // skew drives off the edge (avoids Verilator NBA-in-task race)
 
            ARID    <= 0;
            ARADDR  <= addr;
            ARLEN   <= 0;
            ARSIZE  <= 3'b100;
            ARBURST <= 2'b01;
            ARLOCK  <= 0;
            ARCACHE <= 0;
            ARPROT  <= 0;
            ARVALID <= 1'b1;
 
            wait (ARREADY);
 
            @(posedge ACLK); #0.1; // skew drives off the edge (avoids Verilator NBA-in-task race)
 
            ARVALID <= 1'b0;
 
            RREADY <= 1'b1;
 
            wait (RVALID);
 
            if (RRESP != 2'b00) begin
 
                $display(
                    "[%0t] AXI READ RESPONSE ERROR RRESP=%b",
                    $time,
                    RRESP
                );
 
                error_count = error_count + 1;
 
            end
            else if (RDATA === expected) begin
 
                $display(
                    "[%0t] AXI READ PASS ADDR=%h DATA=%h",
                    $time,
                    addr,
                    RDATA
                );
 
            end
            else begin
 
                $display(
                    "[%0t] AXI READ FAIL ADDR=%h DATA=%h EXPECTED=%h",
                    $time,
                    addr,
                    RDATA,
                    expected
                );
 
                error_count = error_count + 1;
 
            end
 
            @(posedge ACLK); #0.1; // skew drives off the edge (avoids Verilator NBA-in-task race)
 
            RREADY <= 1'b0;
 
        end
 
    endtask
 
    //=========================================================================
    // TEST DATA
    //=========================================================================
 
    reg [AXI_DATA_WIDTH-1:0] test_data [0:7];
    reg [AXI_DATA_WIDTH-1:0] exp_data;
 
    integer idx;
 
    //=========================================================================
    // MAIN TEST
    //=========================================================================
 
    initial begin
 
        wait (ARESETn);
        wait (PRESETn);
 
        repeat (10)
            @(posedge ACLK);
 
        //=====================================================================
        // TEST 1
        // SPI BFM
        //=====================================================================
 
        $display("");
        $display("=================================================");
        $display(" TEST 1 : SPI BFM");
        $display("=================================================");
 
        axi_write(
            SPI_BASE + 32'h0000,
            128'hAAAA_0001_BBBB_0001_CCCC_0001_DEAD_0001
        );
 
        // SPI map: 0x0 TX_DATA, 0x4 RX_DATA (mirrors TX, RO), 0x8 CTRL, 0xC STATUS=1 (RO)
        axi_read(
            SPI_BASE + 32'h0000,
            128'h0000_0001_BBBB_0001_DEAD_0001_DEAD_0001
        );
 
        //=====================================================================
        // TEST 2
        // I2C BFM
        //=====================================================================
 
        $display("");
        $display("=================================================");
        $display(" TEST 2 : I2C BFM");
        $display("=================================================");
 
        axi_write(
            I2C_BASE + 32'h0000,
            128'hAAAA_0002_BBBB_0002_CCCC_0002_DEAD_0002
        );
 
        // I2C map: 0x0 DATA, 0x4 CTRL, 0x8 STATUS=1 (RO), 0xC CLK_DIV
        axi_read(
            I2C_BASE + 32'h0000,
            128'hAAAA_0002_0000_0001_CCCC_0002_DEAD_0002
        );
 
        //=====================================================================
        // TEST 3
        // UART BFM
        //=====================================================================
 
        $display("");
        $display("=================================================");
        $display(" TEST 3 : UART BFM");
        $display("=================================================");
 
        axi_write(
            UART_BASE + 32'h0000,
            128'hAAAA_0003_BBBB_0003_CCCC_0003_DEAD_0003
        );
 
        // UART map: 0x0 DATA, 0x4 STATUS=1 (RO), 0x8 CTRL, 0xC BAUD
        axi_read(
            UART_BASE + 32'h0000,
            128'hAAAA_0003_BBBB_0003_0000_0001_DEAD_0003
        );
 
        //=====================================================================
        // TEST 4
        // All eight decoder windows
        //=====================================================================
 
        $display("");
        $display("=================================================");
        $display(" TEST 4 : ALL APB DECODER WINDOWS");
        $display("=================================================");
 
        for (idx = 0; idx < 8; idx = idx + 1) begin
 
            test_data[idx] =
                128'h1234_5678_9ABC_DEF0_0011_2233_4455_0000
                + idx;
 
            $display(
                "[%0t] Testing peripheral %0d BASE=%h",
                $time,
                idx,
                PERIPH_BASE[idx]
            );
 
            axi_write(
                PERIPH_BASE[idx] + 32'h0000,
                test_data[idx]
            );
 
        end
 
        repeat (5)
            @(posedge ACLK);
 
        for (idx = 0; idx < 8; idx = idx + 1) begin
 
            // SPI/I2C/UART BFMs are register models: patch the read-only
            // words; the dummy slaves (3..7) read back as plain memory.
            exp_data = test_data[idx];
            case (idx)
                0: begin // SPI: RX_DATA mirrors TX, STATUS=1
                    exp_data[63:32]  = test_data[idx][31:0];
                    exp_data[127:96] = 32'h0000_0001;
                end
                1: exp_data[95:64] = 32'h0000_0001; // I2C STATUS
                2: exp_data[63:32] = 32'h0000_0001; // UART STATUS
                default: ;
            endcase
 
            axi_read(
                PERIPH_BASE[idx] + 32'h0000,
                exp_data
            );
 
        end
 
        //=====================================================================
        // TEST 5
        // Multiple registers in UART
        //=====================================================================
 
        $display("");
        $display("=================================================");
        $display(" TEST 5 : UART MULTIPLE REGISTERS");
        $display("=================================================");
 
        axi_write(
            UART_BASE + 32'h0000,
            128'h1111_1111_2222_2222_3333_3333_4444_4444
        );
 
        axi_write(
            UART_BASE + 32'h0010,
            128'hAAAA_AAAA_BBBB_BBBB_CCCC_CCCC_DDDD_DDDD
        );
 
        axi_write(
            UART_BASE + 32'h0020,
            128'h0123_4567_89AB_CDEF_FEDC_BA98_7654_3210
        );
 
        // 0x4 is UART STATUS (RO, reads 1)
        axi_read(
            UART_BASE + 32'h0000,
            128'h1111_1111_2222_2222_0000_0001_4444_4444
        );
 
        // 0x10 is IRQ_STATUS (W1C, reset 0); 0x14-0x1C are unmapped
        axi_read(
            UART_BASE + 32'h0010,
            128'h0
        );
 
        // 0x20-0x2C are unmapped
        axi_read(
            UART_BASE + 32'h0020,
            128'h0
        );
 
        //=====================================================================
        // Final result
        //=====================================================================
 
        repeat (10)
            @(posedge ACLK);
 
        $display("");
        $display("=================================================");
        $display("             FINAL TEST RESULT");
        $display("=================================================");
 
        $display(
            "Data errors   = %0d",
            error_count
        );
 
        $display(
            "Decode errors = %0d",
            decode_error_count
        );
 
        if ((error_count == 0) &&
            (decode_error_count == 0)) begin
 
            $display("");
            $display("***********************************************");
            $display("*              TEST PASSED                   *");
            $display("* AXI -> APB -> Peripheral BFM working       *");
            $display("* Decoder one-hot check PASSED               *");
            $display("***********************************************");
            $display("");
 
        end
        else begin
 
            $display("");
            $display("***********************************************");
            $display("*              TEST FAILED                   *");
            $display("* Data errors   = %0d                       *",
                     error_count);
            $display("* Decode errors = %0d                       *",
                     decode_error_count);
            $display("***********************************************");
            $display("");
 
        end
 
        $finish;
 
    end
 
    //=========================================================================
    // Watchdog
    //=========================================================================
 
    initial begin
 
        #200000;
 
        $display("");
        $display(
            "[%0t] WATCHDOG TIMEOUT",
            $time
        );
 
        $display(
            "PSEL=%b PENABLE=%b PREADY=%b PADDR=%h",
            psel_bus,
            PENABLE,
            PREADY,
            PADDR
        );
 
        $finish;
 
    end
 
    //=========================================================================
    // Waveform
    //=========================================================================
 
    initial begin
 
        $dumpfile("axi4_to_apb_bridge_cdc.vcd");
 
        $dumpvars(
            0,
            tb_axi4_to_apb_bridge_cdc
        );
 
    end
 
endmodule
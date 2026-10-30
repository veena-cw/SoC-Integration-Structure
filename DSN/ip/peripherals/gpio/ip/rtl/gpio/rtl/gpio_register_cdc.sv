//------------------------------------------------------------------------------
// GPIO register block (gclk domain, 50 MHz)
//
//   0x00 IN          R      synchronized pad value
//   0x04 OUT         R/W    output value
//   0x08 DIR         R/W    0 = input, 1 = output
//   0x0C SET         W      OUT |=  data
//   0x10 CLR         W      OUT &= ~data
//   0x14 IRQ_EN      R/W    per-pin interrupt enable
//   0x18 IRQ_STATUS  R/W1C  per-pin pending (rising edge on enabled input pin)
//
//   gpio_irq[b] = OR of IRQ_STATUS bits of bank b (8 pins per bank, 4 banks)
//
//------------------------------------------------------------------------------
module gpio_register_cdc #(
    parameter WIDTH = 32                  // must be 32: 4 banks x 8 pins
)(
    input  logic              sys_clk,
    input  logic              sys_rst,    // active-high

    // Register interface
    input  logic              gpio_we,
    input  logic [31:0]       gpio_adr,
    input  logic [31:0]       gpio_dat_i,
    output logic [31:0]       gpio_dat_o,

    // GPIO pins
    input  logic [WIDTH-1:0]  in_pad_i,
    output logic [WIDTH-1:0]  out_pad_o,
    output logic [WIDTH-1:0]  oen_padoe_o,

    // Interrupts (sys_clk domain), one per bank of 8 pins
    output logic [3:0]        gpio_irq
);

localparam NBANK  = 4;
localparam BANK_W = WIDTH/NBANK;

localparam GPIO_RGPIO_IN   = 32'h00;  // R
localparam GPIO_RGPIO_OUT  = 32'h04;  // R/W
localparam GPIO_RGPIO_DIR  = 32'h08;  // R/W
localparam GPIO_RGPIO_SET  = 32'h0C;  // W
localparam GPIO_RGPIO_CLR  = 32'h10;  // W
localparam GPIO_RGPIO_IEN  = 32'h14;  // R/W
localparam GPIO_RGPIO_ISTS = 32'h18;  // R/W1C

logic [WIDTH-1:0] rgpio_out, rgpio_dir, rgpio_ien, rgpio_ists;
logic [WIDTH-1:0] rgpio_in_q;
(* ASYNC_REG = "TRUE" *) logic [WIDTH-1:0] in_s1, rgpio_in;   // 2-flop input synchronizer
logic [31:0] data_reg;

// ---------------- Input synchronizer + previous value for edge detect ----------------
always_ff @(posedge sys_clk or posedge sys_rst) begin
    if (sys_rst) begin
        in_s1      <= '0;
        rgpio_in   <= '0;
        rgpio_in_q <= '0;
    end else begin
        in_s1      <= in_pad_i;
        rgpio_in   <= in_s1;
        rgpio_in_q <= rgpio_in;
    end
end

// ---------------- Interrupt logic ----------------
logic [WIDTH-1:0] irq_event, ists_clr;

// rising edge, pin enabled, pin configured as input
assign irq_event = rgpio_in & ~rgpio_in_q & rgpio_ien & ~rgpio_dir;

// write-1-to-clear
assign ists_clr  = (gpio_we && gpio_adr == GPIO_RGPIO_ISTS) ? gpio_dat_i[WIDTH-1:0] : '0;

always_ff @(posedge sys_clk or posedge sys_rst) begin
    if (sys_rst) rgpio_ists <= '0;
    else         rgpio_ists <= (rgpio_ists & ~ists_clr) | irq_event;   // new event wins over clear
end

// one interrupt per bank: any pending pin in the bank
always_comb begin
    for (int b = 0; b < NBANK; b++)
        gpio_irq[b] = |rgpio_ists[b*BANK_W +: BANK_W];
end

// ---------------- Write registers ----------------
always_ff @(posedge sys_clk or posedge sys_rst) begin
    if (sys_rst) begin
        rgpio_out <= '0;
        rgpio_dir <= '0;
        rgpio_ien <= '0;
    end
    else if (gpio_we) begin
        case (gpio_adr)
            GPIO_RGPIO_OUT: rgpio_out <= gpio_dat_i[WIDTH-1:0];
            GPIO_RGPIO_DIR: rgpio_dir <= gpio_dat_i[WIDTH-1:0];
            GPIO_RGPIO_SET: rgpio_out <= rgpio_out |  gpio_dat_i[WIDTH-1:0];
            GPIO_RGPIO_CLR: rgpio_out <= rgpio_out & ~gpio_dat_i[WIDTH-1:0];
            GPIO_RGPIO_IEN: rgpio_ien <= gpio_dat_i[WIDTH-1:0];
            default: ;
        endcase
    end
end

logic [WIDTH-1:0] in_rb;
/*Output mode
1
DIR=1, OUT=1

IN read-back = 1


Input mode
0
DIR=0, external input=0

IN read-back = 0*/
assign in_rb = (rgpio_dir & rgpio_out) |
               (~rgpio_dir & rgpio_in);
// ---------------- Read mux (SET/CLR are write-only) ----------------
always_comb begin
    case (gpio_adr)
        GPIO_RGPIO_IN:   data_reg = in_rb;
        GPIO_RGPIO_OUT:  data_reg = rgpio_out;
        GPIO_RGPIO_DIR:  data_reg = rgpio_dir;
        GPIO_RGPIO_IEN:  data_reg = rgpio_ien;
        GPIO_RGPIO_ISTS: data_reg = rgpio_ists;
        default:         data_reg = 32'h0;
    endcase
end

// Read data register
always_ff @(posedge sys_clk or posedge sys_rst) begin
    if (sys_rst) gpio_dat_o <= '0;
    else         gpio_dat_o <= data_reg;
end

// GPIO outputs
assign out_pad_o   = rgpio_out;
assign oen_padoe_o = rgpio_dir;

endmodule

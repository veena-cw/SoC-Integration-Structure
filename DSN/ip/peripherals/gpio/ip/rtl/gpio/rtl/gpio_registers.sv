`timescale 1ns / 1ps

module gpio_registers #(
    parameter WIDTH = 32
)(
    input  logic              sys_clk,
    input  logic              sys_rst,

    // Register interface
    input  logic              gpio_we,
    input  logic [31:0]       gpio_adr,
    input  logic [31:0]       gpio_dat_i,
    output logic [31:0]       gpio_dat_o,

    // GPIO pins
    input  logic [WIDTH-1:0]  in_pad_i,
    output logic [WIDTH-1:0]  out_pad_o,
    output logic [WIDTH-1:0]  oen_padoe_o
);


// Register Addresses


localparam GPIO_RGPIO_IN  = 32'h00;
localparam GPIO_RGPIO_OUT = 32'h04;
localparam GPIO_RGPIO_OE  = 32'h08;


// Registers


logic [WIDTH-1:0] rgpio_in;
logic [WIDTH-1:0] rgpio_out;
logic [WIDTH-1:0] rgpio_oe;

logic [31:0] data_reg;


// Write Registers


always_ff @(posedge sys_clk or posedge sys_rst)
begin
    if (sys_rst)
    begin
        rgpio_out <= '0;
        rgpio_oe  <= '0;
    end
    else if (gpio_we)
    begin
        case (gpio_adr)

            GPIO_RGPIO_OUT:
                rgpio_out <= gpio_dat_i[WIDTH-1:0];

            GPIO_RGPIO_OE:
                rgpio_oe <= gpio_dat_i[WIDTH-1:0];

            default: ;

        endcase
    end
end


// Input Register


always_ff @(posedge sys_clk or posedge sys_rst)
begin
    if (sys_rst)
        rgpio_in <= '0;
    else
        rgpio_in <= in_pad_i;
end


// Read Multiplexer


always_comb
begin
    case (gpio_adr)

        GPIO_RGPIO_IN:
            data_reg = rgpio_in;

        GPIO_RGPIO_OUT:
            data_reg = rgpio_out;

        GPIO_RGPIO_OE:
            data_reg = rgpio_oe;

        default:
            data_reg = 32'h00000000;

    endcase
end


// Read Data Register


always_ff @(posedge sys_clk or posedge sys_rst)
begin
    if (sys_rst)
        gpio_dat_o <= '0;
    else
        gpio_dat_o <= data_reg;
end


// GPIO Outputs


assign out_pad_o   = rgpio_out;
assign oen_padoe_o = rgpio_oe;

endmodule
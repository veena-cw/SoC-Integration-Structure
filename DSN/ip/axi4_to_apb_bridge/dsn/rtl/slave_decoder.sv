module apb_slave_decoder
(
    input  logic [31:0] addr,

    output logic spi_psel,
    output logic i2c_psel,
    output logic uart_psel,
    output logic gpio_psel,
    output logic mipi_psel,
    output logic hdmi_psel,
    output logic timer_psel,
    output logic debug_psel
);

always_comb begin

    spi_psel   = 1'b0;
    i2c_psel   = 1'b0;
    uart_psel  = 1'b0;
    gpio_psel  = 1'b0;
    mipi_psel  = 1'b0;
    hdmi_psel  = 1'b0;
    timer_psel = 1'b0;
    debug_psel = 1'b0;

    unique case(addr[31:16])

        16'h3000: spi_psel   = 1'b1;
        16'h3001: i2c_psel   = 1'b1;
        16'h3002: uart_psel  = 1'b1;
        16'h3003: gpio_psel  = 1'b1;
        16'h3004: mipi_psel  = 1'b1;
        16'h3005: hdmi_psel  = 1'b1;
        16'h3006: timer_psel = 1'b1;
        16'h3007: debug_psel = 1'b1;

        default: ;
    endcase

end

endmodule


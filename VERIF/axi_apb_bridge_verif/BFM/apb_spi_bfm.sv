`timescale 1ns/1ps

module apb_spi_bfm #(
    parameter integer WAIT_CYCLES = 0
)(
    input  wire        PCLK,
    input  wire        PRESETn,

    input  wire        PSEL,
    input  wire        PENABLE,
    input  wire        PWRITE,
    input  wire [31:0] PADDR,
    input  wire [31:0] PWDATA,
    input  wire [3:0]  PSTRB,

    output reg  [31:0] PRDATA,
    output wire        PREADY,
    output wire        PSLVERR
);

    reg [31:0] tx_data_reg;
    reg [31:0] ctrl_reg;
    reg [31:0] clk_div_reg;

    reg [31:0] wait_count;

    wire apb_access = PSEL && PENABLE;

    assign PREADY  = apb_access && (wait_count >= WAIT_CYCLES);
    assign PSLVERR = 1'b0;

    always @(posedge PCLK or negedge PRESETn) begin
        if (!PRESETn)
            wait_count <= 0;
        else if (!apb_access)
            wait_count <= 0;
        else if (!PREADY)
            wait_count <= wait_count + 1;
    end

    // Dummy SPI response: RX_DATA mirrors the last TX_DATA written.
    always @(*) begin
        PRDATA = 32'h0;

        if (PSEL) begin
            case (PADDR[7:0])
                8'h00: PRDATA = tx_data_reg;     // TX_DATA
                8'h04: PRDATA = tx_data_reg;     // RX_DATA
                8'h08: PRDATA = ctrl_reg;        // CTRL
                8'h0C: PRDATA = 32'h0000_0001;   // STATUS: ready
                8'h10: PRDATA = clk_div_reg;     // CLK_DIV
                default: PRDATA = 32'h0;
            endcase
        end
    end

    always @(posedge PCLK or negedge PRESETn) begin
        if (!PRESETn) begin
            tx_data_reg <= 0;
            ctrl_reg    <= 0;
            clk_div_reg <= 1;
        end
        else if (PREADY && PWRITE) begin
            case (PADDR[7:0])
                8'h00: begin
                    if (PSTRB[0]) tx_data_reg[7:0]   <= PWDATA[7:0];
                    if (PSTRB[1]) tx_data_reg[15:8]  <= PWDATA[15:8];
                    if (PSTRB[2]) tx_data_reg[23:16] <= PWDATA[23:16];
                    if (PSTRB[3]) tx_data_reg[31:24] <= PWDATA[31:24];
                end

                8'h08: ctrl_reg <= PWDATA;
                8'h10: clk_div_reg <= PWDATA;

                // RX_DATA and STATUS are read-only
                default: ;
            endcase
        end
    end

endmodule

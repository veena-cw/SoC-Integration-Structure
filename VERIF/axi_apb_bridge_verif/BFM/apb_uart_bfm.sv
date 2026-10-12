`timescale 1ns/1ps

module apb_uart_bfm #(
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

    reg [31:0] data_reg;
    reg [31:0] ctrl_reg;
    reg [31:0] baud_reg;
    reg [31:0] irq_status_reg;

    reg [31:0] wait_count;

    wire apb_access = PSEL && PENABLE;

    assign PREADY  = apb_access && (wait_count >= WAIT_CYCLES);
    assign PSLVERR = 1'b0;

    // Wait-state counter
    always @(posedge PCLK or negedge PRESETn) begin
        if (!PRESETn)
            wait_count <= 0;
        else if (!apb_access)
            wait_count <= 0;
        else if (!PREADY)
            wait_count <= wait_count + 1;
    end

    // Read register map
    always @(*) begin
        PRDATA = 32'h0000_0000;

        if (PSEL) begin
            case (PADDR[7:0])
                8'h00: PRDATA = data_reg;        // DATA
                8'h04: PRDATA = 32'h0000_0001 ;   // STATUS: TX ready
                8'h08: PRDATA = ctrl_reg;        // CTRL
                8'h0C: PRDATA = baud_reg;        // BAUD
                8'h10: PRDATA = irq_status_reg;  // IRQ_STATUS
                default: PRDATA = 32'h0;
            endcase
        end
    end

    // Write register map
    always @(posedge PCLK or negedge PRESETn) begin
        if (!PRESETn) begin
            data_reg       <= 0;
            ctrl_reg       <= 0;
            baud_reg       <= 32'd1;
            irq_status_reg <= 0;
        end
        else if (PREADY && PWRITE) begin
            case (PADDR[7:0])
                8'h00: begin
                    if (PSTRB[0]) data_reg[7:0]   <= PWDATA[7:0];
                    if (PSTRB[1]) data_reg[15:8]  <= PWDATA[15:8];
                    if (PSTRB[2]) data_reg[23:16] <= PWDATA[23:16];
                    if (PSTRB[3]) data_reg[31:24] <= PWDATA[31:24];
                end

                8'h08: ctrl_reg <= PWDATA;
                8'h0C: baud_reg <= PWDATA;

                // Write-one-to-clear
                8'h10: irq_status_reg <= irq_status_reg & ~PWDATA;

                default: ;
            endcase
        end
    end

endmodule

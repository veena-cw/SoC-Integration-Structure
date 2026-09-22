// ------------------------------------------------------------
// uart_if.sv
//
// Per-device interface for the APB_UART IP. Both DUT instances
// (d1 and d2) are apb_uart_top, so both sides of the testbench
// use this SAME interface shape: the APB register port plus the
// serial-side pins (rx_i/tx_o/cts_n_i/rts_n_o/irq_o).
//
// Reset is NOT here. All reset coordination lives in reset_if,
// which every driver/monitor reads for the handshake -- see
// reset_if.sv.
// ------------------------------------------------------------

interface uart_if (
    input logic pclk
);

    // ---- APB register port -----------------------------------
    logic        psel;
    logic        penable;
    logic        pwrite;

    logic [31:0] paddr;
    logic [31:0] pwdata;
    logic [31:0] prdata;
    logic [3:0]  pstrb;

    logic        pready;
    logic        pslverr;

    // ---- Serial side -------------------------------------------
    wire         rx_i;
    wire         tx_o;

    wire         cts_n_i;
    wire         rts_n_o;

    wire         irq_o;

endinterface

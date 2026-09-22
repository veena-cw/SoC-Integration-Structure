// ------------------------------------------------------------
// reset_if.sv — single active-low reset line shared by both
// apb_uart_top DUT instances (d1, d2). reset_driver asserts
// rst_n=0; every other driver/monitor waits on it.
// ------------------------------------------------------------
interface reset_if (input logic clk);
    logic rst_n;
	
	
	initial rst_n = 1'b0;
    // Edge events used by drivers to gate stimulus cleanly
    event reset_asserted;
    event reset_deasserted;

    always @(negedge rst_n) -> reset_asserted;
    always @(posedge rst_n) -> reset_deasserted;

endinterface
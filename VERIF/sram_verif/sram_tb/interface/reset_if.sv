// ------------------------------------------------------------
// reset_if.sv -- one active-low reset line per clock domain.
//
// tb_top instantiates it twice:
//   axi_rst_if  (clk = aclk)     -> sram_top.aresetn
//   sram_rst_if (clk = sram_clk) -> sram_top.sram_resetn
// reset_driver owns rst_n; every other driver/monitor only
// waits on it.
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

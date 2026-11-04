// Bind/instantiate after final top integration if desired. Use this monitor to print AXI beats and transaction data.
module eth_data_display_monitor;

initial $display("ETH data-display monitor: AXI address/data, RGMII reconstructed bytes, descriptor words after descriptor-engine integration");  //Executes this initialization once at simulation start.

endmodule


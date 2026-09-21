`timescale 1ns/1ps  // Implements this testbench declaration or operation.
module rgmii_bfm(rgmii_if rgmii);  // Implements this testbench declaration or operation.
initial  // Implements this testbench declaration or operation.
begin  // Starts this procedural block.
    rgmii.rgmii_rx_clk=0;  // Updates rgmii.rgmii_rx_clk for the current transaction or testbench state.
    rgmii.rgmii_rxd=0;  // Updates rgmii.rgmii_rxd for the current transaction or testbench state.
    rgmii.rgmii_rx_ctl=0;  // Updates rgmii.rgmii_rx_ctl for the current transaction or testbench state.
    forever  // Repeats the following protocol handling continuously.
    #4 rgmii.rgmii_rx_clk=~rgmii.rgmii_rx_clk;  // Updates #4 rgmii.rgmii_rx_clk for the current transaction or testbench state.
end  // Ends this procedural block.
task automatic send_byte(input byte unsigned d,input bit dv,input bit er=0);  // Declares a time-consuming helper task for this protocol operation.
    @(negedge rgmii.rgmii_rx_clk);  // Waits for the next interface clocking event.
    rgmii.rgmii_rxd=d[3:0];  // Updates rgmii.rgmii_rxd for the current transaction or testbench state.
    rgmii.rgmii_rx_ctl=dv;  // Updates rgmii.rgmii_rx_ctl for the current transaction or testbench state.
    @(posedge rgmii.rgmii_rx_clk);  // Waits for the next interface clocking event.
    rgmii.rgmii_rxd=d[7:4];  // Updates rgmii.rgmii_rxd for the current transaction or testbench state.
    rgmii.rgmii_rx_ctl=dv^er;  // Updates rgmii.rgmii_rx_ctl for the current transaction or testbench state.
endtask  // Ends this task.
endmodule  // Implements this testbench declaration or operation.

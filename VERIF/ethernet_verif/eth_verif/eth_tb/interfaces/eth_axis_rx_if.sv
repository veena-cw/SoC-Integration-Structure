interface eth_axis_rx_if(input logic aclk);
    // Passive view of the 8-bit packet stream produced by the MAC RX path.
    logic       aresetn;
    logic [7:0] tdata;
    logic       tvalid;
    logic       tready;
    logic       tlast;
    logic       tuser;
endinterface

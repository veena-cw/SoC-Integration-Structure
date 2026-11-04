interface eth_axis_tx_if(input logic aclk);
    // Passive view of the 8-bit stream delivered from the DMA path to the MAC TX input.
    logic       aresetn;
    logic [7:0] tdata;
    logic       tvalid;
    logic       tready;
    logic       tlast;
    logic       tuser;
endinterface

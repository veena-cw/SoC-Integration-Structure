interface csi2_reset_if(input logic clk);
    logic rst_n = 1'b0;
    // Testbench generation number prevents replay of packets from before reset.
    int unsigned epoch = 0;
    always @(negedge rst_n) epoch = epoch + 1;
    // Assert and release away from the DUT sampling edge.
    clocking drv_cb @(negedge clk);
        default output #0;
        output rst_n;
    endclocking
    clocking mon_cb @(posedge clk);
        default input #0;
        input rst_n;
    endclocking
    modport DRV(clocking drv_cb);
    modport MON(clocking mon_cb);
endinterface

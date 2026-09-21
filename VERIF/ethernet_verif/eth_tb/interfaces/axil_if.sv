`timescale 1ns/1ps  // Implements this testbench declaration or operation.
interface axil_if #(parameter int ADDR_W=12, DATA_W=32)(input logic clk);  // Declares the interface that groups this DUT protocol signals.
    logic rst_n;  // Declares storage used by this testbench object or operation.
    logic [ADDR_W-1:0] awaddr,araddr;  // Declares storage used by this testbench object or operation.
    logic [2:0] awprot,arprot;  // Declares storage used by this testbench object or operation.
    logic awvalid,awready,wvalid,wready,bvalid,bready,arvalid,arready,rvalid,rready;  // Declares storage used by this testbench object or operation.
    logic [DATA_W-1:0] wdata,rdata;  // Declares storage used by this testbench object or operation.
    logic [DATA_W/8-1:0] wstrb;  // Declares storage used by this testbench object or operation.
    logic [1:0] bresp,rresp;  // Declares storage used by this testbench object or operation.
    clocking drv_cb @(posedge clk);  // Defines clock-synchronized access to these interface signals.
        default input #1step output #0;  // Implements this testbench declaration or operation.
        output awaddr,awprot,awvalid,wdata,wstrb,wvalid,bready,araddr,arprot,arvalid,rready;  // Implements this testbench declaration or operation.
        input awready,wready,bresp,bvalid,arready,rdata,rresp,rvalid;  // Implements this testbench declaration or operation.
    endclocking  // Ends this clocking block.
    clocking mon_cb @(posedge clk);  // Defines clock-synchronized access to these interface signals.
        default input #1step;  // Implements this testbench declaration or operation.
        input awaddr,awprot,awvalid,awready,wdata,wstrb,wvalid,wready,bresp,bvalid,bready,araddr,arprot,arvalid,arready,rdata,rresp,rvalid,rready;  // Implements this testbench declaration or operation.
    endclocking  // Ends this clocking block.
endinterface  // Ends this interface definition.

`timescale 1ns/1ps  // Implements this testbench declaration or operation.
interface axi_mem_if #(parameter int ADDR_W=32, DATA_W=64, ID_W=4)(input logic clk);  // Declares the interface that groups this DUT protocol signals.
    logic rst_n;  // Declares storage used by this testbench object or operation.
    logic [ID_W-1:0] awid,bid,arid,rid;  // Declares storage used by this testbench object or operation.
    logic [ADDR_W-1:0] awaddr,araddr;  // Declares storage used by this testbench object or operation.
    logic [7:0] awlen,arlen;  // Declares storage used by this testbench object or operation.
    logic [2:0] awsize,arsize;  // Declares storage used by this testbench object or operation.
    logic [1:0] awburst,arburst,bresp,rresp;  // Declares storage used by this testbench object or operation.
    logic awvalid,awready,wlast,wvalid,wready,bvalid,bready,arvalid,arready,rlast,rvalid,rready;  // Declares storage used by this testbench object or operation.
    logic [DATA_W-1:0] wdata,rdata;  // Declares storage used by this testbench object or operation.
    logic [DATA_W/8-1:0] wstrb;  // Declares storage used by this testbench object or operation.
    clocking slv_cb @(posedge clk);  // Defines clock-synchronized access to these interface signals.
        default input #1step output #0;  // Implements this testbench declaration or operation.
        input awid,awaddr,awlen,awsize,awburst,awvalid,wdata,wstrb,wlast,wvalid,bready,arid,araddr,arlen,arsize,arburst,arvalid,rready;  // Implements this testbench declaration or operation.
        output awready,wready,bid,bresp,bvalid,arready,rid,rdata,rresp,rlast,rvalid;  // Implements this testbench declaration or operation.
    endclocking  // Ends this clocking block.
    clocking mon_cb @(posedge clk);  // Defines clock-synchronized access to these interface signals.
        default input #1step;  // Implements this testbench declaration or operation.
        input awid,awaddr,awlen,awsize,awburst,awvalid,awready,wdata,wstrb,wlast,wvalid,wready,bid,bresp,bvalid,bready,arid,araddr,arlen,arsize,arburst,arvalid,arready,rid,rdata,rresp,rlast,rvalid,rready;  // Implements this testbench declaration or operation.
    endclocking  // Ends this clocking block.
endinterface  // Ends this interface definition.

`timescale 1ns/1ps
interface eth_axi_if #(parameter ADDR_W=64, DATA_W=64, ID_W=4)(input logic aclk);
    // Full AXI memory interface used by the DMA master for payload reads and writes.
    logic aresetn;
    logic [ID_W-1:0] awid, arid, bid, rid;
    logic [ADDR_W-1:0] awaddr, araddr;
    logic [7:0] awlen, arlen;
    logic [2:0] awsize, arsize;
    logic [1:0] awburst, arburst, bresp, rresp;
    logic awlock, arlock;
    logic [3:0] awcache, arcache;
    logic [2:0] awprot, arprot;
    logic awvalid, awready, wvalid, wready, wlast;
    logic bvalid, bready, arvalid, arready, rvalid, rready, rlast;
    logic [DATA_W-1:0] wdata, rdata;
    logic [DATA_W/8-1:0] wstrb;
endinterface

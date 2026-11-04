`timescale 1ns/1ps
interface eth_axil_if #(parameter ADDR_W=32, DATA_W=32)(input logic aclk);
    logic aresetn;
    logic [ADDR_W-1:0] awaddr;
    logic [2:0] awprot;
    logic dut_reset_done;
    logic awvalid, awready;
    logic [DATA_W-1:0] wdata;
    logic [DATA_W/8-1:0] wstrb;
    logic wvalid, wready;
    logic [1:0] bresp;
    logic bvalid, bready;
    logic [ADDR_W-1:0] araddr;
    logic [2:0] arprot;
    logic arvalid, arready;
    logic [DATA_W-1:0] rdata;
    logic [1:0] rresp;
    logic rvalid, rready;
endinterface

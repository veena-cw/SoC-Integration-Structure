`timescale 1ns/1ps

interface csi2_axi4_lite_if(input logic aclk);
  logic        areset_n;

  logic [31:0] awaddr;
  logic        awvalid;
  logic        awready;
  logic [31:0] wdata;
  logic [3:0]  wstrb;
  logic        wvalid;
  logic        wready;
  logic [1:0]  bresp;
  logic        bvalid;
  logic        bready;

  logic [31:0] araddr;
  logic        arvalid;
  logic        arready;
  logic [31:0] rdata;
  logic [1:0]  rresp;
  logic        rvalid;
  logic        rready;

  clocking drv_cb @(posedge aclk);
    default input #1step output #0;
    input  areset_n;
    output awaddr, awvalid, wdata, wstrb, wvalid, bready;
    input  awready, wready, bresp, bvalid;
    output araddr, arvalid, rready;
    input  arready, rdata, rresp, rvalid;
  endclocking

  clocking mon_cb @(posedge aclk);
    default input #1step;
    input areset_n;
    input awaddr, awvalid, awready;
    input wdata, wstrb, wvalid, wready;
    input bresp, bvalid, bready;
    input araddr, arvalid, arready;
    input rdata, rresp, rvalid, rready;
  endclocking

  modport DRIVER(clocking drv_cb);
  modport MONITOR(clocking mon_cb);
endinterface : csi2_axi4_lite_if

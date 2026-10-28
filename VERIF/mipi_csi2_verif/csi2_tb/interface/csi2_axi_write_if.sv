`timescale 1ns/1ps

interface csi2_axi_write_if #(
  parameter int unsigned DATA_WIDTH = `wdata,
  parameter int unsigned STRB_WIDTH = `wstrb
)(
  input logic aclk
);

  logic areset_n;

  logic        awvalid;
  logic        awready;
  logic [31:0] awid;
  logic [31:0] awaddr;
  logic [7:0]  awlen;
  logic [2:0]  awsize;
  logic [1:0]  awburst;
  logic [3:0]  awcache;
  logic [2:0]  awprot;
  logic [3:0]  awqos;
  logic [3:0]  awregion;

  logic                  wvalid;
  logic                  wready;
  logic                  wlast;
  logic [DATA_WIDTH-1:0] wdata;
  logic [STRB_WIDTH-1:0] wstrb;

  logic       bvalid;
  logic       bready;
  logic [1:0] bresp;

  // A W-channel handshake with no asserted byte strobe does not write data.
  logic effective_write;
  assign effective_write = wvalid && wready && (|wstrb);

  clocking mon_cb @(posedge aclk);
    default input #1step;
    input areset_n;
    input awvalid, awready, awid, awaddr, awlen, awsize, awburst;
    input awcache, awprot, awqos, awregion;
    input wvalid, wready, wlast, wdata, wstrb, effective_write;
    input bvalid, bready, bresp;
  endclocking

  modport MONITOR(clocking mon_cb);

endinterface : csi2_axi_write_if

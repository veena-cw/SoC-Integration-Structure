// ------------------------------------------------------------
// axi_if.sv
//
// AXI4 interface between the TB master (axi_agent) and
// sram_top's s_axi_* slave port. aresetn is an input so this
// interface never drives reset -- reset_if owns it.
//
// mst_cb : used by axi_driver to sample slave outputs one step
//          before the edge (master outputs are driven with NBAs).
// mon_cb : used by axi_monitor (samples everything).
// ------------------------------------------------------------
`include "axi_defines.svh"

interface axi_if (
    input logic aclk,
    input logic aresetn
);

    // ---- Write address channel --------------------------------
    logic [`AXI_ID_WIDTH-1:0]   awid;
    logic [`AXI_ADDR_WIDTH-1:0] awaddr;
    logic [7:0]                 awlen;
    logic [2:0]                 awsize;
    logic [1:0]                 awburst;
    logic                       awlock;
    logic [3:0]                 awcache;
    logic [2:0]                 awprot;
    logic [3:0]                 awqos;
    logic                       awvalid;
    logic                       awready;

    // ---- Write data channel -----------------------------------
    logic [`AXI_DATA_WIDTH-1:0] wdata;
    logic [`AXI_STRB_WIDTH-1:0] wstrb;
    logic                       wlast;
    logic                       wvalid;
    logic                       wready;

    // ---- Write response channel -------------------------------
    logic [`AXI_ID_WIDTH-1:0]   bid;
    logic [1:0]                 bresp;
    logic                       bvalid;
    logic                       bready;

    // ---- Read address channel ---------------------------------
    logic [`AXI_ID_WIDTH-1:0]   arid;
    logic [`AXI_ADDR_WIDTH-1:0] araddr;
    logic [7:0]                 arlen;
    logic [2:0]                 arsize;
    logic [1:0]                 arburst;
    logic                       arlock;
    logic [3:0]                 arcache;
    logic [2:0]                 arprot;
    logic [3:0]                 arqos;
    logic                       arvalid;
    logic                       arready;

    // ---- Read data channel ------------------------------------
    logic [`AXI_ID_WIDTH-1:0]   rid;
    logic [`AXI_DATA_WIDTH-1:0] rdata;
    logic [1:0]                 rresp;
    logic                       rlast;
    logic                       rvalid;
    logic                       rready;

    // Driver samples slave outputs through mst_cb; it drives the
    // master outputs with plain NBAs right after each mst_cb event
    // (race-free at the posedge) instead of clocking-block drives,
    // whose timing differs between simulators (Verilator applies a
    // drive issued outside the clocking event one cycle late).
    clocking mst_cb @(posedge aclk);
        default input #1step;
        input awready, wready;
        input bid, bresp, bvalid;
        input arready;
        input rid, rdata, rresp, rlast, rvalid;
    endclocking

    clocking mon_cb @(posedge aclk);
        default input #1step;
        input awid, awaddr, awlen, awsize, awburst, awlock, awcache,
              awprot, awqos, awvalid, awready;
        input wdata, wstrb, wlast, wvalid, wready;
        input bid, bresp, bvalid, bready;
        input arid, araddr, arlen, arsize, arburst, arlock, arcache,
              arprot, arqos, arvalid, arready;
        input rid, rdata, rresp, rlast, rvalid, rready;
    endclocking

endinterface

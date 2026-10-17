// ------------------------------------------------------------
// axi_if.sv
//
// AXI4 interface between the TB master (axi_agent) and
// sram_top's s_axi_* slave port. aresetn is an input so this
// interface never drives reset -- reset_if owns it.
//
// Carries the full AXI4 signal set. AxREGION and the xUSER
// signals have no sram_top port: tb_top ties BUSER/RUSER to 0 and
// the driver keeps AxREGION/AxUSER/WUSER at 0 unless the matching
// axi_agent_config knob is set.
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
    logic [`AXI_REGION_WIDTH-1:0] awregion;
    logic [`AXI_USER_WIDTH-1:0] awuser;
    logic                       awvalid;
    logic                       awready;

    // ---- Write data channel -----------------------------------
    logic [`AXI_DATA_WIDTH-1:0] wdata;
    logic [`AXI_STRB_WIDTH-1:0] wstrb;
    logic                       wlast;
    logic [`AXI_USER_WIDTH-1:0] wuser;
    logic                       wvalid;
    logic                       wready;

    // ---- Write response channel -------------------------------
    logic [`AXI_ID_WIDTH-1:0]   bid;
    logic [1:0]                 bresp;
    logic [`AXI_USER_WIDTH-1:0] buser;
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
    logic [`AXI_REGION_WIDTH-1:0] arregion;
    logic [`AXI_USER_WIDTH-1:0] aruser;
    logic                       arvalid;
    logic                       arready;

    // ---- Read data channel ------------------------------------
    logic [`AXI_ID_WIDTH-1:0]   rid;
    logic [`AXI_DATA_WIDTH-1:0] rdata;
    logic [1:0]                 rresp;
    logic                       rlast;
    logic [`AXI_USER_WIDTH-1:0] ruser;
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
        input bid, bresp, buser, bvalid;
        input arready;
        input rid, rdata, rresp, rlast, ruser, rvalid;
    endclocking

    clocking mon_cb @(posedge aclk);
        default input #1step;
        input awid, awaddr, awlen, awsize, awburst, awlock, awcache,
              awprot, awqos, awregion, awuser, awvalid, awready;
        input wdata, wstrb, wlast, wuser, wvalid, wready;
        input bid, bresp, buser, bvalid, bready;
        input arid, araddr, arlen, arsize, arburst, arlock, arcache,
              arprot, arqos, arregion, aruser, arvalid, arready;
        input rid, rdata, rresp, rlast, ruser, rvalid, rready;
    endclocking

endinterface

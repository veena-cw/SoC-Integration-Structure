// cpu_axi_if.sv
// AXI4 master interface for cpu_top's bridge output.
// The widths are parameters so the interface can match cpu_top's
// ID_WIDTH, paddr_width_p, and AXI_DATA_WIDTH parameters.

`ifndef CPU_AXI_DATA_WIDTH
  `define CPU_AXI_DATA_WIDTH 128
`endif
`ifndef CPU_AXI_ADDR_WIDTH
  `define CPU_AXI_ADDR_WIDTH 64
`endif
`ifndef CPU_AXI_ID_WIDTH
  `define CPU_AXI_ID_WIDTH 4
`endif

interface cpu_AXI_if #(
  parameter int ID_WIDTH   = `CPU_AXI_ID_WIDTH,
  parameter int ADDR_WIDTH = `CPU_AXI_ADDR_WIDTH,
  parameter int DATA_WIDTH = `CPU_AXI_DATA_WIDTH
) (
  input logic axi_clk_i
);

  localparam int STRB_WIDTH = DATA_WIDTH / 8;

  logic axi_reset_i;

  // Write-address channel
  logic [ID_WIDTH-1:0]   m_axi_awid;
  logic [ADDR_WIDTH-1:0] m_axi_awaddr;
  logic [7:0]            m_axi_awlen;
  logic [2:0]            m_axi_awsize;
  logic [1:0]            m_axi_awburst;
  logic                  m_axi_awlock;
  logic [3:0]            m_axi_awcache;
  logic [2:0]            m_axi_awprot;
  logic [3:0]            m_axi_awqos;
  logic                  m_axi_awvalid;
  logic                  m_axi_awready;

  // Write-data channel
  logic [DATA_WIDTH-1:0] m_axi_wdata;
  logic [STRB_WIDTH-1:0] m_axi_wstrb;
  logic                  m_axi_wlast;
  logic                  m_axi_wvalid;
  logic                  m_axi_wready;

  // Write-response channel
  logic [ID_WIDTH-1:0]   m_axi_bid;
  logic [1:0]            m_axi_bresp;
  logic                  m_axi_bvalid;
  logic                  m_axi_bready;

  // Read-address channel
  logic [ID_WIDTH-1:0]   m_axi_arid;
  logic [ADDR_WIDTH-1:0] m_axi_araddr;
  logic [7:0]            m_axi_arlen;
  logic [2:0]            m_axi_arsize;
  logic [1:0]            m_axi_arburst;
  logic                  m_axi_arlock;
  logic [3:0]            m_axi_arcache;
  logic [2:0]            m_axi_arprot;
  logic [3:0]            m_axi_arqos;
  logic                  m_axi_arvalid;
  logic                  m_axi_arready;

  // Read-data channel
  logic [ID_WIDTH-1:0]   m_axi_rid;
  logic [DATA_WIDTH-1:0] m_axi_rdata;
  logic [1:0]            m_axi_rresp;
  logic                  m_axi_rlast;
  logic                  m_axi_rvalid;
  logic                  m_axi_rready;

  // Active AXI-slave driver clocking block. The driver controls ready and
  // response signals; AXI master outputs are sampled here.
  clocking axi_drv_cb @(posedge axi_clk_i);
    default input #1step output #1step;

    output axi_reset_i;

    input  m_axi_awid, m_axi_awaddr, m_axi_awlen, m_axi_awsize,
          m_axi_awburst, m_axi_awlock, m_axi_awcache, m_axi_awprot,
          m_axi_awqos, m_axi_awvalid;
    output m_axi_awready;

    input  m_axi_wdata, m_axi_wstrb, m_axi_wlast, m_axi_wvalid;
    output m_axi_wready;

    output m_axi_bid, m_axi_bresp, m_axi_bvalid;
    input  m_axi_bready;

    input  m_axi_arid, m_axi_araddr, m_axi_arlen, m_axi_arsize,
          m_axi_arburst, m_axi_arlock, m_axi_arcache, m_axi_arprot,
          m_axi_arqos, m_axi_arvalid;
    output m_axi_arready;

    output m_axi_rid, m_axi_rdata, m_axi_rresp, m_axi_rlast, m_axi_rvalid;
    input  m_axi_rready;
  endclocking

  // Passive monitor clocking block. All AXI signals are sampled; no signal
  // is driven by the monitor.
  clocking axi_mon_cb @(posedge axi_clk_i);
    default input #1step;

    input axi_reset_i;
    input m_axi_awid, m_axi_awaddr, m_axi_awlen, m_axi_awsize,
          m_axi_awburst, m_axi_awlock, m_axi_awcache, m_axi_awprot,
          m_axi_awqos, m_axi_awvalid, m_axi_awready;
    input m_axi_wdata, m_axi_wstrb, m_axi_wlast, m_axi_wvalid, m_axi_wready;
    input m_axi_bid, m_axi_bresp, m_axi_bvalid, m_axi_bready;
    input m_axi_arid, m_axi_araddr, m_axi_arlen, m_axi_arsize,
          m_axi_arburst, m_axi_arlock, m_axi_arcache, m_axi_arprot,
          m_axi_arqos, m_axi_arvalid, m_axi_arready;
    input m_axi_rid, m_axi_rdata, m_axi_rresp, m_axi_rlast,
          m_axi_rvalid, m_axi_rready;
  endclocking

endinterface : cpu_AXI_if

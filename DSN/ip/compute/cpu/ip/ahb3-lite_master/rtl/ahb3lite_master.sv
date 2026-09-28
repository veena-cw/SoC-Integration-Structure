// -----------------------------------------------------------------------------
// ahb3lite_master.sv
//
// Generic, synthesizable AHB3-Lite master.
//
// Presents a simple single-beat command/response interface to user logic
// and drives a standard AHB3-Lite master port (2-phase: address phase then
// data phase), single outstanding transfer at a time, correct for both
// zero-wait-state and wait-stated slaves.
//
// Design choices (deliberate, matching axi4_master.sv's philosophy of
// correctness over max throughput):
//   - No pipelining: the next address phase is never presented while the
//     current data phase is still outstanding (HTRANS=IDLE during
//     M_DATA). Simpler, fully spec-compliant, costs one bubble cycle
//     between transfers on a zero-wait-state slave.
//   - One beat per command. No AHB burst signaling (HBURST is tied to
//     SINGLE) - a caller wanting a multi-beat transfer issues multiple
//     single-beat commands with the address incremented itself. This
//     matches how the BedRock bridge above it will use it: BedRock
//     multi-flit messages become N independent AHB transfers, not one
//     AHB burst.
//   - Assumes ahb3lite_pkg (HTRANS_*, HSIZE_* constants) is available in
//     the project, matching the RoaLogic AHB3-Lite PLIC's own usage.
// -----------------------------------------------------------------------------
module ahb3lite_master
  import ahb3lite_pkg::*;
#(
    parameter int ADDR_WIDTH = 32,
    parameter int DATA_WIDTH = 32
) (
    input logic HCLK,
    input logic HRESETn,

    // ------------------------------------------------------------------
    // Simple per-beat command interface (user side)
    // ------------------------------------------------------------------
    input  logic                  req_i,
    output logic                  req_ack_o,     // command accepted this cycle
    input  logic [ADDR_WIDTH-1:0] addr_i,
    input  logic                  write_i,       // 1 = write, 0 = read
    input  logic [2:0]            size_i,        // HSIZE encoding

    input  logic [DATA_WIDTH-1:0] wdata_i,

    output logic                  resp_v_o,
    input  logic                  resp_ready_i,
    output logic [DATA_WIDTH-1:0] rdata_o,
    output logic                  resp_err_o,    // HRESP == ERROR

    // ------------------------------------------------------------------
    // AHB3-Lite master port
    // ------------------------------------------------------------------
    output logic                    HSEL,
    output logic [ADDR_WIDTH-1:0]   HADDR,
    output logic [DATA_WIDTH-1:0]   HWDATA,
    input  logic [DATA_WIDTH-1:0]   HRDATA,
    output logic                    HWRITE,
    output logic [2:0]              HSIZE,
    output logic [2:0]              HBURST,
    output logic [3:0]              HPROT,
    output logic [1:0]              HTRANS,
    output logic                    HMASTLOCK,   // tied 0 - no locked/atomic
                                                  // transfers; added so this
                                                  // master's port maps
                                                  // directly onto an
                                                  // ahb3lite_interconnect_
                                                  // master_port's mst_*
                                                  // bundle, which requires it
    input  logic                    HREADYOUT,
    input  logic                    HRESP
);

  // Fixed attribute outputs: SINGLE burst (see file header), unprivileged
  // data access, no cacheable/bufferable hints, no locked transfers.
  assign HBURST    = HBURST_SINGLE;
  assign HPROT     = 4'b0011;
  assign HMASTLOCK = 1'b0;

  typedef enum logic [1:0] {M_IDLE, M_ADDR, M_DATA} m_state_t;
  m_state_t m_state;

  logic [ADDR_WIDTH-1:0] addr_r;
  logic                  write_r;
  logic [2:0]            size_r;
  logic [DATA_WIDTH-1:0] wdata_r;

  assign req_ack_o = (m_state == M_IDLE);

  assign HSEL   = (m_state == M_ADDR);
  assign HADDR  = addr_r;
  assign HWRITE = write_r;
  assign HSIZE  = size_r;
  assign HTRANS = (m_state == M_ADDR) ? HTRANS_NONSEQ : HTRANS_IDLE;
  assign HWDATA = wdata_r;

  always_ff @(posedge HCLK or negedge HRESETn) begin
    if (!HRESETn) begin
      m_state  <= M_IDLE;
      addr_r   <= '0;
      write_r  <= 1'b0;
      size_r   <= '0;
      wdata_r  <= '0;
      resp_v_o <= 1'b0;
      rdata_o  <= '0;
      resp_err_o <= 1'b0;
    end else begin

      // resp_v_o is a one-cycle pulse; clear it once the caller accepts.
      if (resp_v_o && resp_ready_i)
        resp_v_o <= 1'b0;

      case (m_state)

        M_IDLE: begin
          if (req_i) begin
            addr_r  <= addr_i;
            write_r <= write_i;
            size_r  <= size_i;
            wdata_r <= wdata_i;
            m_state <= M_ADDR;
          end
        end

        // Address phase: hold here until the slave accepts it
        // (HREADYOUT=1 sampled while HSEL/HTRANS=NONSEQ are driven).
        M_ADDR: begin
          if (HREADYOUT)
            m_state <= M_DATA;
        end

        // Data phase: HWDATA held stable for writes; for reads, HRDATA
        // is sampled the cycle HREADYOUT completes the data phase.
        // Holding here (not advancing) if the slave inserts wait
        // states is what keeps this master spec-compliant for
        // non-zero-wait-state slaves, not just the zero-wait-state
        // PLIC it happens to be built for here.
        M_DATA: begin
          if (HREADYOUT) begin
            rdata_o    <= HRDATA;
            resp_err_o <= HRESP;
            resp_v_o   <= 1'b1;
            m_state    <= M_IDLE;
          end
        end

        default: m_state <= M_IDLE;

      endcase

    end
  end

endmodule

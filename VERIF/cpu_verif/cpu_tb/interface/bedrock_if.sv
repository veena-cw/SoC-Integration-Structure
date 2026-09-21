// bedrock_if.sv
// Wraps the bp_processor top-level BedRock memory/IO boundary:
//   mem_fwd_*  : testbench -> DUT   (loader writes, uncached IO commands)
//   mem_rev_*  : DUT -> testbench   (responses)
// Mirrors the port list on bp_top/test/tb/bp_tethered/testbench.sv's wrapper instance.

interface bedrock_if #(
  parameter int ADDR_WIDTH = 64,
  parameter int DATA_WIDTH = 64
)(
  input bit clk,
  input bit reset
);

  // mem_fwd: driven by TB (loader / IO agent) into the DUT
  logic [ADDR_WIDTH-1:0] mem_fwd_addr;
  logic [2:0]            mem_fwd_msg_type;
  logic [3:0]            mem_fwd_size;
  logic [DATA_WIDTH-1:0] mem_fwd_data;
  logic                  mem_fwd_v;
  logic                  mem_fwd_ready_and;

  // mem_rev: driven by DUT back into TB
  logic [ADDR_WIDTH-1:0] mem_rev_addr;
  logic [2:0]            mem_rev_msg_type;
  logic [3:0]            mem_rev_size;
  logic [DATA_WIDTH-1:0] mem_rev_data;
  logic                  mem_rev_v;
  logic                  mem_rev_ready_and;

  clocking drv_cb @(posedge clk);
    output mem_fwd_addr, mem_fwd_msg_type, mem_fwd_size, mem_fwd_data, mem_fwd_v;
    input  mem_fwd_ready_and;
    output mem_rev_ready_and;
    input  mem_rev_addr, mem_rev_msg_type, mem_rev_size, mem_rev_data, mem_rev_v;
  endclocking

  clocking mon_cb @(posedge clk);
    input mem_fwd_addr, mem_fwd_msg_type, mem_fwd_size, mem_fwd_data, mem_fwd_v, mem_fwd_ready_and;
    input mem_rev_addr, mem_rev_msg_type, mem_rev_size, mem_rev_data, mem_rev_v, mem_rev_ready_and;
  endclocking

  //modport driver   (clocking drv_cb, input clk, reset);
  //modport monitor  (clocking mon_cb, input clk, reset);

endinterface

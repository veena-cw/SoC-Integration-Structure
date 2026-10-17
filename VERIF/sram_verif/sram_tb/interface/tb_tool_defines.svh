// ------------------------------------------------------------
// tb_tool_defines.svh
//
// SystemVerilog features this TB uses only where the simulator
// supports them. The default (Verilator 5.052, see sim/Makefile)
// leaves them all off; any other simulator gets them all on.
//
//   TB_COV_CROSS_SELECT  : binsof()/ignore_bins inside cross
//                          (Verilator: COVERIGN, cross bins dropped)
//   TB_COV_GET_COVERAGE  : per-coverpoint get_inst_coverage() and
//                          type-level get_coverage()
//                          (Verilator: compile error / returns 0)
//   TB_CONSTRAINT_DIST   : 'dist' in item constraints together with
//                          inline 'with' constraints
//                          (Verilator: randomize() fails ~40%)
//
// Force the full set on any tool with +define+TB_FULL_SV, or force
// it off with +define+TB_NO_FULL_SV.
// ------------------------------------------------------------
`ifndef TB_TOOL_DEFINES_SVH
`define TB_TOOL_DEFINES_SVH

`ifdef TB_NO_FULL_SV
`elsif TB_FULL_SV
  `define TB_FULL_SV_ON
`elsif VERILATOR
`else
  `define TB_FULL_SV_ON
`endif

`ifdef TB_FULL_SV_ON
  `define TB_COV_CROSS_SELECT
  `define TB_COV_GET_COVERAGE
  `define TB_CONSTRAINT_DIST
`endif

`endif

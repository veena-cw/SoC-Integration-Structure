// ------------------------------------------------------------
// axi_defines.svh
//
// Bus widths and the SRAM address window, shared by the TB and
// matched to sram_top's default parameters:
//   ADDR_WIDTH=32, DATA_WIDTH=128, ID_WIDTH=4,
//   MEM_ADDR_WIDTH=16 (65536 x 16 B = 1 MB),
//   SRAM_BASE_ADDR=0x1070_0000.
// ------------------------------------------------------------
`ifndef AXI_DEFINES_SVH
`define AXI_DEFINES_SVH

`define AXI_ADDR_WIDTH   32
`define AXI_DATA_WIDTH   128
`define AXI_ID_WIDTH     4
`define AXI_STRB_WIDTH   (`AXI_DATA_WIDTH/8)

// Optional AXI4 signals (IHI0022 A10). sram_top has no AxREGION /
// xUSER ports: the TB carries them on axi_if and drives 0 unless
// axi_agent_config.region_en / user_en is set.
`ifndef AXI_REGION_WIDTH
`define AXI_REGION_WIDTH 4
`endif
`ifndef AXI_USER_WIDTH
`define AXI_USER_WIDTH   1
`endif

`define SRAM_BASE_ADDR   32'h1070_0000
`define SRAM_SIZE_BYTES  32'h0010_0000
`define SRAM_END_ADDR    (`SRAM_BASE_ADDR + `SRAM_SIZE_BYTES - 1)

`include "tb_tool_defines.svh"

`endif

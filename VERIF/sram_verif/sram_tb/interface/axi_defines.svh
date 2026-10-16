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

`define SRAM_BASE_ADDR   32'h1070_0000
`define SRAM_SIZE_BYTES  32'h0010_0000
`define SRAM_END_ADDR    (`SRAM_BASE_ADDR + `SRAM_SIZE_BYTES - 1)

`endif

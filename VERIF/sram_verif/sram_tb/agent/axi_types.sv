// ------------------------------------------------------------
// axi_types.sv
//
// AXI4 enums shared by the agent, scoreboard and coverage.
// Compiled first in filelist.f.
// ------------------------------------------------------------
typedef enum bit [1:0] {
    AXI_FIXED = 2'b00,
    AXI_INCR  = 2'b01,
    AXI_WRAP  = 2'b10
} axi_burst_e;

typedef enum bit [1:0] {
    AXI_OKAY   = 2'b00,
    AXI_EXOKAY = 2'b01,
    AXI_SLVERR = 2'b10,
    AXI_DECERR = 2'b11
} axi_resp_e;

// How the write strobes of an item are generated (see
// axi_seq_item.build_strobes):
//   STRB_FULL   : every byte lane that is valid for the beat
//   STRB_RANDOM : random subset of the valid lanes
//   STRB_ZERO   : no lanes (write must not change memory)
typedef enum bit [1:0] {
    STRB_FULL   = 2'd0,
    STRB_RANDOM = 2'd1,
    STRB_ZERO   = 2'd2
} axi_strb_mode_e;

// AxLOCK (AXI4: 1 bit). EXCLUSIVE only when
// axi_agent_config.exclusive_en is set.
typedef enum bit {
    AXI_NORMAL    = 1'b0,
    AXI_EXCLUSIVE = 1'b1
} axi_lock_e;

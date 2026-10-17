`ifndef PLIC_PRIORITY_CONFIG_SVH
`define PLIC_PRIORITY_CONFIG_SVH

// =====================================================
// SW SoC : PLIC Default Priority Configuration
// Priority range: 0 to 7
// =====================================================

// Priority 7: Security and fatal events
`define PLIC_PRIORITY_7_SOURCES \
    35, 37, 38, 39

// Priority 6: Memory integrity failures
`define PLIC_PRIORITY_6_SOURCES \
    25, 26, 49

// Priority 5: NPU/TPU completion and errors
`define PLIC_PRIORITY_5_SOURCES \
    29, 30, 31, 32, 44, 45, 46, 47

// Priority 4
`define PLIC_PRIORITY_4_SOURCES \
    15, 19, 21, 23, 34

// Priority 3
`define PLIC_PRIORITY_3_SOURCES \
    12, 14, 16, 17, 20, 22, 42, 43, 50, 51, 52, 53

// Priority 2
`define PLIC_PRIORITY_2_SOURCES \
    5, 7, 9, 11, 13, 24, 28, 48

// Priority 1: Ordinary peripheral events
`define PLIC_PRIORITY_1_SOURCES \
    0, 1, 2, 3, 4, 6, 8, 10, 18, 27, 33, 36, 54, 55

// Unlisted sources default to priority 0

`endif

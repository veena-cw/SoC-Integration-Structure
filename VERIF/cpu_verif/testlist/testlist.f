# CPU formal regression list
# Columns: UVM test class, BP test ID, boot image (.nbf) [, cfg=<BP_CFG_ID>].
# cfg defaults to 0 (unicore); multicore rows use cfg=9 (two cores) and
# run on their own simulator build (sim/obj_dir_cfg9).

# BP-DV-003 - ALU operations
bp_dv_003_alu_test       3  add_function.nbf
bp_dv_003_alu_test       3  and_function.nbf
bp_dv_003_alu_test       3  or_function.nbf
bp_dv_003_alu_test       3  sub_function.nbf
bp_dv_003_alu_test       3  xor_function.nbf
bp_dv_003_alu_test       3  slt_function.nbf
bp_dv_003_alu_test       3  sltu_function.nbf

# BP-DV-004 - Immediate arithmetic/logical operations
bp_dv_004_immediate_test 4  immediate_function.nbf

# BP-DV-005 - Shift operations
bp_dv_005_shift_test     5  shift_function.nbf

# BP-DV-006 - Multiply/divide/remainder operations
bp_dv_006_muldiv_test    6  muldiv_function.nbf

# BP-DV-007 - Conditional branches
bp_dv_007_branch_test    7  branch_function.nbf

# BP-DV-008 - JAL/JALR jumps
bp_dv_008_jump_test      8  jump_function.nbf

# BP-DV-010 - Byte/halfword/word load/store widths
bp_dv_010_memory_widths_test 10 width_function.nbf

# BP-DV-012 - Cold-cache accesses and repeated cache hits
bp_dv_012_cache_miss_test 12 cache_miss_function.nbf

# BP-DV-013 - AMO/LR-SC atomic operations
bp_dv_013_atomic_test 13 atomic_function.nbf

# BP-DV-015 - Illegal instruction trap and return
bp_dv_015_illegal_trap_test 15 illegal_trap_function.nbf

# BP-DV-016 - ECALL/EBREAK trap behavior
bp_dv_016_ecall_ebreak_test 16 ecall_ebreak_function.nbf

# BP-DV-019 - RV64C compressed instructions
bp_dv_019_compressed_test 19 compressed_function.nbf

# BP-DV-011 - Randomized memory request/response backpressure
bp_dv_011_memory_backpressure_test 11 memory_backpressure_function.nbf

# BP-DV-020 - Cache replacement/eviction under same-set conflicts
bp_dv_020_cache_replacement_test 20 cache_replacement_function.nbf

# BP-DV-025 - Cache-line refill and AXI AWLEN/ARLEN burst observation
bp_dv_025_axi_burst_test 25 cache_burst_function.nbf

# BP-DV-024 - Variable DRAM latency under memory-intensive traffic
bp_dv_024_dram_latency_test 24 dram_latency_function.nbf

# BP-DV-017 - Multicore shared-memory test.
# Requires a separate two-core RTL build (BP_CFG_ID=9).
bp_dv_017_multicore_shared_memory_test 17 multicore_shared_memory.nbf cfg=9

# BP-DV-027 - I2C write/read test aliases.
bp_i2c_write_read_test       27 i2c_write_read.nbf
bp_dv_004_i2c_write_read_test 27 i2c_write_read.nbf

# BP-DV-028 - Uncached AXI loads/stores on every byte lane (1/2/4/8 B at
# each aligned offset in a 16-byte beat). Nonzero tohost encodes
# (kind << 8) | (size << 4) | offset of the first failing access.
bp_dv_028_axi_unaligned_test 28 axi_unaligned_access.nbf

# BP-DV-029 - Write 0x3002_0000-0x3002_00FF (32 x SD), read it all back
# (32 x LD), then compare. Nonzero tohost encodes
# (mismatch_count << 16) | 0x1000 | first failing offset.
bp_dv_029_axi_block_test 29 axi_block_access.nbf

# BP-DV-030 - BP-DV-029 on both cores at once (hart 0: 0x0010_4000-40FF,
# hart 1: 0x0010_4100-41FF; host window - 0x3xxx is not routed to I/O on
# two cores). Requires the two-core build (BP_CFG_ID=9):
#   make sim TEST=bp_dv_030_axi_block_dual_core_test
# Nonzero tohost encodes (hart1_result << 32) | hart0_result.
bp_dv_030_axi_block_dual_core_test 30 axi_block_dual_core.nbf cfg=9

# BP-DV-031 - BP-DV-030 with the blocks at 0x3002_0000 (two cores).
# Expected to FAIL (tohost 0xffffffff_00201000) until 0x3xxx_xxxx is routed
# to the AXI bridge in the two-core build; passes once that is fixed.
bp_dv_031_axi_block_dual_core_3002_test 31 axi_block_dual_core_3002.nbf cfg=9

# Supplemental CPU smoke test retained from earlier development
bp_dv_007_load_add_store_test 9  load_add_store.nbf

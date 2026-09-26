# CPU formal regression list
# Columns: UVM test class, BP test ID, boot image (.nbf).

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

# BP-DV-017 requires a separate two-core RTL build (BP_CFG_ID=9); it is
# intentionally not part of this default single-core regression.
# bp_dv_017_multicore_shared_memory_test 17 multicore_shared_memory.nbf

# Supplemental CPU smoke test retained from earlier development
bp_dv_007_load_add_store_test 9  load_add_store.nbf

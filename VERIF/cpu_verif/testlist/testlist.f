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

# Supplemental CPU smoke test retained from earlier development
bp_dv_007_load_add_store_test 9  load_add_store.nbf

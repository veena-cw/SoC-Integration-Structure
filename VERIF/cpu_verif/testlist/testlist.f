# CPU formal regression list
# Columns: UVM test class, BP test ID, boot image (.nbf) [, cfg=<BP_CFG_ID>].
# cfg defaults to the Makefile's BP_CFG_ID = 9 (two cores, sim/obj_dir_cfg9).
# Every test runs on both harts (c/dual_core.h); a nonzero tohost is
# (hart1_result << 32) | hart0_result, hart1_result 0xFFFFFFFF = no report.

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

# BP-DV-025 - Cache-line refill/writeback traffic (on the DMA port). The CPU
# AXI port stays single-beat by design (AWLEN = ARLEN = 0, checked by the
# AXI monitor in every test); no AXI burst is required.
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
# hart 1: 0x0010_4100-41FF; host-device window - BP-DV-031 covers the same
# test at 0x3002_0000). Requires the two-core build (BP_CFG_ID=9):
#   make sim TEST=bp_dv_030_axi_block_dual_core_test
# Nonzero tohost encodes (hart1_result << 32) | hart0_result.
bp_dv_030_axi_block_dual_core_test 30 axi_block_dual_core.nbf cfg=9

# BP-DV-031 - BP-DV-030 with the blocks at 0x3002_0000 (two cores).
# Checks that 0x3xxx_xxxx reaches the AXI bridge on two cores (routing fix
# in bp_me_addr_to_cce_id / bp_io_tile). Without it: 0xffffffff_00201000.
bp_dv_031_axi_block_dual_core_3002_test 31 axi_block_dual_core_3002.nbf cfg=9

# BP-DV-032/033/034 - Zicbom cache-block operations on both harts, one test
# per op: store -> cbo.<op> -> read back (c/cbo_ops.c). cbo.flush currently
# hangs the core on two cores (Jira); AXI progress markers at 0x0010_8100
# (+16 per hart) show the step reached. Nonzero tohost per hart:
# (op << 8) | failing check; hart1 0xFFFFFFFF = no report.
bp_dv_032_cbo_clean_test 32 cbo_clean.nbf
bp_dv_033_cbo_flush_test 33 cbo_flush.nbf
bp_dv_034_cbo_inval_test 34 cbo_inval.nbf

# BP-DV-035 - M/S/U privilege modes on both harts: ecall/illegal-CSR/xRET
# traps from S and U, medeleg (U ecall -> S), mideleg (SSIP taken in S),
# exact mepc/sepc and MPP/SPP, MPP = U after mret. Nonzero tohost per hart:
# (step << 8) | (trap index << 4) | check (c/priv_modes.c).
bp_dv_035_priv_modes_test 35 priv_modes.nbf

# BP-DV-036 - Sv39 virtual memory on both harts: 4K/2M/1G mappings, TLB
# capacity misses (16 pages), page faults with exact mtval (unmapped, RO
# store, A=0, D=0, U page from S, misaligned megapage), sfence.vma after a
# PTE change, SUM. Nonzero tohost per hart: (step << 8) | detail
# (c/vm_sv39.c).
bp_dv_036_vm_sv39_test 36 vm_sv39.nbf

# BP-DV-037 - Sv39 instruction page fault (jump to a non-executable page).
# Currently FAILS (timeout): the fault is reported correctly, but the
# handler's mret then continues at address 0 instead of mepc (Jira).
bp_dv_037_vm_ifetch_fault_test 37 vm_sv39_ifetch_fault.nbf

# BP-DV-038 - Two-core atomics and coherence on shared DRAM: amoadd.d/.w and
# LR/SC counters (2N), amoswap spinlock around plain ld/add/sd, false
# sharing, message passing with fence w,w / fence r,r, amoor/amomax.
# Nonzero tohost per hart: (phase << 8) | detail (c/smp_atomics.c).
bp_dv_038_smp_atomics_test 38 smp_atomics.nbf

# BP-DV-039 - RV64 F/D floating point on both harts: arithmetic, fused
# multiply-add (single rounding), div/sqrt, conversions in all rounding
# modes and frm, fflags (NX/NV/DZ/OF), loads/stores, fclass, mstatus.FS
# Dirty/SD and the FS=Off illegal-instruction trap. Built with rv64imafd.
# Nonzero tohost per hart: ID of the first failing check (c/fpu_ops.c).
bp_dv_039_fpu_test 39 fpu_ops.nbf

# BP-DV-040 - Zba/Zbb/Zbs bit manipulation on both harts: 82 checks over 34
# instruction forms (all except sh1add/sh2add/sh3add(.uw)), generated by
# scripts/gen_bitmanip_test.py from a reference model. Built with
# rv64ima_zba_zbb_zbs. Nonzero tohost per hart: number of the first failing
# check, or 0x8000 | trap count.
bp_dv_040_bitmanip_test 40 bitmanip_ops.nbf

# BP-DV-041 - Zba sh1add/sh2add/sh3add and .uw (12 checks). Currently FAILS:
# the hardware uses rs2[5:0] as the shift amount instead of 1/2/3 (Jira).
bp_dv_041_bitmanip_shadd_test 41 bitmanip_shadd.nbf

# Supplemental CPU smoke test retained from earlier development
bp_dv_007_load_add_store_test 9  load_add_store.nbf

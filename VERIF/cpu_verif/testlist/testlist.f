# CPU formal regression list
# Columns: UVM test class, BP test ID, boot image (.nbf).
# All tests run on the two-core build (BP_CFG_ID = 9, sim/obj_dir_cfg9).
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
bp_dv_017_multicore_shared_memory_test 17 multicore_shared_memory.nbf

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
# test at 0x3002_0000):
#   make sim TEST=bp_dv_030_axi_block_dual_core_test
# Nonzero tohost encodes (hart1_result << 32) | hart0_result.
bp_dv_030_axi_block_dual_core_test 30 axi_block_dual_core.nbf

# BP-DV-031 - BP-DV-030 with the blocks at 0x3002_0000 (two cores).
# Checks that 0x3xxx_xxxx reaches the AXI bridge on two cores (routing fix
# in bp_me_addr_to_cce_id / bp_io_tile). Without it: 0xffffffff_00201000.
bp_dv_031_axi_block_dual_core_3002_test 31 axi_block_dual_core_3002.nbf

# BP-DV-032/033/034 - Zicbom cache-block operations on both harts, one test
# per op: store -> cbo.<op> -> read back (c/cbo_ops.c). cbo.flush currently
# hangs the core on two cores (Jira); AXI progress markers at 0x0010_8100
# (+16 per hart) show the step reached. Nonzero tohost per hart:
# (op << 8) | failing check; hart1 0xFFFFFFFF = no report.
bp_dv_032_cbo_clean_test 32 cbo_clean.nbf
bp_dv_033_cbo_flush_test 33 cbo_flush.nbf
bp_dv_034_cbo_inval_test 34 cbo_inval.nbf

# BP-DV-056 - cbo.zero (Zicboz) on both harts with the same program
# (c/cbo_ops.c, CBO_OP 3): the 64-byte block must read 0 and the next block
# keep its data. Currently FAILS: cbo.zero is a silent no-op (Jira).
# Moved here from BP-DV-052 check 31.
bp_dv_056_cbo_zero_test 56 cbo_zero.nbf

# BP-DV-057 - FSM default arms by fault injection (white-box): after the
# BP-DV-006 program finishes, cpu_tb_top forces unused state encodings into
# the iterative multiplier (must return to IDLE) and CCE 0 (default and
# e_error hold the state by design; state then restored). Defaults with no
# free encoding are waived (2-state simulation).
bp_dv_057_default_arm_test 57 muldiv_function.nbf

# BP-DV-035 - M/S/U privilege modes on both harts: ecall/illegal-CSR/xRET
# traps from S and U, medeleg (U ecall -> S), mideleg (SSIP taken in S),
# exact mepc/sepc and MPP/SPP, MPP = U after mret. Nonzero tohost per hart:
# (step << 8) | (trap index << 4) | check (c/priv_modes.c).
bp_dv_035_priv_modes_test 35 priv_modes.nbf

# NOTE: Sv39 virtual memory is not a supported feature in this CPU version
# (design team). BP-DV-036 is kept as an informational check of the current
# behaviour; BP-DV-037 is deferred (excluded from the regression) until Sv39
# support is implemented.
# BP-DV-036 - Sv39 virtual memory on both harts: 4K/2M/1G mappings, TLB
# capacity misses (16 pages), page faults with exact mtval (unmapped, RO
# store, A=0, D=0, U page from S, misaligned megapage), sfence.vma after a
# PTE change, SUM. Nonzero tohost per hart: (step << 8) | detail
# (c/vm_sv39.c).
bp_dv_036_vm_sv39_test 36 vm_sv39.nbf

# BP-DV-037 - Sv39 instruction page fault (jump to a non-executable page).
# DEFERRED until Sv39 support is implemented (design team): the fault is
# reported correctly, but the handler's mret then continues at address 0
# instead of mepc (Jira, deferred). Not run in the regression; to run it:
#   make sim TEST=bp_dv_037_vm_ifetch_fault_test NO_VCD=1
# bp_dv_037_vm_ifetch_fault_test 37 vm_sv39_ifetch_fault.nbf

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

# BP-DV-042 - CPU writes/reads the shared PLIC registers over AHB
# (0x0050_0000: CONFIG, EL, PRIORITY, IE, THRESHOLD, ID) on both harts, one
# after the other; hart 1 also reads hart 0's values. Nonzero tohost per
# hart: (fail_count << 16) | 0x4200 | first failing check
# (c/plic_reg_access.c).
bp_dv_042_plic_reg_test 42 plic_reg_access.nbf

# BP-DV-043 - AXI SLVERR (0x3003_xxxx) / DECERR (0x3004_xxxx) on uncached
# sd/ld from both harts; expects store/load access faults (mcause 7/5,
# mtval = address) and a working bus afterwards. Nonzero tohost per hart:
# 0x4300 | failure bits (c/bus_error.c); 0x435e = errors ignored.
bp_dv_043_bus_error_test 43 bus_error.nbf

# BP-DV-044 - Bridge FIFOs under AXI back-pressure: READY low 32 cycles after
# each handshake, B/R delayed 16 cycles; back-to-back sd bursts (AXI) and sw
# bursts (PLIC) from both harts, read back and compared. Fails if the AXI
# request FIFO never became full. Nonzero tohost per hart:
# (first_bad << 16) | 0x4400 | (plic_bad << 7) | mismatches.
bp_dv_044_axi_backpressure_test 44 axi_backpressure.nbf

# BP-DV-045 - AXI bridge response FIFO full (white-box): same program as
# BP-DV-044 without back-pressure; cpu_tb_top forces the bridge's
# mem_rev_v_o low for 3000 core cycles from the first store to 0x3005_xxxx.
# Every store must complete and read back intact; fails if the response
# FIFO never became full.
bp_dv_045_axi_resp_fifo_full_test 45 axi_backpressure.nbf

# BP-DV-046 - L1/L2 conflict thrashing: 10 lines 64 KiB apart per group
# (> 8 L1 ways, > 4 L2 ways), 32 groups per hart over both tiles and both
# L2 slices; write / read / reverse write / read. Dirty evictions L1->L2 and
# L2->DRAM. Nonzero tohost per hart:
# (pass << 24) | (first_bad_line << 12) | 0x400 | mismatches (c/l2_thrash.c).
bp_dv_046_l2_thrash_test 46 l2_thrash.nbf

# BP-DV-047 - L1-uncached DRAM (paddr bit 32 set): sb/sh/sw/sd and signed /
# unsigned loads executed in the L2, in the L2-uncached window 0x1_0070_0000
# (op + AFLINV) and the L2-cached window 0x1_8078_0000.
# Nonzero tohost per hart: (traps << 16) | 0x4700 | (window << 7) | check.
bp_dv_047_l2_uncached_ops_test 47 l2_uncached_ops.nbf

# BP-DV-048 - BP-DV-047 plus all AMOs (.w/.d) to L1-uncached DRAM. Currently
# FAILS (timeout): the core hangs on the first uncached AMO (Jira).
bp_dv_048_l2_uncached_amo_test 48 l2_uncached_amo.nbf

# BP-DV-049 - Two-core coherence stress: upgrade/sharer invalidation and
# owner transfer, ping-pong on one line, false sharing with eviction of
# owned lines (one L1 set), I$-sharer invalidation, and uncached-mode
# (dcache_mode) access to lines the other core owns. Progress markers at
# 0x0010_8300 (+0x10 per hart). Phases 6-8: replacement + sharer
# invalidation / owner transfer, concurrent upgrades, concurrent miss
# streams. Nonzero tohost per hart: (phase << 8) |
# detail (c/smp_coherence.c).
bp_dv_049_smp_coherence_test 49 smp_coherence.nbf

# BP-DV-050 - CSR sweep on both harts: identity CSRs, read-only write
# traps, WARL fields, S-mode views, counters/mcountinhibit, fcsr aliasing,
# FS=Off trap, PMP, unknown CSRs, U-mode counter-enable/privilege. Summary
# word at 0x0010_8700 (+0x10 per hart). Nonzero tohost per hart:
# (fail_count << 16) | 0x5000 | first failing check (c/csr_sweep.c).
bp_dv_050_csr_sweep_test 50 csr_sweep.nbf

# BP-DV-051 - Debug Mode from software on both harts: debug vector via cfg
# NPC, ebreak with dcsr.ebreakm, halt request via CLINT debug register
# (0x0030_D000 + 8*hart), single step, exception in Debug Mode -> vector+8,
# dret (and dret outside Debug Mode traps), dcsr fields. Progress markers at
# 0x0010_8800. Nonzero tohost per hart:
# (fail_count << 16) | 0x5100 | first failing check (c/debug_mode.c).
bp_dv_051_debug_mode_test 51 debug_mode.nbf

# BP-DV-052 - Instruction-decode completeness on both harts: lr.w/sc.w and
# word AMOs, unsigned FP conversions, fsgnj/fsgnjx, wfi, fence.i
# (self-modifying code), cmo.*.all (illegal on two cores), prefetch hints,
# one illegal encoding per decoder group (mcause 2, mtval = instruction),
# and a generated decode sweep (every decoder instruction form, checked
# against a reference model; cbo.zero moved to BP-DV-056). Built with rv64imafd. Progress markers at 0x0010_8A00.
# Nonzero tohost per hart: (fail_count << 16) | 0x5200 | first failing check.
bp_dv_052_isa_complete_test 52 isa_complete.nbf

# BP-DV-053 - Hazard-detector dependency chains (both harts): every producer
# pipe feeding every consumer slot at distances 0-3, WAW, fflags reads after
# FP ops / during fdiv, back-to-back div and fdiv. Generated by
# scripts/gen_hazard_test.py. Nonzero tohost per hart:
# (mismatch_count << 16) | first failing case + 1 (case list in the C file).
bp_dv_053_hazard_chains_test 53 hazard_chains.nbf

# BP-DV-054 - BP-DV-049 (c/smp_coherence.c) with random DRAM latency 1-24
# cycles: separate simulator build obj_dir_cfg9_lat (BP_DV_024_LATENCY),
# selected automatically by make sim / make regression for this test.
bp_dv_054_smp_coherence_latency_test 54 smp_coherence.nbf

# BP-DV-055 - BP-DV-049 (c/smp_coherence.c) with the cpu_tb_top CCE stall
# injector (white-box): random short windows where each CCE's pending-bit
# port, LCE command port, memory credits or pump readies look busy, to run
# the CCE FSM wait paths. Main build (only forces, no define).
bp_dv_055_cce_stall_test 55 smp_coherence.nbf

# Supplemental CPU smoke test retained from earlier development
bp_dv_007_load_add_store_test 9  load_add_store.nbf

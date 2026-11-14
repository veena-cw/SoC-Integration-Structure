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
# per op: store -> cbo.<op> -> read back (c/cbo_ops.c). cbo.flush hung the
# core on two cores before the RTL fix (Jira); PASS 11 Nov. AXI progress markers at 0x0010_8100
# (+16 per hart) show the step reached. Nonzero tohost per hart:
# (op << 8) | failing check; hart1 0xFFFFFFFF = no report.
bp_dv_032_cbo_clean_test 32 cbo_clean.nbf
bp_dv_033_cbo_flush_test 33 cbo_flush.nbf
bp_dv_034_cbo_inval_test 34 cbo_inval.nbf

# BP-DV-056 - cbo.zero (Zicboz) on both harts with the same program
# (c/cbo_ops.c, CBO_OP 3): the 64-byte block must read 0 and the next block
# keep its data. Failed before the RTL fix (cbo.zero was a silent no-op,
# Jira); PASS 11 Nov.
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

# NOTE: Sv39 virtual memory is not used in this CPU version (design team,
# 28 Oct). BP-DV-036 and BP-DV-037 are excluded from the regression (run by
# hand only), and the Sv39-only logic is waived in sim/coverage_waivers.txt.
# BP-DV-036 - Sv39 virtual memory on both harts: 4K/2M/1G mappings, TLB
# capacity misses (16 pages), page faults with exact mtval (unmapped, RO
# store, A=0, D=0, U page from S, misaligned megapage), sfence.vma after a
# PTE change, SUM. Nonzero tohost per hart: (step << 8) | detail
# (c/vm_sv39.c).
# Run by hand only:  make sim TEST=bp_dv_036_vm_sv39_test NO_VCD=1
# bp_dv_036_vm_sv39_test 36 vm_sv39.nbf

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

# BP-DV-041 - Zba sh1add/sh2add/sh3add and .uw (12 checks). Failed before the
# RTL fix (hardware used rs2[5:0] as the shift amount instead of 1/2/3, Jira);
# PASS 11 Nov.
bp_dv_041_bitmanip_shadd_test 41 bitmanip_shadd.nbf

# BP-DV-042 - CPU writes/reads the shared PLIC registers over AHB
# (0x0050_0000: CONFIG, EL, PRIORITY, IE, THRESHOLD, ID) on both harts, one
# after the other; hart 1 also reads hart 0's values. Nonzero tohost per
# hart: (fail_count << 16) | 0x4200 | first failing check
# (c/plic_reg_access.c).
bp_dv_042_plic_reg_test 42 plic_reg_access.nbf

# BP-DV-058 - External interrupts through the shared PLIC on both harts
# (c/plic_irq.c): reset priorities, level / edge sources, re-trigger, IE
# masking, threshold, priority 0, priority order and ties, S-target
# (mcause 9), wfi wake-up. plic_src_i is driven by the PLIC testbench's
# interrupt agent (VERIF/plic_verif/plic_tb); the program requests source
# changes through a mailbox at 0x0010_8E00 (cpu_tb/env/plic_irq_ctrl.sv).
# Progress at 0x0010_8F00. Nonzero tohost per hart:
# (fail_count << 16) | 0x5800 | first failing check.
bp_dv_058_plic_irq_test 58 plic_irq.nbf

# BP-DV-059/060/061 - the PLIC testbench's tests (VERIF/plic_verif/plic_tb/
# tests) at CPU level: core 0 accesses the PLIC over AHB, the interrupt lines
# are read from the cores' mip (MEIP/SEIP), sources from the PLIC irq agent.
#   059 register reset / write-read / walking ones   (c/plic_reg_full.c)
#   060 simultaneous, disabled, threshold, equal priority, four targets,
#       claim/complete, nested complete             (c/plic_irq_scenarios.c)
#   061 each of the 64 sources on each of the 4 targets (c/plic_irq_single.c)
# Nonzero tohost (hart 0): (fail_count << 16) | 0x5900/0x6000/0x6100 | first
# failing check. Progress at 0x0010_8F00.
bp_dv_059_plic_reg_full_test 59 plic_reg_full.nbf
bp_dv_060_plic_irq_scenarios_test 60 plic_irq_scenarios.nbf
bp_dv_061_plic_irq_single_test 61 plic_irq_single.nbf

# BP-DV-062 - ISR service order on hart 0 (c/plic_isr_service.c): M-external
# interrupt, handler claims, reads the device status, clears the device, then
# completes; MEIP low while claimed, no re-entry after complete, priority
# order with two devices, and complete-before-service gives a spurious
# second entry. Nonzero tohost (hart 0): (fail_count << 16) | 0x6200 | first
# failing check. Progress at 0x0010_8F00.
bp_dv_062_plic_isr_service_test 62 plic_isr_service.nbf

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

# BP-DV-048 - BP-DV-047 plus all AMOs (.w/.d) to L1-uncached DRAM, including
# min/max with the memory operand winning. Passes since e2a13a8 (the uncached
# AMO hang is fixed).
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

# BP-DV-063 - Debug Mode cases BP-DV-051 does not cover, on both harts: dpc
# after single steps (taken branch, jr, three in a row), ebreaks/ebreaku per
# mode, Debug Mode entered from S and U. Nonzero tohost per hart:
# (bitmask of failed checks << 16) | 0x6300 (c/debug_priv.c).
bp_dv_063_debug_priv_test 63 debug_priv.nbf

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
# BP-DV-065 - boot through cpu_top's unfreeze sequencer (CPU_TOP_UNFREEZE,
# build variant _unf) instead of bp_nonsynth_cfg_loader; load/add/store program.
bp_dv_065_unfreeze_boot_test 65 load_add_store.nbf
# BP-DV-066 - coherence corner cases not reached by BP-DV-049: uncached access
# to E / F owned lines, uncached AMO to a modified line, replacement +
# invalidate + transfer, three sharers. tohost per hart (phase << 8) | detail
# (c/coh_corner.c).
bp_dv_066_coh_corner_test 66 coh_corner.nbf
# BP-DV-067 - 64-bit ld/sd to the PLIC (two AHB beats per access in the AHB
# bridge); tohost hart 0 (fail_count << 16) | 0x6700 | first failing check
# (c/plic_wide.c). Runs on the BP-DV-059 class (same PLIC sequence, boot image
# from the row); by hand:
#   make sim TEST=bp_dv_059_plic_reg_full_test TCNAME=plic_wide TEST_ID=67
bp_dv_059_plic_reg_full_test 67 plic_wide.nbf
# BP-DV-068 - CLINT timer and software interrupts on both harts (mtimecmp,
# mtime, mtimesel, MTIP / MSIP, wfi wake-up, cross-hart IPI). Runs on the
# BP-DV-049 class; tohost per hart (fail_count << 16) | 0x6800 | first check
# (c/clint_timer.c). By hand:
#   make sim TEST=bp_dv_049_smp_coherence_test TCNAME=clint_timer TEST_ID=68
bp_dv_049_smp_coherence_test 68 clint_timer.nbf
# BP-DV-069 - loads/stores of every size to unmapped local devices (4, 6, 15)
# on tile 0 and tile 1, answered by bp_me_loopback; no trap, no hang
# (c/loopback.c). By hand:
#   make sim TEST=bp_dv_049_smp_coherence_test TCNAME=loopback TEST_ID=69
bp_dv_049_smp_coherence_test 69 loopback.nbf
# BP-DV-070 - data and address patterns (0x5555.., 0xAAAA.., ~0, 0, walking
# ones / zeros) through cached DRAM (cbo.flush + refill), high DRAM address
# bits (aliases), both L1-uncached windows and AXI I/O incl. byte strobes.
# Runs on the BP-DV-049 class; tohost per hart (fails << 16) | 0x7000 |
# (phase << 8) | index (c/data_patterns.c). By hand:
#   make sim TEST=bp_dv_049_smp_coherence_test TCNAME=data_patterns TEST_ID=70
bp_dv_049_smp_coherence_test 70 data_patterns.nbf
# BP-DV-071 - walking ones / patterns through 22 R/W CSRs (exact, epc, WARL
# stability, counter checks). mcycle / minstret are checked as 48-bit
# counters (bp_mcounter_s): design team decision 13 Nov 2026 to keep 48 bits
# (documented in the feature list, may be extended to 64 later). The test
# checks the 48-bit behaviour: writes keep bits 47:0, bits 63:48 read 0,
# counting continues modulo 2^48 and the counter wraps at 2^48.
# Failing-CSR mask at 0x0010_8700 (c/csr_walk.c). By hand:
#   make sim TEST=bp_dv_049_smp_coherence_test TCNAME=csr_walk TEST_ID=71
bp_dv_049_smp_coherence_test 71 csr_walk.nbf

# BP-DV-072: per-tile cfg registers read/written by software (both tiles
# read, own npc / hio_mask patterns, read-only regs ignore writes, D$
# nonspec mode) and cmo.*.all trapping as illegal on the coherent build.
# Failing-check mask at 0x0010_8700 (c/cfg_regs.c). By hand:
#   make sim TEST=bp_dv_049_smp_coherence_test TCNAME=cfg_regs TEST_ID=72
bp_dv_049_smp_coherence_test 72 cfg_regs.nbf

# BP-DV-073: CSR fields BP-DV-071 does not reach: mstatus TW/TVM/TSR/MPRV,
# satp Sv39 patterns (M-mode, no translation), mtvec/stvec, pmpcfg0, sip
# via mideleg, access-fault cause/mtval at high addresses, dcsr bits and
# dscratch0/1 / dpc patterns in Debug Mode (c/csr_extra.c). Logs two
# observations (dpc keeps bit 0; load-fault mtval keeps 40 bits).
#   make sim TEST=bp_dv_049_smp_coherence_test TCNAME=csr_extra TEST_ID=73
bp_dv_049_smp_coherence_test 73 csr_extra.nbf

# BP-DV-074: the same code fetched from DRAM, six DRAM aliases (bits
# 25..30), both L1-uncached DRAM windows and AXI I/O memory (c/pc_alias.c).
#   make sim TEST=bp_dv_049_smp_coherence_test TCNAME=pc_alias TEST_ID=74
bp_dv_049_smp_coherence_test 74 pc_alias.nbf

# BP-DV-075: BP-DV-067 (plic_wide) with the PLIC addressed through tile 1
# (0x0150_0000), i.e. through core tile 1's PLIC port into
# bp_plic_shared_top (c/plic_t1_wide.c). Failed before 11 Nov: the shared
# AHB bridge subtracted a fixed AHB_BASE_ADDR 0x0050_0000, so core-1-port
# accesses reached the PLIC as 0x0100_00xx. Fixed in RTL 11 Nov (bridge
# AHB_WINDOW_BITS = dev_addr_width_gp masks the offset to 20 bits). PASS 11 Nov.
#   make sim TEST=bp_dv_059_plic_reg_full_test TCNAME=plic_t1_wide TEST_ID=75
bp_dv_059_plic_reg_full_test 75 plic_t1_wide.nbf

# BP-DV-076: I/O address space through the I/O CCE and AXI4 bridge: host
# window offsets, host device of tiles 1..31, soc-periph window, external
# I/O (paddr bits 34..39, write + read back) (c/io_addr.c).
#   make sim TEST=bp_dv_049_smp_coherence_test TCNAME=io_addr TEST_ID=76
bp_dv_049_smp_coherence_test 76 io_addr.nbf

# BP-DV-077: walking-one address sweeps: loopback device offsets (tiles 0/1),
# cacheable DRAM bits 6..23 through the CCE directory (set overflow, LRU
# evictions), instruction fetch from new tags and a full I$ set, odd-byte
# AXI I/O loads (c/addr_sweep.c). PASS 11 Nov.
#   make sim TEST=bp_dv_049_smp_coherence_test TCNAME=addr_sweep TEST_ID=77
bp_dv_049_smp_coherence_test 77 addr_sweep.nbf

# BP-DV-078: back-to-back FP / FP<->int dependencies on the long, memory
# and aux pipes (rs3, store data), each compared with a 5-nop-gap run
# (c/fp_hazard.c, rv64imafd). PASS 11 Nov.
#   make sim TEST=bp_dv_049_smp_coherence_test TCNAME=fp_hazard TEST_ID=78
bp_dv_049_smp_coherence_test 78 fp_hazard.nbf

# BP-DV-079: D$ write buffer vs load bank hazards in all 8 banks (store then
# load other line / same dword / merged sub-dword / miss) (c/dcache_hazard.c).
# PASS 11 Nov.
#   make sim TEST=bp_dv_049_smp_coherence_test TCNAME=dcache_hazard TEST_ID=79
bp_dv_049_smp_coherence_test 79 dcache_hazard.nbf

# BP-DV-080: CBO on uncached addresses (access fault), misaligned loads /
# stores of every size and offset, misaligned AMO / LR / SC (c/mem_exc.c).
# PASS 11 Nov.
#   make sim TEST=bp_dv_049_smp_coherence_test TCNAME=mem_exc TEST_ID=80
bp_dv_049_smp_coherence_test 80 mem_exc.nbf

# BP-DV-081: compressed calls / returns (c.jalr / c.jr via ra and t0,
# coroutine swap), 32-bit instructions straddling 64-byte blocks
# (c/rvc_ctrl.c, rv64imac). PASS 11 Nov.
#   make sim TEST=bp_dv_049_smp_coherence_test TCNAME=rvc_ctrl TEST_ID=81
bp_dv_049_smp_coherence_test 81 rvc_ctrl.nbf

# BP-DV-082: L1-uncached / L2-uncached DRAM ops on every CCE / L2 slice
# (addr[6] = CCE, addr[7] = slice; c/l2_uc_slices.c). Currently FAILS (hangs)
# with both harts running: on CCE 1 a byte store from core 1 is lost (next
# store's data lands in its byte) while core 0 issues uncached loads to the
# same CCE, then the system deadlocks (proposed Jira, 11 Nov). Passes with
# RISCV_CFLAGS=-DL2UC_SERIAL (harts one after the other).
#   make sim TEST=bp_dv_049_smp_coherence_test TCNAME=l2_uc_slices TEST_ID=82
bp_dv_049_smp_coherence_test 82 l2_uc_slices.nbf

# BP-DV-084: rdinstret in M / S with mcounteren.IR 1/0, mret to S clears
# MPRV, write to read-only instret traps, pmpaddr access observed (traps:
# num_pmp = 0) (c/csr_priv_more.c). PASS 11 Nov.
#   make sim TEST=bp_dv_049_smp_coherence_test TCNAME=csr_priv_more TEST_ID=84
bp_dv_049_smp_coherence_test 84 csr_priv_more.nbf

# BP-DV-085: PLIC edge-triggered pending counter saturation - 12 edges, no
# claim, exactly 1 + MAX_PENDING_COUNT(8) = 9 claims; then level mode
# (c/plic_edge_sat.c). PASS 11 Nov.
#   make sim TEST=bp_dv_060_plic_irq_scenarios_test TCNAME=plic_edge_sat TEST_ID=85
bp_dv_060_plic_irq_scenarios_test 85 plic_edge_sat.nbf

# BP-DV-086: supervisor interrupt matrix - SSI/STI/SEI set in mip by
# software, taken in M / S / U with mideleg on/off, SIE/MIE masking,
# priority SEI > SSI > STI and M-level before S-level; U/S counter access
# for every mcounteren x scounteren combination (c/irq_matrix.c). PASS 11 Nov.
#   make sim TEST=bp_dv_049_smp_coherence_test TCNAME=irq_matrix TEST_ID=86
bp_dv_049_smp_coherence_test 86 irq_matrix.nbf

# BP-DV-087..090: CCE stall injector (BP-DV-055) on the atomic, L2-thrash,
# L2-uncached-AMO and coherence-corner programs, to run the CCE FSM wait
# paths those request types use. PASS 11 Nov.
bp_dv_055_cce_stall_test 87 smp_atomics.nbf
bp_dv_055_cce_stall_test 88 l2_thrash.nbf
bp_dv_055_cce_stall_test 89 l2_uncached_amo.nbf
bp_dv_055_cce_stall_test 90 coh_corner.nbf

# BP-DV-091: BP-DV-082 with the harts one after the other (L2UC_SERIAL,
# c/l2_uc_slices_serial.c): L1-uncached / L2-uncached ops on every CCE and
# L2 slice in the regression while the two-hart BP-DV-082 bug is open.
# PASS 12 Nov (530 checks).
#   make sim TEST=bp_dv_049_smp_coherence_test TCNAME=l2_uc_slices_serial TEST_ID=91
bp_dv_049_smp_coherence_test 91 l2_uc_slices_serial.nbf

# BP-DV-092: byte / halfword PLIC accesses (sb / sh / lb / lbu / lh / lhu on
# IE, EL, PRIORITY, THRESHOLD, CONFIG): AHB HSIZE_BYTE / HSIZE_HWORD and the
# PLIC's partial-write byte merge (c/plic_narrow.c). The passive RAL model
# (cpu_tb/env/plic_ral_passive.sv) merges narrow writes into the mirror and
# compares only the accessed lanes. PASS 12 Nov (0 RAL mismatches).
#   make sim TEST=bp_dv_059_plic_reg_full_test TCNAME=plic_narrow TEST_ID=92
bp_dv_059_plic_reg_full_test 92 plic_narrow.nbf

# BP-DV-093: PLIC AHB bridge back-pressure (white-box, cpu_tb_top AHB stall
# injector): random windows of response FIFO full (bridge_rev_ready 0), core
# not taking responses (mem_rev_v_o 0) and request not accepted
# (mem_fwd_ready_and_o 0), forced on the falling edge; plic_wide program +
# passive RAL. Fails if the bridge never waited in ST_RD_PUSH and ST_WR_RESP.
# HREADY is not forced (PLIC HREADYOUT = 1, see waivers). PASS 13 Nov.
#   make sim TEST=bp_dv_093_ahb_stall_test TCNAME=plic_wide TEST_ID=93
bp_dv_093_ahb_stall_test 93 plic_wide.nbf

# BP-DV-094: decoder illegal-instruction checks (c/decode_priv.c, both harts):
# FP with mstatus.FS = Off, JALR funct3 != 0, mret in S, sret in S with
# TSR = 1, satp / sfence.vma in S with TVM = 1 (and legal with TVM = 0),
# wfi in S with TW = 1, sfence.vma in U, and wfi in M with TW = 1.
# Currently FAILS check 7 on both harts (tohost 0x0001940700019407): wfi in
# M mode with mstatus.TW = 1 raises an illegal-instruction trap; the spec
# limits TW to modes below M. bp_be_csr.sv 794 passes mstatus.TW to the
# decoder without the privilege mode (proposed Jira, 13 Nov).
#   make sim TEST=bp_dv_049_smp_coherence_test TCNAME=decode_priv TEST_ID=94
bp_dv_049_smp_coherence_test 94 decode_priv.nbf

# BP-DV-095: hio field (paddr bits 33..39) in bp_mmu (c/hio_fault.c, harts
# one after the other): instruction fetch from an hio address raises an
# instruction access fault (mcause 1, mtval = target) with hio_mask = reset
# value and 0; loads / stores to hio space with hio_mask = 0 are logged
# (observed: no fault, they reach the AXI bridge - bp_mmu uses hio_fault_v
# for fetches only). PASS 13 Nov.
#   make sim TEST=bp_dv_049_smp_coherence_test TCNAME=hio_fault TEST_ID=95
bp_dv_049_smp_coherence_test 95 hio_fault.nbf

# BP-DV-096: FP leading-zero counters / normalizers (c/fp_clz.c, rv64imafd,
# both harts): fcvt.d/s.l/lu/w/wu of +/-2^k (every leading-one position),
# single / double subnormals bit k times 1.0, fmsub.d/.s cancellation
# (1 + 2^-k) * 1 - 1 = 2^-k, fcvt.d.s of single subnormals; every result
# exact, checked bit for bit. PASS 13 Nov.
#   make sim TEST=bp_dv_049_smp_coherence_test TCNAME=fp_clz TEST_ID=96
bp_dv_049_smp_coherence_test 96 fp_clz.nbf

# BP-DV-098: dcsr.stepie = 1 for the whole run (no effect while dcsr.step =
# 0), so the bp_be_csr irq_pending stepie terms see pending interrupts:
#   a  BP-DV-086 program (c/irq_matrix_stepie.c): SSI / STI / SEI in M / S / U
#   b  BP-DV-051 program (c/debug_mode_stepie.c): CLINT debug halt request and
#      single step with stepie set
# The programs' own checks are unchanged. PASS 13 Nov.
#   make sim TEST=bp_dv_049_smp_coherence_test TCNAME=irq_matrix_stepie TEST_ID=98
#   make sim TEST=bp_dv_051_debug_mode_test TCNAME=debug_mode_stepie TEST_ID=98
bp_dv_049_smp_coherence_test 98 irq_matrix_stepie.nbf
bp_dv_051_debug_mode_test 98 debug_mode_stepie.nbf

# BP-DV-097: LCE / cache stall injector (white-box, cpu_tb_top) on the
# BP-DV-049 coherence program: random windows where the D$ / I$ of either
# tile does not accept the tag / stat / data packet from its LCE (yumi forced
# 0 on the whole path, 1 ns after the rising edge). The program's checks
# must pass; fails if a stall bit never met a pending packet. PASS 13 Nov
# (hits tag 2012, stat 508, data 2623).
#   make sim TEST=bp_dv_097_lce_stall_test TCNAME=smp_coherence TEST_ID=97
bp_dv_097_lce_stall_test 97 smp_coherence.nbf

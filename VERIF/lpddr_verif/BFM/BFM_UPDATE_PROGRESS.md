# LPDDR5 PHY BFM / DRAM model update — progress log

Task (2026-10-22): add LPDDR5 (JESD209-5) features missing from `BFM/lpddr5_phy_bfm.sv` and
`BFM/lpddr5_dram_model.sv`, fix BFM bugs, stay compatible with existing UVM TB and `../rtl` (RTL untouched).
Resume rule: continue from first unchecked step. Originals backed up in `BFM/.bak_orig/`.

Build: `sim_bfm/run.sh [TEST] [SEED]` (xsim, memory-capped). `sim/` (user's) not modified.
`sim_bfm/rtl_shadow/lpddr5c_data_path.sv` = rtl copy + missing `rd_beat_counter` decl (sim-only).

## Steps
- [x] 1. Read BFMs, TB top, RTL DFI behaviour; baseline compile (RTL compile error found)
- [x] 2. Baseline: original DRAM model does not compile (adjacent string literals); rest of TB elaborates
- [x] 3. Spec items extracted (JESD209-5C) — see 'Spec values used' below
- [x] 4. Rewrite PHY BFM (RTL-compatible DFI decode, write-data queue, 2-beat read, training handshakes)
- [x] 5. Rewrite DRAM model (bank FSM, MR space, timing checks, refresh, PD/SR/DSM, MRR, BL16/BL32)
- [x] 6. TB top hook-up (only what is needed), compile + run base_test
- [x] 7. Regression seeds, findings report

## Findings (BFM bugs)
- DRAM model CA encodings != scheduler (REF=06 decoded as MRW, MRW/MRR/SRE/PDE all shifted).
- DFI write data precedes WR command (data path streams W data immediately) -> model flagged error and dropped data.
- BFMs assume 128-bit DFI data; DUT DFI data is 64-bit, 2 beats per 128-bit word.

## Findings (RTL — reported only, not changed)
- data_path.sv:134 `rd_beat_counter` declaration commented out -> xvlog error.

- Original DRAM model: does not compile in xsim (split string literals in $display).
- PHY BFM forwarded every cycle (cs_n ignored) -> DRAM saw a NOP stream; dropped commands when !dram_cmd_ready.
- Only one outstanding READ allowed (2nd READ -> error) although scheduler pipelines reads.
- dfi_rdlvl_req / dfi_wrlvl_req never driven (X into DUT training FSM).

## Spec values used (JESD209-5C, x16, 8 Gb, DVFSC off)
tRCD 18ns/2nCK, tRPpb 18ns, tRPab 21ns, tRAS 42ns/3nCK (max 9xtREFI), tRC=tRAS+tRP, tWR 34ns,
tRBTP 7.5ns, tPPD 2nCK; 8B mode: tRRD 10ns, tFAW 40ns, tWTR 12ns (BG: 5ns/20ns/6.25-12ns).
Refresh 8Gb: tRFCab 210ns, tRFCpb 120ns, tREFI 3.906us, tREFIpb 488ns, max 8 postponed/pulled-in.
SR: tSR max(15ns,2nCK), tXSR tRFCab+max(7.5ns,2nCK), tESPD 2nCK. PD: tXP max(7ns,3nCK), tCMDPD 3nCK,
tCSPD 10ns+1tCK, tMRWPD max(14ns,6nCK). DSM: tPDN 10ns+1tCK, tPDN_DSM 4ms, tXSR_DSM 200us, tXDSM_XP 190us.
MR: tMRW max(10ns,5nCK), tMRD max(14ns,5nCK), tMRR 4/8nCK. RO MRs 0,4-8,27,29,35,36,38,39,43-45,47-54.
FSP MRs (3 copies, MR16 OP[1:0]=FSP-WR, OP[3:2]=FSP-OP): 1,2,3,10,11,12,14,15,17,18,19,20,22,24,30,41,58,69.
MR4 OP[4:0]=01001 (1x refresh, 85C), OP[7] TUF cleared by MRR. MR8: OP[1:0] type, OP[5:2] density, OP[7:6] width.
MR13 OP[5] DMD (data-mask disable). MR23 PASR segment mask (8 segments, row MSBs); masked segments lose data in SR.
SR accepts only PDE/DSM/MRR/MRW/MPC/SRX/DES; MRW to MR23/MR25 prohibited in SR. DSM data retained.

## Status (2026-10-22): DONE
- `sim_bfm/run_unit.sh`: directed BFM self-check, 27 checks PASS (exact expected error/violation counts).
- `sim_bfm/run.sh base_test`: UVM_ERROR 0, UVM_FATAL 0; 10 writes stored at correct addresses; DRAM reports
  5 tWTR timing warnings (RTL scheduler has no tWTR) - escalate with +DRAM_TIMING_ERR.

## TB files touched (besides BFM/)
- top/lpddr_tb_top.sv: PHY BFM ports dfi_rw/dfi_rdlvl_*/dfi_wrlvl_* connected; `virtual lpddr5c_lp_if` -> `virtual lp_if` (compile fix).
- interface/lpddr5c_lp_if.sv: `wire sys_rst_n = rst_n;` alias (LP agent uses vif.sys_rst_n; compile fix).
- sim/filelist.f: BFM lines re-enabled with relative paths. (Scheduler line still points to /home/cw022_giresh/...)
Originals: BFM/.bak_orig/.

## RTL defects found (rtl/ NOT modified; sim_bfm works around the first two only)
1. data_path.sv:134 `rd_beat_counter` declaration commented out -> compile error (sim_bfm/rtl_shadow copy restores it).
2. lpddr5c_top: output `dfi_clk` has no driver but `phy_clk = dfi_clk` clocks the data-path PHY side ->
   write FIFO never drains, AXI W stalls after 8 beats (sim_bfm/rtl_workarounds.sv forces dfi_clk = sys_clk).
3. data_path read assembly beat 1 uses `dfi_rddata[127:64]` of a 64-bit port -> upper 64 bits of AXI RDATA are X
   (commented-out alternative in the same file is correct).
4. lpddr5c_top: `ar_pending` is never cleared -> first AXI read re-issued every cycle (53 RD for 10 AXI reads),
   later AXI reads return the first address's data.
5. Scheduler does not enforce tWTR/tWR/tRTP/tRRD/tRFC; lp_mgmt dfi_cke / PD / SR outputs not connected in top;
   scheduler never issues SRE/PDE/MRW/MRR; refresh_ctrl takes tREFI/tRFC from reg_timing0 (shared with tRCD/tRP).

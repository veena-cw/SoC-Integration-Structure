# ==========================================
# BaseJump STL Include Directories
# ==========================================

+incdir+$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_cache
+incdir+$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow
+incdir+$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dmc
+incdir+$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_mem
+incdir+$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc
+incdir+$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_test
+incdir+$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_noc

# ==========================================
# HardFloat Include Directories
# ==========================================

+incdir+$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/HardFloat/source
+incdir+$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/HardFloat/source/RISCV

# ==========================================
# BlackParrot Include Directories
# ==========================================

+incdir+$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_common/src/include
+incdir+$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_fe/src/include
+incdir+$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/include
+incdir+$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/include
+incdir+$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/include

# ==========================================
# BaseJump STL Packages
# ==========================================

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_axi/bsg_axi_pkg.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_cache/bsg_cache_pkg.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_noc/bsg_noc_pkg.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_noc/bsg_wormhole_router_pkg.sv

# ==========================================
# BlackParrot Packages
# ==========================================

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_common/src/include/bp_common_pkg.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_fe/src/include/bp_fe_pkg.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/include/bp_be_pkg.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/include/bp_me_pkg.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/include/bp_top_pkg.sv

# ==========================================
# Asynchronous / CDC
# ==========================================

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_async/bsg_async_fifo.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_async/bsg_launch_sync_sync.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_async/bsg_sync_sync.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_async/bsg_async_ptr_gray.sv

# ==========================================
# BlackParrot Common
# ==========================================

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_common/src/v/bsg_bus_pack.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_common/src/v/bp_mmu.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_common/src/v/bp_pma.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_common/src/v/bp_tlb.sv

# ==========================================
# BlackParrot Backend
# ==========================================

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_top.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_calculator/bp_be_calculator_top.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_calculator/bp_be_csr.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_calculator/bp_be_fp_box.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_calculator/bp_be_fp_rebox.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_calculator/bp_be_fp_unbox.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_calculator/bp_be_int_unbox.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_calculator/bp_be_int_box.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_calculator/bp_be_pipe_int.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_calculator/bp_be_pipe_aux.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_calculator/bp_be_pipe_fma.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_calculator/bp_be_pipe_long.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_calculator/bp_be_pipe_mem.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_calculator/bp_be_pipe_sys.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_calculator/bp_be_ptw.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_calculator/bp_be_rec_to_raw.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_calculator/bp_be_reservation.sv

# ==========================================
# Backend Checker
# ==========================================

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_checker/bp_be_cmd_queue.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_checker/bp_be_detector.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_checker/bp_be_director.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_checker/bp_be_expander.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_checker/bp_be_instr_decoder.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_checker/bp_be_issue_queue.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_checker/bp_be_regfile.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_checker/bp_be_scheduler.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_checker/bp_be_scoreboard.sv

# ==========================================
# D-Cache
# ==========================================

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_dcache/bp_be_dcache.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_dcache/bp_be_dcache_decoder.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_be/src/v/bp_be_dcache/bp_be_dcache_wbuf.sv

# ==========================================
# BlackParrot Frontend
# ==========================================

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_fe/src/v/bp_fe_ras.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_fe/src/v/bp_fe_bht.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_fe/src/v/bp_fe_btb.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_fe/src/v/bp_fe_controller.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_fe/src/v/bp_fe_icache.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_fe/src/v/bp_fe_scan.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_fe/src/v/bp_fe_pc_gen.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_fe/src/v/bp_fe_realigner.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_fe/src/v/bp_fe_top.sv

# ==========================================
# BlackParrot Memory Engine
# ==========================================

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/lce/bp_lce.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/lce/bp_lce_req.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/lce/bp_lce_cmd.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/dev/bp_me_bedrock_register.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/dev/bp_me_cache_controller.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/dev/bp_me_dram_hash_decode.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/dev/bp_me_dram_hash_encode.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/dev/bp_me_cache_slice.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/dev/bp_me_cfg_slice.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/dev/bp_me_clint_slice.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/dev/bp_me_loopback.sv

# ==========================================
# CCE
# ==========================================

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_cce.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_cce_alu.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_cce_arbitrate.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_cce_branch.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_cce_dir.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_cce_dir_lru_extract.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_cce_dir_segment.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_cce_dir_tag_checker.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_cce_gad.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_cce_inst_decode.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_cce_inst_predecode.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_cce_inst_ram.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_cce_inst_stall.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_cce_msg.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_cce_pending_bits.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_cce_pma.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_cce_reg.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_cce_spec_bits.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_cce_src_sel.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_io_cce.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_cce_fsm.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_cce_wrapper.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_bedrock_size_to_len.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/cce/bp_uce.sv

# ==========================================
# Network
# ==========================================

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/network/bp_me_addr_to_cce_id.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/network/bp_me_cce_id_to_cord.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/network/bp_me_cord_to_id.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/network/bp_me_lce_id_to_cord.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/network/bp_me_stream_pump.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/network/bp_me_stream_pump_in.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/network/bp_me_stream_pump_out.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/network/bp_me_stream_pump_control.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/network/bp_me_stream_to_wormhole.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/network/bp_me_wormhole_header_encode.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/network/bp_me_wormhole_to_stream.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/network/bp_me_wormhole_stream_control.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/network/bp_me_xbar_stream.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_me/src/v/network/bp_me_stream_gearbox.sv

# ==========================================
# BlackParrot Top
# ==========================================

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_nd_socket.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_cacc_vdp.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_cacc_tile.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_cacc_tile_node.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_cacc_complex.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_sacc_vdp.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_sacc_scratchpad.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_sacc_tile.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_sacc_tile_node.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_sacc_complex.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_core.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_core_lite.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_core_minimal.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_core_complex.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_l2e_tile.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_l2e_tile_node.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_io_complex.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_io_link_to_lce.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_io_tile.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_io_tile_node.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_mem_complex.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_multicore.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_unicore.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_unicore_lite.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_core_tile.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_core_tile_node.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_processor.sv

# ==========================================
# Additional BlackParrot Common
# ==========================================

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_common/src/v/bsg_async_noc_link.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_common/src/v/bsg_dff_sync_read.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_common/src/v/bsg_fifo_1r1w_edge.sv

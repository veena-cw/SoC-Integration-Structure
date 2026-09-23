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
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_core.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_core_lite.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_core_minimal.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_core_complex.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_l2e_tile.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_l2e_tile_node.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_io_complex.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_io_link_to_lce.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_io_tile.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_io_tile_node.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_mem_complex.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_multicore.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_unicore.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_unicore_lite.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_core_tile.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_core_tile_node.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_top/src/v/bp_processor.sv

# ==========================================
# Additional BlackParrot Common
# ==========================================

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_common/src/v/bsg_async_noc_link.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_common/src/v/bsg_dff_sync_read.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_common/src/v/bsg_fifo_1r1w_edge.sv

# ==========================================
# BaseJump STL Miscellaneous
# ==========================================

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_abs.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_adder_cin.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_adder_one_hot.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_adder_ripple_carry.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_and.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_arb_fixed.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_arb_round_robin.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_array_concentrate_static.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_array_reverse.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_binary_plus_one_to_gray.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_buf.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_buf_ctrl.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_circular_ptr.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_clkbuf.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_clkgate_optional.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_concentrate_static.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_counter_clear_up.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_counter_clear_up_multi.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_counter_clear_up_one_hot.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_counter_clear_up_saturating.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_counter_clock_downsample.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_counter_dynamic_limit.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_counter_dynamic_limit_en.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_counter_max_clear_up.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_counter_overflow_en.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_counter_overflow_set_en.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_counter_set_down.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_counter_set_en.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_counter_up_down.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_counter_up_down_variable.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_counting_leading_zeros.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_crossbar_control_basic_o_by_i.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_crossbar_control_locking_o_by_i.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_crossbar_o_by_i.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_cycle_counter.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_decode.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_decode_thermometer.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_decode_with_v.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_defines.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_dff.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_dff_async_reset.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_dff_chain.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_dff_en.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_dff_en_bypass.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_dff_en_segmented.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_dff_gatestack.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_dff_negedge_reset.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_dff_reset.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_dff_reset_en.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_dff_reset_en_bypass.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_dff_reset_set_clear.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_dff_reset_var_en.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_dlatch.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_edge_detect.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_encode_one_hot.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_expand_bitmask.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_gray_to_binary.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_hash_bank.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_hash_bank_reverse.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_hashing_ipoly.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_icg_neg.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_icg_pos.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_id_pool.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_id_pool_dealloc_alloc_one_hot.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_id_pool_with_reserve.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_idiv_iterative.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_idiv_iterative_controller.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_idiv_unsigned_recip.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_imod_range.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_imul_iterative.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_inv.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_less_than.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_level_shift_up_down_sink.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_level_shift_up_down_source.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_lfsr.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_locking_arb_fixed.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_lru_pseudo_tree_backup.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_lru_pseudo_tree_decode.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_lru_pseudo_tree_encode.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_mul.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_mul_add_unsigned.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_mul_array.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_mul_array_row.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_mul_pipelined.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_mul_synth.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_mux.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_mux2_gatestack.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_mux_bitwise.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_mux_butterfly.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_mux_one_hot.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_mux_segmented.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_muxi2_gatestack.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_nand.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_nor2.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_nor3.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_pg_tree.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_popcount.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_priority_encode.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_priority_encode_one_hot_out.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_reduce.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_reduce_segmented.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_rotate_left.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_rotate_right.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_round_robin_arb.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_scan.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_scheduler_dataflow.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_scheduler_resource.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_scoreboard_dealloc_alloc.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_sparse_to_dense_boolean.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_strobe.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_swap.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_thermometer_count.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_tiehi.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_tielo.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_transpose.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_transpose_reduce.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_unconcentrate_static.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_wait_after_reset.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_wait_cycles.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_xnor.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_misc/bsg_xor.sv

# ==========================================
# BaseJump STL Cache
# ==========================================

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_cache/bsg_cache.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_cache/bsg_cache_dma.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_cache/bsg_cache_dma_to_wormhole.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_cache/bsg_cache_miss.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_cache/bsg_cache_decode.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_cache/bsg_cache_sbuf.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_cache/bsg_cache_tbuf.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_cache/bsg_cache_buffer_queue.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_cache/bsg_wormhole_to_cache_dma_fanout.sv


# ==========================================
# BaseJump STL Dataflow
# ==========================================

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_channel_tunnel.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_channel_tunnel_in.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_channel_tunnel_out.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_1_to_n_tagged_fifo.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_1_to_n_tagged.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_fifo_1r1w_large.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_fifo_1r1w_pseudo_large.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_fifo_1r1w_small.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_fifo_1r1w_small_unhardened.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_fifo_1r1w_small_hardened.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_fifo_1rw_large.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_fifo_tracker.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_flow_counter.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_one_fifo.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_parallel_in_serial_out.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_parallel_in_serial_out_dynamic.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_parallel_in_serial_out_passthrough.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_round_robin_1_to_n.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_round_robin_2_to_2.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_round_robin_n_to_1.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_serial_in_parallel_out.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_serial_in_parallel_out_dynamic.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_serial_in_parallel_out_full.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_serial_in_parallel_out_passthrough.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_shift_reg.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_dataflow/bsg_two_fifo.sv

# BlackParrot Common Dataflow
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_common/src/v/bsg_parallel_in_serial_out_passthrough_dynamic.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/bp_common/src/v/bsg_serial_in_parallel_out_passthrough_dynamic.sv


# ==========================================
# BaseJump STL Memory
# ==========================================

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_mem/bsg_cam_1r1w_replacement.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_mem/bsg_cam_1r1w_sync.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_mem/bsg_cam_1r1w_tag_array.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_mem/bsg_mem_1r1w.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_mem/bsg_mem_1r1w_one_hot.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_mem/bsg_mem_1r1w_sync_synth.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_mem/bsg_mem_1r1w_sync.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_mem/bsg_mem_1r1w_synth.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_mem/bsg_mem_1rw_sync.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_mem/bsg_mem_1rw_sync_mask_write_bit.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_mem/bsg_mem_1rw_sync_mask_write_bit_synth.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_mem/bsg_mem_1rw_sync_mask_write_byte.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_mem/bsg_mem_1rw_sync_mask_write_byte_synth.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_mem/bsg_mem_1rw_sync_synth.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_mem/bsg_mem_2r1w_sync.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_mem/bsg_mem_2r1w_sync_synth.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_mem/bsg_mem_3r1w_sync.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_mem/bsg_mem_3r1w_sync_synth.sv


# ==========================================
# HardFloat RTL
# ==========================================

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/HardFloat/source/compareRecFN.v
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/HardFloat/source/divSqrtRecFN.v
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/HardFloat/source/divSqrtRecFN_medium.v
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/HardFloat/source/divSqrtRecFN_small.v
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/HardFloat/source/fNToRecFN.v
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/HardFloat/source/HardFloat_primitives.v
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/HardFloat/source/HardFloat_rawFN.v
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/HardFloat/source/iNToRecFN.v
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/HardFloat/source/isSigNaNRecFN.v
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/HardFloat/source/mulAddRecFN.v
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/HardFloat/source/mulRecFN.v
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/HardFloat/source/recFNToFN.v
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/HardFloat/source/recFNToIN.v
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/HardFloat/source/recFNToRecFN.v
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/HardFloat/source/RISCV/HardFloat_specialize.v

# ==========================================
# BaseJump STL Network-on-Chip
# ==========================================

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_noc/bsg_mesh_stitch.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_noc/bsg_noc_repeater_node.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_noc/bsg_wormhole_concentrator.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_noc/bsg_wormhole_concentrator_in.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_noc/bsg_wormhole_concentrator_out.sv

$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_noc/bsg_wormhole_router.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_noc/bsg_wormhole_router_adapter_in.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_noc/bsg_wormhole_router_adapter_out.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_noc/bsg_wormhole_router_decoder_dor.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_noc/bsg_wormhole_router_input_control.sv
$REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/external/basejump_stl/bsg_noc/bsg_wormhole_router_output_control.sv

//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: 
//  Module            				: 
//  Primary Unit Owner                         	: 
//  Secondary Contact                           : 
//  Source [SystemVerilog|Verilog|VHDL|Other]   : 
//=================================================================================
//  Description: xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//=================================================================================
// filelist.f -- auto-generated. Adjust DUT path(s) as needed.
 // Universal filelist: plain file paths only (no +incdir) -- include dirs are
 // passed via Makefile VERILATOR_INCDIRS / XVLOG_FLAGS.
sd_emmc_controller_pkg.sv
../interface/sd_emmc_controller_axi_lite_if.sv
../interface/sd_emmc_controller_axi_mem_if.sv
../interface/sd_emmc_controller_sd_emmc_if.sv
../interface/reset_if.sv
../sd_card_bfm.sv

../agent/reset_agent/reset_transaction.sv
../agent/axi_lite_agent/sd_emmc_controller_axi_lite_agent_seq_item.sv
../agent/axi_mem_agent/sd_emmc_controller_axi_mem_agent_seq_item.sv
../agent/sd_emmc_agent/sd_emmc_controller_sd_emmc_agent_seq_item.sv

../agent/reset_agent/reset_sequencer.sv
../agent/reset_agent/reset_driver.sv
../agent/reset_agent/reset_monitor.sv
../agent/reset_agent/reset_agent.sv
../agent/reset_agent/reset_assert_sequence.sv

../agent/axi_lite_agent/sd_emmc_controller_axi_lite_agent_sequencer.sv
../agent/axi_lite_agent/sd_emmc_controller_axi_lite_agent_driver.sv
../agent/axi_lite_agent/sd_emmc_controller_axi_lite_agent_monitor.sv
../agent/axi_lite_agent/sd_emmc_controller_axi_lite_agent.sv
../agent/axi_lite_agent/sd_emmc_controller_axi_lite_agent_coverage.sv
../agent/axi_lite_agent/sequences/sd_emmc_controller_axi_lite_agent_base_seq.sv

../agent/axi_mem_agent/sd_emmc_controller_axi_mem_agent_sequencer.sv
../agent/axi_mem_agent/sd_emmc_controller_axi_mem_agent_driver.sv
../agent/axi_mem_agent/sd_emmc_controller_axi_mem_agent_monitor.sv
../agent/axi_mem_agent/sd_emmc_controller_axi_mem_agent.sv
../agent/axi_mem_agent/sd_emmc_controller_axi_mem_agent_coverage.sv
../agent/axi_mem_agent/sequences/sd_emmc_controller_axi_mem_agent_base_seq.sv

../agent/sd_emmc_agent/sd_emmc_controller_sd_emmc_agent_sequencer.sv
../agent/sd_emmc_agent/sd_emmc_controller_sd_emmc_agent_driver.sv
../agent/sd_emmc_agent/sd_emmc_controller_sd_emmc_agent_monitor.sv
../agent/sd_emmc_agent/sd_emmc_controller_sd_emmc_agent.sv
../agent/sd_emmc_agent/sd_emmc_controller_sd_emmc_agent_coverage.sv
../agent/sd_emmc_agent/sequences/sd_emmc_controller_sd_emmc_agent_base_seq.sv

// 4. Environment & Reference Model
../env/sd_emmc_ref_model.sv
../env/sd_emmc_controller_scoreboard.sv
../env/sd_emmc_virtual_sequencer.sv
../env/sd_emmc_controller_env.sv

// 5. Sequences
../seq_lib/sd_emmc_base_vseq.sv
../seq_lib/dma_base_vseq.sv
../seq_lib/reg_access_map_vseq.sv
../seq_lib/reg_lockout_dat_cmd_inhibit_vseq.sv
../seq_lib/bfm_init_vseq.sv
../seq_lib/dma_adma2_single_blk_vseq.sv
//../seq_lib/dma_dat_inhibit_lockout_vseq.sv
../seq_lib/cmd_crc7_vseq.sv
../seq_lib/normal_int_status_w1c_vseq.sv

// 6. Tests & Top
../tests/base_test.sv
../tests/tc_bfm_init_test.sv
../tests/tc_reg_access_map_test.sv
../tests/tc_reg_lockout_dat_cmd_inhibit_test.sv
../tests/tc_dma_adma2_single_blk_test.sv
//../tests/tc_dma_dat_inhibit_lockout_test.sv
../tests/tc_cmd_crc7_test.sv
../tests/tc_normal_int_status_w1c_test.sv
../top/tb_top.sv

 

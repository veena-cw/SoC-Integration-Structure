//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_tb_pkg
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Testbench package: clock & reset agent, IRQ agent, CPU model agent, external
//               memory model agent, env, sequences and tests.
//=================================================================================
// All testbench classes, compiled as one package (include directory: the tpu_host_tb root).
`ifndef TPU_HOST_TB_PKG_SV
`define TPU_HOST_TB_PKG_SV
`include "uvm_macros.svh"
package tpu_host_tb_pkg;
  import uvm_pkg::*;
  import tpu_host_pkg::*;

  // clock & reset agent (fixed-ratio clocks, rst_n)
  `include "agent/clk_rst_agent/tpu_host_clk_rst_agent_seq_item.sv"
  `include "agent/clk_rst_agent/tpu_host_clk_rst_agent_sequencer.sv"
  `include "agent/clk_rst_agent/tpu_host_clk_rst_agent_driver.sv"
  `include "agent/clk_rst_agent/tpu_host_clk_rst_agent_monitor.sv"
  `include "agent/clk_rst_agent/tpu_host_clk_rst_agent.sv"
  `include "agent/clk_rst_agent/sequences/tpu_host_clk_rst_agent_base_seq.sv"
  `include "agent/clk_rst_agent/sequences/tpu_host_clk_rst_agent_random_seq.sv"
  // IRQ agent (passive)
  `include "agent/irq_agent/tpu_host_irq_agent_seq_item.sv"
  `include "agent/irq_agent/tpu_host_irq_agent_monitor.sv"
  `include "agent/irq_agent/tpu_host_irq_agent.sv"
  // CPU model agent (AXI4-Lite master)
  `include "agent/axilm_agent/tpu_host_axilm_agent_seq_item.sv"
  `include "agent/axilm_agent/tpu_host_axilm_agent_sequencer.sv"
  `include "agent/axilm_agent/tpu_host_axilm_agent_driver.sv"
  `include "agent/axilm_agent/tpu_host_axilm_agent_monitor.sv"
  `include "agent/axilm_agent/tpu_host_axilm_agent.sv"
  `include "agent/axilm_agent/sequences/tpu_host_axilm_agent_base_seq.sv"
  // external memory model agent (AXI4 slave: sequencer, responder, monitor)
  `include "agent/axis_agent/tpu_host_axis_agent_cfg.sv"
  `include "agent/axis_agent/tpu_host_axis_agent_seq_item.sv"
  `include "agent/axis_agent/tpu_host_axis_agent_sequencer.sv"
  `include "agent/axis_agent/tpu_host_axis_agent_responder.sv"
  `include "agent/axis_agent/tpu_host_axis_agent_monitor.sv"
  `include "agent/axis_agent/tpu_host_axis_agent.sv"
  `include "agent/axis_agent/sequences/tpu_host_axis_agent_base_seq.sv"
  // env
  `include "env/tpu_host_cmd.sv"
  `include "env/tpu_host_exp_item.sv"
  `include "env/tpu_host_ref_model.sv"
  `include "env/tpu_host_layer.sv"
  // analysis imp classes for the scoreboard and the coverage collector (multiple write_* methods)
  `include "env/imps/uvm_analysis_imp_axis_agent.sv"
  `include "env/imps/uvm_analysis_imp_axilm_agent.sv"
  `include "env/imps/uvm_analysis_imp_reset.sv"
  `include "env/imps/uvm_analysis_imp_irq.sv"
  `include "env/imps/uvm_analysis_imp_exp.sv"
  `include "env/imps/uvm_analysis_imp_cov_axil.sv"
  `include "env/imps/uvm_analysis_imp_cov_axi.sv"
  `include "env/imps/uvm_analysis_imp_cov_rst.sv"
  `include "env/imps/uvm_analysis_imp_cov_irq.sv"
  `include "env/tpu_host_scoreboard.sv"
  `include "env/tpu_host_coverage.sv"
  `include "env/tpu_host_vsequencer.sv"
  `include "env/tpu_env.sv"
  `include "env/sequences/tpu_host_base_vseq.sv"
  // tests
  `include "tests/tpu_base_test.sv"
  // one virtual sequence per test (tpu_dma_store_vseq after tpu_dma_load_vseq, tpu_matmul_transpose_vseq after
  // tpu_e2e_matmul_vseq), then one test class per test
  `include "env/sequences/tpu_reset_sanity_vseq.sv"
  `include "env/sequences/tpu_csr_rw_vseq.sv"
  `include "env/sequences/tpu_csr_bad_access_vseq.sv"
  `include "env/sequences/tpu_irq_vseq.sv"
  `include "env/sequences/tpu_dma_load_vseq.sv"
  `include "env/sequences/tpu_dma_store_vseq.sv"
  `include "env/sequences/tpu_dma_param_errors_vseq.sv"
  `include "env/sequences/tpu_queue_full_overflow_vseq.sv"
  `include "env/sequences/tpu_start_empty_and_busy_vseq.sv"
  `include "env/sequences/tpu_e2e_matmul_vseq.sv"
  `include "env/sequences/tpu_matmul_transpose_vseq.sv"
  `include "env/sequences/tpu_soft_reset_vseq.sv"
  `include "env/sequences/tpu_csr_read_after_write_vseq.sv"
  `include "env/sequences/tpu_wait_modes_vseq.sv"
  `include "env/sequences/tpu_vpu_timeout_vseq.sv"
  `include "env/sequences/tpu_nop_latch_levels_vseq.sv"
  `include "env/sequences/tpu_dma_4k_burst_split_vseq.sv"
  `include "env/sequences/tpu_dma_partial_beat_vseq.sv"
  `include "env/sequences/tpu_dma_axi_error_resp_vseq.sv"
  `include "env/sequences/tpu_dma_backpressure_timeout_vseq.sv"
  `include "env/sequences/tpu_matmul_shapes_vseq.sv"
  `include "env/sequences/tpu_bias_activation_vseq.sv"
  `include "env/sequences/tpu_transition_pass_vseq.sv"
  `include "env/sequences/tpu_backward_pass_vseq.sv"
  `include "env/sequences/tpu_gradient_descent_vseq.sv"
  `include "env/sequences/tpu_q88_extremes_vseq.sv"
  `include "env/sequences/tpu_xor_training_vseq.sv"
  `include "env/sequences/tpu_reset_during_traffic_vseq.sv"
  `include "env/sequences/tpu_ub_capacity_limits_vseq.sv"
  `include "env/sequences/tpu_random_command_stream_vseq.sv"
  `include "env/sequences/tpu_random_training_vseq.sv"
  `include "env/sequences/tpu_control_reg_vseq.sv"
  `include "env/sequences/tpu_instr4_strobe_push_vseq.sv"
  `include "env/sequences/tpu_axil_channel_order_vseq.sv"
  `include "env/sequences/tpu_queue_push_while_running_vseq.sv"
  `include "env/sequences/tpu_error_accumulate_vseq.sv"
  `include "env/sequences/tpu_dma_store_ub_offset_vseq.sv"
  `include "env/sequences/tpu_soft_reset_clears_ub_vseq.sv"
  `include "env/sequences/tpu_lr_upper_bits_vseq.sv"
  `include "env/sequences/tpu_dma_timeout_disabled_vseq.sv"
  `include "env/sequences/tpu_wait_mode_columns_vseq.sv"
  `include "env/sequences/tpu_random_error_injection_vseq.sv"
  `include "env/sequences/tpu_random_csr_vseq.sv"
  `include "env/sequences/tpu_random_reset_vseq.sv"
  `include "tests/tpu_reset_sanity.sv"
  `include "tests/tpu_csr_rw.sv"
  `include "tests/tpu_csr_bad_access.sv"
  `include "tests/tpu_irq.sv"
  `include "tests/tpu_dma_load.sv"
  `include "tests/tpu_dma_store.sv"
  `include "tests/tpu_dma_param_errors.sv"
  `include "tests/tpu_queue_full_overflow.sv"
  `include "tests/tpu_start_empty_and_busy.sv"
  `include "tests/tpu_e2e_matmul.sv"
  `include "tests/tpu_matmul_transpose.sv"
  `include "tests/tpu_soft_reset.sv"
  `include "tests/tpu_csr_read_after_write.sv"
  `include "tests/tpu_wait_modes.sv"
  `include "tests/tpu_vpu_timeout.sv"
  `include "tests/tpu_nop_latch_levels.sv"
  `include "tests/tpu_dma_4k_burst_split.sv"
  `include "tests/tpu_dma_partial_beat.sv"
  `include "tests/tpu_dma_axi_error_resp.sv"
  `include "tests/tpu_dma_backpressure_timeout.sv"
  `include "tests/tpu_matmul_shapes.sv"
  `include "tests/tpu_bias_activation.sv"
  `include "tests/tpu_transition_pass.sv"
  `include "tests/tpu_backward_pass.sv"
  `include "tests/tpu_gradient_descent.sv"
  `include "tests/tpu_q88_extremes.sv"
  `include "tests/tpu_xor_training.sv"
  `include "tests/tpu_reset_during_traffic.sv"
  `include "tests/tpu_ub_capacity_limits.sv"
  `include "tests/tpu_random_command_stream.sv"
  `include "tests/tpu_random_training.sv"
  `include "tests/tpu_control_reg.sv"
  `include "tests/tpu_instr4_strobe_push.sv"
  `include "tests/tpu_axil_channel_order.sv"
  `include "tests/tpu_queue_push_while_running.sv"
  `include "tests/tpu_error_accumulate.sv"
  `include "tests/tpu_dma_store_ub_offset.sv"
  `include "tests/tpu_soft_reset_clears_ub.sv"
  `include "tests/tpu_lr_upper_bits.sv"
  `include "tests/tpu_dma_timeout_disabled.sv"
  `include "tests/tpu_wait_mode_columns.sv"
  `include "tests/tpu_random_error_injection.sv"
  `include "tests/tpu_random_csr.sv"
  `include "tests/tpu_random_reset.sv"
endpackage : tpu_host_tb_pkg
`endif

//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_reset_during_traffic_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_reset_during_traffic: rst_n asserted in the middle of
//               activity.
//=================================================================================
class tpu_reset_during_traffic_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_reset_during_traffic_vseq)
  function new(string name = "tpu_reset_during_traffic_vseq"); super.new(name); endfunction
  task body();
    tpu_host_ref_model::mat_t a, w;
    q88_t z[$];
    for (int phase = 0; phase < 3; phase++) begin
      z.delete();
      for (int k = 0; k < 128; k++) z.push_back(16'($urandom));
      mem_put(32'h000E_0000, z);
      p_sequencer.mem.rvalid_min = 16; p_sequencer.mem.rvalid_max = 32;   // clk_axi cycles: traffic still running
      p_sequencer.mem.wready_min = 16; p_sequencer.mem.wready_max = 32;   // when rst_n is pulsed below
      if (phase == 0) dma_load(32'h000E_0000, 128);                                         // during a load
      if (phase == 1) begin dma_load(32'h000E_0000, 64); dma_store(32'h000E_8000, 0, 64); end   // during a store
      if (phase == 2) begin                                                                  // during compute
        a = rnd_mat(32, 2); w = rnd_mat(2, 2);
        push(tpu_host_cmd::ub_read(PTR_WEIGHT, 0, 2, 2)); repeat (weight_idle) push(tpu_host_cmd::nop());
        push(tpu_host_cmd::ub_read(PTR_INPUT, 4, 32, 2)); push(tpu_host_cmd::switch_weights());
      end
      tpu_start(); idle(phase == 1 ? 120 : 40);
      hw_reset();                                    // rst_n in the middle of the activity
      p_sequencer.mem.rvalid_min = 0; p_sequencer.mem.rvalid_max = 2;
      p_sequencer.mem.wready_min = 0; p_sequencer.mem.wready_max = 2;
      read_regs(CSR_CONTROL, CSR_VERSION);           // CSRs back at reset values (scoreboard mirror)
      a = rnd_mat(4, 2); w = rnd_mat(2, 2);
      matmul_pass(a, w, 0, 32'h000E_1000, 32'h000E_2000, 0, $sformatf("matmul after reset (phase %0d)", phase));
      hw_reset();
    end
  endtask
endclass

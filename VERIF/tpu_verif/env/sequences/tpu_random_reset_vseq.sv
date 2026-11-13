//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_random_reset_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_random_reset: Random reset: rst_n or SOFT_RESET at a
//               random time during a random workload (DMA load, store or matrix multiply with slow
//               memory); afterwards a fresh matrix multiply must give the model result.
//=================================================================================
class tpu_random_reset_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_random_reset_vseq)
  function new(string name = "tpu_random_reset_vseq"); super.new(name); endfunction

  int unsigned iterations = 10;
  task body();
    tpu_host_axis_agent_cfg m;
    tpu_host_ref_model::mat_t a, w;
    q88_t z[$];
    bit   hard;
    int   work;
    m = p_sequencer.mem;
    if ($value$plusargs("ITER=%d", iterations)) `uvm_info("ITER", $sformatf("%0d iterations", iterations), UVM_LOW)
    for (int it = 0; it < int'(iterations); it++) begin
      hard = ($urandom_range(0, 1) != 0);
      work = $urandom_range(0, 2);
      z.delete();
      for (int k = 0; k < 128; k++) z.push_back(16'($urandom));
      mem_put(32'h0040_0000, z);
      m.rvalid_min = 8; m.rvalid_max = 32; m.wready_min = 8; m.wready_max = 32;
      case (work)
        0: dma_load(32'h0040_0000, $urandom_range(16, 128));
        1: begin dma_load(32'h0040_0000, 64); dma_store(32'h0041_0000, 0, 64); end
        default: begin
          a = rnd_mat(16, 2); w = rnd_mat(2, 2);
          push(tpu_host_cmd::ub_read(PTR_WEIGHT, 0, 2, 2));
          repeat (weight_idle) push(tpu_host_cmd::nop());
          push(tpu_host_cmd::ub_read(PTR_INPUT, 4, 16, 2));
          push(tpu_host_cmd::switch_weights());
        end
      endcase
      tpu_start();
      idle($urandom_range(0, 200));
      `uvm_info("RRST", $sformatf("iteration %0d: %s during workload %0d", it, hard ? "rst_n" : "SOFT_RESET", work), UVM_LOW)
      if (hard) begin
        hw_reset(time'($urandom_range(20, 400)));
        read_regs(CSR_CONTROL, CSR_VERSION);           // reset values (scoreboard mirror)
      end else begin
        soft_reset();
        idle(1000);                                    // memory model drops a burst the DUT abandoned
        read_regs(CSR_INT_ENABLE, CSR_TIMEOUT);        // CSR values kept (scoreboard mirror)
      end
      m.rvalid_min = 0; m.rvalid_max = 2; m.wready_min = 0; m.wready_max = 2;
      if (!hard) hw_reset();                           // a burst cut by SOFT_RESET may still be open on the bus
      a = rnd_mat(4, 2); w = rnd_mat(2, 2);
      matmul_pass(a, w, 0, 32'h0042_0000, 32'h0043_0000, 0, $sformatf("matmul after the reset of iteration %0d", it));
    end
  endtask
endclass

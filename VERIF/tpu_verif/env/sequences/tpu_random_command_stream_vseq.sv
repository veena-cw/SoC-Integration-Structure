//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_random_command_stream_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_random_command_stream: Random mixes of legal
//               commands.
//=================================================================================
class tpu_random_command_stream_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_random_command_stream_vseq)
  int unsigned iterations = 25;
  function new(string name = "tpu_random_command_stream_vseq"); super.new(name); endfunction
  task body();
    tpu_host_axis_agent_cfg m;
    m = p_sequencer.mem;
    if ($value$plusargs("ITER=%d", iterations)) `uvm_info("ITER", $sformatf("%0d iterations", iterations), UVM_LOW)
    for (int it = 0; it < iterations; it++) begin
      int kind;
      kind = $urandom_range(0, 3);
      m.addr_ready_max = $urandom_range(0, 8); m.wready_max = $urandom_range(0, 8);
      m.rvalid_max = $urandom_range(0, 8); m.bvalid_max = $urandom_range(0, 8);
      soft_reset();
      case (kind)
        0: begin                                                     // DMA loopback, random length
          q88_t w[$];
          int len;
          bit [31:0] src;
          w.delete();
          len = $urandom_range(1, 128);
          src = ($urandom_range(0, 15) << 16) + 16 * $urandom_range(0, 255);
          for (int k = 0; k < len; k++) w.push_back(16'($urandom));
          mem_put(src, w);
          if ($urandom_range(0, 1) != 0) push(tpu_host_cmd::nop(WM_CYCLES, $urandom_range(0, 50)));
          dma_load(src, len); dma_store(32'h0010_0000, 0, len);
          run_expect_done($sformatf("random loopback %0d", it));
          void'(check_mem($sformatf("random loopback %0d", it), 32'h0010_0000, w));
        end
        1: begin                                                     // matmul, random shape
          tpu_host_layer l;
          l = tpu_host_layer::type_id::create("l");
          l.x = rnd_mat($urandom_range(1, 16), $urandom_range(1, 2)); l.w = rnd_mat(l.x[0].size(), $urandom_range(1, 2));
          l.pathway = 4'b0000;
          run_layer(l, 32'h0011_0000, 32'h0011_8000, 0, $sformatf("random matmul %0d", it));
        end
        2: begin                                                     // forward layer
          tpu_host_layer l;
          l = tpu_host_layer::type_id::create("l");
          l.x = rnd_mat($urandom_range(1, 8), 2); l.w = rnd_mat(2, 2); l.pathway = 4'b1100;
          l.bias = '{tpu_host_ref_model::from_real(-0.5), tpu_host_ref_model::from_real(0.5)};
          l.leak = tpu_host_ref_model::from_real($urandom_range(0, 4) / 4.0);
          run_layer(l, 32'h0012_0000, 32'h0012_8000, 0, $sformatf("random forward %0d", it));
        end
        default: begin                                               // NOP / wait mix only
          repeat ($urandom_range(1, 10)) push(tpu_host_cmd::nop(cmd_wait_e'($urandom_range(0, 2) == 2 ? WM_CYCLES : WM_NONE), $urandom_range(0, 100)));
          run_expect_done($sformatf("random NOPs %0d", it));
        end
      endcase
    end
  endtask
endclass

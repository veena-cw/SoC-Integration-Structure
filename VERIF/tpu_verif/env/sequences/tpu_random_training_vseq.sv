//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_random_training_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_random_training: Random small networks.
//=================================================================================
class tpu_random_training_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_random_training_vseq)
  int unsigned iterations = 10;
  function new(string name = "tpu_random_training_vseq"); super.new(name); endfunction
  task body();
    if ($value$plusargs("ITER=%d", iterations)) `uvm_info("ITER", $sformatf("%0d iterations", iterations), UVM_LOW)
    for (int it = 0; it < iterations; it++) begin
      tpu_host_layer l;
      int b;
      l = tpu_host_layer::type_id::create("l");
      b = $urandom_range(1, 4);
      l.x = rnd_mat(b, 2, -1.0, 1.0); l.w = rnd_mat(1, 2, -1.0, 1.0); l.transpose = 1;
      l.bias = '{tpu_host_ref_model::from_real(-1.0 + $urandom_range(0, 15) / 8.0)};
      l.y = rnd_mat(b, 1, 0.0, 1.0);
      l.pathway = 4'b1111; l.leak = tpu_host_ref_model::from_real($urandom_range(1, 4) / 8.0);
      l.inv_batch_x2 = tpu_host_ref_model::from_real(2.0 / b);
      l.grad_ptr = 5; l.lr = tpu_host_ref_model::from_real($urandom_range(1, 8) / 8.0);
      soft_reset();
      run_layer(l, 32'h0013_0000, 32'h0013_8000, 0, $sformatf("random training step %0d", it));
    end
  endtask
endclass

//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_bias_activation_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_bias_activation: Bias add and leaky ReLU, and every
//               pathway combination.
//=================================================================================
class tpu_bias_activation_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_bias_activation_vseq)
  function new(string name = "tpu_bias_activation_vseq"); super.new(name); endfunction
  task body();
    real leaks[$] = '{0.0, 0.25, 1.0};
    // bias + leaky ReLU with three leak factors (leak 0 = plain ReLU)
    foreach (leaks[i]) begin
      tpu_host_layer l;
      l = tpu_host_layer::type_id::create("l");
      l.x = rnd_mat(4, 2); l.w = rnd_mat(2, 2); l.bias = '{tpu_host_ref_model::from_real(-1.0), tpu_host_ref_model::from_real(0.5)};
      l.pathway = 4'b1100; l.leak = tpu_host_ref_model::from_real(leaks[i]);
      soft_reset();
      run_layer(l, 32'h0007_0000, 32'h0007_8000, 0, $sformatf("bias + leaky ReLU, leak %0.2f", leaks[i]));
    end
    // every pathway value (stages bypassed when their bit is 0)
    for (int pw = 0; pw < 16; pw++) begin
      tpu_host_layer l;
      l = tpu_host_layer::type_id::create("l");
      l.x = rnd_mat(4, 2, -1.0, 1.0); l.w = rnd_mat(2, 2, -1.0, 1.0);
      l.bias = '{tpu_host_ref_model::from_real(0.25), tpu_host_ref_model::from_real(-0.25)};
      l.y = rnd_mat(4, 2, -1.0, 1.0); l.h = rnd_mat(4, 2, -1.0, 1.0);
      l.pathway = 4'(pw); l.leak = tpu_host_ref_model::from_real(0.5); l.inv_batch_x2 = tpu_host_ref_model::from_real(0.5);
      soft_reset();
      run_layer(l, 32'h0007_0000, 32'h0007_8000, 0, $sformatf("pathway %4b", pw[3:0]));
    end
  endtask
endclass

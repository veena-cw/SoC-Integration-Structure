//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_gradient_descent_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_gradient_descent: Weight and bias update in the UB.
//=================================================================================
class tpu_gradient_descent_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_gradient_descent_vseq)
  function new(string name = "tpu_gradient_descent_vseq"); super.new(name); endfunction
  task body();
    real lrs[$] = '{0.5, 0.125, 1.0};
    foreach (lrs[i]) begin
      tpu_host_layer l;
      // bias update during the transition pass (ptr 5)
      l = tpu_host_layer::type_id::create("lb");
      l.x = rnd_mat(4, 2, -1.0, 1.0); l.w = rnd_mat(1, 2, -1.0, 1.0); l.transpose = 1;
      l.bias = '{tpu_host_ref_model::from_real(0.6)}; l.y = rnd_mat(4, 1, 0.0, 1.0);
      l.pathway = 4'b1111; l.leak = tpu_host_ref_model::from_real(0.5); l.inv_batch_x2 = tpu_host_ref_model::from_real(0.5);
      l.grad_ptr = 5; l.lr = tpu_host_ref_model::from_real(lrs[i]);
      soft_reset();
      run_layer(l, 32'h000A_0000, 32'h000A_8000, 0, $sformatf("bias update, lr %0.3f", lrs[i]));
      // weight update (ptr 6): gradient tile from a pathway-0000 pass has the weight tile's shape
      l = tpu_host_layer::type_id::create("lw");
      l.x = rnd_mat(2, 2, -1.0, 1.0); l.w = rnd_mat(2, 2, -1.0, 1.0); l.transpose = 1;
      l.pathway = 4'b0000; l.grad_ptr = 6; l.lr = tpu_host_ref_model::from_real(lrs[i]);
      soft_reset();
      run_layer(l, 32'h000B_0000, 32'h000B_8000, 0, $sformatf("weight update, lr %0.3f", lrs[i]));
    end
  endtask
endclass

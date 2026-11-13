//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_transition_pass_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_transition_pass: Transition pass: forward to loss
//               gradient.
//=================================================================================
class tpu_transition_pass_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_transition_pass_vseq)
  function new(string name = "tpu_transition_pass_vseq"); super.new(name); endfunction
  task body();
    int batch[$] = '{1, 2, 4};
    foreach (batch[i]) begin
      tpu_host_layer l;
      l = tpu_host_layer::type_id::create("l");
      l.x = rnd_mat(batch[i], 2, -1.0, 1.0); l.w = rnd_mat(1, 2, -1.0, 1.0); l.transpose = 1;   // W2 is 1 x 2, read transposed
      l.bias = '{tpu_host_ref_model::from_real(0.6)}; l.y = rnd_mat(batch[i], 1, 0.0, 1.0);
      l.pathway = 4'b1111; l.leak = tpu_host_ref_model::from_real(0.5);
      l.inv_batch_x2 = tpu_host_ref_model::from_real(2.0 / batch[i]);
      soft_reset();
      run_layer(l, 32'h0008_0000, 32'h0008_8000, 0, $sformatf("transition pass, batch %0d", batch[i]));
    end
  endtask
endclass

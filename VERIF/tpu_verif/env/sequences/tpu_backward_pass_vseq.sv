//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_backward_pass_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_backward_pass: Backward pass through the activation
//               derivative.
//=================================================================================
class tpu_backward_pass_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_backward_pass_vseq)
  function new(string name = "tpu_backward_pass_vseq"); super.new(name); endfunction
  task body();
    tpu_host_layer l;
    l = tpu_host_layer::type_id::create("l");
    l.x = rnd_mat(4, 1, -0.5, 0.5); l.w = rnd_mat(1, 2, -1.0, 1.0);    // dL/dZ2 (4 x 1) x W2 (1 x 2)
    l.h = rnd_mat(4, 2, -1.0, 1.0);                                    // H1 from the UB, mixed signs
    l.pathway = 4'b0001; l.leak = tpu_host_ref_model::from_real(0.5);
    run_layer(l, 32'h0009_0000, 32'h0009_8000, 0, "backward pass");
  endtask
endclass

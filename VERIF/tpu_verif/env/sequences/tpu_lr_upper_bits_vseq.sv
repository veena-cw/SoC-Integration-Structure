//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_lr_upper_bits_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_lr_upper_bits: LEARNING_RATE[31:16] is stored but not
//               used: a weight update with junk in the upper half uses only bits [15:0].
//=================================================================================
class tpu_lr_upper_bits_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_lr_upper_bits_vseq)
  function new(string name = "tpu_lr_upper_bits_vseq"); super.new(name); endfunction

  task body();
    tpu_host_layer l;
    l = tpu_host_layer::type_id::create("l");
    l.x = rnd_mat(2, 2, -1.0, 1.0); l.w = rnd_mat(2, 2, -1.0, 1.0); l.transpose = 1;
    l.pathway = 4'b0000; l.grad_ptr = 6; l.lr = tpu_host_ref_model::from_real(0.5);
    l.lr_upper = 16'hA5C3;                                 // stored in the register, ignored by the core
    run_layer(l, 32'h0008_0000, 32'h0008_8000, 0, "weight update with LEARNING_RATE[31:16] = 0xA5C3");
    read_regs(CSR_LR, CSR_LR);                             // the scoreboard mirror checks all 32 bits are stored
  endtask
endclass

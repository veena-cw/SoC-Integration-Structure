//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_nop_latch_levels_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_nop_latch_levels: NOP entries and held VPU levels.
//=================================================================================
class tpu_nop_latch_levels_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_nop_latch_levels_vseq)
  function new(string name = "tpu_nop_latch_levels_vseq"); super.new(name); endfunction
  task body();
    tpu_host_layer l;
    l = tpu_host_layer::type_id::create("l");
    l.x = rnd_mat(4, 2); l.w = rnd_mat(2, 2); l.bias = '{tpu_host_ref_model::from_real(-0.5), tpu_host_ref_model::from_real(0.25)};
    l.pathway = 4'b1100; l.leak = tpu_host_ref_model::from_real(0.25);
    l.latch_on_input_only = 1;                       // later entries do not re-latch the levels
    run_layer(l, 32'h0007_0000, 32'h0007_1000, 0, "levels latched once");
  endtask
endclass

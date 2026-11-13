//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_wait_mode_columns_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_wait_mode_columns: Wait modes WM_VPU1 and WM_VPU_ANY
//               with one and two output columns (VPU lane 2 idle when N = 1).
//=================================================================================
class tpu_wait_mode_columns_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_wait_mode_columns_vseq)
  function new(string name = "tpu_wait_mode_columns_vseq"); super.new(name); endfunction

  task body();
    tpu_host_ref_model::mat_t a, w;
    cmd_wait_e wm[$] = '{WM_VPU1, WM_VPU_ANY};
    foreach (wm[i]) for (int n = 1; n <= 2; n++) begin
      a = rnd_mat(4, 2); w = rnd_mat(2, n);
      soft_reset();
      matmul_pass(a, w, 0, 32'h000A_0000, 32'h000A_8000 + 32'h100 * (2 * i + n), 0,
                  $sformatf("matmul N=%0d, wait mode %s", n, wm[i].name()), wm[i]);
    end
  endtask
endclass

//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_e2e_matmul_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_e2e_matmul: C = A x B end to end (reference diagram
//               flow).
//=================================================================================
class tpu_e2e_matmul_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_e2e_matmul_vseq)
  bit transpose_list[$] = '{0};
  int m_list[$] = '{4};
  function new(string name = "tpu_e2e_matmul_vseq"); super.new(name); endfunction
  function q88_t rnd();   // values in [-2, 2) with a few fraction bits
    int v;
    v = $urandom_range(0, 63);                       // signed copy: $urandom_range is unsigned
    return tpu_host_ref_model::from_real((v - 32) / 16.0);
  endfunction
  task body();
    tpu_host_ref_model::mat_t a, w;
    foreach (transpose_list[t]) foreach (m_list[mi]) begin
      a.delete(); w.delete();
      for (int i = 0; i < m_list[mi]; i++) begin q88_t r[$]; r = '{rnd(), rnd()}; a.push_back(r); end
      for (int i = 0; i < 2; i++)          begin q88_t r[$]; r = '{rnd(), rnd()}; w.push_back(r); end
      soft_reset();
      matmul_pass(a, w, transpose_list[t], 32'h0002_0000, 32'h0009_0000, 0,
                  $sformatf("matmul M=%0d transpose=%0b", m_list[mi], transpose_list[t]));
    end
  endtask
endclass

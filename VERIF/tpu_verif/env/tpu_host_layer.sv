//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_layer
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: One array + VPU pass described as data (operands, pathway, levels, optional
//               gradient step) with its reference-model result.
//=================================================================================
// One array + VPU pass of the tiny-TPU core, described as data. tpu_host_base_vseq::run_layer() loads the
// operands by DMA, issues the UB reads at the cycle offsets below, stores the results by DMA and compares them
// with expected(), which applies the reference model stage by stage.
//
// Read offsets, in cycles after the input read (measured on the core, tpu_host_tb/rtl_checks/core_sweep.sv):
// each VPU stage is one register stage, in the order bias -> leaky ReLU -> loss -> derivative; a stage's UB
// operand must start 2 cycles after the input read plus one cycle per enabled stage in front of it. The
// gradient-descent operand starts 3 cycles after the input read plus one per enabled stage.
class tpu_host_layer extends uvm_object;
  `uvm_object_utils(tpu_host_layer)
  typedef bit [15:0] q88_t;

  tpu_host_ref_model::mat_t x;          // input A, M x K (K <= 2)
  tpu_host_ref_model::mat_t w;          // weights, K x N (transpose = 0) or N x K (transpose = 1), N <= 2
  bit                       transpose;
  bit [3:0]                 pathway;     // {bias, leaky ReLU, MSE loss, leaky ReLU derivative}
  q88_t                     leak, inv_batch_x2;
  q88_t                     bias[$];     // N   (pathway[3])
  tpu_host_ref_model::mat_t y;           // M x N targets (pathway[1])
  tpu_host_ref_model::mat_t h;           // M x N activations from the UB (pathway[0] without loss)
  int                       grad_ptr;    // 0 none, 5 bias update, 6 weight update (in place)
  tpu_host_ref_model::mat_t upd;         // grad_ptr 6: M x N tile updated in place; empty = the weights w
  q88_t                     lr;          // LEARNING_RATE for grad_ptr
  bit [15:0]                lr_upper;    // written to LEARNING_RATE[31:16] (stored, not used by the core)
  cmd_wait_e                wait_mode = WM_VPU_ANY;
  bit                       latch_on_input_only = 1;  // levels latched on the input-read entry only

  function new(string name = "tpu_host_layer");
    super.new(name);
  endfunction

  function int m(); return x.size();    endfunction
  function int k(); return x[0].size(); endfunction
  function int n(); return transpose ? w.size() : w[0].size(); endfunction

  // UB read offsets (cycles after the input read; 0 = not issued), see the header
  function int bias_slot(); return pathway[3] ? 2 : 0; endfunction
  function int y_slot();    return pathway[1] ? 2 + pathway[3] + pathway[2] : 0; endfunction
  function int h_slot();    return (pathway[0] && !pathway[1]) ? 2 + pathway[3] + pathway[2] : 0; endfunction  // with loss: cached H
  function int grad_slot(); return (grad_ptr != 0) ? 3 + pathway[3] + pathway[2] + pathway[1] + pathway[0] : 0; endfunction
  function bit has_upd();   return grad_ptr == 6 && upd.size() > 0; endfunction

  // VPU output for every (row, col)
  function void expected(ref tpu_host_ref_model::mat_t out);
    tpu_host_ref_model::mat_t mm;
    q88_t row[$];
    q88_t v, hv, hsrc;
    tpu_host_ref_model::matmul(x, w, transpose, mm);
    out.delete();
    for (int r = 0; r < m(); r++) begin
      row.delete();
      for (int c = 0; c < n(); c++) begin
        v = mm[r][c]; hv = 0;
        if (pathway[3]) v = tpu_host_ref_model::add(v, bias[c]);
        if (pathway[2]) begin v = tpu_host_ref_model::leaky_relu(v, leak); hv = v; end
        if (pathway[1]) v = tpu_host_ref_model::mse_grad(v, y[r][c], inv_batch_x2);
        if (pathway[0]) begin
          hsrc = pathway[1] ? hv : h[r][c];           // loss active: cached H from the leaky ReLU stage
          v = tpu_host_ref_model::leaky_relu_deriv(v, hsrc, leak);
        end
        row.push_back(v);
      end
      out.push_back(row);
    end
  endfunction

  // parameters after the in-place gradient step (grad_ptr 5: biases, 6: weights)
  function void expected_params(const ref tpu_host_ref_model::mat_t g, ref q88_t p[$]);
    q88_t b;
    p.delete();
    if (grad_ptr == 5) begin
      foreach (bias[c]) begin
        b = bias[c];
        for (int r = 0; r < g.size(); r++) b = tpu_host_ref_model::grad_step(b, g[r][c], lr);
        p.push_back(b);
      end
    end else if (grad_ptr == 6) begin
      // parameter tile updated element-wise with the VPU output of the same shape
      if (has_upd()) foreach (upd[i, j]) p.push_back(tpu_host_ref_model::grad_step(upd[i][j], g[i][j], lr));
      else           foreach (w[i, j])   p.push_back(tpu_host_ref_model::grad_step(w[i][j], g[i][j], lr));
    end
  endfunction
endclass : tpu_host_layer

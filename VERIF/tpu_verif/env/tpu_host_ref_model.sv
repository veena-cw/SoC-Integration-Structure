//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_ref_model
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Bit-accurate Q8.8 reference model: rounding multiply, saturating add /
//               subtract, 2x2 matmul pass, bias, leaky ReLU, MSE loss gradient, leaky ReLU
//               derivative, gradient step.
//=================================================================================
// Bit-accurate Q8.8 reference model of the tiny-TPU core arithmetic (ip/tpu/rtl/src/fixedpoint.sv,
// pe.sv, vpu.sv children, gradient_descent.sv). All values are signed 16-bit Q8.8.
class tpu_host_ref_model extends uvm_object;
  `uvm_object_utils(tpu_host_ref_model)

  typedef bit [15:0] q88_t;
  typedef q88_t      mat_t[$][$];     // row-major [row][col]

  function new(string name = "tpu_host_ref_model");
    super.new(name);
  endfunction

  // float <-> Q8.8 (round to nearest, like the cocotb to_fixed())
  static function q88_t from_real(real v);
    int s;
    s = $rtoi(v * 256.0 + (v >= 0 ? 0.5 : -0.5));
    if (s > 32767) s = 32767; if (s < -32768) s = -32768;
    return s[15:0];
  endfunction
  static function real to_real(q88_t q);
    return $itor($signed(q)) / 256.0;
  endfunction

  // fxp_mul: Q16.16 product, round on bit 7 (unless already max positive), saturate to 16 bits
  static function q88_t mul(q88_t a, q88_t b);
    bit signed [31:0] p;
    bit [23:0] r;
    bit [15:0] ini;
    p = $signed(a) * $signed(b);
    r = 24'(p >>> 8);                              // Q16.16 -> Q16.8 (the 7 lower fraction bits are dropped)
    if (p[7] && !(!r[23] && (&r[22:0]))) r = r + 24'd1;
    ini = r[23:8];
    if (!ini[15] && (|ini[14:7]))      return 16'h7FFF;
    else if (ini[15] && !(&ini[14:7])) return 16'h8000;
    else                               return {ini[7:0], r[7:0]};
  endfunction
  // fxp_add / fxp_addsub: 17-bit result saturated to 16 bits
  static function q88_t sat17(int s);
    if (s > 32767)  return 16'h7FFF;
    if (s < -32768) return 16'h8000;
    return s[15:0];
  endfunction
  static function q88_t add(q88_t a, q88_t b); return sat17(int'($signed(a)) + int'($signed(b))); endfunction
  static function q88_t sub(q88_t a, q88_t b); return sat17(int'($signed(a)) - int'($signed(b))); endfunction

  // VPU stages
  static function q88_t leaky_relu(q88_t x, q88_t leak);
    return ($signed(x) >= 0) ? x : mul(x, leak);
  endfunction
  static function q88_t leaky_relu_deriv(q88_t grad, q88_t h, q88_t leak);
    return ($signed(h) >= 0) ? grad : mul(grad, leak);
  endfunction
  static function q88_t mse_grad(q88_t h, q88_t y, q88_t inv_batch_x2);
    return mul(sub(h, y), inv_batch_x2);
  endfunction
  static function q88_t grad_step(q88_t w, q88_t grad, q88_t lr);
    return sub(w, mul(grad, lr));
  endfunction

  // 2x2 systolic array, one pass: C[m][n] = x[m][0]*w(0,n) + x[m][1]*w(1,n) (column partial sums,
  // multiplies rounded, add saturated). transpose = 1 uses w(k,n) = W[n][k] (C = X * W^T).
  static function void matmul(const ref mat_t x, const ref mat_t w, bit transpose, ref mat_t c);
    // locals are assigned explicitly (no declaration initializers inside loops: Verilator may run them once)
    int m_rows, k_dim, n_cols;
    q88_t row[$];
    q88_t acc, wk;
    m_rows = x.size();
    k_dim  = x[0].size();
    n_cols = transpose ? w.size() : w[0].size();
    c.delete();
    for (int m = 0; m < m_rows; m++) begin
      row.delete();
      for (int n = 0; n < n_cols; n++) begin
        acc = 0;
        for (int k = 0; k < k_dim; k++) begin
          wk  = transpose ? w[n][k] : w[k][n];
          acc = (k == 0) ? mul(x[m][k], wk) : add(mul(x[m][k], wk), acc);
        end
        row.push_back(acc);
      end
      c.push_back(row);
    end
  endfunction

  static function void flatten(const ref mat_t a, ref q88_t w[$]);
    w.delete();
    foreach (a[i, j]) w.push_back(a[i][j]);
  endfunction
endclass : tpu_host_ref_model

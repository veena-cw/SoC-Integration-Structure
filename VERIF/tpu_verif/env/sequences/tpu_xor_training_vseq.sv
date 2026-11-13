//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_xor_training_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_xor_training: Full XOR network training end to end.
//=================================================================================
// One (or +ITER=n) full training step of a 2-2-1 XOR network (leaky ReLU, MSE loss), built only from
// run_layer() passes. Every pass is checked against the Q8.8 reference model, and the next pass is fed with
// the model's values, so a mismatch is reported at the pass that causes it.
//   1  H1  = lrelu(X W1^T + B1)                                   pathway 1100
//   2  dZ2 = lrelu'(2/N (lrelu(H1 W2^T + B2) - Y)), B2 update       pathway 1111, gradient pointer 5
//   3  dZ1 = (dZ2 W2) .* lrelu'(H1)                               pathway 0001
//   4  B1 update: dZ1 through an identity pass                     pathway 0000, gradient pointer 5
//   5  W2 update: dW2 = dZ2^T H1, two half-batch passes (K <= 2)   pathway 0000, gradient pointer 6
//   6  W1 update: dW1 = dZ1^T X,  two half-batch passes            pathway 0000, gradient pointer 6
class tpu_xor_training_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_xor_training_vseq)
  int unsigned steps = 1;
  function new(string name = "tpu_xor_training_vseq"); super.new(name); endfunction

  // rows x cols matrix from a row-major list of reals
  function tpu_host_ref_model::mat_t mat(int rows, int cols, real v[$]);
    q88_t row[$];
    for (int r = 0; r < rows; r++) begin
      row.delete();
      for (int c = 0; c < cols; c++) row.push_back(tpu_host_ref_model::from_real(v[r * cols + c]));
      mat.push_back(row);
    end
  endfunction
  // rows r0, r0+1 of a (2 rows), transposed when tr = 1
  function tpu_host_ref_model::mat_t half(tpu_host_ref_model::mat_t a, int r0, bit tr);
    q88_t row[$];
    if (!tr) begin
      for (int r = r0; r < r0 + 2; r++) half.push_back(a[r]);
    end else begin
      for (int c = 0; c < a[0].size(); c++) begin
        row.delete();
        for (int r = r0; r < r0 + 2; r++) row.push_back(a[r][c]);
        half.push_back(row);
      end
    end
  endfunction
  function string params2str(tpu_host_ref_model::mat_t w1, q88_t b1[$], tpu_host_ref_model::mat_t w2, q88_t b2[$]);
    return $sformatf("W1 [[%0.4f %0.4f] [%0.4f %0.4f]] B1 [%0.4f %0.4f] W2 [%0.4f %0.4f] B2 [%0.4f]",
      tpu_host_ref_model::to_real(w1[0][0]), tpu_host_ref_model::to_real(w1[0][1]), tpu_host_ref_model::to_real(w1[1][0]),
      tpu_host_ref_model::to_real(w1[1][1]), tpu_host_ref_model::to_real(b1[0]), tpu_host_ref_model::to_real(b1[1]),
      tpu_host_ref_model::to_real(w2[0][0]), tpu_host_ref_model::to_real(w2[0][1]), tpu_host_ref_model::to_real(b2[0]));
  endfunction

  task body();
    tpu_host_ref_model::mat_t X, Y, W1, W2, H1, dZ2, dZ1, I2, g, p;
    q88_t B1[$], B2[$], par[$];
    q88_t lr, leak, invb;
    tpu_host_layer l;
    if ($value$plusargs("ITER=%d", steps)) `uvm_info("XOR", $sformatf("%0d training steps", steps), UVM_LOW)
    lr   = tpu_host_ref_model::from_real(0.5);
    leak = tpu_host_ref_model::from_real(0.25);
    invb = tpu_host_ref_model::from_real(0.5);              // 2 / batch of 4
    X  = mat(4, 2, '{0.0, 0.0,  0.0, 1.0,  1.0, 0.0,  1.0, 1.0});
    Y  = mat(4, 1, '{0.0, 1.0, 1.0, 0.0});
    I2 = mat(2, 2, '{1.0, 0.0,  0.0, 1.0});
    W1 = mat(2, 2, '{0.5, -0.375,  -0.25, 0.625});          // [hidden][input]
    W2 = mat(1, 2, '{0.75, -0.5});                          // [output][hidden]
    B1 = '{tpu_host_ref_model::from_real(0.125), tpu_host_ref_model::from_real(-0.125)};
    B2 = '{tpu_host_ref_model::from_real(0.25)};
    `uvm_info("XOR", {"start: ", params2str(W1, B1, W2, B2)}, UVM_LOW)
    for (int st = 0; st < steps; st++) begin
      // 1: layer 1 forward
      l = tpu_host_layer::type_id::create("l1");
      l.x = X; l.w = W1; l.transpose = 1; l.bias = B1; l.pathway = 4'b1100; l.leak = leak;
      soft_reset(); run_layer(l, 32'h000D_0000, 32'h000D_8000, 0, $sformatf("xor step %0d: layer 1 forward", st));
      l.expected(H1);
      // 2: layer 2 forward + loss + derivative, B2 update
      l = tpu_host_layer::type_id::create("l2");
      l.x = H1; l.w = W2; l.transpose = 1; l.bias = B2; l.y = Y; l.pathway = 4'b1111; l.leak = leak;
      l.inv_batch_x2 = invb; l.grad_ptr = 5; l.lr = lr;
      soft_reset(); run_layer(l, 32'h000D_0000, 32'h000D_8000, 0, $sformatf("xor step %0d: layer 2 + loss, B2 update", st));
      l.expected(dZ2); l.expected_params(dZ2, par);
      // 3: backward into layer 1 (uses W2 before its update)
      l = tpu_host_layer::type_id::create("l3");
      l.x = dZ2; l.w = W2; l.h = H1; l.pathway = 4'b0001; l.leak = leak;
      soft_reset(); run_layer(l, 32'h000D_0000, 32'h000D_8000, 0, $sformatf("xor step %0d: backward to layer 1", st));
      l.expected(dZ1);
      B2 = par;
      // 4: B1 update over the batch
      l = tpu_host_layer::type_id::create("l4");
      l.x = dZ1; l.w = I2; l.pathway = 4'b0000; l.bias = B1; l.grad_ptr = 5; l.lr = lr;
      soft_reset(); run_layer(l, 32'h000D_0000, 32'h000D_8000, 0, $sformatf("xor step %0d: B1 update", st));
      l.expected(g); l.expected_params(g, B1);
      // 5: W2 update, dW2 = dZ2^T H1 in two halves of the batch
      for (int hb = 0; hb < 4; hb += 2) begin
        l = tpu_host_layer::type_id::create("l5");
        l.x = half(dZ2, hb, 1); l.w = half(H1, hb, 0); l.pathway = 4'b0000; l.grad_ptr = 6; l.upd = W2; l.lr = lr;
        soft_reset(); run_layer(l, 32'h000D_0000, 32'h000D_8000, 0, $sformatf("xor step %0d: W2 update, rows %0d-%0d", st, hb, hb + 1));
        l.expected(g); l.expected_params(g, par);
        W2 = mat(1, 2, '{tpu_host_ref_model::to_real(par[0]), tpu_host_ref_model::to_real(par[1])});
      end
      // 6: W1 update, dW1 = dZ1^T X in two halves of the batch
      for (int hb = 0; hb < 4; hb += 2) begin
        l = tpu_host_layer::type_id::create("l6");
        l.x = half(dZ1, hb, 1); l.w = half(X, hb, 0); l.pathway = 4'b0000; l.grad_ptr = 6; l.upd = W1; l.lr = lr;
        soft_reset(); run_layer(l, 32'h000D_0000, 32'h000D_8000, 0, $sformatf("xor step %0d: W1 update, rows %0d-%0d", st, hb, hb + 1));
        l.expected(g); l.expected_params(g, par);
        W1 = mat(2, 2, '{tpu_host_ref_model::to_real(par[0]), tpu_host_ref_model::to_real(par[1]),
                         tpu_host_ref_model::to_real(par[2]), tpu_host_ref_model::to_real(par[3])});
      end
      `uvm_info("XOR", $sformatf("after step %0d: %s", st, params2str(W1, B1, W2, B2)), UVM_LOW)
    end
  endtask
endclass

//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_matmul_shapes_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_matmul_shapes: Matrix shapes the RTL supports.
//=================================================================================
class tpu_matmul_shapes_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_matmul_shapes_vseq)
  function new(string name = "tpu_matmul_shapes_vseq"); super.new(name); endfunction
  task body();
    int ms[$] = '{1, 2, 5, 16, 32};
    foreach (ms[mi]) for (int k = 1; k <= 2; k++) for (int n = 1; n <= 2; n++) begin
      tpu_host_layer l;
      l = tpu_host_layer::type_id::create("l");
      l.x = rnd_mat(ms[mi], k); l.w = rnd_mat(k, n); l.pathway = 4'b0000;
      soft_reset();
      run_layer(l, 32'h0006_0000, 32'h0006_8000, 0, $sformatf("shape M=%0d K=%0d N=%0d", ms[mi], k, n));
    end
    // column size 0 or 3 disables the whole array: no VPU output, the wait ends in a timeout
    for (int i = 0; i < 2; i++) begin
      soft_reset(); clear();
      csr_wr(CSR_TIMEOUT, 300);
      push(tpu_host_cmd::ub_read(PTR_WEIGHT, 0, 2, i == 0 ? 0 : 3));
      repeat (weight_idle) push(tpu_host_cmd::nop());
      push(tpu_host_cmd::ub_read(PTR_INPUT, 0, 4, 2));
      push(tpu_host_cmd::switch_weights());
      push(tpu_host_cmd::nop(WM_VPU_ANY));
      run_expect_error($sformatf("column size %0d", i == 0 ? 0 : 3), ERR_TIMEOUT);
    end
  endtask
endclass

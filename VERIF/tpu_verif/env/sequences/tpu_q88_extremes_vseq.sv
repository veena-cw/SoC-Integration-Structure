//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_q88_extremes_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_q88_extremes: Q8.8 rounding and saturation.
//=================================================================================
class tpu_q88_extremes_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_q88_extremes_vseq)
  function new(string name = "tpu_q88_extremes_vseq"); super.new(name); endfunction
  task body();
    q88_t v[$] = '{16'h7FFF, 16'h8000, 16'hFFFF, 16'h0000, 16'h0001, 16'h0100, 16'hFF00, 16'h0080, 16'h7F00, 16'h8100};
    for (int t = 0; t < 6; t++) begin
      tpu_host_layer l;
      l = tpu_host_layer::type_id::create("l");
      for (int r = 0; r < 4; r++) begin q88_t row[$]; row = '{v[$urandom_range(0, 9)], v[$urandom_range(0, 9)]}; l.x.push_back(row); end
      for (int r = 0; r < 2; r++) begin q88_t row[$]; row = '{v[$urandom_range(0, 9)], v[$urandom_range(0, 9)]}; l.w.push_back(row); end
      l.bias = '{v[$urandom_range(0, 9)], v[$urandom_range(0, 9)]};
      l.pathway = (t < 3) ? 4'b0000 : 4'b1100; l.leak = v[$urandom_range(0, 9)];
      soft_reset();
      run_layer(l, 32'h000C_0000, 32'h000C_8000, 0, $sformatf("Q8.8 extremes %0d", t));
    end
  endtask
endclass

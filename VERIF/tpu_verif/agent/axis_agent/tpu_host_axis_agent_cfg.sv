//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_axis_agent_cfg
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: External memory model (sparse byte memory) and AXI4 slave behaviour knobs:
//               latency, error responses, RLAST errors, stalls.
//=================================================================================
// External memory model + behaviour knobs, shared through uvm_resource_db ("*", "axi_mem_cfg").
// Memory is sparse and byte addressed. 16-bit word helpers use little-endian order (word at byte addr).
class tpu_host_axis_agent_cfg extends uvm_object;
  `uvm_object_utils(tpu_host_axis_agent_cfg)

  bit [7:0] mem [bit [31:0]];

  // handshake latency (clk_axi cycles), chosen uniformly per handshake
  int unsigned addr_ready_min = 0, addr_ready_max = 3;    // AWREADY / ARREADY
  int unsigned wready_min     = 0, wready_max     = 2;
  int unsigned rvalid_min     = 0, rvalid_max     = 2;    // gap before each R beat
  int unsigned bvalid_min     = 0, bvalid_max     = 3;

  // error injection: the next N bursts get the response code
  int unsigned rresp_err_count = 0;  bit [1:0] rresp_err_code = RESP_SLVERR;
  int unsigned bresp_err_count = 0;  bit [1:0] bresp_err_code = RESP_SLVERR;
  // RLAST: 0 normal, 1 one beat early (next burst only), 2 one beat late (next burst only)
  int unsigned rlast_mode = 0;
  // stall: hold the selected ready / valid low for stall_cycles on the next burst
  // 0 none, 1 ARREADY, 2 RVALID, 3 AWREADY, 4 WREADY, 5 BVALID
  int unsigned stall_channel = 0, stall_cycles = 0;

  function new(string name = "tpu_host_axis_agent_cfg");
    super.new(name);
  endfunction

  function bit [7:0] rd_byte(bit [31:0] a);
    return mem.exists(a) ? mem[a] : 8'h00;
  endfunction
  function void wr_byte(bit [31:0] a, bit [7:0] d);
    mem[a] = d;
  endfunction
  function bit [15:0] rd_word(bit [31:0] a);
    return {rd_byte(a + 1), rd_byte(a)};
  endfunction
  function void wr_word(bit [31:0] a, bit [15:0] d);
    wr_byte(a, d[7:0]); wr_byte(a + 1, d[15:8]);
  endfunction
  // write / read n consecutive 16-bit words starting at byte address a
  function void wr_words(bit [31:0] a, bit [15:0] w[$]);
    foreach (w[i]) wr_word(a + 2 * i, w[i]);
  endfunction
  function void rd_words(bit [31:0] a, int n, ref bit [15:0] w[$]);
    w.delete();
    for (int i = 0; i < n; i++) w.push_back(rd_word(a + 2 * i));
  endfunction
  function void fill(bit [31:0] a, int nbytes, bit [7:0] pattern);
    for (int i = 0; i < nbytes; i++) mem[a + i] = pattern;
  endfunction
  function void clear_errors();
    rresp_err_count = 0; bresp_err_count = 0; rlast_mode = 0; stall_channel = 0; stall_cycles = 0;
  endfunction
  function int unsigned pick(int unsigned lo, int unsigned hi);
    return (hi > lo) ? $urandom_range(hi, lo) : lo;
  endfunction
endclass : tpu_host_axis_agent_cfg

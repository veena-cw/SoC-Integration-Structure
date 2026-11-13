//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_axilm_agent_seq_item
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: AXI4-Lite transaction item of the CPU model agent (register write / read, idle).
//=================================================================================
// One AXI4-Lite transaction of the CPU model, or a CPU-side wait.
//   AXIL_WRITE / AXIL_READ : register access (resp / rdata are filled in by the driver)
//   AXIL_IDLE              : idle for idle_cycles clk_axil cycles
typedef enum bit [1:0] {AXIL_WRITE, AXIL_READ, AXIL_IDLE} axil_op_e;

class tpu_host_axilm_agent_seq_item extends uvm_sequence_item;
  rand axil_op_e                   op;
  rand bit [M_AXIL_AWADDR_W-1:0]   addr;
  rand bit [31:0]                  data;          // write data
  rand bit [3:0]                   strb;
  rand bit [2:0]                   prot;
  rand int unsigned                aw_delay;      // clk_axil cycles before AWVALID
  rand int unsigned                w_delay;       // clk_axil cycles before WVALID
  rand int unsigned                ready_delay;   // cycles before BREADY / RREADY
  rand int unsigned                idle_cycles;
  // results
  bit [31:0]                       rdata;
  bit [1:0]                        resp;
  bit                              reset_abort;   // access abandoned because rst_n was asserted
  time                             t_start, t_end;

  constraint c_default {
    soft strb == 4'hF;
    soft prot == 3'b000;
    soft addr[1:0] == 2'b00;                  // aligned by default; misaligned (DECERR) tests override it
    aw_delay inside {[0:3]};  w_delay inside {[0:3]};  ready_delay inside {[0:2]};
    soft idle_cycles inside {[1:20]};
  }

  `uvm_object_utils(tpu_host_axilm_agent_seq_item)

  function new(string name = "tpu_host_axilm_agent_seq_item");
    super.new(name);
  endfunction

  function string convert2string();
    case (op)
      AXIL_WRITE:     return $sformatf("AXIL WRITE addr=0x%02h data=0x%08h strb=%b resp=%0d", addr, data, strb, resp);
      AXIL_READ:      return $sformatf("AXIL READ  addr=0x%02h rdata=0x%08h resp=%0d", addr, rdata, resp);
      default:        return $sformatf("AXIL IDLE %0d", idle_cycles);
    endcase
  endfunction

  function void do_copy(uvm_object rhs);
    tpu_host_axilm_agent_seq_item r;
    super.do_copy(rhs);
    if (!$cast(r, rhs)) return;
    op = r.op; addr = r.addr; data = r.data; strb = r.strb; prot = r.prot; rdata = r.rdata; resp = r.resp;
    idle_cycles = r.idle_cycles; reset_abort = r.reset_abort;
    aw_delay = r.aw_delay; w_delay = r.w_delay; ready_delay = r.ready_delay; t_start = r.t_start; t_end = r.t_end;
  endfunction
endclass : tpu_host_axilm_agent_seq_item

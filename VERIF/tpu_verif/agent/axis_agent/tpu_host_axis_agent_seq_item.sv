//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_axis_agent_seq_item
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: AXI4 burst record (address phase, data beats, response) of the external memory
//               model agent.
//=================================================================================
// One AXI4 burst seen on the DMA port (filled by the monitor; the slave driver is reactive).
class tpu_host_axis_agent_seq_item extends uvm_sequence_item;
  bit                    is_write;
  bit [S_AXI_ID_W-1:0]   id;
  bit [31:0]             addr;
  bit [7:0]              len;        // beats - 1
  bit [2:0]              size;
  bit [1:0]              burst;
  bit [3:0]              cache;
  bit [2:0]              prot;
  bit [127:0]            data[$];
  bit [15:0]             strb[$];
  bit                    last[$];    // WLAST / RLAST per beat
  bit [1:0]              resp;       // BRESP, or the worst RRESP of the burst
  time                   t_addr, t_end;

  `uvm_object_utils(tpu_host_axis_agent_seq_item)

  function new(string name = "tpu_host_axis_agent_seq_item");
    super.new(name);
  endfunction

  function int unsigned beats();
    return int'(len) + 1;
  endfunction

  function string convert2string();
    return $sformatf("AXI %s addr=0x%08h len=%0d size=%0d burst=%0d id=%0d beats_seen=%0d resp=%0d",
                     is_write ? "WRITE" : "READ ", addr, len, size, burst, id, data.size(), resp);
  endfunction
endclass : tpu_host_axis_agent_seq_item

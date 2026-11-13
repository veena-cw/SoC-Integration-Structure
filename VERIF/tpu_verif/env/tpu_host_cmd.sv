//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_cmd
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Command-queue entry builder: 151-bit entry (op, wait mode, latch, wait cycles,
//               130-bit control_unit instruction) packed into INSTR0..INSTR4.
//=================================================================================
// One 151-bit command-queue entry (tpu_command_scheduler.sv / control_unit.sv layout).
// pack() returns the five 32-bit INSTR0..INSTR4 register values; writing INSTR4 pushes the entry.
class tpu_host_cmd extends uvm_object;
  `uvm_object_utils(tpu_host_cmd)

  cmd_op_e    op          = OP_EXEC;
  cmd_wait_e  wait_mode   = WM_NONE;
  bit         latch_levels;
  bit [15:0]  wait_cycles;
  // instruction fields (control_unit)
  bit         sys_switch, rd_start, rd_transpose, host_wr_valid_1, host_wr_valid_2;
  bit [15:0]  col_size, row_size, rd_addr;
  bit [8:0]   ptr_select;
  bit [15:0]  host_wr_data_1, host_wr_data_2;
  bit [3:0]   pathway;
  bit [15:0]  inv_batch_x2, leak_factor;
  // DMA descriptor (op DMA_LOAD / DMA_STORE through INSTR4)
  bit [31:0]  dma_host_addr;
  bit [15:0]  dma_len, dma_ub_addr;

  function new(string name = "tpu_host_cmd");
    super.new(name);
  endfunction

  function bit [129:0] instruction();
    bit [129:0] i = '0;
    if (op inside {OP_DMA_LOAD, OP_DMA_STORE}) begin
      i[31:0] = dma_host_addr; i[47:32] = dma_len; i[63:48] = dma_ub_addr;
      return i;
    end
    i[0] = sys_switch; i[1] = rd_start; i[2] = rd_transpose; i[3] = host_wr_valid_1; i[4] = host_wr_valid_2;
    i[20:5]    = col_size;
    i[36:21]   = row_size;
    i[52:37]   = rd_addr;
    i[61:53]   = ptr_select;
    i[77:62]   = host_wr_data_1;
    i[93:78]   = host_wr_data_2;
    i[97:94]   = pathway;
    i[113:98]  = inv_batch_x2;
    i[129:114] = leak_factor;
    return i;
  endfunction

  // INSTR0..INSTR3 = instruction[127:0]; INSTR4 = {wait_cycles, 9'b0, latch, wait_mode, op, instruction[129:128]}
  function void pack(ref bit [31:0] w[5]);
    bit [129:0] i;
    i = instruction();
    w[0] = i[31:0]; w[1] = i[63:32]; w[2] = i[95:64]; w[3] = i[127:96];
    w[4] = {wait_cycles, 9'b0, latch_levels, wait_mode, op, i[129:128]};
  endfunction

  // 16-bit instruction field from an int argument; values outside 0..65535 are a testbench error
  static function bit [15:0] u16(int v, string field);
    if (v < 0 || v > 65535) `uvm_fatal("TPU_CMD", $sformatf("%s = %0d does not fit the 16-bit instruction field", field, v))
    return 16'(v);
  endfunction

  // ---- constructors for the common entries ----
  static function tpu_host_cmd nop(cmd_wait_e wm = WM_NONE, int cycles = 0);
    tpu_host_cmd c;
    c = new("nop");
    c.op = OP_NOP; c.wait_mode = wm; c.wait_cycles = u16(cycles, "wait_cycles");
    return c;
  endfunction
  // UB read stream start: ptr select, start address, rows, columns, transpose
  static function tpu_host_cmd ub_read(bit [8:0] ptr, int addr, int rows, int cols, bit transpose = 0);
    tpu_host_cmd c;
    c = new("ub_read");
    c.rd_start = 1; c.ptr_select = ptr; c.rd_addr = u16(addr, "rd_addr"); c.row_size = u16(rows, "row_size"); c.col_size = u16(cols, "col_size"); c.rd_transpose = transpose;
    return c;
  endfunction
  static function tpu_host_cmd switch_weights();
    tpu_host_cmd c;
    c = new("switch");
    c.sys_switch = 1;
    return c;
  endfunction
  static function tpu_host_cmd host_write(int d1, bit v1, int d2 = 0, bit v2 = 0);
    tpu_host_cmd c;
    c = new("host_write");
    c.host_wr_data_1 = u16(d1, "host_wr_data_1"); c.host_wr_valid_1 = v1; c.host_wr_data_2 = u16(d2, "host_wr_data_2"); c.host_wr_valid_2 = v2;
    return c;
  endfunction
  // set the held VPU levels (pathway, leak factor, 2/N) on this entry
  function void set_levels(bit [3:0] pw, bit [15:0] leak = 0, bit [15:0] invb = 0);
    latch_levels = 1; pathway = pw; leak_factor = leak; inv_batch_x2 = invb;
  endfunction

  function string convert2string();
    return $sformatf("CMD op=%s wait=%s latch=%0b cyc=%0d sw=%0b rd=%0b tr=%0b ptr=%0d addr=%0d rows=%0d cols=%0d pw=%b",
                     op.name(), wait_mode.name(), latch_levels, wait_cycles, sys_switch, rd_start, rd_transpose,
                     ptr_select, rd_addr, row_size, col_size, pathway);
  endfunction
endclass : tpu_host_cmd

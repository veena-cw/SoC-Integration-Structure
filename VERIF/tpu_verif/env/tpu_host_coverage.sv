//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_coverage
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Coverage collector of tpu_host_top: every functional covergroup of the test plan,
//               CG01 CSR access, CG02 command queue, CG03 DMA, CG04 compute / VPU / UB, CG05 Q8.8 data,
//               CG06 reset / UB capacity, CG07 errors / irq.
//=================================================================================
// Inputs (from the monitors): CSR writes / reads (AXI4-Lite agent), DMA bursts (AXI4 slave agent), rst_n edges
// (clock & reset agent) and irq edges (IRQ agent). Command entries
// are decoded from the INSTR0..INSTR4 writes (INSTR4 pushes) and from the DMA_LOAD / DMA_STORE CONTROL bits;
// queue and UB state come from STATUS reads, error causes from ERROR_CODE reads.
// (analysis imp classes _cov_axil / _cov_axi / _cov_rst / _cov_irq are declared in env/imps/)

class tpu_host_coverage extends uvm_component;
  `uvm_component_utils(tpu_host_coverage)

  uvm_analysis_imp_cov_axil #(tpu_host_axilm_agent_seq_item, tpu_host_coverage) axil_export;
  uvm_analysis_imp_cov_axi  #(tpu_host_axis_agent_seq_item,  tpu_host_coverage) axi_export;
  uvm_analysis_imp_cov_rst  #(tpu_host_clk_rst_agent_seq_item, tpu_host_coverage) rst_export;
  uvm_analysis_imp_cov_irq  #(tpu_host_irq_agent_seq_item,     tpu_host_coverage) irq_export;

  // ---- sampled transactions and decoded state ----
  tpu_host_axilm_agent_seq_item axil_item;  // CG01 sample
  tpu_host_axis_agent_seq_item  axi_item;   // CG03 sample
  bit         at_4k_edge, partial_last;     // CG03: burst ends on a 4 KB boundary / short last write beat
  bit         irq_level;                    // CG07: level after the irq edge
  bit [1:0]   int_en;                       // CG07: INT_ENABLE (last write)
  bit [31:0]  instr[5];                 // INSTR0..INSTR4 as held by the register bank (WSTRB-merged, cleared by rst_n only)
  bit [1:0]   e_op, e_wait;
  bit         e_latch;
  bit [15:0]  e_wcycles;
  bit         e_switch, e_rd_start, e_transpose, e_wv1, e_wv2;
  bit [15:0]  e_rows, e_cols;
  bit [8:0]   e_ptr;
  bit [3:0]   e_pathway;
  bit [15:0]  e_addr, e_wd1, e_wd2, e_invb, e_leak;
  bit [31:0]  status;                   // last STATUS read
  bit [7:0]   err_code;                 // last ERROR_CODE read
  bit [4:0]   ctrl_bits;                // last CONTROL write
  bit [15:0]  word;                     // CG05 sample
  bit         word_is_wr;
  bit         rst_busy;                 // DUT busy (last STATUS) when rst_n fell
  bit [1:0]   irq_cause;                // 1 done, 2 error, 3 both (at the irq rise)

  // CG01: CSR access (register x read / write, strobes, responses)
  covergroup cg_csr_access;
    option.per_instance = 1;
    cp_op   : coverpoint axil_item.op { bins wr = {AXIL_WRITE}; bins rd = {AXIL_READ}; }
    cp_reg  : coverpoint axil_item.addr {
      bins control = {CSR_CONTROL}; bins status = {CSR_STATUS}; bins int_en = {CSR_INT_ENABLE};
      bins err = {CSR_ERROR_CODE}; bins src = {CSR_SRC_ADDR}; bins dst = {CSR_DST_ADDR};
      bins len = {CSR_XFER_LEN}; bins ub = {CSR_UB_ADDR}; bins lr = {CSR_LR};
      bins instr[] = {CSR_INSTR0, CSR_INSTR1, CSR_INSTR2, CSR_INSTR3, CSR_INSTR4};
      bins tmo = {CSR_TIMEOUT}; bins ver = {CSR_VERSION};
      bins unmapped = {[8'h40:8'hFF]};
    }
    cp_strb : coverpoint axil_item.strb iff (axil_item.op == AXIL_WRITE) { bins all[] = {[0:15]}; }
    cp_resp : coverpoint axil_item.resp { bins okay = {RESP_OKAY}; bins decerr = {RESP_DECERR}; }
    cx_reg_op   : cross cp_reg, cp_op;
    cx_resp_op  : cross cp_resp, cp_op;
  endgroup

  // CG02: command queue entries and queue state
  covergroup cg_queue;
    option.per_instance = 1;
    cp_op      : coverpoint e_op { bins exec = {OP_EXEC}; bins dma_load = {OP_DMA_LOAD}; bins dma_store = {OP_DMA_STORE}; bins nop = {OP_NOP}; }
    cp_wait    : coverpoint e_wait { bins none = {WM_NONE}; bins vpu1 = {WM_VPU1}; bins cycles = {WM_CYCLES}; bins vpu_any = {WM_VPU_ANY}; }
    cp_wcycles : coverpoint e_wcycles iff (e_wait == WM_CYCLES) { bins zero = {0}; bins short_wait = {[1:15]}; bins mid_wait = {[16:255]}; bins long_wait = {[256:$]}; }
    cp_latch   : coverpoint e_latch;
    cp_op_seq  : coverpoint e_op iff (e_op inside {OP_EXEC, OP_NOP}) { bins exec = {OP_EXEC}; bins nop = {OP_NOP}; }  // ops with a wait mode
    cx_op_wait : cross cp_op_seq, cp_wait;
  endgroup

  covergroup cg_status;
    option.per_instance = 1;
    cp_q_count : coverpoint status[15:8] { bins empty = {0}; bins one = {1}; bins some = {[2:14]}; bins fifteen = {15}; bins full = {16}; }
    cp_busy    : coverpoint status[ST_BUSY];
    cp_done    : coverpoint status[ST_DONE];
    cp_error   : coverpoint status[ST_ERROR];
    cp_q_full  : coverpoint status[ST_Q_FULL];
    cp_dma     : coverpoint status[ST_DMA_BUSY];
    cx_busy_q  : cross cp_busy, cp_q_count;
  endgroup

  covergroup cg_control;
    option.per_instance = 1;
    cp_start  : coverpoint ctrl_bits[CTRL_START]      { bins set = {1}; }
    cp_srst   : coverpoint ctrl_bits[CTRL_SOFT_RESET] { bins set = {1}; }
    cp_clear  : coverpoint ctrl_bits[CTRL_CLEAR]      { bins set = {1}; }
    cp_dma_ld : coverpoint ctrl_bits[CTRL_DMA_LOAD]   { bins set = {1}; }
    cp_dma_st : coverpoint ctrl_bits[CTRL_DMA_STORE]  { bins set = {1}; }
    cp_busy   : coverpoint status[ST_BUSY];           // DUT state from the last STATUS read
    cx_start_busy : cross cp_start, cp_busy;          // START while idle / while busy
    cx_srst_busy  : cross cp_srst, cp_busy;           // SOFT_RESET while idle / while busy
  endgroup

  // CG03: DMA bursts on the AXI4 port
  covergroup cg_dma;
    option.per_instance = 1;
    cp_dir      : coverpoint axi_item.is_write { bins rd = {0}; bins wr = {1}; }
    cp_beats    : coverpoint axi_item.len { bins one = {0}; bins two_7 = {[1:6]}; bins eight = {7}; bins nine_15 = {[8:14]}; bins sixteen = {15}; }
    cp_4k_edge  : coverpoint at_4k_edge;
    cp_partial  : coverpoint partial_last iff (axi_item.is_write);
    cp_resp     : coverpoint axi_item.resp { bins okay = {RESP_OKAY}; bins slverr = {RESP_SLVERR}; bins decerr = {RESP_DECERR}; }
    cx_dir_beats: cross cp_dir, cp_beats;
    cx_dir_resp : cross cp_dir, cp_resp;
  endgroup

  // CG04: compute / VPU / UB reads (EXEC entries)
  covergroup cg_compute;
    option.per_instance = 1;
    cp_ptr     : coverpoint e_ptr iff (e_rd_start) {
      bins in_x = {PTR_INPUT}; bins weight = {PTR_WEIGHT}; bins bias = {PTR_BIAS}; bins y = {PTR_Y}; bins h = {PTR_H};
      bins grad_bias = {PTR_GRAD_BIAS}; bins grad_weight = {PTR_GRAD_WEIGHT}; illegal_bins other = default; }
    cp_transp  : coverpoint e_transpose iff (e_rd_start && e_ptr inside {PTR_INPUT, PTR_WEIGHT});
    cp_rows    : coverpoint e_rows iff (e_rd_start) { bins one = {1}; bins two = {2}; bins r3_4 = {[3:4]}; bins r5_8 = {[5:8]}; bins r9_16 = {[9:16]}; bins big = {[17:$]}; }
    cp_cols    : coverpoint e_cols iff (e_rd_start) { bins zero = {0}; bins one = {1}; bins two = {2}; bins over = {[3:$]}; }
    cp_switch  : coverpoint e_switch;
    cp_hostwr  : coverpoint {e_wv2, e_wv1} { bins none = {0}; bins one = {1}; bins two = {3}; bins second_only = {2}; }
    cp_pathway : coverpoint e_pathway iff (e_latch) { bins pw[] = {[0:15]}; }
    cp_addr    : coverpoint e_addr iff (e_rd_start) { bins zero = {0}; bins low = {[1:31]}; bins mid = {[32:95]}; bins high = {[96:127]}; bins beyond = {[128:$]}; }
    cp_leak    : coverpoint e_leak iff (e_latch) { bins zero = {16'h0000}; bins frac = {[16'h0001:16'h00FF]}; bins one = {16'h0100}; bins other = default; }
    cp_invb    : coverpoint e_invb iff (e_latch && e_pathway[1]) { bins quarter = {16'h0040}; bins half = {16'h0080}; bins one = {16'h0100}; bins two = {16'h0200}; bins other = default; }
    cp_hostwd  : coverpoint e_wd1 iff (e_wv1) { bins zero = {0}; bins pos = {[16'h0001:16'h7FFF]}; bins neg = {[16'h8000:16'hFFFF]}; }
    cp_hostwd2 : coverpoint e_wd2 iff (e_wv2) { bins zero = {0}; bins pos = {[16'h0001:16'h7FFF]}; bins neg = {[16'h8000:16'hFFFF]}; }
    cx_ptr_tr  : cross cp_ptr, cp_transp;
    cx_ptr_rows: cross cp_ptr, cp_rows;
  endgroup

  // CG05: Q8.8 values moved by the DMA (operands in, results out)
  covergroup cg_data;
    option.per_instance = 1;
    cp_word : coverpoint word {
      bins zero = {16'h0000}; bins lsb = {16'h0001}; bins neg_lsb = {16'hFFFF}; bins one = {16'h0100}; bins neg_one = {16'hFF00};
      bins max = {16'h7FFF}; bins min = {16'h8000}; bins frac_pos = {[16'h0002:16'h00FF]}; bins frac_neg = {[16'hFF01:16'hFFFE]};
      bins int_pos = {[16'h0101:16'h7FFE]}; bins int_neg = {[16'h8001:16'hFEFF]}; }
    cp_dir  : coverpoint word_is_wr { bins to_tpu = {0}; bins from_tpu = {1}; }
    cx_word_dir : cross cp_word, cp_dir;
  endgroup

  // CG06: reset and UB capacity
  covergroup cg_reset;
    option.per_instance = 1;
    cp_rst_busy : coverpoint rst_busy { bins idle = {0}; bins busy = {1}; }
  endgroup
  covergroup cg_ub;
    option.per_instance = 1;
    cp_ub_ptr : coverpoint status[31:16] { bins empty = {0}; bins low = {[1:63]}; bins high = {[64:126]}; bins last = {127};
                                           bins full = {128}; bins past_end = {[129:$]}; }
  endgroup

  // CG07: error causes and irq sources
  covergroup cg_error;
    option.per_instance = 1;
    cp_qovf  : coverpoint err_code[0] { bins set = {1}; }
    cp_busy  : coverpoint err_code[1] { bins set = {1}; }
    cp_ubovf : coverpoint err_code[2] { bins set = {1}; }
    cp_tmo   : coverpoint err_code[3] { bins set = {1}; }
    cp_badreg: coverpoint err_code[4] { bins set = {1}; }
    cp_axi   : coverpoint err_code[5] { bins set = {1}; }
    cp_align : coverpoint err_code[6] { bins set = {1}; }
  endgroup
  covergroup cg_irq_cause;
    option.per_instance = 1;
    cp_cause : coverpoint irq_cause { bins done = {1}; bins error = {2}; bins both = {3}; }
  endgroup
  covergroup cg_irq;
    option.per_instance = 1;
    cp_irq    : coverpoint irq_level { bins rise = {1}; bins fall = {0}; }
    cp_int_en : coverpoint int_en { bins done_only = {1}; bins error_only = {2}; bins both = {3}; }
    cx_irq_en : cross cp_irq, cp_int_en;     // irq enable x edge
  endgroup

  function new(string name = "tpu_host_coverage", uvm_component parent = null);
    super.new(name, parent);
    cg_csr_access = new(); cg_dma = new(); cg_irq = new();
    cg_queue = new(); cg_status = new(); cg_control = new(); cg_compute = new(); cg_data = new();
    cg_reset = new(); cg_ub = new(); cg_error = new(); cg_irq_cause = new();
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    axil_export = new("axil_export", this);
    axi_export  = new("axi_export", this);
    rst_export  = new("rst_export", this);
    irq_export  = new("irq_export", this);
  endfunction

  // byte-merge of a register write, as the register bank does (merge(old, wdata, wstrb))
  static function bit [31:0] merge_strb(bit [31:0] old, bit [31:0] wdata, bit [3:0] strb);
    for (int b = 0; b < 4; b++) if (strb[b]) old[8 * b +: 8] = wdata[8 * b +: 8];
    return old;
  endfunction

  // decode one command entry; INSTR4 = {wait_cycles, 9'b0, latch, wait_mode, op, instruction[129:128]}
  // w4 = merged INSTR4 value (the RTL pushes the merged value, whatever the WSTRB)
  function void decode_entry(bit [31:0] w4);
    bit [129:0] ins;
    ins = {w4[1:0], instr[3], instr[2], instr[1], instr[0]};
    e_op = w4[3:2]; e_wait = w4[5:4]; e_latch = w4[6]; e_wcycles = w4[31:16];
    if (w4[15:7] != 9'h0) `uvm_error("COV_CMD", $sformatf("INSTR4 reserved bits [15:7] = 0x%03h", w4[15:7]))
    e_switch = ins[0]; e_rd_start = ins[1]; e_transpose = ins[2]; e_wv1 = ins[3]; e_wv2 = ins[4];
    e_cols = ins[20:5]; e_rows = ins[36:21]; e_addr = ins[52:37]; e_ptr = ins[61:53];
    e_wd1 = ins[77:62]; e_wd2 = ins[93:78]; e_pathway = ins[97:94]; e_invb = ins[113:98]; e_leak = ins[129:114];
  endfunction

  function void write_cov_axil(tpu_host_axilm_agent_seq_item t);
    axil_item = t;
    cg_csr_access.sample();
    if (t.resp != RESP_OKAY) return;
    if (t.op == AXIL_WRITE) begin
      case (t.addr)
        CSR_INT_ENABLE: if (t.strb[0]) int_en = t.data[1:0];
        CSR_INSTR0, CSR_INSTR1, CSR_INSTR2, CSR_INSTR3:
          instr[3'((t.addr - CSR_INSTR0) >> 2)] = merge_strb(instr[3'((t.addr - CSR_INSTR0) >> 2)], t.data, t.strb);
        CSR_INSTR4: begin
          instr[4] = merge_strb(instr[4], t.data, t.strb);
          decode_entry(instr[4]);
          cg_queue.sample();
          if (e_op == OP_EXEC) cg_compute.sample();
        end
        CSR_CONTROL: begin
          ctrl_bits = t.data[4:0];
          cg_control.sample();
          if (t.data[CTRL_DMA_LOAD] || t.data[CTRL_DMA_STORE]) begin
            e_op = t.data[CTRL_DMA_LOAD] ? OP_DMA_LOAD : OP_DMA_STORE; e_wait = WM_NONE; e_latch = 0; e_wcycles = 0;
            cg_queue.sample();
          end
        end
        default: ;
      endcase
    end else if (t.op == AXIL_READ) begin
      if (t.addr == CSR_STATUS)     begin status = t.rdata; cg_status.sample(); cg_ub.sample(); end
      if (t.addr == CSR_ERROR_CODE) begin err_code = t.rdata[7:0]; if (err_code != 0) cg_error.sample(); end
    end
  endfunction

  // irq edge: CG07 irq x INT_ENABLE, and the cause (DONE / ERROR of the last STATUS read) at a rise
  function void write_cov_irq(tpu_host_irq_agent_seq_item t);
    irq_level = t.irq_level;
    cg_irq.sample();
    if (t.irq_level) begin
      irq_cause = {status[ST_ERROR], status[ST_DONE]};
      if (irq_cause != 0) cg_irq_cause.sample();
    end
  endfunction

  function void write_cov_axi(tpu_host_axis_agent_seq_item t);
    axi_item     = t;
    at_4k_edge   = (int'(t.addr[11:0]) + t.beats() * 16) == 4096;
    partial_last = (t.strb.size() > 0) && (t.strb[t.strb.size() - 1] != 16'hFFFF);
    cg_dma.sample();
    word_is_wr = t.is_write;
    foreach (t.data[b]) for (int k = 0; k < 8; k++) begin
      if (t.is_write && t.strb.size() > b && t.strb[b][2 * k +: 2] != 2'b11) continue;   // byte lanes not written
      word = t.data[b][16 * k +: 16];
      cg_data.sample();
    end
  endfunction

  function void write_cov_rst(tpu_host_clk_rst_agent_seq_item t);
    if (!t.asserted) return;
    rst_busy = status[ST_BUSY];
    cg_reset.sample();
    status = STATUS_RESET;
    int_en = 2'b00;
    foreach (instr[i]) instr[i] = '0;    // INSTR0..INSTR4 reset to 0 (SOFT_RESET does not clear them)
  endfunction

  function void report_phase(uvm_phase phase);
    super.report_phase(phase);
`ifdef VERILATOR
    // bins are recorded in coverage.dat (FCOV=1 / CCOV=1 build); get_coverage() is always 0 in this simulator
    `uvm_info("COV", $sformatf("[%s] %s: bins in coverage.dat, numbers from make cov_report SIM=verilator",
              get_full_name(), "CG01-CG07"), UVM_LOW)
`else
    `uvm_info("COV", $sformatf({"[%s] CG01 CSR access %0.1f%% | CG02 queue %0.1f%% status %0.1f%% control %0.1f%% | ",
              "CG03 DMA %0.1f%% | CG04 compute %0.1f%% | CG05 data %0.1f%% | CG06 reset %0.1f%% ub %0.1f%% | ",
              "CG07 errors %0.1f%% irq %0.1f%% irq cause %0.1f%%"}, get_full_name(),
              cg_csr_access.get_coverage(), cg_queue.get_coverage(), cg_status.get_coverage(), cg_control.get_coverage(), cg_dma.get_coverage(), cg_compute.get_coverage(),
              cg_data.get_coverage(), cg_reset.get_coverage(), cg_ub.get_coverage(), cg_error.get_coverage(),
              cg_irq.get_coverage(), cg_irq_cause.get_coverage()), UVM_LOW)
`endif
  endfunction
endclass : tpu_host_coverage

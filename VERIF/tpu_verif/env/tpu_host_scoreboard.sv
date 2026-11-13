//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_scoreboard
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Scoreboard: CSR mirror and response checks on the AXI4-Lite port, STATUS /
//               ERROR_CODE / irq checks, DMA burst checks on the AXI4 port, data comparison
//               against the Q8.8 reference model.
//=================================================================================
// Scoreboard of tpu_host_top.
//  AXI4-Lite (CPU model): mirror of the RW CSRs (reset values on rst_n, kept over SOFT_RESET); every
//    read of an RW register is compared with the mirror; VERSION must read 0x5450_0001; mapped
//    offsets must answer OKAY, unmapped / misaligned ones DECERR.
//  STATUS: reserved bits [7:6] 0, Q_EMPTY = (Q_COUNT == 0), Q_FULL = (Q_COUNT == 16), Q_COUNT <= 16; the
//    reset value 0x0000_0008 on every read after rst_n until the first CSR write.
//  ERROR_CODE: reserved bits [31:8] 0; when the virtual sequence announced the expected code of a run
//    (tpu_host_exp_item EXP_ERROR_CODE), the next ERROR_CODE read must return exactly that value.
//  irq (level changes from the IRQ agent): irq = (STATUS.done & INT_ENABLE[0]) | (STATUS.error & INT_ENABLE[1]) (tpu_register_bank.sv). irq and the
//    STATUS shadow cross clock domains separately, so the level is checked on the second of two consecutive
//    STATUS reads that give the same expected value (no CONTROL / INT_ENABLE write in between).
//  AXI4 (external memory): DMA write bursts must carry len+1 beats with WLAST only on the last one.
//  Data: the AXI4 monitor's write bursts build a byte image of what the DUT wrote (bus_mem); the virtual
//    sequence sends the reference-model result of every DMA_STORE (tpu_host_exp_item) and it is compared
//    with that image. All checks are unconditional.
// (analysis imp classes _axis_agent / _axilm_agent / _reset / _irq / _exp are declared in env/imps/)

class tpu_host_scoreboard extends uvm_scoreboard;
  `uvm_component_utils(tpu_host_scoreboard)

  uvm_analysis_imp_axis_agent  #(tpu_host_axis_agent_seq_item,  tpu_host_scoreboard) axis_agent_export;
  uvm_analysis_imp_axilm_agent #(tpu_host_axilm_agent_seq_item, tpu_host_scoreboard) axilm_agent_export;
  uvm_analysis_imp_reset       #(tpu_host_clk_rst_agent_seq_item, tpu_host_scoreboard) reset_export;
  uvm_analysis_imp_irq         #(tpu_host_irq_agent_seq_item,   tpu_host_scoreboard) irq_export;
  uvm_analysis_imp_exp         #(tpu_host_exp_item,             tpu_host_scoreboard) exp_export;
  bit [31:0] mirror [bit [7:0]];
  bit [7:0]  bus_mem [bit [31:0]];   // bytes written by the DUT on the AXI4 write channel

  int unsigned n_csr_wr, n_csr_rd, n_csr_mismatch, n_resp_err, n_bursts_wr, n_bursts_rd, n_burst_err;
  int unsigned n_data_match, n_data_mismatch, n_irq_events, n_irq_checks, n_irq_err;
  int unsigned n_status_err, n_err_code_checks, n_err_code_err;
  bit          irq_level;                    // last level seen by the IRQ agent
  bit          fresh_reset;                  // no CSR write since rst_n: STATUS must read its reset value
  tpu_host_exp_item exp_err_q[$];            // announced ERROR_CODE values, oldest first
  // irq vs STATUS history of the last two STATUS reads ([0] = previous read, [1] = the read before it):
  // valid, expected level from its STATUS value, irq level seen when that read completed
  bit          irq_h_valid[2], irq_h_exp[2], irq_h_lvl[2];
  tpu_host_axis_agent_seq_item last_wr;      // last completed DMA write burst
  time         ar_times[$];                  // address-phase time of every DMA read burst

  function new(string name = "tpu_host_scoreboard", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    axis_agent_export  = new("axis_agent_export", this);
    axilm_agent_export = new("axilm_agent_export", this);
    reset_export       = new("reset_export", this);
    irq_export         = new("irq_export", this);
    exp_export         = new("exp_export", this);
    reset_mirror();
    fresh_reset = 1;                         // rst_n is low from time 0
  endfunction

  function void write_reset(tpu_host_clk_rst_agent_seq_item t);
    if (t.asserted) begin
      reset_mirror();
      irq_level = 0; irq_h_valid = '{0, 0};
      fresh_reset = 1;
      exp_err_q.delete();                    // an announced code is void once rst_n clears ERROR_CODE
    end
  endfunction

  function void write_irq(tpu_host_irq_agent_seq_item t);
    n_irq_events++;
    irq_level = t.irq_level;
  endfunction

  // RW registers and their reset values (axi4lite_slave storage of tpu_host_interface)
  function void reset_mirror();
    bit [7:0] rw[$] = '{CSR_CONTROL, CSR_INT_ENABLE, CSR_SRC_ADDR, CSR_DST_ADDR, CSR_XFER_LEN, CSR_UB_ADDR, CSR_LR,
                        CSR_INSTR0, CSR_INSTR1, CSR_INSTR2, CSR_INSTR3, CSR_INSTR4};
    mirror.delete();
    foreach (rw[i]) mirror[rw[i]] = 32'h0;
    mirror[CSR_TIMEOUT] = TIMEOUT_RESET;
  endfunction

  static function bit is_mapped(bit [7:0] a);
    return (a[1:0] == 2'b00) && (a < 8'h40);
  endfunction

  function void write_axilm_agent(tpu_host_axilm_agent_seq_item t);
    bit [1:0] exp_resp;
    exp_resp = is_mapped(t.addr) ? RESP_OKAY : RESP_DECERR;
    if (t.resp !== exp_resp) begin
      n_resp_err++;
      `uvm_error("SCB_AXIL", $sformatf("%s: expected resp %0d", t.convert2string(), exp_resp))
    end
    if (t.op == AXIL_WRITE) begin
      n_csr_wr++;
      if (t.resp == RESP_OKAY) fresh_reset = 0;
      if (t.resp == RESP_OKAY && mirror.exists(t.addr))
        for (int b = 0; b < 4; b++) if (t.strb[b]) mirror[t.addr][8 * b +: 8] = t.data[8 * b +: 8];
      if (t.addr inside {CSR_CONTROL, CSR_INT_ENABLE}) irq_h_valid = '{0, 0};
    end else begin
      n_csr_rd++;
      if (t.resp != RESP_OKAY) return;
      if (t.addr == CSR_STATUS) begin check_status(t.rdata); check_irq_level(t.rdata); end
      if (t.addr == CSR_ERROR_CODE) check_error_code(t.rdata);
      if (t.addr == CSR_VERSION && t.rdata !== VERSION_VALUE) begin
        n_csr_mismatch++;
        `uvm_error("SCB_AXIL", $sformatf("VERSION read 0x%08h, expected 0x%08h", t.rdata, VERSION_VALUE))
      end
      if (mirror.exists(t.addr) && t.rdata !== mirror[t.addr]) begin
        n_csr_mismatch++;
        `uvm_error("SCB_AXIL", $sformatf("CSR 0x%02h read 0x%08h, mirror 0x%08h", t.addr, t.rdata, mirror[t.addr]))
      end
    end
  endfunction

  function void check_status(bit [31:0] st);
    int q;
    q = int'(st[15:8]);
    if (st[7:6] != 2'b00)                     status_err($sformatf("reserved bits [7:6] = %0b", st[7:6]), st);
    if (q > QUEUE_DEPTH)                      status_err($sformatf("Q_COUNT %0d > %0d", q, QUEUE_DEPTH), st);
    if (st[ST_Q_EMPTY] != (q == 0))           status_err($sformatf("Q_EMPTY = %0b with Q_COUNT %0d", st[ST_Q_EMPTY], q), st);
    if (st[ST_Q_FULL]  != (q == QUEUE_DEPTH)) status_err($sformatf("Q_FULL = %0b with Q_COUNT %0d", st[ST_Q_FULL], q), st);
    if (fresh_reset && st !== STATUS_RESET)   status_err($sformatf("reset value 0x%08h expected (no CSR write since rst_n)", STATUS_RESET), st);
  endfunction

  function void status_err(string msg, bit [31:0] st);
    n_status_err++;
    `uvm_error("SCB_STATUS", $sformatf("STATUS 0x%08h: %s", st, msg))
  endfunction

  function void check_error_code(bit [31:0] d);
    tpu_host_exp_item e;
    if (d[31:8] != 24'h0) begin
      n_err_code_err++;
      `uvm_error("SCB_ERR", $sformatf("ERROR_CODE 0x%08h: reserved bits [31:8] = 0x%06h", d, d[31:8]))
    end
    if (exp_err_q.size() == 0) return;
    e = exp_err_q.pop_front();
    n_err_code_checks++;
    if (d[7:0] !== e.err_code) begin
      n_err_code_err++;
      e.passed = 0;
      `uvm_error("SCB_ERR", $sformatf("%s: ERROR_CODE 0x%02h, expected 0x%02h", e.what, d[7:0], e.err_code))
    end else begin
      e.passed = 1;
      `uvm_info("SCB_ERR", $sformatf("%s: ERROR_CODE 0x%02h as expected", e.what, d[7:0]), UVM_MEDIUM)
    end
  endfunction

  function void check_irq_level(bit [31:0] st);
    bit exp;
    exp = (st[ST_DONE] & mirror[CSR_INT_ENABLE][0]) | (st[ST_ERROR] & mirror[CSR_INT_ENABLE][1]);
    // A STATUS value is sampled in clk_tpu and returns through the read CDC FIFO, while irq takes 1 clk_tpu flop + a
    // 2-flop clk_axil synchronizer: when DONE / ERROR changes after the sample, irq can already show the new level
    // before the read completes. So the irq level captured at the previous read is checked only when the expected
    // level was the same at the read before it, at it and at this read (DONE / ERROR are sticky; CLEAR, SOFT_RESET and
    // INT_ENABLE writes restart the history).
    if (irq_h_valid[0] && irq_h_valid[1] && irq_h_exp[1] == irq_h_exp[0] && irq_h_exp[0] == exp) begin
      n_irq_checks++;
      if (irq_h_lvl[0] !== exp) begin
        n_irq_err++;
        `uvm_error("SCB_IRQ", $sformatf("irq = %0b at the previous STATUS read, expected %0b (STATUS 0x%08h, INT_ENABLE 0x%0h)",
                   irq_h_lvl[0], exp, st, mirror[CSR_INT_ENABLE]))
      end
    end
    irq_h_valid[1] = irq_h_valid[0]; irq_h_exp[1] = irq_h_exp[0]; irq_h_lvl[1] = irq_h_lvl[0];
    irq_h_valid[0] = 1;              irq_h_exp[0] = exp;          irq_h_lvl[0] = irq_level;
  endfunction

  function void write_axis_agent(tpu_host_axis_agent_seq_item t);
    if (t.is_write) begin
      n_bursts_wr++;
      if (t.data.size() != t.beats()) begin
        n_burst_err++;
        `uvm_error("SCB_AXI", $sformatf("%s: %0d data beats for AWLEN %0d", t.convert2string(), t.data.size(), t.len))
      end
      foreach (t.last[i]) if (t.last[i] !== (i == t.beats() - 1)) begin
        n_burst_err++;
        `uvm_error("SCB_AXI", $sformatf("%s: WLAST=%0b on beat %0d", t.convert2string(), t.last[i], i))
      end
      foreach (t.data[b]) for (int k = 0; k < 16; k++)
        if (t.strb.size() > b && t.strb[b][k]) bus_mem[t.addr + 16 * b + k] = t.data[b][8 * k +: 8];
      last_wr = t;
    end else begin
      n_bursts_rd++;
      ar_times.push_back(t.t_addr);
    end
    `uvm_info("SCB_AXI", t.convert2string(), UVM_HIGH)
  endfunction

  // expected DMA_STORE result from the virtual sequence: every word must have been written by the DUT on the
  // AXI4 bus (bytes with WSTRB set) with the reference-model value
  function void write_exp(tpu_host_exp_item e);
    bit [15:0] got;
    if (e.kind == EXP_ERROR_CODE) begin exp_err_q.push_back(e); return; end
    e.passed = 1;
    foreach (e.words[i]) begin
      bit [31:0] a;
      a = e.addr + 2 * i;
      if (!bus_mem.exists(a) || !bus_mem.exists(a + 1)) begin
        n_data_mismatch++; e.passed = 0;
        `uvm_error("SCB_DATA", $sformatf("%s word %0d @0x%08h: not written by the DUT, expected 0x%04h", e.what, i, a, e.words[i]))
        continue;
      end
      got = {bus_mem[a + 1], bus_mem[a]};
      if (got !== e.words[i]) begin
        n_data_mismatch++; e.passed = 0;
        `uvm_error("SCB_DATA", $sformatf("%s word %0d @0x%08h: got 0x%04h, expected 0x%04h", e.what, i, a, got, e.words[i]))
      end else n_data_match++;
    end
    if (e.passed) `uvm_info("SCB_DATA", $sformatf("%s: %0d words match", e.what, e.words.size()), UVM_LOW)
  endfunction

  function void check_phase(uvm_phase phase);
    super.check_phase(phase);
    if (n_data_match + n_data_mismatch == 0) `uvm_info("SCB", "no DMA_STORE result was checked in this test", UVM_LOW)
    foreach (exp_err_q[i]) `uvm_error("SCB_ERR", $sformatf("%s: announced ERROR_CODE 0x%02h was never read", exp_err_q[i].what, exp_err_q[i].err_code))
  endfunction

  function void report_phase(uvm_phase phase);
    super.report_phase(phase);
    `uvm_info("SCB", $sformatf({"CSR wr %0d rd %0d mismatch %0d resp-err %0d | AXI bursts wr %0d rd %0d err %0d | ",
              "data match %0d mismatch %0d | STATUS err %0d | ERROR_CODE checks %0d err %0d | irq events %0d checks %0d err %0d"},
              n_csr_wr, n_csr_rd, n_csr_mismatch, n_resp_err, n_bursts_wr, n_bursts_rd, n_burst_err, n_data_match, n_data_mismatch,
              n_status_err, n_err_code_checks, n_err_code_err, n_irq_events, n_irq_checks, n_irq_err), UVM_LOW)
  endfunction
endclass : tpu_host_scoreboard

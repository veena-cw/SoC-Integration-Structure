//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_base_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Base virtual sequence: CPU-side programming API of tpu_host_top (CSR access,
//               command push, DMA commands, START / wait / errors, reset, memory helpers,
//               matmul pass).
//=================================================================================
// Base virtual sequence = the CPU-side programming API of tpu_host_top used by every test:
// register access, command push, DMA commands, START / CLEAR / SOFT_RESET, wait for completion,
// reset pulses and memory-model helpers. Tests extend it and override body().
class tpu_host_base_vseq extends uvm_sequence;
  `uvm_object_utils(tpu_host_base_vseq)
  `uvm_declare_p_sequencer(tpu_host_vsequencer)

  typedef bit [15:0] q88_t;
  int unsigned poll_gap    = 4;        // clk_axil cycles between STATUS polls
  int unsigned max_polls   = 20000;
  // idle entries between a weight read and the next input read: the last weight must reach the PEs before the
  // switch that follows the input read (measured on the core: with 1, PE row 0 keeps W row 1)
  int unsigned weight_idle = 2;

  function new(string name = "tpu_host_base_vseq");
    super.new(name);
  endfunction

  // ---------------- low level ----------------
  task axil(axil_op_e op, bit [7:0] addr, bit [31:0] data, bit [3:0] strb, output tpu_host_axilm_agent_seq_item it,
            input int unsigned idle = 1);
    tpu_host_axilm_agent_base_seq s = tpu_host_axilm_agent_base_seq::type_id::create("axil_s");
    s.op = op; s.addr = addr; s.data = data; s.strb = strb; s.idle_cycles = idle;
    s.start(p_sequencer.axilm_seqr, this);
    it = s.rsp_item;
  endtask

  // one AXI4-Lite access with explicit channel timing: AW / W delays and BREADY / RREADY delay in clk_axil
  // cycles (0..3, 0..3, 0..2) and AxPROT
  task axil_timed(axil_op_e op, bit [7:0] addr, bit [31:0] data, bit [3:0] strb, int aw_d, int w_d, int rdy_d,
                  bit [2:0] prot, output tpu_host_axilm_agent_seq_item it);
    tpu_host_axilm_agent_base_seq s;
    s = tpu_host_axilm_agent_base_seq::type_id::create("axil_t");
    s.op = op; s.addr = addr; s.data = data; s.strb = strb; s.idle_cycles = 1;
    s.aw_delay = aw_d; s.w_delay = w_d; s.ready_delay = rdy_d; s.prot = int'(prot);
    s.start(p_sequencer.axilm_seqr, this);
    it = s.rsp_item;
  endtask
  task csr_write(bit [7:0] addr, bit [31:0] data, bit [3:0] strb = 4'hF, output bit [1:0] resp);
    tpu_host_axilm_agent_seq_item it;
    axil(AXIL_WRITE, addr, data, strb, it);
    resp = it.resp;
  endtask
  task csr_wr(bit [7:0] addr, bit [31:0] data);        // write, expect OKAY
    bit [1:0] resp;
    csr_write(addr, data, 4'hF, resp);
    if (resp != RESP_OKAY) `uvm_error("CSR", $sformatf("write 0x%02h <= 0x%08h answered %0d", addr, data, resp))
  endtask
  task csr_read(bit [7:0] addr, output bit [31:0] data, output bit [1:0] resp);
    tpu_host_axilm_agent_seq_item it;
    axil(AXIL_READ, addr, 0, 4'hF, it);
    data = it.rdata; resp = it.resp;
  endtask
  task csr_rd(bit [7:0] addr, output bit [31:0] data);
    bit [1:0] resp;
    csr_read(addr, data, resp);
    if (resp != RESP_OKAY) `uvm_error("CSR", $sformatf("read 0x%02h answered %0d", addr, resp))
  endtask
  task idle(int unsigned n);
    tpu_host_axilm_agent_seq_item it;
    axil(AXIL_IDLE, 0, 0, 0, it, n);
  endtask
  // wait until irq == level, at most timeout clk_axil cycles (passive IRQ agent monitor)
  task wait_irq(bit level, int unsigned timeout, output bit timed_out);
    p_sequencer.irq_mon.wait_level(level, timeout, timed_out);
  endtask

  // ---------------- control ----------------
  task ctrl(int bitpos);  csr_wr(CSR_CONTROL, 32'h1 << bitpos); endtask
  task tpu_start();       ctrl(CTRL_START);      endtask
  task clear();           ctrl(CTRL_CLEAR);      endtask
  task soft_reset();      ctrl(CTRL_SOFT_RESET); idle(10); endtask

  task push(tpu_host_cmd c);
    bit [31:0] w[5];
    c.pack(w);
    `uvm_info("CMD", c.convert2string(), UVM_HIGH)
    csr_wr(CSR_INSTR0, w[0]); csr_wr(CSR_INSTR1, w[1]); csr_wr(CSR_INSTR2, w[2]); csr_wr(CSR_INSTR3, w[3]);
    csr_wr(CSR_INSTR4, w[4]);
  endtask
  // DMA commands queued through CONTROL (descriptor taken from SRC / DST / TRANSFER_LEN / UB_ADDR)
  task dma_load(bit [31:0] src, int len_words);
    csr_wr(CSR_SRC_ADDR, src); csr_wr(CSR_XFER_LEN, 32'(len_words)); ctrl(CTRL_DMA_LOAD);
  endtask
  task dma_store(bit [31:0] dst, int ub_addr, int len_words);
    csr_wr(CSR_DST_ADDR, dst); csr_wr(CSR_UB_ADDR, 32'(ub_addr)); csr_wr(CSR_XFER_LEN, 32'(len_words)); ctrl(CTRL_DMA_STORE);
  endtask

  // STATUS fields
  task get_status(output bit [31:0] st);  csr_rd(CSR_STATUS, st);  endtask
  // ERROR_CODE[7:0] (the scoreboard checks the reserved bits [31:8])
  task get_error(output bit [7:0] ec);
    bit [31:0] d;
    csr_rd(CSR_ERROR_CODE, d);
    ec = d[7:0];
  endtask
  // announce the ERROR_CODE value the next ERROR_CODE read must return (checked by the scoreboard)
  function void expect_error_code(string what, bit [7:0] code);
    tpu_host_exp_item e;
    e = tpu_host_exp_item::type_id::create("exp_err");
    e.kind = EXP_ERROR_CODE; e.what = what; e.err_code = code;
    p_sequencer.exp_ap.write(e);
  endfunction
  // read the CSRs first..last (byte offsets, step 4); the scoreboard checks every value against its mirror
  task read_regs(bit [7:0] first, bit [7:0] last);
    bit [31:0] d;
    for (int a = int'(first); a <= int'(last); a += 4) begin
      csr_rd(8'(a), d);
      `uvm_info("CSR", $sformatf("CSR 0x%02h = 0x%08h", a, d), UVM_HIGH)
    end
  endtask
  // STATUS fields of one read for the log (consistency of every STATUS read is checked by the scoreboard)
  function void check_status(bit [31:0] st);
    int q;
    q = int'(st[15:8]);
    `uvm_info("CSR", $sformatf("STATUS busy %0b done %0b error %0b dma_busy %0b q_count %0d ub_wr_ptr %0d",
              st[ST_BUSY], st[ST_DONE], st[ST_ERROR], st[ST_DMA_BUSY], q, st[31:16]), UVM_HIGH)
  endfunction
  // STATUS fields read on their own
  task get_q_count(output int n);
    bit [31:0] st;
    get_status(st);
    check_status(st);
    n = int'(st[15:8]);
  endtask
  task get_ub_wr_ptr(output int p);
    bit [31:0] st;
    get_status(st);
    check_status(st);
    p = int'(st[31:16]);
  endtask
  // poll STATUS until the queue has drained and the scheduler is idle (for runs that keep earlier sticky flags)
  task wait_drained(output bit [31:0] st, input string what = "run");
    for (int i = 0; i < max_polls; i++) begin
      get_status(st);
      check_status(st);
      if (!st[ST_BUSY] && st[15:8] == 8'd0) return;
      idle(poll_gap);
    end
    `uvm_error("TPU", $sformatf("%s: queue not drained after %0d STATUS polls (STATUS 0x%08h)", what, max_polls, st))
  endtask
  // poll STATUS until the scheduler is idle with done or error set
  task wait_done(output bit [31:0] st, input string what = "run");
    for (int i = 0; i < max_polls; i++) begin
      get_status(st);
      if (!st[ST_BUSY] && (st[ST_DONE] || st[ST_ERROR])) return;
      idle(poll_gap);
    end
    `uvm_error("TPU", $sformatf("%s: no done / error after %0d STATUS polls (STATUS 0x%08h)", what, max_polls, st))
  endtask
  // START, wait, and check that it finished with done and without error (ERROR_CODE 0 checked by the scoreboard)
  task run_expect_done(string what = "run");
    bit [31:0] st;
    bit [7:0]  ec;
    clear();                                       // sticky DONE / ERROR from an earlier run must not end the wait
    tpu_start();
    wait_done(st, what);
    expect_error_code(what, 8'h00);
    get_error(ec);
    if (st[ST_ERROR]) `uvm_error("TPU", $sformatf("%s: STATUS.error set, ERROR_CODE 0x%02h (STATUS 0x%08h)", what, ec, st))
    else if (!st[ST_DONE]) `uvm_error("TPU", $sformatf("%s: not done (STATUS 0x%08h)", what, st))
    else `uvm_info("TPU", $sformatf("%s: done (STATUS 0x%08h)", what, st), UVM_MEDIUM)
  endtask
  // START, wait, and check that the run ended with STATUS.error and ERROR_CODE exactly exp_err (the code is
  // compared by the scoreboard)
  task run_expect_error(string what, bit [7:0] exp_err);
    bit [31:0] st;
    bit [7:0]  ec;
    clear();                                       // sticky DONE / ERROR from an earlier run must not end the wait
    tpu_start();
    wait_done(st, what);
    expect_error_code(what, exp_err);
    get_error(ec);
    if (!st[ST_ERROR])
      `uvm_error("TPU", $sformatf("%s: STATUS.error not set, expected ERROR_CODE 0x%02h (got 0x%02h, STATUS 0x%08h)", what, exp_err, ec, st))
    else `uvm_info("TPU", $sformatf("%s: STATUS.error, ERROR_CODE 0x%02h", what, ec), UVM_MEDIUM)
  endtask

  // rst_n pulse through the clock & reset agent (now)
  task hw_reset(time width = 200);
    tpu_host_clk_rst_agent_base_seq rs = tpu_host_clk_rst_agent_base_seq::type_id::create("rst");
    rs.pulse_width = width;
    rs.start(p_sequencer.rst_seqr, this);
    idle(8);
  endtask
  // rst_n pulse after a random delay in [min_delay, max_delay] with a random width (rst_n at any time, any
  // clock phase); returns when rst_n is released again
  task hw_reset_random(time min_delay, time max_delay, time min_width = 20, time max_width = 1000);
    tpu_host_clk_rst_agent_random_seq rs = tpu_host_clk_rst_agent_random_seq::type_id::create("rst_rand");
    rs.min_delay = min_delay; rs.max_delay = max_delay; rs.min_width = min_width; rs.max_width = max_width;
    rs.start(p_sequencer.rst_seqr, this);
    idle(8);
  endtask

  // ---------------- data helpers ----------------
  // words go to external memory at byte address a (little endian, word i at a + 2i)
  function void mem_put(bit [31:0] a, q88_t w[$]);  p_sequencer.mem.wr_words(a, w);  endfunction
  // send the reference-model result of a DMA_STORE to the scoreboard (compared with the DUT's AXI4 writes)
  function bit check_mem(string what, bit [31:0] a, q88_t exp[$]);
    tpu_host_exp_item e;
    e = tpu_host_exp_item::type_id::create("exp");
    e.what = what; e.addr = a; e.words = exp;
    p_sequencer.exp_ap.write(e);
    return e.passed;
  endfunction

  // C = A x W (2x2 pass) through the reference-diagram flow: A (M x 2) and W (2 x 2) are loaded by
  // DMA from memory, the result C (M x 2) is written back to memory at c_addr and compared.
  // ub_base = UB write pointer before the load (0 after reset). Weight read, weight_idle idle entries, input read,
  // switch: one queue entry per clk_tpu cycle.
  task matmul_pass(tpu_host_ref_model::mat_t a, tpu_host_ref_model::mat_t w, bit transpose,
                   bit [31:0] a_addr, bit [31:0] c_addr, int ub_base = 0, string what = "matmul",
                   cmd_wait_e wm = WM_VPU_ANY);
    q88_t a_w[$], w_w[$], c_w[$], all[$];
    tpu_host_ref_model::mat_t c;
    int m, k;
    int a_ub, w_ub, c_ub;
    tpu_host_cmd cmd;
    m = a.size(); k = a[0].size();
    tpu_host_ref_model::flatten(a, a_w);
    tpu_host_ref_model::flatten(w, w_w);
    all = {a_w, w_w};
    mem_put(a_addr, all);
    a_ub = ub_base; w_ub = ub_base + a_w.size(); c_ub = w_ub + w_w.size();
    tpu_host_ref_model::matmul(a, w, transpose, c);
    tpu_host_ref_model::flatten(c, c_w);
    dma_load(a_addr, all.size());
    push(tpu_host_cmd::ub_read(PTR_WEIGHT, w_ub, w.size(), w[0].size(), transpose));
    repeat (weight_idle) push(tpu_host_cmd::nop());
    cmd = tpu_host_cmd::ub_read(PTR_INPUT, a_ub, m, k, 0);
    cmd.set_levels(4'b0000);
    push(cmd);
    cmd = tpu_host_cmd::switch_weights();
    cmd.wait_mode = wm;
    push(cmd);
    dma_store(c_addr, c_ub, c_w.size());
    run_expect_done(what);
    if (!check_mem(what, c_addr, c_w))
      `uvm_info("MATMUL", $sformatf("%s operands: A = %s, W = %s (transpose %0b), expected C = %s",
                what, mat2str(a), mat2str(w), transpose, mat2str(c)), UVM_NONE)
  endtask

  // "[[0x0100 0xff80] [..]]" for debug messages
  function string mat2str(tpu_host_ref_model::mat_t m);
    string s;
    s = "[";
    foreach (m[i]) begin
      s = {s, "["};
      for (int j = 0; j < m[i].size(); j++) s = {s, $sformatf("%s0x%04h", (j != 0) ? " " : "", m[i][j])};
      s = {s, "]"};
    end
    return {s, "]"};
  endfunction

  // ---------------- one array + VPU pass (tpu_host_layer) ----------------
  // UB layout from ub_base: X | W | bias | Y | H | update tile, all loaded with one DMA_LOAD from mem_addr.
  // Commands: weight read, weight_idle idle entries, then one entry per clk_tpu cycle from the input read on:
  // slot 0 input read (levels latched), slot 1 switch, bias / Y / H / gradient reads at the slots given by
  // tpu_host_layer (idle entries elsewhere), then an idle entry that waits for the VPU. VPU results land at the
  // UB write pointer and are stored to out_addr; for a gradient step the updated parameters are stored to
  // out_addr + 0x100 and checked too.
  task run_layer(tpu_host_layer l, bit [31:0] mem_addr, bit [31:0] out_addr, int ub_base, string what);
    q88_t x_w[$], w_w[$], y_w[$], h_w[$], u_w[$], all[$], exp_w[$], par_w[$];
    tpu_host_ref_model::mat_t exp;
    int x_ub, w_ub, b_ub, y_ub, h_ub, u_ub, out_ub, n_out, last;
    tpu_host_cmd c;
    tpu_host_cmd slot[$];
    tpu_host_ref_model::flatten(l.x, x_w);
    tpu_host_ref_model::flatten(l.w, w_w);
    if (l.pathway[1]) tpu_host_ref_model::flatten(l.y, y_w);
    if (l.h_slot() != 0) tpu_host_ref_model::flatten(l.h, h_w);
    if (l.has_upd()) tpu_host_ref_model::flatten(l.upd, u_w);
    x_ub = ub_base;  w_ub = x_ub + x_w.size();  b_ub = w_ub + w_w.size();
    y_ub = b_ub + (l.pathway[3] || l.grad_ptr == 5 ? l.bias.size() : 0);
    h_ub = y_ub + y_w.size();
    u_ub = h_ub + h_w.size();
    all = {x_w, w_w};
    if (l.pathway[3] || l.grad_ptr == 5) all = {all, l.bias};
    all = {all, y_w, h_w, u_w};
    out_ub = ub_base + all.size();
    mem_put(mem_addr, all);
    l.expected(exp);
    tpu_host_ref_model::flatten(exp, exp_w);
    n_out = exp_w.size();
    if (l.grad_ptr != 0) csr_wr(CSR_LR, {l.lr_upper, l.lr});
    dma_load(mem_addr, all.size());
    push(tpu_host_cmd::ub_read(PTR_WEIGHT, w_ub, l.w.size(), l.w[0].size(), l.transpose));
    repeat (weight_idle) push(tpu_host_cmd::nop());
    // one entry per cycle from the input read on
    last = 1;
    if (l.bias_slot() > last) last = l.bias_slot();
    if (l.y_slot()    > last) last = l.y_slot();
    if (l.h_slot()    > last) last = l.h_slot();
    if (l.grad_slot() > last) last = l.grad_slot();
    for (int s = 0; s <= last; s++) slot.push_back(tpu_host_cmd::nop());
    slot[0] = tpu_host_cmd::ub_read(PTR_INPUT, x_ub, l.m(), l.k(), 0);
    slot[0].set_levels(l.pathway, l.leak, l.inv_batch_x2);
    slot[1] = tpu_host_cmd::switch_weights();
    if (!l.latch_on_input_only) slot[1].set_levels(l.pathway, l.leak, l.inv_batch_x2);
    if (l.bias_slot() != 0) slot[l.bias_slot()] = tpu_host_cmd::ub_read(PTR_BIAS, b_ub, l.m(), l.n());
    if (l.y_slot() != 0)    slot[l.y_slot()]    = tpu_host_cmd::ub_read(PTR_Y, y_ub, l.m(), l.n());
    if (l.h_slot() != 0)    slot[l.h_slot()]    = tpu_host_cmd::ub_read(PTR_H, h_ub, l.m(), l.n());
    if (l.grad_ptr == 5) slot[l.grad_slot()] = tpu_host_cmd::ub_read(PTR_GRAD_BIAS, b_ub, l.m(), l.n());
    if (l.grad_ptr == 6) slot[l.grad_slot()] = l.has_upd() ? tpu_host_cmd::ub_read(PTR_GRAD_WEIGHT, u_ub, l.upd.size(), l.upd[0].size())
                                                           : tpu_host_cmd::ub_read(PTR_GRAD_WEIGHT, w_ub, l.w.size(), l.w[0].size());
    // wait for the VPU output on the LAST slot entry itself (not on an extra NOP after it): the scheduler
    // only sees VPU valid pulses that start after the waiting entry issued, and with M = 1 / N = 1 the output
    // is a single-cycle pulse that coincides with the cycle after the last slot (a trailing NOP missed it ->
    // wait timeout, ERROR_CODE 0x08, seen in tpu_matmul_shapes M=K=N=1).
    slot[last].wait_mode = l.wait_mode;
    foreach (slot[s]) push(slot[s]);
    dma_store(out_addr, out_ub, n_out);
    if (l.grad_ptr == 5) dma_store(out_addr + 32'h100, b_ub, l.bias.size());
    if (l.grad_ptr == 6) dma_store(out_addr + 32'h100, l.has_upd() ? u_ub : w_ub, l.has_upd() ? u_w.size() : w_w.size());
    run_expect_done(what);
    void'(check_mem({what, " output"}, out_addr, exp_w));
    if (l.grad_ptr != 0) begin
      l.expected_params(exp, par_w);
      void'(check_mem({what, " updated parameters"}, out_addr + 32'h100, par_w));
    end
  endtask

  // random Q8.8 matrix with values in [lo, hi)
  function tpu_host_ref_model::mat_t rnd_mat(int rows, int cols, real lo = -2.0, real hi = 2.0);
    q88_t row[$];
    for (int r = 0; r < rows; r++) begin
      row.delete();
      for (int c = 0; c < cols; c++) row.push_back(tpu_host_ref_model::from_real(lo + (hi - lo) * $urandom_range(0, 1023) / 1024.0));
      rnd_mat.push_back(row);
    end
  endfunction

  // every test starts from a reset DUT
  task pre_body();
    if ($value$plusargs("WEIGHT_IDLE=%d", weight_idle)) `uvm_info("VSEQ", $sformatf("WEIGHT_IDLE = %0d", weight_idle), UVM_NONE)
    hw_reset();
  endtask

  task body();
  endtask
endclass : tpu_host_base_vseq

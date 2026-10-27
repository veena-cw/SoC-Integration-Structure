//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_virtual_sequence
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequences: base helpers (APB / SPI / reset), RAL runner and the smoke scenarios. New test scenarios are added here one at a time.
//=================================================================================

class apb_spi_base_vseq extends uvm_sequence;

  `uvm_object_utils(apb_spi_base_vseq)
  `uvm_declare_p_sequencer(apb_spi_virtual_sequencer)

  bit [31:0] ctrl_val;    // CTRL value programmed by spi_config (START bit cleared)

  function new(string name = "apb_spi_base_vseq");
    super.new(name);
  endfunction

  // ---------------- APB helpers ----------------
  task apb_wr(bit [31:0] addr, bit [31:0] data);
    apb_spi_apb_write_sequence s;
    s = apb_spi_apb_write_sequence::type_id::create("wr_s");
    s.addr = addr;
    s.data = data;
    s.start(p_sequencer.apb_sqr);
  endtask

  task apb_rd(bit [31:0] addr, output bit [31:0] data);
    apb_spi_apb_read_sequence s;
    s = apb_spi_apb_read_sequence::type_id::create("rd_s");
    s.addr = addr;
    s.start(p_sequencer.apb_sqr);
    data = s.rdata;
  endtask

  task apb_rd_err(bit [31:0] addr, output bit [31:0] data, output bit slverr);
    apb_spi_apb_read_sequence s;
    s = apb_spi_apb_read_sequence::type_id::create("rd_s");
    s.addr = addr;
    s.start(p_sequencer.apb_sqr);
    data   = s.rdata;
    slverr = s.slverr;
  endtask

  task apb_wr_err(bit [31:0] addr, bit [31:0] data, output bit slverr);
    apb_spi_apb_write_sequence s;
    s = apb_spi_apb_write_sequence::type_id::create("wr_s");
    s.addr = addr;
    s.data = data;
    s.start(p_sequencer.apb_sqr);
    slverr = s.slverr;
  endtask

  // ---------------- time / compare helpers ----------------
  task wait_clks(int unsigned n);
    #(n * CLK_PERIOD);
  endtask

  function void expect_eq(string what, bit [31:0] got, bit [31:0] exp);
    if (got !== exp)
      `uvm_error("VSEQ_CHECK", $sformatf("%s: got 0x%08h expected 0x%08h", what, got, exp))
  endfunction

  // ---------------- reset ----------------
  task do_reset(int unsigned delay_cycles = 0, int unsigned pulse_cycles = 4);
    reset_sequence r;
    r = reset_sequence::type_id::create("rst_s");
    r.delay_cycles = delay_cycles;
    r.pulse_cycles = pulse_cycles;
    r.start(p_sequencer.rst_sqr);
  endtask

  // ---------------- SPI helpers ----------------
  // mode = {CPOL, CPHA}
  task spi_config(bit [1:0] mode, bit lsb, int unsigned div, bit [1:0] cs,
                  int unsigned setup, int unsigned hold, bit inter);
    apb_spi_config_sequence c;
    c = apb_spi_config_sequence::type_id::create("cfg_s");
    c.mode = mode; c.lsb = lsb; c.div = div; c.cs = cs;
    c.setup = setup; c.hold = hold; c.inter = inter; c.start_bit = 1'b0;
    c.start(p_sequencer.apb_sqr);
    ctrl_val = c.ctrl_val;
  endtask

  // poll STATUS until the master is idle with an empty TX FIFO
  task spi_wait_idle(int unsigned max_polls = 20000);
    bit [31:0] st;
    for (int unsigned i = 0; i < max_polls; i++) begin
      apb_rd(ADDR_STATUS, st);
      if (st[1] && !st[0]) return;
    end
    `uvm_error("VSEQ_TIMEOUT", "SPI master did not return to idle")
  endtask

  // push the bytes, set START, wait until idle, clear START (max 16 bytes: TX FIFO depth)
  task spi_send(bit [7:0] data[$]);
    foreach (data[i]) apb_wr(ADDR_TX_DATA, {24'h0, data[i]});
    apb_wr(ADDR_CTRL, ctrl_val | 32'h1);
    spi_wait_idle();
    apb_wr(ADDR_CTRL, ctrl_val);
  endtask

  // read n bytes from RX_DATA (every read is checked by the scoreboard)
  task spi_read_rx(int unsigned n);
    bit [31:0] d;
    repeat (n) apb_rd(ADDR_RX_DATA, d);
  endtask

endclass

class apb_spi_ral_vseq extends apb_spi_base_vseq;

  `uvm_object_utils(apb_spi_ral_vseq)

  apb_spi_ral_base_seq ral_seq;   // set by the test

  function new(string name = "apb_spi_ral_vseq");
    super.new(name);
  endfunction

  task body();
    if (ral_seq == null)
      `uvm_fatal("VSEQ", "apb_spi_ral_vseq: ral_seq not set")
    if (p_sequencer.ral_model == null)
      `uvm_fatal("VSEQ", "apb_spi_ral_vseq: ral_model handle missing in the virtual sequencer")
    ral_seq.model = p_sequencer.ral_model;
    ral_seq.start(p_sequencer.apb_sqr);
  endtask

endclass

// ======================================================================================
// SMOKE TEST SCENARIOS (apb_spi_smoke_test)  -  every step prints "---- SM-xx ----" and
// its own PASS/FAIL lines (id SMOKE) so a failure is attributed to one scenario.
//
//  SM-01  Reset state            all RW registers = 0; STATUS = 0x0A (tx_empty, rx_empty); FIFO_LVL = 0
//  SM-02  Identification         ID = 0x5910017E, VERSION = 0x00010000
//  SM-03  Scratch registers      6 scratch registers: write pattern, read back, then the complement
//                                (no cross-talk between registers)
//  SM-04  Config registers       CLK_DIV, IRQ_MASK, CTRL (START=0) write / read-back, then restore 0
//  SM-05  Read-only protection   writes to ID and VERSION are ignored
//  SM-06  APB error response     valid address -> PSLVERR=0; invalid read/write -> PSLVERR=1, read data 0
//  SM-07  TX FIFO write          one byte queued with START=0: tx level 1, tx_empty=0, master stays idle
//  SM-08  Single SPI byte        mode 0, MSB first, CS0, CLK_DIV=2, setup 3, hold 2: START -> idle,
//                                TX level 0, RX level 1, STATUS idle. (monitor/scoreboard check MOSI byte,
//                                CS index, SCK period, CS setup/hold, slave reception)
//  SM-09  RX read                RX_DATA read returns the received byte (scoreboard), RX level back to 0
//  SM-10  Interrupt status       IRQ_STAT done bit set after the transfer; write-1 clears it; IRQ_MASK write
//  SM-11  Two bytes, one START   2 bytes queued, tx level 2 -> 2 transfers -> rx level 2 -> both read back
//  SM-12  Reset after activity   scratch/mask/config/queued TX byte are cleared by reset, STATUS idle/empty
//  SM-13  Transfer after reset   one byte after reset: design and testbench recover
//  End of test (in the test)     4 SPI bytes seen by the master monitor, slave saw every CS0 byte,
//                                no aborted APB transfers
// ======================================================================================
class apb_spi_smoke_vseq extends apb_spi_base_vseq;

  `uvm_object_utils(apb_spi_smoke_vseq)

  string       cur_step;
  int unsigned n_chk;
  int unsigned n_fail;

  function new(string name = "apb_spi_smoke_vseq");
    super.new(name);
  endfunction

  // ---------------- reporting helpers ----------------
  function void smoke_step(string id, string desc);
    cur_step = id;
    `uvm_info("SMOKE", $sformatf("---- %s : %s ----", id, desc), UVM_LOW)
  endfunction

  function void smoke_chk(bit cond, string msg);
    n_chk++;
    if (cond) begin
      `uvm_info("SMOKE", $sformatf("[%s] PASS: %s", cur_step, msg), UVM_MEDIUM)
    end else begin
      n_fail++;
      `uvm_error("SMOKE", $sformatf("[%s] FAIL: %s", cur_step, msg))
    end
  endfunction

  function void smoke_eq(string what, bit [31:0] got, bit [31:0] exp);
    smoke_chk(got === exp, $sformatf("%s = 0x%08h (expected 0x%08h)", what, got, exp));
  endfunction

  // levels / flags from FIFO_LVL and STATUS
  task read_levels(output bit [4:0] tx_lvl, output bit [4:0] rx_lvl);
    bit [31:0] d;
    apb_rd(ADDR_FIFO_LVL, d);
    tx_lvl = d[4:0];
    rx_lvl = d[20:16];
  endtask

  // run the master until idle: START=1, wait for idle, START=0
  task run_master();
    apb_wr(ADDR_CTRL, ctrl_val | 32'h1);
    spi_wait_idle();
    apb_wr(ADDR_CTRL, ctrl_val);
    wait_clks(10);
  endtask

  // ---------------- the scenarios ----------------
  task body();
    bit [31:0]   d, st;
    bit [4:0]    txl, rxl;
    bit          err;
    bit [15:0]   zero_regs[$];
    bit [15:0]   scr_addr[$];
    bit [31:0]   scr_pat[$];
    bit [7:0]    q[$];

    n_chk = 0; n_fail = 0;

    // ---- SM-01 -------------------------------------------------------------------
    smoke_step("SM-01", "Reset state of registers, STATUS and FIFO_LVL");
    wait_clks(10);
    zero_regs = '{ADDR_CTRL, ADDR_IRQ_MASK, ADDR_CLK_DIV, ADDR_TX_DATA,
                  ADDR_SCRATCH0, ADDR_SCRATCH1, ADDR_SCRATCH2, ADDR_SCRATCH3, ADDR_SCRATCH4, ADDR_SCRATCH5};
    foreach (zero_regs[i]) begin
      apb_rd(zero_regs[i], d);
      smoke_eq($sformatf("reset value @0x%02h", zero_regs[i]), d, 32'h0);
    end
    apb_rd(ADDR_STATUS, st);
    smoke_eq("STATUS after reset (tx_empty, rx_empty)", st, 32'h0000_000A);
    read_levels(txl, rxl);
    smoke_eq("TX level after reset", txl, 32'd0);
    smoke_eq("RX level after reset", rxl, 32'd0);

    // ---- SM-02 -------------------------------------------------------------------
    smoke_step("SM-02", "ID and VERSION");
    apb_rd(ADDR_ID, d);       smoke_eq("ID", d, ID_VALUE);
    apb_rd(ADDR_VERSION, d);  smoke_eq("VERSION", d, VERSION_VALUE);

    // ---- SM-03 -------------------------------------------------------------------
    smoke_step("SM-03", "Scratch registers: pattern, read-back, complement");
    scr_addr = '{ADDR_SCRATCH0, ADDR_SCRATCH1, ADDR_SCRATCH2, ADDR_SCRATCH3, ADDR_SCRATCH4, ADDR_SCRATCH5};
    scr_pat  = '{32'hA5A5_A5A5, 32'h5A5A_5A5A, 32'hFFFF_FFFF, 32'h0000_0001, 32'h8000_0000, 32'hDEAD_BEEF};
    foreach (scr_addr[i]) apb_wr(scr_addr[i], scr_pat[i]);
    foreach (scr_addr[i]) begin
      apb_rd(scr_addr[i], d);
      smoke_eq($sformatf("SCRATCH%0d pattern", i), d, scr_pat[i]);
    end
    foreach (scr_addr[i]) apb_wr(scr_addr[i], ~scr_pat[i]);
    foreach (scr_addr[i]) begin
      apb_rd(scr_addr[i], d);
      smoke_eq($sformatf("SCRATCH%0d complement", i), d, ~scr_pat[i]);
    end
    foreach (scr_addr[i]) apb_wr(scr_addr[i], 32'h0);

    // ---- SM-04 -------------------------------------------------------------------
    smoke_step("SM-04", "CLK_DIV, IRQ_MASK and CTRL write / read-back");
    apb_wr(ADDR_CLK_DIV, 32'h0000_0005);  apb_rd(ADDR_CLK_DIV, d);  smoke_eq("CLK_DIV", d, 32'h0000_0005);
    apb_wr(ADDR_IRQ_MASK, 32'h0000_000F); apb_rd(ADDR_IRQ_MASK, d); smoke_eq("IRQ_MASK", d, 32'h0000_000F);
    apb_wr(ADDR_CTRL, 32'h0002_0300);     apb_rd(ADDR_CTRL, d);     smoke_eq("CTRL (START=0)", d, 32'h0002_0300);
    apb_wr(ADDR_CLK_DIV, 32'h0);
    apb_wr(ADDR_IRQ_MASK, 32'h0);
    apb_wr(ADDR_CTRL, 32'h0);

    // ---- SM-05 -------------------------------------------------------------------
    smoke_step("SM-05", "Writes to read-only registers are ignored");
    apb_wr(ADDR_ID, 32'hFFFF_FFFF);
    apb_wr(ADDR_VERSION, 32'hFFFF_FFFF);
    apb_rd(ADDR_ID, d);       smoke_eq("ID after write", d, ID_VALUE);
    apb_rd(ADDR_VERSION, d);  smoke_eq("VERSION after write", d, VERSION_VALUE);

    // ---- SM-06 -------------------------------------------------------------------
    smoke_step("SM-06", "PSLVERR: valid address OK, invalid address error");
    apb_rd_err(ADDR_ID, d, err);        smoke_chk(err == 1'b0, "valid read: PSLVERR = 0");
    apb_rd_err(32'h0000_0040, d, err);  smoke_chk(err == 1'b1, "invalid read @0x40: PSLVERR = 1");
                                        smoke_eq("invalid read data", d, 32'h0);
    apb_wr_err(32'h0000_0040, 32'hFFFF_FFFF, err);
                                        smoke_chk(err == 1'b1, "invalid write @0x40: PSLVERR = 1");

    // ---- SM-07 -------------------------------------------------------------------
    smoke_step("SM-07", "TX FIFO: one byte queued, START=0, master stays idle");
    apb_wr(ADDR_TX_DATA, 32'h0000_00A5);
    wait_clks(20);
    read_levels(txl, rxl);
    smoke_eq("TX level", txl, 32'd1);
    apb_rd(ADDR_STATUS, st);
    smoke_chk(st[1] == 1'b0, "STATUS.tx_empty = 0");
    smoke_chk(st[0] == 1'b0, "STATUS.busy = 0 (no transfer without START)");

    // ---- SM-08 -------------------------------------------------------------------
    smoke_step("SM-08", "Single SPI byte 0xA5: mode 0, MSB first, CS0, CLK_DIV=2, setup 3, hold 2");
    spi_config(2'b00, 1'b0, 2, 2'd0, 3, 2, 1'b0);
    run_master();
    read_levels(txl, rxl);
    smoke_eq("TX level after transfer", txl, 32'd0);
    smoke_eq("RX level after transfer", rxl, 32'd1);
    apb_rd(ADDR_STATUS, st);
    smoke_chk(st[0] == 1'b0, "STATUS.busy = 0");
    smoke_chk(st[1] == 1'b1, "STATUS.tx_empty = 1");
    smoke_chk(st[3] == 1'b0, "STATUS.rx_empty = 0");

    // ---- SM-09 -------------------------------------------------------------------
    smoke_step("SM-09", "RX_DATA read (data checked by the scoreboard against the monitored MISO byte)");
    apb_rd(ADDR_RX_DATA, d);
    smoke_chk(d[31:8] == 24'h0, "RX_DATA upper bits are zero");
    wait_clks(10);
    read_levels(txl, rxl);
    smoke_eq("RX level after read", rxl, 32'd0);
    apb_rd(ADDR_STATUS, st);
    smoke_chk(st[3] == 1'b1, "STATUS.rx_empty = 1");

    // ---- SM-10 -------------------------------------------------------------------
    smoke_step("SM-10", "IRQ_STAT done bit and IRQ_MASK");
    apb_rd(ADDR_IRQ_STAT, d);
    smoke_chk(d[2] == 1'b1, "IRQ_STAT[2] (transfer done) set after the transfer");
    apb_wr(ADDR_IRQ_MASK, 32'h0000_0004);
    apb_rd(ADDR_IRQ_MASK, d);  smoke_eq("IRQ_MASK", d, 32'h0000_0004);
    apb_wr(ADDR_IRQ_STAT, 32'h0000_0004);
    wait_clks(4);
    apb_rd(ADDR_IRQ_STAT, d);
    smoke_chk(d[2] == 1'b0, "IRQ_STAT[2] cleared by writing 1");
    apb_wr(ADDR_IRQ_MASK, 32'h0);

    // ---- SM-11 -------------------------------------------------------------------
    smoke_step("SM-11", "Two bytes (0x5A, 0xC3) with one START");
    apb_wr(ADDR_TX_DATA, 32'h0000_005A);
    apb_wr(ADDR_TX_DATA, 32'h0000_00C3);
    wait_clks(10);
    read_levels(txl, rxl);
    smoke_eq("TX level with two bytes queued", txl, 32'd2);
    run_master();
    read_levels(txl, rxl);
    smoke_eq("TX level after transfers", txl, 32'd0);
    smoke_eq("RX level after two transfers", rxl, 32'd2);
    apb_rd(ADDR_RX_DATA, d);
    apb_rd(ADDR_RX_DATA, d);
    wait_clks(10);
    read_levels(txl, rxl);
    smoke_eq("RX level after reading both", rxl, 32'd0);

    // ---- SM-12 -------------------------------------------------------------------
    smoke_step("SM-12", "Reset after activity clears registers and FIFOs");
    apb_wr(ADDR_SCRATCH0, 32'h1234_5678);
    apb_wr(ADDR_IRQ_MASK, 32'h0000_000F);
    spi_config(2'b00, 1'b0, 2, 2'd0, 3, 2, 1'b0);
    apb_wr(ADDR_TX_DATA, 32'h0000_0077);
    do_reset(0, 4);
    wait_clks(10);
    apb_rd(ADDR_SCRATCH0, d);  smoke_eq("SCRATCH0 after reset", d, 32'h0);
    apb_rd(ADDR_IRQ_MASK, d);  smoke_eq("IRQ_MASK after reset", d, 32'h0);
    apb_rd(ADDR_CTRL, d);      smoke_eq("CTRL after reset", d, 32'h0);
    apb_rd(ADDR_CLK_DIV, d);   smoke_eq("CLK_DIV after reset", d, 32'h0);
    read_levels(txl, rxl);
    smoke_eq("TX level after reset (queued byte flushed)", txl, 32'd0);
    apb_rd(ADDR_STATUS, st);   smoke_eq("STATUS after reset", st, 32'h0000_000A);

    // ---- SM-13 -------------------------------------------------------------------
    smoke_step("SM-13", "Single SPI byte 0x81 after reset");
    spi_config(2'b00, 1'b0, 2, 2'd0, 3, 2, 1'b0);
    q.push_back(8'h81);
    spi_send(q);
    wait_clks(10);
    read_levels(txl, rxl);
    smoke_eq("RX level after transfer", rxl, 32'd1);
    spi_read_rx(1);

    `uvm_info("SMOKE", $sformatf("SMOKE SEQUENCE SUMMARY: %0d checks, %0d failed", n_chk, n_fail), UVM_LOW)
  endtask

endclass

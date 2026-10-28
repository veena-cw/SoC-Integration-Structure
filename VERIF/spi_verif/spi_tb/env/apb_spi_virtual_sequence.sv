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
    apb_wr(ADDR_CTRL, 32'h0203_0000);     apb_rd(ADDR_CTRL, d);     smoke_eq("CTRL (START=0)", d, 32'h0203_0000);
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


// ======================================================================================
// FULL-DUPLEX MODE SCENARIOS (used by spi_m0/m1/m2/m3_full_duplex_msb)
// One SPI mode per test ({CPOL,CPHA} = mode), MSB first, CS0. Every byte is a full-duplex frame:
// the master shifts a TX byte out on MOSI while the slave shifts its byte out on MISO.
//
//  FD-01  Configure       mode, MSB first, CS0, CLK_DIV=2, setup 3, hold 2; CTRL read-back
//  FD-02  Single bytes    0xA5 0x5A 0xFF 0x00 0x01 0x80 0x3C 0xC3, one START each (CLK_DIV=2)
//  FD-03  Burst           4 bytes, one START, CLK_DIV=1 (fastest SCK)
//  FD-04  Burst           4 bytes, one START, CLK_DIV=4
//  FD-05  Idle            FIFOs empty, STATUS idle
//
//  Per byte (prints one "FDX" transcript line, then checks):
//    - MOSI on the wire            == byte written to TX_DATA
//    - slave RX FIFO word          == byte written to TX_DATA        (slave really received it)
//    - MISO on the wire            == byte the slave presented       (slave monitor)
//    - RX_DATA read                == MISO on the wire               (master really received it)
//  Mode rules (scoreboard, every byte): SCK idles at CPOL, first edge leaves the idle level,
//  16 edges, half period = CLK_DIV+1, CS setup/hold timing.
//  End: 16 bytes seen by master monitor and by slave monitor, no aborted APB transfer.
// ======================================================================================
class apb_spi_full_duplex_vseq extends apb_spi_base_vseq;

  `uvm_object_utils(apb_spi_full_duplex_vseq)

  bit [1:0]          mode;     // {CPOL, CPHA}: set by the test
  apb_spi_scoreboard sb;       // set by the test: byte history of the monitors

  string       cur_step;
  int unsigned n_chk;
  int unsigned n_fail;

  function new(string name = "apb_spi_full_duplex_vseq");
    super.new(name);
  endfunction

  function void fd_step(string id, string desc);
    cur_step = id;
    `uvm_info("FDX", $sformatf("---- %s : %s ----", id, desc), UVM_LOW)
  endfunction

  function void fd_chk(bit cond, string msg);
    n_chk++;
    if (cond) begin
      `uvm_info("FDX", $sformatf("[%s] PASS: %s", cur_step, msg), UVM_MEDIUM)
    end else begin
      n_fail++;
      `uvm_error("FDX", $sformatf("[%s] FAIL: %s", cur_step, msg))
    end
  endfunction

  function void fd_eq(string what, bit [31:0] got, bit [31:0] exp);
    fd_chk(got === exp, $sformatf("%s = 0x%08h (expected 0x%08h)", what, got, exp));
  endfunction

  // write the bytes, START, wait for idle, then read every received byte and compare
  task run_and_check(bit [7:0] tx[$]);
    bit [31:0]   d;
    int unsigned n, m0, s0, p0;
    bit [7:0]    mosi_w, miso_w, slv_rx, slv_tx, rx_data;
    bit          have_mosi, have_slv_rx, have_slv_tx;

    n  = tx.size();
    m0 = sb.hist_mosi.size();
    s0 = sb.hist_slv_tx.size();
    p0 = sb.hist_slv_rx.size();

    foreach (tx[i]) apb_wr(ADDR_TX_DATA, {24'h0, tx[i]});
    apb_wr(ADDR_CTRL, ctrl_val | 32'h1);
    spi_wait_idle();
    apb_wr(ADDR_CTRL, ctrl_val);
    wait_clks(20);

    fd_eq("bytes seen by the master monitor", sb.hist_mosi.size() - m0, n);

    for (int unsigned i = 0; i < n; i++) begin
      apb_rd(ADDR_RX_DATA, d);
      rx_data     = d[7:0];
      have_mosi   = ((m0 + i) < sb.hist_mosi.size());
      have_slv_rx = ((p0 + i) < sb.hist_slv_rx.size());
      have_slv_tx = ((s0 + i) < sb.hist_slv_tx.size());
      mosi_w = have_mosi   ? sb.hist_mosi[m0 + i]   : 8'h00;
      miso_w = have_mosi   ? sb.hist_miso[m0 + i]   : 8'h00;
      slv_rx = have_slv_rx ? sb.hist_slv_rx[p0 + i] : 8'h00;
      slv_tx = have_slv_tx ? sb.hist_slv_tx[s0 + i] : 8'h00;

      `uvm_info("FDX", $sformatf("mode %0d byte %0d | TX_DATA=0x%02h  MOSI wire=0x%02h  slave RX=0x%02h  ||  slave TX=0x%02h  MISO wire=0x%02h  RX_DATA=0x%02h",
                mode, i, tx[i], mosi_w, slv_rx, slv_tx, miso_w, rx_data), UVM_LOW)

      fd_chk(have_mosi   && (mosi_w == tx[i]),
             $sformatf("byte %0d: MOSI on the wire 0x%02h == byte written 0x%02h", i, mosi_w, tx[i]));
      fd_chk(have_slv_rx && (slv_rx == tx[i]),
             $sformatf("byte %0d: slave received 0x%02h == byte sent 0x%02h", i, slv_rx, tx[i]));
      fd_chk(have_slv_tx && have_mosi && (slv_tx == miso_w),
             $sformatf("byte %0d: MISO on the wire 0x%02h == byte the slave presented 0x%02h", i, miso_w, slv_tx));
      fd_chk(rx_data == miso_w,
             $sformatf("byte %0d: RX_DATA read 0x%02h == MISO on the wire 0x%02h", i, rx_data, miso_w));
    end
  endtask

  task body();
    bit [31:0]   d;
    bit [7:0]    pats[$];
    bit [7:0]    tx[$];
    int unsigned m_start, s_start, a_start;

    if (sb == null) `uvm_fatal("FDX", "apb_spi_full_duplex_vseq: sb (scoreboard handle) not set by the test")
    n_chk = 0; n_fail = 0;
    m_start = sb.n_mst_bytes;
    s_start = sb.n_slv_bytes;
    a_start = sb.n_apb_abort;

    fd_step("FD-01", $sformatf("Configure mode %0d (CPOL=%0b CPHA=%0b), MSB first, CS0", mode, mode[1], mode[0]));
    wait_clks(10);
    spi_config(mode, 1'b0, 2, 2'd0, 3, 2, 1'b0);
    apb_rd(ADDR_CTRL, d);
    fd_eq("CTRL read-back", d, ctrl_val);

    fd_step("FD-02", "Single bytes, one START each, CLK_DIV=2");
    pats = '{8'hA5, 8'h5A, 8'hFF, 8'h00, 8'h01, 8'h80, 8'h3C, 8'hC3};
    foreach (pats[i]) begin
      tx.delete();
      tx.push_back(pats[i]);
      run_and_check(tx);
    end

    fd_step("FD-03", "4-byte burst, one START, CLK_DIV=1");
    spi_config(mode, 1'b0, 1, 2'd0, 3, 2, 1'b0);
    tx = '{8'h12, 8'h34, 8'hA5, 8'h5A};
    run_and_check(tx);

    fd_step("FD-04", "4-byte burst, one START, CLK_DIV=4");
    spi_config(mode, 1'b0, 4, 2'd0, 3, 2, 1'b0);
    tx = '{8'hF0, 8'h0F, 8'h96, 8'h69};
    run_and_check(tx);

    fd_step("FD-05", "Idle state after the transfers");
    apb_rd(ADDR_FIFO_LVL, d);  fd_eq("FIFO_LVL (both FIFOs empty)", d, 32'h0);
    apb_rd(ADDR_STATUS, d);    fd_eq("STATUS (tx_empty, rx_empty, not busy)", d, 32'h0000_000A);

    fd_step("END", "Monitor totals");
    fd_eq("bytes seen by the master monitor", sb.n_mst_bytes - m_start, 16);
    fd_eq("bytes seen by the slave monitor",  sb.n_slv_bytes - s_start, 16);
    fd_eq("APB transfers aborted by reset",   sb.n_apb_abort - a_start, 0);

    `uvm_info("FDX", $sformatf("FULL-DUPLEX SEQUENCE SUMMARY (mode %0d): %0d checks, %0d failed", mode, n_chk, n_fail), UVM_LOW)
  endtask

endclass


// ======================================================================================
// FIFO SCENARIOS (used by spi_fifo_test)
// Checks FIFO levels and STATUS flags only (not data content), so it does not depend on the
// TX-data / chip-select RTL problems. Every step prints "---- FF-xx ----" and PASS/FAIL lines (id FIFO).
//
//  FF-01  SPI_TX_FIFO_BASIC            reset state empty; 1 and 4 bytes queued -> level 1 / 4, tx_empty=0; reset flushes
//  FF-02  SPI_TX_FIFO_FULL             15 bytes -> tx_full=0; 16th byte -> level 16, tx_full=1
//  FF-03  SPI_TX_FIFO_OVERFLOW_WRITE   3 more writes while full are dropped: level stays 16; reset flushes
//  FF-04  SPI_RX_FIFO_BASIC            4 bytes queued -> START -> TX level 0, RX level 4, idle;
//                                      each RX_DATA read lowers the RX level by 1; empty at the end
//  FF-05  SPI_RX_FIFO_FULL             15 transfers -> rx_full=0; 16th -> RX level 16, rx_full=1
//  FF-06  SPI_RX_FIFO_OVERFLOW         2 more transfers with RX full: level stays 16, IRQ_STAT[3] (error) set
//  FF-07  SPI_RX_FIFO_BASIC (drain)    16 reads: level counts down 15 .. 0, rx_empty=1
//  FF-08  SPI_RX_READ_WHEN_EMPTY       read RX_DATA when empty: no PSLVERR, upper bits 0, level stays 0 (no underflow)
//  FF-09  SPI_START_EMPTY_TX_FIFO      START=1 with an empty TX FIFO: no transfer, busy=0, no done interrupt
//
// STATUS / FIFO_LEVEL bit positions follow the RTL today. The spec layout differs (see the *_POS
// members below): change the numbers there once the design team confirms which one is right.
// ======================================================================================
class apb_spi_fifo_vseq extends apb_spi_base_vseq;

  `uvm_object_utils(apb_spi_fifo_vseq)

  // STATUS bit positions (RTL layout).     Spec layout: BUSY=0 TX_EMPTY=2 TX_FULL=3 RX_EMPTY=4 RX_FULL=5
  int unsigned ST_BUSY = 0, ST_TX_EMPTY = 1, ST_TX_FULL = 2, ST_RX_EMPTY = 3, ST_RX_FULL = 4;
  // FIFO_LEVEL field positions (RTL layout). Spec layout: TX level [7:0], RX level [15:8]
  int unsigned TXL_POS = 0, RXL_POS = 16;

  string       cur_step;
  int unsigned n_chk;
  int unsigned n_fail;

  function new(string name = "apb_spi_fifo_vseq");
    super.new(name);
  endfunction

  // ---------------- reporting helpers ----------------
  function void ff_step(string id, string desc);
    cur_step = id;
    `uvm_info("FIFO", $sformatf("---- %s : %s ----", id, desc), UVM_LOW)
  endfunction

  function void ff_chk(bit cond, string msg);
    n_chk++;
    if (cond) begin
      `uvm_info("FIFO", $sformatf("[%s] PASS: %s", cur_step, msg), UVM_MEDIUM)
    end else begin
      n_fail++;
      `uvm_error("FIFO", $sformatf("[%s] FAIL: %s", cur_step, msg))
    end
  endfunction

  function void ff_eq(string what, bit [31:0] got, bit [31:0] exp);
    ff_chk(got === exp, $sformatf("%s = %0d (expected %0d)", what, got, exp));
  endfunction

  // ---------------- helpers ----------------
  task get_levels(output int unsigned txl, output int unsigned rxl);
    bit [31:0] d;
    apb_rd(ADDR_FIFO_LVL, d);
    txl = (d >> TXL_POS) & 32'h1F;
    rxl = (d >> RXL_POS) & 32'h1F;
  endtask

  // levels and every STATUS flag for an idle master
  task check_fifo(string tag, int unsigned exp_tx, int unsigned exp_rx);
    bit [31:0]   st;
    int unsigned txl, rxl;
    wait_clks(10);
    get_levels(txl, rxl);
    apb_rd(ADDR_STATUS, st);
    ff_eq({tag, ": TX level"}, txl, exp_tx);
    ff_eq({tag, ": RX level"}, rxl, exp_rx);
    ff_chk(st[ST_BUSY]     == 1'b0,            {tag, ": STATUS.busy = 0"});
    ff_chk(st[ST_TX_EMPTY] == (exp_tx == 0),   {tag, ": STATUS.tx_empty matches the level"});
    ff_chk(st[ST_TX_FULL]  == (exp_tx == 16),  {tag, ": STATUS.tx_full matches the level"});
    ff_chk(st[ST_RX_EMPTY] == (exp_rx == 0),   {tag, ": STATUS.rx_empty matches the level"});
    ff_chk(st[ST_RX_FULL]  == (exp_rx == 16),  {tag, ": STATUS.rx_full matches the level"});
  endtask

  task push(int unsigned n, bit [7:0] base = 8'h10);
    for (int unsigned i = 0; i < n; i++)
      apb_wr(ADDR_TX_DATA, {24'h0, 8'(base + i)});
  endtask

  task fifo_cfg();
    spi_config(2'b00, 1'b0, 2, 2'd0, 1, 1, 1'b0);   // mode 0, MSB first, CLK_DIV=2, CS0, setup 1, hold 1
  endtask

  // START, wait until idle, clear START
  task run_start();
    apb_wr(ADDR_CTRL, ctrl_val | 32'h1);
    spi_wait_idle();
    apb_wr(ADDR_CTRL, ctrl_val);
    wait_clks(10);
  endtask

  // queue n bytes and send them with one START
  task send_n(int unsigned n, bit [7:0] base = 8'h20);
    push(n, base);
    run_start();
  endtask

  // ---------------- scenarios ----------------
  task body();
    bit [31:0]   d;
    bit          err;
    int unsigned txl, rxl;

    n_chk = 0; n_fail = 0;
    wait_clks(10);

    // ---- FF-01 SPI_TX_FIFO_BASIC ------------------------------------------------
    ff_step("FF-01", "TX FIFO basic: empty after reset, 1 and 4 bytes queued, reset flushes");
    check_fifo("after reset", 0, 0);
    push(1);
    check_fifo("1 byte queued", 1, 0);
    push(3, 8'h30);
    check_fifo("4 bytes queued", 4, 0);
    do_reset();
    check_fifo("after reset flush", 0, 0);

    // ---- FF-02 SPI_TX_FIFO_FULL -------------------------------------------------
    ff_step("FF-02", "TX FIFO full: 15 bytes (not full), 16th byte (full)");
    push(15);
    check_fifo("15 bytes queued", 15, 0);
    push(1, 8'h50);
    check_fifo("16 bytes queued (full)", 16, 0);

    // ---- FF-03 SPI_TX_FIFO_OVERFLOW_WRITE ---------------------------------------
    ff_step("FF-03", "TX FIFO overflow: 3 writes while full are dropped");
    push(3, 8'h60);
    check_fifo("after 3 writes while full", 16, 0);
    do_reset();
    check_fifo("after reset flush", 0, 0);

    // ---- FF-04 SPI_RX_FIFO_BASIC ------------------------------------------------
    ff_step("FF-04", "RX FIFO basic: 4 bytes sent, RX level 4, reads count down");
    fifo_cfg();
    push(4, 8'h70);
    check_fifo("4 bytes queued, START=0", 4, 0);
    run_start();
    check_fifo("after 4 transfers", 0, 4);
    for (int unsigned i = 0; i < 4; i++) begin
      apb_rd(ADDR_RX_DATA, d);
      wait_clks(6);
      get_levels(txl, rxl);
      ff_eq($sformatf("RX level after read %0d", i + 1), rxl, 4 - (i + 1));
    end
    check_fifo("RX drained", 0, 0);

    // ---- FF-05 SPI_RX_FIFO_FULL -------------------------------------------------
    ff_step("FF-05", "RX FIFO full: 15 transfers (not full), 16th transfer (full)");
    fifo_cfg();
    send_n(15, 8'h80);
    check_fifo("15 bytes received", 0, 15);
    send_n(1, 8'h90);
    check_fifo("16 bytes received (full)", 0, 16);

    // ---- FF-06 SPI_RX_FIFO_OVERFLOW ---------------------------------------------
    ff_step("FF-06", "RX FIFO overflow: 2 more transfers while full are dropped");
    apb_wr(ADDR_IRQ_STAT, 32'h0000_0008);            // clear the error bit first, so it must be set again by the overflow
    wait_clks(4);
    apb_rd(ADDR_IRQ_STAT, d);
    ff_chk(d[3] == 1'b0, $sformatf("IRQ_STAT[3] (ERROR_IRQ) cleared before the overflow, IRQ_STAT = 0x%08h", d));
    send_n(2, 8'hA0);
    check_fifo("after 2 transfers while full", 0, 16);
    apb_rd(ADDR_IRQ_STAT, d);
    ff_chk(d[3] == 1'b1, $sformatf("IRQ_STAT[3] (ERROR_IRQ) set on RX FIFO overflow, IRQ_STAT = 0x%08h", d));

    // ---- FF-07 SPI_RX_FIFO_BASIC (drain) ----------------------------------------
    ff_step("FF-07", "RX FIFO drain: 16 reads, level counts down to 0");
    for (int unsigned i = 0; i < 16; i++) begin
      apb_rd(ADDR_RX_DATA, d);
      wait_clks(6);
      get_levels(txl, rxl);
      ff_eq($sformatf("RX level after read %0d", i + 1), rxl, 16 - (i + 1));
    end
    check_fifo("RX empty", 0, 0);

    // ---- FF-08 SPI_RX_READ_WHEN_EMPTY -------------------------------------------
    ff_step("FF-08", "RX_DATA read while the RX FIFO is empty");
    apb_rd_err(ADDR_RX_DATA, d, err);
    ff_chk(err == 1'b0, "read of RX_DATA when empty: PSLVERR = 0");
    ff_chk(d[31:8] == 24'h0, $sformatf("RX_DATA upper bits are zero (0x%08h)", d));
    check_fifo("after read when empty (no underflow)", 0, 0);

    // ---- FF-09 SPI_START_EMPTY_TX_FIFO ------------------------------------------
    ff_step("FF-09", "START=1 with an empty TX FIFO: no transfer");
    do_reset();
    fifo_cfg();
    apb_wr(ADDR_CTRL, ctrl_val | 32'h1);
    wait_clks(60);
    check_fifo("START=1, TX empty", 0, 0);
    apb_rd(ADDR_IRQ_STAT, d);
    ff_chk(d[2] == 1'b0, $sformatf("IRQ_STAT[2] (transfer done) not set without a transfer, IRQ_STAT = 0x%08h", d));
    apb_wr(ADDR_CTRL, ctrl_val);

    `uvm_info("FIFO", $sformatf("FIFO SEQUENCE SUMMARY: %0d checks, %0d failed", n_chk, n_fail), UVM_LOW)
  endtask

endclass

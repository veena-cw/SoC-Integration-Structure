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


// ======================================================================================
// SPI MODE SCENARIOS (apb_spi_mode_test)
//
//   MD-01 .. MD-04  Modes 0..3, MSB first
//   MD-05 .. MD-08  Modes 0..3, LSB first
//   MD-09           Change through all four modes without reset
//   MD-10           Transfer after reset recovery
//
// Every transfer uses CS0, CLK_DIV=2, CS_SETUP=3 and CS_HOLD=2.  The existing
// master/slave monitors and scoreboard check MOSI, MISO, edge count, bit count,
// SCK period, CS selection and CS setup/hold timing.
// ======================================================================================
class apb_spi_mode_vseq extends apb_spi_base_vseq;

  `uvm_object_utils(apb_spi_mode_vseq)

  virtual spi_master_if mvif;

  string       cur_step;
  int unsigned n_chk;
  int unsigned n_fail;

  function new(string name = "apb_spi_mode_vseq");
    super.new(name);
  endfunction

  function void mode_step(string id, string desc);
    cur_step = id;
    `uvm_info("MODE", $sformatf("---- %s : %s ----", id, desc), UVM_LOW)
  endfunction

  function void mode_chk(bit cond, string msg);
    n_chk++;
    if (cond)
      `uvm_info("MODE", $sformatf("[%s] PASS: %s", cur_step, msg), UVM_MEDIUM)
    else begin
      n_fail++;
      `uvm_error("MODE", $sformatf("[%s] FAIL: %s", cur_step, msg))
    end
  endfunction

  function void mode_eqh(string what, bit [31:0] got, bit [31:0] exp);
    mode_chk(got === exp,
             $sformatf("%s = 0x%02h (expected 0x%02h)", what, got, exp));
  endfunction

  // Run one isolated full-duplex byte and check the APB-visible result.
  // mode = {CPOL, CPHA}.
  task run_mode_transfer(string id,
                         bit [1:0] mode,
                         bit       lsb,
                         bit [7:0] data,
                         bit       reset_first = 1'b1);
    bit [31:0] ctrl;
    bit [31:0] rd;
    bit [31:0] lvl;
    bit [31:0] status;
    bit [31:0] irq_stat;

    mode_step(id,
              $sformatf("mode %0d (CPOL=%0b CPHA=%0b), %s-first, data 0x%02h",
                        mode, mode[1], mode[0], lsb ? "LSB" : "MSB", data));

    if (reset_first)
      do_reset();

    spi_config(mode, lsb, 2, 2'd0, 3, 2, 1'b0);

    apb_rd(ADDR_CTRL, ctrl);
    mode_chk(ctrl[2] == mode[1], "CTRL.CPOL matches the requested mode");
    mode_chk(ctrl[3] == mode[0], "CTRL.CPHA matches the requested mode");
    mode_chk(ctrl[1] == lsb,     "CTRL.LSB_FIRST matches the requested order");
    mode_chk(ctrl[0] == 1'b0,    "CTRL.START is clear before the transfer");

    apb_wr(ADDR_TX_DATA, {24'h0, data});
    apb_wr(ADDR_CTRL, ctrl_val | 32'h1);
    spi_wait_idle();
    apb_wr(ADDR_CTRL, ctrl_val);
    wait_clks(10);

    @(mvif.master_cb);
    mode_chk(mvif.master_cb.cs_n == 4'hF,
             "all chip-select outputs are inactive after the transfer");
    mode_chk(mvif.master_cb.sck == mode[1],
             $sformatf("SCK returns to CPOL idle level %0b", mode[1]));
    mode_chk(mvif.master_cb.cpol == mode[1] &&
             mvif.master_cb.cpha == mode[0] &&
             mvif.master_cb.lsb_first == lsb,
             "monitor observed the programmed mode and bit order");

    apb_rd(ADDR_RX_DATA, rd);
    mode_eqh("RX_DATA", rd[7:0], data);
    mode_chk(rd[31:8] == 24'h0, "RX_DATA upper bits are zero");

    wait_clks(10);
    apb_rd(ADDR_FIFO_LVL, lvl);
    mode_chk(lvl[4:0] == 5'd0,   "master TX FIFO is empty");
    mode_chk(lvl[20:16] == 5'd0, "master RX FIFO is empty after RX_DATA read");

    apb_rd(ADDR_STATUS, status);
    mode_chk(status[0] == 1'b0, "STATUS.busy is clear");
    mode_chk(status[1] == 1'b1, "STATUS.tx_empty is set");
    mode_chk(status[3] == 1'b1, "STATUS.rx_empty is set after the read");

    apb_rd(ADDR_IRQ_STAT, irq_stat);
    mode_chk(irq_stat[2] == 1'b1, "transfer DONE status is set");
    apb_wr(ADDR_IRQ_STAT, 32'h0000_0004);
  endtask

  task body();
    if (!uvm_resource_db#(virtual spi_master_if)::read_by_name(get_full_name(),
                                                               "master_vif", mvif))
      `uvm_fatal("MODE", "master_vif not found in uvm_resource_db")

    n_chk  = 0;
    n_fail = 0;

    // Modes 0..3, MSB first.
    run_mode_transfer("MD-01", 2'b00, 1'b0, 8'h96);
    run_mode_transfer("MD-02", 2'b01, 1'b0, 8'h53);
    run_mode_transfer("MD-03", 2'b10, 1'b0, 8'h2D);
    run_mode_transfer("MD-04", 2'b11, 1'b0, 8'hE1);

    // Modes 0..3, LSB first.  These non-symmetric patterns expose reversal bugs.
    run_mode_transfer("MD-05", 2'b00, 1'b1, 8'h96);
    run_mode_transfer("MD-06", 2'b01, 1'b1, 8'h53);
    run_mode_transfer("MD-07", 2'b10, 1'b1, 8'h2D);
    run_mode_transfer("MD-08", 2'b11, 1'b1, 8'hE1);

    // Reprogram all modes back-to-back without resetting the DUT.
    do_reset();
    run_mode_transfer("MD-09A", 2'b00, 1'b0, 8'hA1, 1'b0);
    run_mode_transfer("MD-09B", 2'b01, 1'b0, 8'hB2, 1'b0);
    run_mode_transfer("MD-09C", 2'b10, 1'b0, 8'hC4, 1'b0);
    run_mode_transfer("MD-09D", 2'b11, 1'b0, 8'hD8, 1'b0);
    run_mode_transfer("MD-09B", 2'b01, 1'b0, 8'hB3, 1'b0);
    run_mode_transfer("MD-09C", 2'b10, 1'b0, 8'hC4, 1'b0);
    run_mode_transfer("MD-09D", 2'b11, 1'b0, 8'hD9, 1'b0);
    
    // Confirm that a fresh transfer works after reset.
    run_mode_transfer("MD-10", 2'b00, 1'b0, 8'h6D, 1'b1);

    `uvm_info("MODE",
              $sformatf("MODE SEQUENCE SUMMARY: %0d checks, %0d failed",
                        n_chk, n_fail),
              UVM_LOW)
  endtask

endclass

// ======================================================================================
// CLOCK DIVIDER SCENARIOS (apb_spi_clk_div_test)
//
//   CD-01 .. CD-06  CLK_DIV = 0, 1, 2, 3, 7 and 31.
//
// Every transfer uses mode 0, MSB first, CS0, CS_SETUP=3 and CS_HOLD=2 so the
// clock divider is the only changing protocol parameter. The master monitor and
// scoreboard check that every SCK half-period is exactly CLK_DIV+1 PCLK cycles.
// ======================================================================================
class apb_spi_clk_div_vseq extends apb_spi_base_vseq;

  `uvm_object_utils(apb_spi_clk_div_vseq)

  virtual spi_master_if mvif;
  string       cur_step;
  int unsigned n_chk;
  int unsigned n_fail;

  function new(string name = "apb_spi_clk_div_vseq");
    super.new(name);
  endfunction

  function void clk_step(string id, int unsigned div, bit [7:0] data);
    cur_step = id;
    `uvm_info("CLK_DIV",
              $sformatf("---- %s : CLK_DIV=%0d, expected SCK half-period=%0d PCLK, data=0x%02h ----",
                        id, div, div + 1, data), UVM_LOW)
  endfunction

  function void clk_chk(bit cond, string msg);
    n_chk++;
    if (cond)
      `uvm_info("CLK_DIV", $sformatf("[%s] PASS: %s", cur_step, msg), UVM_MEDIUM)
    else begin
      n_fail++;
      `uvm_error("CLK_DIV", $sformatf("[%s] FAIL: %s", cur_step, msg))
    end
  endfunction

  task run_div_transfer(string id, int unsigned div, bit [7:0] data);
    bit [31:0] rd;
    bit [31:0] lvl;
    bit [31:0] status;
    bit [31:0] irq_stat;

    clk_step(id, div, data);
    do_reset();
    wait_clks(5);

    // Mode 0 avoids interference from the separately tracked CPHA=1 RTL issue.
    spi_config(2'b00, 1'b0, div, 2'd0, 3, 2, 1'b0);

    apb_rd(ADDR_CLK_DIV, rd);
    clk_chk(rd == div, $sformatf("CLK_DIV readback is %0d", div));

    apb_wr(ADDR_TX_DATA, {24'h0, data});
    apb_wr(ADDR_CTRL, ctrl_val | 32'h1);
    spi_wait_idle();
    apb_wr(ADDR_CTRL, ctrl_val);
    wait_clks(10);

    @(mvif.master_cb);
    clk_chk(mvif.master_cb.cs_n == 4'hF,
            "all chip-select outputs are inactive after the transfer");
    clk_chk(mvif.master_cb.sck == 1'b0,
            "SCK returns to the mode-0 idle level");

    apb_rd(ADDR_RX_DATA, rd);
    clk_chk(rd[7:0] == data, $sformatf("RX_DATA is 0x%02h", data));
    clk_chk(rd[31:8] == 24'h0, "RX_DATA upper bits are zero");

    wait_clks(10);
    apb_rd(ADDR_FIFO_LVL, lvl);
    clk_chk(lvl[4:0] == 5'd0, "master TX FIFO is empty");
    clk_chk(lvl[20:16] == 5'd0,
            "master RX FIFO is empty after RX_DATA read");

    apb_rd(ADDR_STATUS, status);
    clk_chk(status[0] == 1'b0, "STATUS.busy is clear");
    clk_chk(status[1] == 1'b1, "STATUS.tx_empty is set");
    clk_chk(status[3] == 1'b1, "STATUS.rx_empty is set after the read");

    apb_rd(ADDR_IRQ_STAT, irq_stat);
    clk_chk(irq_stat[2] == 1'b1, "transfer DONE status is set");
    apb_wr(ADDR_IRQ_STAT, 32'h0000_0004);
  endtask

  task body();
    if (!uvm_resource_db#(virtual spi_master_if)::read_by_name(get_full_name(),
                                                               "master_vif", mvif))
      `uvm_fatal("CLK_DIV", "master_vif not found in uvm_resource_db")

    n_chk  = 0;
    n_fail = 0;

    // Cover half-period bins 1, 2, 3, 4..7, 8..31 and 32+ PCLK cycles.
    run_div_transfer("CD-01",  0, 8'hA5);
    run_div_transfer("CD-02",  1, 8'h5A);
    run_div_transfer("CD-03",  2, 8'h96);
    run_div_transfer("CD-04",  3, 8'h69);
    run_div_transfer("CD-05",  7, 8'hC3);
    run_div_transfer("CD-06", 31, 8'h3C);

    `uvm_info("CLK_DIV",
              $sformatf("CLOCK DIVIDER SEQUENCE SUMMARY: %0d checks, %0d failed",
                        n_chk, n_fail), UVM_LOW)
  endtask

endclass


// ======================================================================================
// INTERRUPT SCENARIOS (apb_spi_irq_test)
//
// Current RTL implements IRQ_STAT / IRQ_MASK bits:
//   [1] RX FIFO full, [2] transfer done, [3] RX overflow/error.
// IRQ bit [0] (TX empty) is intentionally not checked because it is commented out in RTL.
// ======================================================================================
class apb_spi_irq_vseq extends apb_spi_base_vseq;

  `uvm_object_utils(apb_spi_irq_vseq)

  virtual apb_if avif;

  string       cur_step;
  int unsigned n_chk;
  int unsigned n_fail;

  function new(string name = "apb_spi_irq_vseq");
    super.new(name);
  endfunction

  function void irq_step(string id, string desc);
    cur_step = id;
    `uvm_info("IRQ", $sformatf("---- %s : %s ----", id, desc), UVM_LOW)
  endfunction

  function void irq_chk(bit cond, string msg);
    n_chk++;
    if (cond)
      `uvm_info("IRQ", $sformatf("[%s] PASS: %s", cur_step, msg), UVM_MEDIUM)
    else begin
      n_fail++;
      `uvm_error("IRQ", $sformatf("[%s] FAIL: %s", cur_step, msg))
    end
  endfunction

  function void irq_eq(string what, bit [31:0] got, bit [31:0] exp);
    irq_chk(got === exp,
            $sformatf("%s = 0x%08h (expected 0x%08h)", what, got, exp));
  endfunction

  task sample_irq(output bit value);
    @(avif.mon_cb);
    value = avif.mon_cb.spi_irq;
  endtask

  task irq_cfg();
    spi_config(2'b00, 1'b0, 2, 2'd0, 3, 2, 1'b0);
  endtask

  // Send one byte and remember whether spi_irq was asserted at any PCLK edge.
  task send_one_capture_irq(bit [7:0] data, output bit saw_irq);
    bit monitor_done;

    saw_irq     = 1'b0;
    monitor_done = 1'b0;

    fork
      begin
        while (!monitor_done) begin
          @(avif.mon_cb);
          if (avif.mon_cb.spi_irq === 1'b1)
            saw_irq = 1'b1;
        end
      end
      begin
        apb_wr(ADDR_TX_DATA, {24'h0, data});
        apb_wr(ADDR_CTRL, ctrl_val | 32'h1);
        spi_wait_idle();
        apb_wr(ADDR_CTRL, ctrl_val);
        wait_clks(4);
        monitor_done = 1'b1;
      end
    join
  endtask

  task body();
    bit [31:0] d;
    bit [31:0] lvl;
    bit        irq_value;
    bit        saw_irq;

    if (!uvm_resource_db#(virtual apb_if)::read_by_name(get_full_name(),
                                                        "apb_vif", avif))
      `uvm_fatal("IRQ", "apb_vif not found in uvm_resource_db")

    n_chk  = 0;
    n_fail = 0;

    // ---- IRQ-01 -----------------------------------------------------------------
    irq_step("IRQ-01", "Reset clears IRQ_STAT, IRQ_MASK and spi_irq");
    do_reset();
    wait_clks(10);
    apb_rd(ADDR_IRQ_STAT, d);
    irq_eq("IRQ_STAT after reset", d, 32'h0);
    apb_rd(ADDR_IRQ_MASK, d);
    irq_eq("IRQ_MASK after reset", d, 32'h0);
    sample_irq(irq_value);
    irq_chk(irq_value == 1'b0, "spi_irq is low after reset");

    // ---- IRQ-02 -----------------------------------------------------------------
    irq_step("IRQ-02", "IRQ_MASK bits [3:1] read/write");
    apb_wr(ADDR_IRQ_MASK, 32'h0000_000E);
    apb_rd(ADDR_IRQ_MASK, d);
    irq_eq("IRQ_MASK enabled", d, 32'h0000_000E);
    apb_wr(ADDR_IRQ_MASK, 32'h0);
    apb_rd(ADDR_IRQ_MASK, d);
    irq_eq("IRQ_MASK disabled", d, 32'h0);

    // ---- IRQ-03 -----------------------------------------------------------------
    irq_step("IRQ-03", "Transfer-done status with its mask disabled");
    do_reset();
    irq_cfg();
    apb_wr(ADDR_IRQ_MASK, 32'h0);
    send_one_capture_irq(8'hA5, saw_irq);
    irq_chk(!saw_irq, "spi_irq remains low when DONE mask is disabled");
    apb_rd(ADDR_IRQ_STAT, d);
    irq_chk(d[2] == 1'b1,
            $sformatf("IRQ_STAT[2] DONE is set (IRQ_STAT=0x%08h)", d));

    // Writing zero must not clear a W1C bit.
    apb_wr(ADDR_IRQ_STAT, 32'h0);
    apb_rd(ADDR_IRQ_STAT, d);
    irq_chk(d[2] == 1'b1, "writing 0 leaves DONE set");

    apb_wr(ADDR_IRQ_STAT, 32'h0000_0004);
    wait_clks(2);
    apb_rd(ADDR_IRQ_STAT, d);
    irq_chk(d[2] == 1'b0, "writing 1 clears DONE");
    apb_rd(ADDR_RX_DATA, d);

    // ---- IRQ-04 -----------------------------------------------------------------
    irq_step("IRQ-04", "Masked transfer-done drives spi_irq");
    do_reset();
    irq_cfg();
    apb_wr(ADDR_IRQ_MASK, 32'h0000_0004);
    send_one_capture_irq(8'h5A, saw_irq);
    irq_chk(saw_irq, "spi_irq pulse observed for enabled DONE interrupt");
    apb_rd(ADDR_IRQ_STAT, d);
    irq_chk(d[2] == 1'b1, "DONE status remains set after the pulse");
    apb_wr(ADDR_IRQ_STAT, 32'h0000_0004);
    apb_wr(ADDR_IRQ_MASK, 32'h0);
    apb_rd(ADDR_RX_DATA, d);

    // ---- IRQ-05 -----------------------------------------------------------------
    irq_step("IRQ-05", "RX FIFO full status and interrupt");
    do_reset();
    irq_cfg();
    apb_wr(ADDR_IRQ_MASK, 32'h0000_0002);
    for (int unsigned i = 0; i < 16; i++)
      apb_wr(ADDR_TX_DATA, {24'h0, 8'(8'h80 + i)});
    apb_wr(ADDR_CTRL, ctrl_val | 32'h1);
    spi_wait_idle();
    apb_wr(ADDR_CTRL, ctrl_val);
    wait_clks(10);

    apb_rd(ADDR_FIFO_LVL, lvl);
    irq_chk(lvl[20:16] == 5'd16,
            $sformatf("master RX FIFO level is 16 (FIFO_LVL=0x%08h)", lvl));
    apb_rd(ADDR_IRQ_STAT, d);
    irq_chk(d[1] == 1'b1,
            $sformatf("IRQ_STAT[1] RX_FULL is set (IRQ_STAT=0x%08h)", d));
    irq_chk(d[3] == 1'b0,
            $sformatf("IRQ_STAT[3] ERROR is clear before overflow (IRQ_STAT=0x%08h)", d));
    sample_irq(irq_value);
    irq_chk(irq_value == 1'b1, "spi_irq is high while RX_FULL is enabled");

    // ---- IRQ-06 -----------------------------------------------------------------
    irq_step("IRQ-06", "RX FIFO overflow/error interrupt");
    // Clear old DONE/ERROR, then enable only ERROR so RX_FULL cannot satisfy spi_irq.
    apb_wr(ADDR_IRQ_STAT, 32'h0000_000C);
    apb_wr(ADDR_IRQ_MASK, 32'h0000_0008);
    wait_clks(4);
    send_one_capture_irq(8'hE1, saw_irq);
    irq_chk(saw_irq, "spi_irq pulse observed for enabled ERROR interrupt");
    apb_rd(ADDR_IRQ_STAT, d);
    irq_chk(d[3] == 1'b1,
            $sformatf("IRQ_STAT[3] ERROR is set (IRQ_STAT=0x%08h)", d));
    apb_rd(ADDR_FIFO_LVL, lvl);
    irq_chk(lvl[20:16] == 5'd16,
            "RX FIFO remains at level 16 after overflow");

    // ---- IRQ-07 -----------------------------------------------------------------
    irq_step("IRQ-07", "Selective W1C clear");
    apb_wr(ADDR_IRQ_STAT, 32'h0000_0008);
    wait_clks(2);
    apb_rd(ADDR_IRQ_STAT, d);
    irq_chk(d[3] == 1'b0, "W1C clears ERROR only");
    irq_chk(d[1] == 1'b1, "RX_FULL remains set while FIFO is full");
    irq_chk(d[2] == 1'b1, "DONE remains set when only ERROR is cleared");

    apb_wr(ADDR_IRQ_STAT, 32'h0000_0004);
    wait_clks(2);
    apb_rd(ADDR_IRQ_STAT, d);
    irq_chk(d[2] == 1'b0, "W1C clears DONE");
    irq_chk(d[1] == 1'b1, "RX_FULL remains set after clearing DONE");

    // ---- IRQ-08 -----------------------------------------------------------------
    irq_step("IRQ-08", "Reset clears pending interrupts and mask");
    do_reset();
    wait_clks(10);
    apb_rd(ADDR_IRQ_STAT, d);
    irq_eq("IRQ_STAT after final reset", d, 32'h0);
    apb_rd(ADDR_IRQ_MASK, d);
    irq_eq("IRQ_MASK after final reset", d, 32'h0);
    sample_irq(irq_value);
    irq_chk(irq_value == 1'b0, "spi_irq is low after final reset");

    `uvm_info("IRQ",
              $sformatf("IRQ SEQUENCE SUMMARY: %0d checks, %0d failed",
                        n_chk, n_fail),
              UVM_LOW)
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
    //apb_wr(ADDR_IRQ_MASK, 32'h0000_000F); apb_rd(ADDR_IRQ_MASK, d); smoke_eq("IRQ_MASK", d, 32'h0000_000F);
    apb_wr(ADDR_IRQ_MASK, 32'h0000_000F);
	apb_rd(ADDR_IRQ_MASK, d);
	smoke_eq("IRQ_MASK", d, 32'h0000_000E);
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


// ======================================================================================
// FIFO SCENARIOS (apb_spi_fifo_test)  -  all FOUR FIFOs of the SPI IP
//
//   FIFO 1  master TX  (spi_master.u_tx_fifo)  visible: STATUS / FIFO_LEVEL
//   FIFO 2  master RX  (spi_master.u_rx_fifo)  visible: STATUS / FIFO_LEVEL
//   FIFO 3  slave  TX  (spi_slave.u_tx_fifo)   visible: probe s_tx_count / s_tx_full / s_tx_empty
//   FIFO 4  slave  RX  (spi_slave.u_rx_fifo)   visible: probe s_rx_count / s_rx_full / s_rx_empty,
//                                              head byte on s_rx_data
//
// Wiring of this RTL: a TX_DATA write loads FIFO 1 and FIFO 3 with the same byte; an RX_DATA read
// pops FIFO 2 and FIFO 4; the master pops FIFO 1 at every frame start, the slave pops FIFO 3 and
// fills FIFO 4 only for chip select 0. So with CS0 all four FIFOs move in lock-step.
//
//  FF-01  TX FIFOs basic         FIFO 1+3: empty after reset; 1 and 4 bytes -> level 1 / 4; reset flushes
//  FF-02  TX FIFOs full          FIFO 1+3: 15 bytes not full; 16th byte -> full
//  FF-03  TX FIFOs overflow      FIFO 1+3: 3 writes while full are dropped, level stays 16; reset flushes
//  FF-04  RX FIFOs basic         4 bytes sent: FIFO 1+3 empty, FIFO 2+4 hold 4; slave RX head = oldest byte;
//                                RX_DATA returns the oldest byte; every read lowers FIFO 2+4 by 1
//  FF-05  RX FIFOs full          15 frames -> FIFO 2+4 not full; 16th frame -> full
//  FF-06  RX FIFOs overflow      2 more frames while full are dropped (level stays 16), IRQ_STAT[3] set again
//  FF-07  RX FIFOs drain         16 reads: FIFO 2+4 count down to 0; slave RX head shows the bytes in order
//  FF-08  RX read when empty     no PSLVERR, no underflow in FIFO 2+4
//  FF-09  START, TX FIFO empty   no frame, no done interrupt, all four FIFOs unchanged
//  FF-10  Chip select 1          master pops/fills (FIFO 1+2), slave sees no frame (FIFO 3 keeps its bytes,
//                                FIFO 4 stays empty)  [RTL: slave is wired to chip select 0 only]
//  FF-11  Reset                  data in all four FIFOs is flushed by reset
// ======================================================================================
class apb_spi_fifo_vseq extends apb_spi_base_vseq;

  `uvm_object_utils(apb_spi_fifo_vseq)

  virtual spi_slave_if svif;   // read-only probes of the slave FIFOs

  // STATUS bit positions of this RTL (spec layout differs: BUSY=0 TX_EMPTY=2 TX_FULL=3 RX_EMPTY=4 RX_FULL=5)
  localparam int unsigned ST_BUSY = 0, ST_TX_EMPTY = 1, ST_TX_FULL = 2, ST_RX_EMPTY = 3, ST_RX_FULL = 4;
  // FIFO_LEVEL fields of this RTL (spec layout differs: TX [7:0], RX [15:8])
  localparam int unsigned TXL_POS = 0, RXL_POS = 16;

  string       cur_step;
  int unsigned n_chk;
  int unsigned n_fail;

  // sampled values
  int unsigned m_tx_cnt, m_rx_cnt;           // master FIFOs (APB registers)
  bit [31:0]   m_st;
  int unsigned s_tx_cnt, s_rx_cnt;           // slave FIFOs (probes)
  bit          s_tx_full, s_tx_empty, s_rx_full, s_rx_empty;
  bit [7:0]    s_rx_head;

  function new(string name = "apb_spi_fifo_vseq");
    super.new(name);
  endfunction

  // ---------------- reporting ----------------
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

  function void ff_eqh(string what, bit [31:0] got, bit [31:0] exp);
    ff_chk(got === exp, $sformatf("%s = 0x%02h (expected 0x%02h)", what, got, exp));
  endfunction

  // ---------------- sampling ----------------
  task sample_master();
    bit [31:0] d;
    apb_rd(ADDR_FIFO_LVL, d);
    m_tx_cnt = (d >> TXL_POS) & 32'h1F;
    m_rx_cnt = (d >> RXL_POS) & 32'h1F;
    apb_rd(ADDR_STATUS, m_st);
  endtask

  task sample_slave();
    @(svif.slave_cb);
    s_tx_cnt   = svif.slave_cb.tx_count;
    s_rx_cnt   = svif.slave_cb.rx_count;
    s_tx_full  = svif.slave_cb.tx_full;
    s_tx_empty = svif.slave_cb.tx_empty;
    s_rx_full  = svif.slave_cb.rx_full;
    s_rx_empty = svif.slave_cb.rx_empty;
    s_rx_head  = svif.slave_cb.rx_data;
  endtask

  // all four FIFOs: levels and flags (master TX/RX expected m_tx/m_rx, slave TX/RX expected s_tx/s_rx)
  task check_all(string tag, int unsigned m_tx, int unsigned m_rx, int unsigned s_tx, int unsigned s_rx);
    wait_clks(10);
    sample_master();
    sample_slave();
    ff_eq({tag, ": FIFO1 master TX level"}, m_tx_cnt, m_tx);
    ff_eq({tag, ": FIFO2 master RX level"}, m_rx_cnt, m_rx);
    ff_eq({tag, ": FIFO3 slave TX level"},  s_tx_cnt, s_tx);
    ff_eq({tag, ": FIFO4 slave RX level"},  s_rx_cnt, s_rx);
    ff_chk(m_st[ST_BUSY]     == 1'b0,          {tag, ": STATUS.busy = 0"});
    ff_chk(m_st[ST_TX_EMPTY] == (m_tx == 0),   {tag, ": FIFO1 tx_empty flag matches"});
    ff_chk(m_st[ST_TX_FULL]  == (m_tx == 16),  {tag, ": FIFO1 tx_full flag matches"});
    ff_chk(m_st[ST_RX_EMPTY] == (m_rx == 0),   {tag, ": FIFO2 rx_empty flag matches"});
    ff_chk(m_st[ST_RX_FULL]  == (m_rx == 16),  {tag, ": FIFO2 rx_full flag matches"});
    ff_chk(s_tx_empty == (s_tx == 0),          {tag, ": FIFO3 tx_empty flag matches"});
    ff_chk(s_tx_full  == (s_tx == 16),         {tag, ": FIFO3 tx_full flag matches"});
    ff_chk(s_rx_empty == (s_rx == 0),          {tag, ": FIFO4 rx_empty flag matches"});
    ff_chk(s_rx_full  == (s_rx == 16),         {tag, ": FIFO4 rx_full flag matches"});
  endtask

  // CS0: the four FIFOs move together
  task check_lock(string tag, int unsigned tx, int unsigned rx);
    check_all(tag, tx, rx, tx, rx);
  endtask

  // ---------------- stimulus helpers ----------------
  task push(int unsigned n, bit [7:0] base = 8'h10);
    for (int unsigned i = 0; i < n; i++)
      apb_wr(ADDR_TX_DATA, {24'h0, 8'(base + i)});
  endtask

  /*task fifo_cfg(bit [1:0] cs = 2'd0);
    spi_config(2'b00, 1'b0, 2, cs, 1, 1, 1'b0);   // mode 0, MSB first, CLK_DIV=2, setup 1, hold 1
  endtask*/
  task fifo_cfg(
	  bit [1:0] cs    = 2'd0,
	  bit       inter = 1'b0
	);
	  spi_config(2'b00, 1'b0, 2, cs, 1, 1, inter);
	endtask

  task run_start();
    apb_wr(ADDR_CTRL, ctrl_val | 32'h1);
    spi_wait_idle();
    apb_wr(ADDR_CTRL, ctrl_val);
    wait_clks(10);
  endtask

  task send_n(int unsigned n, bit [7:0] base = 8'h20);
    push(n, base);
    run_start();
  endtask

  // one RX_DATA read; afterwards both RX FIFOs must have dropped to exp_left
  task read_rx_and_check(string tag, int unsigned exp_left);
    bit [31:0] d;
    apb_rd(ADDR_RX_DATA, d);
    wait_clks(10);
    sample_master();
    sample_slave();
    ff_eq({tag, ": FIFO2 master RX level after the read"}, m_rx_cnt, exp_left);
    ff_eq({tag, ": FIFO4 slave RX level after the read"},  s_rx_cnt, exp_left);
  endtask

  // ---------------- scenarios ----------------
  task body();
    bit [31:0] d, rd;
    bit        err;
    bit [7:0]  four[$];
    bit [7:0]  sent[$];

    if (!uvm_resource_db#(virtual spi_slave_if)::read_by_name(get_full_name(), "slave_vif", svif))
      `uvm_fatal("FIFO", "slave_vif not found in uvm_resource_db")
    n_chk = 0; n_fail = 0;
    wait_clks(10);

    // ---- FF-01 ------------------------------------------------------------------
    ff_step("FF-01", "TX FIFOs basic (FIFO1 master TX, FIFO3 slave TX)");
    check_lock("after reset", 0, 0);
    push(1);
    check_lock("1 byte queued", 1, 0);
    push(3, 8'h30);
    check_lock("4 bytes queued", 4, 0);
    do_reset();
    check_lock("after reset flush", 0, 0);

    // ---- FF-02 ------------------------------------------------------------------
    ff_step("FF-02", "TX FIFOs full: 15 bytes, then the 16th");
    push(15);
    check_lock("15 bytes queued", 15, 0);
    push(1, 8'h50);
    check_lock("16 bytes queued (full)", 16, 0);

    // ---- FF-03 ------------------------------------------------------------------
    ff_step("FF-03", "TX FIFOs overflow: 3 writes while full are dropped");
    push(3, 8'h60);
    check_lock("after 3 writes while full", 16, 0);
    do_reset();
    check_lock("after reset flush", 0, 0);

    // ---- FF-04 ------------------------------------------------------------------
    ff_step("FF-04", "RX FIFOs basic (FIFO2 master RX, FIFO4 slave RX): 4 frames, ordered reads");
    fifo_cfg();
    four = '{8'h11, 8'h22, 8'h33, 8'h44};
    foreach (four[i]) apb_wr(ADDR_TX_DATA, {24'h0, four[i]});
    check_lock("4 bytes queued, START=0", 4, 0);
    run_start();
    check_lock("after 4 frames", 0, 4);
    /*for (int unsigned i = 0; i < 4; i++) begin
      sample_slave();
      ff_eqh($sformatf("FIFO4 slave RX head before read %0d (oldest byte sent)", i), s_rx_head, four[i]);
      apb_rd(ADDR_RX_DATA, rd);
      ff_eqh($sformatf("RX_DATA read %0d returns the oldest byte of FIFO2", i), rd[7:0], four[i]);
      wait_clks(10);
      sample_master();
      sample_slave();
      ff_eq($sformatf("FIFO2 master RX level after read %0d", i + 1), m_rx_cnt, 4 - (i + 1));
      ff_eq($sformatf("FIFO4 slave RX level after read %0d", i + 1),  s_rx_cnt, 4 - (i + 1));
    end*/
    for (int unsigned i = 0; i < 4; i++) begin
	  apb_rd(ADDR_RX_DATA, rd);

	  ff_eqh($sformatf("RX_DATA read %0d returns FIFO2 data", i),
		 rd[7:0], four[i]);

	  wait_clks(10);
	  sample_master();
	  sample_slave();

	  // Slave FIFO read data is valid after the FIFO read.
	  ff_eqh($sformatf("FIFO4 slave RX popped data %0d", i),
		 s_rx_head, four[i]);

	  ff_eq($sformatf("FIFO2 master RX level after read %0d", i + 1),
		m_rx_cnt, 4 - (i + 1));

	  ff_eq($sformatf("FIFO4 slave RX level after read %0d", i + 1),
		s_rx_cnt, 4 - (i + 1));
	end
    check_lock("RX drained", 0, 0);

    // ---- FF-05 ------------------------------------------------------------------
    ff_step("FF-05", "RX FIFOs full: 15 frames, then the 16th");
    fifo_cfg();
    send_n(15, 8'h80);
    check_lock("15 frames received", 0, 15);
    send_n(1, 8'h90);
    check_lock("16 frames received (full)", 0, 16);

    // ---- FF-06 ------------------------------------------------------------------
    ff_step("FF-06", "RX FIFOs overflow: 2 more frames while full are dropped");
    apb_wr(ADDR_IRQ_STAT, 32'h0000_0008);
    wait_clks(4);
    apb_rd(ADDR_IRQ_STAT, d);
    ff_chk(d[3] == 1'b0, $sformatf("IRQ_STAT[3] (ERROR_IRQ) cleared before the overflow, IRQ_STAT = 0x%08h", d));
    send_n(2, 8'hA0);
    check_lock("after 2 frames while full", 0, 16);
    apb_rd(ADDR_IRQ_STAT, d);
    ff_chk(d[3] == 1'b1, $sformatf("IRQ_STAT[3] (ERROR_IRQ) set by the RX overflow, IRQ_STAT = 0x%08h", d));

    // ---- FF-07 ------------------------------------------------------------------
    ff_step("FF-07", "RX FIFOs drain: 16 reads; slave RX head shows the bytes in order");
    /*for (int unsigned i = 0; i < 16; i++) begin
      sample_slave();
      ff_eqh($sformatf("FIFO4 slave RX head before read %0d", i), s_rx_head, (i < 15) ? 8'(8'h80 + i) : 8'h90);
      read_rx_and_check($sformatf("read %0d", i), 16 - (i + 1));
    end*/
    for (int unsigned i = 0; i < 16; i++) begin
	  read_rx_and_check($sformatf("read %0d", i), 16 - (i + 1));

	  // read_rx_and_check() samples the slave after the FIFO read.
	  ff_eqh($sformatf("FIFO4 slave RX popped data %0d", i),
		 s_rx_head,
		 (i < 15) ? 8'(8'h80 + i) : 8'h90);
	end
    check_lock("RX empty", 0, 0);

    // ---- FF-08 ------------------------------------------------------------------
    ff_step("FF-08", "RX_DATA read while both RX FIFOs are empty");
    apb_rd_err(ADDR_RX_DATA, d, err);
    ff_chk(err == 1'b0, "read of RX_DATA when empty: PSLVERR = 0");
    ff_chk(d[31:8] == 24'h0, $sformatf("RX_DATA upper bits are zero (0x%08h)", d));
    check_lock("after read when empty (no underflow)", 0, 0);

    // ---- FF-09 ------------------------------------------------------------------
    ff_step("FF-09", "START=1 with an empty TX FIFO: no frame");
    do_reset();
    fifo_cfg();
    apb_wr(ADDR_CTRL, ctrl_val | 32'h1);
    wait_clks(60);
    check_lock("START=1, TX empty", 0, 0);
    apb_rd(ADDR_IRQ_STAT, d);
    ff_chk(d[2] == 1'b0, $sformatf("IRQ_STAT[2] (transfer done) not set without a frame, IRQ_STAT = 0x%08h", d));
    apb_wr(ADDR_CTRL, ctrl_val);

    // ---- FF-10 ------------------------------------------------------------------
    ff_step("FF-10", "Chip select 1: slave FIFOs are not used (slave is wired to chip select 0 only)");
    do_reset();
    fifo_cfg(2'd1);
    push(2, 8'hC0);
    check_lock("2 bytes queued", 2, 0);
    run_start();
    check_all("after 2 frames on CS1", 0, 2, 2, 0);
    apb_rd(ADDR_RX_DATA, d);
    apb_rd(ADDR_RX_DATA, d);
    check_all("master RX drained", 0, 0, 2, 0);

    // ---- FF-11 ------------------------------------------------------------------
        // ---- FF-11 ------------------------------------------------------------------
    ff_step("FF-11", "Reset flushes all four FIFOs");
    do_reset();
    fifo_cfg();
    send_n(2, 8'hD0);
    check_lock("2 frames received", 0, 2);
    push(3, 8'hE0);
    check_lock("2 received + 3 queued", 3, 2);
    do_reset();
    check_lock("all four FIFOs after reset", 0, 0);

    // ---- FF-12 ------------------------------------------------------------------
    ff_step("FF-12",
            "Multi-byte transfer with CS_INTER_BYTE=1");

    do_reset();
    fifo_cfg(2'd0, 1'b1);

    four = '{8'h51, 8'h62, 8'h73, 8'h84};

    foreach (four[i])
      apb_wr(ADDR_TX_DATA, {24'h0, four[i]});

    check_lock("CS_INTER_BYTE=1: 4 bytes queued", 4, 0);

    run_start();

    check_lock("CS_INTER_BYTE=1: after 4 frames", 0, 4);

    for (int unsigned i = 0; i < 4; i++) begin
      apb_rd(ADDR_RX_DATA, rd);

      ff_eqh(
        $sformatf("CS_INTER_BYTE=1: RX_DATA read %0d", i),
        rd[7:0],
        four[i]
      );

      wait_clks(10);
      sample_master();
      sample_slave();

      ff_eqh(
        $sformatf("CS_INTER_BYTE=1: slave RX data %0d", i),
        s_rx_head,
        four[i]
      );

      ff_eq(
        $sformatf("CS_INTER_BYTE=1: master RX level after read %0d", i + 1),
        m_rx_cnt,
        4 - (i + 1)
      );

      ff_eq(
        $sformatf("CS_INTER_BYTE=1: slave RX level after read %0d", i + 1),
        s_rx_cnt,
        4 - (i + 1)
      );
    end

    check_lock("CS_INTER_BYTE=1: RX FIFOs drained", 0, 0);

    `uvm_info("FIFO",
              $sformatf("FIFO SEQUENCE SUMMARY: %0d checks, %0d failed",
                        n_chk, n_fail),
              UVM_LOW)
  endtask

endclass


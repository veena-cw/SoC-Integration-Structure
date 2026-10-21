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
//  Description: All virtual sequences: base helpers + RAL runner + smoke, register, mode, clock divider, CS, burst, FIFO, interrupt, reset (APB and SPI) and random scenarios
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

class apb_spi_smoke_vseq extends apb_spi_base_vseq;

  `uvm_object_utils(apb_spi_smoke_vseq)

  function new(string name = "apb_spi_smoke_vseq");
    super.new(name);
  endfunction

  task body();
    bit [31:0] d;
    bit [7:0]  q[$];

    apb_rd(ADDR_ID, d);       expect_eq("ID", d, ID_VALUE);
    apb_rd(ADDR_VERSION, d);  expect_eq("VERSION", d, VERSION_VALUE);
    apb_wr(ADDR_SCRATCH0, 32'hDEAD_BEEF);
    apb_rd(ADDR_SCRATCH0, d); expect_eq("SCRATCH0", d, 32'hDEAD_BEEF);

    spi_config(2'b00, 1'b0, 2, 2'd0, 3, 2, 1'b0);
    q.push_back(8'hA5);
    spi_send(q);
    spi_read_rx(1);
  endtask

endclass

class apb_spi_reg_vseq extends apb_spi_base_vseq;

  `uvm_object_utils(apb_spi_reg_vseq)

  bit do_rw = 1'b1;   // 0: reset-value reads only

  function new(string name = "apb_spi_reg_vseq");
    super.new(name);
  endfunction

  task read_all();
    bit [31:0] d;
    for (int unsigned i = 0; i < 16; i++) apb_rd(i * 4, d);
  endtask

  task walk_reg(bit [31:0] addr, bit [31:0] keep_mask);
    bit [31:0] d, p;
    for (int unsigned i = 0; i < 32; i++) begin
      p = (32'h1 << i) & keep_mask;
      apb_wr(addr, p);  apb_rd(addr, d);  expect_eq($sformatf("walk-1 @0x%02h bit%0d", addr[7:0], i), d, p);
      p = (~(32'h1 << i)) & keep_mask;
      apb_wr(addr, p);  apb_rd(addr, d);  expect_eq($sformatf("walk-0 @0x%02h bit%0d", addr[7:0], i), d, p);
    end
  endtask

  task body();
    bit [31:0] d;
    bit        err;
    bit [31:0] bad_addr[$];

    // 1. reset / default values of every register
    read_all();
    if (!do_rw) return;

    // 2. walking ones / zeros on the RW registers (START bit excluded from CTRL)
    walk_reg(ADDR_CTRL,     32'hFFFF_FFFE);
    apb_wr(ADDR_CTRL, 32'h0);
    walk_reg(ADDR_IRQ_MASK, 32'hFFFF_FFFF);
    walk_reg(ADDR_CLK_DIV,  32'hFFFF_FFFF);
    walk_reg(ADDR_SCRATCH0, 32'hFFFF_FFFF);
    walk_reg(ADDR_SCRATCH1, 32'hFFFF_FFFF);
    walk_reg(ADDR_SCRATCH2, 32'hFFFF_FFFF);
    walk_reg(ADDR_SCRATCH3, 32'hFFFF_FFFF);
    walk_reg(ADDR_SCRATCH4, 32'hFFFF_FFFF);
    walk_reg(ADDR_SCRATCH5, 32'hFFFF_FFFF);
    apb_wr(ADDR_CLK_DIV, 32'h0);
    apb_wr(ADDR_IRQ_MASK, 32'h0);

    // 3. TX_DATA read-back (one byte is also queued in the TX FIFO, START is 0)
    apb_wr(ADDR_TX_DATA, 32'h5A5A_5A5A);
    apb_rd(ADDR_TX_DATA, d);  expect_eq("TX_DATA read-back", d, 32'h5A5A_5A5A);
    do_reset();               // flush the queued byte and return every register to its reset value

    // 4. writes to read-only registers must be ignored (no PSLVERR, no change)
    apb_wr(ADDR_STATUS,   32'hFFFF_FFFF);
    apb_wr(ADDR_FIFO_LVL, 32'hFFFF_FFFF);
    apb_wr(ADDR_RX_DATA,  32'hFFFF_FFFF);
    apb_wr(ADDR_ID,       32'hFFFF_FFFF);
    apb_wr(ADDR_VERSION,  32'hFFFF_FFFF);
    apb_rd(ADDR_ID, d);       expect_eq("ID after write", d, ID_VALUE);
    apb_rd(ADDR_VERSION, d);  expect_eq("VERSION after write", d, VERSION_VALUE);
    apb_rd(ADDR_STATUS, d);
    apb_rd(ADDR_FIFO_LVL, d);

    // 5. invalid addresses: PSLVERR=1 and read data 0
    bad_addr = '{32'h0000_0040, 32'h0000_0044, 32'h0000_0100, 32'h0000_FFFC,
                 32'h0000_0001, 32'h0000_0002, 32'h0000_003D, 32'h0000_8000};
    foreach (bad_addr[i]) begin
      apb_rd_err(bad_addr[i], d, err);
      if (!err) `uvm_error("VSEQ_CHECK", $sformatf("read of invalid address 0x%08h did not raise PSLVERR", bad_addr[i]))
      expect_eq($sformatf("invalid read data @0x%08h", bad_addr[i]), d, 32'h0);
      apb_wr_err(bad_addr[i], 32'hFFFF_FFFF, err);
      if (!err) `uvm_error("VSEQ_CHECK", $sformatf("write to invalid address 0x%08h did not raise PSLVERR", bad_addr[i]))
    end

    // 6. only PADDR[15:0] is decoded: an address alias reaches the same register
    apb_wr(32'h0001_0028, 32'h1234_5678);
    apb_rd(ADDR_SCRATCH0, d);  expect_eq("SCRATCH0 via alias write", d, 32'h1234_5678);
    apb_rd(32'hABCD_002C, d);  // alias of SCRATCH1 (value checked by the scoreboard)
  endtask

endclass

class apb_spi_mode_vseq extends apb_spi_base_vseq;

  `uvm_object_utils(apb_spi_mode_vseq)

  function new(string name = "apb_spi_mode_vseq");
    super.new(name);
  endfunction

  task body();
    bit [7:0] q[$];
    for (int unsigned m = 0; m < 4; m++) begin
      for (int unsigned l = 0; l < 2; l++) begin
        spi_config(m[1:0], l[0], 2, 2'd0, 3, 2, 1'b0);
        q = '{8'hA5, 8'h5A, 8'hFF, 8'h00, 8'h81, 8'h3C};
        spi_send(q);
        spi_read_rx(q.size());
      end
    end
  endtask

endclass

class apb_spi_clk_div_vseq extends apb_spi_base_vseq;

  `uvm_object_utils(apb_spi_clk_div_vseq)

  function new(string name = "apb_spi_clk_div_vseq");
    super.new(name);
  endfunction

  task body();
    bit [7:0]    q[$];
    int unsigned divs[$];
    divs = '{0, 1, 2, 3, 4, 5, 7, 8, 15, 31};
    foreach (divs[i]) begin
      spi_config((i % 2 == 0) ? 2'b00 : 2'b11, 1'b0, divs[i], 2'd0, 3, 2, 1'b0);
      q = '{8'hA5, 8'h3C};
      spi_send(q);
      if (divs[i] == 0) do_reset();     // at CLK_DIV=0 the slave cannot track SCK (RTL note): do not use the RX data
      else              spi_read_rx(q.size());
    end
  endtask

endclass

class apb_spi_cs_select_vseq extends apb_spi_base_vseq;

  `uvm_object_utils(apb_spi_cs_select_vseq)

  function new(string name = "apb_spi_cs_select_vseq");
    super.new(name);
  endfunction

  task body();
    bit [7:0] q[$];
    for (int unsigned cs = 0; cs < 4; cs++) begin
      for (int unsigned m = 0; m < 4; m += 2) begin
        spi_config(m[1:0], 1'b0, 2, cs[1:0], 3, 2, 1'b0);
        q = '{8'hA5, 8'h5A};
        spi_send(q);
        spi_read_rx(q.size());
      end
    end
  endtask

endclass

class apb_spi_cs_timing_vseq extends apb_spi_base_vseq;

  `uvm_object_utils(apb_spi_cs_timing_vseq)

  function new(string name = "apb_spi_cs_timing_vseq");
    super.new(name);
  endfunction

  task body();
    bit [7:0]    q[$];
    int unsigned setups[$];
    int unsigned holds[$];
    setups = '{0, 1, 2, 3, 4, 8, 16, 255};
    holds  = '{0, 1, 2, 4, 8, 16, 255};
    q = '{8'hC3};
    foreach (setups[i]) begin
      spi_config(2'b00, 1'b0, 1, 2'd0, setups[i], 2, 1'b0);
      spi_send(q);
      spi_read_rx(1);
    end
    foreach (holds[i]) begin
      spi_config(2'b11, 1'b0, 1, 2'd0, 3, holds[i], 1'b0);
      spi_send(q);
      spi_read_rx(1);
    end
  endtask

endclass

class apb_spi_burst_vseq extends apb_spi_base_vseq;

  `uvm_object_utils(apb_spi_burst_vseq)

  function new(string name = "apb_spi_burst_vseq");
    super.new(name);
  endfunction

  task body();
    bit [7:0]    q[$];
    int unsigned sizes[$];
    sizes = '{1, 2, 3, 4, 8, 16};
    foreach (sizes[s]) begin
      for (int unsigned inter = 0; inter < 2; inter++) begin
        for (int unsigned m = 0; m < 4; m += 3) begin
          spi_config(m[1:0], 1'b0, 2, 2'd0, 3, 2, inter[0]);
          q.delete();
          for (int unsigned n = 0; n < sizes[s]; n++) q.push_back(8'(8'h11 * n + 8'h07));
          spi_send(q);
          spi_read_rx(q.size());
        end
      end
    end
  endtask

endclass

class apb_spi_fifo_vseq extends apb_spi_base_vseq;

  `uvm_object_utils(apb_spi_fifo_vseq)

  function new(string name = "apb_spi_fifo_vseq");
    super.new(name);
  endfunction

  task body();
    bit [31:0] st, lvl;
    bit [7:0]  q[$];

    do_reset();
    spi_config(2'b00, 1'b0, 2, 2'd0, 3, 2, 1'b0);

    // fill the TX FIFO (START stays 0): 16 entries, then 3 writes that must be dropped
    for (int unsigned i = 0; i < 16; i++) apb_wr(ADDR_TX_DATA, 32'(i + 1));
    wait_clks(8);
    apb_rd(ADDR_STATUS, st);    if (!st[2]) `uvm_error("VSEQ_CHECK", "STATUS.tx_full not set with 16 bytes queued")
    for (int unsigned i = 0; i < 3; i++) apb_wr(ADDR_TX_DATA, 32'hE0 + i);
    wait_clks(8);
    apb_rd(ADDR_FIFO_LVL, lvl); expect_eq("TX level after overflow writes", lvl[4:0], 32'd16);

    // transmit all 16: the RX FIFO becomes full
    apb_wr(ADDR_CTRL, ctrl_val | 32'h1);
    spi_wait_idle();
    apb_wr(ADDR_CTRL, ctrl_val);
    wait_clks(8);
    apb_rd(ADDR_STATUS, st);    if (!st[4]) `uvm_error("VSEQ_CHECK", "STATUS.rx_full not set after 16 received bytes")
    apb_rd(ADDR_FIFO_LVL, lvl); expect_eq("RX level when full", lvl[20:16], 32'd16);
    expect_eq("TX level after transmit", lvl[4:0], 32'd0);

    // two more bytes while the RX FIFO is full: received data is dropped, level stays 16
    q = '{8'h5A, 8'hA5};
    spi_send(q);
    wait_clks(8);
    apb_rd(ADDR_FIFO_LVL, lvl); expect_eq("RX level after overflow", lvl[20:16], 32'd16);

    // drain
    spi_read_rx(16);
    wait_clks(8);
    apb_rd(ADDR_FIFO_LVL, lvl); expect_eq("RX level after drain", lvl[20:16], 32'd0);
    apb_rd(ADDR_STATUS, st);    if (!st[3]) `uvm_error("VSEQ_CHECK", "STATUS.rx_empty not set after draining the RX FIFO")
  endtask

endclass

class apb_spi_irq_vseq extends apb_spi_base_vseq;

  `uvm_object_utils(apb_spi_irq_vseq)

  function new(string name = "apb_spi_irq_vseq");
    super.new(name);
  endfunction

  task body();
    bit [31:0] d;
    bit [7:0]  q[$];

    do_reset();
    wait_clks(8);

    // idle after reset: TX FIFO empty -> IRQ_STAT[0]; nothing else pending
    apb_rd(ADDR_IRQ_STAT, d);
    if (!d[0])       `uvm_error("VSEQ_CHECK", $sformatf("IRQ_STAT[0] (tx_empty) not set after reset: 0x%08h", d))
    if (d[3:1] != 0) `uvm_error("VSEQ_CHECK", $sformatf("unexpected IRQ_STAT bits after reset: 0x%08h", d))

    apb_wr(ADDR_IRQ_MASK, 32'hF);
    apb_rd(ADDR_IRQ_MASK, d);  expect_eq("IRQ_MASK", d, 32'hF);

    // one transfer -> done pulse sets IRQ_STAT[2]
    spi_config(2'b00, 1'b0, 2, 2'd0, 3, 2, 1'b0);
    q = '{8'hA5};
    spi_send(q);
    spi_read_rx(1);
    apb_rd(ADDR_IRQ_STAT, d);
    if (!d[2]) `uvm_error("VSEQ_CHECK", $sformatf("IRQ_STAT[2] (done) not set after a transfer: 0x%08h", d))

    // write-one-to-clear: writing 0 must not clear anything
    apb_wr(ADDR_IRQ_STAT, 32'h0);
    apb_rd(ADDR_IRQ_STAT, d);
    if (!d[2]) `uvm_error("VSEQ_CHECK", $sformatf("IRQ_STAT[2] cleared by writing 0 (W1C violated): 0x%08h", d))

    // writing 1 to bit 2 clears it
    apb_wr(ADDR_IRQ_STAT, 32'h4);
    apb_rd(ADDR_IRQ_STAT, d);
    if (d[2])  `uvm_error("VSEQ_CHECK", $sformatf("IRQ_STAT[2] not cleared by writing 1: 0x%08h", d))

    // RX overrun: 16 bytes without reading -> RX FIFO full and error pulse on the last transfer
    q.delete();
    for (int unsigned i = 0; i < 16; i++) q.push_back(8'(i));
    spi_send(q);
    wait_clks(8);
    apb_rd(ADDR_IRQ_STAT, d);
    if (!d[1]) `uvm_error("VSEQ_CHECK", $sformatf("IRQ_STAT[1] (rx_full) not set: 0x%08h", d))
    if (!d[3]) `uvm_error("VSEQ_CHECK", $sformatf("IRQ_STAT[3] (error) not set after RX FIFO filled: 0x%08h", d))
    apb_wr(ADDR_IRQ_STAT, 32'h8);
    apb_rd(ADDR_IRQ_STAT, d);
    if (d[3])  `uvm_error("VSEQ_CHECK", $sformatf("IRQ_STAT[3] not cleared by writing 1: 0x%08h", d))
    spi_read_rx(16);
  endtask

endclass

class apb_spi_reset_apb_vseq extends apb_spi_base_vseq;

  `uvm_object_utils(apb_spi_reset_apb_vseq)

  function new(string name = "apb_spi_reset_apb_vseq");
    super.new(name);
  endfunction

  task body();
    bit [31:0] d;
    int unsigned aborted;

    // 1. single write interrupted by reset at different clock phases
    for (int unsigned k = 0; k < 6; k++) begin
      fork
        apb_wr(ADDR_SCRATCH0, 32'hC0DE_0000 | k);
        do_reset(k, 3);
      join
      apb_rd(ADDR_SCRATCH0, d);  expect_eq($sformatf("SCRATCH0 after reset (delay %0d)", k), d, 32'h0);
    end

    // 2. single read interrupted by reset
    apb_wr(ADDR_SCRATCH1, 32'hFACE_B00C);
    for (int unsigned k = 0; k < 4; k++) begin
      fork
        apb_rd(ADDR_SCRATCH1, d);
        do_reset(k, 4);
      join
      apb_rd(ADDR_SCRATCH1, d);  expect_eq($sformatf("SCRATCH1 after reset (delay %0d)", k), d, 32'h0);
      apb_wr(ADDR_SCRATCH1, 32'hFACE_B00C);
    end

    // 3. back-to-back writes with a reset in the middle: transfers after the reset must complete
    aborted = 0;
    fork
      begin
        apb_spi_apb_write_sequence w;
        for (int unsigned i = 0; i < 8; i++) begin
          w = apb_spi_apb_write_sequence::type_id::create("w");
          w.addr = ADDR_SCRATCH2;
          w.data = 32'h1000_0000 + i;
          w.start(p_sequencer.apb_sqr);
          if (w.aborted) aborted++;
        end
      end
      do_reset(5, 3);
    join
    `uvm_info("VSEQ", $sformatf("%0d of 8 back-to-back writes were aborted by the reset", aborted), UVM_LOW)
    apb_wr(ADDR_SCRATCH3, 32'hA5A5_A5A5);
    apb_rd(ADDR_SCRATCH3, d);  expect_eq("SCRATCH3 write/read after reset", d, 32'hA5A5_A5A5);

    // 4. reset while the bus is idle, and a long reset
    do_reset(0, 2);
    apb_rd(ADDR_SCRATCH3, d);  expect_eq("SCRATCH3 after idle reset", d, 32'h0);
    do_reset(0, 12);
    apb_rd(ADDR_ID, d);        expect_eq("ID after long reset", d, ID_VALUE);
  endtask

endclass

class apb_spi_reset_xfer_vseq extends apb_spi_base_vseq;

  `uvm_object_utils(apb_spi_reset_xfer_vseq)

  function new(string name = "apb_spi_reset_xfer_vseq");
    super.new(name);
  endfunction

  task body();
    bit [31:0]   d;
    bit [7:0]    q[$];
    int unsigned delays[$];
    delays = '{8, 25, 45, 70, 110};

    for (int unsigned m = 0; m < 4; m += 3) begin
      foreach (delays[i]) begin
        // start a 4-byte transfer, reset while it is running
        spi_config(m[1:0], (m == 3), 2, 2'd0, 3, 2, 1'b0);
        for (int unsigned n = 0; n < 4; n++) apb_wr(ADDR_TX_DATA, 32'h30 + n);
        apb_wr(ADDR_CTRL, ctrl_val | 32'h1);
        wait_clks(delays[i]);
        do_reset(0, 4);
        wait_clks(4);

        // everything must be back at its reset value
        apb_rd(ADDR_CTRL, d);      expect_eq("CTRL after reset", d, 32'h0);
        apb_rd(ADDR_FIFO_LVL, d);  expect_eq("FIFO_LVL after reset", d, 32'h0);
        apb_rd(ADDR_STATUS, d);
        if (!d[1] || d[0]) `uvm_error("VSEQ_CHECK", $sformatf("STATUS not idle/empty after reset: 0x%08h", d))

        // a fresh transfer must work
        spi_config(m[1:0], 1'b0, 2, 2'd0, 3, 2, 1'b0);
        q = '{8'h3C, 8'hC3};
        spi_send(q);
        spi_read_rx(q.size());
      end
    end

    // reset while CS is held between bytes (inter-byte mode)
    spi_config(2'b00, 1'b0, 2, 2'd0, 3, 2, 1'b1);
    for (int unsigned n = 0; n < 4; n++) apb_wr(ADDR_TX_DATA, 32'h50 + n);
    apb_wr(ADDR_CTRL, ctrl_val | 32'h1);
    wait_clks(90);
    do_reset(0, 4);
    wait_clks(4);
    apb_rd(ADDR_STATUS, d);
    if (!d[1] || d[0]) `uvm_error("VSEQ_CHECK", $sformatf("STATUS not idle/empty after reset (inter-byte): 0x%08h", d))
  endtask

endclass

class apb_spi_random_vseq extends apb_spi_base_vseq;

  `uvm_object_utils(apb_spi_random_vseq)

  int unsigned num_iter = 25;

  rand bit [1:0]    mode;
  rand bit          lsb;
  rand bit [1:0]    cs;
  rand bit          inter;
  rand int unsigned div;
  rand int unsigned setup;
  rand int unsigned hold;
  rand int unsigned nbytes;

  constraint c_cfg {
    div    inside {[1:12]};
    setup  inside {[0:8]};
    hold   inside {[0:8]};
    nbytes inside {[1:8]};
  }

  function new(string name = "apb_spi_random_vseq");
    super.new(name);
  endfunction

  task body();
    bit [7:0]  q[$];
    bit [31:0] d, v;
    int unsigned pick;

    for (int unsigned it = 0; it < num_iter; it++) begin
      if (!randomize()) `uvm_fatal("RAND", "randomize() failed")
      spi_config(mode, lsb, div, cs, setup, hold, inter);
      q.delete();
      for (int unsigned n = 0; n < nbytes; n++) q.push_back(8'($urandom_range(0, 255)));
      spi_send(q);
      spi_read_rx(q.size());

      pick = $urandom_range(0, 9);
      if (pick < 2) begin                   // random scratch traffic
        v = $urandom();
        apb_wr(ADDR_SCRATCH4, v);
        apb_rd(ADDR_SCRATCH4, d);
        expect_eq("SCRATCH4 random read-back", d, v);
      end else if (pick == 9) begin         // occasional reset
        do_reset($urandom_range(0, 3), $urandom_range(2, 8));
      end
    end
  endtask

endclass

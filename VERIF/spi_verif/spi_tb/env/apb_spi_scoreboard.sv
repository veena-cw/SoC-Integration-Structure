//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_scoreboard
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Scoreboard: APB register model + TX/RX FIFO model checked against the master/slave monitors, reset-aware
//=================================================================================

class apb_spi_scoreboard extends uvm_scoreboard;

  `uvm_component_utils(apb_spi_scoreboard)

  uvm_analysis_imp_apb       #(apb_seq_item,        apb_spi_scoreboard) apb_imp;
  uvm_analysis_imp_mst       #(spi_master_seq_item, apb_spi_scoreboard) mst_imp;
  uvm_analysis_imp_mst_start #(spi_master_seq_item, apb_spi_scoreboard) mst_start_imp;
  uvm_analysis_imp_slv       #(spi_slave_seq_item,  apb_spi_scoreboard) slv_imp;
  uvm_analysis_imp_rst       #(reset_seq_item,      apb_spi_scoreboard) rst_imp;

  // time after the last FIFO/SPI activity before STATUS / FIFO_LVL are compared exactly
  localparam time QUIET_WINDOW = 6 * CLK_PERIOD;

  // ---------------- reference model state ----------------
  bit [31:0]  m_ctrl;
  bit [31:0]  m_irq_mask;
  bit [31:0]  m_clk_div;
  bit [31:0]  m_tx_data;
  bit [31:0]  m_scratch [6];

  bit [7:0]   exp_tx_q   [$];   // bytes in the master TX FIFO
  bit [7:0]   exp_rx_q   [$];   // bytes in the master RX FIFO
  bit [7:0]   cur_tx_exp;
  bit         cur_tx_valid;
  bit [7:0]   mst_cs0_q  [$];   // bytes sent to the slave (CS0 frames) waiting for the slave RX probe
  bit [7:0]   slv_dec_q  [$];   // slave pin-level decoded words waiting for the slave RX probe
  bit [7:0]   slv_probe_q[$];   // words read from the slave RX FIFO
  bit         frame_active;
  time        last_activity;

  apb_spi_ral_block ral_model;    // set by the env: used by the RAL mirror checks below

  // ---------------- statistics ----------------
  int unsigned n_apb_wr, n_apb_rd, n_apb_abort, n_mst_bytes, n_slv_bytes, n_resets;
  int unsigned n_tx_drop, n_rx_drop, n_chk_pass, n_chk_fail;

  function new(string name = "apb_spi_scoreboard", uvm_component parent = null);
    super.new(name, parent);
    apb_imp       = new("apb_imp", this);
    mst_imp       = new("mst_imp", this);
    mst_start_imp = new("mst_start_imp", this);
    slv_imp       = new("slv_imp", this);
    rst_imp       = new("rst_imp", this);
  endfunction

  // ------------------------------------------------------------------
  function void check(bit cond, string id, string msg);
    if (cond) begin
      n_chk_pass++;
    end else begin
      n_chk_fail++;
      `uvm_error(id, msg)
    end
  endfunction

  function bit addr_valid(bit [15:0] a);
    return (a[1:0] == 2'b00) && (a <= 16'h003C);   // DUT decodes PADDR[15:0] only
  endfunction

  function void reset_model();
    m_ctrl = '0; m_irq_mask = '0; m_clk_div = '0; m_tx_data = '0;
    foreach (m_scratch[i]) m_scratch[i] = '0;
    exp_tx_q.delete(); exp_rx_q.delete();
    mst_cs0_q.delete(); slv_dec_q.delete(); slv_probe_q.delete();
    cur_tx_valid = 1'b0;
    frame_active = 1'b0;
    last_activity = $time;
  endfunction

  function void start_of_simulation_phase(uvm_phase phase);
    super.start_of_simulation_phase(phase);
    reset_model();
  endfunction

  function bit is_quiet();
    if (frame_active) return 1'b0;
    if (m_ctrl[0] && exp_tx_q.size() > 0) return 1'b0;
    if (($time - last_activity) < QUIET_WINDOW) return 1'b0;
    return 1'b1;
  endfunction

  // ------------------------------------------------------------------
  // APB monitor
  // ------------------------------------------------------------------
  function void write_apb(apb_seq_item t);
    bit [15:0] a;
    bit        valid;
    if (t.aborted_by_reset) begin
      n_apb_abort++;
      return;
    end
    a     = t.paddr[15:0];
    valid = addr_valid(a);
    check(t.pslverr == !valid, "SB_APB_ERR",
          $sformatf("PSLVERR=%0b but address 0x%08h is %s", t.pslverr, t.paddr, valid ? "valid" : "invalid"));
    if (t.pwrite) n_apb_wr++; else n_apb_rd++;
    if (!valid) begin
      if (!t.pwrite) check(t.prdata == 32'h0, "SB_APB_RD", $sformatf("read of invalid address 0x%08h returned 0x%08h (expected 0)", t.paddr, t.prdata));
      return;
    end
    if (t.pwrite) apb_write_model(a, t.pwdata);
    else          apb_read_check(a, t.prdata);
  endfunction

  function void apb_write_model(bit [15:0] a, bit [31:0] d);
    case (a)
      ADDR_CTRL:     m_ctrl     = d;
      ADDR_IRQ_MASK: m_irq_mask = d;
      ADDR_CLK_DIV:  m_clk_div  = d;
      ADDR_TX_DATA: begin
        m_tx_data = d;
        last_activity = $time;
        if (exp_tx_q.size() < FIFO_DEPTH) exp_tx_q.push_back(d[7:0]);
        else                              n_tx_drop++;
      end
      ADDR_SCRATCH0: m_scratch[0] = d;
      ADDR_SCRATCH1: m_scratch[1] = d;
      ADDR_SCRATCH2: m_scratch[2] = d;
      ADDR_SCRATCH3: m_scratch[3] = d;
      ADDR_SCRATCH4: m_scratch[4] = d;
      ADDR_SCRATCH5: m_scratch[5] = d;
      default: ;   // STATUS / RX_DATA / FIFO_LVL / ID / VERSION: writes are ignored; IRQ_STAT checked by vseq
    endcase
  endfunction

  function void apb_read_check(bit [15:0] a, bit [31:0] d);
    string nm;
    case (a)
      ADDR_CTRL:     check(d == m_ctrl,     "SB_REG", $sformatf("CTRL read 0x%08h expected 0x%08h", d, m_ctrl));
      ADDR_IRQ_MASK: check(d == m_irq_mask, "SB_REG", $sformatf("IRQ_MASK read 0x%08h expected 0x%08h", d, m_irq_mask));
      ADDR_CLK_DIV:  check(d == m_clk_div,  "SB_REG", $sformatf("CLK_DIV read 0x%08h expected 0x%08h", d, m_clk_div));
      ADDR_TX_DATA:  check(d == m_tx_data,  "SB_REG", $sformatf("TX_DATA read 0x%08h expected 0x%08h", d, m_tx_data));
      ADDR_SCRATCH0: check(d == m_scratch[0], "SB_REG", $sformatf("SCRATCH0 read 0x%08h expected 0x%08h", d, m_scratch[0]));
      ADDR_SCRATCH1: check(d == m_scratch[1], "SB_REG", $sformatf("SCRATCH1 read 0x%08h expected 0x%08h", d, m_scratch[1]));
      ADDR_SCRATCH2: check(d == m_scratch[2], "SB_REG", $sformatf("SCRATCH2 read 0x%08h expected 0x%08h", d, m_scratch[2]));
      ADDR_SCRATCH3: check(d == m_scratch[3], "SB_REG", $sformatf("SCRATCH3 read 0x%08h expected 0x%08h", d, m_scratch[3]));
      ADDR_SCRATCH4: check(d == m_scratch[4], "SB_REG", $sformatf("SCRATCH4 read 0x%08h expected 0x%08h", d, m_scratch[4]));
      ADDR_SCRATCH5: check(d == m_scratch[5], "SB_REG", $sformatf("SCRATCH5 read 0x%08h expected 0x%08h", d, m_scratch[5]));
      ADDR_ID:       check(d == ID_VALUE,      "SB_REG", $sformatf("ID read 0x%08h expected 0x%08h", d, ID_VALUE));
      ADDR_VERSION:  check(d == VERSION_VALUE, "SB_REG", $sformatf("VERSION read 0x%08h expected 0x%08h", d, VERSION_VALUE));
      ADDR_IRQ_STAT: check(d[31:4] == '0, "SB_REG", $sformatf("IRQ_STAT reserved bits non-zero: 0x%08h", d));
      ADDR_STATUS:   check_status(d);
      ADDR_FIFO_LVL: check_fifo_lvl(d);
      ADDR_RX_DATA:  check_rx_read(d);
      default: ;
    endcase
  endfunction

  // STATUS = {27'h0, rx_full, rx_empty, tx_full, tx_empty, busy}
  function void check_status(bit [31:0] d);
    bit [4:0] exp;
    check(d[31:5] == '0, "SB_STATUS", $sformatf("STATUS reserved bits non-zero: 0x%08h", d));
    if (is_quiet()) begin
      exp[0] = 1'b0;
      exp[1] = (exp_tx_q.size() == 0);
      exp[2] = (exp_tx_q.size() == FIFO_DEPTH);
      exp[3] = (exp_rx_q.size() == 0);
      exp[4] = (exp_rx_q.size() == FIFO_DEPTH);
      check(d[4:0] == exp, "SB_STATUS",
            $sformatf("STATUS[4:0]=0x%02h expected 0x%02h (tx=%0d rx=%0d)", d[4:0], exp, exp_tx_q.size(), exp_rx_q.size()));
    end
  endfunction

  // FIFO_LVL = {11'h0, rx_count[4:0], 11'h0, tx_count[4:0]}
  function void check_fifo_lvl(bit [31:0] d);
    check(d[15:5] == '0 && d[31:21] == '0, "SB_FIFO_LVL", $sformatf("FIFO_LVL reserved bits non-zero: 0x%08h", d));
    if (is_quiet()) begin
      check(d[4:0]   == exp_tx_q.size(), "SB_FIFO_LVL", $sformatf("TX level %0d expected %0d", d[4:0],   exp_tx_q.size()));
      check(d[20:16] == exp_rx_q.size(), "SB_FIFO_LVL", $sformatf("RX level %0d expected %0d", d[20:16], exp_rx_q.size()));
    end
  endfunction

  // RX_DATA read: pops one byte from the master RX FIFO and must return that byte
  function void check_rx_read(bit [31:0] d);
    bit [7:0] exp;
    check(d[31:8] == '0, "SB_RX_DATA", $sformatf("RX_DATA upper bits non-zero: 0x%08h", d));
    last_activity = $time;
    if (exp_rx_q.size() > 0) begin
      exp = exp_rx_q.pop_front();
      check(d[7:0] == exp, "SB_RX_DATA", $sformatf("RX_DATA read 0x%02h but the oldest received byte is 0x%02h", d[7:0], exp));
    end else begin
      `uvm_info("SB_RX_DATA", "RX_DATA read while the RX FIFO model is empty: data not checked", UVM_HIGH)
    end
  endfunction

  // ------------------------------------------------------------------
  // SPI master monitor
  // ------------------------------------------------------------------
  function void write_mst_start(spi_master_seq_item t);
    frame_active  = 1'b1;
    last_activity = $time;
    if (exp_tx_q.size() > 0) begin
      cur_tx_exp   = exp_tx_q.pop_front();
      cur_tx_valid = 1'b1;
    end else begin
      cur_tx_valid = 1'b0;
      check(1'b0, "SB_MST_TX", "master started a byte but the TX FIFO model is empty");
    end
  endfunction

  function void write_mst(spi_master_seq_item t);
    n_mst_bytes++;
    last_activity = $time;
    if (cur_tx_valid)
      check(t.mosi_data == cur_tx_exp, "SB_MST_TX",
            $sformatf("MOSI byte 0x%02h expected 0x%02h (%s)", t.mosi_data, cur_tx_exp, t.convert2string()));
    check(t.edge_count == 2*DATA_WIDTH && t.bit_count == DATA_WIDTH, "SB_MST_PROTO",
          $sformatf("byte had %0d SCK edges / %0d sampled bits", t.edge_count, t.bit_count));
    check(t.cs_sel == t.cs_sel_cfg, "SB_MST_CS",
          $sformatf("asserted CS%0d but CTRL.CS_SEL[1:0]=%0d", t.cs_sel, t.cs_sel_cfg));
    check(t.hp_min == t.hp_max && t.hp_min == (t.clk_div + 1), "SB_MST_SCK",
          $sformatf("SCK half period %0d..%0d clocks, expected %0d (CLK_DIV=%0d)", t.hp_min, t.hp_max, t.clk_div + 1, t.clk_div));
    if (t.byte_idx == 0)
      check(t.setup_clks == (t.cs_setup + t.clk_div + 3), "SB_MST_SETUP",
            $sformatf("CS fall -> first SCK edge = %0d clocks, expected CS_SETUP+CLK_DIV+3 = %0d", t.setup_clks, t.cs_setup + t.clk_div + 3));
    if (t.last_in_burst)
      check(t.hold_clks == (t.cs_hold + 1), "SB_MST_HOLD",
            $sformatf("last SCK edge -> CS rise = %0d clocks, expected CS_HOLD+1 = %0d", t.hold_clks, t.cs_hold + 1));
    // the slave answers with the constant tied off by apb_spi_top; at CLK_DIV=0 the slave cannot keep up (RTL note)
    if (t.cs_sel == 2'd0 && t.clk_div >= 1)
      check(t.miso_data == SLAVE_TX_CONST, "SB_MST_RX",
            $sformatf("master received 0x%02h, slave presents 0x%02h", t.miso_data, SLAVE_TX_CONST));
    // RX FIFO model
    if (exp_rx_q.size() < FIFO_DEPTH) exp_rx_q.push_back(t.miso_data);
    else                              n_rx_drop++;
    // link to the slave (only chip select 0 reaches the slave)
    if (t.cs_sel == 2'd0) begin
      mst_cs0_q.push_back(t.mosi_data);
      match_slave();
    end
    if (t.last_in_burst) frame_active = 1'b0;
  endfunction

  // ------------------------------------------------------------------
  // SPI slave monitor
  // ------------------------------------------------------------------
  function void write_slv(spi_slave_seq_item t);
    if (t.kind == SLV_BYTE) begin
      n_slv_bytes++;
      check(t.edge_count == 2*DATA_WIDTH && t.bit_count == DATA_WIDTH, "SB_SLV_PROTO",
            $sformatf("slave byte had %0d SCK edges / %0d sampled bits", t.edge_count, t.bit_count));
      slv_dec_q.push_back(t.rx_data);
    end else begin
      slv_probe_q.push_back(t.rx_data);
    end
    match_slave();
  endfunction

  // slave RX FIFO word must equal what the master sent on CS0
  function void match_slave();
    bit [7:0] m, p, d;
    while (mst_cs0_q.size() > 0 && slv_probe_q.size() > 0) begin
      m = mst_cs0_q.pop_front();
      p = slv_probe_q.pop_front();
      check(p == m, "SB_SLV_RX", $sformatf("slave received 0x%02h but the master sent 0x%02h", p, m));
      if (slv_dec_q.size() > 0) begin
        d = slv_dec_q.pop_front();
        if (d != p)
          `uvm_warning("SB_SLV_MON", $sformatf("slave pin-level decode 0x%02h differs from slave RX FIFO word 0x%02h", d, p))
      end
    end
  endfunction

  // ------------------------------------------------------------------
  // Reset monitor
  // ------------------------------------------------------------------
  function void write_rst(reset_seq_item t);
    if (t.is_assert) begin
      n_resets++;
      reset_model();
      `uvm_info("SB_RST", "Reset asserted: register model, FIFO models and in-flight expectations flushed", UVM_MEDIUM)
    end
    last_activity = $time;
  endfunction

  // ------------------------------------------------------------------
  // RAL mirror checks (called by the RAL tests)
  // ------------------------------------------------------------------
  function bit reg_readable(uvm_reg rg);
    uvm_reg_field fs[$];
    rg.get_fields(fs);
    foreach (fs[i]) if (fs[i].get_access() != "WO") return 1'b1;
    return 1'b0;
  endfunction

  // after reset the mirror of every stable register must equal its hardware reset value
  task check_reset_values();
    uvm_reg        regs[$];
    uvm_reg        rg;
    uvm_reg_data_t exp_v, mir_v;
    if (ral_model == null) return;
    ral_model.get_registers(regs);
    foreach (regs[i]) begin
      rg = regs[i];
      if (is_dont_compare(rg.get_name())) continue;
      if (is_volatile(rg.get_name())) continue;
      if (has_read_side_effect(rg.get_name()) || has_write_side_effect(rg.get_name())) continue;
      if (!reg_readable(rg)) continue;
      exp_v = rg.get_reset();
      mir_v = rg.get_mirrored_value();
      check(mir_v === exp_v, "SB_RAL_RESET",
            $sformatf("RESET MISMATCH %s: mirrored=0x%0h reset=0x%0h", rg.get_name(), mir_v, exp_v));
    end
  endtask

  function void check_mirror_desired(string ctx = "");
    uvm_reg regs[$];
    if (ral_model == null) return;
    ral_model.get_registers(regs);
    foreach (regs[i])
      `uvm_info("SB_RAL", $sformatf("CHECK [%s] %s desired=0x%08h mirrored=0x%08h reset=0x%08h", ctx, regs[i].get_name(),
                regs[i].get(), regs[i].get_mirrored_value(), regs[i].get_reset()), UVM_HIGH)
  endfunction

  // ------------------------------------------------------------------
  function void check_phase(uvm_phase phase);
    super.check_phase(phase);
    if (mst_cs0_q.size() != slv_probe_q.size())
      `uvm_warning("SB_END", $sformatf("%0d master CS0 byte(s) and %0d slave RX word(s) left unmatched", mst_cs0_q.size(), slv_probe_q.size()))
  endfunction

  function void report_phase(uvm_phase phase);
    super.report_phase(phase);
    `uvm_info("SB_REPORT", $sformatf("APB wr=%0d rd=%0d aborted=%0d | SPI master bytes=%0d slave bytes=%0d | resets=%0d | TX drops=%0d RX drops=%0d | checks pass=%0d fail=%0d",
              n_apb_wr, n_apb_rd, n_apb_abort, n_mst_bytes, n_slv_bytes, n_resets, n_tx_drop, n_rx_drop, n_chk_pass, n_chk_fail), UVM_LOW)
  endfunction

endclass

// SCH_01: closed-bank read. DFI must show ACT, then RD.

// APB: refresh off, training off, tRCD = 12
class sch01_apb_seq extends uvm_sequence #(lpddr5c_apb_agent_seq_item);
  `uvm_object_utils(sch01_apb_seq)
  function new(string name = "sch01_apb_seq"); super.new(name); endfunction

  task wr(bit [15:0] a, bit [31:0] d);
    lpddr5c_apb_agent_seq_item r = lpddr5c_apb_agent_seq_item::type_id::create("r");
    start_item(r);
    r.paddr = a; r.pwdata = d; r.pwrite = 1'b1;
    finish_item(r);
  endtask

  task body();
    wr(16'h0000, 32'h0000_0000);   // CTRL0: refresh and training off
    wr(16'h0010, 32'h1E12_120C);   // TIMING0: tRCD = 12
  endtask
endclass

// AXI: one read to a bank that has never been used
class sch01_axi_seq extends uvm_sequence #(lpddr5c_axi_agent_seq_item);
  `uvm_object_utils(sch01_axi_seq)
  function new(string name = "sch01_axi_seq"); super.new(name); endfunction

  task body();
    lpddr5c_axi_agent_seq_item it = lpddr5c_axi_agent_seq_item::type_id::create("it");
    start_item(it);
    it.is_write    = 1'b0;
    it.axi_arid    = 4'h1;
    it.axi_araddr  = 32'h1080_0A00;
    it.axi_arlen   = 8'd0;
    it.axi_arsize  = 3'd4;
    it.axi_arburst = 2'b01;
    it.axi_arvalid = 1'b1;
    it.axi_rready  = 1'b1;
    finish_item(it);
  endtask
endclass

// Checker: records the first 2 DFI commands, then checks them
class sch01_checker extends uvm_component;
  `uvm_component_utils(sch01_checker)

  bit [31:0] exp_addr = 32'h1080_0A00;
  int        exp_trcd = 12;           // same value as TIMING0[7:0] above

  int        clk_cnt, n_cmd;
  bit [5:0]  cmd_ca [2];
  bit [31:0] cmd_ad [2];
  int        cmd_t  [2];

  function new(string name, uvm_component parent); super.new(name, parent); endfunction

  task run_phase(uvm_phase phase);
    forever begin
      @(negedge lpddr_tb_top.dfi_clk);
      if (!lpddr_tb_top.sys_rst_n) continue;
      clk_cnt++;
      if (lpddr_tb_top.DFI_vif.dfi_cs_n === 1'b0 &&
          lpddr_tb_top.DFI_vif.dfi_ca !== 6'h00) begin
        if (n_cmd < 2) begin
          cmd_ca[n_cmd] = lpddr_tb_top.DFI_vif.dfi_ca;
          cmd_ad[n_cmd] = lpddr_tb_top.DFI_vif.dfi_addr;
          cmd_t[n_cmd] = clk_cnt;
        end
        n_cmd++;
        `uvm_info("SCH01",
          $sformatf("DFI cmd CA=0x%0h addr=0x%08h clk=%0d",
                    lpddr_tb_top.DFI_vif.dfi_ca,
                    lpddr_tb_top.DFI_vif.dfi_addr, clk_cnt), UVM_MEDIUM)
      end
    end
  endtask

  function void check_phase(uvm_phase phase);
    if (n_cmd < 2) begin
      `uvm_error("SCH01", $sformatf("expected ACT then RD, saw %0d command(s)", n_cmd))
      return;
    end
    if (cmd_ca[0] != 6'h03) `uvm_error("SCH01", $sformatf("1st cmd = 0x%0h, expected ACT (0x3)", cmd_ca[0]))
    if (cmd_ca[1] != 6'h01) `uvm_error("SCH01", $sformatf("2nd cmd = 0x%0h, expected RD (0x1)", cmd_ca[1]))
    if (cmd_ad[0] != exp_addr || cmd_ad[1] != exp_addr)
      `uvm_error("SCH01", $sformatf("address wrong: ACT=0x%08h RD=0x%08h", cmd_ad[0], cmd_ad[1]))
    if (cmd_t[1] - cmd_t[0] < exp_trcd)
      `uvm_error("SCH01", $sformatf("ACT to RD = %0d clk, less than tRCD %0d", cmd_t[1] - cmd_t[0], exp_trcd))
    if (n_cmd > 2)
      `uvm_warning("SCH01", "extra commands after RD (finding F-01)")
  endfunction
endclass

class sch_01_test extends base_test;
  `uvm_component_utils(sch_01_test)
  sch01_checker chk;

  function new(string name = "sch_01_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    chk = sch01_checker::type_id::create("chk", this);
  endfunction

  task run_phase(uvm_phase phase);          // replaces base_test run_phase
    sch01_apb_seq apb_s = sch01_apb_seq::type_id::create("apb_s");
    sch01_axi_seq axi_s = sch01_axi_seq::type_id::create("axi_s");
    phase.raise_objection(this);
    apb_s.start(env.apb_agent.sequencer);
    #100ns;
    axi_s.start(env.axi_agent.sequencer);
    #2us;                                   // time for ACT and RD to appear
    phase.drop_objection(this);
  endtask

  function void report_phase(uvm_phase phase);
    uvm_report_server s = uvm_report_server::get_server();
    if (s.get_severity_count(UVM_ERROR) + s.get_severity_count(UVM_FATAL) == 0)
      `uvm_info("SCH_01", "*** SCH_01 PASSED ***", UVM_NONE)
    else
      `uvm_info("SCH_01", "*** SCH_01 FAILED ***", UVM_NONE)
  endfunction
endclass

// ---------------- SCH_02: row hit (two writes, same bank + same row) ----------------
// These tests check scheduler command timing; write-data beats may precede queued WR commands.

class sch02_axi_seq extends uvm_sequence #(lpddr5c_axi_agent_seq_item);
  `uvm_object_utils(sch02_axi_seq)
  function new(string name = "sch02_axi_seq"); super.new(name); endfunction

  task wr(bit [31:0] a, bit [127:0] d);
    lpddr5c_axi_agent_seq_item it = lpddr5c_axi_agent_seq_item::type_id::create("it");
    start_item(it);
    it.is_write   = 1'b1;
    it.axi_awid   = 4'h1;
    it.axi_awaddr = a;
    it.axi_awlen  = 8'd0;
    it.axi_awsize = 3'd4;
    it.axi_awburst= 2'b01;
    it.axi_wdata  = d;
    it.axi_wstrb  = 16'hFFFF;
    it.axi_wlast  = 1'b1;
    it.axi_awvalid= 1'b1;
    it.axi_wvalid = 1'b1;
    it.axi_bready = 1'b1;
    finish_item(it);
  endtask

  task body();
    wr(32'h1080_0A00, 128'h1111_1111_1111_1111_1111_1121_1111_1121);  // bank 5, row 0x1080
    wr(32'h1080_0B00, 128'h2122_2222_2222_2122_2222_2222_2222_2222);  // same bank, same row, other column
  endtask
endclass

class sch02_checker extends uvm_subscriber #(lpddr5c_dfi_agent_seq_item);
  `uvm_component_utils(sch02_checker)

  int        clk_cnt, n_cmd, n_act, n_pre;
  bit [5:0]  cmd_ca [3];
  bit [31:0] cmd_ad [3];
   int        cmd_t  [3];              // NEW: clock number of each command

  function new(string name, uvm_component parent); super.new(name, parent); endfunction

  function void write(lpddr5c_dfi_agent_seq_item t);
    if (!t.dfi_rst_n) return;
    clk_cnt++;
    if (t.dfi_cs_n == 1'b0 && t.dfi_ca != 6'h00) begin     // real command, not NOP
      if (n_cmd < 3) begin cmd_ca[n_cmd] = t.dfi_ca; cmd_ad[n_cmd] = t.dfi_addr; cmd_t[n_cmd] = clk_cnt; end
      n_cmd++;
      if (t.dfi_ca == 6'h03)                     n_act++;   // ACT
      if (t.dfi_ca == 6'h04 || t.dfi_ca == 6'h05) n_pre++;  // PRE / PREA
      `uvm_info("SCH02", $sformatf("DFI cmd CA=0x%0h addr=0x%08h", t.dfi_ca, t.dfi_addr), UVM_MEDIUM)
    end
  endfunction

  function void check_phase(uvm_phase phase);
    if (n_cmd < 3) begin
      `uvm_error("SCH02", $sformatf("expected 3 commands (ACT, WR, WR), saw %0d", n_cmd));
      return;
    end
    if (cmd_ca[0] != 6'h03) `uvm_error("SCH02", $sformatf("1st cmd = 0x%0h, expected ACT (0x3)", cmd_ca[0]))
    if (cmd_ca[1] != 6'h02) `uvm_error("SCH02", $sformatf("2nd cmd = 0x%0h, expected WR (0x2)",  cmd_ca[1]))
    if (cmd_ca[2] != 6'h02) `uvm_error("SCH02", $sformatf("3rd cmd = 0x%0h, expected WR with no ACT/PRE (row hit)", cmd_ca[2]))
    if (cmd_ad[2] != 32'h1080_0B00) `uvm_error("SCH02", $sformatf("3rd cmd address 0x%08h, expected 0x10800b00", cmd_ad[2]))
    if (n_act != 1) `uvm_error("SCH02", $sformatf("saw %0d ACT, expected exactly 1", n_act))
    if (n_pre != 0) `uvm_error("SCH02", $sformatf("saw %0d PRE, expected 0", n_pre))
      if (cmd_t[2] - cmd_t[1] < 4)
      `uvm_error("TCCD_BUG", $sformatf("WR->WR gap %0d clk < tCCD_L 4 (scheduler does not enforce tCCD)", cmd_t[2] - cmd_t[1]))
  
  endfunction
endclass

class sch_02_test extends base_test;
  `uvm_component_utils(sch_02_test)
  sch02_checker chk;

  function new(string name = "sch_02_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    chk = sch02_checker::type_id::create("chk", this);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    env.scoreboard.en_dfi_model = 1'b1;
    env.scoreboard.en_wrdata_en_check = 1'b0;
    env.scoreboard.t_ccd_l = 4;
    env.dfi_agent.monitor.ap.connect(chk.analysis_export);
  endfunction

  task run_phase(uvm_phase phase);          // replaces base_test run_phase
    sch01_apb_seq apb_s = sch01_apb_seq::type_id::create("apb_s");   // refresh/training off
    sch02_axi_seq axi_s = sch02_axi_seq::type_id::create("axi_s");
    phase.raise_objection(this);
    apb_s.start(env.apb_agent.sequencer);
    #100ns;
    axi_s.start(env.axi_agent.sequencer);
    #2us;
    phase.drop_objection(this);
  endtask

  function void report_phase(uvm_phase phase);
    uvm_report_server s = uvm_report_server::get_server();
    if (s.get_severity_count(UVM_ERROR) + s.get_severity_count(UVM_FATAL) == 0)
      `uvm_info("SCH_02", "*** SCH_02 PASSED ***", UVM_NONE)
    else
      `uvm_info("SCH_02", "*** SCH_02 FAILED ***", UVM_NONE)
  endfunction
endclass

// ---------------- SCH_03: row miss (PRE -> ACT -> WR) ----------------

class sch03_axi_seq extends sch02_axi_seq;      // reuses wr() from sch02_axi_seq
  `uvm_object_utils(sch03_axi_seq)
  int gap_ns = 0;                               // 0 = back to back, 500 = bank fully idle/open
  function new(string name = "sch03_axi_seq"); super.new(name); endfunction

  task body();
    wr(32'h1080_0A00, 128'h1111_1111_1111_1111_1111_1111_1111_1111);  // bank 5, row 0x1080
    if (gap_ns > 0) #(gap_ns * 1ns);
    wr(32'h1081_0A00, 128'h2222_2222_2222_2222_2222_2222_2222_2222);  // bank 5, row 0x1081 (row miss)
  endtask
endclass

class sch03_checker extends uvm_subscriber #(lpddr5c_dfi_agent_seq_item);
  `uvm_component_utils(sch03_checker)

  // from TIMING0 = 0x1E12120C
  int exp_trcd = 12;     // [7:0]
  int exp_trp  = 18;     // [15:8]
  int exp_tras = 18;     // [23:16]
  int exp_twr  = 16;     // scheduler default, hard coded

  int        clk_cnt, n_cmd, n_act, n_pre;
  bit [5:0]  cmd_ca [5];
  bit [31:0] cmd_ad [5];
  int        cmd_t  [5];

  function new(string name, uvm_component parent); super.new(name, parent); endfunction

  function void write(lpddr5c_dfi_agent_seq_item t);
    if (!t.dfi_rst_n) return;
    clk_cnt++;
    if (t.dfi_cs_n == 1'b0 && t.dfi_ca != 6'h00) begin
      if (n_cmd < 5) begin cmd_ca[n_cmd] = t.dfi_ca; cmd_ad[n_cmd] = t.dfi_addr; cmd_t[n_cmd] = clk_cnt; end
      n_cmd++;
      if (t.dfi_ca == 6'h03)                      n_act++;
      if (t.dfi_ca == 6'h04 || t.dfi_ca == 6'h05) n_pre++;
      `uvm_info("SCH03", $sformatf("DFI cmd CA=0x%0h addr=0x%08h clk=%0d", t.dfi_ca, t.dfi_addr, clk_cnt), UVM_MEDIUM)
    end
  endfunction

  function void check_phase(uvm_phase phase);
    if (n_cmd < 5) begin
      `uvm_error("SCH03", $sformatf("expected 5 commands (ACT WR PRE ACT WR), saw %0d", n_cmd));
      return;
    end
    // ---- order ----
    if (cmd_ca[0] != 6'h03) `uvm_error("SCH03", $sformatf("cmd0 = 0x%0h, expected ACT (0x3)", cmd_ca[0]))
    if (cmd_ca[1] != 6'h02) `uvm_error("SCH03", $sformatf("cmd1 = 0x%0h, expected WR  (0x2)", cmd_ca[1]))
    if (cmd_ca[2] != 6'h04) `uvm_error("SCH03", $sformatf("cmd2 = 0x%0h, expected PRE (0x4)", cmd_ca[2]))
    if (cmd_ca[3] != 6'h03) `uvm_error("SCH03", $sformatf("cmd3 = 0x%0h, expected ACT (0x3)", cmd_ca[3]))
    if (cmd_ca[4] != 6'h02) `uvm_error("SCH03", $sformatf("cmd4 = 0x%0h, expected WR  (0x2)", cmd_ca[4]))
    // ---- addresses ----
    if (cmd_ad[0] != 32'h1080_0A00 || cmd_ad[1] != 32'h1080_0A00)
      `uvm_error("SCH03", "first ACT/WR address is not 0x10800a00")
    if (cmd_ad[3] != 32'h1081_0A00 || cmd_ad[4] != 32'h1081_0A00)
      `uvm_error("SCH03", "second ACT/WR address is not 0x10810a00")
    if (n_act != 2) `uvm_error("SCH03", $sformatf("saw %0d ACT, expected 2", n_act))
    if (n_pre != 1) `uvm_error("SCH03", $sformatf("saw %0d PRE, expected 1", n_pre))
    // ---- timing the scheduler does enforce ----
    if (cmd_t[2] - cmd_t[0] < exp_tras)
      `uvm_error("SCH03", $sformatf("ACT->PRE = %0d clk < tRAS %0d", cmd_t[2] - cmd_t[0], exp_tras))
    if (cmd_t[3] - cmd_t[2] < exp_trp)
      `uvm_error("SCH03", $sformatf("PRE->ACT = %0d clk < tRP %0d",  cmd_t[3] - cmd_t[2], exp_trp))
    if (cmd_t[4] - cmd_t[3] < exp_trcd)
      `uvm_error("SCH03", $sformatf("ACT->WR  = %0d clk < tRCD %0d", cmd_t[4] - cmd_t[3], exp_trcd))
    // ---- tWR: expected to fail, scheduler does not enforce it (same family as TCCD_BUG) ----
    if (cmd_t[2] - cmd_t[1] < exp_twr)
      `uvm_error("TWR_BUG", $sformatf("WR->PRE = %0d clk < tWR %0d (scheduler does not enforce tWR)", cmd_t[2] - cmd_t[1], exp_twr))
  endfunction
endclass


class sch_03_test extends base_test;
  `uvm_component_utils(sch_03_test)
  sch03_checker chk;

  function new(string name = "sch_03_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    chk = sch03_checker::type_id::create("chk", this);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    env.scoreboard.en_dfi_model = 1'b1;
    env.scoreboard.en_wrdata_en_check = 1'b0;
    env.scoreboard.t_wl = 4;
    env.scoreboard.t_burst = 2;
    env.scoreboard.t_wr = 16;
    env.dfi_agent.monitor.ap.connect(chk.analysis_export);
  endfunction

  task run_phase(uvm_phase phase);              // replaces base_test run_phase
    sch01_apb_seq apb_s = sch01_apb_seq::type_id::create("apb_s");   // refresh/training off, tRCD=12
    sch03_axi_seq axi_s = sch03_axi_seq::type_id::create("axi_s");
    axi_s.gap_ns = 0;                           // change to 500 for the "idle open bank" case
    phase.raise_objection(this);
    apb_s.start(env.apb_agent.sequencer);
    #100ns;
    axi_s.start(env.axi_agent.sequencer);
    #3us;
    phase.drop_objection(this);
  endtask

  function void report_phase(uvm_phase phase);
    uvm_report_server s = uvm_report_server::get_server();
    if (s.get_severity_count(UVM_ERROR) + s.get_severity_count(UVM_FATAL) == 0)
      `uvm_info("SCH_03", "*** SCH_03 PASSED ***", UVM_NONE)
    else
      `uvm_info("SCH_03", "*** SCH_03 FAILED ***", UVM_NONE)
  endfunction
endclass

// ---------------- SCH_04: command queue full ----------------

class sch04_apb_seq extends uvm_sequence #(lpddr5c_apb_agent_seq_item);
  `uvm_object_utils(sch04_apb_seq)
  function new(string name = "sch04_apb_seq"); super.new(name); endfunction
  task wr(bit [15:0] a, bit [31:0] d);
    lpddr5c_apb_agent_seq_item r = lpddr5c_apb_agent_seq_item::type_id::create("r");
    start_item(r); r.paddr = a; r.pwdata = d; r.pwrite = 1'b1; finish_item(r);
  endtask
  task body();
    wr(16'h0000, 32'h0000_0000);   // CTRL0: refresh and training off
    wr(16'h0010, 32'hFFFF_FFFF);   // TIMING0: tRCD = tRP = tRAS = 255 (slow issue)
  endtask
endclass

class sch_04_test extends base_test;
  `uvm_component_utils(sch_04_test)
  function new(string name = "sch_04_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    env.scoreboard.en_dfi_model = 1'b0;
    env.scoreboard.en_addr_match = 1'b0;
    env.scoreboard.en_wrdata_en_check = 1'b0;
    env.scoreboard.t_wl = 4;
    env.scoreboard.t_burst = 2;
    env.scoreboard.t_wr = 16;
  endfunction

  task inject_queue_reads();
    @(negedge lpddr_tb_top.dfi_clk);
    force lpddr_tb_top.dut.u_cmd_scheduler.cmd_valid = 1'b1;
    force lpddr_tb_top.dut.u_cmd_scheduler.cmd_type = 4'b0001;
    force lpddr_tb_top.dut.u_cmd_scheduler.cmd_addr = {16'(16'h1000), 16'h0A00};
    force lpddr_tb_top.dut.u_cmd_scheduler.cmd_id = 8'd0;

    for (int i = 0; i < 20; i++) begin
      if (i != 0) @(negedge lpddr_tb_top.dfi_clk);
      while (lpddr_tb_top.dut.u_cmd_scheduler.cmd_ready !== 1'b1)
        @(negedge lpddr_tb_top.dfi_clk);
      @(posedge lpddr_tb_top.dfi_clk);
    end

    @(negedge lpddr_tb_top.dfi_clk);
    release lpddr_tb_top.dut.u_cmd_scheduler.cmd_valid;
    release lpddr_tb_top.dut.u_cmd_scheduler.cmd_type;
    release lpddr_tb_top.dut.u_cmd_scheduler.cmd_addr;
    release lpddr_tb_top.dut.u_cmd_scheduler.cmd_id;
  endtask

  task run_phase(uvm_phase phase);              // replaces base_test run_phase
    sch04_apb_seq apb_s = sch04_apb_seq::type_id::create("apb_s");
    bit queue_drained = 1'b0;

    phase.raise_objection(this);
    apb_s.start(env.apb_agent.sequencer);
    #100ns;
    inject_queue_reads();

    fork
      begin
        wait (lpddr_tb_top.dut.u_cmd_scheduler.cmd_queue_entries == 0);
        @(negedge lpddr_tb_top.dfi_clk);
        queue_drained = 1'b1;
      end
      begin
        repeat (30000) @(posedge lpddr_tb_top.dfi_clk);
      end
    join_any
    disable fork;

    if (!queue_drained)
      `uvm_error("SCH04", "queue did not drain within 30000 DFI clocks")
    else if (lpddr_tb_top.dut.u_cmd_scheduler.cmd_ready !== 1'b1)
      `uvm_error("SCH04", "cmd_ready did not reassert after the queue drained")

    phase.drop_objection(this);
  endtask

  function void check_phase(uvm_phase phase);
    super.check_phase(phase);
    if (!lpddr_tb_top.dut.u_cmd_scheduler.u_sch04_chk.saw_full)
      `uvm_error("SCH04", "queue never reached its 16-entry capacity")
    if (!lpddr_tb_top.dut.u_cmd_scheduler.u_sch04_chk.saw_backpressure)
      `uvm_error("SCH04", "cmd_ready did not deassert when the queue became full")
    if (!lpddr_tb_top.dut.u_cmd_scheduler.u_sch04_chk.saw_ready_after_full)
      `uvm_error("SCH04", "cmd_ready did not recover after the full queue began draining")
  endfunction

  function void report_phase(uvm_phase phase);
    uvm_report_server s = uvm_report_server::get_server();
    if (s.get_severity_count(UVM_ERROR) + s.get_severity_count(UVM_FATAL) == 0)
      `uvm_info("SCH_04", "*** SCH_04 PASSED ***", UVM_NONE)
    else
      `uvm_info("SCH_04", "*** SCH_04 FAILED ***", UVM_NONE)
  endfunction
endclass

// Checker bound into every lpddr5c_cmd_scheduler instance
module sch04_queue_chk (
  input logic       clk, rst_n, cmd_valid, cmd_ready,
  input logic [4:0] entries
);
  import uvm_pkg::*;
  bit saw_full;
  bit saw_backpressure;
  bit saw_ready_after_full;
  int max_entries;

  always @(posedge clk) if (rst_n === 1'b1) begin
    if (entries > max_entries) max_entries = entries;
    if (entries == 16 && !saw_full) begin
      saw_full = 1'b1;
      uvm_report_info("SCH04", $sformatf("queue reached 16 entries at %0t, cmd_ready=%0b", $time, cmd_ready), UVM_LOW);
    end
    if (entries == 16 && !cmd_ready)
      saw_backpressure = 1'b1;
    if (saw_full && entries < 16 && cmd_ready)
      saw_ready_after_full = 1'b1;
    if (entries > 16)
      uvm_report_error("SCH04", $sformatf("queue overflow: entries = %0d", entries));
    if (entries == 16 && cmd_ready)
      uvm_report_error("SCH04", "cmd_ready still high with 16 entries");
    if (entries < 16 && !cmd_ready)
      uvm_report_warning("SCH04_RDY", $sformatf("cmd_ready low with only %0d entries", entries));
  end
endmodule

bind lpddr5c_cmd_scheduler sch04_queue_chk u_sch04_chk (
  .clk(clk), .rst_n(rst_n), .cmd_valid(cmd_valid), .cmd_ready(cmd_ready),
  .entries(cmd_queue_entries)
);


// ---------------- SCH_06: PRE protection (do not close a row with pending hits) ----------------

class sch06_apb_seq extends uvm_sequence #(lpddr5c_apb_agent_seq_item);
  `uvm_object_utils(sch06_apb_seq)
  function new(string name = "sch06_apb_seq"); super.new(name); endfunction
  task wr(bit [15:0] a, bit [31:0] d);
    lpddr5c_apb_agent_seq_item r = lpddr5c_apb_agent_seq_item::type_id::create("r");
    start_item(r); r.paddr = a; r.pwdata = d; r.pwrite = 1'b1; finish_item(r);
  endtask
  task body();
    wr(16'h0000, 32'h0000_0000);   // CTRL0: refresh and training off
    wr(16'h0010, 32'h1E0A_0C3C);   // TIMING0: tRCD=60, tRP=12, tRAS=10, tRC=30
  endtask
endclass

class sch06_axi_seq extends sch02_axi_seq;      // reuses wr() from sch02_axi_seq
  `uvm_object_utils(sch06_axi_seq)
  function new(string name = "sch06_axi_seq"); super.new(name); endfunction
  task body();
    wr(32'h1080_0A00, 128'h1111);   // opens row 0x1080 in bank 5
    wr(32'h1080_0B00, 128'h2222);   // hit on the open row (pending)
    wr(32'h1081_0A00, 128'h3333);   // different row: needs PRE
  endtask
endclass

class sch06_checker extends uvm_subscriber #(lpddr5c_dfi_agent_seq_item);
  `uvm_component_utils(sch06_checker)

  int exp_trcd = 60;
  int exp_trp  = 12;

  int        clk_cnt, n_cmd;
  bit [5:0]  cmd_ca [6];
  bit [31:0] cmd_ad [6];
  int        cmd_t  [6];

  function new(string name, uvm_component parent); super.new(name, parent); endfunction

  function void write(lpddr5c_dfi_agent_seq_item t);
    if (!t.dfi_rst_n) return;
    clk_cnt++;
    if (t.dfi_cs_n == 1'b0 && t.dfi_ca != 6'h00) begin
      if (n_cmd < 6) begin cmd_ca[n_cmd] = t.dfi_ca; cmd_ad[n_cmd] = t.dfi_addr; cmd_t[n_cmd] = clk_cnt; end
      n_cmd++;
      `uvm_info("SCH06", $sformatf("DFI cmd CA=0x%0h addr=0x%08h clk=%0d", t.dfi_ca, t.dfi_addr, clk_cnt), UVM_MEDIUM)
    end
  endfunction

  function void check_phase(uvm_phase phase);
    int pre_idx = -1;
    int wr_before_pre = 0;
    if (n_cmd < 6) begin
      `uvm_error("SCH06", $sformatf("expected 6 commands (ACT WR WR PRE ACT WR), saw %0d", n_cmd));
      return;
    end
    // find the PRE and count the row-A writes issued before it
    for (int i = 0; i < 6; i++) if (cmd_ca[i] == 6'h04 && pre_idx < 0) pre_idx = i;
    if (pre_idx < 0) begin `uvm_error("SCH06", "no PRE seen"); return; end
    for (int i = 0; i < pre_idx; i++)
      if (cmd_ca[i] == 6'h02 && cmd_ad[i][31:16] == 16'h1080) wr_before_pre++;

    // ---- the main check ----
    if (wr_before_pre != 2)
      `uvm_error("SCH06", $sformatf("PRE issued at cmd #%0d with only %0d of 2 pending row hits served (row closed too early)", pre_idx, wr_before_pre))

    // ---- order and addresses ----
    if (cmd_ca[0] != 6'h03 || cmd_ad[0] != 32'h1080_0A00) `uvm_error("SCH06", "cmd0 is not ACT 0x10800a00")
    if (cmd_ca[1] != 6'h02 || cmd_ca[2] != 6'h02)         `uvm_error("SCH06", "cmd1/cmd2 are not the two row-A WRs")
    if (cmd_ca[3] != 6'h04 || cmd_ad[3] != 32'h1081_0A00) `uvm_error("SCH06", "cmd3 is not PRE (new row address 0x10810a00)")
    if (cmd_ca[4] != 6'h03 || cmd_ad[4] != 32'h1081_0A00) `uvm_error("SCH06", "cmd4 is not ACT 0x10810a00")
    if (cmd_ca[5] != 6'h02 || cmd_ad[5] != 32'h1081_0A00) `uvm_error("SCH06", "cmd5 is not WR 0x10810a00")

    // ---- timing the scheduler does enforce ----
    if (cmd_t[1] - cmd_t[0] < exp_trcd)
      `uvm_error("SCH06", $sformatf("ACT->WR = %0d clk < tRCD %0d", cmd_t[1] - cmd_t[0], exp_trcd))
    if (cmd_t[4] - cmd_t[3] < exp_trp)
      `uvm_error("SCH06", $sformatf("PRE->ACT = %0d clk < tRP %0d", cmd_t[4] - cmd_t[3], exp_trp))
  endfunction
endclass

class sch_06_test extends base_test;
  `uvm_component_utils(sch_06_test)
  sch06_checker chk;
  function new(string name = "sch_06_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    chk = sch06_checker::type_id::create("chk", this);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    env.scoreboard.en_dfi_model = 1'b1;
    env.scoreboard.en_wrdata_en_check = 1'b0;
    env.scoreboard.t_wl = 4;
    env.scoreboard.t_burst = 2;
    env.scoreboard.t_wr = 16;
    env.dfi_agent.monitor.ap.connect(chk.analysis_export);
  endfunction
  task run_phase(uvm_phase phase);              // replaces base_test run_phase
    sch06_apb_seq apb_s = sch06_apb_seq::type_id::create("apb_s");
    sch06_axi_seq axi_s = sch06_axi_seq::type_id::create("axi_s");
    phase.raise_objection(this);
    apb_s.start(env.apb_agent.sequencer);
    #100ns;
    axi_s.start(env.axi_agent.sequencer);
    #3us;
    phase.drop_objection(this);
  endtask
  function void report_phase(uvm_phase phase);
    uvm_report_server s = uvm_report_server::get_server();
    if (s.get_severity_count(UVM_ERROR) + s.get_severity_count(UVM_FATAL) == 0)
      `uvm_info("SCH_06", "*** SCH_06 PASSED ***", UVM_NONE)
    else
      `uvm_info("SCH_06", "*** SCH_06 FAILED ***", UVM_NONE)
  endfunction
endclass


//============================================================================
// CDC_02 : write FIFO full -- passive checkers (bound into the DUT)
//
//   cdc02_fifo_chk : bound into lpddr5c_cdc_fifo (active only in u_wr_cdc_fifo)
//        - occupancy never exceeds FIFO_DEPTH (no overflow)
//        - wr_full (=> s_axi_wready low) asserted as soon as 8 entries are held
//        - wr_full never sticks while the FIFO has room (bounded sync lag)
//        - every word popped == word pushed, in order (no loss / overwrite)
//   cdc02_dfi_chk  : bound into lpddr5c_data_path
//        - every accepted AXI W word shows up on DFI as 2 beats, in order,
//          with mask == ~wstrb  (end to end: no data loss after resume)
//        - AXI rule: wvalid/payload held stable while wready is low
//
// Compile AFTER the RTL.  Tests read the counters by hierarchical name, e.g.
//   lpddr_tb_top.dut.u_data_path.u_wr_cdc_fifo.u_cdc02_fifo_chk.saw_full
//   lpddr_tb_top.dut.u_data_path.u_cdc02_dfi_chk.acc_cnt
//============================================================================
/*`timescale 1ns/1ps

`ifdef CDC02_STANDALONE
  `define CDC02_ERR(ID, MSG)  begin n_err++; $display("[%0t] CDC02_ERROR %s : %s", $time, ID, MSG); end
  `define CDC02_WARN(ID, MSG) begin $display("[%0t] CDC02_WARN  %s : %s", $time, ID, MSG); end
`else
  `define CDC02_ERR(ID, MSG)  begin n_err++; uvm_report_error  (ID, MSG, UVM_NONE); end
  `define CDC02_WARN(ID, MSG) begin uvm_report_warning(ID, MSG, UVM_NONE); end
`endif

//----------------------------------------------------------------------------
module cdc02_fifo_chk #(
  parameter int FIFO_DEPTH = 8,
  parameter int DATA_WIDTH = 144,
  parameter int PTR_WIDTH  = $clog2(FIFO_DEPTH) + 1,
  parameter bit FORCE_EN   = 1'b0,    // 1: skip instance-name filter
  parameter int FULL_LAT   = 3        // max wr_clk cycles wr_full may lag a pop (2-FF sync + 1)
)(
  input logic                  wr_clk, wr_rst_n,
  input logic                  rd_clk, rd_rst_n,
  input logic                  wr_en,
  input logic [DATA_WIDTH-1:0] wr_data,
  input logic                  wr_full,
  input logic                  rd_en,
  input logic                  rd_empty,
  input logic [DATA_WIDTH-1:0] rd_data,
  input logic [PTR_WIDTH-1:0]  wr_ptr_bin, rd_ptr_bin,
  input logic [PTR_WIDTH-1:0]  wr_ptr_gray_sync2     // write pointer as seen by the PHY side
);
`ifndef CDC02_STANDALONE
  import uvm_pkg::*;
`endif

  bit               en;
  int unsigned      n_err;
  int unsigned      push_cnt, pop_cnt, max_occ, full_cycles, lag_cnt, max_lag;
  bit               saw_full;
  logic [DATA_WIDTH-1:0] exp_q [$];

  wire [PTR_WIDTH-1:0] occ = wr_ptr_bin - rd_ptr_bin;      // modulo 2*DEPTH
  function int unsigned occ_now(); return occ; endfunction

  // Words the PHY-side logic can SEE.  The write pointer reaches the read domain
  // through a 2-FF synchroniser clocked by the PHY clock, so with the PHY clock
  // stopped this lags occ.  After a stall the first 2 PHY edges only refresh it.
  function automatic int unsigned gray2bin_f(input logic [PTR_WIDTH-1:0] g);
    logic [PTR_WIDTH-1:0] b;
    b = g;
    for (int i = PTR_WIDTH-2; i >= 0; i--) b[i] = b[i+1] ^ g[i];
    return b;
  endfunction
  function int unsigned rd_view_now();
    logic [PTR_WIDTH-1:0] d;
    d = gray2bin_f(wr_ptr_gray_sync2) - rd_ptr_bin;
    return d;
  endfunction

  function automatic bit has_sub(string s, string sub);
    for (int i = 0; i + sub.len() <= s.len(); i++)
      if (s.substr(i, i + sub.len() - 1) == sub) return 1;
    return 0;
  endfunction

  initial begin
`ifdef CDC02_STANDALONE
    en = 1'b1;
`else
    en = FORCE_EN || has_sub($sformatf("%m"), "u_wr_cdc_fifo");
`endif
  end

  // ---------------- write side (sys_clk) ----------------
  always @(posedge wr_clk) if (en && wr_rst_n === 1'b1) begin
    if (^wr_full === 1'bx) `CDC02_ERR("CDC02_FIFO", "wr_full (=> wready) is X/Z")

    if (occ > FIFO_DEPTH)
      `CDC02_ERR("CDC02_OVERFLOW", $sformatf("occupancy %0d exceeds depth %0d (wr=%0d rd=%0d)", occ, FIFO_DEPTH, wr_ptr_bin, rd_ptr_bin))

    if (occ > max_occ) max_occ = occ;

    if (occ >= FIFO_DEPTH) begin
      saw_full = 1'b1;
      full_cycles++;
      if (!wr_full)
        `CDC02_ERR("CDC02_FULL", $sformatf("FIFO holds %0d entries but wr_full=0 (wready still high)", occ))
    end

    if (wr_en && wr_full)
      `CDC02_ERR("CDC02_OVERFLOW", "write strobe while wr_full=1 (word would be lost)")

    // pessimistic full is legal for a few cycles after a pop, not forever
    if (occ < FIFO_DEPTH && wr_full) begin
      lag_cnt++;
      if (lag_cnt > max_lag) max_lag = lag_cnt;
      if (lag_cnt > FULL_LAT)
        `CDC02_ERR("CDC02_FALSE_FULL", $sformatf("wr_full stuck high for %0d cycles with only %0d/%0d entries", lag_cnt, occ, FIFO_DEPTH))
    end else lag_cnt = 0;

    if (wr_en && !wr_full) begin
      exp_q.push_back(wr_data);
      push_cnt++;
    end
  end

  // ---------------- read side (phy clk) ----------------
  logic [DATA_WIDTH-1:0] e_w;
  always @(posedge rd_clk) if (en && rd_rst_n === 1'b1) begin
    if (rd_en && !rd_empty) begin
      pop_cnt++;
      if (occ == 0)
        `CDC02_ERR("CDC02_UNDERFLOW", "pop while FIFO empty")
      else if (exp_q.size() == 0)
        `CDC02_ERR("CDC02_UNDERFLOW", "pop with no outstanding push")
      else begin
        e_w = exp_q.pop_front();
        if (rd_data !== e_w)
          `CDC02_ERR("CDC02_DATA", $sformatf("FIFO word #%0d mismatch: got %h expected %h", pop_cnt-1, rd_data, e_w))
      end
    end
  end

  function void end_checks();
    if (!en) return;
    if (exp_q.size() != 0)
      `CDC02_ERR("CDC02_LOSS", $sformatf("%0d accepted word(s) never left the FIFO", exp_q.size()))
    if (push_cnt != pop_cnt)
      `CDC02_ERR("CDC02_LOSS", $sformatf("pushed %0d words, popped %0d", push_cnt, pop_cnt))
  endfunction
endmodule

//----------------------------------------------------------------------------
module cdc02_dfi_chk #(
  parameter int DATA_WIDTH = 128,
  parameter int BYTE_LANES = 16,
  parameter int DFI_W      = 64,          // DFI_DATA_WIDTH (one beat)
  parameter int DFI_PORT_W = 64           // DFI_DATA_WIDTH * NUM_CHANNELS
)(
  input logic                    sys_clk, sys_rst_n,
  input logic                    dfi_clk, phy_rst_n,
  input logic                    axi_wvalid, axi_wready,
  input logic [DATA_WIDTH-1:0]   axi_wdata,
  input logic [BYTE_LANES-1:0]   axi_wstrb,
  input logic [DFI_PORT_W-1:0]   dfi_wrdata,
  input logic [DFI_PORT_W/8-1:0] dfi_wrdata_mask,
  input logic                    dfi_wrdata_en
);
`ifndef CDC02_STANDALONE
  import uvm_pkg::*;
`endif
  localparam int BEATS = DATA_WIDTH / DFI_W;
  localparam int DFI_B = DFI_W / 8;

  int unsigned n_err, acc_cnt, drn_cnt, dup_cnt;
  logic [DATA_WIDTH+BYTE_LANES-1:0] exp_q [$];

  // ---------------- AXI side ----------------
  bit                               hold;
  logic [DATA_WIDTH+BYTE_LANES-1:0] hold_pl, last_pl;
  bit                               last_acc;

  logic [DATA_WIDTH+BYTE_LANES-1:0] pl;
  always @(posedge sys_clk) if (sys_rst_n === 1'b1) begin
    pl = {axi_wstrb, axi_wdata};
    // AXI: valid + payload must stay stable until ready
    if (hold && !(axi_wvalid === 1'b1 && pl === hold_pl))
      `CDC02_ERR("CDC02_AXI", "wvalid/payload changed while wready was low")
    hold    <= (axi_wvalid === 1'b1) && (axi_wready !== 1'b1);
    hold_pl <= pl;

    if (axi_wvalid === 1'b1 && axi_wready === 1'b1) begin
      if (last_acc && pl === last_pl) begin
        dup_cnt++;
        `CDC02_WARN("CDC02_DRV_DUP", "identical W payload accepted in 2 consecutive cycles (driver kept wvalid high one cycle after the handshake - see axi_driver_w_handshake.patch)")
      end
      exp_q.push_back(pl);
      acc_cnt++;
      last_acc = 1'b1;  last_pl = pl;
    end else last_acc = 1'b0;
  end

  // ---------------- DFI side ----------------
  int                 beat;
  int                 run_len;
  logic [DATA_WIDTH-1:0] acc_d;
  logic [BYTE_LANES-1:0] acc_m;
  logic [DATA_WIDTH+BYTE_LANES-1:0] e_pl;

  always @(posedge dfi_clk) if (phy_rst_n === 1'b1) begin
    if (^{dfi_wrdata_en} === 1'bx)
      `CDC02_ERR("CDC02_DFI", "dfi_wrdata_en is X")
    if (dfi_wrdata_en === 1'b1) begin
      if (^{dfi_wrdata[DFI_W-1:0], dfi_wrdata_mask[DFI_B-1:0]} === 1'bx)
        `CDC02_ERR("CDC02_DFI", "X/Z on dfi_wrdata/mask while dfi_wrdata_en=1")
      acc_d[beat*DFI_W +: DFI_W] = dfi_wrdata[DFI_W-1:0];
      acc_m[beat*DFI_B +: DFI_B] = dfi_wrdata_mask[DFI_B-1:0];
      if (beat == BEATS-1) begin
        if (exp_q.size() == 0)
          `CDC02_ERR("CDC02_PHANTOM", "DFI write word with no accepted AXI write (duplicate or phantom)")
        else begin
          e_pl = exp_q.pop_front();
          if (acc_d !== e_pl[DATA_WIDTH-1:0])
            `CDC02_ERR("CDC02_DATA", $sformatf("DFI word #%0d data %h expected %h", drn_cnt, acc_d, e_pl[DATA_WIDTH-1:0]))
          if (acc_m !== ~e_pl[DATA_WIDTH +: BYTE_LANES])
            `CDC02_ERR("CDC02_MASK", $sformatf("DFI word #%0d mask %h expected %h", drn_cnt, acc_m, ~e_pl[DATA_WIDTH +: BYTE_LANES]))
        end
        drn_cnt++;
        beat = 0;
      end else beat++;
    end else if (beat != 0) begin
      `CDC02_ERR("CDC02_DFI", $sformatf("burst aborted after %0d of %0d beats", beat, BEATS))
      beat = 0;
    end
  end

  function int unsigned pending(); return exp_q.size(); endfunction

  function void end_checks();
    if (exp_q.size() != 0)
      `CDC02_ERR("CDC02_LOSS", $sformatf("%0d accepted AXI word(s) never reached DFI (data loss)", exp_q.size()))
    if (acc_cnt != drn_cnt)
      `CDC02_ERR("CDC02_LOSS", $sformatf("AXI accepted %0d words, DFI carried %0d", acc_cnt, drn_cnt))
  endfunction
endmodule

`ifndef CDC02_STANDALONE
bind lpddr5c_cdc_fifo cdc02_fifo_chk #(
  .FIFO_DEPTH(FIFO_DEPTH), .DATA_WIDTH(DATA_WIDTH)
) u_cdc02_fifo_chk (
  .wr_clk(wr_clk), .wr_rst_n(wr_rst_n), .rd_clk(rd_clk), .rd_rst_n(rd_rst_n),
  .wr_en(wr_en), .wr_data(wr_data), .wr_full(wr_full),
  .rd_en(rd_en), .rd_empty(rd_empty), .rd_data(rd_data),
  .wr_ptr_bin(wr_ptr_bin), .rd_ptr_bin(rd_ptr_bin),
  .wr_ptr_gray_sync2(wr_ptr_gray_sync2)
);

bind lpddr5c_data_path cdc02_dfi_chk #(
  .DATA_WIDTH(DATA_WIDTH), .BYTE_LANES(BYTE_LANES),
  .DFI_W(DFI_DATA_WIDTH), .DFI_PORT_W(DFI_DATA_WIDTH*NUM_CHANNELS)
) u_cdc02_dfi_chk (
  .sys_clk(sys_clk), .sys_rst_n(sys_rst_n), .dfi_clk(dfi_clk), .phy_rst_n(phy_rst_n),
  .axi_wvalid(axi_wvalid), .axi_wready(axi_wready),
  .axi_wdata(axi_wdata), .axi_wstrb(axi_wstrb),
  .dfi_wrdata(dfi_wrdata), .dfi_wrdata_mask(dfi_wrdata_mask), .dfi_wrdata_en(dfi_wrdata_en)
);
`endif
//============================================================================
// CDC_02 : Write FIFO full
//
//   Feature  : write FIFO buffering (sys_clk -> dfi_clk CDC FIFO, depth 8)
//   Approach : stall the PHY side and push writes.
//   Expected : s_axi_wready drops after 8 entries, no overflow, no data loss
//              when the PHY side resumes.
//
// PHY stall = stop dfi_clk through lpddr_tb_top.dfi_clk_enable.
// While dfi_clk is stopped nothing leaves the FIFO,
// so exactly 8 words are accepted.
//
// Tests (run with +UVM_TESTNAME=<name>)
//   cdc_02_test             A  stall, push N>8 writes, hold, resume
//   cdc_02_exact_fill_test  B  exactly 8 writes: wready low with wvalid idle
//   cdc_02_wrap_test        C  fill/drain rounds -> pointer wrap, gray MSB flip
//   cdc_02_trickle_test     D  free one slot at a time, full <-> not-full edge
//   cdc_02_random_test      E  random stall/run pulses, random lengths
//
// Plusargs: +CDC02_WORDS=n  +CDC02_HOLD=clks  +CDC02_ROUNDS=n  +CDC02_STRB=1
//           +CDC02_DRAM_STRICT=1 (DRAM read-back mismatch = UVM_ERROR)
//
// Needs (compile after cmd_seq.sv, base_test.sv and cdc_02_chk.sv):
//   sch01_apb_seq (cmd_seq.sv), dfi_clk_enable in lpddr_tb_top,
//   axi_driver_w_handshake.patch applied to the AXI driver.
//============================================================================

`define CDC02_FCHK lpddr_tb_top.dut.u_data_path.u_wr_cdc_fifo.u_cdc02_fifo_chk
`define CDC02_DCHK lpddr_tb_top.dut.u_data_path.u_cdc02_dfi_chk
`define CDC02_WRDY lpddr_tb_top.AXI_vif.axi_wready
`define CDC02_WVLD lpddr_tb_top.AXI_vif.axi_wvalid

//----------------------------------------------------------------------------
// AXI sequence: n_wr single-beat 16 B writes (AW + W + B), word index i
//----------------------------------------------------------------------------
class cdc02_axi_seq extends uvm_sequence #(lpddr5c_axi_agent_seq_item);
  `uvm_object_utils(cdc02_axi_seq)

  int unsigned first_idx = 0;     // index of the first word
  int unsigned n_wr      = 12;
  bit          use_strb  = 0;     // 1: one byte lane masked per word

  function new(string name = "cdc02_axi_seq"); super.new(name); endfunction

  // 4 distinct 32-bit lanes, upper half != lower half: catches lane / half swaps
  static function bit [127:0] data_of(int unsigned i);
    bit [7:0] a = i[7:0];
    bit [7:0] b = ~i[7:0];
    return {8'h03, b, a, 8'h5D,  8'h02, b, a, 8'h5C,
            8'h01, b, a, 8'h5B,  8'h00, b, a, 8'h5A};
  endfunction

  // same bank, 16 words per row, new row every 16 words
  static function bit [31:0] addr_of(int unsigned i);
    return 32'h1080_0A00 + (32'(i % 16) << 4) + (32'(i / 16) << 16);
  endfunction

  static function bit [15:0] strb_of(int unsigned i, bit en);
    return en ? ~(16'h1 << (i % 16)) : 16'hFFFF;
  endfunction

  task wr(int unsigned i);
    lpddr5c_axi_agent_seq_item it = lpddr5c_axi_agent_seq_item::type_id::create($sformatf("cdc02_wr_%0d", i));
    start_item(it);
    it.is_write    = 1'b1;
    it.axi_awid    = i[3:0];
    it.axi_awaddr  = addr_of(i);
    it.axi_awlen   = 8'd0;
    it.axi_awsize  = 3'd4;
    it.axi_awburst = 2'b01;
    it.axi_wdata   = data_of(i);
    it.axi_wstrb   = strb_of(i, use_strb);
    it.axi_wlast   = 1'b1;
    it.axi_awvalid = 1'b1;
    it.axi_wvalid  = 1'b1;
    it.axi_bready  = 1'b1;
    finish_item(it);
  endtask

  task body();
    for (int unsigned k = 0; k < n_wr; k++) wr(first_idx + k);
  endtask
endclass

//----------------------------------------------------------------------------
// Common test infrastructure
//----------------------------------------------------------------------------
class cdc_02_base_test extends base_test;
  `uvm_component_utils(cdc_02_base_test)

  string       tname       = "CDC_02";
  int unsigned n_words     = 12;     // test A: writes issued (>8)
  int unsigned hold_clks   = 200;    // sys clocks held in the "full" state
  int unsigned rounds      = 4;      // test C: 4 x 8 = 32 words (> 2 pointer wraps)
  int unsigned n_trickle   = 4;      // test D
  int unsigned n_rand      = 40;     // test E
  bit          use_strb    = 0;
  bit          dram_strict = 0;
  bit          require_full = 1;     // check_phase: FIFO must have reached 8 entries
  int unsigned total_wr    = 0;      // words the test pushed (for check_phase)

  function new(string name = "cdc_02_base_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    int v;
    super.build_phase(phase);
    if ($value$plusargs("CDC02_WORDS=%d",       v)) n_words     = v;
    if ($value$plusargs("CDC02_HOLD=%d",        v)) hold_clks   = v;
    if ($value$plusargs("CDC02_ROUNDS=%d",      v)) rounds      = v;
    if ($value$plusargs("CDC02_STRB=%d",        v)) use_strb    = (v != 0);
    if ($value$plusargs("CDC02_DRAM_STRICT=%d", v)) dram_strict = (v != 0);
  endfunction

  // ------------------------------------------------------------ basic helpers
  task clks(int unsigned n);
    repeat (n) @(posedge lpddr_tb_top.sys_clk);
  endtask

  function void stall_phy();   lpddr_tb_top.dfi_clk_enable = 1'b0; endfunction
  function void release_phy(); lpddr_tb_top.dfi_clk_enable = 1'b1; endfunction

  // Run the PHY clock for exactly n edges, then stop it again.
  task phy_run_clks(int unsigned n);
    release_phy();
    repeat (n) @(negedge lpddr_tb_top.dfi_clk);
    stall_phy();
  endtask

  // Let the PHY side drain exactly m words and stop on a word boundary.
  // The drain FSM needs 3 PHY clocks per word (load beat0, load beat1, pop).
  // The PHY side only sees the write pointer through a 2-FF synchroniser clocked
  // by dfi_clk, so after a stall the first 2 edges just refresh it (no word starts
  // within 2 edges) -- hence the pre-pulse.  Stopping mid-word would leave
  // dfi_wrdata_en frozen high while the DFI-clocked PHY BFM keeps sampling it.
  task phy_words(int unsigned m);
    int unsigned mm;
    if (`CDC02_FCHK.rd_view_now() == 0) phy_run_clks(2);
    mm = m;
    if (mm > `CDC02_FCHK.rd_view_now()) mm = `CDC02_FCHK.rd_view_now();
    if (mm > 0) phy_run_clks(3 * mm);
  endtask

  task wait_until_acc(int unsigned n, int unsigned tmo = 40000);
    int unsigned t = 0;
    while (`CDC02_DCHK.acc_cnt < n) begin
      clks(1);
      if (++t > tmo)
        `uvm_fatal(tname, $sformatf("timeout: only %0d of %0d writes accepted", `CDC02_DCHK.acc_cnt, n))
    end
  endtask

  task wait_wr_blocked(int unsigned tmo = 40000);   // a W beat is presented and not accepted
    int unsigned t = 0;
    while (!(`CDC02_WVLD === 1'b1 && `CDC02_WRDY === 1'b0)) begin
      clks(1);
      if (++t > tmo) `uvm_fatal(tname, "timeout waiting for a back-pressured W beat")
    end
  endtask

  // FIFO full + PHY stalled for n clocks: wready low, nothing accepted, nothing drained
  task hold_full(int unsigned n, bit expect_pending, int unsigned exp_acc, int unsigned exp_drn);
    bit saw_pending = 0;
    bit ok = 1;
    repeat (n) begin
      clks(1);
      if (ok && `CDC02_WRDY !== 1'b0) begin
        `uvm_error(tname, "s_axi_wready is not low while the FIFO is full and the PHY is stalled") ok = 0; end
      if (ok && `CDC02_FCHK.occ_now() != 8) begin
        `uvm_error(tname, $sformatf("occupancy %0d, expected 8", `CDC02_FCHK.occ_now())) ok = 0; end
      if (ok && `CDC02_DCHK.acc_cnt != exp_acc) begin
        `uvm_error(tname, $sformatf("accepted words %0d, expected %0d (a write was taken while full)", `CDC02_DCHK.acc_cnt, exp_acc)) ok = 0; end
      if (ok && `CDC02_DCHK.drn_cnt != exp_drn) begin
        `uvm_error(tname, $sformatf("drained words %0d while PHY stalled, expected %0d", `CDC02_DCHK.drn_cnt, exp_drn)) ok = 0; end
      if (`CDC02_WVLD === 1'b1) saw_pending = 1;
      if (!expect_pending && `CDC02_WVLD === 1'b1 && ok) begin
        `uvm_error(tname, "wvalid high but no write was expected to be pending") ok = 0; end
    end
    if (expect_pending && !saw_pending)
      `uvm_error(tname, "no back-pressured W beat seen - stimulus never pushed past 8 entries")
  endtask

  // Resume the PHY and wait until every accepted word has left through DFI
  task wait_drain(int unsigned tmo = 8000);
    int unsigned t = 0;
    release_phy();
    while (`CDC02_DCHK.drn_cnt != `CDC02_DCHK.acc_cnt || `CDC02_FCHK.occ_now() != 0) begin
      clks(1);
      if (++t > tmo) begin
        `uvm_error(tname, $sformatf("DATA LOSS: accepted=%0d drained=%0d occ=%0d after %0d clks",
                   `CDC02_DCHK.acc_cnt, `CDC02_DCHK.drn_cnt, `CDC02_FCHK.occ_now(), tmo))
        break;
      end
    end
    clks(20);
  endtask

  // Read the DRAM model back-door and compare with what the AXI side wrote
  task check_dram(int unsigned first, int unsigned n);
    int unsigned bad = 0, missing = 0;
    for (int unsigned i = first; i < first + n; i++) begin
      bit [31:0]  w   = cdc02_axi_seq::addr_of(i) >> 4;
      bit [127:0] expd = cdc02_axi_seq::data_of(i);
      bit [15:0]  st  = cdc02_axi_seq::strb_of(i, use_strb);
      int unsigned t  = 0;
      for (int b = 0; b < 16; b++) if (!st[b]) expd[b*8 +: 8] = 8'h00;   // masked byte keeps old (0)
      while (!lpddr_tb_top.dram.mem.exists(w) && t < 4000) begin clks(1); t++; end
      if (!lpddr_tb_top.dram.mem.exists(w)) missing++;
      else if (lpddr_tb_top.dram.mem[w] !== expd) begin
        bad++;
        `uvm_info(tname, $sformatf("DRAM word %0d @%08h: got %h exp %h", i, cdc02_axi_seq::addr_of(i), lpddr_tb_top.dram.mem[w], expd), UVM_LOW)
      end
    end
    if (bad + missing != 0) begin
      string m = $sformatf("DRAM read-back: %0d mismatching, %0d missing of %0d words (DFI-level scoreboard is the CDC verdict; a DRAM mismatch can also come from command reordering)", bad, missing, n);
      if (dram_strict) `uvm_error(tname, m) else `uvm_warning(tname, m)
    end else
      `uvm_info(tname, $sformatf("DRAM read-back OK for %0d words", n), UVM_LOW)
  endtask

  task start_cfg();
    sch01_apb_seq apb_s = sch01_apb_seq::type_id::create("apb_s");   // refresh/training off
    apb_s.start(env.apb_agent.sequencer);
    #100ns;
  endtask

  function cdc02_axi_seq mk_seq(string nm, int unsigned first, int unsigned n);
    cdc02_axi_seq s = cdc02_axi_seq::type_id::create(nm);
    s.first_idx = first; s.n_wr = n; s.use_strb = use_strb;
    return s;
  endfunction

  // ------------------------------------------------------------ end of test
  function void check_phase(uvm_phase phase);
    super.check_phase(phase);
    `CDC02_FCHK.end_checks();
    `CDC02_DCHK.end_checks();
    if (require_full && !`CDC02_FCHK.saw_full)
      `uvm_error(tname, "FIFO never reached 8 entries (PHY stall not effective?)")
    if (`CDC02_FCHK.max_occ > 8)
      `uvm_error(tname, $sformatf("max occupancy %0d > 8", `CDC02_FCHK.max_occ))
    if (total_wr != 0 && `CDC02_DCHK.acc_cnt != total_wr)
      `uvm_error(tname, $sformatf("%0d writes issued but %0d accepted by the FIFO (dup/loss)", total_wr, `CDC02_DCHK.acc_cnt))
    `uvm_info(tname, $sformatf("accepted=%0d drained=%0d max_occ=%0d full_cycles=%0d max_full_lag=%0d dup=%0d",
              `CDC02_DCHK.acc_cnt, `CDC02_DCHK.drn_cnt, `CDC02_FCHK.max_occ,
              `CDC02_FCHK.full_cycles, `CDC02_FCHK.max_lag, `CDC02_DCHK.dup_cnt), UVM_LOW)
  endfunction

  function void report_phase(uvm_phase phase);
    uvm_report_server s = uvm_report_server::get_server();
    if (s.get_severity_count(UVM_ERROR) + s.get_severity_count(UVM_FATAL) == 0)
      `uvm_info(tname, $sformatf("*** %s PASSED ***", tname), UVM_NONE)
    else
      `uvm_info(tname, $sformatf("*** %s FAILED ***", tname), UVM_NONE)
  endfunction
endclass

//============================================================================
// A: stall PHY, push n_words (>8) writes, hold, resume
//    - 8 words accepted, wready low, 9th W beat held with wvalid high
//    - nothing accepted / drained during the hold
//    - after resume: 9..N accepted, all N words reach DFI in order
//============================================================================
class cdc_02_test extends cdc_02_base_test;
  `uvm_component_utils(cdc_02_test)
  function new(string name = "cdc_02_test", uvm_component parent = null);
    super.new(name, parent); tname = "CDC_02";
  endfunction

  task run_phase(uvm_phase phase);
    cdc02_axi_seq axi_s;
    phase.raise_objection(this);
    stall_phy();
    start_cfg();
    total_wr = n_words;
    axi_s = mk_seq("axi_s", 0, n_words);
    fork
      axi_s.start(env.axi_agent.sequencer);        // returns when all N writes were accepted
      begin
        wait_until_acc(8);
        clks(3);                                   // wr_full / wready settle
        `uvm_info(tname, "8 words accepted: FIFO full, holding PHY stalled", UVM_LOW)
        hold_full(hold_clks, (n_words > 8), 8, 0);
        `uvm_info(tname, "resuming PHY clock", UVM_LOW)
        release_phy();
      end
    join
    wait_drain();
    check_dram(0, n_words);
    #1us;
    phase.drop_objection(this);
  endtask
endclass

//============================================================================
// B: exactly 8 writes, wvalid idle.  wready must be low although nothing is
//    presented; then a 9th/10th write must be held (not dropped) until resume.
//============================================================================
class cdc_02_exact_fill_test extends cdc_02_base_test;
  `uvm_component_utils(cdc_02_exact_fill_test)
  function new(string name = "cdc_02_exact_fill_test", uvm_component parent = null);
    super.new(name, parent); tname = "CDC_02B";
  endfunction

  task run_phase(uvm_phase phase);
    cdc02_axi_seq a8, a2;
    phase.raise_objection(this);
    stall_phy();
    start_cfg();
    total_wr = 10;
    a8 = mk_seq("a8", 0, 8);
    a8.start(env.axi_agent.sequencer);             // all 8 complete (B received)
    clks(20);
    if (`CDC02_WVLD !== 1'b0) `uvm_error(tname, "wvalid unexpectedly high after 8 writes")
    hold_full(hold_clks, 0, 8, 0);                 // wready low with wvalid idle
    a2 = mk_seq("a2", 8, 2);
    fork
      a2.start(env.axi_agent.sequencer);           // blocks on W of word 8
      begin
        wait_wr_blocked();
        hold_full(100, 1, 8, 0);
        release_phy();
      end
    join
    wait_drain();
    check_dram(0, 10);
    #1us;
    phase.drop_objection(this);
  endtask
endclass

//============================================================================
// C: fill/drain rounds -> FIFO pointers wrap (4 bit, 16 values) and the gray
//    MSB toggles; full detection and data order must survive every wrap.
//============================================================================
class cdc_02_wrap_test extends cdc_02_base_test;
  `uvm_component_utils(cdc_02_wrap_test)
  function new(string name = "cdc_02_wrap_test", uvm_component parent = null);
    super.new(name, parent); tname = "CDC_02C";
  endfunction

  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    start_cfg();
    total_wr = rounds * 8;
    for (int unsigned r = 0; r < rounds; r++) begin
      cdc02_axi_seq s = mk_seq($sformatf("r%0d", r), r * 8, 8);
      stall_phy();
      clks(2);
      s.start(env.axi_agent.sequencer);            // 8 writes accepted -> full
      clks(20);
      hold_full(40, 0, (r + 1) * 8, r * 8);
      `uvm_info(tname, $sformatf("round %0d: full, resuming", r), UVM_LOW)
      wait_drain();
    end
    check_dram(0, rounds * 8);
    #1us;
    phase.drop_objection(this);
  endtask
endclass

//============================================================================
// D: free ONE slot at a time (exactly one word per pulse).  Each pulse must
//    (a) drain exactly 1 word, (b) let exactly 1 held write in, (c) bring
//    wready back low.  Exercises the full <-> not-full edge n_trickle times.
//============================================================================
class cdc_02_trickle_test extends cdc_02_base_test;
  `uvm_component_utils(cdc_02_trickle_test)
  function new(string name = "cdc_02_trickle_test", uvm_component parent = null);
    super.new(name, parent); tname = "CDC_02D";
  endfunction

  task run_phase(uvm_phase phase);
    cdc02_axi_seq a8, an;
    phase.raise_objection(this);
    stall_phy();
    start_cfg();
    total_wr = 8 + n_trickle;
    a8 = mk_seq("a8", 0, 8);
    a8.start(env.axi_agent.sequencer);
    clks(30);
    hold_full(20, 0, 8, 0);
    an = mk_seq("an", 8, n_trickle);
    fork
      an.start(env.axi_agent.sequencer);
      begin
        for (int unsigned k = 0; k < n_trickle; k++) begin
          int unsigned a0, d0;
          wait_wr_blocked();                       // a write is waiting for a slot
          a0 = `CDC02_DCHK.acc_cnt;  d0 = `CDC02_DCHK.drn_cnt;
          phy_words(1);                            // PHY drains exactly one word
          clks(12);                                // sync latency + settle
          if (`CDC02_DCHK.drn_cnt != d0 + 1)
            `uvm_error(tname, $sformatf("pulse %0d: drained %0d words, expected 1", k, `CDC02_DCHK.drn_cnt - d0))
          if (`CDC02_DCHK.acc_cnt != a0 + 1)
            `uvm_error(tname, $sformatf("pulse %0d: %0d writes accepted, expected exactly 1", k, `CDC02_DCHK.acc_cnt - a0))
          if (`CDC02_FCHK.occ_now() != 8 || `CDC02_WRDY !== 1'b0)
            `uvm_error(tname, $sformatf("pulse %0d: occ=%0d wready=%b, expected full again", k, `CDC02_FCHK.occ_now(), `CDC02_WRDY))
        end
      end
    join
    wait_drain();
    check_dram(0, 8 + n_trickle);
    #1us;
    phase.drop_objection(this);
  endtask
endclass

//============================================================================
// E: random stall/run pulses (1..4 words per pulse, random idle gaps, a third
//    of the gaps long enough to fill the FIFO).  Scoreboards check order/data;
//    checker asserts no overflow / false-full at any time.
//============================================================================
class cdc_02_random_test extends cdc_02_base_test;
  `uvm_component_utils(cdc_02_random_test)
  function new(string name = "cdc_02_random_test", uvm_component parent = null);
    super.new(name, parent); tname = "CDC_02E";
    require_full = 0;      // random: reaching 8 entries is likely but not guaranteed
  endfunction

  task run_phase(uvm_phase phase);
    cdc02_axi_seq s;
    int unsigned  n;
    phase.raise_objection(this);
    n = n_rand;  total_wr = n;
    stall_phy();
    start_cfg();
    s = mk_seq("s", 0, n);
    fork
      s.start(env.axi_agent.sequencer);
      begin
        while (`CDC02_DCHK.acc_cnt < n) begin
          clks(($urandom_range(0, 2) == 0) ? $urandom_range(300, 600) : $urandom_range(0, 40));
          if (`CDC02_FCHK.occ_now() >= 1) phy_words($urandom_range(1, 4));
        end
      end
    join
    wait_drain();
    check_dram(0, n);
    #1us;
    phase.drop_objection(this);
  endtask
endclass*/


// ---------------- APB_01: register reset defaults ----------------
// Read every readable register right after reset (before anything is written) and compare it
// with the value set in lpddr5c_reg_cfg.set_default_regs. STATUS2 is a live refresh counter,
// so it is read but not compared (mask = 0).

typedef struct {
  bit [15:0] addr;
  bit [31:0] exp;
  bit [31:0] mask;       // 1 = bit is compared
  string     name;
} apb01_reg_t;

localparam int APB01_N = 20;

function automatic apb01_reg_t apb01_entry(int i);
  apb01_reg_t r;
  r.mask = 32'hFFFF_FFFF;
  case (i)
    0:  begin r.addr = 16'h0000; r.exp = 32'h0000_0000; r.name = "CTRL0";     end
    1:  begin r.addr = 16'h0004; r.exp = 32'h0000_0018; r.name = "CTRL1";     end
    2:  begin r.addr = 16'h0008; r.exp = 32'h0000_0001; r.name = "CTRL2";     end
    3:  begin r.addr = 16'h000C; r.exp = 32'h0000_0010; r.name = "CTRL3";     end
    4:  begin r.addr = 16'h0010; r.exp = 32'h1E12_120C; r.name = "TIMING0";   end
    5:  begin r.addr = 16'h0014; r.exp = 32'h0402_0402; r.name = "TIMING1";   end
    6:  begin r.addr = 16'h0018; r.exp = 32'h1008_0408; r.name = "TIMING2";   end
    7:  begin r.addr = 16'h001C; r.exp = 32'h6408_0402; r.name = "TIMING3";   end
    8:  begin r.addr = 16'h0020; r.exp = 32'h00A8_0C30; r.name = "TIMING4";   end
    9:  begin r.addr = 16'h0024; r.exp = 32'h0080_0010; r.name = "TIMING5";   end
    10: begin r.addr = 16'h0040; r.exp = 32'h0000_0008; r.name = "STATUS0";   end
    11: begin r.addr = 16'h0044; r.exp = 32'h0000_0000; r.name = "STATUS1";   end
    12: begin r.addr = 16'h0048; r.exp = 32'h0000_0000; r.name = "STATUS2";   r.mask = 32'h0; end  // live counter
    13: begin r.addr = 16'h004C; r.exp = 32'h0000_0000; r.name = "STATUS3";   end
    14: begin r.addr = 16'h0060; r.exp = 32'h0000_0001; r.name = "ECC_CFG";   end
    15: begin r.addr = 16'h0070; r.exp = 32'h0000_0100; r.name = "LP_CFG";    end
    16: begin r.addr = 16'h0080; r.exp = 32'h0000_0000; r.name = "TRAIN_CFG"; end
    17: begin r.addr = 16'h00A0; r.exp = 32'h0000_0000; r.name = "INTR_EN";   end
    18: begin r.addr = 16'h00A4; r.exp = 32'h0000_0000; r.name = "INTR_STAT"; end
    19: begin r.addr = 16'h00F0; r.exp = 32'h0000_0000; r.name = "TEST_CFG";  end
    default: begin r.addr = 16'hFFFF; r.exp = 32'h0; r.name = "UNUSED"; end
  endcase
  return r;
endfunction

class apb01_read_seq extends uvm_sequence #(lpddr5c_apb_agent_seq_item);
  `uvm_object_utils(apb01_read_seq)

  function new(string name = "apb01_read_seq");
    super.new(name);
  endfunction

  task body();
    for (int i = 0; i < APB01_N; i++) begin
      apb01_reg_t r;
      lpddr5c_apb_agent_seq_item req;
      r   = apb01_entry(i);
      req = lpddr5c_apb_agent_seq_item::type_id::create("req");
      start_item(req);
      req.paddr  = r.addr;
      req.pwrite = 1'b0;
      req.pwdata = 32'h0;
      finish_item(req);
    end
  endtask
endclass

class apb01_checker extends uvm_subscriber #(lpddr5c_apb_agent_seq_item);
  `uvm_component_utils(apb01_checker)

  int unsigned n_reads [bit [15:0]];     // completed reads per address
  int n_ok, n_bad;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  // One completed APB read = psel & penable & pready with pwrite = 0
  function void write(lpddr5c_apb_agent_seq_item t);
    apb01_reg_t r;
    bit found;
    if (t.preset_n !== 1'b1) return;
    if (!(t.psel && t.penable && t.pready && !t.pwrite)) return;

    found = 1'b0;
    for (int i = 0; i < APB01_N; i++) begin
      r = apb01_entry(i);
      if (r.addr == t.paddr) begin
        found = 1'b1;
        n_reads[t.paddr] = n_reads.exists(t.paddr) ? n_reads[t.paddr] + 1 : 1;
        if (t.pslverr) begin
          n_bad++;
          `uvm_error("APB_01", $sformatf("%s (0x%04h): read returned PSLVERR", r.name, t.paddr))
        end
        else if ((t.prdata & r.mask) !== (r.exp & r.mask)) begin
          n_bad++;
          `uvm_error("APB_01", $sformatf("%s (0x%04h): expected 0x%08h, read 0x%08h", r.name, t.paddr, r.exp, t.prdata))
        end
        else begin
          n_ok++;
          `uvm_info("APB_01", $sformatf("%s (0x%04h) = 0x%08h  OK", r.name, t.paddr, t.prdata), UVM_LOW)
        end
        break;
      end
    end
    if (!found)
      `uvm_warning("APB_01", $sformatf("read of unlisted address 0x%04h (not checked)", t.paddr))
  endfunction

  function void check_phase(uvm_phase phase);
    apb01_reg_t r;
    for (int i = 0; i < APB01_N; i++) begin
      r = apb01_entry(i);
      if (!n_reads.exists(r.addr))
        `uvm_error("APB_01", $sformatf("%s (0x%04h) was never read", r.name, r.addr))
    end
    `uvm_info("APB_01", $sformatf("reset-default check: %0d reads OK, %0d bad", n_ok, n_bad), UVM_NONE)
  endfunction
endclass

class apb_ecc_enable_seq extends uvm_sequence #(lpddr5c_apb_agent_seq_item);
  `uvm_object_utils(apb_ecc_enable_seq)

  function new(string name = "apb_ecc_enable_seq");
    super.new(name);
  endfunction

  task body();
    lpddr5c_apb_agent_seq_item item;

    item = lpddr5c_apb_agent_seq_item::type_id::create("enable_ecc");
    start_item(item);
    item.paddr  = 16'h0060;
    item.pwdata = 32'h0000_0001;
    item.pwrite = 1'b1;
    finish_item(item);

    item = lpddr5c_apb_agent_seq_item::type_id::create("read_ecc_cfg");
    start_item(item);
    item.paddr  = 16'h0060;
    item.pwrite = 1'b0;
    finish_item(item);
  endtask
endclass

class apb_ecc_enable_checker extends uvm_subscriber #(lpddr5c_apb_agent_seq_item);
  `uvm_component_utils(apb_ecc_enable_checker)

  bit saw_ecc_write;
  bit saw_ecc_read;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  function void write(lpddr5c_apb_agent_seq_item item);
    if (!(item.psel && item.penable && item.pready) || item.paddr != 16'h0060)
      return;

    if (item.pslverr)
      `uvm_error("APB_ECC_ENABLE", "ECC_CFG APB transfer asserted PSLVERR")

    if (item.pwrite) begin
      if (item.pwdata[0] !== 1'b1)
        `uvm_error("APB_ECC_ENABLE",
          $sformatf("ECC_CFG write expected bit 0=1, got 0x%08h", item.pwdata))
      else
        saw_ecc_write = 1'b1;
    end
    else begin
      saw_ecc_read = 1'b1;
      if (item.prdata[0] !== 1'b1)
        `uvm_error("APB_ECC_ENABLE",
          $sformatf("ECC_CFG readback expected bit 0=1, got 0x%08h", item.prdata))
      else
        `uvm_info("APB_ECC_ENABLE",
          $sformatf("ECC_CFG readback confirms ECC enable: 0x%08h", item.prdata),
          UVM_LOW)
    end
  endfunction

  function void check_phase(uvm_phase phase);
    super.check_phase(phase);
    if (!saw_ecc_write)
      `uvm_error("APB_ECC_ENABLE", "ECC_CFG enable write was not observed")
    if (!saw_ecc_read)
      `uvm_error("APB_ECC_ENABLE", "ECC_CFG readback was not observed")
  endfunction
endclass

class apb_ecc_enable_test extends base_test;
  `uvm_component_utils(apb_ecc_enable_test)

  apb_ecc_enable_checker chk;

  function new(string name = "apb_ecc_enable_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    chk = apb_ecc_enable_checker::type_id::create("chk", this);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    env.apb_agent.monitor.ap.connect(chk.analysis_export);
  endfunction

  task run_phase(uvm_phase phase);
    apb_ecc_enable_seq seq;

    phase.raise_objection(this);
    uvm_root::get().set_timeout(1ms, 0);
    seq = apb_ecc_enable_seq::type_id::create("seq");
    seq.start(env.apb_agent.sequencer);
    #100ns;
    phase.drop_objection(this);
  endtask

  function void report_phase(uvm_phase phase);
    uvm_report_server server = uvm_report_server::get_server();
    if (server.get_severity_count(UVM_ERROR) + server.get_severity_count(UVM_FATAL) == 0)
      `uvm_info("APB_ECC_ENABLE", "*** APB_ECC_ENABLE_TEST PASSED ***", UVM_NONE)
    else
      `uvm_info("APB_ECC_ENABLE", "*** APB_ECC_ENABLE_TEST FAILED ***", UVM_NONE)
  endfunction
endclass

class apb_01_test extends base_test;
  `uvm_component_utils(apb_01_test)
  apb01_checker chk;

  function new(string name = "apb_01_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    chk = apb01_checker::type_id::create("chk", this);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    env.apb_agent.monitor.ap.connect(chk.analysis_export);
  endfunction

  task run_phase(uvm_phase phase);                  // replaces base_test run_phase
    apb01_read_seq rd = apb01_read_seq::type_id::create("rd");
    phase.raise_objection(this);
    rd.start(env.apb_agent.sequencer);              // nothing is written before these reads
    #500ns;
    phase.drop_objection(this);
  endtask

  function void report_phase(uvm_phase phase);
    uvm_report_server s = uvm_report_server::get_server();
    if (s.get_severity_count(UVM_ERROR) + s.get_severity_count(UVM_FATAL) == 0)
      `uvm_info("APB_01", "*** APB_01 PASSED ***", UVM_NONE)
    else
      `uvm_info("APB_01", "*** APB_01 FAILED ***", UVM_NONE)
  endfunction
endclass

class apb_wait_coverage_seq extends uvm_sequence #(lpddr5c_apb_agent_seq_item);
  `uvm_object_utils(apb_wait_coverage_seq)

  bit is_write = 1'b1;

  function new(string name = "apb_wait_coverage_seq"); super.new(name); endfunction

  task body();
    lpddr5c_apb_agent_seq_item item;
    item = lpddr5c_apb_agent_seq_item::type_id::create("wait_coverage_write");
    start_item(item);
    item.paddr = 16'h0000;
    item.pwdata = 32'h0000_0000;
    item.pwrite = is_write;
    finish_item(item);
  endtask
endclass

class apb_wait_coverage_test extends base_test;
  `uvm_component_utils(apb_wait_coverage_test)

  function new(string name = "apb_wait_coverage_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_transfer(int unsigned forced_wait_cycles, bit is_write);
    apb_wait_coverage_seq seq;
    seq = apb_wait_coverage_seq::type_id::create(
      $sformatf("wait_seq_%0d_%s", forced_wait_cycles,
                is_write ? "write" : "read"));
    seq.is_write = is_write;

    if (forced_wait_cycles == 0) begin
      force lpddr_tb_top.APB_vif.pready = 1'b1;
      fork
        seq.start(env.apb_agent.sequencer);
        begin
          wait (lpddr_tb_top.APB_vif.psel &&
                lpddr_tb_top.APB_vif.penable);
          wait (!lpddr_tb_top.APB_vif.psel);
        end
      join
      release lpddr_tb_top.APB_vif.pready;
    end
    else begin
      force lpddr_tb_top.APB_vif.pready = 1'b0;
      fork
        seq.start(env.apb_agent.sequencer);
        begin
          wait (lpddr_tb_top.APB_vif.psel &&
                lpddr_tb_top.APB_vif.penable);
          repeat (forced_wait_cycles) @(posedge lpddr_tb_top.pclk);
          @(negedge lpddr_tb_top.pclk);
          force lpddr_tb_top.APB_vif.pready = 1'b1;
          wait (!lpddr_tb_top.APB_vif.psel);
        end
      join
      release lpddr_tb_top.APB_vif.pready;
    end
  endtask

  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    uvm_root::get().set_timeout(1ms, 0);

    run_transfer(0, 1'b1);
    run_transfer(2, 1'b1);
    run_transfer(4, 1'b1);
    run_transfer(0, 1'b0);
    run_transfer(2, 1'b0);
    run_transfer(4, 1'b0);

    phase.drop_objection(this);
  endtask
endclass

//==============================================================================
// APB_02 : Write and readback
//
// Feature  : register read/write access
// Approach : walking-ones and walking-zeros patterns are written to every RW
//            register and each register is read back. Every transfer is
//            registered in the scoreboard (expect_apb) so the scoreboard checks
//            expected vs actual PADDR / PWRITE / data for each APB transfer.
//
// Per register:
//   1. read  the reset/original value (saved, address/direction checked only)
//   2. for i in 0..31 : write (1<<i)  then read back -> expect (1<<i)  & rw_mask
//   3. for i in 0..31 : write ~(1<<i) then read back -> expect ~(1<<i) & rw_mask
//   4. restore the original value (important for TIMING0, which the scoreboard
//      also decodes into tRCD/tRP/tRAS/tRC)
//
// ASSUMPTIONS - adjust to your environment:
//   * APB item fields driven by the driver: pwrite, paddr, pwdata
//   * agent sequencer path: env.apb_agent.sequencer
//   * base test class: lpddr5c_base_test with an "env" handle containing "scoreboard"
//   * RW registers per the register map: CTRL0-3, TIMING0-5, ECC_CFG, LP_CFG,
//     TRAIN_CFG, INTR_EN, TEST_CFG
//==============================================================================

/*class lpddr5c_apb_02_seq extends uvm_sequence #(lpddr5c_apb_agent_seq_item);

  `uvm_object_utils(lpddr5c_apb_02_seq)

  lpddr5c_scoreboard scbd;                 // set by the test

  // 0: driver sends NO response (item_done only) -> read data is taken from the scoreboard
  // 1: driver sends a response item with prdata -> use get_response()
  bit use_response = 1'b0;

  // list of RW register addresses / names under test
  bit [15:0] rw_regs[$];
  string     rw_names[$];

  function void add_reg(string n, bit [15:0] a);
    rw_names.push_back(n);
    rw_regs.push_back(a);
  endfunction

  function new(string name = "lpddr5c_apb_02_seq");
    super.new(name);
    // name , address  (RW registers only; RO STATUS INTR_STAT/TEST_STAT and WO INTR_CLR/TEST_CTRL excluded)
    add_reg("REG_CTRL0",     16'h0000);
    add_reg("REG_CTRL1",     16'h0004);
    add_reg("REG_CTRL2",     16'h0008);
    add_reg("REG_CTRL3",     16'h000C);
    add_reg("REG_TIMING0",   16'h0010);
    add_reg("REG_TIMING1",   16'h0014);
    add_reg("REG_TIMING2",   16'h0018);
    add_reg("REG_TIMING3",   16'h001C);
    add_reg("REG_TIMING4",   16'h0020);
    add_reg("REG_TIMING5",   16'h0024);
    add_reg("REG_ECC_CFG",   16'h0060);
    add_reg("REG_LP_CFG",    16'h0070);
    add_reg("REG_TRAIN_CFG", 16'h0080);
    add_reg("REG_INTR_EN",   16'h00A0);
    add_reg("REG_TEST_CFG",  16'h00F0);
  endfunction

  //----------------------------------------------------------
  // One APB write
  //----------------------------------------------------------
  task apb_write(bit [15:0] addr, bit [31:0] data);
    lpddr5c_apb_agent_seq_item req;
    if (scbd != null) scbd.expect_apb(1'b1, addr, data, 32'hFFFF_FFFF);
    req = lpddr5c_apb_agent_seq_item::type_id::create("wr_req");
    start_item(req);
    req.pwrite = 1'b1;
    req.paddr  = addr;
    req.pwdata = data;
    finish_item(req);
  endtask

  //----------------------------------------------------------
  // One APB read; exp_data/exp_mask are what the scoreboard must see on PRDATA
  //----------------------------------------------------------
  task apb_read(bit [15:0] addr, bit [31:0] exp_data, bit [31:0] exp_mask,
                output bit [31:0] rdata);
    lpddr5c_apb_agent_seq_item req;
    if (scbd != null) scbd.expect_apb(1'b0, addr, exp_data, exp_mask);
    req = lpddr5c_apb_agent_seq_item::type_id::create("rd_req");
    start_item(req);
    req.pwrite = 1'b0;
    req.paddr  = addr;
    req.pwdata = '0;
    finish_item(req);
    if (use_response) begin
      get_response(req);
      rdata = req.prdata;
    end
    else begin
      #20ns;                              // let the monitor/scoreboard see the completed transfer
      rdata = (scbd != null && scbd.apb_last_rdata.exists(addr)) ? scbd.apb_last_rdata[addr] : 32'h0;
    end
  endtask

  //----------------------------------------------------------
  // write pattern -> read back -> expect (pattern & rw_mask)
  //----------------------------------------------------------
  task write_read_pattern(bit [15:0] addr, bit [31:0] pattern, bit [31:0] mask);
    bit [31:0] rd;
    apb_write(addr, pattern);
    apb_read (addr, pattern & mask, mask, rd);
  endtask

  //----------------------------------------------------------
  // Body
  //----------------------------------------------------------
  task body();
    bit [31:0] orig, rd, mask;

    foreach (rw_regs[r]) begin
      bit [15:0] a = rw_regs[r];
      mask = (scbd != null) ? scbd.get_apb_rw_mask(a) : 32'hFFFF_FFFF;

      `uvm_info("APB_02", $sformatf("%s (0x%04h): walking ones / zeros (rw_mask=0x%08h)", rw_names[r], a, mask), UVM_LOW)

      // 1. save original value (only address / direction are checked: mask 0)
      apb_read(a, 32'h0, 32'h0, orig);

      // 2. walking ones
      for (int i = 0; i < 32; i++)
        write_read_pattern(a, 32'h1 << i, mask);

      // 3. walking zeros
      for (int i = 0; i < 32; i++)
        write_read_pattern(a, ~(32'h1 << i), mask);

      // 4. restore original value and confirm it
      write_read_pattern(a, orig, mask);
    end

    if (scbd != null) scbd.end_apb_expect();
  endtask

endclass : lpddr5c_apb_02_seq


//==============================================================================
// Test
//==============================================================================
class lpddr5c_apb_02_test extends base_test;

  `uvm_component_utils(lpddr5c_apb_02_test)

  function new(string name = "lpddr5c_apb_02_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    lpddr5c_apb_02_seq seq;

    phase.raise_objection(this);

    seq      = lpddr5c_apb_02_seq::type_id::create("seq");
    seq.scbd = env.scoreboard;

    uvm_top.set_timeout(2ms, 0);            // watchdog: never hang the run

    // No AXI traffic in this test: skip AXI-to-DFI matching checks
    env.scoreboard.en_addr_match = 1'b0;

    // Reserved / read-only bits must be masked here if a register is not fully RW, e.g.:
    // env.scoreboard.set_apb_rw_mask(16'h0010, 32'hFFFF_FFFF);

    seq.start(env.apb_agent.sequencer);

    #100ns;                                 // let the last transfer reach the scoreboard
    phase.drop_objection(this);
  endtask

endclass : lpddr5c_apb_02_test*/






///==============================================================================
// APB_02 : Write and readback
//
// Feature  : register read/write access
// Approach : walking-ones and walking-zeros patterns are written to every RW
//            register and each register is read back. Every transfer is
//            registered in the scoreboard (expect_apb) so the scoreboard checks
//            expected vs actual PADDR / PWRITE / data for each APB transfer.
//
// Per register:
//   1. read  the reset/original value (saved, address/direction checked only)
//   2. for i in 0..31 : write (1<<i)  then read back -> expect (1<<i)  & rw_mask
//   3. for i in 0..31 : write ~(1<<i) then read back -> expect ~(1<<i) & rw_mask
//   4. restore the original value (important for TIMING0, which the scoreboard
//      also decodes into tRCD/tRP/tRAS/tRC)
//
// ASSUMPTIONS - adjust to your environment:
//   * APB item fields driven by the driver: pwrite, paddr, pwdata
//   * agent sequencer path: env.apb_agent.sequencer
//   * base test class: lpddr5c_base_test with an "env" handle containing "scoreboard"
//   * RW registers per the register map: CTRL0-3, TIMING0-5, ECC_CFG, LP_CFG,
//     TRAIN_CFG, INTR_EN, TEST_CFG
//==============================================================================

class lpddr5c_apb_02_seq extends uvm_sequence #(lpddr5c_apb_agent_seq_item);

  `uvm_object_utils(lpddr5c_apb_02_seq)

  lpddr5c_scoreboard scbd;                 // set by the test

  // 0: driver sends NO response (item_done only) -> read data is taken from the scoreboard
  // 1: driver sends a response item with prdata -> use get_response()
  bit use_response = 1'b0;

  // list of RW register addresses / names under test
  bit [15:0] rw_regs[$];
  string     rw_names[$];

  function void add_reg(string n, bit [15:0] a);
    rw_names.push_back(n);
    rw_regs.push_back(a);
  endfunction

  function new(string name = "lpddr5c_apb_02_seq");
    super.new(name);
    // name , address  (RW registers only; RO STATUSINTR_STAT/TEST_STAT and WO INTR_CLR/TEST_CTRL excluded)
    add_reg("REG_CTRL0",     16'h0000);
    add_reg("REG_CTRL1",     16'h0004);
    add_reg("REG_CTRL2",     16'h0008);
    add_reg("REG_CTRL3",     16'h000C);
    add_reg("REG_TIMING0",   16'h0010);
    add_reg("REG_TIMING1",   16'h0014);
    add_reg("REG_TIMING2",   16'h0018);
    add_reg("REG_TIMING3",   16'h001C);
    add_reg("REG_TIMING4",   16'h0020);
    add_reg("REG_TIMING5",   16'h0024);
    add_reg("REG_ECC_CFG",   16'h0060);
    add_reg("REG_LP_CFG",    16'h0070);
    add_reg("REG_TRAIN_CFG", 16'h0080);
    add_reg("REG_INTR_EN",   16'h00A0);
    add_reg("REG_TEST_CFG",  16'h00F0);
  endfunction

  //----------------------------------------------------------
  // One APB write
  //----------------------------------------------------------
  task apb_write(bit [15:0] addr, bit [31:0] data, bit exp_slverr = 1'b0);
    lpddr5c_apb_agent_seq_item req;
    if (scbd != null) scbd.expect_apb(1'b1, addr, data, 32'hFFFF_FFFF, exp_slverr);
    req = lpddr5c_apb_agent_seq_item::type_id::create("wr_req");
    start_item(req);
    req.pwrite = 1'b1;
    req.paddr  = addr;
    req.pwdata = data;
    finish_item(req);
  endtask

  //----------------------------------------------------------
  // One APB read; exp_data/exp_mask are what the scoreboard must see on PRDATA
  //----------------------------------------------------------
  task apb_read(bit [15:0] addr, bit [31:0] exp_data, bit [31:0] exp_mask,
                output bit [31:0] rdata, input bit exp_slverr = 1'b0);
    lpddr5c_apb_agent_seq_item req;
    if (scbd != null) scbd.expect_apb(1'b0, addr, exp_data, exp_mask, exp_slverr);
    req = lpddr5c_apb_agent_seq_item::type_id::create("rd_req");
    start_item(req);
    req.pwrite = 1'b0;
    req.paddr  = addr;
    req.pwdata = '0;
    finish_item(req);
    if (use_response) begin
      get_response(req);
      rdata = req.prdata;
    end
    else begin
      #20ns;                              // let the monitor/scoreboard see the completed transfer
      rdata = (scbd != null && scbd.apb_last_rdata.exists(addr)) ? scbd.apb_last_rdata[addr] : 32'h0;
    end
  endtask

  //----------------------------------------------------------
  // write pattern -> read back -> expect (pattern & rw_mask)
  //----------------------------------------------------------
  task write_read_pattern(bit [15:0] addr, bit [31:0] pattern, bit [31:0] mask);
    bit [31:0] rd;
    apb_write(addr, pattern);
    apb_read (addr, pattern & mask, mask, rd);
  endtask

  //----------------------------------------------------------
  // Body
  //----------------------------------------------------------
  task body();
    bit [31:0] orig, rd, mask;

    foreach (rw_regs[r]) begin
      bit [15:0] a = rw_regs[r];
      mask = (scbd != null) ? scbd.get_apb_rw_mask(a) : 32'hFFFF_FFFF;

      `uvm_info("APB_02", $sformatf("%s (0x%04h): walking ones / zeros (rw_mask=0x%08h)", rw_names[r], a, mask), UVM_LOW)

      // 1. save original value (only address / direction are checked: mask 0)
      apb_read(a, 32'h0, 32'h0, orig);

      // 2. walking ones
      for (int i = 0; i < 32; i++)
        write_read_pattern(a, 32'h1 << i, mask);

      // 3. walking zeros
      for (int i = 0; i < 32; i++)
        write_read_pattern(a, ~(32'h1 << i), mask);

      // 4. restore original value and confirm it
      write_read_pattern(a, orig, mask);
    end

    if (scbd != null) scbd.end_apb_expect();
  endtask

endclass : lpddr5c_apb_02_seq


//==============================================================================
// Test
//==============================================================================
class lpddr5c_apb_02_test extends base_test;

  `uvm_component_utils(lpddr5c_apb_02_test)

  function new(string name = "lpddr5c_apb_02_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    lpddr5c_apb_02_seq seq;

    phase.raise_objection(this);

    seq      = lpddr5c_apb_02_seq::type_id::create("seq");
    seq.scbd = env.scoreboard;

   // uvm_top.set_timeout(2ms, 0);            // watchdog: never hang the run
   uvm_root::get().set_timeout(2ms, 0);

    // No AXI traffic in this test: skip AXI-to-DFI matching checks
    env.scoreboard.en_addr_match = 1'b0;

    // Reserved / read-only bits must be masked here if a register is not fully RW, e.g.:
    // env.scoreboard.set_apb_rw_mask(16'h0010, 32'hFFFF_FFFF);

    seq.start(env.apb_agent.sequencer);

    #100ns;                                 // let the last transfer reach the scoreboard
    phase.drop_objection(this);
  endtask

endclass : lpddr5c_apb_02_test


//==============================================================================
// APB_03 : Invalid address
//
// Feature  : invalid-address error handling
// Approach : read and write unmapped addresses (0x0100 and a few others).
//            Every access must complete with PSLVERR = 1 and every read must
//            return 0xDEADBEEF. Also checks that the invalid writes did not
//            disturb a mapped register and that a mapped access afterwards
//            completes normally (PSLVERR = 0).
//
// Checked by the scoreboard through expect_apb(..., exp_slverr):
//   PWRITE, PADDR, PWDATA / PRDATA, PSLVERR (expected 1)
//==============================================================================
class lpddr5c_apb_03_seq extends uvm_sequence #(lpddr5c_apb_agent_seq_item);

  `uvm_object_utils(lpddr5c_apb_03_seq)

  lpddr5c_scoreboard scbd;                 // set by the test

  // 0: driver sends NO response (item_done only) -> read data is taken from the scoreboard
  // 1: driver sends a response item with prdata -> use get_response()
  bit use_response = 1'b0;

  // unmapped addresses (0x0100 is the one required by the test plan).
  // Edit if your decode maps any of the extra ones.
  bit [15:0] bad_addrs[$] = '{16'h0100, 16'h0104, 16'h0200, 16'h1000};

  bit [31:0] invalid_rdata = 32'hDEAD_BEEF;
  bit [15:0] ref_reg       = 16'h0004;     // mapped RW register used as the "untouched" reference

  function new(string name = "lpddr5c_apb_03_seq");
    super.new(name);
  endfunction

  //----------------------------------------------------------
  // Self-contained helpers (independent of the APB_02 sequence class)
  //----------------------------------------------------------
  task wr_x(bit [15:0] addr, bit [31:0] data, bit exp_slverr);
    lpddr5c_apb_agent_seq_item req;
    if (scbd != null) scbd.expect_apb(1'b1, addr, data, 32'hFFFF_FFFF, exp_slverr);
    req = lpddr5c_apb_agent_seq_item::type_id::create("wr_req");
    start_item(req);
    req.pwrite = 1'b1;
    req.paddr  = addr;
    req.pwdata = data;
    finish_item(req);
  endtask

  task rd_x(bit [15:0] addr, bit [31:0] exp_data, bit [31:0] exp_mask,
            bit exp_slverr, output bit [31:0] rdata);
    lpddr5c_apb_agent_seq_item req;
    if (scbd != null) scbd.expect_apb(1'b0, addr, exp_data, exp_mask, exp_slverr);
    req = lpddr5c_apb_agent_seq_item::type_id::create("rd_req");
    start_item(req);
    req.pwrite = 1'b0;
    req.paddr  = addr;
    req.pwdata = '0;
    finish_item(req);
    if (use_response) begin
      get_response(req);
      rdata = req.prdata;
    end
    else begin
      #20ns;                              // let the monitor/scoreboard see the completed transfer
      rdata = (scbd != null && scbd.apb_last_rdata.exists(addr)) ? scbd.apb_last_rdata[addr] : 32'h0;
    end
  endtask

  //----------------------------------------------------------
  // Body
  //----------------------------------------------------------
  task body();
    bit [31:0] ref_before, rd;

    // reference value of a mapped register (address / direction checked only)
    rd_x(ref_reg, 32'h0, 32'h0, 1'b0, ref_before);

    foreach (bad_addrs[i]) begin
      bit [15:0] a = bad_addrs[i];
      `uvm_info("APB_03", $sformatf("Unmapped address 0x%04h: read, write, read", a), UVM_LOW)

      // read: PSLVERR=1, PRDATA=0xDEADBEEF
      rd_x(a, invalid_rdata, 32'hFFFF_FFFF, 1'b1, rd);

      // writes: PSLVERR=1 (two patterns)
      wr_x(a, 32'hA5A5_A5A5, 1'b1);
      wr_x(a, 32'h5A5A_5A5A, 1'b1);

      // read again: a write must not create storage at an unmapped address
      rd_x(a, invalid_rdata, 32'hFFFF_FFFF, 1'b1, rd);
    end

    // mapped register must be unchanged and answer without error
    rd_x(ref_reg, ref_before, 32'hFFFF_FFFF, 1'b0, rd);

    if (scbd != null) scbd.end_apb_expect();
  endtask

endclass : lpddr5c_apb_03_seq


class lpddr5c_apb_03_test extends base_test;

  `uvm_component_utils(lpddr5c_apb_03_test)

  function new(string name = "lpddr5c_apb_03_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    lpddr5c_apb_03_seq seq;

    phase.raise_objection(this);

    seq      = lpddr5c_apb_03_seq::type_id::create("seq");
    seq.scbd = env.scoreboard;

   // uvm_top.set_timeout(1ms, 0);            // watchdog
   uvm_root::get().set_timeout(1ms, 0);

    env.scoreboard.en_addr_match = 1'b0;    // no AXI traffic
    env.scoreboard.chk_apb_decode = 1'b1;   // unmapped address => PSLVERR=1, PRDATA=0xDEADBEEF

    seq.start(env.apb_agent.sequencer);

    #100ns;
    phase.drop_objection(this);
  endtask

endclass : lpddr5c_apb_03_test




//==============================================================================
// APB_04 : Write to status registers
//
// Feature  : status register protection
// Approach : write STATUS0..STATUS3 (0x40..0x4C) with several patterns.
//            Every write must complete with PSLVERR = 1. Reads of the status
//            registers must still complete with PSLVERR = 0.
//
// Status registers (counters, training status, ...) can change by themselves,
// so read data is NOT compared. A warning is printed if a read returns exactly
// the pattern just written (the write may have taken effect).
//==============================================================================
class lpddr5c_apb_04_seq extends uvm_sequence #(lpddr5c_apb_agent_seq_item);

  `uvm_object_utils(lpddr5c_apb_04_seq)

  lpddr5c_scoreboard scbd;                 // set by the test
  bit use_response = 1'b0;                 // see lpddr5c_apb_03_seq

  bit [15:0] status_regs[$] = '{16'h0040, 16'h0044, 16'h0048, 16'h004C};
  string     status_names[$] = '{"REG_STATUS0", "REG_STATUS1", "REG_STATUS2", "REG_STATUS3"};
  bit [31:0] patterns[$]     = '{32'hFFFF_FFFF, 32'h0000_0000, 32'hA5A5_A5A5, 32'h5A5A_5A5A};

  function new(string name = "lpddr5c_apb_04_seq");
    super.new(name);
  endfunction

  task wr_x(bit [15:0] addr, bit [31:0] data, bit exp_slverr);
    lpddr5c_apb_agent_seq_item req;
    if (scbd != null) scbd.expect_apb(1'b1, addr, data, 32'hFFFF_FFFF, exp_slverr);
    req = lpddr5c_apb_agent_seq_item::type_id::create("wr_req");
    start_item(req);
    req.pwrite = 1'b1;
    req.paddr  = addr;
    req.pwdata = data;
    finish_item(req);
  endtask

  // exp_mask = 0: only direction / address / PSLVERR are checked (status data is not predictable)
  task rd_x(bit [15:0] addr, bit [31:0] exp_data, bit [31:0] exp_mask,
            bit exp_slverr, output bit [31:0] rdata);
    lpddr5c_apb_agent_seq_item req;
    if (scbd != null) scbd.expect_apb(1'b0, addr, exp_data, exp_mask, exp_slverr);
    req = lpddr5c_apb_agent_seq_item::type_id::create("rd_req");
    start_item(req);
    req.pwrite = 1'b0;
    req.paddr  = addr;
    req.pwdata = '0;
    finish_item(req);
    if (use_response) begin
      get_response(req);
      rdata = req.prdata;
    end
    else begin
      #20ns;
      rdata = (scbd != null && scbd.apb_last_rdata.exists(addr)) ? scbd.apb_last_rdata[addr] : 32'h0;
    end
  endtask

  task body();
    bit [31:0] rd;

    foreach (status_regs[r]) begin
      bit [15:0] a = status_regs[r];
      `uvm_info("APB_04", $sformatf("%s (0x%04h): write must return PSLVERR=1", status_names[r], a), UVM_LOW)

      // status register is readable
      rd_x(a, 32'h0, 32'h0, 1'b0, rd);

      foreach (patterns[i]) begin
        wr_x(a, patterns[i], 1'b1);              // write rejected: PSLVERR=1
        rd_x(a, 32'h0, 32'h0, 1'b0, rd);         // read still OK: PSLVERR=0
        if (rd === patterns[i] && patterns[i] != 32'h0)
          `uvm_warning("APB_04",
            $sformatf("%s read back 0x%08h right after writing the same value - the write may have taken effect",
                      status_names[r], rd))
      end
    end

    if (scbd != null) scbd.end_apb_expect();
  endtask

endclass : lpddr5c_apb_04_seq


class lpddr5c_apb_04_test extends base_test;

  `uvm_component_utils(lpddr5c_apb_04_test)

  function new(string name = "lpddr5c_apb_04_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    lpddr5c_apb_04_seq seq;

    phase.raise_objection(this);

    seq      = lpddr5c_apb_04_seq::type_id::create("seq");
    seq.scbd = env.scoreboard;

   // uvm_top.set_timeout(1ms, 0);            // watchdog
   uvm_root::get().set_timeout(1ms, 0);

    env.scoreboard.en_addr_match   = 1'b0;  // no AXI traffic
    env.scoreboard.chk_apb_ro_write = 1'b1; // write to STATUS0-3 => PSLVERR=1

    seq.start(env.apb_agent.sequencer);

    #100ns;
    phase.drop_objection(this);
  endtask

endclass : lpddr5c_apb_04_test


// ---------------- APB_06: handshake timing (APB4 protocol) ----------------
// Checks   : PREADY comes exactly one cycle after PENABLE (one wait state), PREADY is a one-cycle pulse,
//            control signals stay stable in the access phase, back-to-back transfers work.
// Stimulus : (1) 16 transfers through the APB agent
//            (2) 40 transfers driven on the pins with PSEL held high between transfers
//                (setup phase directly after the completing access cycle).

class apb06_stats;                                   // shared between the checker module and the test
  static int unsigned n_xfer;
  static int unsigned n_b2b;                         // setup cycle directly after a completed access
  static int unsigned n_viol;
  static int unsigned min_wait = 32'hFFFF_FFFF;
  static int unsigned max_wait;
endclass

// Protocol checker, bound into every lpddr5c_reg_cfg instance (the APB slave)
module apb06_chk (
  input logic        pclk, preset_n, psel, penable, pwrite, pready, pslverr,
  input logic [15:0] paddr,
  input logic [31:0] pwdata
);
  import uvm_pkg::*;

  bit          psel_q, penable_q, pready_q, complete_q;
  int unsigned acc_cycle, waits;
  bit [15:0]   s_addr;
  bit          s_write;
  bit [31:0]   s_wdata;

  function void viol(string msg);
    apb06_stats::n_viol++;
    uvm_report_error("APB_06", $sformatf("%s at %0t", msg, $time));
  endfunction

  always @(posedge pclk) begin
    if (preset_n === 1'b1 && !$test$plusargs("APB_WAIT_COVERAGE")) begin

      // setup cycle
      if (psel && !penable) begin
        s_addr  = paddr;
        s_write = pwrite;
        s_wdata = pwdata;
        if (complete_q) apb06_stats::n_b2b++;
        if (pready) viol("pready high in a setup cycle");
        acc_cycle = 0;
      end

      // access cycles
      if (psel && penable) begin
        if (!penable_q) begin
          acc_cycle = 1;
          if (!psel_q) viol("penable high without a preceding setup cycle");
        end
        else
          acc_cycle = acc_cycle + 1;

        if (acc_cycle == 1 && pready)  viol("pready already high in the first access cycle (expected one wait state)");
        if (acc_cycle == 2 && !pready) viol("pready not high one cycle after penable");
        if (acc_cycle >  2)            viol("access phase longer than one wait state");
        if (acc_cycle >= 2 && (paddr !== s_addr || pwrite !== s_write || (s_write && pwdata !== s_wdata)))
          viol("address / control / write data changed during the access phase");

        if (pready) begin
          waits = acc_cycle - 1;
          apb06_stats::n_xfer++;
          if (waits < apb06_stats::min_wait) apb06_stats::min_wait = waits;
          if (waits > apb06_stats::max_wait) apb06_stats::max_wait = waits;
        end
      end

      // rules that apply every cycle
      if (pready && !(psel && penable))              viol("pready outside an access phase");
      if (pready && pready_q)                        viol("pready high for more than one cycle");
      if (pslverr && !pready)                        viol("pslverr high without pready");
      if (penable_q && pready_q && penable)          viol("penable still high in the cycle after pready");
      if (psel_q && penable_q && !pready_q && !psel) viol("psel dropped before pready");

      complete_q = (psel && penable && pready);
    end
    psel_q    = psel;
    penable_q = penable;
    pready_q  = pready;
  end
endmodule

bind lpddr5c_reg_cfg apb06_chk u_apb06_chk (
  .pclk(pclk), .preset_n(preset_n), .psel(psel), .penable(penable), .pwrite(pwrite),
  .pready(pready), .pslverr(pslverr), .paddr(paddr), .pwdata(pwdata)
);

// (1) through the agent: the driver drops PSEL between items
class apb06_agent_seq extends uvm_sequence #(lpddr5c_apb_agent_seq_item);
  `uvm_object_utils(apb06_agent_seq)
  function new(string name = "apb06_agent_seq"); super.new(name); endfunction

  task one(bit wr, bit [15:0] a, bit [31:0] d);
    lpddr5c_apb_agent_seq_item r = lpddr5c_apb_agent_seq_item::type_id::create("r");
    start_item(r);
    r.paddr = a;  r.pwrite = wr;  r.pwdata = d;
    finish_item(r);
  endtask

  task body();
    for (int i = 0; i < 8; i++) begin
      one(1'b1, 16'h0014, 32'hC000_0000 + i);    // TIMING1
      one(1'b0, 16'h0014, 32'h0);
    end
  endtask
endclass

// (2) pin level: PSEL stays high, a new setup cycle follows directly after the completing access cycle
class apb06_pin_seq extends uvm_sequence #(lpddr5c_apb_agent_seq_item);
  `uvm_object_utils(apb06_pin_seq)

  virtual lpddr5c_APB_if vif;
  int n_pairs  = 20;
  int mismatch;
  int bad_wait;

  function new(string name = "apb06_pin_seq"); super.new(name); endfunction

  // call right after a clocking event; returns right after the event that sampled PREADY = 1
  task xfer(bit wr, bit [15:0] a, bit [31:0] d, output bit [31:0] rd, output int waits);
    vif.drv_cb.psel    <= 1'b1;
    vif.drv_cb.penable <= 1'b0;
    vif.drv_cb.pwrite  <= wr;
    vif.drv_cb.paddr   <= a;
    vif.drv_cb.pwdata  <= d;
    @(vif.drv_cb);                                   // end of the setup cycle
    vif.drv_cb.penable <= 1'b1;
    waits = 0;
    forever begin
      @(vif.drv_cb);                                 // end of an access cycle: sample PREADY
      if (vif.drv_cb.pready === 1'b1) begin
        rd = vif.drv_cb.prdata;
        break;
      end
      waits++;
    end
  endtask

  task body();
    bit [31:0] rd, v;
    int w;

    if (!uvm_resource_db#(virtual lpddr5c_APB_if)::read_by_name("*", "vif", vif, this))
      `uvm_fatal("APB_06", "APB vif not found in uvm_resource_db")

    @(vif.drv_cb);
    for (int i = 0; i < n_pairs; i++) begin
      v = 32'hA000_0000 + i;
      xfer(1'b1, 16'h0014, v,    rd, w);  if (w != 1) bad_wait++;
      xfer(1'b0, 16'h0014, 32'h0, rd, w); if (w != 1) bad_wait++;
      if (rd !== v) begin
        mismatch++;
        `uvm_error("APB_06", $sformatf("back-to-back readback %0d: wrote 0x%08h, read 0x%08h", i, v, rd))
      end
    end
    vif.drv_cb.psel    <= 1'b0;
    vif.drv_cb.penable <= 1'b0;
    vif.drv_cb.pwrite  <= 1'b0;
    vif.drv_cb.paddr   <= '0;
    vif.drv_cb.pwdata  <= '0;
    @(vif.drv_cb);
  endtask
endclass

class apb_06_test extends base_test;
  `uvm_component_utils(apb_06_test)

  function new(string name = "apb_06_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);                   // replaces base_test run_phase
    apb06_agent_seq a_s = apb06_agent_seq::type_id::create("a_s");
    apb06_pin_seq   p_s = apb06_pin_seq::type_id::create("p_s");
    phase.raise_objection(this);
    a_s.start(env.apb_agent.sequencer);
    #100ns;
    p_s.start(env.apb_agent.sequencer);              // does not send items; drives the pins itself
    #200ns;
    if (p_s.bad_wait != 0)
      `uvm_error("APB_06", $sformatf("%0d pin-level transfer(s) did not have exactly one wait state", p_s.bad_wait))
    phase.drop_objection(this);
  endtask

  function void check_phase(uvm_phase phase);
    super.check_phase(phase);
    // 16 agent transfers + 40 pin-level transfers
    if (apb06_stats::n_xfer != 56)
      `uvm_error("APB_06", $sformatf("checker saw %0d transfers, expected 56", apb06_stats::n_xfer))
    if (apb06_stats::min_wait != 1 || apb06_stats::max_wait != 1)
      `uvm_error("APB_06", $sformatf("wait states min=%0d max=%0d, expected exactly 1", apb06_stats::min_wait, apb06_stats::max_wait))
    if (apb06_stats::n_b2b < 39)
      `uvm_error("APB_06", $sformatf("only %0d back-to-back transfers seen, expected at least 39", apb06_stats::n_b2b))
    `uvm_info("APB_06", $sformatf("transfers=%0d back-to-back=%0d wait states min=%0d max=%0d violations=%0d",
              apb06_stats::n_xfer, apb06_stats::n_b2b, apb06_stats::min_wait, apb06_stats::max_wait, apb06_stats::n_viol), UVM_NONE)
  endfunction

  function void report_phase(uvm_phase phase);
    uvm_report_server s = uvm_report_server::get_server();
    if (s.get_severity_count(UVM_ERROR) + s.get_severity_count(UVM_FATAL) == 0 && apb06_stats::n_viol == 0)
      `uvm_info("APB_06", "*** APB_06 PASSED ***", UVM_NONE)
    else
      `uvm_info("APB_06", "*** APB_06 FAILED ***", UVM_NONE)
  endfunction
endclass

// ---------------- DFI_01: CA opcodes ----------------
// Issues ACT, WR, RD, PRE and REF through the real controller and compares every dfi_ca value (and the
// address / dfi_rw that go with it) with the scheduler encodings in lpddr5c_cmd_scheduler.sv (lines 105-117).
//
//   write A  (bank 5, row 0x1234) -> ACT, WR      closed bank
//   read  A                       -> RD           row hit
//   write B  (bank 5, row 0x5678) -> PRE, ACT, WR row miss
//   refresh enabled (CTRL0[8])    -> REF          no traffic, first command after the accesses

localparam bit [5:0] DFI01_CA_RD  = 6'h01;
localparam bit [5:0] DFI01_CA_WR  = 6'h02;
localparam bit [5:0] DFI01_CA_ACT = 6'h03;
localparam bit [5:0] DFI01_CA_PRE = 6'h04;
localparam bit [5:0] DFI01_CA_PREA = 6'h05;
localparam bit [5:0] DFI01_CA_REF = 6'h06;

function automatic string dfi01_ca_name(bit [5:0] c);
  case (c)
    6'h00: return "NOP";   6'h01: return "RD";    6'h02: return "WR";    6'h03: return "ACT";
    6'h04: return "PRE";   6'h05: return "PREA";  6'h06: return "REF";   6'h07: return "MRW";
    6'h08: return "MRR";   6'h09: return "SRE";   6'h0A: return "SRX";   6'h0B: return "PDE";
    6'h0C: return "PDX";
    default: return "UNDEFINED";
  endcase
endfunction

class dfi01_apb_seq extends uvm_sequence #(lpddr5c_apb_agent_seq_item);
  `uvm_object_utils(dfi01_apb_seq)
  function new(string name = "dfi01_apb_seq"); super.new(name); endfunction
  task body();
    lpddr5c_apb_agent_seq_item r = lpddr5c_apb_agent_seq_item::type_id::create("r");
    start_item(r);
    r.paddr  = 16'h0000;            // CTRL0
    r.pwdata = 32'h0000_0110;       // refresh enable and handshake-only training start
    r.pwrite = 1'b1;
    finish_item(r);
  endtask
endclass

class dfi01_axi_seq extends uvm_sequence #(lpddr5c_axi_agent_seq_item);
  `uvm_object_utils(dfi01_axi_seq)
  function new(string name = "dfi01_axi_seq"); super.new(name); endfunction

  task wr(bit [31:0] a, bit [127:0] d);
    lpddr5c_axi_agent_seq_item it = lpddr5c_axi_agent_seq_item::type_id::create("it");
    start_item(it);
    it.is_write = 1'b1;  it.axi_awid = 4'h1;  it.axi_awaddr = a;
    it.axi_awlen = 8'd0; it.axi_awsize = 3'd4; it.axi_awburst = 2'b01;
    it.axi_wdata = d;    it.axi_wstrb = 16'hFFFF; it.axi_wlast = 1'b1;
    it.axi_awvalid = 1'b1; it.axi_wvalid = 1'b1;  it.axi_bready = 1'b1;
    finish_item(it);
  endtask

  task rd(bit [31:0] a);
    lpddr5c_axi_agent_seq_item it = lpddr5c_axi_agent_seq_item::type_id::create("it");
    start_item(it);
    it.is_write = 1'b0;  it.axi_arid = 4'h1;  it.axi_araddr = a;
    it.axi_arlen = 8'd0; it.axi_arsize = 3'd4; it.axi_arburst = 2'b01;
    it.axi_arvalid = 1'b1; it.axi_rready = 1'b1;
    finish_item(it);
  endtask

  task body();
    wr(32'h1080_0A00, 128'h1111);   // closed bank : ACT, WR
    rd(32'h1080_0A00);          // row hit     : RD
    wr(32'h1081_0A00, 128'h2222);   // row miss    : PRE, ACT, WR
  endtask
endclass

class dfi01_checker extends uvm_subscriber #(lpddr5c_dfi_agent_seq_item);
  `uvm_component_utils(dfi01_checker)

  typedef struct { bit [5:0] ca; bit [31:0] addr; bit rw; int unsigned order; } cmd_t;

  int  n_ref;
  int  n_commands;
  int  n_rd_repeat;                 // consecutive identical RD commands that were collapsed (finding F-01)
  cmd_t access_q[$];
  cmd_t refresh_prea_q[$];
  cmd_t ref_q[$];

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  function bit ca_defined(bit [5:0] c);
    return (c >= 6'h01) && (c <= 6'h0C);
  endfunction

  // one item per clock from the monitor: keep only real commands (CS low and CA != NOP)
  function void write(lpddr5c_dfi_agent_seq_item t);
    cmd_t c;
    if (t.dfi_cs_n !== 1'b0 || t.dfi_ca === 6'h00) return;

    c.ca = t.dfi_ca;  c.addr = t.dfi_addr;  c.rw = t.dfi_rw;
    c.order = ++n_commands;

    if (t.dfi_ca_bus[11:6] !== 6'h00)
      `uvm_error("DFI_01", $sformatf("channel 1 CA is not NOP (0x%02h) at %0t", t.dfi_ca_bus[11:6], $time))
    if (!ca_defined(c.ca))
      `uvm_error("DFI_01", $sformatf("undefined CA code 0x%02h at %0t", c.ca, $time))

    if (c.ca == DFI01_CA_REF) begin
      ref_q.push_back(c);
      n_ref++;
    end
    else if (c.ca == DFI01_CA_PREA) begin
      refresh_prea_q.push_back(c);
    end
    else begin
      access_q.push_back(c);
    end
  endfunction

  function void chk_refresh_prea(cmd_t c);
    if (c.ca !== DFI01_CA_PREA)
      `uvm_error("DFI_01", $sformatf("refresh maintenance: dfi_ca = 0x%02h (%s), expected PREA",
                                     c.ca, dfi01_ca_name(c.ca)))
    else if (c.rw !== 1'b0)
      `uvm_error("DFI_01", $sformatf("PREA: dfi_rw = %0b, expected 0", c.rw))
    else
      `uvm_info("DFI_01",
        $sformatf("PREA: dfi_ca = 0x%02h (PREA) rw=0 OK (dfi_addr=0x%08h is don't-care)",
                  c.ca, c.addr), UVM_LOW)
  endfunction

  function void chk_ref(cmd_t c);
    if (c.ca !== DFI01_CA_REF)
      `uvm_error("DFI_01", $sformatf("REF: dfi_ca = 0x%02h (%s), expected REF",
                                     c.ca, dfi01_ca_name(c.ca)))
    else if (c.rw !== 1'b0)
      `uvm_error("DFI_01", $sformatf("REF: dfi_rw = %0b, expected 0", c.rw))
    else
      `uvm_info("DFI_01",
        $sformatf("REF: dfi_ca = 0x%02h (REF) rw=0 OK (dfi_addr=0x%08h is don't-care)",
                  c.ca, c.addr), UVM_LOW)
  endfunction

  function void chk(string role, cmd_t c, bit [5:0] exp_ca, bit [31:0] exp_addr, bit exp_rw);
    if (c.ca !== exp_ca)
      `uvm_error("DFI_01", $sformatf("%s: dfi_ca = 0x%02h (%s), expected 0x%02h (%s)",
                                     role, c.ca, dfi01_ca_name(c.ca), exp_ca, dfi01_ca_name(exp_ca)))
    else if (c.addr !== exp_addr)
      `uvm_error("DFI_01", $sformatf("%s: dfi_addr = 0x%08h, expected 0x%08h", role, c.addr, exp_addr))
    else if (c.rw !== exp_rw)
      `uvm_error("DFI_01", $sformatf("%s: dfi_rw = %0b, expected %0b", role, c.rw, exp_rw))
    else
      `uvm_info("DFI_01", $sformatf("%s: dfi_ca = 0x%02h (%s) addr=0x%08h rw=%0b  OK", role, c.ca, dfi01_ca_name(c.ca), c.addr, c.rw), UVM_LOW)
  endfunction

  function void check_phase(uvm_phase phase);
    // collapse consecutive identical RD commands (the controller may repeat a read, finding F-01)
    cmd_t e[$];
    foreach (access_q[i]) begin
      if (e.size() > 0 && access_q[i].ca == DFI01_CA_RD && e[e.size()-1].ca == DFI01_CA_RD &&
          e[e.size()-1].addr == access_q[i].addr)
        n_rd_repeat++;
      else
        e.push_back(access_q[i]);
    end

    if (e.size() != 6)
      `uvm_error("DFI_01", $sformatf("expected 6 commands for the accesses (ACT WR RD PRE ACT WR), saw %0d", e.size()))
    if (e.size() >= 1) chk("ACT  (closed bank)", e[0], DFI01_CA_ACT, 32'h1080_0A00, 1'b0);
    if (e.size() >= 2) chk("WR   (first write)", e[1], DFI01_CA_WR,  32'h1080_0A00, 1'b1);
    if (e.size() >= 3) chk("RD   (row hit)",     e[2], DFI01_CA_RD,  32'h1080_0A00, 1'b0);
    if (e.size() >= 4) chk("PRE  (row miss)",    e[3], DFI01_CA_PRE, 32'h1081_0A00, 1'b0);
    if (e.size() >= 5) chk("ACT  (new row)",     e[4], DFI01_CA_ACT, 32'h1081_0A00, 1'b0);
    if (e.size() >= 6) chk("WR   (second write)",e[5], DFI01_CA_WR,  32'h1081_0A00, 1'b1);

    // REF is intentionally exercised while all DRAM banks are still closed.
    // Its address bus is don't-care; the RTL may leave the previous address there.
    if (ref_q.size() == 0)
      `uvm_error("DFI_01", "no REF command seen while refresh was enabled")
    else
      chk_ref(ref_q[0]);

    if (refresh_prea_q.size() != 1)
      `uvm_error("DFI_01",
        $sformatf("expected 1 refresh PREA command before REF, saw %0d", refresh_prea_q.size()))
    else begin
      chk_refresh_prea(refresh_prea_q[0]);
      if (access_q.size() > 0 && refresh_prea_q[0].order <= access_q[access_q.size()-1].order)
        `uvm_error("DFI_01", "refresh PREA occurred before the access commands completed")
      if (ref_q.size() > 0 && refresh_prea_q[0].order >= ref_q[0].order)
        `uvm_error("DFI_01", "refresh PREA did not precede the REF command")
    end

    if (n_rd_repeat != 0)
      `uvm_warning("DFI_01", $sformatf("%0d repeated RD command(s) to the same address were collapsed (see F-01)", n_rd_repeat))
  endfunction
endclass

class dfi_01_test extends base_test;
  `uvm_component_utils(dfi_01_test)
  dfi01_checker chk;

  function new(string name = "dfi_01_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    chk = dfi01_checker::type_id::create("chk", this);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    env.dfi_agent.monitor.ap.connect(chk.analysis_export);
  endfunction

  task run_phase(uvm_phase phase);                 // replaces base_test run_phase
    dfi01_apb_seq apb_s = dfi01_apb_seq::type_id::create("apb_s");
    dfi01_axi_seq axi_s = dfi01_axi_seq::type_id::create("axi_s");

    phase.raise_objection(this);
    lpddr_tb_top.dram.allow_refab_with_open_banks = 1'b1;
    apb_s.start(env.apb_agent.sequencer);
    fork
      wait (lpddr_tb_top.dut.training_done === 1'b1);
      begin
        #20us;
        if (lpddr_tb_top.dut.training_done !== 1'b1)
          `uvm_error("DFI_01", "training did not complete before refresh test")
      end
    join_any
    disable fork;
    #100ns;
    axi_s.start(env.axi_agent.sequencer);
    #1us;                                          // let ACT / WR / RD / PRE / ACT / WR drain

    fork                                           // default tREFI is about 46 us
      wait (chk.n_ref >= 1);
      begin
        #150us;
        `uvm_error("DFI_01", "timeout waiting for the refresh command")
      end
    join_any
    disable fork;

    #200ns;
    phase.drop_objection(this);
  endtask

  function void report_phase(uvm_phase phase);
    uvm_report_server s = uvm_report_server::get_server();
    if (s.get_severity_count(UVM_ERROR) + s.get_severity_count(UVM_FATAL) == 0)
      `uvm_info("DFI_01", "*** DFI_01 PASSED ***", UVM_NONE)
    else
      `uvm_info("DFI_01", "*** DFI_01 FAILED ***", UVM_NONE)
  endfunction
endclass


class ref01_apb_seq extends uvm_sequence #(lpddr5c_apb_agent_seq_item);
  `uvm_object_utils(ref01_apb_seq)

  function new(string name = "ref01_apb_seq");
    super.new(name);
  endfunction

  task body();
    lpddr5c_apb_agent_seq_item item =
      lpddr5c_apb_agent_seq_item::type_id::create("ctrl0_refresh_disable");
    start_item(item);
    item.paddr  = 16'h0000;
    item.pwdata = 32'h0000_0000; // CTRL0[8]=0: refresh disabled
    item.pwrite = 1'b1;
    finish_item(item);
  endtask
endclass

class ref01_axi_seq extends dfi01_axi_seq;
  `uvm_object_utils(ref01_axi_seq)

  function new(string name = "ref01_axi_seq");
    super.new(name);
  endfunction

  task body();
    wr(32'h1080_0A00, 128'h1111);
    rd(32'h1080_0A00);
    wr(32'h1081_0A00, 128'h2222);
  endtask
endclass

class ref01_checker extends uvm_subscriber #(lpddr5c_dfi_agent_seq_item);
  `uvm_component_utils(ref01_checker)

  int unsigned traffic_commands;
  int unsigned refresh_commands;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  function void write(lpddr5c_dfi_agent_seq_item item);
    if (item.dfi_cs_n !== 1'b0 || item.dfi_ca === 6'h00)
      return;

    traffic_commands++;
    if (item.dfi_ca === 6'h06)
      refresh_commands++;
  endfunction

  function void check_phase(uvm_phase phase);
    super.check_phase(phase);
    if (traffic_commands == 0)
      `uvm_error("REF_01", "no DFI traffic was observed with refresh disabled")
    if (refresh_commands != 0)
      `uvm_error("REF_01", $sformatf("%0d REF command(s) observed while CTRL0[8]=0",
                                    refresh_commands))
  endfunction
endclass

class ref_01_test extends base_test;
  `uvm_component_utils(ref_01_test)

  ref01_checker chk;

  function new(string name = "ref_01_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    chk = ref01_checker::type_id::create("chk", this);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    env.dfi_agent.monitor.ap.connect(chk.analysis_export);
  endfunction

  task run_phase(uvm_phase phase);
    ref01_apb_seq apb_s = ref01_apb_seq::type_id::create("apb_s");
    ref01_axi_seq axi_s = ref01_axi_seq::type_id::create("axi_s");

    phase.raise_objection(this);
    apb_s.start(env.apb_agent.sequencer);
    #100ns;
    axi_s.start(env.axi_agent.sequencer);
    #150us; // Keep traffic observation open beyond the nominal refresh interval.
    phase.drop_objection(this);
  endtask

  function void report_phase(uvm_phase phase);
    uvm_report_server server = uvm_report_server::get_server();
    if (server.get_severity_count(UVM_ERROR) + server.get_severity_count(UVM_FATAL) == 0)
      `uvm_info("REF_01", "*** REF_01 PASSED ***", UVM_NONE)
    else
      `uvm_info("REF_01", "*** REF_01 FAILED ***", UVM_NONE)
  endfunction
endclass

class ref02_apb_seq extends uvm_sequence #(lpddr5c_apb_agent_seq_item);
  `uvm_object_utils(ref02_apb_seq)

  function new(string name = "ref02_apb_seq");
    super.new(name);
  endfunction

  task write_reg(bit [15:0] address, bit [31:0] data);
    lpddr5c_apb_agent_seq_item item =
      lpddr5c_apb_agent_seq_item::type_id::create("apb_write");
    start_item(item);
    item.paddr  = address;
    item.pwdata = data;
    item.pwrite = 1'b1;
    finish_item(item);
  endtask

  task body();
    write_reg(16'h0020, 32'h00A8_0080); // tRFC=168, tREFI=128 DFI clocks
    write_reg(16'h0000, 32'h0000_0110); // CTRL0[8]=refresh enable; start handshake-only training
  endtask
endclass

class ref_02_test extends base_test;
  `uvm_component_utils(ref_02_test)

  localparam int unsigned REF02_TREFI = 128;
  bit saw_refresh_pending;
  int unsigned max_refresh_counter;

  function new(string name = "ref_02_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    ref02_apb_seq apb_s = ref02_apb_seq::type_id::create("apb_s");
    int unsigned current_tick;
    int unsigned elapsed;

    phase.raise_objection(this);
    apb_s.start(env.apb_agent.sequencer);

    fork
      begin
        wait (lpddr_tb_top.dut.ref_en_dfi === 1'b1 &&
              lpddr_tb_top.dut.train_done_dfi === 1'b1 &&
              lpddr_tb_top.dut.u_refresh_ctrl.trefi_eff == REF02_TREFI);
      end
      begin
        #20us;
        `uvm_error("REF_02", "refresh configuration/enable did not synchronize to the DFI clock")
      end
    join_any
    disable fork;

    elapsed = 0;
    while (!saw_refresh_pending && elapsed < REF02_TREFI + 8) begin
      @(posedge lpddr_tb_top.dut.phy_clk);
      #1ps;
      if (lpddr_tb_top.dut.u_refresh_ctrl.refresh_en === 1'b1) begin
        elapsed++;
        current_tick = lpddr_tb_top.dut.u_refresh_ctrl.tick;
        if (current_tick > max_refresh_counter)
          max_refresh_counter = current_tick;
        if (lpddr_tb_top.dut.refresh_req_dfi === 1'b1) begin
          saw_refresh_pending = 1'b1;
        end
      end
    end

    if (max_refresh_counter < REF02_TREFI - 1)
      `uvm_error("REF_02",
        $sformatf("refresh interval counter reached only %0d; expected at least %0d",
                  max_refresh_counter, REF02_TREFI - 1))
    if (!saw_refresh_pending)
      `uvm_error("REF_02",
        $sformatf("refresh_pending did not assert by tREFI=%0d DFI clocks",
                  REF02_TREFI))
    else
      `uvm_info("REF_02",
        $sformatf("refresh_counter reached %0d (tREFI-1) before refresh_pending asserted",
                  max_refresh_counter), UVM_LOW)

    phase.drop_objection(this);
  endtask

  function void report_phase(uvm_phase phase);
    uvm_report_server server = uvm_report_server::get_server();
    if (server.get_severity_count(UVM_ERROR) + server.get_severity_count(UVM_FATAL) == 0)
      `uvm_info("REF_02", "*** REF_02 PASSED ***", UVM_NONE)
    else
      `uvm_info("REF_02", "*** REF_02 FAILED ***", UVM_NONE)
  endfunction
endclass

class ref03_apb_seq extends uvm_sequence #(lpddr5c_apb_agent_seq_item);
  `uvm_object_utils(ref03_apb_seq)

  function new(string name = "ref03_apb_seq");
    super.new(name);
  endfunction

  task body();
    lpddr5c_apb_agent_seq_item item =
      lpddr5c_apb_agent_seq_item::type_id::create("long_t_rcd");
    start_item(item);
    item.paddr  = 16'h0010;
    item.pwdata = 32'h1E12_12FF;
    item.pwrite = 1'b1;
    finish_item(item);

    item =
      lpddr5c_apb_agent_seq_item::type_id::create("disable_refresh");
    start_item(item);
    item.paddr  = 16'h0000;
    item.pwdata = 32'h0000_0000;
    item.pwrite = 1'b1;
    finish_item(item);
  endtask
endclass

class ref03_axi_seq extends uvm_sequence #(lpddr5c_axi_agent_seq_item);
  `uvm_object_utils(ref03_axi_seq)

  function new(string name = "ref03_axi_seq");
    super.new(name);
  endfunction

  task write(bit [31:0] address, bit [127:0] data, bit [3:0] id);
    lpddr5c_axi_agent_seq_item item =
      lpddr5c_axi_agent_seq_item::type_id::create($sformatf("queued_write_%0d", id));
    start_item(item);
    item.is_write    = 1'b1;
    item.axi_awid    = id;
    item.axi_awaddr  = address;
    item.axi_awlen   = 8'd0;
    item.axi_awsize  = 3'd4;
    item.axi_awburst = 2'b01;
    item.axi_wdata   = data;
    item.axi_wstrb   = 16'hFFFF;
    item.axi_wlast   = 1'b1;
    item.axi_awvalid = 1'b1;
    item.axi_wvalid  = 1'b1;
    item.axi_bready  = 1'b1;
    finish_item(item);
  endtask

  task body();
    write(32'h1080_0A00, 128'hFACE_CAFE_1234_5678_9ABC_DEF0_0102_0304, 4'h3);
    write(32'h1080_0A10, 128'hDEAD_BEEF_1111_2222_3333_4444_5555_6666, 4'h4);
  endtask
endclass

class ref_03_test extends base_test;
  `uvm_component_utils(ref_03_test)

  localparam bit [5:0] REF03_CA_NOP  = 6'h00;
  localparam bit [5:0] REF03_CA_PREA = 6'h05;
  localparam bit [5:0] REF03_CA_REF  = 6'h06;

  bit saw_queued_command;
  bit saw_refresh_command;

  function new(string name = "ref_03_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    ref03_apb_seq apb_s = ref03_apb_seq::type_id::create("apb_s");
    ref03_axi_seq axi_s = ref03_axi_seq::type_id::create("axi_s");
    int unsigned cycles;

    phase.raise_objection(this);
    uvm_root::get().set_timeout(1ms, 0);
    apb_s.start(env.apb_agent.sequencer);
    #100ns;

    fork
      axi_s.start(env.axi_agent.sequencer);
      begin
        cycles = 0;
        while (lpddr_tb_top.dut.u_cmd_scheduler.cmd_queue_entries < 2 &&
               cycles < 1000) begin
          @(negedge lpddr_tb_top.dfi_clk);
          cycles++;
        end

        if (lpddr_tb_top.dut.u_cmd_scheduler.cmd_queue_entries < 2) begin
          `uvm_error("REF_03",
            $sformatf("timed out waiting for two queued AXI commands; queue entries=%0d",
                      lpddr_tb_top.dut.u_cmd_scheduler.cmd_queue_entries))
        end
        else begin
          saw_queued_command = 1'b1;
          `uvm_info("REF_03",
            $sformatf("asserting refresh with %0d AXI commands queued",
                      lpddr_tb_top.dut.u_cmd_scheduler.cmd_queue_entries), UVM_LOW)
          force lpddr_tb_top.dut.u_cmd_scheduler.ref_start = 1'b1;

          cycles = 0;
          while (!saw_refresh_command && cycles < 1000) begin
            @(negedge lpddr_tb_top.dfi_clk);
            cycles++;
            if (lpddr_tb_top.DFI_vif.dfi_cs_n === 1'b0 &&
                lpddr_tb_top.DFI_vif.dfi_ca !== REF03_CA_NOP) begin
              if (lpddr_tb_top.DFI_vif.dfi_ca === REF03_CA_REF) begin
                saw_refresh_command = 1'b1;
                if (lpddr_tb_top.dut.u_cmd_scheduler.cmd_queue_entries < 2)
                  `uvm_error("REF_03",
                    $sformatf("queued commands drained before CA_REF; entries=%0d",
                              lpddr_tb_top.dut.u_cmd_scheduler.cmd_queue_entries))
              end
              else if (lpddr_tb_top.DFI_vif.dfi_ca !== REF03_CA_PREA) begin
                `uvm_error("REF_03",
                  $sformatf("CA=0x%0h issued before CA_REF while refresh was pending",
                            lpddr_tb_top.DFI_vif.dfi_ca))
              end
            end
          end

          release lpddr_tb_top.dut.u_cmd_scheduler.ref_start;
        end
      end
    join

    if (!saw_queued_command)
      `uvm_error("REF_03", "refresh priority was not tested with a queued command")
    if (!saw_refresh_command)
      `uvm_error("REF_03", "CA_REF was not observed after refresh was requested")
    else begin
      cycles = 0;
      while (lpddr_tb_top.dut.u_cmd_scheduler.cmd_queue_entries != 0 &&
             cycles < 2000) begin
        @(negedge lpddr_tb_top.dfi_clk);
        cycles++;
      end
      if (lpddr_tb_top.dut.u_cmd_scheduler.cmd_queue_entries != 0)
        `uvm_error("REF_03",
          $sformatf("queued commands did not resume and drain after CA_REF; entries=%0d",
                    lpddr_tb_top.dut.u_cmd_scheduler.cmd_queue_entries))
      else
        `uvm_info("REF_03", "queued AXI commands drained after refresh completed", UVM_LOW)

      `uvm_info("REF_03",
        "CA_REF took priority over the queued AXI command", UVM_LOW)
    end

    phase.drop_objection(this);
  endtask

  function void report_phase(uvm_phase phase);
    uvm_report_server server = uvm_report_server::get_server();
    if (server.get_severity_count(UVM_ERROR) + server.get_severity_count(UVM_FATAL) == 0)
      `uvm_info("REF_03", "*** REF_03 PASSED ***", UVM_NONE)
    else
      `uvm_info("REF_03", "*** REF_03 FAILED ***", UVM_NONE)
  endfunction
endclass


//==============================================================================
// DFI_03 : Write data-enable timing
//
// Feature  : write data-enable timing
// Approach : measure the delay from the WR command to dfi_wrdata_en. No fixed
//            latency is implemented, so the delay is recorded and flagged.
//
// The measurement itself is done in the scoreboard (track_wrdata_en):
//   * every WR command on DFI is queued with its clock number
//   * every start of dfi_wrdata_en is paired with the oldest pending WR
//   * delay = clk(dfi_wrdata_en) - clk(WR), min / max / average / histogram kept
//   * end of test: the recorded latency is reported and FLAGGED
//       - WRDATA_EN_LAT_BUG  (warning by default, error if known_bug_is_error = 1)
//           "no fixed latency is implemented/specified" when the delay is constant
//           "VARIABLE latency" when the delay differs between writes
//   * errors: DFI_WRDATA_EN_NO_WR   (dfi_wrdata_en without a WR)
//             DFI_WRDATA_EN_MISSING (WR without dfi_wrdata_en within max_wrdata_en_wait clk)
//             DFI_WRDATA_EN_NONE    (WR commands but no dfi_wrdata_en at all)
//
// This test only generates a mix of AXI writes so that the delay is sampled in
// different situations:
//   1. isolated write, closed bank          (ACT, WR)
//   2. back-to-back writes, same row        (WR, WR)
//   3. writes to different banks / groups
//   4. row miss                             (PRE, ACT, WR)
//   5. write right after a read             (RD, WR turn-around)
//
// Set exp_wrdata_en_lat >= 0 on the scoreboard once a fixed latency is specified:
// every write is then checked against it (expected vs actual).
//==============================================================================

class lpddr5c_dfi_03_apb_seq extends uvm_sequence #(lpddr5c_apb_agent_seq_item);

  `uvm_object_utils(lpddr5c_dfi_03_apb_seq)

  function new(string name = "lpddr5c_dfi_03_apb_seq");
    super.new(name);
  endfunction

  task wr(bit [15:0] a, bit [31:0] d);
    lpddr5c_apb_agent_seq_item r = lpddr5c_apb_agent_seq_item::type_id::create("r");
    start_item(r);
    r.paddr  = a;
    r.pwdata = d;
    r.pwrite = 1'b1;
    finish_item(r);
  endtask

  task body();
    wr(16'h0000, 32'h0000_0000);    // CTRL0: refresh and training off, so only WR traffic is on DFI
  endtask
endclass


class lpddr5c_dfi_03_axi_seq extends uvm_sequence #(lpddr5c_axi_agent_seq_item);

  `uvm_object_utils(lpddr5c_dfi_03_axi_seq)

  function new(string name = "lpddr5c_dfi_03_axi_seq");
    super.new(name);
  endfunction

  task wr(bit [31:0] a, bit [127:0] d);
    lpddr5c_axi_agent_seq_item it = lpddr5c_axi_agent_seq_item::type_id::create("it");
    start_item(it);
    it.is_write    = 1'b1;
    it.axi_awid    = 4'h1;
    it.axi_awaddr  = a;
    it.axi_awlen   = 8'd0;
    it.axi_awsize  = 3'd4;
    it.axi_awburst = 2'b01;
    it.axi_wdata   = d;
    it.axi_wstrb   = 16'hFFFF;
    it.axi_wlast   = 1'b1;
    it.axi_awvalid = 1'b1;
    it.axi_wvalid  = 1'b1;
    it.axi_bready  = 1'b1;
    finish_item(it);
  endtask

  task rd(bit [31:0] a);
    lpddr5c_axi_agent_seq_item it = lpddr5c_axi_agent_seq_item::type_id::create("it");
    start_item(it);
    it.is_write    = 1'b0;
    it.axi_arid    = 4'h1;
    it.axi_araddr  = a;
    it.axi_arlen   = 8'd0;
    it.axi_arsize  = 3'd4;
    it.axi_arburst = 2'b01;
    it.axi_arvalid = 1'b1;
    it.axi_rready  = 1'b1;
    finish_item(it);
  endtask

  // bank = addr[11:9], bank group = addr[12], row = addr[31:16]
  task body();
    // 1. isolated write to a closed bank (ACT, WR), then let the DFI go idle
    wr(32'h1080_0A00, 128'h1111_1111_1111_1111_1111_1111_1111_1111);   // bank 5, row 0x1080
    #500ns;

    // 2. back-to-back writes, same row (WR, WR)
    wr(32'h1080_0A10, 128'h2222_2222_2222_2222_2222_2222_2222_2222);
    wr(32'h1080_0A20, 128'h3333_3333_3333_3333_3333_3333_3333_3333);
    #500ns;

    // 3. different banks / bank groups (ACT, WR each)
    wr(32'h1080_0200, 128'h4444_4444_4444_4444_4444_4444_4444_4444);   // bank 1, bank group 0
    wr(32'h1080_1400, 128'h5555_5555_5555_5555_5555_5555_5555_5555);   // bank 2, bank group 1
    #500ns;

    // 4. row miss in bank 5 (PRE, ACT, WR)
    wr(32'h1081_0A00, 128'h6666_6666_6666_6666_6666_6666_6666_6666);
    #500ns;

    // 5. read then write (turn-around)
    rd(32'h1081_0A00);
    wr(32'h1081_0A30, 128'h7777_7777_7777_7777_7777_7777_7777_7777);
    #500ns;
  endtask

endclass


class lpddr5c_dfi_03_test extends base_test;

  `uvm_component_utils(lpddr5c_dfi_03_test)

  function new(string name = "lpddr5c_dfi_03_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);                 // replaces base_test run_phase
    lpddr5c_dfi_03_apb_seq apb_s = lpddr5c_dfi_03_apb_seq::type_id::create("apb_s");
    lpddr5c_dfi_03_axi_seq axi_s = lpddr5c_dfi_03_axi_seq::type_id::create("axi_s");

    phase.raise_objection(this);

   // uvm_top.set_timeout(1ms, 0);                   // watchdog
   uvm_root::get().set_timeout(1ms, 0);

    // scoreboard knobs for this test
    env.scoreboard.en_wrdata_en_check = 1'b1;
    env.scoreboard.exp_wrdata_en_lat  = -1;        // no fixed latency defined: record + flag (set >= 0 to enforce)
    // env.scoreboard.wren_beats_per_wr = N;       // set N if dfi_wrdata_en stays high for N cycles per WR
    // env.scoreboard.known_bug_is_error = 1'b1;   // make the "no fixed latency" flag an error

    apb_s.start(env.apb_agent.sequencer);          // refresh / training off
    #100ns;
    axi_s.start(env.axi_agent.sequencer);
    #2us;                                          // let the last write drain to DFI

    phase.drop_objection(this);
  endtask

  function void report_phase(uvm_phase phase);
    super.report_phase(phase);
    `uvm_info("DFI_03",
      $sformatf("WR->dfi_wrdata_en recorded: WR cmds=%0d samples=%0d min=%0d max=%0d clk (see WRDATA_EN_LAT_BUG flag and histogram in the scoreboard summary)",
                env.scoreboard.wren_wr_cmds, env.scoreboard.wren_n,
                env.scoreboard.wren_min, env.scoreboard.wren_max),
      UVM_NONE)
  endfunction

endclass : lpddr5c_dfi_03_test

class axi01_single_write_seq extends uvm_sequence #(lpddr5c_axi_agent_seq_item);
  `uvm_object_utils(axi01_single_write_seq)

  bit [31:0] write_addr = 32'h1080_0A00;
  bit [127:0] write_data =
    128'hA55A_0123_4567_89AB_CDEF_FEDC_1020_3040;
  bit [3:0] write_id = 4'hA;

  function new(string name = "axi01_single_write_seq"); super.new(name); endfunction

  task body();
    lpddr5c_axi_agent_seq_item item;
    item = lpddr5c_axi_agent_seq_item::type_id::create("write");
    start_item(item);
    item.is_write    = 1'b1;
    item.axi_awid    = write_id;
    item.axi_awaddr  = write_addr;
    item.axi_awlen   = 8'd0;
    item.axi_awsize  = 3'd4;
    item.axi_awburst = 2'b01;
    item.axi_wdata   = write_data;
    item.axi_wstrb   = 16'hFFFF;
    item.axi_wlast   = 1'b1;
    item.axi_awvalid = 1'b1;
    item.axi_wvalid  = 1'b1;
    item.axi_bready  = 1'b1;
    finish_item(item);

    if (item.axi_bvalid !== 1'b1)
      `uvm_error("AXI_01", "write completed without observing BVALID")
    if (item.axi_bid !== write_id)
      `uvm_error("AXI_01",
        $sformatf("BID expected 0x%0h, actual 0x%0h", write_id, item.axi_bid))
    if (item.axi_bresp !== 2'b00)
      `uvm_error("AXI_01",
        $sformatf("BRESP expected OKAY, actual 0x%0h", item.axi_bresp))
  endtask
endclass

class axi02_single_read_seq extends uvm_sequence #(lpddr5c_axi_agent_seq_item);
  `uvm_object_utils(axi02_single_read_seq)

  bit [31:0] read_addr = 32'h1080_0A00;
  bit [127:0] write_data = '1;

  function new(string name = "axi02_single_read_seq"); super.new(name); endfunction

  task body();
    lpddr5c_axi_agent_seq_item item;

    item = lpddr5c_axi_agent_seq_item::type_id::create("write");
    start_item(item);
    item.is_write    = 1'b1;
    item.axi_awid    = 4'h3;
    item.axi_awaddr  = read_addr;
    item.axi_awlen   = 8'd0;
    item.axi_awsize  = 3'd4;
    item.axi_awburst = 2'b01;
    item.axi_wdata   = write_data;
    item.axi_wstrb   = 16'hFFFF;
    item.axi_wlast   = 1'b1;
    item.axi_awvalid = 1'b1;
    item.axi_wvalid  = 1'b1;
    item.axi_bready  = 1'b1;
    finish_item(item);

    repeat (32) @(posedge lpddr_tb_top.sys_clk);

    item = lpddr5c_axi_agent_seq_item::type_id::create("read");
    start_item(item);
    item.is_write    = 1'b0;
    item.axi_arid    = 4'h3;
    item.axi_araddr  = read_addr;
    item.axi_arlen   = 8'd0;
    item.axi_arsize  = 3'd4;
    item.axi_arburst = 2'b01;
    item.axi_arvalid = 1'b1;
    item.axi_rready  = 1'b1;
    finish_item(item);

    if (item.axi_rvalid !== 1'b1)
      `uvm_error("AXI_02", "read completed without observing RVALID")
    if (item.axi_rresp !== 2'b00)
      `uvm_error("AXI_02",
        $sformatf("RRESP expected OKAY, actual 0x%0h", item.axi_rresp))
    if (item.axi_rlast !== 1'b1)
      `uvm_error("AXI_02",
        $sformatf("RLAST expected 1, actual %b", item.axi_rlast))
    if (item.axi_rdata !== write_data)
      `uvm_error("AXI_02",
        $sformatf("read data expected 0x%032h, actual 0x%032h",
                  write_data, item.axi_rdata))
  endtask
endclass

class axi_01_test extends base_test;
  `uvm_component_utils(axi_01_test)

  function new(string name = "axi_01_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task check_dfi_write_address(bit [31:0] expected_addr);
    int unsigned cycles = 0;
    bit seen = 0;

    while (!seen && cycles < 1000) begin
      @(negedge lpddr_tb_top.dfi_clk);
      if (lpddr_tb_top.DFI_vif.dfi_cs_n === 1'b0 &&
          lpddr_tb_top.DFI_vif.dfi_ca === 6'h02) begin
        seen = 1'b1;
        if (lpddr_tb_top.DFI_vif.dfi_addr !== expected_addr)
          `uvm_error("AXI_01",
            $sformatf("DFI write address expected 0x%08h, actual 0x%08h",
                      expected_addr, lpddr_tb_top.DFI_vif.dfi_addr))
        else
          `uvm_info("AXI_01",
            $sformatf("DFI write address matched AXI AWADDR 0x%08h", expected_addr),
            UVM_LOW)
      end
      cycles++;
    end

    if (!seen)
      `uvm_error("AXI_01", "timed out waiting for DFI write command")
  endtask

  task run_phase(uvm_phase phase);
    lpddr5c_dfi_03_apb_seq apb_seq;
    axi01_single_write_seq write_seq;

    phase.raise_objection(this);
    uvm_root::get().set_timeout(1ms, 0);
    apb_seq = lpddr5c_dfi_03_apb_seq::type_id::create("apb_seq");
    write_seq = axi01_single_write_seq::type_id::create("write_seq");
    apb_seq.start(env.apb_agent.sequencer);
    #100ns;
    fork
      write_seq.start(env.axi_agent.sequencer);
      check_dfi_write_address(write_seq.write_addr);
    join
    phase.drop_objection(this);
  endtask
endclass

class axi_02_test extends base_test;
  `uvm_component_utils(axi_02_test)

  function new(string name = "axi_02_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    lpddr5c_dfi_03_apb_seq apb_seq;
    axi02_single_read_seq read_seq;

    phase.raise_objection(this);
    uvm_root::get().set_timeout(1ms, 0);
    env.scoreboard.en_axi_data_check = 1'b1;
    apb_seq = lpddr5c_dfi_03_apb_seq::type_id::create("apb_seq");
    read_seq = axi02_single_read_seq::type_id::create("read_seq");
    apb_seq.start(env.apb_agent.sequencer);
    #100ns;
    read_seq.start(env.axi_agent.sequencer);
    phase.drop_objection(this);
  endtask
endclass

class axi_rresp_coverage_seq extends uvm_sequence #(lpddr5c_axi_agent_seq_item);
  `uvm_object_utils(axi_rresp_coverage_seq)

  bit [31:0] read_addr = 32'h1080_0A00;

  function new(string name = "axi_rresp_coverage_seq"); super.new(name); endfunction

  task read_with_response(bit [1:0] response_code, string response_name);
    lpddr5c_axi_agent_seq_item item;

    case (response_code)
      2'b01: force lpddr_tb_top.AXI_vif.axi_rresp = 2'b01;
      2'b10: force lpddr_tb_top.AXI_vif.axi_rresp = 2'b10;
      2'b11: force lpddr_tb_top.AXI_vif.axi_rresp = 2'b11;
      default: `uvm_fatal("AXI_RRESP_COV",
                  $sformatf("Unsupported RRESP code 2'b%02b", response_code))
    endcase

    item = lpddr5c_axi_agent_seq_item::type_id::create(
      $sformatf("read_%s", response_name));
    start_item(item);
    item.is_write    = 1'b0;
    item.axi_arid    = response_code;
    item.axi_araddr  = read_addr;
    item.axi_arlen   = 8'd0;
    item.axi_arsize  = 3'd4;
    item.axi_arburst = 2'b01;
    item.axi_arvalid = 1'b1;
    item.axi_rready  = 1'b1;
    item.rready_stall_cycles = 2;
    finish_item(item);

    if (item.axi_rvalid !== 1'b1)
      `uvm_error("AXI_RRESP_COV",
        $sformatf("%s read completed without observing RVALID", response_name))
    if (item.axi_rresp !== response_code)
      `uvm_error("AXI_RRESP_COV",
        $sformatf("%s expected RRESP=2'b%02b, actual 2'b%02b",
                  response_name, response_code, item.axi_rresp))

    release lpddr_tb_top.AXI_vif.axi_rresp;
  endtask

  task body();
    lpddr5c_axi_agent_seq_item item;

    item = lpddr5c_axi_agent_seq_item::type_id::create("seed_write");
    start_item(item);
    item.is_write    = 1'b1;
    item.axi_awid    = 4'h0;
    item.axi_awaddr  = read_addr;
    item.axi_awlen   = 8'd0;
    item.axi_awsize  = 3'd4;
    item.axi_awburst = 2'b01;
    item.axi_wdata   = 128'hA55A_0123_4567_89AB_CDEF_FEDC_1020_3040;
    item.axi_wstrb   = 16'hFFFF;
    item.axi_wlast   = 1'b1;
    item.axi_awvalid = 1'b1;
    item.axi_wvalid  = 1'b1;
    item.axi_bready  = 1'b1;
    item.bready_stall_cycles = 2;
    finish_item(item);

    repeat (32) @(posedge lpddr_tb_top.sys_clk);
    read_with_response(2'b01, "EXOKAY");
    read_with_response(2'b10, "SLVERR");
    read_with_response(2'b11, "DECERR");
  endtask
endclass

class axi_rresp_coverage_test extends base_test;
  `uvm_component_utils(axi_rresp_coverage_test)

  function new(string name = "axi_rresp_coverage_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    lpddr5c_dfi_03_apb_seq apb_seq;
    axi_rresp_coverage_seq rresp_seq;

    phase.raise_objection(this);
    uvm_root::get().set_timeout(1ms, 0);

    env.axi_agent.driver.set_report_severity_id_override(
      UVM_ERROR, "AXI_DRV", UVM_WARNING);
    env.scoreboard.en_axi_rresp_check = 1'b0;

    apb_seq = lpddr5c_dfi_03_apb_seq::type_id::create("apb_seq");
    rresp_seq = axi_rresp_coverage_seq::type_id::create("rresp_seq");
    apb_seq.start(env.apb_agent.sequencer);
    #100ns;
    rresp_seq.start(env.axi_agent.sequencer);

    phase.drop_objection(this);
  endtask
endclass

class axi_out_of_range_seq extends uvm_sequence #(lpddr5c_axi_agent_seq_item);
  `uvm_object_utils(axi_out_of_range_seq)

  function new(string name = "axi_out_of_range_seq");
    super.new(name);
  endfunction

  task body();
    lpddr5c_axi_agent_seq_item item;

    item = lpddr5c_axi_agent_seq_item::type_id::create("write_below_range");
    start_item(item);
    item.is_write         = 1'b1;
    item.axi_awid         = 4'h1;
    item.axi_awaddr       = 32'h107F_FFF0;
    item.axi_awlen        = 8'd0;
    item.axi_awsize       = 3'd4;
    item.axi_awburst      = 2'b01;
    item.axi_wdata        = 128'hA5A5_5A5A_F0F0_0F0F_1234_5678_9ABC_DEF0;
    item.axi_wstrb        = 16'hFFFF;
    item.axi_wlast        = 1'b1;
    item.axi_awvalid      = 1'b1;
    item.axi_wvalid       = 1'b1;
    item.axi_bready       = 1'b1;
    item.expected_bresp   = 2'b11;
    finish_item(item);

    if (item.axi_bvalid !== 1'b1 || item.axi_bid !== item.axi_awid ||
        item.axi_bresp !== 2'b11)
      `uvm_error("AXI_ADDR_RANGE",
        $sformatf("write below range expected BVALID=1/BID=%0h/BRESP=DECERR; got %b/%0h/%b",
                  item.axi_awid, item.axi_bvalid, item.axi_bid, item.axi_bresp))
    else
      `uvm_info("AXI_ADDR_RANGE",
        "write below LPDDR window returned the expected DECERR", UVM_LOW)

    item = lpddr5c_axi_agent_seq_item::type_id::create("read_above_range");
    start_item(item);
    item.is_write       = 1'b0;
    item.axi_arid       = 4'h2;
    item.axi_araddr     = 32'h1180_0000;
    item.axi_arlen      = 8'd0;
    item.axi_arsize     = 3'd4;
    item.axi_arburst    = 2'b01;
    item.axi_arvalid    = 1'b1;
    item.axi_rready     = 1'b1;
    item.expected_rresp = 2'b11;
    finish_item(item);

    if (item.axi_rvalid !== 1'b1 || item.axi_rlast !== 1'b1 ||
        item.axi_rresp !== 2'b11)
      `uvm_error("AXI_ADDR_RANGE",
        $sformatf("read above range expected RVALID=1/RRESP=DECERR/RLAST=1; got %b/%b/%b",
                  item.axi_rvalid, item.axi_rresp, item.axi_rlast))
    else
      `uvm_info("AXI_ADDR_RANGE",
        "read above LPDDR window returned the expected DECERR", UVM_LOW)
  endtask
endclass

class axi_out_of_range_test extends base_test;
  `uvm_component_utils(axi_out_of_range_test)

  function new(string name = "axi_out_of_range_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    lpddr5c_dfi_03_apb_seq apb_seq;
    axi_out_of_range_seq axi_seq;

    phase.raise_objection(this);
    uvm_root::get().set_timeout(1ms, 0);
    env.scoreboard.en_addr_match = 1'b0;
    env.scoreboard.en_axi_data_check = 1'b0;
    env.scoreboard.en_axi_bresp_check = 1'b0;
    env.scoreboard.en_axi_rresp_check = 1'b0;

    apb_seq = lpddr5c_dfi_03_apb_seq::type_id::create("apb_seq");
    axi_seq = axi_out_of_range_seq::type_id::create("axi_seq");
    apb_seq.start(env.apb_agent.sequencer);
    #100ns;
    axi_seq.start(env.axi_agent.sequencer);
    phase.drop_objection(this);
  endtask

  function void report_phase(uvm_phase phase);
    uvm_report_server server = uvm_report_server::get_server();
    if (server.get_severity_count(UVM_ERROR) + server.get_severity_count(UVM_FATAL) == 0)
      `uvm_info("AXI_ADDR_RANGE", "*** AXI_OUT_OF_RANGE_TEST PASSED ***", UVM_NONE)
    else
      `uvm_info("AXI_ADDR_RANGE", "*** AXI_OUT_OF_RANGE_TEST FAILED ***", UVM_NONE)
  endfunction
endclass

class axi_03_test extends base_test;

  `uvm_component_utils(axi_03_test)

  function new(string name = "axi_03_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    lpddr5c_dfi_03_apb_seq apb_s;
    axi03_byte_strobe_seq axi_s;
    axi03_byte_strobe_read_seq axi_read_s;

    phase.raise_objection(this);
    uvm_root::get().set_timeout(1ms, 0);

    env.scoreboard.en_dfi_wrdata_mask_check = 1'b1;
    apb_s = lpddr5c_dfi_03_apb_seq::type_id::create("apb_s");
    axi_s = axi03_byte_strobe_seq::type_id::create("axi_s");
    axi_read_s = axi03_byte_strobe_read_seq::type_id::create("axi_read_s");

    apb_s.start(env.apb_agent.sequencer);
    #100ns;
    axi_s.start(env.axi_agent.sequencer);
    axi_read_s.start(env.axi_agent.sequencer);
    #2us;

    phase.drop_objection(this);
  endtask

endclass : axi_03_test

class axi_wdata_strobe_cov_seq extends uvm_sequence #(lpddr5c_axi_agent_seq_item);
  `uvm_object_utils(axi_wdata_strobe_cov_seq)

  localparam bit [127:0] ZERO_DATA = 128'h0;
  localparam bit [127:0] ONES_DATA = {128{1'b1}};
  localparam bit [127:0] ALT_A =
    128'hAAAA_AAAA_AAAA_AAAA_AAAA_AAAA_AAAA_AAAA;
  localparam bit [127:0] ALT_5 =
    128'h5555_5555_5555_5555_5555_5555_5555_5555;
  localparam bit [127:0] MIXED =
    128'h0123_4567_89AB_CDEF_FEDC_BA98_7654_3210;

  function new(string name = "axi_wdata_strobe_cov_seq");
    super.new(name);
  endfunction

  task write_case(int unsigned index,
                  bit [127:0] data,
                  bit [15:0] strb,
                  string label);
    lpddr5c_axi_agent_seq_item item;

    item = lpddr5c_axi_agent_seq_item::type_id::create(label);
    start_item(item);
    item.is_write    = 1'b1;
    item.axi_awid    = index[3:0];
    item.axi_awaddr  = 32'h1080_0A00 + (index * 32'h10);
    item.axi_awlen   = 8'd0;
    item.axi_awsize  = 3'd4;
    item.axi_awburst = 2'b01;
    item.axi_wdata   = data;
    item.axi_wstrb   = strb;
    item.axi_wlast   = 1'b1;
    item.axi_awvalid = 1'b1;
    item.axi_wvalid  = 1'b1;
    item.axi_bready  = 1'b1;
    `uvm_info("AXI_WDATA_STROBE",
      $sformatf("%s: WDATA=0x%032h WSTRB=0x%04h", label, data, strb),
      UVM_MEDIUM)
    finish_item(item);
  endtask

  task body();
    int unsigned index = 0;

    write_case(index++, ONES_DATA, 16'hFF00, "ones_high_half");
    write_case(index++, ONES_DATA, 16'h5555, "ones_sparse");
    write_case(index++, ONES_DATA, 16'h0000, "ones_zero");

    write_case(index++, ZERO_DATA, 16'h00FF, "zero_low_half");
    write_case(index++, ZERO_DATA, 16'h5555, "zero_sparse");
    write_case(index++, ZERO_DATA, 16'h0000, "zero_strobe");

    write_case(index++, ALT_5, 16'hFF00, "alt5_high_half");
    write_case(index++, ALT_5, 16'h00FF, "alt5_low_half");
    write_case(index++, ALT_5, 16'h5555, "alt5_sparse");
    write_case(index++, ALT_5, 16'h0000, "alt5_zero");

    write_case(index++, ALT_A, 16'hFFFF, "alta_full");
    write_case(index++, ALT_A, 16'hFF00, "alta_high_half");
    write_case(index++, ALT_A, 16'h00FF, "alta_low_half");
    write_case(index++, ALT_A, 16'h5555, "alta_sparse");
    write_case(index++, ALT_A, 16'h0000, "alta_zero");

    write_case(index++, MIXED, 16'h00FF, "mixed_low_half");
  endtask
endclass

class axi_wdata_strobe_cov_test extends base_test;
  `uvm_component_utils(axi_wdata_strobe_cov_test)

  function new(string name = "axi_wdata_strobe_cov_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    lpddr5c_dfi_03_apb_seq apb_seq;
    axi_wdata_strobe_cov_seq cov_seq;

    phase.raise_objection(this);
    uvm_root::get().set_timeout(1ms, 0);

    apb_seq = lpddr5c_dfi_03_apb_seq::type_id::create("apb_seq");
    cov_seq = axi_wdata_strobe_cov_seq::type_id::create("cov_seq");
    apb_seq.start(env.apb_agent.sequencer);
    #100ns;
    cov_seq.start(env.axi_agent.sequencer);

    phase.drop_objection(this);
  endtask
endclass

class dp01_axi_rw_seq extends uvm_sequence #(lpddr5c_axi_agent_seq_item);
  `uvm_object_utils(dp01_axi_rw_seq)

  bit [127:0] test_data = 128'hC3A5_5A3C_0123_4567_89AB_CDEF_FEDC_BA98;
  bit [127:0] observed_data;

  function new(string name = "dp01_axi_rw_seq"); super.new(name); endfunction

  task body();
    lpddr5c_axi_agent_seq_item item;

    item = lpddr5c_axi_agent_seq_item::type_id::create("write");
    start_item(item);
    item.is_write    = 1'b1;
    item.axi_awid    = 4'h1;
    item.axi_awaddr  = 32'h1080_0A00;
    item.axi_awlen   = 8'd0;
    item.axi_awsize  = 3'd4;
    item.axi_awburst = 2'b01;
    item.axi_wdata   = test_data;
    item.axi_wstrb   = 16'hFFFF;
    item.axi_wlast   = 1'b1;
    item.axi_awvalid = 1'b1;
    item.axi_wvalid  = 1'b1;
    item.axi_bready  = 1'b1;
    finish_item(item);

    repeat (32) @(posedge lpddr_tb_top.sys_clk);

    item = lpddr5c_axi_agent_seq_item::type_id::create("read");
    start_item(item);
    item.is_write    = 1'b0;
    item.axi_arid    = 4'h1;
    item.axi_araddr  = 32'h1080_0A00;
    item.axi_arlen   = 8'd0;
    item.axi_arsize  = 3'd4;
    item.axi_arburst = 2'b01;
    item.axi_arvalid = 1'b1;
    item.axi_rready  = 1'b1;
    finish_item(item);

    observed_data = item.axi_rdata;
    if (item.axi_rresp !== 2'b00)
      `uvm_error(get_type_name(),
        $sformatf("read returned RRESP=0x%0h", item.axi_rresp))
    if (observed_data !== test_data)
      `uvm_error(get_type_name(),
        $sformatf("readback mismatch: expected 0x%032h actual 0x%032h",
                  test_data, observed_data))
  endtask
endclass

class dp02_axi_write_seq extends uvm_sequence #(lpddr5c_axi_agent_seq_item);
  `uvm_object_utils(dp02_axi_write_seq)

  bit [127:0] test_data = 128'hFEDC_BA98_7654_3210_0123_4567_89AB_CDEF;

  function new(string name = "dp02_axi_write_seq"); super.new(name); endfunction

  task body();
    lpddr5c_axi_agent_seq_item item;
    item = lpddr5c_axi_agent_seq_item::type_id::create("write");
    start_item(item);
    item.is_write    = 1'b1;
    item.axi_awid    = 4'h2;
    item.axi_awaddr  = 32'h1080_0A00;
    item.axi_awlen   = 8'd0;
    item.axi_awsize  = 3'd4;
    item.axi_awburst = 2'b01;
    item.axi_wdata   = test_data;
    item.axi_wstrb   = 16'hFFFF;
    item.axi_wlast   = 1'b1;
    item.axi_awvalid = 1'b1;
    item.axi_wvalid  = 1'b1;
    item.axi_bready  = 1'b1;
    finish_item(item);
  endtask
endclass

class dp02_dfi_write_checker extends uvm_subscriber #(lpddr5c_dfi_agent_seq_item);
  `uvm_component_utils(dp02_dfi_write_checker)

  bit [127:0] expected_data;
  int unsigned beats_seen;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  function void write(lpddr5c_dfi_agent_seq_item item);
    bit [63:0] expected_beat;

    if (item.dfi_wrdata_en !== 1'b1)
      return;

    if (beats_seen >= 2) begin
      `uvm_error("DP_02", "unexpected extra DFI write-data beat")
      return;
    end

    expected_beat = (beats_seen == 0) ? expected_data[63:0] : expected_data[127:64];
    if (item.dfi_wrdata_bus[63:0] !== expected_beat)
      `uvm_error("DP_02",
        $sformatf("DFI write beat %0d: expected 0x%016h actual 0x%016h",
                  beats_seen, expected_beat, item.dfi_wrdata_bus[63:0]))
    else
      `uvm_info("DP_02",
        $sformatf("DFI write beat %0d matched 0x%016h",
                  beats_seen, item.dfi_wrdata_bus[63:0]), UVM_LOW)

    beats_seen++;
  endfunction

  function void check_phase(uvm_phase phase);
    if (beats_seen != 2)
      `uvm_error("DP_02",
        $sformatf("expected two DFI write-data beats, observed %0d", beats_seen))
  endfunction
endclass

class dp_01_test extends base_test;
  `uvm_component_utils(dp_01_test)

  function new(string name = "dp_01_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    lpddr5c_dfi_03_apb_seq apb_seq;
    dp01_axi_rw_seq data_seq;

    phase.raise_objection(this);
    uvm_root::get().set_timeout(1ms, 0);
    env.scoreboard.en_axi_data_check = 1'b1;
    env.scoreboard.en_addr_match = 1'b1;

    apb_seq = lpddr5c_dfi_03_apb_seq::type_id::create("apb_seq");
    data_seq = dp01_axi_rw_seq::type_id::create("data_seq");
    apb_seq.start(env.apb_agent.sequencer);
    #100ns;
    data_seq.start(env.axi_agent.sequencer);
    #1us;

    phase.drop_objection(this);
  endtask
endclass

class dp_02_test extends base_test;
  `uvm_component_utils(dp_02_test)

  dp02_dfi_write_checker chk;

  function new(string name = "dp_02_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    chk = dp02_dfi_write_checker::type_id::create("chk", this);
    chk.expected_data = 128'hFEDC_BA98_7654_3210_0123_4567_89AB_CDEF;
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    env.dfi_agent.monitor.ap.connect(chk.analysis_export);
  endfunction

  task run_phase(uvm_phase phase);
    lpddr5c_dfi_03_apb_seq apb_seq;
    dp02_axi_write_seq write_seq;

    phase.raise_objection(this);
    uvm_root::get().set_timeout(1ms, 0);
    env.scoreboard.en_axi_data_check = 1'b1;
    env.scoreboard.en_addr_match = 1'b1;

    apb_seq = lpddr5c_dfi_03_apb_seq::type_id::create("apb_seq");
    write_seq = dp02_axi_write_seq::type_id::create("write_seq");
    apb_seq.start(env.apb_agent.sequencer);
    #100ns;
    write_seq.start(env.axi_agent.sequencer);
    #1us;

    phase.drop_objection(this);
  endtask
endclass

class cdc01_axi_write_seq extends uvm_sequence #(lpddr5c_axi_agent_seq_item);
  `uvm_object_utils(cdc01_axi_write_seq)

  bit [31:0] addr;
  bit [127:0] data;

  function new(string name = "cdc01_axi_write_seq"); super.new(name); endfunction

  task body();
    lpddr5c_axi_agent_seq_item item;
    item = lpddr5c_axi_agent_seq_item::type_id::create("write");
    start_item(item);
    item.is_write    = 1'b1;
    item.axi_awid    = 4'h1;
    item.axi_awaddr  = addr;
    item.axi_awlen   = 8'd0;
    item.axi_awsize  = 3'd4;
    item.axi_awburst = 2'b01;
    item.axi_wdata   = data;
    item.axi_wstrb   = 16'hFFFF;
    item.axi_wlast   = 1'b1;
    item.axi_awvalid = 1'b1;
    item.axi_wvalid  = 1'b1;
    item.axi_bready  = 1'b1;
    finish_item(item);
  endtask
endclass

class cdc01_axi_read_seq extends uvm_sequence #(lpddr5c_axi_agent_seq_item);
  `uvm_object_utils(cdc01_axi_read_seq)

  bit [31:0] addr;
  bit [127:0] observed_data;

  function new(string name = "cdc01_axi_read_seq"); super.new(name); endfunction

  task body();
    lpddr5c_axi_agent_seq_item item;
    item = lpddr5c_axi_agent_seq_item::type_id::create("read");
    start_item(item);
    item.is_write    = 1'b0;
    item.axi_arid    = 4'h1;
    item.axi_araddr  = addr;
    item.axi_arlen   = 8'd0;
    item.axi_arsize  = 3'd4;
    item.axi_arburst = 2'b01;
    item.axi_arvalid = 1'b1;
    item.axi_rready  = 1'b1;
    finish_item(item);
    observed_data = item.axi_rdata;
    if (item.axi_rresp !== 2'b00)
      `uvm_error(get_type_name(),
        $sformatf("read returned RRESP=0x%0h", item.axi_rresp))
  endtask
endclass

class cdc_01_test extends base_test;
  `uvm_component_utils(cdc_01_test)

  function new(string name = "cdc_01_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task check_dram_word(bit [31:0] addr, bit [127:0] expected, string clock_ratio);
    bit [31:0] word_addr = addr >> 4;
    int unsigned cycles = 0;
    while (!lpddr_tb_top.dram.mem.exists(word_addr) && cycles < 2000) begin
      @(posedge lpddr_tb_top.sys_clk);
      cycles++;
    end
    if (!lpddr_tb_top.dram.mem.exists(word_addr))
      `uvm_error("CDC_01",
        $sformatf("%s: DRAM did not store write at 0x%08h", clock_ratio, addr))
    else if (lpddr_tb_top.dram.mem[word_addr] !== expected)
      `uvm_error("CDC_01",
        $sformatf("%s: address 0x%08h expected 0x%032h actual 0x%032h",
                  clock_ratio, addr, expected, lpddr_tb_top.dram.mem[word_addr]))
    else
      `uvm_info("CDC_01",
        $sformatf("%s: write crossed clock domains correctly at 0x%08h",
                  clock_ratio, addr), UVM_LOW)
  endtask

  task run_phase(uvm_phase phase);
    cdc01_axi_read_seq read_seq;
    lpddr5c_dfi_03_apb_seq apb_seq;
    bit [31:0] addr;
    bit [127:0] write_data;
    string clock_ratio = "sys_clk:dfi_clk = 1:2";

    phase.raise_objection(this);
    uvm_root::get().set_timeout(1ms, 0);
    env.scoreboard.en_axi_data_check = 1'b1;
    env.scoreboard.en_addr_match = 1'b0;
    env.scoreboard.en_dfi_model = 1'b0;
    env.scoreboard.en_wrdata_en_check = 1'b0;

    apb_seq = lpddr5c_dfi_03_apb_seq::type_id::create("apb_seq");
    apb_seq.start(env.apb_agent.sequencer);
    #100ns;

    for (int i = 0; i < 3; i++) begin
      cdc01_axi_write_seq write_seq_i;
      case (i)
        0: begin
          addr = 32'h1080_0A00;
          write_data = 128'hA55A_0123_4567_89AB_CDEF_FEDC_1020_3040;
        end
        1: begin
          addr = 32'h1080_0A10;
          write_data = 128'h5AA5_FEDC_BA98_7654_3210_0123_4050_6070;
        end
        default: begin
          addr = 32'h1080_0A20;
          write_data = 128'hC33C_0F0F_F0F0_55AA_AA55_6996_9669_1234;
        end
      endcase
      write_seq_i = cdc01_axi_write_seq::type_id::create($sformatf("write_%0d", i));
      write_seq_i.addr = addr;
      write_seq_i.data = write_data;
      write_seq_i.start(env.axi_agent.sequencer);
      check_dram_word(addr, write_data, clock_ratio);
    end

    repeat (32) @(posedge lpddr_tb_top.sys_clk);
    read_seq = cdc01_axi_read_seq::type_id::create("read_seq");
    read_seq.addr = addr;
    read_seq.start(env.axi_agent.sequencer);
    if (read_seq.observed_data !== write_data)
      `uvm_error("CDC_01",
        $sformatf("read CDC mismatch: expected 0x%032h actual 0x%032h",
                  write_data, read_seq.observed_data))
    else
      `uvm_info("CDC_01", "PHY-to-system read crossed clock domains correctly", UVM_LOW)

    phase.drop_objection(this);
  endtask
endclass

class cdc02_axi_seq extends uvm_sequence #(lpddr5c_axi_agent_seq_item);
  `uvm_object_utils(cdc02_axi_seq)

  int unsigned write_count = 8;
  function new(string name = "cdc02_axi_seq"); super.new(name); endfunction

  static function bit [31:0] addr_of(int unsigned i);
    return 32'h1080_0A00 + (32'(i) << 4);
  endfunction

  static function bit [127:0] data_of(int unsigned i);
    return {32'hD00D_0000 + i, 32'hA11C_0000 + i,
            32'hBEEF_0000 + i, 32'hFACE_0000 + i};
  endfunction

  task body();
    for (int unsigned i = 0; i < write_count; i++) begin
      lpddr5c_axi_agent_seq_item item;
      item = lpddr5c_axi_agent_seq_item::type_id::create($sformatf("write_%0d", i));
      start_item(item);
      item.is_write    = 1'b1;
      item.axi_awid    = i[3:0];
      item.axi_awaddr  = addr_of(i);
      item.axi_awlen   = 8'd0;
      item.axi_awsize  = 3'd4;
      item.axi_awburst = 2'b01;
      item.axi_wdata   = data_of(i);
      item.axi_wstrb   = 16'hFFFF;
      item.axi_wlast   = 1'b1;
      item.axi_awvalid = 1'b1;
      item.axi_wvalid  = 1'b1;
      item.axi_bready  = 1'b1;
      finish_item(item);
    end
  endtask
endclass

class cdc_02_test extends base_test;
  `uvm_component_utils(cdc_02_test)

  bit capture_dfi_data;
  bit [63:0] captured_dfi_beats[$];

  function new(string name = "cdc_02_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task capture_dfi_write_data();
    while (capture_dfi_data) begin
      @(negedge lpddr_tb_top.dfi_clk);
      if (lpddr_tb_top.DFI_vif.dfi_wrdata_en === 1'b1)
        captured_dfi_beats.push_back(lpddr_tb_top.DFI_vif.dfi_wrdata[63:0]);
    end
  endtask

  task check_dfi_write_data(int unsigned count);
    bit [127:0] expected_data;
    bit [63:0] expected_beat;
    int unsigned expected_beats = count * 2;

    if (captured_dfi_beats.size() != expected_beats)
      `uvm_error("CDC_02",
        $sformatf("expected %0d DFI write-data beats, observed %0d",
                  expected_beats, captured_dfi_beats.size()))

    for (int unsigned i = 0; i < captured_dfi_beats.size() && i < expected_beats; i++) begin
      expected_data = cdc02_axi_seq::data_of(i / 2);
      expected_beat = (i % 2 == 0) ? expected_data[63:0] : expected_data[127:64];
      if (captured_dfi_beats[i] !== expected_beat)
        `uvm_error("CDC_02",
          $sformatf("DFI beat %0d expected 0x%016h actual 0x%016h",
                    i, expected_beat, captured_dfi_beats[i]))
    end

    if (captured_dfi_beats.size() == expected_beats)
      `uvm_info("CDC_02",
        $sformatf("all %0d writes drained through DFI in order", count), UVM_LOW)
  endtask

  task run_phase(uvm_phase phase);
    cdc02_axi_seq write_seq;
    lpddr5c_dfi_03_apb_seq apb_seq;
    int unsigned drain_cycles = 0;
    logic [3:0] write_ptr_at_full;

    phase.raise_objection(this);
    uvm_root::get().set_timeout(1ms, 0);
    wait (lpddr_tb_top.phy_bfm.dfi_init_complete === 1'b1);
    apb_seq = lpddr5c_dfi_03_apb_seq::type_id::create("apb_seq");
    apb_seq.start(env.apb_agent.sequencer);
    #100ns;
    lpddr_tb_top.dfi_clk_enable = 1'b0;
    wait (lpddr_tb_top.dfi_clk === 1'b0);
    repeat (3) @(posedge lpddr_tb_top.sys_clk);
    env.scoreboard.en_dfi_model = 1'b0;
    env.scoreboard.en_wrdata_en_check = 1'b0;
    captured_dfi_beats.delete();
    capture_dfi_data = 1'b1;
    fork
      capture_dfi_write_data();
    join_none

    write_seq = cdc02_axi_seq::type_id::create("write_seq");
    write_seq.start(env.axi_agent.sequencer);

    write_ptr_at_full = lpddr_tb_top.dut.u_data_path.u_wr_cdc_fifo.wr_ptr_bin;
    if ((write_ptr_at_full -
         lpddr_tb_top.dut.u_data_path.u_wr_cdc_fifo.rd_ptr_bin) !== 4'd8)
      `uvm_error("CDC_02",
        $sformatf("write FIFO occupancy expected 8, actual %0d",
          write_ptr_at_full -
          lpddr_tb_top.dut.u_data_path.u_wr_cdc_fifo.rd_ptr_bin))
    if (lpddr_tb_top.AXI_vif.axi_wready !== 1'b0)
      `uvm_error("CDC_02", "WREADY did not deassert when the write FIFO reached eight entries")

    @(lpddr_tb_top.AXI_vif.drv_cb);
    lpddr_tb_top.AXI_vif.drv_cb.axi_wdata <= cdc02_axi_seq::data_of(8);
    lpddr_tb_top.AXI_vif.drv_cb.axi_wstrb <= 16'hFFFF;
    lpddr_tb_top.AXI_vif.drv_cb.axi_wlast <= 1'b1;
    lpddr_tb_top.AXI_vif.drv_cb.axi_wvalid <= 1'b1;
    repeat (20) begin
      @(lpddr_tb_top.AXI_vif.drv_cb);
      if (lpddr_tb_top.AXI_vif.drv_cb.axi_wready !== 1'b0 ||
          lpddr_tb_top.dut.u_data_path.u_wr_cdc_fifo.wr_ptr_bin !== write_ptr_at_full)
        `uvm_error("CDC_02", "write FIFO accepted data while full and PHY clock stopped")
    end
    lpddr_tb_top.AXI_vif.drv_cb.axi_wvalid <= 1'b0;
    lpddr_tb_top.AXI_vif.drv_cb.axi_wlast <= 1'b0;
    @(lpddr_tb_top.AXI_vif.drv_cb);
    lpddr_tb_top.dfi_clk_enable = 1'b1;

    while (lpddr_tb_top.dut.u_data_path.u_wr_cdc_fifo.rd_ptr_bin != 4'd8 &&
           drain_cycles < 2000) begin
      @(posedge lpddr_tb_top.sys_clk);
      drain_cycles++;
    end
    if (lpddr_tb_top.dut.u_data_path.u_wr_cdc_fifo.rd_ptr_bin != 4'd8)
      `uvm_error("CDC_02", "write FIFO did not drain all eight entries after PHY resume")

    repeat (2) @(posedge lpddr_tb_top.sys_clk);
    capture_dfi_data = 1'b0;
    repeat (2) @(negedge lpddr_tb_top.dfi_clk);
    check_dfi_write_data(8);
    phase.drop_objection(this);
  endtask
endclass

class cdc_03_test extends base_test;
  `uvm_component_utils(cdc_03_test)

  localparam int unsigned READ_FIFO_DEPTH = 8;
  localparam bit [31:0] TEST_ADDR = 32'h1080_0A00;
  localparam bit [127:0] TEST_DATA =
    128'hFEDC_BA98_7654_3210_0123_4567_89AB_CDEF;

  function new(string name = "cdc_03_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task issue_read_address(int unsigned id);
    @(lpddr_tb_top.AXI_vif.drv_cb);
    lpddr_tb_top.AXI_vif.drv_cb.axi_araddr  <= TEST_ADDR;
    lpddr_tb_top.AXI_vif.drv_cb.axi_arid    <= id[3:0];
    lpddr_tb_top.AXI_vif.drv_cb.axi_arlen   <= 8'd0;
    lpddr_tb_top.AXI_vif.drv_cb.axi_arsize  <= 3'd4;
    lpddr_tb_top.AXI_vif.drv_cb.axi_arburst <= 2'b01;
    lpddr_tb_top.AXI_vif.drv_cb.axi_arvalid <= 1'b1;

    while (lpddr_tb_top.AXI_vif.drv_cb.axi_arready !== 1'b1)
      @(lpddr_tb_top.AXI_vif.drv_cb);

    @(lpddr_tb_top.AXI_vif.drv_cb);
    lpddr_tb_top.AXI_vif.drv_cb.axi_arvalid <= 1'b0;
  endtask

  task run_phase(uvm_phase phase);
    lpddr5c_dfi_03_apb_seq apb_seq;
    dp02_axi_write_seq write_seq;
    int unsigned wait_cycles = 0;
    int unsigned drained = 0;

    phase.raise_objection(this);
    uvm_root::get().set_timeout(1ms, 0);
    env.scoreboard.en_axi_data_check = 1'b1;
    env.scoreboard.en_addr_match = 1'b0;

    apb_seq = lpddr5c_dfi_03_apb_seq::type_id::create("apb_seq");
    write_seq = dp02_axi_write_seq::type_id::create("write_seq");
    apb_seq.start(env.apb_agent.sequencer);
    #100ns;
    write_seq.start(env.axi_agent.sequencer);
    repeat (32) @(posedge lpddr_tb_top.sys_clk);

    lpddr_tb_top.AXI_vif.drv_cb.axi_rready <= 1'b0;
    repeat (2) @(lpddr_tb_top.AXI_vif.drv_cb);
    if (lpddr_tb_top.AXI_vif.drv_cb.axi_rvalid !== 1'b0 ||
        lpddr_tb_top.dut.u_data_path.rd_fifo_empty !== 1'b1)
      `uvm_error("CDC_03", "read FIFO was not empty before requests")

    for (int unsigned i = 0; i < READ_FIFO_DEPTH; i++)
      issue_read_address(i);

    while (lpddr_tb_top.dut.u_data_path.rd_fifo_full !== 1'b1 &&
           wait_cycles < 2000) begin
      @(posedge lpddr_tb_top.sys_clk);
      wait_cycles++;
    end

    if (lpddr_tb_top.dut.u_data_path.rd_fifo_full !== 1'b1)
      `uvm_error("CDC_03", "read FIFO did not reach full after eight read returns")
    if (lpddr_tb_top.AXI_vif.axi_rvalid !== 1'b1)
      `uvm_error("CDC_03", "RVALID did not assert when the read FIFO became full")
    if (lpddr_tb_top.dut.u_data_path.u_rd_cdc_fifo.wr_ptr_bin -
        lpddr_tb_top.dut.u_data_path.u_rd_cdc_fifo.rd_ptr_bin !== 4'd8)
      `uvm_error("CDC_03", "read FIFO occupancy was not eight at full")

    lpddr_tb_top.AXI_vif.drv_cb.axi_rready <= 1'b1;
    while (drained < READ_FIFO_DEPTH) begin
      @(lpddr_tb_top.AXI_vif.drv_cb);
      if (lpddr_tb_top.AXI_vif.drv_cb.axi_rvalid !== 1'b1)
        `uvm_error("CDC_03",
          $sformatf("RVALID deasserted after only %0d of %0d reads",
                    drained, READ_FIFO_DEPTH))
      else if (lpddr_tb_top.AXI_vif.drv_cb.axi_rdata !== TEST_DATA)
        `uvm_error("CDC_03",
          $sformatf("read %0d data mismatch: expected 0x%032h actual 0x%032h",
                    drained, TEST_DATA, lpddr_tb_top.AXI_vif.drv_cb.axi_rdata))
      drained++;
    end

    @(lpddr_tb_top.AXI_vif.drv_cb);
    lpddr_tb_top.AXI_vif.drv_cb.axi_rready <= 1'b0;
    wait_cycles = 0;
    while ((lpddr_tb_top.AXI_vif.axi_rvalid !== 1'b0 ||
            lpddr_tb_top.dut.u_data_path.rd_fifo_empty !== 1'b1) &&
           wait_cycles < 4) begin
      @(posedge lpddr_tb_top.sys_clk);
      wait_cycles++;
    end
    if (lpddr_tb_top.AXI_vif.axi_rvalid !== 1'b0 ||
        lpddr_tb_top.dut.u_data_path.rd_fifo_empty !== 1'b1)
      `uvm_error("CDC_03",
        $sformatf("read FIFO remained non-empty after drain: RVALID=%b empty=%b rd_ptr=%0d wr_ptr=%0d",
          lpddr_tb_top.AXI_vif.axi_rvalid,
          lpddr_tb_top.dut.u_data_path.rd_fifo_empty,
          lpddr_tb_top.dut.u_data_path.u_rd_cdc_fifo.rd_ptr_bin,
          lpddr_tb_top.dut.u_data_path.u_rd_cdc_fifo.wr_ptr_bin))

    repeat (3) @(posedge lpddr_tb_top.dfi_clk);
    if (lpddr_tb_top.dut.u_data_path.rd_fifo_full !== 1'b0)
      `uvm_error("CDC_03", "read FIFO full flag did not clear after draining")

    phase.drop_objection(this);
  endtask
endclass

class lp_directed_apb_seq extends uvm_sequence #(lpddr5c_apb_agent_seq_item);
  `uvm_object_utils(lp_directed_apb_seq)
  function new(string name = "lp_directed_apb_seq"); super.new(name); endfunction

  task body();
    lpddr5c_apb_agent_seq_item item = lpddr5c_apb_agent_seq_item::type_id::create("ctrl0");
    start_item(item);
    item.paddr = 16'h0000;
    item.pwdata = 32'h0000_0000;
    item.pwrite = 1'b1;
    finish_item(item);
  endtask
endclass

class lp01_pd_entry_seq extends uvm_sequence #(lpddr5c_lp_agent_seq_item);
  `uvm_object_utils(lp01_pd_entry_seq)
  function new(string name = "lp01_pd_entry_seq"); super.new(name); endfunction

  task body();
    lpddr5c_lp_agent_seq_item item = lpddr5c_lp_agent_seq_item::type_id::create("pd");
    start_item(item);
    if (!item.randomize() with {
          lp_req_pd == 1; wakeup_req == 0; wait_for_ack == 1;
          pre_delay == 0; hold_cycles == 2;
        })
      `uvm_fatal(get_type_name(), "power-down request randomize failed")
    item.expect_ack = 1'b1;
    finish_item(item);
  endtask
endclass

class lp02_pd_blocked_seq extends uvm_sequence #(lpddr5c_lp_agent_seq_item);
  `uvm_object_utils(lp02_pd_blocked_seq)
  function new(string name = "lp02_pd_blocked_seq"); super.new(name); endfunction

  task body();
    lpddr5c_lp_agent_seq_item item = lpddr5c_lp_agent_seq_item::type_id::create("pd_blocked");
    start_item(item);
    if (!item.randomize() with {
          lp_req_pd == 1; wakeup_req == 0;
          pre_delay == 0; hold_cycles inside {[1:8]};
        })
      `uvm_fatal(get_type_name(), "blocked power-down request randomize failed")
    item.hold_cycles = 12;
    item.wait_for_ack = 1'b0;
    item.expect_ack = 1'b0;
    finish_item(item);
  endtask
endclass

class lp03_pd_wakeup_seq extends uvm_sequence #(lpddr5c_lp_agent_seq_item);
  `uvm_object_utils(lp03_pd_wakeup_seq)
  function new(string name = "lp03_pd_wakeup_seq"); super.new(name); endfunction

  task body();
    lpddr5c_lp_agent_seq_item item;
    item = lpddr5c_lp_agent_seq_item::type_id::create("pd");
    start_item(item);
    if (!item.randomize() with {
          lp_req_pd == 1; wakeup_req == 0; wait_for_ack == 1;
          pre_delay == 0; hold_cycles == 2;
        })
      `uvm_fatal(get_type_name(), "power-down request randomize failed")
    item.expect_ack = 1'b1;
    finish_item(item);

    item = lpddr5c_lp_agent_seq_item::type_id::create("wakeup");
    start_item(item);
    if (!item.randomize() with {
          lp_req_pd == 0; wakeup_req == 1; wait_for_ack == 1;
          pre_delay == 0; hold_cycles == 2;
        })
      `uvm_fatal(get_type_name(), "wakeup request randomize failed")
    item.expect_ack = 1'b1;
    finish_item(item);
  endtask
endclass

class lp04_pd_entry_seq extends lp01_pd_entry_seq;
  `uvm_object_utils(lp04_pd_entry_seq)
  function new(string name = "lp04_pd_entry_seq"); super.new(name); endfunction
endclass

class lp05_pd_entry_seq extends lp01_pd_entry_seq;
  `uvm_object_utils(lp05_pd_entry_seq)
  function new(string name = "lp05_pd_entry_seq"); super.new(name); endfunction
endclass

class lp04_axi_traffic_seq extends uvm_sequence #(lpddr5c_axi_agent_seq_item);
  `uvm_object_utils(lp04_axi_traffic_seq)
  int unsigned num_writes = 8;

  function new(string name = "lp04_axi_traffic_seq"); super.new(name); endfunction

  task body();
    lpddr5c_axi_agent_seq_item item;
    for (int unsigned i = 0; i < num_writes; i++) begin
      item = lpddr5c_axi_agent_seq_item::type_id::create($sformatf("write_%0d", i));
      start_item(item);
      item.is_write    = 1'b1;
      item.axi_awid    = i[3:0];
      item.axi_awaddr  = 32'h1080_0A00 + (i * 32'h10);
      item.axi_awlen   = 8'd0;
      item.axi_awsize  = 3'd4;
      item.axi_awburst = 2'b01;
      item.axi_wdata   = 128'hA5A5_5A5A_F0F0_0F0F_1234_5678_9ABC_DEF0 ^ i;
      item.axi_wstrb   = 16'hFFFF;
      item.axi_wlast   = 1'b1;
      item.axi_awvalid = 1'b1;
      item.axi_wvalid  = 1'b1;
      item.axi_bready  = 1'b1;
      finish_item(item);
    end
  endtask
endclass

class lp_directed_base_test extends base_test;
  `uvm_component_utils(lp_directed_base_test)
  function new(string name = "lp_directed_base_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task prepare_lp_test(int unsigned pd_count, int unsigned wakeup_count,
                       bit pd_ack_expected, bit wakeup_ack_expected = 1'b1);
    lp_directed_apb_seq apb_seq = lp_directed_apb_seq::type_id::create("lp_apb_seq");
    env.scoreboard.en_lp_check = 1'b1;
    env.scoreboard.lp_exp_pd_count = pd_count;
    env.scoreboard.lp_exp_wakeup_count = wakeup_count;
    env.scoreboard.lp_exp_pd_ack = pd_ack_expected;
    env.scoreboard.lp_exp_wakeup_ack = wakeup_ack_expected;
    apb_seq.start(env.apb_agent.sequencer);
    #100ns;
  endtask

  task check_internal_lp_state(bit [3:0] expected, string check_id);
    if (lpddr_tb_top.dut.u_lp_mgmt.state !== expected)
      env.scoreboard.report_sb_error(check_id,
        $sformatf("FAIL: expected internal LP state=0x%0h actual=0x%0h",
                  expected, lpddr_tb_top.dut.u_lp_mgmt.state));
    else
      env.scoreboard.report_sb_pass(check_id,
        $sformatf("internal LP state=0x%0h as expected", expected));
  endtask

endclass

class lp_01_test extends base_test;
  `uvm_component_utils(lp_01_test)
  function new(string name = "lp_01_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task prepare_lp01_test();
    lp_directed_apb_seq apb_seq = lp_directed_apb_seq::type_id::create("lp_apb_seq");
    env.scoreboard.en_lp_check = 1'b1;
    env.scoreboard.lp_exp_pd_count = 1;
    env.scoreboard.lp_exp_wakeup_count = 0;
    env.scoreboard.lp_exp_pd_ack = 1'b1;
    env.scoreboard.lp_exp_wakeup_ack = 1'b1;
    apb_seq.start(env.apb_agent.sequencer);
    #100ns;
  endtask

  task check_lp01_state();
    if (lpddr_tb_top.dut.u_lp_mgmt.state !== 4'd2)
      env.scoreboard.report_sb_error("LP_01",
        $sformatf("FAIL: expected internal LP state=0x2 (PD) actual=0x%0h",
                  lpddr_tb_top.dut.u_lp_mgmt.state));
    else
      env.scoreboard.report_sb_pass("LP_01",
        "internal LP state=0x2 (PD) as expected");
  endtask

  task run_phase(uvm_phase phase);
    lp01_pd_entry_seq lp_seq = lp01_pd_entry_seq::type_id::create("lp_seq");
    phase.raise_objection(this);
    prepare_lp01_test();
    fork
      lp_seq.start(env.lp_agent.sequencer);
      begin
        wait (lpddr_tb_top.LP_vif.lp_ack === 1'b1);
        check_lp01_state();
      end
    join
    phase.drop_objection(this);
  endtask
endclass

class lp_02_test extends lp_directed_base_test;
  `uvm_component_utils(lp_02_test)
  function new(string name = "lp_02_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    lp02_pd_blocked_seq lp_seq = lp02_pd_blocked_seq::type_id::create("lp_seq");
    lp04_axi_traffic_seq axi_seq = lp04_axi_traffic_seq::type_id::create("axi_seq");
    phase.raise_objection(this);
    prepare_lp_test(1, 0, 1'b0);
    fork
      lp_seq.start(env.lp_agent.sequencer);
      axi_seq.start(env.axi_agent.sequencer);
      begin
        wait (lpddr_tb_top.LP_vif.lp_req_pd === 1'b1);
        repeat (8) @(posedge lpddr_tb_top.sys_clk);
        if (lpddr_tb_top.LP_vif.lp_ack !== 1'b0)
          env.scoreboard.report_sb_error("LP_02",
            "FAIL: lp_ack asserted while AXI traffic is pending");
        check_internal_lp_state(4'd1, "LP_02");
      end
    join
    phase.drop_objection(this);
  endtask
endclass

class lp_03_test extends lp_directed_base_test;
  `uvm_component_utils(lp_03_test)
  function new(string name = "lp_03_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    lp03_pd_wakeup_seq lp_seq = lp03_pd_wakeup_seq::type_id::create("lp_seq");
    phase.raise_objection(this);
    prepare_lp_test(1, 1, 1'b1);
    env.scoreboard.lp_exp_wakeup_latency_min = 12;
    env.scoreboard.lp_exp_wakeup_latency_max = 16;
    lp_seq.start(env.lp_agent.sequencer);
    phase.drop_objection(this);
  endtask
endclass

class lp_04_test extends lp_directed_base_test;
  `uvm_component_utils(lp_04_test)
  function new(string name = "lp_04_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    lp04_pd_entry_seq lp_seq = lp04_pd_entry_seq::type_id::create("lp_seq");
    lp04_axi_traffic_seq axi_seq = lp04_axi_traffic_seq::type_id::create("axi_seq");
    bit axi_seq_done = 1'b0;
    phase.raise_objection(this);
    prepare_lp_test(1, 0, 1'b1);
    lp_seq.start(env.lp_agent.sequencer);
    check_internal_lp_state(4'd2, "LP_04_PRE");
    axi_seq.num_writes = 1;
    fork
      begin
        axi_seq.start(env.axi_agent.sequencer);
        axi_seq_done = 1'b1;
      end
      begin
        repeat (30) @(posedge lpddr_tb_top.sys_clk);
      end
    join_any
    if (!axi_seq_done)
      axi_seq.kill();
    disable fork;
    if (lpddr_tb_top.dut.u_lp_mgmt.state !== 4'd0)
      env.scoreboard.report_sb_error("LP_04",
        "FAIL: LP state did not exit power-down after AXI traffic was requested");
    else
      env.scoreboard.report_sb_pass("LP_04",
        "LP state exited power-down after AXI traffic");
    phase.drop_objection(this);
  endtask
endclass

class lp_05_test extends lp_directed_base_test;
  `uvm_component_utils(lp_05_test)
  function new(string name = "lp_05_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    lp05_pd_entry_seq lp_seq = lp05_pd_entry_seq::type_id::create("lp_seq");
    phase.raise_objection(this);
    prepare_lp_test(1, 0, 1'b1);
    fork
      lp_seq.start(env.lp_agent.sequencer);
      begin
        wait (lpddr_tb_top.LP_vif.lp_ack === 1'b1);
        check_internal_lp_state(4'd2, "LP_05");
        if (lpddr_tb_top.DFI_vif.dfi_cke !== 1'b0)
          `uvm_warning("LP_05_EXPECTED_FAIL",
            $sformatf("expected dfi_cke=0 in power-down; actual=0x%0h (lp_mgmt CKE is not connected)",
                      lpddr_tb_top.DFI_vif.dfi_cke))
        else
          `uvm_info("LP_05", "dfi_cke is low in power-down", UVM_NONE)
      end
    join
    phase.drop_objection(this);
  endtask
endclass

class lp06_pd_wakeup_seq extends uvm_sequence #(lpddr5c_lp_agent_seq_item);
  `uvm_object_utils(lp06_pd_wakeup_seq)
  function new(string name = "lp06_pd_wakeup_seq"); super.new(name); endfunction

  task body();
    lpddr5c_lp_agent_seq_item item;

    item = lpddr5c_lp_agent_seq_item::type_id::create("pd");
    start_item(item);
    if (!item.randomize() with {
          lp_req_pd == 1; wakeup_req == 0; wait_for_ack == 1;
          pre_delay == 0; hold_cycles == 2;
        })
      `uvm_fatal(get_type_name(), "power-down request randomize failed")
    item.expect_ack = 1'b1;
    finish_item(item);

    item = lpddr5c_lp_agent_seq_item::type_id::create("wakeup");
    start_item(item);
    if (!item.randomize() with {
          lp_req_pd == 0; wakeup_req == 1; wait_for_ack == 1;
          pre_delay == 0; hold_cycles == 2;
        })
      `uvm_fatal(get_type_name(), "wakeup request randomize failed")
    item.expect_ack = 1'b1;
    finish_item(item);
  endtask
endclass

class lp06_axi_data_seq extends uvm_sequence #(lpddr5c_axi_agent_seq_item);
  `uvm_object_utils(lp06_axi_data_seq)

  bit do_write;
  bit [127:0] observed_data;

  function new(string name = "lp06_axi_data_seq"); super.new(name); endfunction

  task body();
    lpddr5c_axi_agent_seq_item item;
    item = lpddr5c_axi_agent_seq_item::type_id::create("axi_data");
    start_item(item);
    item.is_write = do_write;
    if (do_write) begin
      item.axi_awid    = 4'h1;
      item.axi_awaddr  = 32'h1080_0A00;
      item.axi_awlen   = 8'd0;
      item.axi_awsize  = 3'd4;
      item.axi_awburst = 2'b01;
      item.axi_wdata   = 128'hDEAD_BEEF_0123_4567_89AB_CDEF_FEDC_BA98;
      item.axi_wstrb   = 16'hFFFF;
      item.axi_wlast   = 1'b1;
      item.axi_awvalid = 1'b1;
      item.axi_wvalid  = 1'b1;
      item.axi_bready  = 1'b1;
    end else begin
      item.axi_arid    = 4'h1;
      item.axi_araddr  = 32'h1080_0A00;
      item.axi_arlen   = 8'd0;
      item.axi_arsize  = 3'd4;
      item.axi_arburst = 2'b01;
      item.axi_arvalid = 1'b1;
      item.axi_rready  = 1'b1;
    end
    finish_item(item);

    if (!do_write) begin
      observed_data = item.axi_rdata;
      if (item.axi_rresp !== 2'b00)
        `uvm_error(get_type_name(),
          $sformatf("read returned RRESP=0x%0h", item.axi_rresp))
    end
  endtask
endclass

class lp_06_test extends lp_directed_base_test;
  `uvm_component_utils(lp_06_test)
  function new(string name = "lp_06_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    lp06_axi_data_seq write_seq, read_seq;
    lp06_pd_wakeup_seq lp_seq;

    phase.raise_objection(this);
    uvm_root::get().set_timeout(1ms, 0);
    prepare_lp_test(1, 1, 1'b1);

    write_seq = lp06_axi_data_seq::type_id::create("write_seq");
    write_seq.do_write = 1'b1;
    write_seq.start(env.axi_agent.sequencer);
    #500ns;

    lp_seq = lp06_pd_wakeup_seq::type_id::create("lp_seq");
    fork
      lp_seq.start(env.lp_agent.sequencer);
      begin
        wait (lpddr_tb_top.LP_vif.lp_ack === 1'b1);
        check_internal_lp_state(4'd2, "LP_06_PD");
      end
      begin
        wait (lpddr_tb_top.LP_vif.wakeup_ack === 1'b1);
        check_internal_lp_state(4'd0, "LP_06_WAKE");
      end
    join

    check_internal_lp_state(4'd0, "LP_06_FINAL");
    read_seq = lp06_axi_data_seq::type_id::create("read_seq");
    read_seq.do_write = 1'b0;
    read_seq.start(env.axi_agent.sequencer);
    if (read_seq.observed_data !== 128'hDEAD_BEEF_0123_4567_89AB_CDEF_FEDC_BA98)
      env.scoreboard.report_sb_error("LP_06_DATA",
        $sformatf("FAIL: data changed across low-power cycle; expected 0x%032h actual 0x%032h",
                  128'hDEAD_BEEF_0123_4567_89AB_CDEF_FEDC_BA98,
                  read_seq.observed_data));
    else
      env.scoreboard.report_sb_pass("LP_06_DATA",
        "AXI read data was preserved across power-down and wake-up");

    phase.drop_objection(this);
  endtask
endclass

//==============================================================================
// DFI_04 : PHY master handshake
//
// Feature  : PHY handshakes and master requests
// Approach : configure CTRL0 for the handshake-only training mode, hold the
//            PHY BFM request until the controller reaches TS_WAIT_PHY_READY,
//            then check that dfi_phymstr_ack is a ONE-CYCLE pulse.
//
// Checker (dfi04_checker, samples every sys_clk):
//   * on each rising edge of dfi_phymstr_req records the controller state
//       expected: TS_WAIT_PHY_READY   actual: state at the request
//   * on each rising edge of dfi_phymstr_ack
//       - must belong to a pending request           (DFI04_ACK_NO_REQ)
//       - only one ack per request                   (DFI04_ACK_EXTRA)
//       - latency request -> ack is recorded (no fixed latency is specified)
//   * on each falling edge of dfi_phymstr_ack
//       - pulse width must be exactly 1 clk          (DFI04_ACK_WIDTH)
//   * a request without ack within max_ack_wait clk  (DFI04_ACK_MISSING)
//
`define DFI04_CLK   lpddr_tb_top.sys_clk
`define DFI04_REQ   lpddr_tb_top.DFI_vif.dfi_phymstr_req
`define DFI04_ACK   lpddr_tb_top.DFI_vif.dfi_phymstr_ack
`define DFI04_IN_WAIT_PHY_READY (lpddr_tb_top.dut.u_training_ctrl.train_state == 5'd1)
//==============================================================================

class dfi04_apb_seq extends uvm_sequence #(lpddr5c_apb_agent_seq_item);
  `uvm_object_utils(dfi04_apb_seq)

  function new(string name = "dfi04_apb_seq");
    super.new(name);
  endfunction

  task body();
    lpddr5c_apb_agent_seq_item item =
      lpddr5c_apb_agent_seq_item::type_id::create("ctrl0_train_enable");
    start_item(item);
    item.paddr = 16'h0000;
    item.pwdata = 32'h0000_0010; // CTRL0: start training with mode 0 (handshake only)
    item.pwrite = 1'b1;
    finish_item(item);
  endtask
endclass

class dfi04_checker extends uvm_component;

  `uvm_component_utils(dfi04_checker)

  // knobs
  int unsigned max_ack_wait = 256;         // clk a request may wait for its ack

  // results
  int unsigned n_req, n_req_in_state, n_ack, n_ack_ok_width;
  int unsigned n_err;
  int unsigned lat_min, lat_max;
  int unsigned lat_sum;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    bit          req, ack, req_q, ack_q, in_state, waiting_ack, acked_this_req;
    int unsigned clk, req_clk, ack_w, lat;

    forever begin
      @(posedge `DFI04_CLK);
      clk++;
      req      = (`DFI04_REQ === 1'b1);
      ack      = (`DFI04_ACK === 1'b1);
      in_state = `DFI04_IN_WAIT_PHY_READY;

      // ---- request rising edge --------------------------------------------
      if (req && !req_q) begin
        n_req++;
        req_clk     = clk;
        waiting_ack = 1'b1;
        acked_this_req = 1'b0;
        if (in_state) begin
          n_req_in_state++;
          `uvm_info("DFI_04",
            $sformatf("PASS: dfi_phymstr_req @clk %0d | expected: controller in TS_WAIT_PHY_READY | actual: TS_WAIT_PHY_READY at %0t",
                      clk, $time), UVM_LOW)
        end
        else begin
          n_err++;
          `uvm_error("DFI_04_STATE",
            $sformatf("dfi_phymstr_req @clk %0d | expected: controller in TS_WAIT_PHY_READY | actual: not in that state at %0t",
                      clk, $time))
        end
      end

      // ---- ack rising edge --------------------------------------------------
      if (ack && !ack_q) begin
        n_ack++;
        ack_w = 1;
        if (!waiting_ack) begin
          n_err++;
          if (req && acked_this_req)
            `uvm_error("DFI04_ACK_EXTRA",
              $sformatf("FAIL: dfi_phymstr_ack @clk %0d | expected: one ack per request | actual: a second ack while dfi_phymstr_req is still high at %0t",
                        clk, $time))
          else
            `uvm_error("DFI04_ACK_NO_REQ",
              $sformatf("FAIL: dfi_phymstr_ack @clk %0d | expected: a pending dfi_phymstr_req | actual: none (req=%0b) at %0t",
                        clk, req, $time))
        end
        else begin
          acked_this_req = 1'b1;
          lat = clk - req_clk;
          lat_sum += lat;
          if (n_ack == 1 || lat < lat_min) lat_min = lat;
          if (n_ack == 1 || lat > lat_max) lat_max = lat;
          waiting_ack = 1'b0;
          `uvm_info("DFI_04",
            $sformatf("dfi_phymstr_ack @clk %0d | req @clk %0d -> ack latency = %0d clk (no fixed latency specified, recorded only)",
                      clk, req_clk, lat), UVM_LOW)
        end
      end
      else if (ack && ack_q) begin
        ack_w++;                                    // ack still high
      end

      // ---- ack falling edge: pulse width must be exactly one clock ----------
      if (!ack && ack_q) begin
        if (ack_w == 1) begin
          n_ack_ok_width++;
          `uvm_info("DFI_04",
            $sformatf("PASS: dfi_phymstr_ack pulse | expected width = 1 clk | actual width = %0d clk at %0t", ack_w, $time),
            UVM_LOW)
        end
        else begin
          n_err++;
          `uvm_error("DFI04_ACK_WIDTH",
            $sformatf("FAIL: dfi_phymstr_ack pulse | expected width = 1 clk | actual width = %0d clk at %0t", ack_w, $time))
        end
      end

      // ---- request that never gets an ack -----------------------------------------
      if (waiting_ack && ((clk - req_clk) > max_ack_wait)) begin
        n_err++;
        `uvm_error("DFI04_ACK_MISSING",
          $sformatf("FAIL: dfi_phymstr_req @clk %0d | expected: dfi_phymstr_ack within %0d clk | actual: none after %0d clk at %0t",
                    req_clk, max_ack_wait, clk - req_clk, $time))
        waiting_ack = 1'b0;
      end

      req_q = req;
      ack_q = ack;
    end
  endtask

  function void check_phase(uvm_phase phase);
    super.check_phase(phase);
    if (n_req == 0)
      `uvm_error("DFI04_NO_REQ", "FAIL: expected at least one dfi_phymstr_req | actual: none seen")
    if (n_req != 0 && n_ack == 0)
      `uvm_error("DFI04_NO_ACK", $sformatf("FAIL: %0d dfi_phymstr_req seen | expected: dfi_phymstr_ack for each | actual: none", n_req))
  endfunction

  function void report_phase(uvm_phase phase);
    super.report_phase(phase);
    `uvm_info("DFI_04",
      $sformatf("PHY master: requests=%0d (in TS_WAIT_PHY_READY=%0d) acks=%0d 1-clk acks=%0d | req->ack latency min=%0d max=%0d clk | errors=%0d",
                n_req, n_req_in_state, n_ack, n_ack_ok_width, lat_min, lat_max, n_err),
      UVM_NONE)
  endfunction

endclass : dfi04_checker


//==============================================================================
// Test
//==============================================================================
class lpddr5c_dfi_04_test extends base_test;

  `uvm_component_utils(lpddr5c_dfi_04_test)

  dfi04_checker chk;

  time wait_state_timeout = 20us;

  function new(string name = "lpddr5c_dfi_04_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    chk = dfi04_checker::type_id::create("chk", this);
  endfunction

  task run_phase(uvm_phase phase);                 // replaces base_test run_phase
    bit reached = 1'b0;

    phase.raise_objection(this);
    //uvm_top.set_timeout(1ms, 0);                   // watchdog
    uvm_root::get().set_timeout(1ms, 0);

    // Keep the PHY BFM's request pending until CTRL0 has put the controller in
    // TS_WAIT_PHY_READY; the BFM holds its request high until it receives ACK.
    force `DFI04_REQ = 1'b0;
    begin
      dfi04_apb_seq apb_s = dfi04_apb_seq::type_id::create("apb_s");
      apb_s.start(env.apb_agent.sequencer);
    end

    if (lpddr_tb_top.dut.u_reg_cfg.reg_ctrl0[4] !== 1'b1 ||
        lpddr_tb_top.dut.u_reg_cfg.reg_ctrl0[7:5] !== 3'b000)
      `uvm_error("DFI_04", "CTRL0 training start/mode fields were not configured as expected")

    fork
      begin
        wait (`DFI04_IN_WAIT_PHY_READY);
        reached = 1'b1;
      end
      begin
        #(wait_state_timeout);
      end
    join_any
    disable fork;

    if (!reached)
      `uvm_error("DFI_04",
        $sformatf("FAIL: expected controller to reach TS_WAIT_PHY_READY within %0t | actual: never reached",
                  wait_state_timeout))

    release `DFI04_REQ;

    // wait for the ack (or give up)
    fork
      begin
        wait (chk.n_ack >= 1);
        repeat (4) @(posedge `DFI04_CLK);          // let the ack pulse fall so its width is measured
      end
      begin
        #20us;
      end
    join_any
    disable fork;

    #200ns;
    phase.drop_objection(this);
  endtask

  function void report_phase(uvm_phase phase);
    uvm_report_server s = uvm_report_server::get_server();
    super.report_phase(phase);
    if (s.get_severity_count(UVM_ERROR) + s.get_severity_count(UVM_FATAL) == 0)
      `uvm_info("DFI_04", "*** DFI_04 PASSED ***", UVM_NONE)
    else
      `uvm_info("DFI_04", "*** DFI_04 FAILED ***", UVM_NONE)
  endfunction

endclass : lpddr5c_dfi_04_test

//==============================================================================
// TRN_01 : CA training start and result
//==============================================================================
class trn01_apb_seq extends uvm_sequence #(lpddr5c_apb_agent_seq_item);
  `uvm_object_utils(trn01_apb_seq)

  function new(string name = "trn01_apb_seq");
    super.new(name);
  endfunction

  task body();
    lpddr5c_apb_agent_seq_item item =
      lpddr5c_apb_agent_seq_item::type_id::create("ctrl0_ca_training");
    start_item(item);
    item.paddr = 16'h0000;
    item.pwdata = 32'h0000_0030; // CTRL0[4]=train_start, CTRL0[7:5]=TRAIN_CA
    item.pwrite = 1'b1;
    finish_item(item);
  endtask
endclass

class trn_01_test extends base_test;
  `uvm_component_utils(trn_01_test)

  dfi04_checker chk;
  time training_timeout = 20us;

  function new(string name = "trn_01_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    chk = dfi04_checker::type_id::create("chk", this);
  endfunction

  task run_phase(uvm_phase phase);
    trn01_apb_seq apb_s = trn01_apb_seq::type_id::create("apb_s");
    bit reached_wait_state = 1'b0;
    bit training_completed = 1'b0;

    phase.raise_objection(this);
    uvm_root::get().set_timeout(1ms, 0);

    // Hold off the PHY BFM's automatic request until the controller is ready.
    force `DFI04_REQ = 1'b0;
    apb_s.start(env.apb_agent.sequencer);

    if (lpddr_tb_top.dut.u_reg_cfg.reg_ctrl0[4] !== 1'b1 ||
        lpddr_tb_top.dut.u_reg_cfg.reg_ctrl0[7:5] !== 3'b001)
      `uvm_error("TRN_01", "CTRL0 did not enable CA training mode")

    fork
      begin
        wait (`DFI04_IN_WAIT_PHY_READY);
        reached_wait_state = 1'b1;
      end
      begin
        #(training_timeout);
      end
    join_any
    disable fork;

    if (!reached_wait_state) begin
      `uvm_error("TRN_01", "controller did not reach TS_WAIT_PHY_READY")
    end else begin
      // One full clock pulse is sufficient for the controller to latch the request.
      @(negedge `DFI04_CLK);
      force `DFI04_REQ = 1'b1;
      @(negedge `DFI04_CLK);
      force `DFI04_REQ = 1'b0;

      fork
        begin
          wait (lpddr_tb_top.dut.training_done === 1'b1);
          training_completed = 1'b1;
        end
        begin
          #(training_timeout);
        end
      join_any
      disable fork;

      if (!training_completed) begin
        `uvm_error("TRN_01",
          $sformatf("CA training did not complete within %0t", training_timeout))
      end else begin
        if (lpddr_tb_top.dut.ca_training_result[0] !== 8'd30)
          `uvm_error("TRN_01",
            $sformatf("expected ca_training_result=30, actual=%0d",
                      lpddr_tb_top.dut.ca_training_result[0]))
        else
          `uvm_info("TRN_01", "CA training result is 30 as expected", UVM_LOW)

        if (lpddr_tb_top.dut.training_error !== 1'b0)
          `uvm_error("TRN_01", "training_error asserted during CA training")
      end
    end

    release `DFI04_REQ;
    phase.drop_objection(this);
  endtask

  function void report_phase(uvm_phase phase);
    uvm_report_server s = uvm_report_server::get_server();
    super.report_phase(phase);
    if (s.get_severity_count(UVM_ERROR) + s.get_severity_count(UVM_FATAL) == 0)
      `uvm_info("TRN_01", "*** TRN_01 PASSED ***", UVM_NONE)
    else
      `uvm_info("TRN_01", "*** TRN_01 FAILED ***", UVM_NONE)
  endfunction
endclass

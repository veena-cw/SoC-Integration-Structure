class csi2_scoreboard extends uvm_scoreboard;
  `uvm_component_utils(csi2_scoreboard)

  csi2_env_config cfg;
  uvm_tlm_analysis_fifo #(csi2_rx_packet_item) expected_fifo;
  uvm_tlm_analysis_fifo #(csi2_axi_write_item) actual_fifo;

  byte unsigned expected_bytes[$];
  byte unsigned actual_bytes[$];
  int unsigned expected_transaction_count;
  int unsigned effective_write_count;
  int unsigned mismatch_count;
  bit bfm_completed;
  int unsigned bfm_status;

  function new(string name = "csi2_scoreboard", uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    expected_fifo = new("expected_fifo", this);
    actual_fifo   = new("actual_fifo", this);
    if (!uvm_config_db#(csi2_env_config)::get(this, "", "env_cfg", cfg))
      `uvm_fatal("SB", "Missing environment configuration")
  endfunction

  task collect_expected();
    csi2_rx_packet_item item;
    forever begin
      expected_fifo.get(item);
      expected_transaction_count++;
      bfm_completed = item.bfm_completed;
      bfm_status    = item.bfm_status;
      foreach (item.payload[index])
        expected_bytes.push_back(item.payload[index]);
    end
  endtask

  task collect_actual();
    csi2_axi_write_item item;
    forever begin
      actual_fifo.get(item);
      effective_write_count++;
      foreach (item.accepted_bytes[index])
        actual_bytes.push_back(item.accepted_bytes[index]);
    end
  endtask

  task run_phase(uvm_phase phase);
    fork
      collect_expected();
      collect_actual();
    join
  endtask

  function void check_phase(uvm_phase phase);
    int unsigned compare_count;
    super.check_phase(phase);

    if (expected_transaction_count != 1) begin
      mismatch_count++;
      `uvm_error("SB_CHECK",
                 $sformatf("Expected one completed BFM transaction, observed %0d",
                           expected_transaction_count))
    end
    if (!bfm_completed) begin
      mismatch_count++;
      `uvm_error("SB_CHECK", $sformatf("BFM did not complete; status=%0d",
                                        bfm_status))
    end
    if (cfg.status_vif.dtype !== DT_RAW7) begin
      mismatch_count++;
      `uvm_error("SB_DTYPE",
                 $sformatf("Expected datatype 0x29, observed 0x%02h",
                           cfg.status_vif.dtype))
    end
    if (cfg.status_vif.lane_err || cfg.status_vif.llp_err_vld) begin
      mismatch_count++;
      `uvm_error("SB_DUT_ERROR",
                 $sformatf("lane_err=%0b llp_err_vld=%0b llp_err=%0d",
                           cfg.status_vif.lane_err,
                           cfg.status_vif.llp_err_vld,
                           cfg.status_vif.llp_err))
    end
    if (effective_write_count == 0) begin
      mismatch_count++;
      `uvm_error("SB_AXI", "No effective AXI write was observed")
    end
    if (actual_bytes.size() != expected_bytes.size()) begin
      mismatch_count++;
      `uvm_error("SB_SIZE",
                 $sformatf("AXI byte count differs: expected=%0d actual=%0d",
                           expected_bytes.size(), actual_bytes.size()))
    end

    compare_count = (actual_bytes.size() < expected_bytes.size()) ?
                    actual_bytes.size() : expected_bytes.size();
    for (int index = 0; index < compare_count; index++) begin
      if (actual_bytes[index] != expected_bytes[index]) begin
        mismatch_count++;
        `uvm_error("SB_DATA",
                   $sformatf("Byte[%0d] expected=0x%02h actual=0x%02h",
                             index, expected_bytes[index], actual_bytes[index]))
        break;
      end
    end
  endfunction

  function void report_phase(uvm_phase phase);
    super.report_phase(phase);
    if (mismatch_count == 0 && effective_write_count != 0)
      `uvm_info("SB_SUMMARY",
                $sformatf("PASS expected_bytes=%0d actual_bytes=%0d writes=%0d",
                          expected_bytes.size(), actual_bytes.size(),
                          effective_write_count), UVM_NONE)
    else
      `uvm_error("SB_SUMMARY",
                 $sformatf("FAIL expected_bytes=%0d actual_bytes=%0d writes=%0d mismatches=%0d",
                           expected_bytes.size(), actual_bytes.size(),
                           effective_write_count, mismatch_count))
  endfunction
endclass : csi2_scoreboard

// plic_ral_passive: the PLIC testbench's register model, used passively.
//
// In this environment the CPU is the AHB master, so the RAL frontdoor, AHB
// driver and RAL sequences of VERIF/plic_verif/plic_tb cannot be used. Its
// AHB monitor, RAL block, adapter and predictor can, unchanged: the monitor
// watches the AHB port of the shared PLIC (plic_ahb_vif in cpu_tb_top) and
// the mirror follows every access the cores make.
//
// plic_ral_scoreboard only counts bus traffic and uvm_reg_predictor updates
// the mirror without checking it, so the check is here: each read is compared
// with the mirror first, then handed to the predictor. As the mirror starts
// from the RAL reset values, the first read of a register checks its reset
// value. ID_n (claim/complete) is not compared: plic_ral_metadata_pkg marks
// it volatile with read/write side effects.
//
// Results: PLIC_RAL report at the end of the test, UVM_ERROR per mismatch.

`ifndef PLIC_RAL_PASSIVE_SV
`define PLIC_RAL_PASSIVE_SV

class plic_ral_passive extends uvm_component;
  `uvm_component_utils(plic_ral_passive)

  plic_ral_block          ral_model;
  plic_ahb_lite_adapter   adapter;
  plic_ahb_lite_predictor predictor;
  plic_ahb_lite_monitor   monitor;
  uvm_analysis_imp #(plic_ahb_lite_item, plic_ral_passive) bus_in;

  int unsigned n_writes, n_reads, n_compared, n_mismatch, n_skipped, n_unmapped, n_hresp, n_narrow;

  function new(string name = "plic_ral_passive", uvm_component parent = null);
    super.new(name, parent);
    bus_in = new("bus_in", this);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    ral_model = plic_ral_block::type_id::create("ral_model", this);
    ral_model.build();
    ral_model.lock_model();
    ral_model.reset();
    adapter   = plic_ahb_lite_adapter::type_id::create("adapter", this);
    predictor = plic_ahb_lite_predictor::type_id::create("predictor", this);
    monitor   = plic_ahb_lite_monitor::type_id::create("monitor", this);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    ral_model.default_map.set_auto_predict(0);
    predictor.map     = ral_model.default_map;
    predictor.adapter = adapter;
    monitor.analysis_port.connect(bus_in);
  endfunction

  // Monitor: check a read against the mirror, then update the mirror.
  // Byte / halfword accesses (HSIZE < word, BP-DV-092): the PLIC testbench's
  // adapter / predictor handle whole 32-bit words only. A narrow access is
  // turned into a word access at the aligned address: a write merges its
  // byte lanes into the mirror (the predictor then applies the field access
  // policies), a read compares only its byte lanes and leaves the mirror.
  function void write(plic_ahb_lite_item tr);
    uvm_reg            rg;
    uvm_reg_data_t     exp;
    bit [31:0]         lanes = 32'hFFFF_FFFF;
    plic_ahb_lite_item wtr = tr;

    if (tr.hresp) n_hresp++;
    if (tr.write) n_writes++;
    else          n_reads++;

    if (tr.hsize < 3'd2) begin
      int unsigned nbytes = 1 << tr.hsize;
      lanes = ((nbytes == 1) ? 32'h0000_00FF : 32'h0000_FFFF) << (8 * tr.addr[1:0]);
      n_narrow++;
    end

    rg = ral_model.default_map.get_reg_by_offset({tr.addr[31:2], 2'b00}, !tr.write);
    if (rg != null && lanes != 32'hFFFF_FFFF) begin
      if (tr.write) begin
        wtr = plic_ahb_lite_item::type_id::create("narrow_wr");
        wtr.write  = 1'b1;
        wtr.rdata  = tr.rdata;
        wtr.hburst = tr.hburst;
        wtr.htrans = tr.htrans;
        wtr.hready = tr.hready;
        wtr.hresp  = tr.hresp;
        wtr.addr   = {tr.addr[31:2], 2'b00};
        wtr.hsize = 3'd2;
        wtr.wdata = (32'(rg.get_mirrored_value()) & ~lanes) | (tr.wdata & lanes);
      end
      else begin
        if (!(is_dont_compare(rg.get_name()) || is_volatile(rg.get_name())
              || has_read_side_effect(rg.get_name()))) begin
          exp = rg.get_mirrored_value();
          n_compared++;
          if ((tr.rdata & lanes) !== (32'(exp) & lanes)) begin
            n_mismatch++;
            `uvm_error("PLIC_RAL", $sformatf("narrow read %s (0x%08h, hsize %0d): hrdata=0x%08h mirror=0x%08h lanes=0x%08h",
                       rg.get_name(), tr.addr, tr.hsize, tr.rdata, 32'(exp), lanes))
          end
        end
        else
          n_skipped++;
        return;
      end
    end
    tr = wtr;

    rg = ral_model.default_map.get_reg_by_offset(tr.addr, !tr.write);
    if (rg == null) begin
      n_unmapped++;
      `uvm_error("PLIC_RAL", $sformatf("%s to addr 0x%08h: no register in the RAL model",
                 tr.write ? "write" : "read", tr.addr))
    end
    else if (!tr.write) begin
      if (is_dont_compare(rg.get_name()) || is_volatile(rg.get_name())
          || has_read_side_effect(rg.get_name()))
        n_skipped++;
      else begin
        exp = rg.get_mirrored_value();
        n_compared++;
        if (tr.rdata !== 32'(exp)) begin
          n_mismatch++;
          `uvm_error("PLIC_RAL", $sformatf("read %s (0x%08h): hrdata=0x%08h mirror=0x%08h",
                     rg.get_name(), tr.addr, tr.rdata, 32'(exp)))
        end
      end
    end
    predictor.write(tr);
  endfunction

  function void report_phase(uvm_phase phase);
    super.report_phase(phase);
    `uvm_info("PLIC_RAL", $sformatf("%0d writes, %0d reads (%0d byte/halfword): %0d compared with the mirror, %0d mismatched, %0d ID reads skipped, %0d unmapped, %0d HRESP errors",
              n_writes, n_reads, n_narrow, n_compared, n_mismatch, n_skipped, n_unmapped, n_hresp), UVM_LOW)
    if (n_writes + n_reads == 0)
      `uvm_error("PLIC_RAL", "the AHB monitor saw no PLIC access")
  endfunction
endclass

`endif

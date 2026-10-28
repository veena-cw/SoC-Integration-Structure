//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : spi_master_monitor
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: SPI master-side monitor: decodes bytes, SCK timing, CS setup/hold from the SPI pins using the master's sampling edges
//=================================================================================

class spi_master_monitor extends uvm_monitor;

  `uvm_component_utils(spi_master_monitor)

  virtual spi_master_if                    vif;
  uvm_analysis_port #(spi_master_seq_item) ap;         // completed bytes (published when the byte is known to be last/not last)
  uvm_analysis_port #(spi_master_seq_item) start_ap;   // byte-start events (first SCK edge of a byte)

  function new(string name = "spi_master_monitor", uvm_component parent = null);
    super.new(name, parent);
    ap       = new("ap", this);
    start_ap = new("start_ap", this);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual spi_master_if)::read_by_name(get_full_name(), "master_vif", vif))
      `uvm_fatal("NOVIF", "master_vif not found in uvm_resource_db")
  endfunction

  // programmed configuration, sampled through the clocking block
  function void fill_cfg(spi_master_seq_item it);
    it.cpol       = vif.master_cb.cpol;
    it.cpha       = vif.master_cb.cpha;
    it.lsb_first  = vif.master_cb.lsb_first;
    it.inter_byte = vif.master_cb.inter_byte;
    it.cs_sel_cfg = vif.master_cb.cs_sel_cfg;
    it.clk_div    = vif.master_cb.clk_div;
    it.cs_setup   = vif.master_cb.cs_setup;
    it.cs_hold    = vif.master_cb.cs_hold;
  endfunction

  // Sampling rules (all values are the pre-edge samples of master_cb):
  //  * an SCK edge is detected when SCK differs from the previous sample
  //  * the master samples MISO/MOSI with the values that were present *before* the SCK toggle,
  //    therefore the previous-sample values are used at a sampling edge
  //  * CPHA=0: leading (even) edges sample; CPHA=1: trailing (odd) edges sample
  task run_phase(uvm_phase phase);
    spi_master_seq_item  cur, pending, st;
    bit                  in_frame;
    bit                  sck_s, mosi_s, miso_s, prev_sck, prev_mosi, prev_miso;
    bit [3:0]            cs_s;
    bit [DATA_WIDTH-1:0] mo_w, mi_w;
    bit [1:0]            cs_obs;
    bit                  lead, samp;
    int unsigned         clk_cnt, cs_fall_clk, last_edge_clk, pend_last_edge_clk;
    int unsigned         edge_in_byte, bit_in_byte, byte_idx, hp, hp_min, hp_max;

    in_frame = 0; clk_cnt = 0; pending = null; cur = null;
    prev_sck = 0; prev_mosi = 0; prev_miso = 0;
    edge_in_byte = 0; bit_in_byte = 0; byte_idx = 0;
    hp_min = 0; hp_max = 0; last_edge_clk = 0; pend_last_edge_clk = 0; cs_fall_clk = 0;
    mo_w = '0; mi_w = '0; cs_obs = '0;

    forever begin
      @(vif.master_cb);
      clk_cnt++;
      sck_s  = vif.master_cb.sck;
      mosi_s = vif.master_cb.mosi;
      miso_s = vif.master_cb.miso;
      cs_s   = vif.master_cb.cs_n;

      if (vif.master_cb.presetn !== 1'b1) begin
        // reset: everything partial is discarded
        in_frame = 0; pending = null; cur = null; edge_in_byte = 0;
        prev_sck = sck_s; prev_mosi = mosi_s; prev_miso = miso_s;
        continue;
      end

      if (!in_frame) begin
        if (cs_s != 4'hF) begin
          in_frame     = 1;
          byte_idx     = 0;
          edge_in_byte = 0;
          cs_fall_clk  = clk_cnt;
          prev_sck     = sck_s;
          cs_obs       = '0;
          for (int i = 3; i >= 0; i--) if (!cs_s[i]) cs_obs = i[1:0];
        end
      end else begin
        if (cs_s == 4'hF) begin
          // chip select released: the last finished byte is now known to be the last of the burst
          if (edge_in_byte != 0)
            `uvm_error("MON_PARTIAL", $sformatf("CS released after only %0d SCK edges of a byte", edge_in_byte))
          if (pending != null) begin
            pending.last_in_burst = 1'b1;
            pending.hold_clks     = clk_cnt - pend_last_edge_clk;
            ap.write(pending);
            pending = null;
          end
          in_frame = 0;
          edge_in_byte = 0;
        end else if (sck_s != prev_sck) begin
          if (edge_in_byte == 0) begin
            // first edge of a byte
            if (pending != null) begin
              pending.last_in_burst = 1'b0;
              ap.write(pending);
              pending = null;
            end
            cur = spi_master_seq_item::type_id::create("mst_byte");
            fill_cfg(cur);
            cur.byte_idx    = byte_idx;
            cur.cs_sel      = cs_obs;
            cur.setup_clks  = (byte_idx == 0) ? (clk_cnt - cs_fall_clk) : 0;
            cur.t_start     = $time;
            cur.sck_idle     = prev_sck;
            cur.sck_first    = sck_s;
            st = spi_master_seq_item::type_id::create("mst_byte_start");
            fill_cfg(st);
            st.byte_idx     = byte_idx;
            st.cs_sel       = cs_obs;
            st.setup_clks   = cur.setup_clks;
            st.t_start      = $time;
            start_ap.write(st);
            mo_w = '0; mi_w = '0; bit_in_byte = 0;
            hp_min = 32'hFFFF_FFFF; hp_max = 0;
          end else begin
            hp = clk_cnt - last_edge_clk;
            if (hp < hp_min) hp_min = hp;
            if (hp > hp_max) hp_max = hp;
          end

          lead = ((edge_in_byte % 2) == 0);
          samp = (cur.cpha == 1'b0) ? lead : !lead;
          if (samp) begin
            if (cur.lsb_first) begin
              mo_w = {prev_mosi, mo_w[DATA_WIDTH-1:1]};
              mi_w = {prev_miso, mi_w[DATA_WIDTH-1:1]};
            end else begin
              mo_w = {mo_w[DATA_WIDTH-2:0], prev_mosi};
              mi_w = {mi_w[DATA_WIDTH-2:0], prev_miso};
            end
            bit_in_byte++;
          end
          edge_in_byte++;
          last_edge_clk = clk_cnt;

          if (edge_in_byte == 2*DATA_WIDTH) begin
            cur.mosi_data  = mo_w;
            cur.miso_data  = mi_w;
            cur.edge_count = edge_in_byte;
            cur.bit_count  = bit_in_byte;
            cur.hp_min     = hp_min;
            cur.hp_max     = hp_max;
            cur.t_end      = $time;
            pending            = cur;
            pend_last_edge_clk = clk_cnt;
            byte_idx++;
            edge_in_byte = 0;
          end
        end
      end

      prev_sck = sck_s; prev_mosi = mosi_s; prev_miso = miso_s;
    end
  endtask

endclass


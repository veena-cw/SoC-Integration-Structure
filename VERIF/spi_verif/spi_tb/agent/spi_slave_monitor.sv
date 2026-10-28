//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : spi_slave_monitor
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: SPI slave-side monitor: decodes MOSI/MISO with the slave's sampling rule and probes the slave RX FIFO word
//=================================================================================
import apb_spi_types_pkg::*;

class spi_slave_monitor extends uvm_monitor;

  `uvm_component_utils(spi_slave_monitor)

  virtual spi_slave_if                    vif;
  uvm_analysis_port #(spi_slave_seq_item) ap;

  function new(string name = "spi_slave_monitor", uvm_component parent = null);
    super.new(name, parent);
    ap = new("ap", this);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual spi_slave_if)::read_by_name(get_full_name(), "slave_vif", vif))
      `uvm_fatal("NOVIF", "slave_vif not found in uvm_resource_db")
  endfunction

  task run_phase(uvm_phase phase);
  decode_loop();
  endtask

  // The slave detects SCK edges one PCLK after they happen, so it samples MOSI with the
  // *current* sample at the edge; MISO is reported as the master sees it (previous sample).
  task decode_loop();
    spi_slave_seq_item   cur;
    bit                  in_frame;
    bit                  sck_s, mosi_s, miso_s, cs_s, prev_sck, prev_miso;
    bit [DATA_WIDTH-1:0] rx_w, tx_w;
    bit                  lead, samp;
    bit                  cfg_cpol, cfg_cpha, cfg_lsb;
    int unsigned         edge_in_byte, bit_in_byte;

    in_frame = 0; edge_in_byte = 0; bit_in_byte = 0; prev_sck = 0; prev_miso = 0;
    rx_w = '0; tx_w = '0; cfg_cpol = 0; cfg_cpha = 0; cfg_lsb = 0;

    forever begin
      @(vif.slave_cb);
      sck_s  = vif.slave_cb.sck;
      mosi_s = vif.slave_cb.mosi;
      miso_s = vif.slave_cb.miso;
      cs_s   = vif.slave_cb.cs_n;

      if (vif.slave_cb.presetn !== 1'b1) begin
        in_frame = 0; edge_in_byte = 0;
        prev_sck = sck_s; prev_miso = miso_s;
        continue;
      end

      if (!in_frame) begin
        if (!cs_s) begin
          in_frame     = 1;
          edge_in_byte = 0;
          prev_sck     = sck_s;
        end
      end else begin
        if (cs_s) begin
          if (edge_in_byte != 0)
            `uvm_error("MON_PARTIAL", $sformatf("slave CS released after only %0d SCK edges of a byte", edge_in_byte))
          in_frame = 0;
          edge_in_byte = 0;
        end else if (sck_s != prev_sck) begin
          if (edge_in_byte == 0) begin
            cfg_cpol = vif.slave_cb.cpol;
            cfg_cpha = vif.slave_cb.cpha;
            cfg_lsb  = vif.slave_cb.lsb_first;
            rx_w = '0; tx_w = '0; bit_in_byte = 0;
            cur = spi_slave_seq_item::type_id::create("slv_byte");
            cur.t_start = $time;
          end
          lead = ((edge_in_byte % 2) == 0);
          samp = (cfg_cpha == 1'b0) ? lead : !lead;
          if (samp) begin
            if (cfg_lsb) begin
              rx_w = {mosi_s,    rx_w[DATA_WIDTH-1:1]};
              tx_w = {prev_miso, tx_w[DATA_WIDTH-1:1]};
            end else begin
              rx_w = {rx_w[DATA_WIDTH-2:0], mosi_s};
              tx_w = {tx_w[DATA_WIDTH-2:0], prev_miso};
            end
            bit_in_byte++;
          end
          edge_in_byte++;
          if (edge_in_byte == 2*DATA_WIDTH) begin
            cur.kind       = SLV_BYTE;
            cur.rx_data    = rx_w;
            cur.tx_data    = tx_w;
            cur.edge_count = edge_in_byte;
            cur.bit_count  = bit_in_byte;
            cur.cpol       = cfg_cpol;
            cur.cpha       = cfg_cpha;
            cur.lsb_first  = cfg_lsb;
            cur.t_end      = $time;
            ap.write(cur);
            edge_in_byte = 0;
          end
        end
      end
      prev_sck = sck_s; prev_miso = miso_s;
    end
  endtask

  // The slave RX FIFO word becomes visible on rx_data two PCLK cycles after the xfer_done sample.
  task probe_loop();
    spi_slave_seq_item it;
    forever begin
      @(vif.slave_cb);
      if (vif.slave_cb.presetn === 1'b1 && vif.slave_cb.xfer_done === 1'b1) begin
        repeat (2) @(vif.slave_cb);
        if (vif.slave_cb.presetn === 1'b1) begin
          it = spi_slave_seq_item::type_id::create("slv_probe");
          it.kind    = SLV_RX_PROBE;
          it.rx_data = vif.slave_cb.rx_data;
          it.t_end   = $time;
          ap.write(it);
        end
      end
    end
  endtask

endclass

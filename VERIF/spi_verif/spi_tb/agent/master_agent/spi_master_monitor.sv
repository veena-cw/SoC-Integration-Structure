//Master monitor watches the Master RX FIFO interface
//It does not drive anything

class spi_master_monitor extends uvm_monitor;

    `uvm_component_utils(spi_master_monitor)

    virtual spi_master_ctrl_if vif;
    uvm_analysis_port #(spi_master_rx_word) ap;

    function new(string name = "spi_master_monitor",
                 uvm_component parent = null);
      super.new(name, parent);
      ap = new("ap", this);
    endfunction

    function void build_phase(uvm_phase phase);
      super.build_phase(phase);
      if (!uvm_config_db#(virtual spi_master_ctrl_if)::get(
            this, "", "master_vif", vif)) begin
        `uvm_fatal("MASTER_MON", "master_vif not found")
      end
    endfunction

  
  
    task run_phase(uvm_phase phase);
      bit pending_read;
      spi_master_rx_word tr;

      pending_read = 1'b0;

      forever begin
        @(vif.mon_cb);

        if (!vif.mon_cb.rst_ni) begin
          pending_read = 1'b0;
        end
        else begin
          if (pending_read) begin
            tr = spi_master_rx_word::type_id::create("rx_tr");
            tr.data = vif.mon_cb.rx_rdata_o;
            ap.write(tr);

            `uvm_info("MASTER_MON",
              $sformatf("Observed Master RX = 0x%02h", tr.data), UVM_MEDIUM)
          end

          pending_read = vif.mon_cb.rx_re_i && !vif.mon_cb.rx_empty_o;
        end
      end
    endtask

  endclass

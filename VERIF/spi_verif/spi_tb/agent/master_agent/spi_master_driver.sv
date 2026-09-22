//Convert master transaction information into actual DUT input pin activity
class spi_master_driver extends uvm_driver #(spi_master_item);

    `uvm_component_utils(spi_master_driver)

    virtual spi_master_ctrl_if vif;
  uvm_analysis_port #(spi_master_item) exp_ap;//send expected master information to scoreboard

    function new(string name = "spi_master_driver",uvm_component parent = null);
      super.new(name, parent);
      exp_ap = new("exp_ap", this);
    endfunction

    function void build_phase(uvm_phase phase);
      super.build_phase(phase);
      if (!uvm_config_db#(virtual spi_master_ctrl_if)::get(this, "", "master_vif", vif)) begin
        `uvm_fatal("MASTER_DRV", "master_vif not found")
      end
    endfunction

    task reset_dut();
      // This driver is the only writer of the Master control interface.
      // Drive known values immediately, then hold synchronous reset low.
      vif.rst_ni            = 1'b0;
      vif.cpol_i            = 1'b0;
      vif.cpha_i            = 1'b0;
      vif.lsb_first_i       = 1'b0;
      vif.clk_div_i         = 16'd4;
      vif.cs_sel_i          = 2'd0;
      vif.cs_setup_cycles_i = 8'd3;
      vif.cs_hold_cycles_i  = 8'd2;
      vif.cs_inter_byte_i   = 1'b0;
      vif.tx_we_i           = 1'b0;
      vif.tx_wdata_i        = 8'h00;
      vif.rx_re_i           = 1'b0;
      vif.start_i           = 1'b0;

      repeat (5) @(vif.drv_cb);//reset remains asserted for five clocks
      vif.drv_cb.rst_ni <= 1'b1;
      @(vif.drv_cb);
    endtask

    task drive_idle();
      vif.drv_cb.tx_we_i    <= 1'b0;
      vif.drv_cb.tx_wdata_i <= '0;
      vif.drv_cb.rx_re_i    <= 1'b0;
      vif.drv_cb.start_i    <= 1'b0;
    endtask

    //This takes values from the transaction
    task apply_config(spi_master_item req);
      @(vif.drv_cb);
      vif.drv_cb.cpol_i              <= req.cpol;
      vif.drv_cb.cpha_i              <= req.cpha;
      vif.drv_cb.lsb_first_i         <= req.lsb_first;
      vif.drv_cb.clk_div_i           <= req.clk_div;
      vif.drv_cb.cs_sel_i            <= req.cs_sel;
      vif.drv_cb.cs_setup_cycles_i   <= req.cs_setup;
      vif.drv_cb.cs_hold_cycles_i    <= req.cs_hold;
      vif.drv_cb.cs_inter_byte_i     <= req.continuous_cs;
    endtask

  
    //one cycle write pulse
    task write_tx_word(bit [7:0] data);
      while (vif.drv_cb.tx_full_o)
        @(vif.drv_cb);

      vif.drv_cb.tx_wdata_i <= data;
      vif.drv_cb.tx_we_i    <= 1'b1;
      @(vif.drv_cb);
      vif.drv_cb.tx_we_i    <= 1'b0;
    endtask

  
    //begin transferring data from TX FIFO
    task pulse_start();
      vif.drv_cb.start_i <= 1'b1;
      @(vif.drv_cb);
      vif.drv_cb.start_i <= 1'b0;
    endtask

    //busy signal during transfer and timeout also
    task wait_done();
      int timeout;
      timeout = 0;

      while (!vif.drv_cb.xfer_done_o) begin
        @(vif.drv_cb);
        timeout++;
        if (timeout > 200000)
          `uvm_fatal("MASTER_DRV", "Timeout waiting for xfer_done_o")
      end

      @(vif.drv_cb);
    endtask

        
    //wait until RX data exits
    task read_rx_word(output bit [7:0] data);
      int timeout;
      timeout = 0;

      while (vif.drv_cb.rx_empty_o) begin
        @(vif.drv_cb);
        timeout++;
        if (timeout > 200000)
          `uvm_fatal("MASTER_DRV", "Timeout waiting for RX FIFO data")
      end

      vif.drv_cb.rx_re_i <= 1'b1;
      @(vif.drv_cb);
      vif.drv_cb.rx_re_i <= 1'b0;

      // spi_fifo has registered read data.
      @(vif.drv_cb);
      data = vif.drv_cb.rx_rdata_o;
    endtask

        
    //This brings the previous together
    task drive_transfer(spi_master_item req);
      bit [7:0] dummy;

      apply_config(req);

      foreach (req.tx_data[i])
        write_tx_word(req.tx_data[i]);//

      if (req.continuous_cs) begin
        pulse_start();
        wait_done();
      end
      else begin
        for (int i = 0; i < req.num_words; i++) begin
          pulse_start();//
          wait_done();
        end
      end
      // Drain all received words so Master Monitor can observe them.
      for (int i = 0; i < req.num_words; i++)
        read_rx_word(dummy);
    endtask

        
        
    //after complete transaction reset everything
    task run_phase(uvm_phase phase);
      spi_master_item req;

      reset_dut();
      drive_idle();

      forever begin
        seq_item_port.get_next_item(req);

        // Scoreboard immediately copies expected fields into queues.
        exp_ap.write(req);

        `uvm_info("MASTER_DRV",
          $sformatf("Master request: mode=%0d TX words=%0d",
                    {req.cpol,req.cpha}, req.num_words), UVM_MEDIUM)

        drive_transfer(req);
        seq_item_port.item_done();
      end
    endtask

  endclass

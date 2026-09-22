class csi2_tx_driver extends uvm_driver#(csi2_packet_item);
  `uvm_component_utils(csi2_tx_driver)
  csi2_packet_item t;
  csi2_tx_config tx_cfg;
  virtual csi2_if vif;
  virtual  csi2_reset_if rst_vif;
  bit aborted;
  uvm_analysis_port#(csi2_packet_item) source_ap;
    function new(string name = "csi2_tx_driver",uvm_component parent);
           super.new(name,parent);
           source_ap = new("source_ap",this);
    endfunction
    function void build_phase(uvm_phase phase);
     super.build_phase(phase);
     if(!uvm_config_db#(csi2_tx_config)::get(this,"","tx_cfg",tx_cfg))
	 `uvm_fatal("DRV-ERR","Configuration failed at drv")
      vif = tx_cfg.vif;
	  rst_vif = tx_cfg.rst_vif;
    if(vif == null)
       `uvm_fatal("DRV-ERR","Virtual interface is null at drv")
	if(rst_vif == null)
       `uvm_fatal("DRV-ERR","Reset Virtual interface is null at drv")
    endfunction

   task run_phase(uvm_phase phase);


    reset_signals();

    forever begin

        // Treat X as reset/not-ready.
        wait(rst_vif.rst_n === 1'b1);

        seq_item_port.get_next_item(t);
        aborted = 1'b0;

        send_packet(t, aborted);

        if (!aborted && t.is_long_pkt() && t.word_count != 0)
			begin
            send_payload(t, aborted);
        end

        if (!aborted)
		begin
            source_for_sb(t);
        end
        else begin

   reset_signals();

  `uvm_info("TX_RESET",$sformatf(
                                 {
                                  "Reset asserted; transaction aborted.\n",
                                  "Aborted transaction : %s\n",
                                  "Reset value         : rst_n=%0b\n",
                                  "Driven idle values  : ",
                                  "pkt_valid=0 pkt_vc=0 pkt_dt=0 pkt_len=0 ",
                                  "px_valid=0 px_data=0"
                                  }, t.convert2string(),rst_vif.rst_n),UVM_LOW)

        end

        seq_item_port.item_done();

        if (aborted)
            reset_signals();
    end

endtask

    task reset_signals();
            vif.tx_drv_cb.pkt_valid_i <= 1'b0;
            vif.tx_drv_cb.pkt_vc_i    <= '0;
            vif.tx_drv_cb.pkt_dt_i    <= '0;
            vif.tx_drv_cb.pkt_len_i   <= '0;
            vif.tx_drv_cb.px_valid_i  <= 1'b0;
            vif.tx_drv_cb.px_data_i   <= '0;
    endtask

    task send_packet(csi2_packet_item t, output bit aborted);

    aborted = 1'b0;

    @(vif.tx_drv_cb);

    if (rst_vif.rst_n !== 1'b1 || vif.tx_drv_cb.rst_n !== 1'b1)
	begin
        aborted = 1'b1;
        reset_signals();
        return;
    end

     vif.tx_drv_cb.pkt_vc_i    <= t.vc;
     vif.tx_drv_cb.pkt_dt_i    <= t.dt;
     vif.tx_drv_cb.pkt_len_i   <= t.get_pkt_len_field();
     vif.tx_drv_cb.pkt_valid_i <= 1'b1;

      forever
	begin
        @(vif.tx_drv_cb);

        // Reset gets priority over ready
        if (rst_vif.rst_n !== 1'b1 || vif.tx_drv_cb.rst_n !== 1'b1)
            begin

            aborted = 1'b1;
            reset_signals();
            return;

        end

        if (vif.tx_drv_cb.pkt_ready_o)
            break;
        end

    // Deassert immediately after the accepted handshake.
    // Do not wait an extra clock here.
       vif.tx_drv_cb.pkt_valid_i <= 1'b0;
       vif.tx_drv_cb.pkt_vc_i    <= '0;
       vif.tx_drv_cb.pkt_dt_i    <= '0;
       vif.tx_drv_cb.pkt_len_i   <= '0;

       `uvm_info("TX_DRV",$sformatf("Packet request accepted: %s", t.convert2string()),UVM_LOW)

    endtask

    task send_payload(csi2_packet_item t, output bit aborted);

    aborted = 1'b0;

    if (t.payload.size() != t.word_count)
      `uvm_fatal("DRV-WC",
        $sformatf("Word Count=%0d but payload size=%0d",
                  t.word_count, t.payload.size()))

    @(vif.tx_drv_cb);
    foreach (t.payload[i])
    begin

        if (rst_vif.rst_n !== 1'b1)
            begin
            aborted = 1'b1;
            reset_signals();
            return;
        end

        vif.tx_drv_cb.px_valid_i <= 1'b1;
        vif.tx_drv_cb.px_data_i  <= t.payload[i];

        forever
        begin
            @(vif.tx_drv_cb);

            if (rst_vif.rst_n !== 1'b1 || vif.tx_drv_cb.rst_n !== 1'b1)
            begin
                aborted = 1'b1;
                reset_signals();
                return;
            end

            if (vif.tx_drv_cb.px_ready_o)
                break;
        end
    end

    vif.tx_drv_cb.px_valid_i <= 1'b0;
    vif.tx_drv_cb.px_data_i  <= '0;

    `uvm_info("TX_DRV",$sformatf("Payload accepted: %0d bytes", t.payload.size()),UVM_LOW)

    endtask

    function void source_for_sb(csi2_packet_item t);
            csi2_packet_item source;
            source = csi2_packet_item::type_id::create("source");
            source.copy(t);
            source_ap.write(source);
            `uvm_info("TX_SOURCE",$sformatf("Published source item: %s",source.convert2string()),UVM_LOW)
    endfunction

endclass

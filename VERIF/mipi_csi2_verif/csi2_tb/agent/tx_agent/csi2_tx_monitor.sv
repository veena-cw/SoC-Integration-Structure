class csi2_tx_monitor extends uvm_monitor;
  `uvm_component_utils(csi2_tx_monitor)
  csi2_tx_config tx_cfg;
  virtual csi2_if vif;
  uvm_analysis_port#(csi2_packet_item) ap;
  int unsigned expected_lane_bytes[$];
  logic [23:0] expected_headers[$];
  uvm_analysis_port#(csi2_rx_lane_item) lane_ap;

  function new(string name = "csi2_tx_monitor",uvm_component parent);
           super.new(name,parent);
           ap = new("ap",this);
           lane_ap = new("lane_ap",this);
  endfunction

  function void build_phase(uvm_phase phase);
     super.build_phase(phase);
     if(!uvm_config_db#(csi2_tx_config)::get(this,"","tx_cfg",tx_cfg))
       `uvm_fatal("TX_MON","Configuration failed at csi2_tx_monitor")
     vif = tx_cfg.vif;
     if(vif == null)
       `uvm_fatal("TX_MON","Virtual interface is null at csi2_tx_monitor")
  endfunction

  task run_phase(uvm_phase phase);
     fork
       monitor_packets();
       monitor_lane_link();
     join
  endtask

  task monitor_packets();
     csi2_packet_item tr;
     bit complete;

     forever begin
       @(vif.tx_mon_cb);
       if(!vif.tx_mon_cb.rst_n)
         continue;

       if(vif.tx_mon_cb.pkt_valid_i && vif.tx_mon_cb.pkt_ready_o)
	   begin
         tr = csi2_packet_item::type_id::create("tr",this);
         tr.vc = vif.tx_mon_cb.pkt_vc_i;
         tr.dt = vif.tx_mon_cb.pkt_dt_i;
         tr.payload.delete();
         expected_headers.push_back({vif.tx_mon_cb.pkt_len_i,
                                     vif.tx_mon_cb.pkt_vc_i,vif.tx_mon_cb.pkt_dt_i});

         if(tr.is_long_pkt())
		 begin
           tr.word_count = vif.tx_mon_cb.pkt_len_i;
           expected_lane_bytes.push_back(4 + tr.word_count + 2);
           collect_payload(tr,complete);
           if(!complete)
             continue;
         end
         else
		 begin
           tr.short_data = vif.tx_mon_cb.pkt_len_i;
           tr.word_count = 16'd0;
           expected_lane_bytes.push_back(4);
         end

         ap.write(tr);
         `uvm_info("TX_MON",
                   $sformatf("Published expected packet: %s",
                             tr.convert2string()),
                   UVM_LOW)
       end
     end
  endtask

  task collect_payload(csi2_packet_item tr,output bit complete);

     complete = 1'b0;
     while(tr.payload.size() < tr.word_count)
	 begin
       @(vif.tx_mon_cb);
       if(!vif.tx_mon_cb.rst_n)
	   begin
         tr.payload.delete();
         return;
       end
       if(vif.tx_mon_cb.px_valid_i && vif.tx_mon_cb.px_ready_o)
         tr.payload.push_back(vif.tx_mon_cb.px_data_i);
     end
     complete = 1'b1;

  endtask

  task monitor_lane_link();
     int unsigned packet_bytes;
     int unsigned expected_bytes;
     bit packet_active;
     csi2_rx_lane_item captured;
     logic [23:0] expected_header;

     forever begin
       @(vif.tx_mon_cb);
       if(!vif.tx_mon_cb.rst_n) begin
         packet_bytes = 0;
         packet_active = 1'b0;
         expected_lane_bytes.delete();
         expected_headers.delete();
         captured = null;
         continue;
       end

       if(vif.tx_mon_cb.hs_start_link) begin
         if(packet_active)
           `uvm_error("TX_LANE","New HS start observed before previous HS last")
         packet_bytes = 0;
         packet_active = 1'b1;
         captured = csi2_rx_lane_item::type_id::create("captured");
         captured.epoch = tx_cfg.rst_vif.epoch;
         `uvm_info("TX_LANE","HS packet started",UVM_LOW)
       end

       if(|vif.tx_mon_cb.lane_valid_link) begin
         if(!packet_active)
           `uvm_error("TX_LANE","Lane data observed outside an HS packet")
         if(!vif.tx_mon_cb.hs_active_link)
           `uvm_error("TX_LANE","Lane data observed while hs_active_link is low")
         if((vif.tx_mon_cb.lane_valid_link &
             (vif.tx_mon_cb.lane_valid_link + 1'b1)) != '0)
           `uvm_error("TX_LANE","lane_valid_link is not contiguous from lane 0")

         if(captured != null) begin
           for(int lane=0;lane<4;lane++)
             if(vif.tx_mon_cb.lane_valid_link[lane])
               captured.bytes.push_back(vif.tx_mon_cb.lane_data_link[lane*8 +: 8]);
         end
         packet_bytes += $countones(vif.tx_mon_cb.lane_valid_link);
         `uvm_info("TX_LANE",
                   $sformatf("beat valid=0x%0h data=0x%0h",
                             vif.tx_mon_cb.lane_valid_link,
                             vif.tx_mon_cb.lane_data_link),
                   UVM_HIGH)
       end

       if(vif.tx_mon_cb.hs_last_link) begin
         if(!packet_active)
           `uvm_error("TX_LANE","HS last observed without an active packet")
         if(!( |vif.tx_mon_cb.lane_valid_link))
           `uvm_error("TX_LANE","HS last observed without valid lane data")
         `uvm_info("TX_LANE",
                   $sformatf("HS packet completed: %0d lane bytes",
                             packet_bytes),
                   UVM_LOW)
         if(expected_lane_bytes.size() == 0)
           `uvm_error("TX_LANE","No packet request available for completed lane packet")
         else begin
           expected_bytes = expected_lane_bytes.pop_front();
           if(packet_bytes != expected_bytes)
             `uvm_error("TX_LANE",
                        $sformatf("Lane byte count mismatch: expected=%0d actual=%0d",
                                  expected_bytes,packet_bytes))
         end
         if(captured != null) begin
           if(expected_headers.size() == 0 || captured.bytes.size() < 4)
             `uvm_error("TX_HEADER","Missing expected or observed header")
           else begin
             expected_header = expected_headers.pop_front();
             if({captured.bytes[2],captured.bytes[1],captured.bytes[0]} !== expected_header)
               `uvm_error("TX_HEADER","TX wire header differs from accepted request")
           end
           lane_ap.write(captured);
         end
         captured = null;
         packet_active = 1'b0;
       end
     end
  endtask
endclass

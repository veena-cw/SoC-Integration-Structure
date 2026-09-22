class csi2_rx_driver extends uvm_driver#(csi2_rx_lane_item);
 `uvm_component_utils(csi2_rx_driver)
  csi2_rx_config cfg;
  virtual csi2_if vif;
  uvm_analysis_port#(csi2_rx_lane_item) done_ap;
  bit busy;
  int unsigned accepted_bytes;
  function new(string name="csi2_rx_driver",uvm_component parent);
    super.new(name,parent); done_ap = new("done_ap",this);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if(!uvm_config_db#(csi2_rx_config)::get(this,"","rx_cfg",cfg))
      `uvm_fatal("RX_DRV","Missing configuration")
    vif = cfg.vif;
    if(vif == null || cfg.rst_vif == null)
    `uvm_fatal("RX_DRV","Null interface")
  endfunction
  task drive_idle();
    vif.rx_drv_cb.rx_lane_data <= '0;
    vif.rx_drv_cb.rx_lane_valid <= '0;
    vif.rx_drv_cb.rx_hs_start <= 1'b0;
    vif.rx_drv_cb.rx_hs_last <= 1'b0;
  endtask
  function bit reset_seen(csi2_rx_lane_item tr);
    return cfg.rst_vif.rst_n !== 1'b1 || vif.rx_drv_cb.rst_n !== 1'b1 ||
           tr.epoch != cfg.rst_vif.epoch;
  endfunction
  task tick(csi2_rx_lane_item tr);
    @(vif.rx_drv_cb);
    if(reset_seen(tr)) begin
      tr.aborted = 1'b1;
      drive_idle();
    end
    else /// error test cases will use these values
    begin
      if(vif.rx_drv_cb.hdr_ecc_1bit_o)
      tr.ecc1_count++;
      if(vif.rx_drv_cb.hdr_ecc_2bit_o)
      tr.ecc2_count++;
      if(vif.rx_drv_cb.payload_crc_err_o)
      tr.crc_count++;
      if(vif.rx_drv_cb.packet_format_err_o)
      tr.format_count++;
    end
  endtask

  task drive_packet(csi2_rx_lane_item tr);
    int unsigned index, count;
    logic [31:0] data;
    logic [3:0] valid;
    // Current UVM virtual interface uses its default four-lane specialization.
    index = 0; accepted_bytes = 0;
    tick(tr);
    if(tr.aborted)
    return;
    while(index < tr.bytes.size())
    begin
      data = '0; valid = '0;
      count = ((tr.bytes.size()-index) >= 4) ? 4 : tr.bytes.size()-index;
      for(int i=0;i<count;i++)
      begin
        data[i*8 +: 8] = tr.bytes[index+i]; valid[i] = 1'b1;
      end
      vif.rx_drv_cb.rx_lane_data <= data;
      vif.rx_drv_cb.rx_lane_valid <= valid;
      vif.rx_drv_cb.rx_hs_start <= (index == 0);
      vif.rx_drv_cb.rx_hs_last <= (index+count == tr.bytes.size());
      // No lane ready: a beat is presented for exactly one sampling edge.
      tick(tr);
      if(tr.aborted)
      return;
      index += count; accepted_bytes = index;
      drive_idle();
      // Testbench pacing: four idle clocks let the 32-to-8 serializer drain.
      // This assumes px_ready_i stays high, as tied in top/top.sv.
      repeat(4)
      begin
        tick(tr);
        if(tr.aborted)
        return;
      end
    end
    drive_idle();
    // px_ready_i is fixed high. Drain the two buffered words + serializer.
    repeat(20) begin
      tick(tr);
      if(tr.aborted) return;
    end
  endtask
  task run_phase(uvm_phase phase);
    csi2_rx_lane_item req;
    drive_idle();
    forever begin
      seq_item_port.get_next_item(req);
      busy = 1'b1;
      drive_packet(req);
      busy = 1'b0;
      if(!req.aborted)
      done_ap.write(req);
      drive_idle();
      seq_item_port.item_done();
    end
  endtask
endclass

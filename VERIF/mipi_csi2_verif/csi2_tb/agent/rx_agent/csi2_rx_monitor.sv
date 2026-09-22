class csi2_rx_monitor extends uvm_monitor;
  `uvm_component_utils(csi2_rx_monitor)
  csi2_rx_config rx_cfg;
  virtual csi2_if vif;
  uvm_analysis_port#(csi2_packet_item) ap;
  csi2_pixel_unpacker unpacker;

  function new(string name = "csi2_rx_monitor",uvm_component parent);
           super.new(name,parent);
           ap = new("ap",this);
           unpacker = new();
  endfunction

  function void build_phase(uvm_phase phase);
     super.build_phase(phase);
     if(!uvm_config_db#(csi2_rx_config)::get(this,"","rx_cfg",rx_cfg))
       `uvm_fatal("RX_MON","Configuration failed at csi2_rx_monitor")
     vif = rx_cfg.vif;
     if(vif == null)
       `uvm_fatal("RX_MON","Virtual interface is null at csi2_rx_monitor")
  endfunction

  task run_phase(uvm_phase phase);
     csi2_packet_item short_tr;
     csi2_packet_item payload_tr;
     bit collecting;

     forever
	 begin
       @(vif.rx_mon_cb);
       if(!vif.rx_mon_cb.rst_n)
	   begin
         collecting = 1'b0;
         payload_tr = null;
       continue;
       end
       // Print DUT status outputs only when an error/status pulse is observed.
if(vif.rx_mon_cb.hdr_ecc_1bit_o || vif.rx_mon_cb.hdr_ecc_2bit_o      || vif.rx_mon_cb.payload_crc_err_o   || vif.rx_mon_cb.packet_format_err_o)
   begin

  `uvm_info("RX_DUT_STATUS",
        $sformatf(
        {
        "DUT error/status outputs observed: ",
        "ecc1=%0b ecc2=%0b crc_err=%0b format_err=%0b | ",
        "px_valid=%0b px_last=%0b | ",
        "frame_start=%0b frame_end=%0b ",
        "line_start=%0b line_end=%0b generic_short=%0b"
        },
        vif.rx_mon_cb.hdr_ecc_1bit_o,
        vif.rx_mon_cb.hdr_ecc_2bit_o,
        vif.rx_mon_cb.payload_crc_err_o,
        vif.rx_mon_cb.packet_format_err_o,
        vif.rx_mon_cb.px_valid_o,
        vif.rx_mon_cb.px_last_o,
        vif.rx_mon_cb.frame_start_o,
        vif.rx_mon_cb.frame_end_o,
        vif.rx_mon_cb.line_start_o,
        vif.rx_mon_cb.line_end_o,
        vif.rx_mon_cb.generic_sp_valid_o),UVM_LOW )

        end
        // RX driver collects status pulses; csi2_scoreboard checks exact expected counts.

        if(vif.rx_mon_cb.frame_start_o || vif.rx_mon_cb.frame_end_o ||
          vif.rx_mon_cb.line_start_o || vif.rx_mon_cb.line_end_o ||
          vif.rx_mon_cb.generic_sp_valid_o) begin
          short_tr = csi2_packet_item::type_id::create("short_tr",this);
         if(vif.rx_mon_cb.frame_start_o) short_tr.dt = DT_FRAME_START;
         else if(vif.rx_mon_cb.frame_end_o) short_tr.dt = DT_FRAME_END;
         else if(vif.rx_mon_cb.line_start_o) short_tr.dt = DT_LINE_START;
         else if(vif.rx_mon_cb.line_end_o) short_tr.dt = DT_LINE_END;
         else begin
           short_tr.dt = vif.rx_mon_cb.generic_sp_dt_o;
           short_tr.short_data = vif.rx_mon_cb.generic_sp_data_o;
         end
         // VC and FS/FE/LS/LE data are not exposed by this DUT interface.
         short_tr.word_count = 0;
         check_short_sidebands(short_tr);
         ap.write(short_tr);
       end

       if(vif.rx_mon_cb.px_last_o && !vif.rx_mon_cb.px_valid_o)
         `uvm_error("RX_MON","px_last_o asserted without px_valid_o")
       if((vif.rx_mon_cb.frame_start_o || vif.rx_mon_cb.frame_end_o ||
           vif.rx_mon_cb.line_start_o || vif.rx_mon_cb.line_end_o ||
           vif.rx_mon_cb.generic_sp_valid_o) && vif.rx_mon_cb.px_valid_o)
         `uvm_error("RX_MON","Short packet and long-packet payload asserted together")

       if(vif.rx_mon_cb.px_valid_o && vif.rx_mon_cb.px_ready_i)
	   begin
         if(!collecting)
		 begin
           payload_tr = csi2_packet_item::type_id::create("payload_tr",this);
           payload_tr.vc = vif.rx_mon_cb.px_vc_o;
           payload_tr.dt = vif.rx_mon_cb.px_dt_o;
           payload_tr.payload.delete();
           collecting = 1'b1;
         end
         else if(vif.rx_mon_cb.px_vc_o != payload_tr.vc ||
                 vif.rx_mon_cb.px_dt_o != payload_tr.dt)
           `uvm_error("RX_MON","VC or DT changed within a long-packet payload")

         payload_tr.payload.push_back(vif.rx_mon_cb.px_data_o);

         if(vif.rx_mon_cb.px_last_o)
		 begin
           payload_tr.word_count = payload_tr.payload.size();
           decode_payload(payload_tr);
           ap.write(payload_tr);
           `uvm_info("RX_MON",
                     $sformatf("Published actual packet: %s",
                               payload_tr.convert2string()),
                     UVM_LOW)
           collecting = 1'b0;
           payload_tr = null;
         end
       end
     end
  endtask

  function void decode_payload(csi2_packet_item tr);
     int unsigned inferred_width;
     string error_msg;

     tr.pixel_decode_valid = 1'b0;
     if(unpacker.infer_line_width(tr.dt,tr.payload.size(),NONE,
                                  inferred_width,error_msg)) begin
       tr.line_width = inferred_width;
       tr.pixel_decode_valid = unpacker.unpack(
           tr.dt,tr.payload,tr.line_width,NONE,tr.pixels,tr.y_samples,
           tr.u_samples,tr.v_samples,error_msg);

       if(!tr.pixel_decode_valid)
         `uvm_error("RX_UNPACK",error_msg)
       else
         `uvm_info("RX_UNPACK",
                   $sformatf("Decoded dt=0x%02h width=%0d pixels=%0d Y=%0d U=%0d V=%0d",
                             tr.dt,tr.line_width,tr.pixels.size(),
                             tr.y_samples.size(),tr.u_samples.size(),
                             tr.v_samples.size()),
                   UVM_LOW)
     end
     else if(!(tr.dt inside {
         DT_YUV420_8,DT_YUV420_10,DT_YUV420_8_LEGACY,
         DT_YUV420_8_CSPS,DT_YUV420_10_CSPS
       }))
       `uvm_error("RX_UNPACK",error_msg)
     else
       `uvm_info("RX_UNPACK",
                 "YUV420 decode deferred until line context is available",
                 UVM_HIGH)
  endfunction

  function void check_short_sidebands(csi2_packet_item tr);
     case(tr.dt)
       DT_FRAME_START:
	   begin
         if(!vif.rx_mon_cb.frame_start_o || vif.rx_mon_cb.frame_end_o ||
            vif.rx_mon_cb.line_start_o || vif.rx_mon_cb.line_end_o ||
            vif.rx_mon_cb.generic_sp_valid_o)
           `uvm_error("RX_MON","Incorrect Frame Start sideband decode")
       end
       DT_FRAME_END:
	   begin
         if(vif.rx_mon_cb.frame_start_o || !vif.rx_mon_cb.frame_end_o ||
            vif.rx_mon_cb.line_start_o || vif.rx_mon_cb.line_end_o ||
            vif.rx_mon_cb.generic_sp_valid_o)
           `uvm_error("RX_MON","Incorrect Frame End sideband decode")
       end
       DT_LINE_START:
	   begin
         if(vif.rx_mon_cb.frame_start_o || vif.rx_mon_cb.frame_end_o ||
            !vif.rx_mon_cb.line_start_o || vif.rx_mon_cb.line_end_o ||
            vif.rx_mon_cb.generic_sp_valid_o)
           `uvm_error("RX_MON","Incorrect Line Start sideband decode")
       end
       DT_LINE_END:
	   begin
         if(vif.rx_mon_cb.frame_start_o || vif.rx_mon_cb.frame_end_o ||
            vif.rx_mon_cb.line_start_o || !vif.rx_mon_cb.line_end_o ||
            vif.rx_mon_cb.generic_sp_valid_o)
           `uvm_error("RX_MON","Incorrect Line End sideband decode")
       end
       default:
	   begin
         if(vif.rx_mon_cb.frame_start_o || vif.rx_mon_cb.frame_end_o ||
            vif.rx_mon_cb.line_start_o || vif.rx_mon_cb.line_end_o ||
            !vif.rx_mon_cb.generic_sp_valid_o)
           `uvm_error("RX_MON","Incorrect generic short-packet sideband decode")
         if(vif.rx_mon_cb.generic_sp_dt_o != tr.dt ||
            vif.rx_mon_cb.generic_sp_data_o != tr.short_data)
           `uvm_error("RX_MON","Generic short-packet metadata mismatch")
       end
     endcase
  endfunction
endclass

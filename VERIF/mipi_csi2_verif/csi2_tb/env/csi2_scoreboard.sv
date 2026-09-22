class csi2_scoreboard extends uvm_scoreboard;
  `uvm_component_utils(csi2_scoreboard)

  uvm_tlm_analysis_fifo#(csi2_packet_item) tx_fifo;
  uvm_tlm_analysis_fifo#(csi2_packet_item) rx_fifo;
  uvm_tlm_analysis_fifo#(csi2_packet_item) source_fifo;
  csi2_pixel_unpacker unpacker;
  uvm_tlm_analysis_fifo#(csi2_rx_lane_item) done_fifo;
  csi2_reset_config rst_cfg;
  int unsigned dropped_count;

  int unsigned source_count;
  int unsigned expected_count;
  int unsigned actual_count;
  int unsigned compared_count;
  int unsigned matched_count;
  int unsigned mismatch_count;
  int unsigned source_match_count;
  int unsigned source_mismatch_count;
  int unsigned pixel_compared_count;
  int unsigned pixel_match_count;
  int unsigned pixel_mismatch_count;

  function new(string name = "csi2_scoreboard",uvm_component parent);
           super.new(name,parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    source_fifo = new("source_fifo",this);
    tx_fifo = new("tx_fifo",this);
    rx_fifo = new("rx_fifo",this);
    unpacker = new();
    done_fifo = new("done_fifo",this);
    if(!uvm_config_db#(csi2_reset_config)::get(this,"","rst_cfg",rst_cfg))
      `uvm_fatal("SB","Missing reset configuration")
  endfunction

  task run_phase(uvm_phase phase);
    forever begin
      wait(rst_cfg.vif.rst_n === 1'b1);
      fork
       compare_stream();
       wait(rst_cfg.vif.rst_n !== 1'b1);
      join_any
      disable fork;
      // This also discards objects held by interrupted blocking gets.
      source_fifo.flush();
      tx_fifo.flush();
      rx_fifo.flush();
      done_fifo.flush();
    end
  endtask

  task compare_stream();
    csi2_packet_item source, expected, actual;
    csi2_rx_lane_item result;
    forever
    begin
      source_fifo.get(source);
      tx_fifo.get(expected);
      done_fifo.get(result);
      if(result.epoch != rst_cfg.vif.epoch) continue;
      source_count++; expected_count++;
      compare_source_to_tx(source,expected);
      if(result.ecc1_count != (result.fault == RX_ECC1 ? 1 : 0) ||
         result.ecc2_count != (result.fault == RX_ECC2 ? 1 : 0) ||
         result.crc_count != (result.fault == RX_CRC ? 1 : 0) ||
         result.format_count != 0) begin
        mismatch_count++;
        `uvm_error("SB_STATUS",$sformatf("fault=%0d observed ECC1/ECC2/CRC/format=%0d/%0d/%0d/%0d",
                    result.fault,result.ecc1_count,result.ecc2_count,result.crc_count,result.format_count))
      end
      if(result.fault == RX_ECC2)
      begin
        dropped_count++;
        if(rx_fifo.used() != 0)
        begin
           mismatch_count++;
          `uvm_error("SB_DROP","Uncorrectable header produced RX output")
           rx_fifo.flush();
        end
      end
      else
      begin
        rx_fifo.get(actual);
        actual_count++;
        compare_packet(expected,actual);
        compare_pixels(source,actual);
      end
      compared_count++;
    end
  endtask

  function void compare_packet(csi2_packet_item expected,csi2_packet_item actual);
    bit mismatch;
    string reason;

    if(expected.is_long_pkt() != actual.is_long_pkt())
    begin
       mismatch = 1'b1;
       reason = "packet type differs";
    end
    else if(expected.is_long_pkt() && expected.vc != actual.vc)
	begin
      mismatch = 1'b1;
      reason = $sformatf("VC differs: expected=%0d actual=%0d",expected.vc,actual.vc);
    end
    else if(expected.dt != actual.dt)
	begin
      mismatch = 1'b1;
      reason = $sformatf("DT differs: expected=0x%02h actual=0x%02h",expected.dt,actual.dt);
    end
    else if(!expected.is_long_pkt())
	begin
      if(!(expected.dt inside {DT_FRAME_START,DT_FRAME_END,DT_LINE_START,DT_LINE_END}) &&
         expected.short_data != actual.short_data)
	  begin
        mismatch = 1'b1;
        reason = $sformatf(
            "short data differs: expected=0x%04h actual=0x%04h",expected.short_data,actual.short_data);
      end
    end
    else if(expected.word_count != actual.word_count)
	begin
      mismatch = 1'b1;
      reason = $sformatf("word count differs: expected=%0d actual=%0d",expected.word_count,actual.word_count);
    end
    else if(expected.payload.size() != actual.payload.size())
	begin
      mismatch = 1'b1;
      reason = $sformatf("payload size differs: expected=%0d actual=%0d",expected.payload.size(),actual.payload.size());
    end
    else
	begin
      foreach(expected.payload[i])
	  begin
        if(expected.payload[i] != actual.payload[i])
		begin
          mismatch = 1'b1;
          reason = $sformatf("payload[%0d] differs: expected=0x%02h actual=0x%02h",i,expected.payload[i],actual.payload[i]);
          break;
        end
      end
    end

    if(mismatch)
     begin
          mismatch_count++;
         `uvm_error("SB_MISMATCH",$sformatf("%s; expected={%s} actual={%s}",reason,expected.convert2string(),actual.convert2string()))
     end
    else
     begin
       matched_count++;
      `uvm_info("SB_MATCH",$sformatf("Packet matched: %s",actual.convert2string()),UVM_LOW)
     end
  endfunction

  function void compare_source_to_tx(csi2_packet_item source,csi2_packet_item observed);
    bit mismatch;
    string reason;

    if(source.is_long_pkt() != observed.is_long_pkt()) begin
      mismatch = 1'b1;
      reason = "packet type differs";
    end
    else if(source.vc != observed.vc || source.dt != observed.dt) begin
      mismatch = 1'b1;
      reason = $sformatf(
          "metadata differs: source VC/DT=%0d/0x%02h observed=%0d/0x%02h",
          source.vc,source.dt,observed.vc,observed.dt);
    end
    else if(!source.is_long_pkt()) begin
      if(source.short_data != observed.short_data) begin
        mismatch = 1'b1;
        reason = $sformatf(
            "short data differs: source=0x%04h observed=0x%04h",
            source.short_data,observed.short_data);
      end
    end
    else if(source.word_count != observed.word_count ||
            source.payload.size() != observed.payload.size()) begin
      mismatch = 1'b1;
      reason = $sformatf(
          "length differs: source WC/size=%0d/%0d observed=%0d/%0d",
          source.word_count,source.payload.size(),observed.word_count,
          observed.payload.size());
    end
    else begin
      foreach(source.payload[i]) begin
        if(source.payload[i] != observed.payload[i]) begin
          mismatch = 1'b1;
          reason = $sformatf(
              "input payload[%0d] differs: source=0x%02h observed=0x%02h",
              i,source.payload[i],observed.payload[i]);
          break;
        end
      end
    end

    if(mismatch)
	begin
      source_mismatch_count++;
      mismatch_count++;
      `uvm_error("SB_SOURCE_MISMATCH",reason)
    end
    else
	begin
        source_match_count++;
      /*`uvm_info("SB_SOURCE_MATCH",
                "Original sequence item matches the accepted TX interface packet",
                UVM_LOW)*/
    end
  endfunction

  function void compare_pixels(csi2_packet_item source,csi2_packet_item actual);
    bit mismatch;
    string reason;
    string error_msg;

    if(!source.is_long_pkt())
      return;

    pixel_compared_count++;

    if(!actual.pixel_decode_valid) begin
      actual.line_width = source.line_width;
      actual.line_number = source.line_number;
      actual.pixel_decode_valid = unpacker.unpack(
          actual.dt,actual.payload,source.line_width,source.get_line_type(),
          actual.pixels,actual.y_samples,actual.u_samples,actual.v_samples,
          error_msg);
      if(!actual.pixel_decode_valid) begin
        mismatch = 1'b1;
        reason = $sformatf("Pixel unpack failed: %s",error_msg);
      end
    end
    else if(actual.line_width != source.line_width) begin
      mismatch = 1'b1;
      reason = $sformatf("Decoded width differs: source=%0d actual=%0d",
                         source.line_width,actual.line_width);
    end

    if(!mismatch && source.is_yuv())
	begin
      if(source.y_samples.size() != actual.y_samples.size() ||
         source.u_samples.size() != actual.u_samples.size() ||
         source.v_samples.size() != actual.v_samples.size())
		 begin
        mismatch = 1'b1;
        reason = $sformatf(
            "YUV array sizes differ: source Y/U/V=%0d/%0d/%0d actual=%0d/%0d/%0d",
            source.y_samples.size(),source.u_samples.size(),
            source.v_samples.size(),actual.y_samples.size(),
            actual.u_samples.size(),actual.v_samples.size());
      end
      else
	  begin
        foreach(source.y_samples[i])
		begin
          if(!mismatch && source.y_samples[i] != actual.y_samples[i])
		  begin
            mismatch = 1'b1;
            reason = $sformatf(
                "Y[%0d] differs: source=0x%03h actual=0x%03h",
                i,source.y_samples[i],actual.y_samples[i]);
          end
        end
        foreach(source.u_samples[i])
		begin
          if(!mismatch && source.u_samples[i] != actual.u_samples[i])
		  begin
            mismatch = 1'b1;
            reason = $sformatf(
                "U[%0d] differs: source=0x%03h actual=0x%03h",
                i,source.u_samples[i],actual.u_samples[i]);
          end
        end
        foreach(source.v_samples[i])
		begin
          if(!mismatch && source.v_samples[i] != actual.v_samples[i])
		  begin
            mismatch = 1'b1;
            reason = $sformatf(
                "V[%0d] differs: source=0x%03h actual=0x%03h",
                i,source.v_samples[i],actual.v_samples[i]);
          end
        end
      end
    end
    else if(!mismatch)
	begin
      if(source.pixels.size() != actual.pixels.size())
	  begin
        mismatch = 1'b1;
        reason = $sformatf("Pixel count differs: source=%0d actual=%0d",
                           source.pixels.size(),actual.pixels.size());
      end
      else
	  begin
        foreach(source.pixels[i])
		begin
          if(!mismatch && source.pixels[i] != actual.pixels[i])
		  begin
            mismatch = 1'b1;
            reason = $sformatf(
                "pixel[%0d] differs: source=0x%06h actual=0x%06h",
                i,source.pixels[i],actual.pixels[i]);
          end
        end
      end
    end

    if(mismatch)
	begin
      pixel_mismatch_count++;
      mismatch_count++;
      `uvm_error("SB_PIXEL_MISMATCH",reason)
    end
    else
	begin
      pixel_match_count++;
      `uvm_info("SB_PIXEL_MATCH",
                $sformatf("Unpacked samples match source: pixels=%0d Y/U/V=%0d/%0d/%0d",
                          actual.pixels.size(),actual.y_samples.size(),
                          actual.u_samples.size(),actual.v_samples.size()),
                UVM_LOW)
    end
  endfunction

  function void check_phase(uvm_phase phase);
    super.check_phase(phase);

    if(compared_count == 0)
      `uvm_error("SB_CHECK","No TX/RX packets were compared")
    if(expected_count != actual_count + dropped_count)
      `uvm_error("SB_CHECK",$sformatf("Unpaired packets: expected=%0d actual=%0d",expected_count,actual_count))
    if(source_count != expected_count)
      `uvm_error("SB_CHECK",
                 $sformatf("Source/TX count differs: source=%0d TX=%0d",
                           source_count,expected_count))
    if(source_fifo.used() != 0 || tx_fifo.used() != 0 ||
       rx_fifo.used() != 0 || done_fifo.used() != 0)
      `uvm_error("SB_CHECK",
                 $sformatf("Non-empty FIFOs: source=%0d tx=%0d rx=%0d",
                           source_fifo.used(),tx_fifo.used(),rx_fifo.used()))
  endfunction

  function void report_phase(uvm_phase phase);
    super.report_phase(phase);

    if(compared_count > 0 && mismatch_count == 0 &&
       source_count == expected_count && expected_count == actual_count + dropped_count &&
       source_fifo.used() == 0 && tx_fifo.used() == 0 &&
       rx_fifo.used() == 0 && done_fifo.used() == 0)
      `uvm_info("SB_SUMMARY",
                $sformatf("PASS packets=%0d transport_matches=%0d source_matches=%0d pixel_matches=%0d mismatches=%0d",
                          compared_count,matched_count,source_match_count,
                          pixel_match_count,mismatch_count),
                UVM_NONE)
    else
      `uvm_error("SB_SUMMARY",
                 $sformatf("FAIL source=%0d expected=%0d actual=%0d compared=%0d transport_matches=%0d source_mismatches=%0d pixel_mismatches=%0d total_mismatches=%0d",
                           source_count,expected_count,actual_count,
                           compared_count,matched_count,source_mismatch_count,
                           pixel_mismatch_count,mismatch_count))
  endfunction

endclass

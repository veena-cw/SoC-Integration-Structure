class csi2_rx_sequence extends uvm_sequence#(csi2_rx_lane_item);
  `uvm_object_utils(csi2_rx_sequence)
  uvm_tlm_analysis_fifo#(csi2_rx_lane_item) captured_fifo;
  csi2_rx_config cfg;
  function new(string name="csi2_rx_sequence");
  super.new(name);
  endfunction
  task body();
    csi2_rx_lane_item req, captured;
    if(captured_fifo == null || cfg == null)
    `uvm_fatal("RX_SEQ","Missing replay configuration")
    forever
    begin
      captured_fifo.get(captured);
      req = csi2_rx_lane_item::type_id::create("replay_req");
      req.bytes = captured.bytes;
      req.epoch = captured.epoch;
      if(req.epoch != cfg.rst_vif.epoch || cfg.rst_vif.rst_n !== 1'b1)
      continue;
      start_item(req);
      req.fault = cfg.fault;
      // Corrupt only the replay copy. Captured bytes are never regenerated.
      case(req.fault)
        RX_ECC1: req.bytes[0] ^= 8'h01;
        RX_ECC2: req.bytes[0] ^= 8'h03;
        RX_CRC: begin
                int last_idx;
                byte unsigned corrupted_byte;

                if(req.bytes.size() < 6 || req.bytes[0][5:0] <= 6'h0f)
                   `uvm_fatal("RX_SEQ","CRC injection requires a long packet")

                last_idx = req.bytes.size() - 1;
                corrupted_byte = req.bytes[last_idx] ^ 8'h01;
                req.bytes[last_idx] = corrupted_byte;
                end
        default: ;
      endcase
      finish_item(req);
    end
  endtask
endclass

class csi2_ppi_sequence extends uvm_sequence #(csi2_rx_packet_item);
  `uvm_object_utils(csi2_ppi_sequence)

  function new(string name = "csi2_ppi_sequence");
    super.new(name);
  endfunction

  task body();
    csi2_rx_packet_item req;
    req = csi2_rx_packet_item::type_id::create("req");
    start_item(req);
    // RAW7 is selected because it is the only active RTL compile profile.
    req.datatype       = DT_RAW8;
    req.rtl_word_count = 16'h0040;
    req.sync_type      = 3'b011;
    req.send_eot       = 1'b1;
    req.payload.delete();
    for (int index = 0; index < 560; index++)
    req.payload.push_back(byte'(32'h10 + index));
    finish_item(req);
  endtask
endclass : csi2_ppi_sequence

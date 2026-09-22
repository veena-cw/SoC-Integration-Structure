class csi2_tx_short_sequence extends uvm_sequence#(csi2_packet_item);
  `uvm_object_utils(csi2_tx_short_sequence)
  bit [5:0] dt = DT_FRAME_START;
  function new(string name="csi2_tx_short_sequence"); super.new(name); endfunction
  task body();
    csi2_packet_item req = csi2_packet_item::type_id::create("req");
    start_item(req);
    req.vc = 2'd1; req.dt = dt; req.short_data = 16'h1234;
    req.word_count = 0;
    `uvm_info("TX_SHORT_SEQ",$sformatf("%0s",dt),UVM_LOW)
    finish_item(req);
  endtask
endclass

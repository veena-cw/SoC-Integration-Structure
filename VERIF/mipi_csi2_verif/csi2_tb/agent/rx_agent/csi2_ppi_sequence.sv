class csi2_ppi_sequence extends uvm_sequence #(csi2_rx_packet_item);
  `uvm_object_utils(csi2_ppi_sequence)
  
  function new(string name = "csi2_ppi_sequence");
    super.new(name);
  endfunction
 
  task body();
    csi2_rx_packet_item req;
    req = csi2_rx_packet_item::type_id::create("req");
    start_item(req);
    req.test_case = "NORMAL";
    // RAW7 is selected because it is the only active RTL compile profile.
    req.datatype       = DT_RAW7;
    req.rtl_word_count = 16'h0117;
    req.sync_type      = 3'b011;
    req.send_eot       = 1'b1;
    req.payload.delete();
    for (int index = 0; index < 560; index++)
    req.payload.push_back(byte'(32'h10 + index));
    finish_item(req);
  endtask
endclass : csi2_ppi_sequence


class csi2_raw8_seq extends csi2_ppi_sequence;
 `uvm_object_utils(csi2_raw8_seq)
  function new(string name = "csi2_raw8_seq");
           super.new(name);
  endfunction
   task body();
    csi2_rx_packet_item req;
    req = csi2_rx_packet_item::type_id::create("req");
    start_item(req);
    // RAW8 is selected
    req.test_case = "RAW8";
    req.datatype       = DT_RAW8;
    req.rtl_word_count = 16'h003F;
    req.sync_type      = 3'b011;
    req.send_eot       = 1'b1;
    req.payload.delete();
    for (int index = 0; index < 64 ; index++)
    req.payload.push_back(byte'(32'h10 + index));
    finish_item(req);
  endtask
  
endclass


class csi2_raw6_seq extends csi2_ppi_sequence;
 `uvm_object_utils(csi2_raw6_seq)
  function new(string name = "csi2_raw6_seq");
           super.new(name);
  endfunction
   task body();
    csi2_rx_packet_item req;
    req = csi2_rx_packet_item::type_id::create("req");
    start_item(req);
    // RAW6 is selected
    req.test_case      = "RAW6";
    req.datatype       = DT_RAW6;
    req.rtl_word_count = 16'h00EF;
    req.sync_type      = 3'b011;
    req.send_eot       = 1'b1;
    req.payload.delete();
    for (int index = 0; index < 480 ; index++)
    req.payload.push_back(byte'(32'h10 + index));
    finish_item(req);
  endtask
  
endclass


class csi2_errorsync_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_errorsync_seq)

  function new(string name = "csi2_errorsync_seq");
    super.new(name);
  endfunction

  task body();
    csi2_rx_packet_item req;
    req = csi2_rx_packet_item::type_id::create("req");
    start_item(req);
    req.test_case = "ERRORSOTSYNC";
    req.datatype       = DT_RAW7;
    req.rtl_word_count = 16'h0117;
    req.sync_type      = 3'b011;
    req.send_eot       = 1'b1;
    //req.errsoths       = 1'b1;
    req.errsotsynchs   = 1'b1;
    req.payload.delete();
    for (int index = 0; index < 560; index++)
    req.payload.push_back(byte'(32'h10 + index));
    finish_item(req);
  endtask
endclass 

class csi2_end_early_eot_seq extends csi2_ppi_sequence;
   `uvm_object_utils(csi2_end_early_eot_seq)

  function new(string name = "csi2_end_early_eot_seq");
    super.new(name);
  endfunction

  task body();
    csi2_rx_packet_item req;
    req = csi2_rx_packet_item::type_id::create("req");
    start_item(req);
    req.test_case      = "END_EARLY_EOT";
    req.datatype       = DT_RAW8;
    req.rtl_word_count = 16'h001F;
    req.sync_type      = 3'b011;
    req.send_eot       = 1'b1;
    req.payload.delete();
    for (int index = 0; index < 64; index++)
    req.payload.push_back(byte'(32'h10 + index));
    finish_item(req);
  endtask
endclass 





 

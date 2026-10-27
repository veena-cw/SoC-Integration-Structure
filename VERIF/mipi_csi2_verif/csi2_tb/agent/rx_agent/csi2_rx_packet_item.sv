class csi2_rx_packet_item extends uvm_sequence_item;
  `uvm_object_utils(csi2_rx_packet_item)

  bit [4:0] reserved = 5'h00;
  bit [2:0] vcx      = 3'h0;
  bit [1:0] vc       = 2'h0;
  bit [5:0] datatype ;
  bit [15:0] rtl_word_count;
  bit [2:0] sync_type = 3'b011;
  bit       send_eot = 1'b1;
  byte unsigned payload[$];

  bit bfm_completed;
  int unsigned bfm_status;

  function new(string name = "csi2_rx_packet_item");
    super.new(name);
  endfunction

  function void copy_from(csi2_rx_packet_item rhs);
    reserved       = rhs.reserved;
    vcx            = rhs.vcx;
    vc             = rhs.vc;
    datatype       = rhs.datatype;
    rtl_word_count = rhs.rtl_word_count;
    sync_type      = rhs.sync_type;
    send_eot       = rhs.send_eot;
    payload        = rhs.payload;
    bfm_completed  = rhs.bfm_completed;
    bfm_status     = rhs.bfm_status;
  endfunction

  function string convert2string();
    return $sformatf("dt=0x%02h rtl_wc=0x%04h payload=%0d eot=%0b",
                     datatype, rtl_word_count, payload.size(), send_eot);
  endfunction
endclass : csi2_rx_packet_item

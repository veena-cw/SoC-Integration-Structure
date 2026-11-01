class csi2_rx_packet_item extends uvm_sequence_item;
  `uvm_object_utils(csi2_rx_packet_item)

  bit [4:0] reserved = 5'h00;
  bit [2:0] vcx      = 3'h0;
  bit [1:0] vc       = 2'h0;
  bit [5:0] datatype;

  // Current RTL expects the final payload-byte index.
  // Examples:
  // RAW6  : 480 bytes -> 16'h01DF
  // RAW7  : 560 bytes -> 16'h022F
  // RAW8  :  64 bytes -> 16'h003F
  // RAW10 : 800 bytes -> 16'h031F
  bit [15:0] rtl_word_count;

  bit [2:0] sync_type = 3'b011;
  bit       send_eot   = 1'b1;

  byte unsigned payload[$];

  // Short-packet support.
  bit        is_short_packet = 1'b0;
  bit [15:0] short_data      = 16'h0000;

  // PHY error injection.
  logic errsoths     = 1'b0;
  logic errsotsynchs = 1'b0;

  string test_case = "NORMAL";

  bit          bfm_completed;
  int unsigned bfm_status;

  function new(string name = "csi2_rx_packet_item");
    super.new(name);
  endfunction

  // The driver creates a separate expected transaction for the scoreboard.
  // Therefore, every stimulus-related field must be copied.
  function void copy_from(csi2_rx_packet_item rhs);
    reserved         = rhs.reserved;
    vcx              = rhs.vcx;
    vc               = rhs.vc;
    datatype         = rhs.datatype;
    rtl_word_count   = rhs.rtl_word_count;
    sync_type        = rhs.sync_type;
    send_eot         = rhs.send_eot;
    payload          = rhs.payload;

    is_short_packet  = rhs.is_short_packet;
    short_data       = rhs.short_data;

    errsoths         = rhs.errsoths;
    errsotsynchs     = rhs.errsotsynchs;

    test_case        = rhs.test_case;
    bfm_completed    = rhs.bfm_completed;
    bfm_status       = rhs.bfm_status;
  endfunction

  function string convert2string();
    return $sformatf(
      "packet=%s testcase=%s dt=0x%02h vc=%0d vcx=%0d wc=0x%04h short_data=0x%04h payload=%0d eot=%0b",
      is_short_packet ? "SHORT" : "LONG",
      test_case,
      datatype,
      vc,
      vcx,
      rtl_word_count,
      short_data,
      payload.size(),
      send_eot
    );
  endfunction

endclass : csi2_rx_packet_item

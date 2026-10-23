class csi2_rtl_packet_builder;

  static function logic [15:0] crc16_byte(
    input logic [7:0] data_byte,
    input logic [15:0] previous_crc
  );
    return csi2_crc16_next(previous_crc, data_byte);
  endfunction

  // Current RTL consumes six header bytes followed by two zero padding bytes
  // in each 64-bit header word.  This is an RTL profile, not generic CSI-2 VIP.
  static function logic [63:0] build_header_word(csi2_rx_packet_item item);
    logic [7:0] header_bytes[0:7];
    logic [15:0] header_crc;

    header_bytes[0] = {item.reserved, item.vcx};
    header_bytes[1] = {item.vc, item.datatype};
    header_bytes[2] = item.rtl_word_count[7:0];
    header_bytes[3] = item.rtl_word_count[15:8];

    header_crc = CSI2_CRC16_INIT;
    for (int index = 0; index < 4; index++)
      header_crc = crc16_byte(header_bytes[index], header_crc);

    header_bytes[4] = header_crc[7:0];
    header_bytes[5] = header_crc[15:8];
    header_bytes[6] = 8'h00;
    header_bytes[7] = 8'h00;

    build_header_word = 64'h0;
    for (int index = 0; index < 8; index++)
      build_header_word[index*8 +: 8] = header_bytes[index];
  endfunction

  static function void build_payload_words(
    input csi2_rx_packet_item item,
    ref logic [63:0] words[$]
  );
    byte unsigned payload_and_crc[$];
    logic [15:0] payload_crc;

    words.delete();
    payload_and_crc = item.payload;
    payload_crc = CSI2_CRC16_INIT;
    foreach (item.payload[index])
      payload_crc = crc16_byte(item.payload[index], payload_crc);

    payload_and_crc.push_back(payload_crc[7:0]);
    payload_and_crc.push_back(payload_crc[15:8]);

    while ((payload_and_crc.size() % 8) != 0)
     payload_and_crc.push_back(8'h00);
     
    for (int base = 0; base < payload_and_crc.size(); base += 8) begin
      logic [63:0] word_value;
      word_value = 64'h0;
      for (int byte_index = 0; byte_index < 8; byte_index++)
        word_value[byte_index*8 +: 8] = payload_and_crc[base+byte_index];
      words.push_back(word_value);
    end
  endfunction
endclass : csi2_rtl_packet_builder

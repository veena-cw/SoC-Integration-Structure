typedef enum {RX_CLEAN, RX_ECC1, RX_ECC2, RX_CRC} rx_fault_e;
class csi2_rx_lane_item extends uvm_sequence_item;
  `uvm_object_utils(csi2_rx_lane_item)
  byte unsigned bytes[$];
  int unsigned epoch;
  rx_fault_e fault = RX_CLEAN;
  bit aborted;
  int unsigned ecc1_count, ecc2_count, crc_count, format_count;
  function new(string name="csi2_rx_lane_item"); super.new(name); endfunction
endclass

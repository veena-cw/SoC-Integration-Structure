class csi2_ppi_sequence extends uvm_sequence #(csi2_rx_packet_item);
  `uvm_object_utils(csi2_ppi_sequence)

  function new(string name = "csi2_ppi_sequence");
    super.new(name);
  endfunction

  /*
   * Generate valid CSI-2 RAW payload bytes using the existing
   * csi2_pixel_packer.
   *
   * The RTL currently uses an N-1 word-count representation:
   *
   * RAW6  : 640 pixels -> 480 bytes -> WC = 16'h01DF
   * RAW7  : 640 pixels -> 560 bytes -> WC = 16'h022F
   * RAW8  :  64 pixels ->  64 bytes -> WC = 16'h003F
   * RAW10 : 640 pixels -> 800 bytes -> WC = 16'h031F
   */
  function void build_raw_payload(
    input bit [5:0] datatype,
    input int unsigned pixel_count,
    ref byte unsigned payload[$]
  );
    csi2_pixel_packer packer;

    bit [23:0] pixels[];
    bit [9:0]  y_samples[];
    bit [9:0]  u_samples[];
    bit [9:0]  v_samples[];

    int unsigned pixel_mask;

    packer = new();

    pixels   = new[pixel_count];
    y_samples = new[0];
    u_samples = new[0];
    v_samples = new[0];

    case (datatype)
      DT_RAW6:
        pixel_mask = 24'h00003F;

      DT_RAW7:
        pixel_mask = 24'h00007F;

      DT_RAW8:
        pixel_mask = 24'h0000FF;

      DT_RAW10:
        pixel_mask = 24'h0003FF;

      DT_RAW12:
        pixel_mask = 24'h000FFF;

      DT_RAW14:
        pixel_mask = 24'h003FFF;

      default:
        `uvm_fatal(
          "RAW_PAYLOAD",
          $sformatf(
            "Unsupported RAW datatype 0x%02h",
            datatype
          )
        )
    endcase

    foreach (pixels[index]) begin
      pixels[index] = (24'h10 + index) & pixel_mask;
    end

    payload.delete();

    packer.pixel(
      datatype,
      pixels,
      y_samples,
      u_samples,
      v_samples,
      ODD_LINE,
      payload
    );

    if (payload.size() == 0) begin
      `uvm_fatal(
        "RAW_PAYLOAD",
        $sformatf(
          "Pixel packer generated an empty payload for datatype 0x%02h",
          datatype
        )
      )
    end
  endfunction

  function void build_rgb_payload(
    input bit [5:0] datatype,
    input int unsigned pixel_count,
    ref byte unsigned payload[$]
  );
    csi2_pixel_packer packer;
    bit [23:0] pixels[];
    bit [9:0] y_samples[];
    bit [9:0] u_samples[];
    bit [9:0] v_samples[];

    packer = new();
    pixels = new[pixel_count];
    y_samples = new[0];
    u_samples = new[0];
    v_samples = new[0];
    foreach (pixels[index])
      pixels[index] = (24'h010203 + index) & 24'hffffff;
    payload.delete();
    packer.pixel(datatype, pixels, y_samples, u_samples, v_samples,
                 ODD_LINE, payload);
    if (payload.size() == 0)
      `uvm_fatal("RGB_PAYLOAD", "Pixel packer generated an empty payload")
  endfunction

  task send_raw_item(
    input string item_name,
    input string test_name,
    input bit [5:0] datatype,
    input int unsigned pixel_count,
    input bit [1:0] vc = 2'd0,
    input int signed wc_adjust = 0,
    input bit corrupt_crc = 1'b0,
    input bit payload_gap = 1'b0
  );
    csi2_rx_packet_item req;
    req = csi2_rx_packet_item::type_id::create(item_name);
    start_item(req);
    req.test_case       = test_name;
    req.is_short_packet = 1'b0;
    req.datatype        = datatype;
    req.vc              = vc;
    req.vcx             = 3'd0;
    req.sync_type       = 3'b011;
    req.send_eot        = 1'b1;
    req.corrupt_crc     = corrupt_crc;
    req.payload_gap_enable = payload_gap;
    req.payload_gap_after_words = 2;
    req.expect_dut_error = corrupt_crc || (wc_adjust != 0);
    build_raw_payload(datatype, pixel_count, req.payload);
    req.rtl_word_count = 16'(req.payload.size() - 1 + wc_adjust);
    finish_item(req);
  endtask

  task send_short_item(
    input string item_name,
    input string test_name,
    input bit [5:0] datatype,
    input bit [15:0] short_data,
    input bit [1:0] vc = 2'd0
  );
    csi2_rx_packet_item req;
    req = csi2_rx_packet_item::type_id::create(item_name);
    start_item(req);
    req.test_case       = test_name;
    req.is_short_packet = 1'b1;
    req.datatype        = datatype;
    req.short_data      = short_data;
    req.vc              = vc;
    req.vcx             = 3'd0;
    req.sync_type       = 3'b011;
    req.send_eot        = 1'b1;
    req.rtl_word_count  = 16'h0000;
    req.payload.delete();
    finish_item(req);
  endtask


  /*
   * Default sequence: RAW7
   */
  task body();
    csi2_rx_packet_item req;

    req = csi2_rx_packet_item::type_id::create("raw7_req");

    start_item(req);

    req.test_case       = "NORMAL";
    req.is_short_packet = 1'b0;
    req.short_data      = 16'h0000;

    req.datatype        = DT_RAW7;
    req.vc              = 2'd0;
    req.vcx             = 3'd0;

    req.sync_type       = 3'b011;
    req.send_eot        = 1'b1;

    req.errsoths         = 1'b0;
    req.errsotsynchs     = 1'b0;

    build_raw_payload(
      req.datatype,
      640,
      req.payload
    );

    req.rtl_word_count =
        16'(req.payload.size() - 1);

    `uvm_info(
      "RAW7_SEQ",
      $sformatf(
        "Generated RAW7 packet: pixels=640 payload=%0d WC=0x%04h",
        req.payload.size(),
        req.rtl_word_count
      ),
      UVM_NONE
    )

    finish_item(req);
  endtask

endclass : csi2_ppi_sequence


/*
 * RAW8 sequence
 */
class csi2_raw8_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_raw8_seq)

  function new(string name = "csi2_raw8_seq");
    super.new(name);
  endfunction

  task body();
    csi2_rx_packet_item req;

    req = csi2_rx_packet_item::type_id::create("raw8_req");

    start_item(req);

    req.test_case       = "RAW8";
    req.is_short_packet = 1'b0;
    req.short_data      = 16'h0000;

    req.datatype        = DT_RAW8;
    req.vc              = 2'd0;
    req.vcx             = 3'd0;

    req.sync_type       = 3'b011;
    req.send_eot        = 1'b1;

    req.errsoths         = 1'b0;
    req.errsotsynchs     = 1'b0;
    build_raw_payload(
      req.datatype,
      64,
      req.payload
    );

    req.rtl_word_count =
        16'(req.payload.size() - 1);

    `uvm_info(
      "RAW8_SEQ",
      $sformatf(
        "Generated RAW8 packet: pixels=64 payload=%0d WC=0x%04h",
        req.payload.size(),
        req.rtl_word_count
      ),
      UVM_NONE
    )

    finish_item(req);
  endtask

endclass : csi2_raw8_seq


/*
 * RAW6 sequence
 */
class csi2_raw6_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_raw6_seq)

  function new(string name = "csi2_raw6_seq");
    super.new(name);
  endfunction

  task body();
    csi2_rx_packet_item req;

    req = csi2_rx_packet_item::type_id::create("raw6_req");

    start_item(req);

    req.test_case       = "RAW6";
    req.is_short_packet = 1'b0;
    req.short_data      = 16'h0000;

    req.datatype        = DT_RAW6;
    req.vc              = 2'd0;
    req.vcx             = 3'd0;

    req.sync_type       = 3'b011;
    req.send_eot        = 1'b1;

    req.errsoths         = 1'b0;
    req.errsotsynchs     = 1'b0;
    build_raw_payload(
      req.datatype,
      640,
      req.payload
    );

    req.rtl_word_count =
        16'(req.payload.size() - 1);

    `uvm_info(
      "RAW6_SEQ",
      $sformatf(
        "Generated RAW6 packet: pixels=640 payload=%0d WC=0x%04h",
        req.payload.size(),
        req.rtl_word_count
      ),
      UVM_NONE
    )

    finish_item(req);
  endtask

endclass : csi2_raw6_seq


/*
 * RAW10 sequence
 */
class csi2_raw10_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_raw10_seq)

  function new(string name = "csi2_raw10_seq");
    super.new(name);
  endfunction

  task body();
    csi2_rx_packet_item req;

    req = csi2_rx_packet_item::type_id::create("raw10_req");

    start_item(req);

    req.test_case       = "RAW10";
    req.is_short_packet = 1'b0;
    req.short_data      = 16'h0000;

    req.datatype        = DT_RAW10;
    req.vc              = 2'd0;
    req.vcx             = 3'd0;

    req.sync_type       = 3'b011;
    req.send_eot        = 1'b1;

    req.errsoths         = 1'b0;
    req.errsotsynchs     = 1'b0;

    build_raw_payload(
      req.datatype,
      640,
      req.payload
    );

    req.rtl_word_count =
        16'(req.payload.size() - 1);

    `uvm_info(
      "RAW10_SEQ",
      $sformatf(
        "Generated RAW10 packet: pixels=640 payload=%0d WC=0x%04h",
        req.payload.size(),
        req.rtl_word_count
      ),
      UVM_NONE
    )

    finish_item(req);
  endtask

endclass : csi2_raw10_seq


/*
 * SoT synchronization-error sequence
 */
class csi2_errorsync_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_errorsync_seq)

  function new(string name = "csi2_errorsync_seq");
    super.new(name);
  endfunction

  task body();
    csi2_rx_packet_item req;

    req = csi2_rx_packet_item::type_id::create(
      "errorsync_req"
    );

    start_item(req);

    req.test_case       = "ERRORSOTSYNC";
    req.is_short_packet = 1'b0;
    req.short_data      = 16'h0000;

    req.datatype        = DT_RAW7;
    req.vc              = 2'd0;
    req.vcx             = 3'd0;

    req.sync_type       = 3'b011;
    req.send_eot        = 1'b1;

    req.errsoths         = 1'b0;
    req.errsotsynchs     = 1'b1;

    build_raw_payload(
      req.datatype,
      640,
      req.payload
    );

    req.rtl_word_count =
        16'(req.payload.size() - 1);

    finish_item(req);
  endtask

endclass : csi2_errorsync_seq


/*
 * Early-EoT sequence
 *
 * The transaction contains a complete RAW8 payload. The driver detects
 * test_case == "END_EARLY_EOT" and terminates the PHY transfer before
 * transmitting all payload words.
 */
class csi2_end_early_eot_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_end_early_eot_seq)

  function new(string name = "csi2_end_early_eot_seq");
    super.new(name);
  endfunction

  task body();
    csi2_rx_packet_item req;

    req = csi2_rx_packet_item::type_id::create(
      "end_early_eot_req"
    );

    start_item(req);

    req.test_case       = "END_EARLY_EOT";
    req.expect_dut_error = 1'b1;
    req.is_short_packet = 1'b0;
    req.short_data      = 16'h0000;

    req.datatype        = DT_RAW8;
    req.vc              = 2'd0;
    req.vcx             = 3'd0;

    req.sync_type       = 3'b011;
    req.send_eot        = 1'b1;

    req.errsoths         = 1'b0;
    req.errsotsynchs     = 1'b0;

    build_raw_payload(
      req.datatype,
      64,
      req.payload
    );

    req.rtl_word_count =
        16'(req.payload.size() - 1);

    finish_item(req);
  endtask

endclass : csi2_end_early_eot_seq


/*
 * Back-to-back short-packet sequence
 *
 * Packet 1: Frame Start
 * Packet 2: Frame End
 *
 * Each start_item()/finish_item() pair creates exactly one sequence item.
 * Therefore, this sequence creates exactly two short packets.
 */
class csi2_back_to_back_short_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_back_to_back_short_seq)

  function new(
    string name = "csi2_back_to_back_short_seq"
  );
    super.new(name);
  endfunction

  task body();
    csi2_rx_packet_item req;

    /*
     * First short packet: Frame Start
     */
    req = csi2_rx_packet_item::type_id::create(
      "frame_start_req"
    );

    start_item(req);

    req.test_case       = "BACK_TO_BACK_SHORT";
    req.is_short_packet = 1'b1;

    req.datatype        = DT_FRAME_START;
    req.short_data      = 16'h1234;

    req.vc              = 2'd0;
    req.vcx             = 3'd0;

    req.rtl_word_count  = 16'h0000;

    req.sync_type       = 3'b011;
    req.send_eot        = 1'b1;

    req.errsoths         = 1'b0;
    req.errsotsynchs     = 1'b0;

    req.payload.delete();

    finish_item(req);

    /*
     * Second short packet: Frame End
     */
    req = csi2_rx_packet_item::type_id::create(
      "frame_end_req"
    );

    start_item(req);

    req.test_case       = "BACK_TO_BACK_SHORT";
    req.is_short_packet = 1'b1;

    req.datatype        = DT_FRAME_END;
    req.short_data      = 16'h5678;

    req.vc              = 2'd0;
    req.vcx             = 3'd0;

    req.rtl_word_count  = 16'h0000;

    req.sync_type       = 3'b011;
    req.send_eot        = 1'b1;

    req.errsoths         = 1'b0;
    req.errsotsynchs     = 1'b0;

    req.payload.delete();

    finish_item(req);
  endtask

endclass : csi2_back_to_back_short_seq


class csi2_raw14_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_raw14_seq)

  function new(string name = "csi2_raw14_seq");
    super.new(name);
  endfunction

  task body();
    csi2_rx_packet_item req;
    req = csi2_rx_packet_item::type_id::create("req");
    start_item(req);
    req.test_case       = "RAW14";
    req.is_short_packet = 1'b0;
    req.datatype        = DT_RAW14;
    req.sync_type       = 3'b011;
    req.send_eot        = 1'b1;
    req.errsoths        = 1'b0;
    req.errsotsynchs    = 1'b0;
    build_raw_payload(DT_RAW14, 640, req.payload);
    req.rtl_word_count = 16'h045F;
    `uvm_info("RAW14_SEQ",$sformatf("pixels=640 payload_bytes=%0d rtl_wc=0x%04h",req.payload.size(),req.rtl_word_count),UVM_NONE)
    finish_item(req);
  endtask

endclass


class csi2_raw12_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_raw12_seq)

  function new(string name = "csi2_raw12_seq");
    super.new(name);
  endfunction

  task body();
    csi2_rx_packet_item req;

    req = csi2_rx_packet_item::type_id::create("req");
    start_item(req);

    req.test_case       = "RAW12";
    req.is_short_packet = 1'b0;
    req.datatype        = DT_RAW12;
    req.rtl_word_count  = 16'h03BF;
    req.sync_type       = 3'b011;
    req.send_eot        = 1'b1;
    req.errsoths        = 1'b0;
    req.errsotsynchs    = 1'b0;

    build_raw_payload(
      DT_RAW12,
      640,
      req.payload
    );

    `uvm_info(
      "RAW12_SEQ",
      $sformatf(
        "pixels=640 payload_bytes=%0d rtl_wc=0x%04h",
        req.payload.size(),
        req.rtl_word_count
      ),
      UVM_NONE
    )

    finish_item(req);
  endtask
endclass : csi2_raw12_seq

class csi2_raw16_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_raw16_seq)

  function new(string name = "csi2_raw16_seq");
    super.new(name);
  endfunction

  task body();
    csi2_rx_packet_item req;
    bit [15:0] pixel_value;

    req = csi2_rx_packet_item::type_id::create(
      "raw16_req"
    );

    start_item(req);

    req.test_case       = "RAW16";
    req.is_short_packet = 1'b0;
    req.short_data      = 16'h0000;

    req.datatype        = DT_RAW16;
    req.vc              = 2'd0;
    req.vcx             = 3'd0;

    req.sync_type       = 3'b011;
    req.send_eot        = 1'b1;

    req.errsoths        = 1'b0;
    req.errsotsynchs    = 1'b0;

    req.payload.delete();

    /*
     * RAW16 carries one 16-bit pixel in two payload bytes.
     * The current RTL reconstructs:
     *
     * pixel[15:8] = first received byte
     * pixel[7:0]  = second received byte
     */
    for (int unsigned index = 0;
         index < 640;
         index++) begin

      pixel_value = 16'h0010 + index;

      req.payload.push_back(pixel_value[15:8]);
      req.payload.push_back(pixel_value[7:0]);
    end

    /*
     * 640 pixels × 2 bytes = 1280 bytes.
     * Current RTL uses N-1 word count:
     * 1280 - 1 = 1279 = 16'h04FF.
     */
    req.rtl_word_count =
        16'(req.payload.size() - 1);

    `uvm_info(
      "RAW16_SEQ",
      $sformatf(
        "Generated RAW16 packet: pixels=640 payload=%0d WC=0x%04h",
        req.payload.size(),
        req.rtl_word_count
      ),
      UVM_NONE
    )

    finish_item(req);
  endtask

endclass : csi2_raw16_seq

class csi2_vc0_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_vc0_seq)
  function new(string name = "csi2_vc0_seq"); super.new(name); endfunction
  task body(); send_raw_item("vc0_req", "VC0", DT_RAW6, 640, 2'd0); endtask
endclass

class csi2_vc1_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_vc1_seq)
  function new(string name = "csi2_vc1_seq"); super.new(name); endfunction
  task body(); send_raw_item("vc1_req", "VC1", DT_RAW6, 640, 2'd1); endtask
endclass

class csi2_vc2_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_vc2_seq)
  function new(string name = "csi2_vc2_seq"); super.new(name); endfunction
  task body(); send_raw_item("vc2_req", "VC2", DT_RAW6, 640, 2'd2); endtask
endclass

class csi2_vc3_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_vc3_seq)
  function new(string name = "csi2_vc3_seq"); super.new(name); endfunction
  task body(); send_raw_item("vc3_req", "VC3", DT_RAW6, 640, 2'd3); endtask
endclass

class csi2_generic_short_packet_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_generic_short_packet_seq)
  function new(string name = "csi2_generic_short_packet_seq"); super.new(name); endfunction
  task body();
    send_short_item("frame_start", "GENERIC_SHORT", DT_FRAME_START, 16'h0001);
    send_short_item("line_start", "GENERIC_SHORT", DT_LINE_START, 16'h0010);
    send_short_item("generic_short", "GENERIC_SHORT", 6'h08, 16'h5aa5);
    send_short_item("line_end", "GENERIC_SHORT", DT_LINE_END, 16'h0010);
    send_short_item("frame_end", "GENERIC_SHORT", DT_FRAME_END, 16'h0001);
  endtask
endclass

class csi2_back_to_back_long_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_back_to_back_long_seq)
  function new(string name = "csi2_back_to_back_long_seq"); super.new(name); endfunction
  task body();
    send_raw_item("long0", "BACK_TO_BACK_LONG", DT_RAW6, 640, 2'd0);
    send_raw_item("long1", "BACK_TO_BACK_LONG", DT_RAW6, 640, 2'd0);
  endtask
endclass

class csi2_short_long_mix_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_short_long_mix_seq)
  function new(string name = "csi2_short_long_mix_seq"); super.new(name); endfunction
  task body();
    send_short_item("frame_start", "SHORT_LONG_MIX", DT_FRAME_START, 16'h0002);
    send_raw_item("long_packet", "SHORT_LONG_MIX", DT_RAW6, 640, 2'd0);
    send_short_item("frame_end", "SHORT_LONG_MIX", DT_FRAME_END, 16'h0002);
  endtask
endclass

class csi2_wrong_word_count_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_wrong_word_count_seq)
  function new(string name = "csi2_wrong_word_count_seq"); super.new(name); endfunction
  task body(); send_raw_item("wrong_wc", "WRONG_WORD_COUNT", DT_RAW6, 640, 2'd0, 4); endtask
endclass

class csi2_zero_word_count_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_zero_word_count_seq)
  function new(string name = "csi2_zero_word_count_seq"); super.new(name); endfunction
  task body();
    csi2_rx_packet_item req;
    req = csi2_rx_packet_item::type_id::create("zero_wc");
    start_item(req);
    req.test_case = "ZERO_WORD_COUNT";
    req.datatype = DT_RAW6;
    req.rtl_word_count = 16'h0000;
    req.expect_dut_error = 1'b1;
    req.payload.delete();
    finish_item(req);
  endtask
endclass

class csi2_minimum_word_count_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_minimum_word_count_seq)
  function new(string name = "csi2_minimum_word_count_seq"); super.new(name); endfunction
  task body();
    csi2_rx_packet_item req;
    req = csi2_rx_packet_item::type_id::create("minimum_wc");
    start_item(req);
    req.test_case = "MINIMUM_WORD_COUNT";
    req.datatype = DT_RAW8;
    req.rtl_word_count = 16'h0000;
    req.payload.delete();
    req.payload.push_back(8'h10);
    finish_item(req);
  endtask
endclass

class csi2_aligned_word_count_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_aligned_word_count_seq)
  function new(string name = "csi2_aligned_word_count_seq"); super.new(name); endfunction
  task body(); send_raw_item("aligned_wc", "ALIGNED_WORD_COUNT", DT_RAW8, 64); endtask
endclass

class csi2_crc_good_packet_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_crc_good_packet_seq)
  function new(string name = "csi2_crc_good_packet_seq"); super.new(name); endfunction
  task body(); send_raw_item("crc_good", "CRC_GOOD_PACKET", DT_RAW6, 640); endtask
endclass

class csi2_crc_error_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_crc_error_seq)
  function new(string name = "csi2_crc_error_seq"); super.new(name); endfunction
  task body(); send_raw_item("crc_error", "CRC_ERROR", DT_RAW6, 640, 2'd0, 0, 1'b1); endtask
endclass

class csi2_payload_valid_gap_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_payload_valid_gap_seq)
  function new(string name = "csi2_payload_valid_gap_seq"); super.new(name); endfunction
  task body(); send_raw_item("payload_gap", "PAYLOAD_VALID_GAP", DT_RAW6, 640, 2'd0, 0, 1'b0, 1'b1); endtask
endclass

class csi2_sot_eot_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_sot_eot_seq)
  function new(string name = "csi2_sot_eot_seq"); super.new(name); endfunction
  task body(); send_raw_item("sot_eot", "SOT_EOT", DT_RAW6, 640); endtask
endclass

class csi2_sync_type_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_sync_type_seq)
  function new(string name = "csi2_sync_type_seq"); super.new(name); endfunction
  task body(); send_raw_item("sync_type", "SYNC_TYPE", DT_RAW6, 640); endtask
endclass

class csi2_fixed_64bit_ppi_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_fixed_64bit_ppi_seq)
  function new(string name = "csi2_fixed_64bit_ppi_seq"); super.new(name); endfunction
  task body(); send_raw_item("fixed64", "FIXED_64BIT_PPI", DT_RAW8, 64); endtask
endclass

class csi2_lane_merge_byte_order_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_lane_merge_byte_order_seq)
  function new(string name = "csi2_lane_merge_byte_order_seq"); super.new(name); endfunction
  task body();
    csi2_rx_packet_item req;
    req = csi2_rx_packet_item::type_id::create("lane_order");
    start_item(req);
    req.test_case = "LANE_MERGE_BYTE_ORDER";
    req.datatype = DT_RAW8;
    req.payload.delete();
    for (int index = 0; index < 64; index++)
      req.payload.push_back(byte'(index));
    req.rtl_word_count = 16'(req.payload.size() - 1);
    finish_item(req);
  endtask
endclass

class csi2_random_stress_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_random_stress_seq)
  function new(string name = "csi2_random_stress_seq"); super.new(name); endfunction
  task body();
    int unsigned pixels;
    bit [1:0] random_vc;
    for (int packet = 0; packet < 10; packet++) begin
      pixels = 4 * $urandom_range(16, 160);
      random_vc = $urandom_range(0, 3);
      send_raw_item($sformatf("stress_%0d", packet), "RANDOM_STRESS",
                    DT_RAW6, pixels, random_vc);
    end
  endtask
endclass

class csi2_error_input_aggregation_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_error_input_aggregation_seq)
  function new(string name = "csi2_error_input_aggregation_seq"); super.new(name); endfunction
  task body();
    csi2_rx_packet_item req;
    req = csi2_rx_packet_item::type_id::create("error_aggregation");
    start_item(req);
    req.test_case = "ERROR_INPUT_AGGREGATION";
    req.datatype = DT_RAW6;
    req.errsoths = 1'b1;
    req.errsotsynchs = 1'b1;
    req.erresc = 1'b1;
    req.errsyncesc = 1'b1;
    req.errcontrol = 1'b1;
    req.errcontentionlp0 = 1'b1;
    req.errcontentionlp1 = 1'b1;
    req.expect_dut_error = 1'b1;
    build_raw_payload(DT_RAW6, 640, req.payload);
    req.rtl_word_count = 16'(req.payload.size() - 1);
    finish_item(req);
  endtask
endclass

class csi2_rgb555_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_rgb555_seq)
  function new(string name = "csi2_rgb555_seq"); super.new(name); endfunction
  task body();
    csi2_rx_packet_item req;
    req = csi2_rx_packet_item::type_id::create("rgb555");
    start_item(req);
    req.test_case = "RGB555";
    req.datatype = DT_RGB555;
    build_rgb_payload(DT_RGB555, 640, req.payload);
    req.rtl_word_count = 16'(req.payload.size() - 1);
    finish_item(req);
  endtask
endclass

class csi2_rgb666_seq extends csi2_ppi_sequence;
  `uvm_object_utils(csi2_rgb666_seq)
  function new(string name = "csi2_rgb666_seq"); super.new(name); endfunction
  task body();
    csi2_rx_packet_item req;
    req = csi2_rx_packet_item::type_id::create("rgb666");
    start_item(req);
    req.test_case = "RGB666";
    req.datatype = DT_RGB666;
    build_rgb_payload(DT_RGB666, 640, req.payload);
    req.rtl_word_count = 16'(req.payload.size() - 1);
    finish_item(req);
  endtask
endclass

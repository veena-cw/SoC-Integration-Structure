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

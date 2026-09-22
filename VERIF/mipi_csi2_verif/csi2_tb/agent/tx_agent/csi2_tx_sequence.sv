class csi2_tx_sequence extends uvm_sequence #(csi2_packet_item);

    `uvm_object_utils(csi2_tx_sequence)

    csi2_pixel_packer packer;


    function new(string name = "csi2_tx_sequence");
        super.new(name);
    endfunction


    task body();

        csi2_packet_item req;

        req = csi2_packet_item::type_id::create("req");
packer = new();

// Required for Verilator dynamic-array randomization.
req.pixels = new[4];

start_item(req);

if (!req.randomize() with {
  dt          == DT_RGB666;
  line_width  == 4;
  line_number == 1;

  pixels.size()    == 4;
  y_samples.size() == 0;
  u_samples.size() == 0;
  v_samples.size() == 0;
}) begin
  `uvm_fatal("RAND", "RGB666 transaction randomization failed")
  return;
end

         `uvm_info("PIXEL_CHECK", $sformatf("Before packing: dt=0x%02h width=%0d pixels=%0d",req.dt, req.line_width, req.pixels.size()),UVM_LOW)

        if (req.dt == DT_RGB666 && req.pixels.size() != req.line_width)
        begin
            `uvm_fatal("PIXEL_SIZE",$sformatf("Expected %0d pixels, got %0d",req.line_width, req.pixels.size()))
        end
        /*
         * Single payload-building call for every format.
         */
        packer.pixel(
            req.dt,
            req.pixels,
            req.y_samples,
            req.u_samples,
            req.v_samples,
            req.get_line_type(),
            req.payload
        );

        if (req.payload.size() != 9) begin
  `uvm_fatal("PACK_SIZE",
    $sformatf("Four RGB666 pixels require 9 bytes; got %0d",
              req.payload.size()))
  return;
end
        if (req.dt == DT_RGB666 && req.line_width == 4 &&
             req.payload.size() != 9)
             begin
             `uvm_fatal("PACK_SIZE", $sformatf("Four RGB666 pixels require 9 bytes; got %0d",req.payload.size()))
             end
        if (req.payload.size() > 16'hFFFF)`uvm_fatal("WC", "Payload exceeds CSI-2 Word Count field")

        // Word Count is payload bytes, not pixels.
            req.word_count = req.payload.size();

            `uvm_info("TX_SEQ", $sformatf("Generated %s line_width=%0d line_number=%0d", req.convert2string(),req.line_width, req.line_number), UVM_LOW)

        if (req.is_yuv())
        begin

            foreach (req.y_samples[i])
                `uvm_info("TX_SEQ_DETAIL",
                          $sformatf("Y[%0d]=0x%03h",i,req.y_samples[i]),
                          UVM_HIGH)

            foreach (req.u_samples[i])
                `uvm_info("TX_SEQ_DETAIL",
                          $sformatf("U[%0d]=0x%03h",i,req.u_samples[i]),
                          UVM_HIGH)

            foreach (req.v_samples[i])
                `uvm_info("TX_SEQ_DETAIL",
                          $sformatf("V[%0d]=0x%03h",i,req.v_samples[i]),
                          UVM_HIGH)

        end
        else
         begin

            foreach (req.pixels[i])
                `uvm_info("TX_SEQ_DETAIL",
                          $sformatf("PIXEL[%0d]=0x%06h",i,req.pixels[i]),
                          UVM_HIGH)

        end

        foreach (req.payload[i])
            `uvm_info("TX_SEQ_DETAIL",
                      $sformatf("PAYLOAD[%0d]=0x%02h",i,req.payload[i]),
                      UVM_HIGH)

        finish_item(req);

    endtask

endclass

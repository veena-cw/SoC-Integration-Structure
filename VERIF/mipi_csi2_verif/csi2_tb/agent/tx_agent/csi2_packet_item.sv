import csi2_pkg::*;

class csi2_packet_item extends uvm_sequence_item;
    logic rst_n;
    rand bit [1:0] vc;
    rand bit [5:0] dt;
    rand bit [15:0] short_data;

    rand int unsigned line_width;
    rand int unsigned line_number;

    // RAW/RGB representation
    rand bit [23:0] pixels[];

    // YUV representation
    rand bit [9:0] y_samples[];
    rand bit [9:0] u_samples[];
    rand bit [9:0] v_samples[];

    byte unsigned payload[$];

    // Derived after pixel-to-byte conversion
    bit [15:0] word_count;
    bit pixel_decode_valid;


    `uvm_object_utils_begin(csi2_packet_item)
        `uvm_field_int(vc,             UVM_DEFAULT)
        `uvm_field_int(dt,             UVM_DEFAULT)
        `uvm_field_int(short_data,     UVM_DEFAULT)
        `uvm_field_int(line_width,     UVM_DEFAULT)
        `uvm_field_int(line_number,    UVM_DEFAULT)
        `uvm_field_int(word_count,     UVM_DEFAULT)
        `uvm_field_int(pixel_decode_valid, UVM_DEFAULT)

        `uvm_field_array_int(pixels,    UVM_DEFAULT)
        `uvm_field_array_int(y_samples, UVM_DEFAULT)
        `uvm_field_array_int(u_samples, UVM_DEFAULT)
        `uvm_field_array_int(v_samples, UVM_DEFAULT)

        `uvm_field_queue_int(payload,   UVM_DEFAULT)
    `uvm_object_utils_end


    function new(string name = "csi2_packet_item");
        super.new(name);
    endfunction

    function bit is_long_pkt();
        return is_long_packet(dt);
    endfunction


    function bit [15:0] get_pkt_len_field();

        if (is_long_pkt())
            return word_count;
        else
            return short_data;

    endfunction


    function string convert2string();

        if (is_long_pkt())
            return $sformatf("LONG vc=%0d dt=0x%02h wc=%0d payload_bytes=%0d",vc, dt, word_count, payload.size());
        else
            return $sformatf("SHORT vc=%0d dt=0x%02h data=0x%04h",vc, dt, short_data);

    endfunction

    // Only Data Types currently supported by the packer.
    constraint supported_dt_c {

        dt inside {
            DT_YUV420_8,
            DT_YUV420_10,
            DT_YUV420_8_LEGACY,
            DT_YUV420_8_CSPS,
            DT_YUV420_10_CSPS,
            DT_YUV422_8,
            DT_YUV422_10,

            DT_RGB444,
            DT_RGB555,
            DT_RGB565,
            DT_RGB666,
            DT_RGB888,

            DT_RAW6,
            DT_RAW7,
            DT_RAW8,
            DT_RAW10,
            DT_RAW12,
            DT_RAW14
        };
    }


    constraint line_configuration_c {

        line_width > 0;

        // Prevent huge arrays when a sequence forgets to set width.
        soft line_width == 8;

        // Use one-based line numbering.
        line_number inside {[1:16'hFFFF]}; }


    // Select either pixels[] or Y/U/V arrays.
    constraint representation_c {

        if (dt inside {
            DT_YUV420_8,
            DT_YUV420_10,
            DT_YUV420_8_LEGACY,
            DT_YUV420_8_CSPS,
            DT_YUV420_10_CSPS,
            DT_YUV422_8,
            DT_YUV422_10
        }) {
            pixels.size() == 0;
        }
        else {
            pixels.size() == line_width;

            y_samples.size() == 0;
            u_samples.size() == 0;
            v_samples.size() == 0;
        }
    }


    // All YUV format array-size constraints.
    constraint yuv_array_sizes_c {

        /*
         * YUV422:
         *
         * Y = line_width
         * U = line_width/2
         * V = line_width/2
         */
        if (dt inside {
            DT_YUV422_8,
            DT_YUV422_10
        }) {
            line_width % 2 == 0;

            y_samples.size() == line_width;
            u_samples.size() == line_width/2;
            v_samples.size() == line_width/2;
        }

        /*
         * Normal and CSPS YUV420:
         *
         * Odd line  : Y only
         * Even line : Y + U + V
         */
        else if (dt inside {
            DT_YUV420_8,
            DT_YUV420_10,
            DT_YUV420_8_CSPS,
            DT_YUV420_10_CSPS
        }) {
            line_width % 2 == 0;
            y_samples.size() == line_width;

            if ((line_number % 2) == 1) {
                u_samples.size() == 0;
                v_samples.size() == 0;
            }
            else {
                u_samples.size() == line_width/2;
                v_samples.size() == line_width/2;
            }

            // Odd lines pack four 10-bit Y values into five bytes.
            if ((dt inside {
                DT_YUV420_10,
                DT_YUV420_10_CSPS
            }) && ((line_number % 2) == 1)) {
                line_width % 4 == 0;
            }
        }

        /*
         * Legacy YUV420:
         *
         * Odd line  : Y + U
         * Even line : Y + V
         */
        else if (dt == DT_YUV420_8_LEGACY) {
            line_width % 2 == 0;
            y_samples.size() == line_width;

            if ((line_number % 2) == 1) {
                u_samples.size() == line_width/2;
                v_samples.size() == 0;
            }
            else {
                u_samples.size() == 0;
                v_samples.size() == line_width/2;
            }
        }
    }


    // Force 8-bit YUV samples into sample[7:0].
    constraint yuv_8bit_values_c {

        if (dt inside {
            DT_YUV420_8,
            DT_YUV420_8_LEGACY,
            DT_YUV420_8_CSPS,
            DT_YUV422_8
        }) {foreach (y_samples[i])
                y_samples[i][9:8] == 2'b00;

            foreach (u_samples[i])
                u_samples[i][9:8] == 2'b00;

            foreach (v_samples[i])
                v_samples[i][9:8] == 2'b00;
        }
    }


    // RAW/RGB unused upper-bit constraints.
    constraint pixel_width_c {

        foreach (pixels[i]) {

            if (dt == DT_RAW6)
                pixels[i][23:6] == 0;

            else if (dt == DT_RAW7)
                pixels[i][23:7] == 0;

            else if (dt == DT_RAW8)
                pixels[i][23:8] == 0;

            else if (dt == DT_RAW10)
                pixels[i][23:10] == 0;

            else if (dt == DT_RAW12)
                pixels[i][23:12] == 0;

            else if (dt == DT_RAW14)
                pixels[i][23:14] == 0;

            else if (dt == DT_RGB444)
                pixels[i][23:12] == 0;

            else if (dt == DT_RGB555)
                pixels[i][23:15] == 0;

            else if (dt == DT_RGB565)
                pixels[i][23:16] == 0;

            else if (dt == DT_RGB666)
                pixels[i][23:18] == 0;

            // RGB888 uses all 24 bits.
        }
    }


    constraint pixel_group_c {

        if (dt == DT_RAW6)
            line_width % 4 == 0;

        else if (dt == DT_RAW7)
            line_width % 8 == 0;

        else if (dt == DT_RAW10)
            line_width % 4 == 0;

        else if (dt == DT_RAW12)
            line_width % 2 == 0;

        else if (dt == DT_RAW14)
            line_width % 4 == 0;

        else if (dt == DT_RGB666)
            line_width % 4 == 0;
    }


    function bit is_yuv();
        return dt inside {
            DT_YUV420_8,
            DT_YUV420_10,
            DT_YUV420_8_LEGACY,
            DT_YUV420_8_CSPS,
            DT_YUV420_10_CSPS,
            DT_YUV422_8,
            DT_YUV422_10
        };
    endfunction


    function line_type_e get_line_type();

        if (dt inside {
            DT_YUV420_8,
            DT_YUV420_10,
            DT_YUV420_8_LEGACY,
            DT_YUV420_8_CSPS,
            DT_YUV420_10_CSPS
        }) begin

            if ((line_number % 2) == 1)
                return ODD_LINE;
            else
                return EVEN_LINE;
        end
        // RAW, RGB and YUV422 do not need line differentiation.
        return NONE;

    endfunction

endclass

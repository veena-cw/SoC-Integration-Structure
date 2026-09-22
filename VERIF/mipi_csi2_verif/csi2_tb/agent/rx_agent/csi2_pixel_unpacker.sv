class csi2_pixel_unpacker;

  function void clear_outputs(
    ref bit [23:0] pixels[],
    ref bit [9:0] y_samples[],
    ref bit [9:0] u_samples[],
    ref bit [9:0] v_samples[]
  );
    pixels = new[0];
    y_samples = new[0];
    u_samples = new[0];
    v_samples = new[0];
  endfunction


  function void unpack_4x10bit(
    input byte unsigned b0,
    input byte unsigned b1,
    input byte unsigned b2,
    input byte unsigned b3,
    input byte unsigned b4,
    output bit [9:0] sample0,
    output bit [9:0] sample1,
    output bit [9:0] sample2,
    output bit [9:0] sample3
  );
    sample0 = {b0,b4[1:0]};
    sample1 = {b1,b4[3:2]};
    sample2 = {b2,b4[5:4]};
    sample3 = {b3,b4[7:6]};
  endfunction


  function bit infer_line_width(
    input bit [5:0] dt,
    input int unsigned payload_size,
    input line_type_e line_type,
    output int unsigned line_width,
    output string error_msg
  );
    line_width = 0;
    error_msg = "";

    if(payload_size == 0) begin
      error_msg = "Payload is empty";
      return 0;
    end

    case(dt)
      DT_YUV420_8,
      DT_YUV420_8_CSPS: begin
        if(line_type == ODD_LINE)
          line_width = payload_size;
        else if(line_type == EVEN_LINE) begin
          if((payload_size % 4) != 0) begin
            error_msg = "YUV420 8-bit even payload is not a multiple of 4";
            return 0;
          end
          line_width = payload_size/2;
        end
        else begin
          error_msg = "YUV420 8-bit requires line parity";
          return 0;
        end
      end

      DT_YUV420_10,
      DT_YUV420_10_CSPS: begin
        if((payload_size % 5) != 0) begin
          error_msg = "YUV420 10-bit payload is not a multiple of 5";
          return 0;
        end
        if(line_type == ODD_LINE)
          line_width = (payload_size/5)*4;
        else if(line_type == EVEN_LINE)
          line_width = (payload_size/5)*2;
        else begin
          error_msg = "YUV420 10-bit requires line parity";
          return 0;
        end
      end

      DT_YUV420_8_LEGACY: begin
        if((line_type != ODD_LINE) && (line_type != EVEN_LINE)) begin
          error_msg = "Legacy YUV420 requires line parity";
          return 0;
        end
        if((payload_size % 3) != 0) begin
          error_msg = "Legacy YUV420 payload is not a multiple of 3";
          return 0;
        end
        line_width = (payload_size/3)*2;
      end

      DT_YUV422_8: begin
        if((payload_size % 4) != 0) begin
          error_msg = "YUV422 8-bit payload is not a multiple of 4";
          return 0;
        end
        line_width = (payload_size/4)*2;
      end

      DT_YUV422_10: begin
        if((payload_size % 5) != 0) begin
          error_msg = "YUV422 10-bit payload is not a multiple of 5";
          return 0;
        end
        line_width = (payload_size/5)*2;
      end

      DT_RGB444,
      DT_RGB555,
      DT_RGB565: begin
        if((payload_size % 2) != 0) begin
          error_msg = "16-bit container payload is not a multiple of 2";
          return 0;
        end
        line_width = payload_size/2;
      end

      DT_RGB666: begin
        if((payload_size % 9) != 0) begin
          error_msg = "RGB666 payload is not a multiple of 9";
          return 0;
        end
        line_width = (payload_size/9)*4;
      end

      DT_RGB888: begin
        if((payload_size % 3) != 0) begin
          error_msg = "RGB888 payload is not a multiple of 3";
          return 0;
        end
        line_width = payload_size/3;
      end

      DT_RAW6: begin
        if((payload_size % 3) != 0) begin
          error_msg = "RAW6 payload is not a multiple of 3";
          return 0;
        end
        line_width = (payload_size/3)*4;
      end

      DT_RAW7: begin
        if((payload_size % 7) != 0) begin
          error_msg = "RAW7 payload is not a multiple of 7";
          return 0;
        end
        line_width = (payload_size/7)*8;
      end

      DT_RAW8:
        line_width = payload_size;

      DT_RAW10: begin
        if((payload_size % 5) != 0) begin
          error_msg = "RAW10 payload is not a multiple of 5";
          return 0;
        end
        line_width = (payload_size/5)*4;
      end

      DT_RAW12: begin
        if((payload_size % 3) != 0) begin
          error_msg = "RAW12 payload is not a multiple of 3";
          return 0;
        end
        line_width = (payload_size/3)*2;
      end

      DT_RAW14: begin
        if((payload_size % 7) != 0) begin
          error_msg = "RAW14 payload is not a multiple of 7";
          return 0;
        end
        line_width = (payload_size/7)*4;
      end

      default: begin
        error_msg = $sformatf("Unsupported data type 0x%02h",dt);
        return 0;
      end
    endcase

    return line_width != 0;
  endfunction


  function bit unpack(
    input bit [5:0] dt,
    input byte unsigned payload[$],
    input int unsigned line_width,
    input line_type_e line_type,
    ref bit [23:0]pixels[],
    ref bit [9:0] y_samples[],
    ref bit [9:0] u_samples[],
    ref bit [9:0] v_samples[],
    output string error_msg
  );
    int unsigned expected_size;
    int unsigned payload_index;
    int unsigned bit_index;
    bit [9:0] sample0;
    bit [9:0] sample1;
    bit [9:0] sample2;
    bit [9:0] sample3;
    bit [71:0] rgb666_group;

    clear_outputs(pixels,y_samples,u_samples,v_samples);
    error_msg = "";

    if(line_width == 0) begin
      error_msg = "Line width must be greater than zero";
      return 0;
    end

    case(dt)
      DT_YUV420_8,
      DT_YUV420_8_CSPS: begin
        if((line_width % 2) != 0 ||
           ((line_type != ODD_LINE) && (line_type != EVEN_LINE))) begin
          error_msg = "YUV420 8-bit requires even width and line parity";
          return 0;
        end
        expected_size = (line_type == ODD_LINE) ? line_width
                                                 : 2*line_width;
      end

      DT_YUV420_10,
      DT_YUV420_10_CSPS: begin
        if(((line_type != ODD_LINE) && (line_type != EVEN_LINE)) ||
           ((line_type == ODD_LINE) && ((line_width % 4) != 0)) ||
           ((line_type == EVEN_LINE) && ((line_width % 2) != 0))) begin
          error_msg = "YUV420 10-bit width is incompatible with line parity";
          return 0;
        end
        expected_size = (line_type == ODD_LINE) ? (5*line_width)/4
                                                 : (5*line_width)/2;
      end

      DT_YUV420_8_LEGACY: begin
        if((line_width % 2) != 0 ||
           ((line_type != ODD_LINE) && (line_type != EVEN_LINE))) begin
          error_msg = "Legacy YUV420 requires even width and line parity";
          return 0;
        end
        expected_size = (3*line_width)/2;
      end

      DT_YUV422_8: begin
        if((line_width % 2) != 0) begin
          error_msg = "YUV422 8-bit width must be even";
          return 0;
        end
        expected_size = 2*line_width;
      end

      DT_YUV422_10: begin
        if((line_width % 2) != 0) begin
          error_msg = "YUV422 10-bit width must be even";
          return 0;
        end
        expected_size = (5*line_width)/2;
      end

      DT_RGB444,
      DT_RGB555,
      DT_RGB565:
        expected_size = 2*line_width;

      DT_RGB666: begin
        if((line_width % 4) != 0) begin
          error_msg = "RGB666 width must be a multiple of 4";
          return 0;
        end
        expected_size = (9*line_width)/4;
      end

      DT_RGB888:
        expected_size = 3*line_width;

      DT_RAW6: begin
        if((line_width % 4) != 0) begin
          error_msg = "RAW6 width must be a multiple of 4";
          return 0;
        end
        expected_size = (3*line_width)/4;
      end

      DT_RAW7: begin
        if((line_width % 8) != 0) begin
          error_msg = "RAW7 width must be a multiple of 8";
          return 0;
        end
        expected_size = (7*line_width)/8;
      end

      DT_RAW8:
        expected_size = line_width;

      DT_RAW10: begin
        if((line_width % 4) != 0) begin
          error_msg = "RAW10 width must be a multiple of 4";
          return 0;
        end
        expected_size = (5*line_width)/4;
      end

      DT_RAW12: begin
        if((line_width % 2) != 0) begin
          error_msg = "RAW12 width must be even";
          return 0;
        end
        expected_size = (3*line_width)/2;
      end

      DT_RAW14: begin
        if((line_width % 4) != 0) begin
          error_msg = "RAW14 width must be a multiple of 4";
          return 0;
        end
        expected_size = (7*line_width)/4;
      end

      default: begin
        error_msg = $sformatf("Unsupported data type 0x%02h",dt);
        return 0;
      end
    endcase

    if(payload.size() != expected_size) begin
      error_msg = $sformatf("Expected %0d payload bytes, received %0d",
                            expected_size,payload.size());
      return 0;
    end

    case(dt)
      DT_YUV420_8,
      DT_YUV420_8_CSPS: begin
        y_samples = new[line_width];
        if(line_type == ODD_LINE) begin
          foreach(y_samples[i])
            y_samples[i] = {2'b00,payload[i]};
        end
        else begin
          u_samples = new[line_width/2];
          v_samples = new[line_width/2];
          for(int pair = 0; pair < line_width/2; pair++) begin
            payload_index = pair*4;
            u_samples[pair] = {2'b00,payload[payload_index]};
            y_samples[2*pair] = {2'b00,payload[payload_index+1]};
            v_samples[pair] = {2'b00,payload[payload_index+2]};
            y_samples[2*pair+1] = {2'b00,payload[payload_index+3]};
          end
        end
      end

      DT_YUV420_10,
      DT_YUV420_10_CSPS: begin
        y_samples = new[line_width];
        if(line_type == ODD_LINE) begin
          for(int pixel = 0; pixel < line_width; pixel += 4) begin
            payload_index = (pixel/4)*5;
            unpack_4x10bit(payload[payload_index],payload[payload_index+1],
                          payload[payload_index+2],payload[payload_index+3],
                          payload[payload_index+4],sample0,sample1,
                          sample2,sample3);
            y_samples[pixel] = sample0;
            y_samples[pixel+1] = sample1;
            y_samples[pixel+2] = sample2;
            y_samples[pixel+3] = sample3;
          end
        end
        else begin
          u_samples = new[line_width/2];
          v_samples = new[line_width/2];
          for(int pair = 0; pair < line_width/2; pair++) begin
            payload_index = pair*5;
            unpack_4x10bit(payload[payload_index],payload[payload_index+1],
                          payload[payload_index+2],payload[payload_index+3],
                          payload[payload_index+4],sample0,sample1,
                          sample2,sample3);
            u_samples[pair] = sample0;
            y_samples[2*pair] = sample1;
            v_samples[pair] = sample2;
            y_samples[2*pair+1] = sample3;
          end
        end
      end

      DT_YUV420_8_LEGACY: begin
        y_samples = new[line_width];
        if(line_type == ODD_LINE)
          u_samples = new[line_width/2];
        else
          v_samples = new[line_width/2];

        for(int pair = 0; pair < line_width/2; pair++) begin
          payload_index = pair*3;
          if(line_type == ODD_LINE)
            u_samples[pair] = {2'b00,payload[payload_index]};
          else
            v_samples[pair] = {2'b00,payload[payload_index]};
          y_samples[2*pair] = {2'b00,payload[payload_index+1]};
          y_samples[2*pair+1] = {2'b00,payload[payload_index+2]};
        end
      end

      DT_YUV422_8: begin
        y_samples = new[line_width];
        u_samples = new[line_width/2];
        v_samples = new[line_width/2];
        for(int pair = 0; pair < line_width/2; pair++) begin
          payload_index = pair*4;
          u_samples[pair] = {2'b00,payload[payload_index]};
          y_samples[2*pair] = {2'b00,payload[payload_index+1]};
          v_samples[pair] = {2'b00,payload[payload_index+2]};
          y_samples[2*pair+1] = {2'b00,payload[payload_index+3]};
        end
      end

      DT_YUV422_10: begin
        y_samples = new[line_width];
        u_samples = new[line_width/2];
        v_samples = new[line_width/2];
        for(int pair = 0; pair < line_width/2; pair++) begin
          payload_index = pair*5;
          unpack_4x10bit(payload[payload_index],payload[payload_index+1],
                        payload[payload_index+2],payload[payload_index+3],
                        payload[payload_index+4],sample0,sample1,
                        sample2,sample3);
          u_samples[pair] = sample0;
          y_samples[2*pair] = sample1;
          v_samples[pair] = sample2;
          y_samples[2*pair+1] = sample3;
        end
      end

      DT_RGB444: begin
        pixels = new[line_width];
        foreach(pixels[i]) begin
          payload_index = i*2;
          if(payload[payload_index][6:5] != 2'b10 ||
             payload[payload_index][0] != 1'b1 ||
             payload[payload_index+1][3] != 1'b1) begin
            error_msg = $sformatf("RGB444 fixed-bit violation at pixel %0d",i);
            return 0;
          end
          pixels[i][11:8] = payload[payload_index+1][7:4];
          pixels[i][7:5] = payload[payload_index+1][2:0];
          pixels[i][4] = payload[payload_index][7];
          pixels[i][3:0] = payload[payload_index][4:1];
        end
      end

      DT_RGB555: begin
        pixels = new[line_width];
        foreach(pixels[i]) begin
          payload_index = i*2;
          if(payload[payload_index][5] != 1'b0) begin
            error_msg = $sformatf("RGB555 fixed-bit violation at pixel %0d",i);
            return 0;
          end
          pixels[i][14:7] = payload[payload_index+1];
          pixels[i][6:5] = payload[payload_index][7:6];
          pixels[i][4:0] = payload[payload_index][4:0];
        end
      end

      DT_RGB565: begin
        pixels = new[line_width];
        foreach(pixels[i]) begin
          payload_index = i*2;
          pixels[i][15:0] = {payload[payload_index+1],
                             payload[payload_index]};
        end
      end

      DT_RGB666: begin
        pixels = new[line_width];
        for(int pixel = 0; pixel < line_width; pixel += 4) begin
          rgb666_group = '0;
          payload_index = (pixel/4)*9;
          for(int byte_index = 0; byte_index < 9; byte_index++)
            rgb666_group[byte_index*8 +: 8] =
              payload[payload_index+byte_index];
          pixels[pixel] = {6'b0,rgb666_group[17:0]};
          pixels[pixel+1] = {6'b0,rgb666_group[35:18]};
          pixels[pixel+2] = {6'b0,rgb666_group[53:36]};
          pixels[pixel+3] = {6'b0,rgb666_group[71:54]};
        end
      end

      DT_RGB888: begin
        pixels = new[line_width];
        foreach(pixels[i]) begin
          payload_index = i*3;
          pixels[i] = {payload[payload_index+2],payload[payload_index+1],
                       payload[payload_index]};
        end
      end

      DT_RAW6,
      DT_RAW7: begin
        int unsigned sample_bits;
        sample_bits = (dt == DT_RAW6) ? 6 : 7;
        pixels = new[line_width];
        bit_index = 0;
        foreach(pixels[i]) begin
          for(int sample_bit = 0; sample_bit < sample_bits; sample_bit++) begin
            pixels[i][sample_bit] =
              payload[bit_index/8][bit_index%8];
            bit_index++;
          end
        end
      end

      DT_RAW8: begin
        pixels = new[line_width];
        foreach(pixels[i])
          pixels[i][7:0] = payload[i];
      end

      DT_RAW10: begin
        pixels = new[line_width];
        for(int pixel = 0; pixel < line_width; pixel += 4) begin
          payload_index = (pixel/4)*5;
          unpack_4x10bit(payload[payload_index],payload[payload_index+1],
                        payload[payload_index+2],payload[payload_index+3],
                        payload[payload_index+4],sample0,sample1,
                        sample2,sample3);
          pixels[pixel][9:0] = sample0;
          pixels[pixel+1][9:0] = sample1;
          pixels[pixel+2][9:0] = sample2;
          pixels[pixel+3][9:0] = sample3;
        end
      end

      DT_RAW12: begin
        pixels = new[line_width];
        for(int pixel = 0; pixel < line_width; pixel += 2) begin
          payload_index = (pixel/2)*3;
          pixels[pixel][11:0] = {payload[payload_index],
                                  payload[payload_index+2][3:0]};
          pixels[pixel+1][11:0] = {payload[payload_index+1],
                                    payload[payload_index+2][7:4]};
        end
      end

      DT_RAW14: begin
        pixels = new[line_width];
        for(int pixel = 0; pixel < line_width; pixel += 4) begin
          payload_index = (pixel/4)*7;
          pixels[pixel][13:0] = {payload[payload_index],
                                  payload[payload_index+4][5:0]};
          pixels[pixel+1][13:0] = {payload[payload_index+1],
                                    payload[payload_index+5][3:0],
                                    payload[payload_index+4][7:6]};
          pixels[pixel+2][13:0] = {payload[payload_index+2],
                                    payload[payload_index+6][1:0],
                                    payload[payload_index+5][7:4]};
          pixels[pixel+3][13:0] = {payload[payload_index+3],
                                    payload[payload_index+6][7:2]};
        end
      end
    endcase

    return 1;
  endfunction

endclass

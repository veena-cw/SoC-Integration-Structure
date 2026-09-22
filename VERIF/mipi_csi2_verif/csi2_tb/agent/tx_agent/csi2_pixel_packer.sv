// CSI-2 pixel packer with integrated RAW, RGB, and YUV payload generation.
class csi2_pixel_packer;
  //import csi2_pkg::*;
   function int get_bits(bit [5:0] dt);
	if((dt == DT_YUV420_8 )|| (dt == DT_YUV420_8_LEGACY) ||(dt == DT_YUV420_8_CSPS )|| (dt == DT_RGB444) || (dt == DT_RAW12))
	   return 12;
	else if((dt == DT_YUV420_10) || (dt == DT_RGB555) || (dt == DT_YUV420_10_CSPS))
	   return 15;
	else if((dt == DT_YUV422_8) ||(dt == DT_RGB565))
	   return 16;
	else
	   begin
	    case(dt)
		  DT_YUV422_10 : return 20;
		  DT_RGB666    : return 18;
		  DT_RGB888    : return 24;
		  DT_RAW6      : return 6;
          DT_RAW7      : return 7;
		  DT_RAW8      : return 8;
		  DT_RAW10     : return 10;
		  DT_RAW14     : return 14;
	    endcase
	   end
   endfunction

   function int get_pixels_per_group(
    bit [5:0] dt,
    line_type_e line_type
    );

    case (dt)

        // YUV420
        DT_YUV420_8,
        DT_YUV420_8_CSPS:
            return 2;

        DT_YUV420_10,
        DT_YUV420_10_CSPS:
            return 4;

        DT_YUV420_8_LEGACY:
            return 2;

        // YUV422
        DT_YUV422_8,
        DT_YUV422_10:
            return 2;

        // RGB
        DT_RGB444,
        DT_RGB555,
        DT_RGB565:
            return 1;

        DT_RGB666:
            return 4;

        DT_RGB888:
            return 1;

        // RAW
        DT_RAW6:
            return 4;

        DT_RAW7:
            return 8;

        DT_RAW8:
            return 1;

        DT_RAW10:
            return 4;

        DT_RAW12:
            return 2;

        DT_RAW14:
            return 4;

        default:
            return 0;

    endcase

   endfunction

   function automatic int get_bytes_per_group(
    bit [5:0] dt,
    line_type_e line_type
    );

    case (dt)

        // YUV420 8-bit
        DT_YUV420_8,
        DT_YUV420_8_CSPS: begin
            if (line_type == ODD_LINE)
                return 2;
            else
                return 4;
        end

        // YUV420 10-bit
        DT_YUV420_10,
        DT_YUV420_10_CSPS: begin
            if (line_type == ODD_LINE)
                return 5;
            else
                return 10;
        end

        // Legacy YUV420
        DT_YUV420_8_LEGACY:
            return 3;

        // YUV422
        DT_YUV422_8:
            return 4;

        DT_YUV422_10:
            return 5;

        // RGB
        DT_RGB444,
        DT_RGB555,
        DT_RGB565:
            return 2;

        DT_RGB666:
            return 9;

        DT_RGB888:
            return 3;

        // RAW
        DT_RAW6:
            return 3;

        DT_RAW7:
            return 7;

        DT_RAW8:
            return 1;

        DT_RAW10:
            return 5;

        DT_RAW12:
            return 3;

        DT_RAW14:
            return 7;

        default:
            return 0;

    endcase

   endfunction


// Four 10-bit component samples become five bytes.
function void append_4x10bit(
    bit [9:0] sample0,
    bit [9:0] sample1,
    bit [9:0] sample2,
    bit [9:0] sample3,
    ref byte unsigned payload[$]
);
  payload.push_back(sample0[9:2]);
  payload.push_back(sample1[9:2]);
  payload.push_back(sample2[9:2]);
  payload.push_back(sample3[9:2]);
  payload.push_back({sample3[1:0], sample2[1:0],
                     sample1[1:0], sample0[1:0]});
endfunction


function void check_8bit_samples(
    string component,
    bit [9:0] samples[]
);
  foreach (samples[i]) begin
    if (samples[i][9:8] != 2'b00) begin
      `uvm_fatal("YUV_8BIT",
                 $sformatf("%s[%0d]=0x%03h exceeds 8 bits",
                           component, i, samples[i]))
    end
  end
endfunction


// DT 0x1E: YUV422 8-bit
// Byte order per two pixels: U0, Y0, V0, Y1.
function void pack_yuv422_8(
    bit [9:0] y_samples[],
    bit [9:0] u_samples[],
    bit [9:0] v_samples[],
    ref byte unsigned payload[$]
);
  if ((y_samples.size() == 0) || ((y_samples.size() % 2) != 0)) begin
    `uvm_fatal("YUV422_8", "Y count must be non-zero and even")
  end

  if ((u_samples.size() != y_samples.size()/2) ||
      (v_samples.size() != y_samples.size()/2)) begin
    `uvm_fatal("YUV422_8", "Required sizes are Y=N, U=N/2, V=N/2")
  end

  check_8bit_samples("Y", y_samples);
  check_8bit_samples("U", u_samples);
  check_8bit_samples("V", v_samples);

  for (int pair = 0; pair < u_samples.size(); pair++) begin
    payload.push_back(u_samples[pair][7:0]);
    payload.push_back(y_samples[2*pair][7:0]);
    payload.push_back(v_samples[pair][7:0]);
    payload.push_back(y_samples[2*pair + 1][7:0]);
  end
endfunction


// DT 0x1F: YUV422 10-bit
// Four samples U0,Y0,V0,Y1 -> 40 bits -> five bytes.
function void pack_yuv422_10(
    bit [9:0] y_samples[],
    bit [9:0] u_samples[],
    bit [9:0] v_samples[],
    ref byte unsigned payload[$]
);
  if ((y_samples.size() == 0) || ((y_samples.size() % 2) != 0)) begin
    `uvm_fatal("YUV422_10", "Y count must be non-zero and even")
  end

  if ((u_samples.size() != y_samples.size()/2) ||
      (v_samples.size() != y_samples.size()/2)) begin
    `uvm_fatal("YUV422_10", "Required sizes are Y=N, U=N/2, V=N/2")
  end

  for (int pair = 0; pair < u_samples.size(); pair++) begin
    append_4x10bit(u_samples[pair],
                   y_samples[2*pair],
                   v_samples[pair],
                   y_samples[2*pair + 1],
                   payload);
  end
endfunction


// DT 0x18: YUV420 8-bit
// Odd line  : Y only.
// Even line : U0,Y0,V0,Y1 repeated.
function void pack_yuv420_8(
    line_type_e line_type,
    bit [9:0] y_samples[],
    bit [9:0] u_samples[],
    bit [9:0] v_samples[],
    ref byte unsigned payload[$]
);
  if (!(line_type inside {ODD_LINE, EVEN_LINE})) begin
    `uvm_fatal("YUV420_8", "line_type must be ODD_LINE or EVEN_LINE")
  end

  if ((y_samples.size() == 0) || ((y_samples.size() % 2) != 0)) begin
    `uvm_fatal("YUV420_8", "Y count must be non-zero and even")
  end

  check_8bit_samples("Y", y_samples);
  check_8bit_samples("U", u_samples);
  check_8bit_samples("V", v_samples);

  if (line_type == ODD_LINE) begin
    if ((u_samples.size() != 0) || (v_samples.size() != 0)) begin
      `uvm_fatal("YUV420_8", "Odd line must contain only Y samples")
    end

    foreach (y_samples[i]) begin
      payload.push_back(y_samples[i][7:0]);
    end
  end
  else begin
    if ((u_samples.size() != y_samples.size()/2) ||
        (v_samples.size() != y_samples.size()/2)) begin
      `uvm_fatal("YUV420_8",
                 "Even-line sizes must be Y=N, U=N/2, V=N/2")
    end

    for (int pair = 0; pair < u_samples.size(); pair++) begin
      payload.push_back(u_samples[pair][7:0]);
      payload.push_back(y_samples[2*pair][7:0]);
      payload.push_back(v_samples[pair][7:0]);
      payload.push_back(y_samples[2*pair + 1][7:0]);
    end
  end
endfunction


// DT 0x1C: same bytes as YUV420 8-bit; CSPS changes chroma siting.
function void pack_yuv420_8_csps(
    line_type_e line_type,
    bit [9:0] y_samples[],
    bit [9:0] u_samples[],
    bit [9:0] v_samples[],
    ref byte unsigned payload[$]
);
  pack_yuv420_8(line_type,
                 y_samples, u_samples, v_samples, payload);
endfunction


// DT 0x19: YUV420 10-bit
// Odd line  : four Y samples -> five bytes.
// Even line : U0,Y0,V0,Y1 -> five bytes per two pixels.
function void pack_yuv420_10(
    line_type_e line_type,
    bit [9:0] y_samples[],
    bit [9:0] u_samples[],
    bit [9:0] v_samples[],
    ref byte unsigned payload[$]
);
  if (!(line_type inside {ODD_LINE, EVEN_LINE})) begin
    `uvm_fatal("YUV420_10", "line_type must be ODD_LINE or EVEN_LINE")
  end

  if (y_samples.size() == 0) begin
    `uvm_fatal("YUV420_10", "Y count must be non-zero")
  end

  if (line_type == ODD_LINE) begin
    if ((y_samples.size() % 4) != 0) begin
      `uvm_fatal("YUV420_10", "Odd-line Y count must be a multiple of 4")
    end

    if ((u_samples.size() != 0) || (v_samples.size() != 0)) begin
      `uvm_fatal("YUV420_10", "Odd line must contain only Y samples")
    end

    for (int index = 0; index < y_samples.size(); index += 4) begin
      append_4x10bit(y_samples[index],
                     y_samples[index + 1],
                     y_samples[index + 2],
                     y_samples[index + 3],
                     payload);
    end
  end
  else begin
    if ((y_samples.size() % 2) != 0) begin
      `uvm_fatal("YUV420_10", "Even-line Y count must be even")
    end

    if ((u_samples.size() != y_samples.size()/2) ||
        (v_samples.size() != y_samples.size()/2)) begin
      `uvm_fatal("YUV420_10",
                 "Even-line sizes must be Y=N, U=N/2, V=N/2")
    end

    for (int pair = 0; pair < u_samples.size(); pair++) begin
      append_4x10bit(u_samples[pair],
                     y_samples[2*pair],
                     v_samples[pair],
                     y_samples[2*pair + 1],
                     payload);
    end
  end
endfunction


// DT 0x1D: same bytes as YUV420 10-bit; CSPS changes chroma siting.
function void pack_yuv420_10_csps(
    line_type_e line_type,
    bit [9:0] y_samples[],
    bit [9:0] u_samples[],
    bit [9:0] v_samples[],
    ref byte unsigned payload[$]
);
  pack_yuv420_10(line_type,
                  y_samples, u_samples, v_samples, payload);
endfunction


// DT 0x1A: Legacy YUV420 8-bit
// Odd line  : U0,Y0,Y1 repeated.
// Even line : V0,Y0,Y1 repeated.
function void pack_yuv420_8_legacy(
    line_type_e line_type,
    bit [9:0] y_samples[],
    bit [9:0] u_samples[],
    bit [9:0] v_samples[],
    ref byte unsigned payload[$]
);
  if (!(line_type inside {ODD_LINE, EVEN_LINE})) begin
    `uvm_fatal("YUV420_LEGACY", "line_type must be ODD_LINE or EVEN_LINE")
  end

  if ((y_samples.size() == 0) || ((y_samples.size() % 2) != 0)) begin
    `uvm_fatal("YUV420_LEGACY", "Y count must be non-zero and even")
  end

  check_8bit_samples("Y", y_samples);
  check_8bit_samples("U", u_samples);
  check_8bit_samples("V", v_samples);

  if (line_type == ODD_LINE) begin
    if ((u_samples.size() != y_samples.size()/2) ||
        (v_samples.size() != 0)) begin
      `uvm_fatal("YUV420_LEGACY",
                 "Odd-line sizes must be Y=N, U=N/2, V=0")
    end

    for (int pair = 0; pair < u_samples.size(); pair++) begin
      payload.push_back(u_samples[pair][7:0]);
      payload.push_back(y_samples[2*pair][7:0]);
      payload.push_back(y_samples[2*pair + 1][7:0]);
    end
  end
  else begin
    if ((u_samples.size() != 0) ||
        (v_samples.size() != y_samples.size()/2)) begin
      `uvm_fatal("YUV420_LEGACY",
                 "Even-line sizes must be Y=N, U=0, V=N/2")
    end

    for (int pair = 0; pair < v_samples.size(); pair++) begin
      payload.push_back(v_samples[pair][7:0]);
      payload.push_back(y_samples[2*pair][7:0]);
      payload.push_back(y_samples[2*pair + 1][7:0]);
    end
  end
endfunction


   function void pixel(
       bit [5:0] dt,
       bit [23:0] pixels[],
       bit [9:0] y_samples[],
       bit [9:0] u_samples[],
       bit [9:0] v_samples[],
       line_type_e line_type,
       ref byte unsigned payload[$]
   );
     int unsigned no_of_bits   = get_bits(dt);
	 int unsigned no_of_pixels = get_pixels_per_group(dt,line_type);
	 int unsigned no_of_bytes  = get_bytes_per_group(dt,line_type);
     payload.delete();
      case(dt)
	      DT_YUV420_8       : pack_yuv420_8(line_type,y_samples, u_samples, v_samples, payload);

		  DT_YUV420_10      : pack_yuv420_10(line_type,y_samples, u_samples, v_samples, payload);

		  DT_YUV420_8_LEGACY: pack_yuv420_8_legacy(line_type,y_samples, u_samples, v_samples, payload);

		  DT_YUV420_8_CSPS  : pack_yuv420_8_csps(line_type,y_samples, u_samples, v_samples, payload);

		  DT_YUV420_10_CSPS : pack_yuv420_10_csps(line_type,y_samples, u_samples, v_samples, payload);

		  DT_YUV422_8       : pack_yuv422_8(y_samples, u_samples, v_samples, payload);

		  DT_YUV422_10      : pack_yuv422_10(y_samples, u_samples, v_samples, payload);

		  DT_RGB444         :begin
		                      for(int i =0 ; i<pixels.size() ; i=i+no_of_pixels)
							   begin
							    payload.push_back({pixels[i][4],1'b1,1'b0,pixels[i][3:0],1'b1});
								payload.push_back({pixels[i][11:8],1'b1,pixels[i][7:5]});
							   end
                             end
		  DT_RGB555         :begin
		                      for(int i =0 ; i<pixels.size() ; i=i+no_of_pixels)
							    begin
                                  payload.push_back({pixels[i][6:5],1'b0,pixels[i][4:0]});
								  payload.push_back(pixels[i][14:7]);
                                end
                             end
		  DT_RGB666         : begin
							   logic [71:0] group;

								if ((pixels.size() % 4) != 0)
								`uvm_fatal("RGB666","RGB666 pixel count must be a multiple of 4")

								for (int i = 0; i < pixels.size(); i += 4) begin
									 group ={
											pixels[i+3][17:0],
											pixels[i+2][17:0],
											pixels[i+1][17:0],
											pixels[i+0][17:0]
											};

								for (int j = 0; j < 9; j++)
									payload.push_back(group[j*8 +: 8]);
							  end
                              end
		  DT_RGB565         : begin
		                      for(int i = 0;i<pixels.size();i=i+no_of_pixels)
							     begin
								   for(int j=0;j<no_of_bytes;j++)
								     payload.push_back(pixels[i][j*8 +: 8]);
								 end
						      end
		  DT_RGB888         : begin
		                       for(int i = 0;i<pixels.size();i=i+no_of_pixels)
							     begin
								   for(int j=0;j<no_of_bytes;j++)
								     payload.push_back(pixels[i][j*8 +: 8]);
								 end
						      end
		  DT_RAW6           : begin
		                        byte unsigned temp_byte;
								int unsigned bit_counter = 0;
                                for(int i =0 ; i<pixels.size() ; i=i+(no_of_pixels))
                                  begin
                                    for(int j=0;j<no_of_pixels;j++)
                                    begin
									for(int k=0;k<no_of_bits;k++)
									  begin
									  temp_byte[bit_counter] = pixels[i+j][k];
                                      bit_counter++;
                                      if(bit_counter == 8)
                                        begin
										payload.push_back(temp_byte);
										bit_counter = 0;
										temp_byte = 8'd0;
									    end
									 end
									end
								end
                              end

          DT_RAW7           :begin
		                        byte unsigned temp_byte;
								int unsigned bit_counter = 0;
                                for(int i =0 ; i < pixels.size() ; i=i+(no_of_pixels))
                                  begin
                                    for(int j=0;j<no_of_pixels;j++)
                                    begin
									for(int k=0;k<no_of_bits;k++)
									  begin
									  temp_byte[bit_counter] = pixels[i+j][k];
                                      bit_counter++;
                                      if(bit_counter == 8)
                                        begin
										payload.push_back(temp_byte);
										bit_counter = 0;
										temp_byte = 8'd0;
									    end
									 end
									end
								end
                              end
		  DT_RAW8           : begin
		                       for(int i=0;i<pixels.size();i+=no_of_pixels)
							     payload.push_back(pixels[i][7:0]);
							  end

		  DT_RAW10          : begin
                              for (int i = 0; i < pixels.size(); i += no_of_pixels)
					           begin
							     for(int j =0 ;j<no_of_bytes;j++)
								 begin
                                   if(j < no_of_bytes-1)
								 begin
                                 payload.push_back(pixels[i+j][9:2]);
							    // payload.push_back(pixels[i+1][9:2]);
                                // payload.push_back(pixels[i+2][9:2]);
                                // payload.push_back(pixels[i+3][9:2]);
								end
								else
								begin
                                 payload.push_back({pixels[i+j-1][1:0],
                                                  pixels[i+j-2][1:0],
                                                  pixels[i+j-3][1:0],
                                                  pixels[i+j-4][1:0]});
                                end
                               end

                              end
                              end
		  DT_RAW12          : begin
		                       for(int i=0;i<pixels.size();i=i+no_of_pixels)
							      begin
                                    for(int j=0;j<no_of_bytes;j++)
								    begin
									 if(j < no_of_bytes - 1)
                                       payload.push_back(pixels[i+j][11:4]);
									 else
                                       payload.push_back({pixels[i+j-1][3:0],pixels[i+j-2][3:0]});
									end
								 end
							 end

		  DT_RAW14          : begin
                                for(int i=0;i<pixels.size();i=i+no_of_pixels)
                                  begin
                                    for(int j=0;j<no_of_bytes;j++)
                                    begin
                                    if(j<4)
                                    payload.push_back(pixels[i+j][13:6]);
                                    else if(j==4)
                                      payload.push_back({pixels[i+j-3][1:0],pixels[i+j-4][5:0]});
                                    else if(j==5)
                                      payload.push_back({pixels[i+j-3][3:0],pixels[i+j-4][5:2]});
                                    else if(j==6)
                                      payload.push_back({pixels[i+j-3][5:0],pixels[i+j-4][5:4]});
                                    end
                                    end
                             end
	 endcase
    endfunction
endclass



//`define RGB888           6'h24
//`define RGB666           6'h23 
//`define RGB565           6'h22
//`define RGB555           6'h21
//`define RGB444           6'h20
//`define RAW6             6'h28
`define RAW7             6'h29
//`define RAW8             6'h2a
//`define RAW10            6'h2b
//`define RAW12            6'h2c
//`define RAW14            6'h2d
//`define RAW16            6'h2e
//`define RAW20            6'h2f
//`define RAW24            6'h27
//`define RAW28            6'h26
//`define LEGACY_YUV420_8b 6'h1a
//`define YUV420_8b        6'h18 | 6'h1c
//`define YUV420_10b       6'h19 | 6'h1d
//`define YUV422_8b        6'h1e
//`define YUV422_10b       6'h1f
//`define RxALP_LP_SELECT  1'b1


`ifdef RGB888
`define wstrb  8
`define wdata  128           //write data (pixel data) from AXI master via the write data channel
`define rx_pixel_data  24
`define axi_data_width 24
`define axi_depth      12       //9

`elsif RGB666
`define  wstrb  16           //write data strobes from AXI master via the write data channel
`define wdata  128           //write data (pixel data) from AXI master via the write data channel
`define rx_pixel_data  72
`define axi_data_width 72
`define axi_depth      12     //9

`elsif RGB565
`define  wstrb  8            //write data strobes from AXI master via the write data channel
`define  wdata  64           //write data (pixel data) from AXI master via the write data channel
`define rx_pixel_data  16
`define axi_data_width 16
`define axi_depth      12      //9

`elsif RGB555
`define wstrb  8             //write data strobes from AXI master via the write data channel
`define wdata  64            //write data (pixel data) from AXI master via the write data channel
`define rx_pixel_data  15
`define axi_data_width 15
`define axi_depth      12     //9

`elsif RGB444
`define wstrb  8             //write data strobes from AXI master via the write data channel
`define wdata  64            //write data (pixel data) from AXI master via the write data channel
`define rx_pixel_data  12
`define axi_data_width 12
`define axi_depth      12     //9

`elsif RAW6
`define  wstrb  3            //write data strobes from AXI master via the write data channel
`define  wdata  32           //write data (pixel data) from AXI master via the write data channel
`define rx_pixel_data  24
`define axi_data_width 24
`define axi_depth      12    //9

`elsif RAW7
`define  wstrb  7            //write data strobes from AXI master via the write data channel
`define wdata   64           //write data (pixel data) from AXI master via the write data channel
`define rx_pixel_data  56
`define axi_data_width 56
`define axi_depth      12   //9

`elsif RAW10 
`define wstrb  5                 //write data strobes from AXI master via the write data channel
`define wdata  64                 //write data (pixel data) from AXI master via the write data channel
`define rx_pixel_data  40
`define axi_data_width 40
`define axi_depth      12    //9


`elsif RAW12
`define wstrb  3          //write data strobes from AXI master via the write data channel
`define wdata  64          //write data (pixel data) from AXI master via the write data channel
`define rx_pixel_data  24
`define axi_data_width 24
`define axi_depth      12   //9

`elsif RAW14
`define wstrb  8              //write data strobes from AXI master via the write data channel
`define wdata  64              //write data (pixel data) from AXI master via the write data channel
`define rx_pixel_data 56
`define axi_data_width 56
`define axi_depth      12   //9


`elsif RAW16 
`define wstrb  8           //write data strobes from AXI master via the write data channel
`define wdata  64           //write data (pixel data) from AXI master via the write data channel
`define rx_pixel_data  16
`define axi_data_width 16
`define axi_depth      12   //9

`elsif RAW20 
`define  wstrb  16           //write data strobes from AXI master via the write data channel
`define  wdata  128           //write data (pixel data) from AXI master via the write data channel
`define rx_pixel_data  40
`define axi_data_width 40
`define axi_depth      12   //9

`elsif RAW24 
`define wstrb  12              //write data strobes from AXI master via the write data channel
`define wdata  128              //write data (pixel data) from AXI master via the write data channel
`define rx_pixel_data  24
`define axi_data_width 24
`define axi_depth      12   //9

`elsif RAW28 
`define wstrb  14            //write data strobes from AXI master via the write data channel
`define wdata  128            //write data (pixel data) from AXI master via the write data channel
`define rx_pixel_data  56
`define axi_data_width 56
`define axi_depth      12   //9

`elseif  RAW8
`define wstrb  1       //write data strobes from AXI master via the write data channel
`define wdata  8       //write data (pixel data) from AXI master via the write data channel
`define rx_pixel_data  8
`define axi_data_width 8
`define axi_depth      12  //9//512

`elseif LEGACY_YUV420_8b
`define wstrb        6 //write data strobes from AXI master via the write data channel
`define wdata         64//write data (pixel data) from AXI master via the write data channel
`define rx_pixel_data  48
`define axi_data_width 48
`define axi_depth      12 //9 //512

`elseif YUV420_8b
`define wstrb          8    //write data strobes from AXI master via the write data channel
`define wdata          64   //write data (pixel data) from AXI master via the write data channel
`define rx_pixel_data  64
`define axi_data_width 64
`define axi_depth      12 //9 //512

`elseif YUV420_10b
`define wstrb         10 //write data strobes from AXI master via the write data channel
`define wdata         128   //write data (pixel data) from AXI master via the write data channel
`define rx_pixel_data  80
`define axi_data_width 80
`define axi_depth      12   //9 //512

`elseif YUV422_8b
`define wstrb         8 //write data strobes from AXI master via the write data channel
`define wdata         64   //write data (pixel data) from AXI master via the write data channel
`define rx_pixel_data  64
`define axi_data_width 64
`define axi_depth      12  //9//512

`elseif YUV422_10b
`define wstrb         10 //write data strobes from AXI master via the write data channel
`define wdata         128 //write data (pixel data) from AXI master via the write data channel
`define rx_pixel_data  80
`define axi_data_width 80
`define axi_depth      12 //9//512


`elseif RxALP_LP_SELECT // ALP Mode
`define wstrb  2       //write data strobes from AXI master via the write data channel
`define wdata  16       //write data from AXI master via the write data channel
//`define rx_pixel_data  8
`define axi_data_width 16
`define axi_depth      12 //9//512

`else //ESCAPE MODE
`define wstrb  1       //write data strobes from AXI master via the write data channel
`define wdata  8       //write data from AXI master via the write data channel
//`define rx_pixel_data  8
`define axi_data_width 8
`define axi_depth      12 //9//512

`endif
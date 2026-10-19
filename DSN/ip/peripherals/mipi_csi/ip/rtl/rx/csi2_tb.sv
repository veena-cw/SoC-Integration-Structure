`include "ifdef.sv"
module tb_csi2_rx_top;
logic cphy_rxwordclkhs;                    //High-Speed Receive Word Clock
logic rxwordclkhs;
logic rxclkesc;                       //Escape Mode Receive Clock
logic rst_n;                          //Negative edge asynchronous reset signal
logic rxactivehs;                     //High-Speed Reception Active Signal
logic rxcalibrationprehs;             //Alternate Calibration Burst Being Received
logic rxerrcalhs;                     //High-Speed Receive Calibration Error
logic rxlpdtesc;                      //Escape Low-Power Data Receive mode
logic rxulpsesc;                      //Escape Ultra-Low Power (Receive) mode
logic rxvalidesc;                     //Escape Mode Receive Data Valid
logic direction;                      //Transmit/Receive Direction; direction = 0 --> Transmit Mode; direction = 1 ---> Receive Mode
logic stopstate;                      //Lane is in the Stop state
logic ulpsactivenot;                  //ULP State (not) Active - default - 1'b1 --> normal operation
logic errsoths;                       //Start-of-Transmission (SoT) Error
logic errsotsynchs;                   //Start-of-Transmission Synchronization Error
logic erresc;                         //Escape Entry Error
logic errsyncesc;                     //Low-Power Data Transmission Synchronization Error
logic errcontrol;                     //Control Error
logic errcontentionlp0;               //LP0 Contention Error
logic errcontentionlp1;               //LP1 Contention Error
logic rx_lane_sts_reg7;               //C-PHY lane status register seventh bit indicating the start of transmission 
logic rx_lane_sts_reg4;               //C-PHY lane status register fourth bit indicating the end of transmission 

  logic [1:0] rxcalibrationformat;      //Calibration Preamble Format Type
  logic [63:0] rxdatahs;                //HIGH speed Receive Data from all 4 lanes
  logic [3:0] rxinvalidcodehs;          //High-Speed Invalid Code Word Detection in RxDataHS[63:0] (from all 4 lanes)
  logic [3:0] rxvalidhs;                //High-Speed Receive Data Valid in RxDataHS[63:0] (from all 4 lanes)
  logic [3:0] rxsynchs;                 //Receiver Synchronization Observed in RxDataHS[63:0] (from all 4 lanes)
  logic [2:0] rxsynctypehs0;            //High-Speed Signal indicates the Sync Type in 16-bit width, 32-bit width and 64-bit width
  logic [2:0] rxsynctypehs1;            //High-Speed Signal indicates the Sync Type in 32-bit width and 64-bit width
  logic [2:0] rxsynctypehs2;            //High-Speed Signal indicates the Sync Type in 64-bit width
  logic [2:0] rxsynctypehs3;            //High-Speed Signal indicates the Sync Type in 64-bit width
  logic [3:0] rxalpvalidhs;             //Receiver ALP Code Observed
  logic [3:0] rxalpcode0;               //Receiver ALP Code Value --> 16/32/64 bit width – RxALPNibble0[3:0]
  logic [3:0] rxalpcode1;               //Receiver ALP LPDT Nibble Data --> 32/64 bit width – RxALPNibble1[3:0]
  logic [3:0] rxalpcode2;               //Receiver ALP LPDT Nibble Data --> 64 bit width – RxALPNibble2[3:0]
  logic [3:0] rxalpcode3;               //Receiver ALP LPDT Nibble Data --> 64 bit width – RxALPNibble3[3:0]
  logic [3:0] rxalpnibble0;             //Receiver ALP LPDT Nibble Data --> 16/32/64 bit width – RxALPNibble0[3:0]
  logic [3:0] rxalpnibble1;             //Receiver ALP LPDT Nibble Data --> 32/64 bit width – RxALPNibble1[3:0]
  logic [3:0] rxalpnibble2;             //Receiver ALP LPDT Nibble Data --> 64 bit width – RxALPNibble2[3:0]
  logic [3:0] rxalpnibble3;             //Receiver ALP LPDT Nibble Data --> 64 bit width – RxALPNibble3[3:0]
  logic [3:0] rxtriggeresc;             //Escape Mode Receive Trigger 0-3
  logic [7:0] rxdataesc;                //Escape Mode Receive Data
//input rx_lane_sts_reg7,               //received from c-phy register 
//input rx_lane_sts_reg4,               //received from c-phy register 

  //outputs
logic turnrequest;             //Turn Around Request - 1'b0
logic turndisable;             //Disable Turn-around - 1'b1
logic forcerxmode;             //Force Lane Module Into Receive mode / Wait for Stop state - 1'b1
//logic forcetxstopmode;         //Force Lane Module Into Transmit mode / Generate Stop state - 1'b0
logic enable;                  //Enable Lane Module - 1'b1
//logic txalp_lpselect;          //Transmitter ALP or LP Select - 1'b0 - LP Signaling; 1'b1 - ALP Signaling; default - 1'b0 
logic rxalp_lpselect;          //Receiver ALP or LP Select - 1'b0 - LP Signaling; 1'b1 - ALP Signaling; default - 1'b0 
  logic [1:0] rxdatawidthhs;     //High-Speed Receive Data Width Select; 2'h1 - 16 bit; 2'h2 - 32 bit; 2'h3 - 64-bit; 2'h1 by default 
  logic [2:0] alpwakestate;      //ALP-Pause Wake Wire State - 3'h0 as it is uncommon for Rx only CSI2 designs
  logic [31:0] lane_configuration;      //32'h0 ---> 1 lane, 32'h1 ----> 2 lanes, 32'h2 ---> 4 lanes
  logic [31:0] mode_selection;          //32'h0 ---> c-phy, 32'h1 ---> d-phy
//axi inputs
logic aclk;                         //clock in AXI
logic areset_n;                     //reset in AXI
logic rd_rst_n;
logic wready;                       //ready indicator from AXI slave in write data channel
//Master write response channel port list
//input [`ID-1:0] bid,                 //
  logic [1:0]  bresp;                  //response indicator from AXI slave in write response channel
logic bvalid;                        //valid indicator from AXI slave in write response channel
//master AW channel port list
logic awready;        

  //master write data channel port list

  //axi outputs
logic wvalid;                //valid indicator from master in axi write data channel
logic wlast;                 //last write data from AXI master in axi write data channel
  logic [`wdata-1:0] wdata;  //write data (pixel data) from AXI master via the write data channel
  logic   [`wstrb-1:0] wstrb;  //write data strobes from AXI master via the write data channel  
//output logic `wdata, //write data (pixel data) from AXI master via the write data channel
//output logic `wstrb,      //write data strobes from AXI master via the write data channel
//  output logic [((2**(`burst_size))*8 )-1:0] wdata, //write data (pixel data) from AXI master via the write data channel
//output logic [(2**(`burst_size))-1:0] wstrb,      //write data strobes from AXI master via the write data channel

                   //ready indicator from AXI slave in write address channel
logic awvalid;                //valid indicator from master in axi write address channel
//output logic [`ID-1:0] awid,         //
  logic [31:0] awid;         //
  logic [7:0] awlen;            //transaction length from AXI master in write address channel
  logic [2:0] awsize;           ///transaction size from AXI master in write address channel
  logic [1:0] awburst;          //burst attribute from AXI master in write address channel
  logic [31:0] awaddr; //transaction address from AXI master in write address channel
 // output logic [`AW_addrs-1:0] awaddr, //transaction address from AXI master in write address channel
  logic [3:0] awcache;          //memory attributes from AXI master in write address channel
  logic [2:0] awprot;           //access attributes from AXI master in write address channel
  logic [3:0] awqos;            //QoS identifier from AXI master in write address channel
  logic [3:0] awregion;         //region identifier from AXI master in write address channel
   

logic bready;                 //ready indicator from AXI master in write response channel

//APB Interface Signals
//apb inputs
logic pclk;                            //APB clock
logic prst_n;                          //APB reset
logic pwrite;                          //apb write
logic psel;                            //apb select signal
logic penable;                         //apb enable signal
  logic [2:0] pprot;                     //Indicates the normal, privileged, or secure protection level of the transaction. 
  logic [3:0]	pstrb;                     //apb strobe
  logic [31:0] paddr;                    //apb address
  logic [31:0] pwdata;                   //apb write data
logic pready;                   //apb ready signal
logic pslverr;                  //apb slave error
logic [31:0] prdata;           //apb read data
  
  
  csi2_rx_top csi2_rx_top_inst(rxwordclkhs, cphy_rxwordclkhs, rxclkesc, rst_n, rxactivehs, 
rxcalibrationprehs, rxerrcalhs, rxlpdtesc, rxulpsesc, rxvalidesc, direction, stopstate, 
ulpsactivenot, errsoths, errsotsynchs, erresc, errsyncesc, errcontrol, errcontentionlp0, 
errcontentionlp1, rx_lane_sts_reg7, rx_lane_sts_reg4, rxcalibrationformat, rxdatahs, 
rxinvalidcodehs, rxvalidhs, rxsynchs, rxsynctypehs0, rxsynctypehs1, rxsynctypehs2, 
rxsynctypehs3, rxalpvalidhs, rxalpcode0, rxalpcode1, rxalpcode2, rxalpcode3, rxalpnibble0, 
rxalpnibble1, rxalpnibble2, rxalpnibble3, rxtriggeresc, rxdataesc, turnrequest, turndisable, 
forcerxmode, /*forcetxstopmode,*/ enable, /*txalp_lpselect,*/ rxalp_lpselect, rxdatawidthhs, alpwakestate, 
lane_configuration, mode_selection, aclk, areset_n, rd_rst_n, wvalid, wlast, wdata, wstrb, wready, awready, 
awvalid, awid, awlen, awsize, awburst, awaddr, awcache, awprot, awqos, awregion, bresp, bvalid, 
bready, pclk, prst_n, pwrite, psel, penable, pprot, pstrb, paddr, pwdata, pready, pslverr, prdata);           //apb read data
//357.14 MHZ cphy_rxwordclkhs
//100 MHz from axi_rd_clk
//50 MHz from apb clock
//1 ns = 10units
  always #14 cphy_rxwordclkhs = ~ cphy_rxwordclkhs;
  always #2 rxwordclkhs = ~ rxwordclkhs;
  always #50 rxclkesc = ~ rxclkesc;
  always #100 pclk = ~ pclk;
  always #50 aclk = ~aclk;
   initial begin
cphy_rxwordclkhs = 1'b0;
rxwordclkhs = 1'b0;
rxclkesc = 1'b0;
aclk = 1'b0;
//rst_n = 1'b0;
rd_rst_n = 1'b0;
//areset_n = 1'b0;
rxactivehs = 1'b0; 
rxcalibrationprehs = 1'b0;
rxerrcalhs = 1'b0;
 rxlpdtesc = 1'b0; 
rxulpsesc = 1'b0;
rxvalidesc = 1'b0;
direction = 1'b0;
stopstate = 1'b0; 
ulpsactivenot = 1'b0; 
errsoths = 1'b0; 
errsotsynchs = 1'b0;
erresc = 1'b0;
errsyncesc = 1'b0;
errcontrol = 1'b0;
errcontentionlp0 = 1'b0; 
errcontentionlp1 = 1'b0;
rx_lane_sts_reg7 = 1'b0;
rx_lane_sts_reg4 = 1'b0;
rxcalibrationformat = 2'h0;
rxdatahs = 64'h0; 
rxinvalidcodehs = 4'h0; 
rxvalidhs = 4'h0;
rxsynchs = 4'h0;
rxsynctypehs0 = 3'h0;
rxsynctypehs1 = 3'h0;
rxsynctypehs2 = 3'h0; 
rxsynctypehs3 = 3'h0;
rxalpvalidhs = 4'h0; 
rxalpcode0 = 4'h0;
rxalpcode1 = 4'h0;
rxalpcode2 = 4'h0;
rxalpcode3 = 4'h0;
rxalpnibble0 = 4'h0; 
rxalpnibble1 = 4'h0;
rxalpnibble2 = 4'h0;
rxalpnibble3 = 4'h0;
rxtriggeresc = 4'h0;
rxdataesc = 8'h0; 
lane_configuration = 32'h0;
mode_selection = 32'h0; 
//aclk = 1'b0;
areset_n = 1'b0;
wready = 1'b0;
awready = 1'b0;
bresp = 2'h0;
bvalid = 1'b0;
pclk = 1'b0;
prst_n = 1'b0;
pwrite = 1'b0;
psel = 1'b0;
penable = 1'b0;
pprot = 3'h0;
pstrb = 4'h0;
paddr = 32'h0;
pwdata = 32'h0;
   end
   task automatic drive_rx_signals(
    input logic [63:0] data,
    input logic [3:0] invalid_code,
    input logic [3:0] valid,
    input logic active
  );
   // @(posedge rxwordclkhs);
    rxdatahs        = data;
    rxinvalidcodehs = invalid_code;
    rxvalidhs       = valid;
    rxactivehs      = active;
  endtask

  // Task to drive synchronization signals
  task automatic drive_sync_signals(
  input logic [59:0] sync_rsvd,
    input logic [3:0] synch_val,
    input logic [3:0] synch_type0,
    input logic [3:0] synch_type1,
    input logic [3:0] synch_type2,
    input logic [3:0] synch_type3
  );
    //@(posedge rxwordclkhs);
	sync_rsvd = 60'h0;
    rxsynchs      = synch_val;
    rxsynctypehs0 = synch_type0;
    rxsynctypehs1 = synch_type1;
    rxsynctypehs2 = synch_type2;
    rxsynctypehs3 = synch_type3;
  endtask

  // Sequence class for randomized data (optional, but good for complex scenarios)
  class RandSequence;
    rand int sequence_id;
    rand bit [31:0] rnd_lane_config;
    rand bit [31:0] rnd_mode_select;
    rand bit [63:0] rnd_rxdata;

    constraint c_sequence_id { sequence_id inside {[0:2]}; } // Example: 0 for normal, 1 for error, 2 for random
    constraint c_lane_config { rnd_lane_config dist {32'h2 := 10, [32'h0:32'hFFFF_FFFF] :/ 1}; } // Biased towards 32'h2
    constraint c_mode_select { rnd_mode_select dist {32'h0 := 10, [32'h0:32'hFFFF_FFFF] :/ 1}; } // Biased towards 32'h0
    constraint c_rxdata { rnd_rxdata != 64'h0; } // Example constraint: rxdata should not be all zeros for some sequences

    function new();
      // Constructor
    endfunction
  endclass

  // Test sequence
  initial begin
    RandSequence rs = new(); // Create an instance of the random sequence class

    // Initial Reset
    rst_n = 1'b0;
	//rd_rst_n = 1'b0;
    @(posedge rxwordclkhs);
    @(posedge rxwordclkhs) rst_n = 1'b1;
	areset_n = 1'b1;
//@(posedge rxwordclkhs) rd_rst_n = 1'b1;	
prst_n = 1'b1;

    // Initial Configuration
   @(posedge rxwordclkhs);

    // Randomize initial configuration, or set explicitly
    // rs.randomize(); // Uncomment to randomize these
    lane_configuration = 32'h2; // Using explicit for initial setup as per original
    mode_selection     = 32'h0; // Using explicit for initial setup as per original

    // Initial Status and Error Signals (mostly zeros as per original)
    rx_lane_sts_reg7    = 1'b1;
    direction           = 1'b1;
    stopstate           = 1'b0;
    ulpsactivenot       = 1'b0;
    errsoths            = 1'b0;
    errsotsynchs        = 1'b0;
    erresc              = 1'b0;
    errsyncesc          = 1'b0;
    errcontrol          = 1'b0;
    errcontentionlp0    = 1'b0;
    errcontentionlp1    = 1'b0;

    // --- Data Sequence 1 ---
    //drive_rx_signals(64'h1122_3344_5566_7788, 4'h0, 4'hf, 1'b1);
   //  @(posedge rxwordclkhs);
//	drive_rx_signals({16'h0,16'h6539,8'h0,8'h1f,2'h0,6'h2a,5'h0,3'h0}, 32'h0, 32'hf, 1'b1);
  drive_rx_signals({16'h0,16'h5514,8'h1,8'h17,2'h0,6'h29,5'h0,3'h0}, 32'h0, 32'hf, 1'b1); 
   // --- Sync Sequence ---
   @(posedge rxwordclkhs);
   drive_rx_signals(64'h0, 4'h0, 4'h0, 1'b1);
	 
    drive_sync_signals(60'h0,4'hf, 4'h3, 4'h3, 4'h3, 4'h3);
@(posedge rxwordclkhs);
    // --- Data Sequence 2 (after sync) ---
    //drive_rx_signals(64'h1122_3344_5566_7788, 4'h0, 4'hf, 1'b1);
	   //drive_rx_signals({16'h0,16'h6539,8'h0,8'h1f,2'h0,6'h2a,5'h0,3'h0}, 32'h0, 32'hf, 1'b1); //raw8
    drive_rx_signals({16'h0,16'h5514,8'h1,8'h17,2'h0,6'h29,5'h0,3'h0}, 32'h0, 32'hf, 1'b1);
	// De-assert sync signals (or drive to 0, depending on protocol)
    drive_sync_signals(60'h0, 4'h0, 4'h0, 4'h0, 4'h0, 4'h0);

    // --- More Data Sequences (can be randomized) ---
    //	repeat (12) begin // Drive 3 more data packets
    	repeat (32) begin 
	@(posedge rxwordclkhs);
	void'(rs.randomize() with { rs.sequence_id == 0; }); // Keep sequence_id as 0 for normal data
      drive_rx_signals(rs.rnd_rxdata, 4'h0, 4'hf, 1'b1);
    end

    // Example of specific data as per original
    drive_rx_signals(64'h5566_7788_99aa_bbcc, 4'h0, 4'hf, 1'b1);
    drive_rx_signals(64'hddee_ff00_1122_3344, 4'h0, 4'hf, 1'b1);
    drive_rx_signals(64'h5678_9abc_def1_2345, 4'h0, 4'hf, 1'b1);

    // --- End Sequence / Idle State ---
    @(posedge rxwordclkhs);
    rx_lane_sts_reg4 = 1'b1;
    drive_rx_signals(64'h0, 4'h0, 4'h0, 1'b0); // Idle state

    // Clean up
    @(posedge rxwordclkhs);
    rx_lane_sts_reg7 = 1'b0;
    rx_lane_sts_reg4 = 1'b0;

    // End simulation
    #100000;
    $finish;
  end
  
  initial begin
  wait(wvalid) 
  wready = 1'b1;
  @(posedge aclk);
  wait(wvalid == 1'b0)
  wready = 1'b0;
  end
  initial begin
   @(posedge aclk); 
  wait(wvalid)
  bvalid = 1'b1;
  @(posedge aclk); 
  wait(bvalid & bready)
  bresp = 2'h1;
   @(posedge aclk); 
  bvalid = 1'b0;
  bresp = 2'h0;
  //wait(|bresp[1:0])
  @(posedge pclk); pwrite = 1'b0;
  psel = 1'b1;
  paddr = 32'h8;
  @(posedge pclk); penable = 1'b1; 
   @(posedge pclk); 
    @(posedge pclk); paddr = 32'h0;
	psel = 1'b0;
	penable = 1'b0;
	pwrite = 1'b0;
  end
  initial begin
  $monitor("received data = %0h", csi2_rx_top_inst.rxdatahs);
  $monitor("pixel_data = %0h",csi2_rx_top_inst.rx_pixel_data);
  end
  
//NOTE:
//The symbols := and :/ are used in SystemVerilog constraints, specifically with the dist (distribution) operator, to define weighted distributions 
//for randomized variables.
// := (Weighting Operator):
//Meaning: This operator assigns a specific weight to a particular value or a range of values. The larger the weight, the more likely that value 
//(or values within that range) will be chosen during randomization.
//Example : 32'h2 := 10
//This means that the value 32'h2 (decimal 2) has a weight of 10. In comparison to other weights, this value is 10 times more likely to be chosen.
// :/ (Range Weighting Operator):
//This operator assigns a uniform weight to each individual value within a specified range. The total weight of the range is determined by the number 
//of values in the range multiplied by the weight assigned with :/.
//Example : [32'h0:32'hFFFF_FFFF] :/ 1
//This means that every single value within the range from 32'h0 to 32'hFFFF_FFFF (i.e., all possible 32-bit values) is assigned a weight of 1.
//Since there are 2 32 possible values in this range, the total "effective" weight of this range is 2 
//32 × 1.
//How they work together in the example:
//constraint c_lane_config { rnd_lane_config dist {32'h2 := 10, [32'h0:32'hFFFF_FFFF] :/ 1}; }
//This constraint defines a distribution for the rnd_lane_config variable:
//Bias towards 32'h2: The value 32'h2 is given a weight of 10.
//Uniform distribution for all other values: Every other possible 32-bit value (excluding 32'h2 if it's considered part of the range) is given a weight of 1.
  
   /*
  initial begin
  @(posedge rxwordclkhs)
   @(posedge rxwordclkhs) rst_n = 1'b1;
    @(posedge rxwordclkhs);
	rx_lane_sts_reg7 = 1'b1;
	lane_configuration = 32'h2;
	mode_selection = 32'h0;
    direction = 1'b1;
	stopstate = 1'b1;
	ulpsactivenot = 1'b0;
	errsoths = 1'b0;
	errsotsynchs = 1'b0;
	erresc = 1'b0;
	errsyncesc = 1'b0;
	errcontrol = 1'b0;
	errcontentionlp0 = 1'b0;
	errcontentionlp1 = 1'b0;
	 @(posedge rxwordclkhs) rxdatahs = 64'h1122_3344;
	 rxinvalidcodehs = 4'h0;
	 rxvalidhs = 4'hf;
	rxactivehs = 1'b1;
	 @(posedge rxwordclkhs) rxdatahs = 64'h0;
	 rxinvalidcodehs = 4'h0;
	 rxvalidhs = 4'h0;
	rxactivehs = 1'b1;
	rxsynchs = 4'hf;
	rxsynctypehs0 = 4'h3;
	rxsynctypehs1 = 4'h3;
	rxsynctypehs2 = 4'h3;
	rxsynctypehs3 = 4'h3;
	 @(posedge rxwordclkhs) 
	 rxdatahs = 64'h1122_3344;
	 rxinvalidcodehs = 4'h0;
	 rxvalidhs = 4'hf;
	rxactivehs = 1'b1;
	rxsynchs = 4'h0;
	rxsynctypehs0 = 4'h0;
	rxsynctypehs1 = 4'h0;
	rxsynctypehs2 = 4'h0;
	rxsynctypehs3 = 4'h0;
	 @(posedge rxwordclkhs) 
	  rxvalidhs = 4'hf;
	 rxdatahs = 64'h5566_7788;
	 rxinvalidcodehs = 4'h0;
	 rxvalidhs = 4'hf;
	rxactivehs = 1'b1;
	#50; @(posedge rxwordclkhs)
rx_lane_sts_reg4 = 1'b1;	
	 rxdatahs = 64'h0;
	 rxinvalidcodehs = 4'h0;
	 rxvalidhs = 4'h0;
	rxactivehs = 1'b0;
	 @(posedge rxwordclkhs)
	rx_lane_sts_reg7 = 1'b0;
	rx_lane_sts_reg4 = 1'b0;
    #500; $finish;
  end
  */
  
  initial begin
    $dumpfile("dump.vcd");
    $dumpvars();
  end
  
endmodule

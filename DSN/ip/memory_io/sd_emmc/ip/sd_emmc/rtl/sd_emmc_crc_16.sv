module sd_crc_16(BITVAL, ENABLE, BITSTRB, CLEAR, CRC);
   input logic        BITVAL;                            // Next input logic bit
   input logic        ENABLE;                            // Enable calculation
   input logic        BITSTRB;                           // Current bit valid (Clock)
   input logic        CLEAR;                             // Init CRC value
   output logic [15:0] CRC;                               // Current output logic CRC value

   logic    [15:0] CRC_REG;                               // We need output logic logicisters
   logic         inv;
   
   assign inv = BITVAL ^ CRC_REG[15];                   // XOR required?
   
   always_ff @(posedge BITSTRB or posedge CLEAR) begin
      if (CLEAR) begin
         CRC <= 0;   
         CRC_REG <= 0;                               // Init before calculation
         end
      else begin
         if (ENABLE == 1) begin
             CRC[15] <= CRC_REG[14];
             CRC[14] <= CRC_REG[13];
             CRC[13] <= CRC_REG[12];
             CRC[12] <= CRC_REG[11] ^ inv;
             CRC[11] <= CRC_REG[10];
             CRC[10] <= CRC_REG[9];
             CRC[9] <= CRC_REG[8];
             CRC[8] <= CRC_REG[7];
             CRC[7] <= CRC_REG[6];
             CRC[6] <= CRC_REG[5];
             CRC[5] <= CRC_REG[4] ^ inv;
             CRC[4] <= CRC_REG[3];
             CRC[3] <= CRC_REG[2];
             CRC[2] <= CRC_REG[1];
             CRC[1] <= CRC_REG[0];
             CRC[0] <= inv;
             end
         end
      end
   
endmodule

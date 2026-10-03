//      // verilator_coverage annotation
        class apb_i2c_apb_coverage extends uvm_component;
        
%000001   `uvm_component_utils(apb_i2c_apb_coverage)
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_coverage__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_coverage__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_coverage__Vclpkg
        
          //============================================================
          // Analysis implementation
          //============================================================
        
          uvm_analysis_imp #(apb_i2c_apb_item,
                             apb_i2c_apb_coverage) analysis_export;
        
        
          //============================================================
          // APB addresses
          //============================================================
        
          localparam bit [31:0] APB_BASE_ADDR = 32'h3001_0000;
        
          localparam bit [31:0] CTRL_REG_ADDR =
              APB_BASE_ADDR + 32'h0010;
        
          localparam bit [31:0] STATUS_REG_ADDR =
              APB_BASE_ADDR + 32'h0014;
        
          localparam bit [31:0] TXDATA_REG_ADDR =
              APB_BASE_ADDR + 32'h0018;
        
          localparam bit [31:0] RXDATA_REG_ADDR =
              APB_BASE_ADDR + 32'h001C;
        
        
          //============================================================
          // Transaction
          //============================================================
        
          apb_i2c_apb_item tr;
        
        
          //============================================================
          // ONE COVERGROUP
          //============================================================
        
          covergroup apb_cg;
        
            option.per_instance = 1;
        
        
            //==========================================================
            // READ / WRITE
            //==========================================================
        
            cp_write: coverpoint tr.pwrite {
        
 000250       bins READ  = {1'b0};
+000250  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_write.READ
 000050       bins WRITE = {1'b1};
+000050  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_write.WRITE
        
            }
        
        
            //==========================================================
            // APB ADDRESS
            //==========================================================
        
            cp_addr: coverpoint tr.paddr {
        
 000025       bins CTRL_REG = {
+000025  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_addr.CTRL_REG
                CTRL_REG_ADDR
              };
        
 000250       bins STATUS_REG = {
+000250  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_addr.STATUS_REG
                STATUS_REG_ADDR
              };
        
 000025       bins TXDATA_REG = {
+000025  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_addr.TXDATA_REG
                TXDATA_REG_ADDR
              };
        
%000000       bins RXDATA_REG = {
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_addr.RXDATA_REG
                RXDATA_REG_ADDR
              };
        
%000000       bins OTHER = default;
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_addr.OTHER
        
            }
        
        
            //==========================================================
            // BYTE ENABLE
            //==========================================================
        
            cp_strb: coverpoint tr.pstrb {
        
%000000       bins BYTE0 = {4'b0001};
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_strb.BYTE0
 000025       bins BYTE1 = {4'b0010};
+000025  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_strb.BYTE1
%000000       bins BYTE2 = {4'b0100};
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_strb.BYTE2
%000000       bins BYTE3 = {4'b1000};
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_strb.BYTE3
        
%000000       bins BYTE01 = {4'b0011};
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_strb.BYTE01
%000000       bins BYTE12 = {4'b0110};
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_strb.BYTE12
%000000       bins BYTE23 = {4'b1100};
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_strb.BYTE23
        
 000025       bins ALL_BYTES = {4'b1111};
+000025  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_strb.ALL_BYTES
        
 000250       bins OTHER = default;
+000250  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_strb.OTHER
        
            }
        
        
            //==========================================================
            // WRITE DATA
            //==========================================================
        
            cp_pwdata: coverpoint tr.pwdata {
        
 000250       bins ZERO = {32'h0000_0000};
+000250  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_pwdata.ZERO
        
 000050       bins NON_ZERO = {
+000050  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_pwdata.NON_ZERO
                [32'h0000_0001 : 32'hFFFF_FFFF]
              };
        
            }
        
        
            //==========================================================
            // READ DATA
            //==========================================================
        
            cp_prdata: coverpoint tr.prdata {
        
 000275       bins ZERO = {32'h0000_0000};
+000275  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_prdata.ZERO
        
 000025       bins NON_ZERO = {
+000025  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_prdata.NON_ZERO
                [32'h0000_0001 : 32'hFFFF_FFFF]
              };
        
            }
        
        
            //==========================================================
            // APB ERROR
            //==========================================================
        
            cp_slverr: coverpoint tr.pslverr {
        
 000300       bins NO_ERROR = {1'b0};
+000300  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_slverr.NO_ERROR
%000000       bins ERROR    = {1'b1};
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.cp_slverr.ERROR
        
            }
        
        
        
            //==========================================================
            // ADDRESS × READ/WRITE
            //==========================================================
        
            addr_x_write:
~000250       cross cp_addr, cp_write;
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_write.CTRL_REG_x_READ
        //  cross: [CTRL_REG, READ]
+000025  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_write.CTRL_REG_x_WRITE
        //  cross: [CTRL_REG, WRITE]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_write.RXDATA_REG_x_READ
        //  cross: [RXDATA_REG, READ]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_write.RXDATA_REG_x_WRITE
        //  cross: [RXDATA_REG, WRITE]
+000250  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_write.STATUS_REG_x_READ
        //  cross: [STATUS_REG, READ]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_write.STATUS_REG_x_WRITE
        //  cross: [STATUS_REG, WRITE]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_write.TXDATA_REG_x_READ
        //  cross: [TXDATA_REG, READ]
+000025  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_write.TXDATA_REG_x_WRITE
        //  cross: [TXDATA_REG, WRITE]
        
        
            //==========================================================
            // ADDRESS × BYTE ENABLE
            //==========================================================
        
            addr_x_strb:
~000025       cross cp_addr, cp_strb;
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.CTRL_REG_x_ALL_BYTES
        //  cross: [CTRL_REG, ALL_BYTES]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.CTRL_REG_x_BYTE0
        //  cross: [CTRL_REG, BYTE0]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.CTRL_REG_x_BYTE01
        //  cross: [CTRL_REG, BYTE01]
+000025  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.CTRL_REG_x_BYTE1
        //  cross: [CTRL_REG, BYTE1]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.CTRL_REG_x_BYTE12
        //  cross: [CTRL_REG, BYTE12]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.CTRL_REG_x_BYTE2
        //  cross: [CTRL_REG, BYTE2]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.CTRL_REG_x_BYTE23
        //  cross: [CTRL_REG, BYTE23]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.CTRL_REG_x_BYTE3
        //  cross: [CTRL_REG, BYTE3]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.RXDATA_REG_x_ALL_BYTES
        //  cross: [RXDATA_REG, ALL_BYTES]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.RXDATA_REG_x_BYTE0
        //  cross: [RXDATA_REG, BYTE0]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.RXDATA_REG_x_BYTE01
        //  cross: [RXDATA_REG, BYTE01]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.RXDATA_REG_x_BYTE1
        //  cross: [RXDATA_REG, BYTE1]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.RXDATA_REG_x_BYTE12
        //  cross: [RXDATA_REG, BYTE12]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.RXDATA_REG_x_BYTE2
        //  cross: [RXDATA_REG, BYTE2]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.RXDATA_REG_x_BYTE23
        //  cross: [RXDATA_REG, BYTE23]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.RXDATA_REG_x_BYTE3
        //  cross: [RXDATA_REG, BYTE3]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.STATUS_REG_x_ALL_BYTES
        //  cross: [STATUS_REG, ALL_BYTES]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.STATUS_REG_x_BYTE0
        //  cross: [STATUS_REG, BYTE0]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.STATUS_REG_x_BYTE01
        //  cross: [STATUS_REG, BYTE01]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.STATUS_REG_x_BYTE1
        //  cross: [STATUS_REG, BYTE1]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.STATUS_REG_x_BYTE12
        //  cross: [STATUS_REG, BYTE12]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.STATUS_REG_x_BYTE2
        //  cross: [STATUS_REG, BYTE2]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.STATUS_REG_x_BYTE23
        //  cross: [STATUS_REG, BYTE23]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.STATUS_REG_x_BYTE3
        //  cross: [STATUS_REG, BYTE3]
+000025  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.TXDATA_REG_x_ALL_BYTES
        //  cross: [TXDATA_REG, ALL_BYTES]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.TXDATA_REG_x_BYTE0
        //  cross: [TXDATA_REG, BYTE0]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.TXDATA_REG_x_BYTE01
        //  cross: [TXDATA_REG, BYTE01]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.TXDATA_REG_x_BYTE1
        //  cross: [TXDATA_REG, BYTE1]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.TXDATA_REG_x_BYTE12
        //  cross: [TXDATA_REG, BYTE12]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.TXDATA_REG_x_BYTE2
        //  cross: [TXDATA_REG, BYTE2]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.TXDATA_REG_x_BYTE23
        //  cross: [TXDATA_REG, BYTE23]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.addr_x_strb.TXDATA_REG_x_BYTE3
        //  cross: [TXDATA_REG, BYTE3]
        
        
            //==========================================================
            // READ/WRITE × ERROR
            //==========================================================
        
            write_x_error:
~000250       cross cp_write, cp_slverr;
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.write_x_error.READ_x_ERROR
        //  cross: [READ, ERROR]
+000250  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.write_x_error.READ_x_NO_ERROR
        //  cross: [READ, NO_ERROR]
-000000  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.write_x_error.WRITE_x_ERROR
        //  cross: [WRITE, ERROR]
+000050  point: type=covergroup comment= hier=__vlAnonCG_apb_cg.write_x_error.WRITE_x_NO_ERROR
        //  cross: [WRITE, NO_ERROR]
        
        
          endgroup
        
        
          //============================================================
          // Constructor
          //============================================================
        
%000001   function new(
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_coverage__Vclpkg
            string name = "apb_i2c_apb_coverage",
            uvm_component parent = null
          );
        
%000001     super.new(name, parent);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_coverage__Vclpkg
        
%000001     analysis_export =
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_coverage__Vclpkg
%000001       new("analysis_export", this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_coverage__Vclpkg
        
%000001     apb_cg = new();
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_coverage__Vclpkg
        
          endfunction
        
        
          //============================================================
          // RECEIVE TRANSACTION
          //============================================================
        
 000300   virtual function void write(
+000300  point: type=line comment=block hier=$unit::apb_i2c_apb_coverage__Vclpkg
            apb_i2c_apb_item t
          );
        
~000300     if (t == null)
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_coverage__Vclpkg
+000300  point: type=branch comment=else hier=$unit::apb_i2c_apb_coverage__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_coverage__Vclpkg
        
        
            // Store actual monitor transaction
 000300     tr = t;
+000300  point: type=line comment=block hier=$unit::apb_i2c_apb_coverage__Vclpkg
        
        
            `uvm_info(
              "APB_COVERAGE",
              $sformatf(
                "Sampling APB transaction: %s",
                tr.convert2string()
              ),
              UVM_HIGH
~000300     )
+000300  point: type=line comment=block hier=$unit::apb_i2c_apb_coverage__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_coverage__Vclpkg
+000300  point: type=branch comment=else hier=$unit::apb_i2c_apb_coverage__Vclpkg
        
        
            // Sample using actual transaction
 000300     apb_cg.sample();
+000300  point: type=line comment=block hier=$unit::apb_i2c_apb_coverage__Vclpkg
        
          endfunction
        
        
          //============================================================
          // REPORT
          //============================================================
        
%000001   function void report_phase(uvm_phase phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_coverage__Vclpkg
        
%000001     super.report_phase(phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_coverage__Vclpkg
        
            `uvm_info(
              "APB_COVERAGE",
              $sformatf(
                "APB Coverage = %0.2f%%",
                apb_cg.get_inst_coverage()
              ),
              UVM_LOW
%000001     )
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_coverage__Vclpkg
-000001  point: type=branch comment=if hier=$unit::apb_i2c_apb_coverage__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_coverage__Vclpkg
        
          endfunction
        
        endclass
        

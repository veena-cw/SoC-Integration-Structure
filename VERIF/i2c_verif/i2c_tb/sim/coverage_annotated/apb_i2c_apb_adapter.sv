//      // verilator_coverage annotation
        package apb_i2c_apb_adapter_pkg;
        
          import uvm_pkg::*;
          `include "uvm_macros.svh"
        
          import apb_i2c_ral_pkg::*;
          import apb_i2c_apb_item_pkg::*;
        
        
          class apb_i2c_apb_adapter extends uvm_reg_adapter;
        
%000001     `uvm_object_utils(apb_i2c_apb_adapter)
-000000  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
        
            //==============================================================
            // APB base address
            //==============================================================
        
            localparam bit [31:0] APB_BASE_ADDR = 32'h3001_0000;
        
            localparam bit [31:0] CTRL_REG_ADDR =
                APB_BASE_ADDR + 32'h0010;
        
            localparam bit [31:0] STATUS_REG_ADDR =
                APB_BASE_ADDR + 32'h0014;
        
            localparam bit [31:0] TXDATA_REG_ADDR =
                APB_BASE_ADDR + 32'h0018;
        
            localparam bit [31:0] RXDATA_REG_ADDR =
                APB_BASE_ADDR + 32'h001C;
        
        
%000001     function new(string name = "apb_i2c_apb_adapter");
-000000  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
%000001       super.new(name);
-000001  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
%000001       supports_byte_enable = 1;
-000001  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
%000001       provides_responses   = 0;
-000001  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
            endfunction
        
        
            //==============================================================
            // RAL -> APB
            //==============================================================
        
 000175     virtual function uvm_sequence_item reg2bus(
+000175  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
              const ref uvm_reg_bus_op rw
            );
        
 000175       apb_i2c_apb_item item;
+000175  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
 000175       item = apb_i2c_apb_item::type_id::create("item");
+000175  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
 000175       item.paddr  = rw.addr;
+000175  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
 000175       item.pwrite = (rw.kind == UVM_WRITE);
+000175  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
        
              //============================================================
              // WRITE
              //============================================================
        
 000125       if (rw.kind == UVM_WRITE) begin
+000050  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
+000125  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
 000050         item.pwdata = '0;
+000050  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
 000050         item.pstrb  = '0;
+000050  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
 000050         item.prdata = '0;
+000050  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
        
                //==========================================================
                // CTRL_REG
                //
                // RAL data[7:0]
                //       |
                //       v
                // APB PWDATA[15:8]
                //
                // RAL byte 0 -> APB byte 1
                //==========================================================
        
 000025         if (rw.addr == CTRL_REG_ADDR) begin
+000025  point: type=line comment=elsif hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
 000025           item.pwdata[15:8] = rw.data[7:0];
+000025  point: type=line comment=elsif hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
 000025           item.pstrb[1] = rw.byte_en[0];
+000025  point: type=line comment=elsif hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
        
                  `uvm_info(
                    "APB_ADAPTER",
                    $sformatf(
                      "CTRL WRITE: ADDR=%h RAL_DATA=%h RAL_BE=%b -> PWDATA=%h PSTRB=%b",
                      rw.addr,
                      rw.data,
                      rw.byte_en,
                      item.pwdata,
                      item.pstrb
                    ),
                    UVM_NONE
~000025           )
+000025  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
+000025  point: type=line comment=elsif hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
                end
        
        
                //==========================================================
                // TXDATA_REG
                //==========================================================
        
~000025         else if (rw.addr == TXDATA_REG_ADDR) begin
+000025  point: type=line comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=line comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
 000025           item.pwdata = rw.data;
+000025  point: type=line comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
 000025           item.pstrb  = rw.byte_en;
+000025  point: type=line comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
        
                  `uvm_info(
                    "APB_ADAPTER",
                    $sformatf(
                      "TXDATA WRITE: ADDR=%h DATA=%h BE=%b",
                      rw.addr,
                      item.pwdata,
                      item.pstrb
                    ),
                    UVM_NONE
~000025           )
+000025  point: type=line comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
                end
        
        
                //==========================================================
                // Other registers
                //==========================================================
        
%000000         else begin
-000000  point: type=line comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
%000000           item.pwdata = rw.data;
-000000  point: type=line comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
%000000           item.pstrb  = rw.byte_en;
-000000  point: type=line comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
        
                  `uvm_info(
                    "APB_ADAPTER",
                    $sformatf(
                      "NORMAL WRITE: ADDR=%h DATA=%h BE=%b",
                      rw.addr,
                      item.pwdata,
                      item.pstrb
                    ),
                    UVM_NONE
%000000           )
-000000  point: type=line comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
                end
        
              end
        
        
              //============================================================
              // READ
              //============================================================
        
 000125       else begin
+000125  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
 000125         item.pwdata = '0;
+000125  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
 000125         item.pstrb  = '0;
+000125  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
 000125         item.prdata = '0;
+000125  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
        
                `uvm_info(
                  "APB_ADAPTER",
                  $sformatf(
                    "READ REQUEST: ADDR=%h",
                    rw.addr
                  ),
                  UVM_NONE
~000125         )
+000125  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
+000125  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
              end
        
        
 000175       return item;
+000175  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
            endfunction
        
        
            //==============================================================
            // APB -> RAL
            //==============================================================
        
 000725     virtual function void bus2reg(
+000725  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
              uvm_sequence_item bus_item,
              ref uvm_reg_bus_op rw
            );
        
 000725       apb_i2c_apb_item item;
+000725  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
        
~000725       if (!$cast(item, bus_item)) begin
-000000  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
+000725  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
                `uvm_error(
                  "APB_ADAPTER",
                  "Failed to cast bus_item to apb_i2c_apb_item"
%000000         )
-000000  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
%000000         return;
-000000  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
              end
        
        
 000725       rw.addr = item.paddr;
+000725  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
        
              //============================================================
              // READ
              //============================================================
        
 000625       if (item.pwrite == 0) begin
+000625  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
+000100  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
 000625         rw.kind = UVM_READ;
+000625  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
        
                //==========================================================
                // CTRL_REG READ
                //==========================================================
        
%000000         if (item.paddr == CTRL_REG_ADDR) begin
-000000  point: type=line comment=elsif hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
%000000           rw.data = '0;
-000000  point: type=line comment=elsif hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
%000000           rw.data[7:0] = item.prdata[7:0];
-000000  point: type=line comment=elsif hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
%000000           rw.byte_en = '0;
-000000  point: type=line comment=elsif hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
%000000           rw.byte_en[0] = 1'b1;
-000000  point: type=line comment=elsif hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
        
                  `uvm_info(
                    "APB_ADAPTER",
                    $sformatf(
                      "CTRL READ: ADDR=%h PRDATA=%h -> RAL_DATA=%h RAL_BE=%b",
                      item.paddr,
                      item.prdata,
                      rw.data,
                      rw.byte_en
                    ),
                    UVM_NONE
%000000           )
-000000  point: type=line comment=elsif hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
                end
        
        
                //==========================================================
                // TXDATA_REG READ
                //==========================================================
        
~000625         else if (item.paddr == TXDATA_REG_ADDR) begin
-000000  point: type=line comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
+000625  point: type=line comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
%000000           rw.data = item.prdata;
-000000  point: type=line comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
%000000           rw.byte_en = 4'b1111;
-000000  point: type=line comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
        
                  `uvm_info(
                    "APB_ADAPTER",
                    $sformatf(
                      "TXDATA READ: ADDR=%h PRDATA=%h -> RAL_DATA=%h RAL_BE=%b",
                      item.paddr,
                      item.prdata,
                      rw.data,
                      rw.byte_en
                    ),
                    UVM_NONE
%000000           )
-000000  point: type=line comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
                end
        
        
                //==========================================================
                // Other registers
                //==========================================================
        
 000625         else begin
+000625  point: type=line comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
 000625           rw.data = item.prdata;
+000625  point: type=line comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
 000625           rw.byte_en = 4'b1111;
+000625  point: type=line comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
        
                  `uvm_info(
                    "APB_ADAPTER",
                    $sformatf(
                      "NORMAL READ: ADDR=%h PRDATA=%h -> RAL_DATA=%h RAL_BE=%b",
                      item.paddr,
                      item.prdata,
                      rw.data,
                      rw.byte_en
                    ),
                    UVM_NONE
~000625           )
+000625  point: type=line comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
+000625  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
                end
        
              end
        
        
              //============================================================
              // WRITE RESPONSE
              //============================================================
        
 000100       else begin
+000100  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
 000100         rw.kind = UVM_WRITE;
+000100  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
        
                //==========================================================
                // CTRL_REG WRITE
                //
                // APB PWDATA[15:8]
                //       |
                //       v
                // RAL data[7:0]
                //==========================================================
        
 000050         if (item.paddr == CTRL_REG_ADDR) begin
+000050  point: type=line comment=elsif hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
 000050           rw.data = '0;
+000050  point: type=line comment=elsif hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
 000050           rw.data[7:0] = item.pwdata[15:8];
+000050  point: type=line comment=elsif hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
 000050           rw.byte_en = '0;
+000050  point: type=line comment=elsif hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
 000050           rw.byte_en[0] = item.pstrb[1];
+000050  point: type=line comment=elsif hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
        
                  `uvm_info(
                    "APB_ADAPTER",
                    $sformatf(
                      "CTRL WRITE RESPONSE: PWDATA=%h PSTRB=%b -> RAL_DATA=%h RAL_BE=%b",
                      item.pwdata,
                      item.pstrb,
                      rw.data,
                      rw.byte_en
                    ),
                    UVM_NONE
~000050           )
+000050  point: type=line comment=elsif hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
+000050  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
                end
        
        
                //==========================================================
                // TXDATA_REG WRITE
                //==========================================================
        
~000050         else if (item.paddr == TXDATA_REG_ADDR) begin
+000050  point: type=line comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=line comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
 000050           rw.data = item.pwdata;
+000050  point: type=line comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
 000050           rw.byte_en = item.pstrb;
+000050  point: type=line comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
                end
        
        
                //==========================================================
                // Other registers
                //==========================================================
        
%000000         else begin
-000000  point: type=line comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
%000000           rw.data = item.pwdata;
-000000  point: type=line comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
%000000           rw.byte_en = item.pstrb;
-000000  point: type=line comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
                end
        
              end
        
        
              //============================================================
              // APB STATUS
              //============================================================
        
 000725       rw.status =
+000725  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
 000725         (item.pslverr)
+000725  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
 000725         ? UVM_NOT_OK
+000725  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
                : UVM_IS_OK;
        
        
              `uvm_info(
                "APB_ADAPTER",
                $sformatf(
                  "BUS2REG: ADDR=%h PWRITE=%0d PWDATA=%h PRDATA=%h PSTRB=%b RAL_DATA=%h RAL_BE=%b STATUS=%s",
                  item.paddr,
                  item.pwrite,
                  item.pwdata,
                  item.prdata,
                  item.pstrb,
                  rw.data,
                  rw.byte_en,
                  rw.status.name()
                ),
                UVM_NONE
~000725       )
+000725  point: type=line comment=block hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
+000725  point: type=branch comment=if hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_adapter_pkg::apb_i2c_apb_adapter__Vclpkg
        
            endfunction
        
          endclass
        
        endpackage
        

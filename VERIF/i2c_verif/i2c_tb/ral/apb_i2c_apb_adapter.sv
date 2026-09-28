//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: 
//  Module            				: 
//  Primary Unit Owner                         	: 
//  Secondary Contact                           : 
//  Source [SystemVerilog|Verilog|VHDL|Other]   : 
//=================================================================================
//  Description: xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//=================================================================================

// Generated APB Adapter for APB_to_I2C_Controller
// IP: APB_I2C
// Converts uvm_reg_bus_op <-> APB transaction (no timing)

package apb_i2c_apb_adapter_pkg;

  import uvm_pkg::*;
  `include "uvm_macros.svh"

  import apb_i2c_ral_pkg::*;
  import apb_i2c_apb_item_pkg::*;


  class apb_i2c_apb_adapter extends uvm_reg_adapter;

    `uvm_object_utils(apb_i2c_apb_adapter)


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


    function new(string name = "apb_i2c_apb_adapter");

      super.new(name);

      supports_byte_enable = 1;
      provides_responses   = 0;

    endfunction


    //==============================================================
    // RAL -> APB
    //==============================================================

    virtual function uvm_sequence_item reg2bus(
      const ref uvm_reg_bus_op rw
    );

      apb_i2c_apb_item item;

      item = apb_i2c_apb_item::type_id::create("item");

      item.paddr  = rw.addr;
      item.pwrite = (rw.kind == UVM_WRITE);


      //============================================================
      // WRITE
      //============================================================

      if (rw.kind == UVM_WRITE) begin

        item.pwdata = '0;
        item.pstrb  = '0;
        item.prdata = '0;


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

        if (rw.addr == CTRL_REG_ADDR) begin

          item.pwdata[15:8] = rw.data[7:0];

          item.pstrb[1] = rw.byte_en[0];


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
          )

        end


        //==========================================================
        // TXDATA_REG
        //==========================================================

        else if (rw.addr == TXDATA_REG_ADDR) begin

          item.pwdata = rw.data;
          item.pstrb  = rw.byte_en;


          `uvm_info(
            "APB_ADAPTER",
            $sformatf(
              "TXDATA WRITE: ADDR=%h DATA=%h BE=%b",
              rw.addr,
              item.pwdata,
              item.pstrb
            ),
            UVM_NONE
          )

        end


        //==========================================================
        // Other registers
        //==========================================================

        else begin

          item.pwdata = rw.data;
          item.pstrb  = rw.byte_en;


          `uvm_info(
            "APB_ADAPTER",
            $sformatf(
              "NORMAL WRITE: ADDR=%h DATA=%h BE=%b",
              rw.addr,
              item.pwdata,
              item.pstrb
            ),
            UVM_NONE
          )

        end

      end


      //============================================================
      // READ
      //============================================================

      else begin

        item.pwdata = '0;
        item.pstrb  = '0;
        item.prdata = '0;


        `uvm_info(
          "APB_ADAPTER",
          $sformatf(
            "READ REQUEST: ADDR=%h",
            rw.addr
          ),
          UVM_NONE
        )

      end


      return item;

    endfunction


    //==============================================================
    // APB -> RAL
    //==============================================================

    virtual function void bus2reg(
      uvm_sequence_item bus_item,
      ref uvm_reg_bus_op rw
    );

      apb_i2c_apb_item item;


      if (!$cast(item, bus_item)) begin

        `uvm_error(
          "APB_ADAPTER",
          "Failed to cast bus_item to apb_i2c_apb_item"
        )

        return;

      end


      rw.addr = item.paddr;


      //============================================================
      // READ
      //============================================================

      if (item.pwrite == 0) begin

        rw.kind = UVM_READ;


        //==========================================================
        // CTRL_REG READ
        //==========================================================

        if (item.paddr == CTRL_REG_ADDR) begin

          rw.data = '0;

          rw.data[7:0] = item.prdata[7:0];

          rw.byte_en = '0;
          rw.byte_en[0] = 1'b1;


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
          )

        end


        //==========================================================
        // TXDATA_REG READ
        //==========================================================

        else if (item.paddr == TXDATA_REG_ADDR) begin

          rw.data = item.prdata;

          rw.byte_en = 4'b1111;


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
          )

        end


        //==========================================================
        // Other registers
        //==========================================================

        else begin

          rw.data = item.prdata;

          rw.byte_en = 4'b1111;


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
          )

        end

      end


      //============================================================
      // WRITE RESPONSE
      //============================================================

      else begin

        rw.kind = UVM_WRITE;


        //==========================================================
        // CTRL_REG WRITE
        //
        // APB PWDATA[15:8]
        //       |
        //       v
        // RAL data[7:0]
        //==========================================================

        if (item.paddr == CTRL_REG_ADDR) begin

          rw.data = '0;

          rw.data[7:0] = item.pwdata[15:8];

          rw.byte_en = '0;
          rw.byte_en[0] = item.pstrb[1];


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
          )

        end


        //==========================================================
        // TXDATA_REG WRITE
        //==========================================================

        else if (item.paddr == TXDATA_REG_ADDR) begin

          rw.data = item.pwdata;
          rw.byte_en = item.pstrb;

        end


        //==========================================================
        // Other registers
        //==========================================================

        else begin

          rw.data = item.pwdata;
          rw.byte_en = item.pstrb;

        end

      end


      //============================================================
      // APB STATUS
      //============================================================

      rw.status =
        (item.pslverr)
        ? UVM_NOT_OK
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
      )

    endfunction

  endclass

endpackage

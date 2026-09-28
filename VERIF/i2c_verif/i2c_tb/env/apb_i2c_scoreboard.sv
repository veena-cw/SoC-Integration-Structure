
`include "uvm_macros.svh"
import uvm_pkg::*;

import apb_i2c_apb_item_pkg::*;
import apb_i2c_ral_block_pkg::*;
import apb_i2c_ral_metadata_pkg::*;

`uvm_analysis_imp_decl(_apb)
`uvm_analysis_imp_decl(_i2c)


class apb_i2c_scoreboard extends uvm_component;

  `uvm_component_utils(apb_i2c_scoreboard)


  //==========================================================================
  // RAL MODEL
  //==========================================================================

  apb_i2c_ral_block ral_model;


  //==========================================================================
  // ANALYSIS PORTS
  //==========================================================================

  uvm_analysis_imp_apb #(apb_i2c_apb_item,
                         apb_i2c_scoreboard) bus_in;

  uvm_analysis_imp_i2c #(apb_i2c_i2c_item,
                         apb_i2c_scoreboard) i2c_in;


  //==========================================================================
  // COUNTERS
  //==========================================================================

  int match_cnt;
  int mismatch_cnt;
  int write_cnt;
  int read_cnt;


  //==========================================================================
  // QUEUES
  //
  // APB queue:
  //
  //   TXDATA write -> I2C WRITE expected transaction
  //   RXDATA read  -> I2C READ expected transaction
  //
  // I2C queue:
  //
  //   Complete actual I2C transaction
  //==========================================================================

  apb_i2c_apb_item apb_queue[$];
  apb_i2c_i2c_item i2c_queue[$];


  //==========================================================================
  // CURRENT CONTROL / STATUS
  //==========================================================================

  bit i2c_rw;

  bit status_busy;
  bit status_done;
  bit status_slave_error;
  bit   rxdata_pushed;

  //==========================================================================
  // CONSTRUCTOR
  //==========================================================================

  function new(string name = "apb_i2c_scoreboard",
               uvm_component parent = null);

    super.new(name, parent);

    bus_in = new("bus_in", this);
    i2c_in = new("i2c_in", this);

  endfunction


  //==========================================================================
  // APB MONITOR
  //==========================================================================

  virtual function void write_apb(apb_i2c_apb_item tr);

    apb_i2c_apb_item tr_copy;
    uvm_reg rg;


    if (tr == null)
      return;


    //========================================================================
    // Counters
    //========================================================================

    if (tr.pwrite)
      write_cnt++;
    else
      read_cnt++;


    `uvm_info("SCOREBOARD",
              $sformatf(
                "APB transaction: %s",
                tr.convert2string()),
              UVM_HIGH)


    //========================================================================
    // Find RAL register
    //========================================================================

    rg = ral_model.default_map.get_reg_by_offset(tr.paddr);


    if (rg == null) begin

      `uvm_warning(
        "SCOREBOARD",
        $sformatf(
          "No RAL register found for APB address 0x%08h",
          tr.paddr))

      return;

    end


    //========================================================================
    // APB WRITE
    //========================================================================

    if (tr.pwrite) begin


      //----------------------------------------------------------------------
      // Update RAL mirror from actual APB write
      //----------------------------------------------------------------------

      rg.predict(tr.pwdata);


      `uvm_info(
        "RAL_PREDICT",
        $sformatf(
          "WRITE PREDICT: %s <= 0x%08h",
          rg.get_name(),
          tr.pwdata),
        UVM_HIGH)


      //======================================================================
      // CTRL_REG
      //
      // IMPORTANT:
      // Do not depend on the RAL mirror here.
      // Use the actual APB write data.
      //======================================================================

      if (rg.get_name() == "CTRL_REG") begin

        // Replace READ_WRITE_BIT with actual field position
        i2c_rw = tr.pwdata[8];
	  rxdata_pushed = 1'b0;

        `uvm_info(
          "CTRL_DEBUG",
          $sformatf(
            "CTRL WRITE: PWDATA=0x%08h READ_WRITE=%0b",
            tr.pwdata,
            i2c_rw),
          UVM_MEDIUM)

      end


      //======================================================================
      // TXDATA_REG
      //
      // Push only when:
      //
      //   BUSY       = 0
      //   READ_WRITE = 0
      //
      // READ_WRITE=0 means I2C WRITE.
      //======================================================================

      if (rg.get_name() == "TXDATA_REG") begin


        //--------------------------------------------------------------------
        // Get current BUSY from RAL mirror.
        //
        // If BUSY is generated by DUT and you have a fresh STATUS read,
        // status_busy will already contain the latest actual DUT value.
        //--------------------------------------------------------------------

        `uvm_info(
          "TXDATA_DEBUG",
          $sformatf(
            "TXDATA CHECK: BUSY=%0b READ_WRITE=%0b PWRITE=%0b PADDR=0x%08h PWDATA=0x%08h",
            status_busy,
            i2c_rw,
            tr.pwrite,
            tr.paddr,
            tr.pwdata),
          UVM_LOW)


        //--------------------------------------------------------------------
        // Only push for I2C WRITE
        //--------------------------------------------------------------------

        if (!status_busy && (i2c_rw == 1'b0)) begin


          tr_copy =
            apb_i2c_apb_item::type_id::create("apb_tx_copy");


          tr_copy.copy(tr);


          apb_queue.push_back(tr_copy);


          `uvm_info(
            "APB_QUEUE",
            $sformatf(
              "TXDATA PUSHED: BUSY=%0b READ_WRITE=%0b QUEUE_SIZE=%0d DATA=0x%08h",
              status_busy,
              i2c_rw,
              apb_queue.size(),
              tr.pwdata),
            UVM_MEDIUM)

        end
        else begin

          `uvm_info(
            "APB_QUEUE",
            $sformatf(
              "TXDATA NOT PUSHED: BUSY=%0b READ_WRITE=%0b",
              status_busy,
              i2c_rw),
            UVM_MEDIUM)

        end

      end

    end


    //========================================================================
    // APB READ
    //========================================================================

    else begin


      //----------------------------------------------------------------------
      // IMPORTANT:
      //
      // tr.prdata is the actual value returned by the DUT.
      // Use it directly.
      //----------------------------------------------------------------------

      `uvm_info(
        "RAL_READ",
        $sformatf(
          "APB READ: %s PRDATA=0x%08h",
          rg.get_name(),
          tr.prdata),
        UVM_HIGH)


      //----------------------------------------------------------------------
      // Predict actual DUT read value into RAL mirror
      //----------------------------------------------------------------------

      rg.predict(tr.prdata);


      //======================================================================
      // STATUS_REG
      //
      // Use tr.prdata directly.
      // Do NOT read get_mirrored_value() again for the current transaction.
      //======================================================================

      if (rg.get_name() == "STATUS_REG") begin


        // Replace these bit positions with actual RAL field positions.
        status_busy =
          tr.prdata[0];

        status_done =
          tr.prdata[1];

        status_slave_error =
          tr.prdata[2];


        `uvm_info(
          "STATUS_DEBUG",
          $sformatf(
            "STATUS READ: PRDATA=0x%08h BUSY=%0b DONE=%0b SLAVE_ERROR=%0b",
            tr.prdata,
            status_busy,
            status_done,
            status_slave_error),
          UVM_MEDIUM)

      end


      //======================================================================
      // RXDATA_REG
      //
      // RXDATA belongs to an I2C READ.
      //
      // Push only when:
      //
      //     DONE       = 1
      //     SLAVE_ERROR = 0
      //======================================================================

      if (rg.get_name() == "RXDATA_REG") begin


        if (status_done && !status_slave_error && !rxdata_pushed) begin


          tr_copy =
            apb_i2c_apb_item::type_id::create("apb_rx_copy");


          tr_copy.copy(tr);


          apb_queue.push_back(tr_copy);
	 rxdata_pushed = 1'b1;

          `uvm_info(
            "APB_QUEUE",
            $sformatf(
              "RXDATA PUSHED: PRDATA=0x%08h QUEUE_SIZE=%0d",
              tr.prdata,
              apb_queue.size()),
            UVM_MEDIUM)

        end
        else begin


          `uvm_info(
            "APB_QUEUE",
            $sformatf(
              "RXDATA NOT PUSHED: DONE=%0b SLAVE_ERROR=%0b",
              status_done,
              status_slave_error),
            UVM_MEDIUM)

        end

      end

    end


    //========================================================================
    // Try queue comparison
    //========================================================================

    check_queues();

  endfunction


  //==========================================================================
  // I2C MONITOR
  //
  // Every complete I2C transaction is pushed into I2C queue.
  //==========================================================================

  virtual function void write_i2c(apb_i2c_i2c_item tr);

    apb_i2c_i2c_item tr_copy;


    if (tr == null)
      return;


    `uvm_info(
      "I2C_MONITOR",
      $sformatf(
        "I2C transaction received: %s",
        tr.convert2string()),
      UVM_HIGH)


    //========================================================================
    // Make independent copy
    //========================================================================

    tr_copy =
      apb_i2c_i2c_item::type_id::create("i2c_copy");


    tr_copy.copy(tr);


    //========================================================================
    // Push complete transaction
    //========================================================================

    i2c_queue.push_back(tr_copy);


    `uvm_info(
      "I2C_QUEUE",
      $sformatf(
        "I2C PUSHED: QUEUE_SIZE=%0d %s",
        i2c_queue.size(),
        tr_copy.convert2string()),
      UVM_MEDIUM)


    //========================================================================
    // Try comparison
    //========================================================================

    check_queues();

  endfunction


  //==========================================================================
  // CHECK QUEUES
  //
  // I2C WRITE:
  //
  //       APB pwdata == I2C rdata
  //
  //
  // I2C READ:
  //
  //       APB prdata == I2C wdata
  //==========================================================================

  function void check_queues();

    apb_i2c_apb_item apb_tr;
    apb_i2c_i2c_item i2c_tr;


    //========================================================================
    // Nothing to compare until both queues have an entry
    //========================================================================

    if (apb_queue.size() == 0)
      return;

    if (i2c_queue.size() == 0)
      return;


    `uvm_info(
      "QUEUE_CHECK",
      $sformatf(
        "Both queues valid: APB=%0d I2C=%0d",
        apb_queue.size(),
        i2c_queue.size()),
      UVM_MEDIUM)


    //========================================================================
    // Look at first entries
    //
    // Use [0] first rather than immediately popping.
    // This prevents losing transactions if the transaction type is wrong.
    //========================================================================

    apb_tr = apb_queue[0];
    i2c_tr = i2c_queue[0];


    //========================================================================
    // I2C WRITE
    //
    // write=0 -> I2C WRITE
    //
    // APB must be WRITE.
    //
    // Compare:
    //
    //       APB pwdata == I2C rdata
    //========================================================================

    if (i2c_tr.write == 1'b0) begin


      `uvm_info(
        "QUEUE_CHECK",
        "Checking I2C WRITE",
        UVM_MEDIUM)


      if (!apb_tr.pwrite) begin

        `uvm_error(
          "SCOREBOARD",
          $sformatf(
            "I2C WRITE expects APB WRITE, but APB transaction is READ. APB=%s I2C=%s",
            apb_tr.convert2string(),
            i2c_tr.convert2string()))

        mismatch_cnt++;

        // Do not pop.
        return;

      end


      //======================================================================
      // Compare data
      //======================================================================

      if (apb_tr.pwdata[7:0] === i2c_tr.rdata[7:0]) begin


        match_cnt++;


        `uvm_info(
          "SCOREBOARD",
          $sformatf(
            "I2C WRITE PASS: APB pwdata=0x%02h I2C rdata=0x%02h",
            apb_tr.pwdata[7:0],
            i2c_tr.rdata[7:0]),
          UVM_LOW)


      end
      else begin


        mismatch_cnt++;


        `uvm_error(
          "SCOREBOARD",
          $sformatf(
            "I2C WRITE FAIL: APB pwdata=0x%02h I2C rdata=0x%02h",
            apb_tr.pwdata[7:0],
            i2c_tr.rdata[7:0]))

      end


      //======================================================================
      // Remove matched pair
      //======================================================================

      void'(apb_queue.pop_front());
      void'(i2c_queue.pop_front());

    end


    //========================================================================
    // I2C READ
    //
    // write=1 -> I2C READ
    //
    // APB must be READ.
    //
    // Compare:
    //
    //       APB prdata == I2C wdata
    //========================================================================

    else begin


      `uvm_info(
        "QUEUE_CHECK",
        "Checking I2C READ",
        UVM_MEDIUM)


      if (apb_tr.pwrite) begin

        `uvm_error(
          "SCOREBOARD",
          $sformatf(
            "I2C READ expects APB READ, but APB transaction is WRITE. APB=%s I2C=%s",
            apb_tr.convert2string(),
            i2c_tr.convert2string()))

        mismatch_cnt++;

        // Do not pop.
        return;

      end


      //======================================================================
      // Compare data
      //======================================================================

      if (apb_tr.prdata[7:0] === i2c_tr.wdata[7:0]) begin


        match_cnt++;


        `uvm_info(
          "SCOREBOARD",
          $sformatf(
            "I2C READ PASS: APB prdata=0x%02h I2C wdata=0x%02h",
            apb_tr.prdata[7:0],
            i2c_tr.wdata[7:0]),
          UVM_LOW)


      end
      else begin


        mismatch_cnt++;


        `uvm_error(
          "SCOREBOARD",
          $sformatf(
            "I2C READ FAIL: APB prdata=0x%02h I2C wdata=0x%02h",
            apb_tr.prdata[7:0],
            i2c_tr.wdata[7:0]))

      end


      //======================================================================
      // Remove matched pair
      //======================================================================

      void'(apb_queue.pop_front());
      void'(i2c_queue.pop_front());

    end


    //========================================================================
    // Queue status
    //========================================================================

    `uvm_info(
      "QUEUE_CHECK",
      $sformatf(
        "After comparison: APB_QUEUE=%0d I2C_QUEUE=%0d",
        apb_queue.size(),
        i2c_queue.size()),
      UVM_MEDIUM)

  endfunction


  //==========================================================================
  // RESET CHECK
  //==========================================================================

  task check_reset_values();

    uvm_reg regs[$];
    uvm_reg_data_t exp;
    uvm_reg_data_t mir;
    uvm_reg rg;


    ral_model.get_registers(regs);


    foreach (regs[i]) begin

      rg = regs[i];


      if (is_dont_compare(rg.get_name()))
        continue;


      if (is_volatile(rg.get_name()))
        continue;


      if (has_read_side_effect(rg.get_name()) ||
          has_write_side_effect(rg.get_name()))
        continue;


      if (!reg_readable(rg))
        continue;


      exp = rg.get_reset();
      mir = rg.get_mirrored_value();


      if (mir !== exp) begin

        mismatch_cnt++;


        `uvm_error(
          "SCOREBOARD",
          $sformatf(
            "RESET MISMATCH %s: mirrored=0x%0h reset=0x%0h",
            rg.get_name(),
            mir,
            exp))

      end
      else begin

        match_cnt++;

      end

    end

  endtask


  //==========================================================================
  // REGISTER READABLE
  //==========================================================================

  function bit reg_readable(uvm_reg rg);

    uvm_reg_field fs[$];


    rg.get_fields(fs);


    foreach (fs[i])
      if (fs[i].get_access() != "WO")
        return 1;


    return 0;

  endfunction


  //==========================================================================
  // MIRROR CHECK
  //==========================================================================

  function void check_mirror_desired(string ctx = "");

    uvm_reg regs[$];
    uvm_reg rg;


    ral_model.get_registers(regs);


    foreach (regs[i]) begin

      rg = regs[i];


      `uvm_info(
        "SCOREBOARD",
        $sformatf(
          "CHECK [%s] %s desired=0x%08h mirrored=0x%08h reset=0x%08h",
          ctx,
          rg.get_name(),
          rg.get(),
          rg.get_mirrored_value(),
          rg.get_reset()),
        UVM_HIGH)

    end

  endfunction


  //==========================================================================
  // REPORT
  //==========================================================================

  function void report_phase(uvm_phase phase);

    super.report_phase(phase);


    `uvm_info(
      "SCOREBOARD",
      $sformatf(
        "Scoreboard report: APB writes=%0d reads=%0d matches=%0d mismatches=%0d APB_QUEUE=%0d I2C_QUEUE=%0d",
        write_cnt,
        read_cnt,
        match_cnt,
        mismatch_cnt,
        apb_queue.size(),
        i2c_queue.size()),
      UVM_LOW)

  endfunction


endclass


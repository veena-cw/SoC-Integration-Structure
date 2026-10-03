//      // verilator_coverage annotation
        
        `include "uvm_macros.svh"
        import uvm_pkg::*;
        
        import apb_i2c_apb_item_pkg::*;
        import apb_i2c_ral_block_pkg::*;
        import apb_i2c_ral_metadata_pkg::*;
        
~000300 `uvm_analysis_imp_decl(_apb)
-000001  point: type=line comment=block hier=$unit::uvm_analysis_imp_apb__pi18__Vclpkg
+000300  point: type=line comment=block hier=$unit::uvm_analysis_imp_apb__pi18__Vclpkg
-000000  point: type=line comment=block hier=$unit::uvm_analysis_imp_apb__pi18__Vclpkg
~000025 `uvm_analysis_imp_decl(_i2c)
-000001  point: type=line comment=block hier=$unit::uvm_analysis_imp_i2c__pi19__Vclpkg
+000025  point: type=line comment=block hier=$unit::uvm_analysis_imp_i2c__pi19__Vclpkg
-000000  point: type=line comment=block hier=$unit::uvm_analysis_imp_i2c__pi19__Vclpkg
        
        
        class apb_i2c_scoreboard extends uvm_component;
        
%000001   `uvm_component_utils(apb_i2c_scoreboard)
-000001  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
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
        
%000001   function new(string name = "apb_i2c_scoreboard",
-000001  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
                       uvm_component parent = null);
        
%000001     super.new(name, parent);
-000001  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
%000001     bus_in = new("bus_in", this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
%000001     i2c_in = new("i2c_in", this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
          endfunction
        
        
          //==========================================================================
          // APB MONITOR
          //==========================================================================
        
 000300   virtual function void write_apb(apb_i2c_apb_item tr);
+000300  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
 000300     apb_i2c_apb_item tr_copy;
+000300  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
 000300     uvm_reg rg;
+000300  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
~000300     if (tr == null)
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
+000300  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
            //========================================================================
            // Counters
            //========================================================================
        
 000250     if (tr.pwrite)
+000050  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
+000250  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
 000050       write_cnt++;
+000050  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
            else
 000250       read_cnt++;
+000250  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
            `uvm_info("SCOREBOARD",
                      $sformatf(
                        "APB transaction: %s",
                        tr.convert2string()),
~000300               UVM_HIGH)
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
+000300  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
+000300  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
            //========================================================================
            // Find RAL register
            //========================================================================
        
 000300     rg = ral_model.default_map.get_reg_by_offset(tr.paddr);
+000300  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
~000300     if (rg == null) begin
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
+000300  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
              `uvm_warning(
                "SCOREBOARD",
                $sformatf(
                  "No RAL register found for APB address 0x%08h",
%000000           tr.paddr))
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
%000000       return;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
            end
        
        
            //========================================================================
            // APB WRITE
            //========================================================================
        
 000250     if (tr.pwrite) begin
+000050  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
+000250  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
              //----------------------------------------------------------------------
              // Update RAL mirror from actual APB write
              //----------------------------------------------------------------------
        
 000050       rg.predict(tr.pwdata);
+000050  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
              `uvm_info(
                "RAL_PREDICT",
                $sformatf(
                  "WRITE PREDICT: %s <= 0x%08h",
                  rg.get_name(),
                  tr.pwdata),
~000050         UVM_HIGH)
+000050  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
+000050  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
              //======================================================================
              // CTRL_REG
              //
              // IMPORTANT:
              // Do not depend on the RAL mirror here.
              // Use the actual APB write data.
              //======================================================================
        
 000025       if (rg.get_name() == "CTRL_REG") begin
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
+000025  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        		
 000025 		rg.predict(tr.pwdata[15:8]);
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        		
                // Replace READ_WRITE_BIT with actual field position
 000025         i2c_rw = tr.pwdata[15];
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
 000025 	  rxdata_pushed = 1'b0;
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
                `uvm_info(
                  "CTRL_DEBUG",
                  $sformatf(
                    "CTRL WRITE: PWDATA=0x%08h READ_WRITE=%0b",
                    tr.pwdata,
                    i2c_rw),
~000025           UVM_MEDIUM)
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
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
        
 000025       if (rg.get_name() == "TXDATA_REG") begin
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
+000025  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
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
~000025           UVM_LOW)
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
                //--------------------------------------------------------------------
                // Only push for I2C WRITE
                //--------------------------------------------------------------------
        
~000025         if (!status_busy && (i2c_rw == 1'b0)) begin
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=expr comment=((i2c_rw == 1'h0)==0) => 0 hier=$unit::apb_i2c_scoreboard__Vclpkg
+000025  point: type=expr comment=(status_busy==0 && (i2c_rw == 1'h0)==1) => 1 hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=expr comment=(status_busy==1) => 0 hier=$unit::apb_i2c_scoreboard__Vclpkg
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
 000025           tr_copy =
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
 000025             apb_i2c_apb_item::type_id::create("apb_tx_copy");
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
 000025           tr_copy.copy(tr);
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
 000025           apb_queue.push_back(tr_copy);
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
                  `uvm_info(
                    "APB_QUEUE",
                    $sformatf(
                      "TXDATA PUSHED: BUSY=%0b READ_WRITE=%0b QUEUE_SIZE=%0d DATA=0x%08h",
                      status_busy,
                      i2c_rw,
                      apb_queue.size(),
                      tr.pwdata),
~000025             UVM_MEDIUM)
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
                end
%000000         else begin
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
                  `uvm_info(
                    "APB_QUEUE",
                    $sformatf(
                      "TXDATA NOT PUSHED: BUSY=%0b READ_WRITE=%0b",
                      status_busy,
                      i2c_rw),
%000000             UVM_MEDIUM)
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
                end
        
              end
        
            end
        
        
            //========================================================================
            // APB READ
            //========================================================================
        
 000250     else begin
+000250  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
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
~000250         UVM_HIGH)
+000250  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
+000250  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
              //----------------------------------------------------------------------
              // Predict actual DUT read value into RAL mirror
              //----------------------------------------------------------------------
        
 000250       rg.predict(tr.prdata);
+000250  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
              //======================================================================
              // STATUS_REG
              //
              // Use tr.prdata directly.
              // Do NOT read get_mirrored_value() again for the current transaction.
              //======================================================================
        
~000250       if (rg.get_name() == "STATUS_REG") begin
+000250  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
                // Replace these bit positions with actual RAL field positions.
 000250         status_busy =
+000250  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
 000250           tr.prdata[0];
+000250  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
 000250         status_done =
+000250  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
 000250           tr.prdata[1];
+000250  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
 000250         status_slave_error =
+000250  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
 000250           tr.prdata[2];
+000250  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
                `uvm_info(
                  "STATUS_DEBUG",
                  $sformatf(
                    "STATUS READ: PRDATA=0x%08h BUSY=%0b DONE=%0b SLAVE_ERROR=%0b",
                    tr.prdata,
                    status_busy,
                    status_done,
                    status_slave_error),
~000250           UVM_MEDIUM)
+000250  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
+000250  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
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
        
~000250       if (rg.get_name() == "RXDATA_REG") begin
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
+000250  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
%000000         if (status_done && !status_slave_error && !rxdata_pushed) begin
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=expr comment=(rxdata_pushed==1) => 0 hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=expr comment=(status_done==0) => 0 hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=expr comment=(status_done==1 && status_slave_error==0 && rxdata_pushed==0) => 1 hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=expr comment=(status_slave_error==1) => 0 hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
%000000           tr_copy =
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
%000000             apb_i2c_apb_item::type_id::create("apb_rx_copy");
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
%000000           tr_copy.copy(tr);
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
%000000           apb_queue.push_back(tr_copy);
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
%000000 	 rxdata_pushed = 1'b1;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
                  `uvm_info(
                    "APB_QUEUE",
                    $sformatf(
                      "RXDATA PUSHED: PRDATA=0x%08h QUEUE_SIZE=%0d",
                      tr.prdata,
                      apb_queue.size()),
%000000             UVM_MEDIUM)
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
                end
%000000         else begin
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
                  `uvm_info(
                    "APB_QUEUE",
                    $sformatf(
                      "RXDATA NOT PUSHED: DONE=%0b SLAVE_ERROR=%0b",
                      status_done,
                      status_slave_error),
%000000             UVM_MEDIUM)
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
                end
        
              end
        
            end
        
        
            //========================================================================
            // Try queue comparison
            //========================================================================
        
 000300     check_queues();
+000300  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
          endfunction
        
        
          //==========================================================================
          // I2C MONITOR
          //
          // Every complete I2C transaction is pushed into I2C queue.
          //==========================================================================
        
 000025   virtual function void write_i2c(apb_i2c_i2c_item tr);
+000025  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
 000025     apb_i2c_i2c_item tr_copy;
+000025  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
~000025     if (tr == null)
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
+000025  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
            `uvm_info(
              "I2C_MONITOR",
              $sformatf(
                "I2C transaction received: %s",
                tr.convert2string()),
~000025       UVM_HIGH)
+000025  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
+000025  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
            //========================================================================
            // Make independent copy
            //========================================================================
        
 000025     tr_copy =
+000025  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
 000025       apb_i2c_i2c_item::type_id::create("i2c_copy");
+000025  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
 000025     tr_copy.copy(tr);
+000025  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
            //========================================================================
            // Push complete transaction
            //========================================================================
        
 000025     i2c_queue.push_back(tr_copy);
+000025  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
            `uvm_info(
              "I2C_QUEUE",
              $sformatf(
                "I2C PUSHED: QUEUE_SIZE=%0d %s",
                i2c_queue.size(),
                tr_copy.convert2string()),
~000025       UVM_MEDIUM)
+000025  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
            //========================================================================
            // Try comparison
            //========================================================================
        
 000025     check_queues();
+000025  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
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
        
 000325   function void check_queues();
+000325  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
 000325     apb_i2c_apb_item apb_tr;
+000325  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
 000325     apb_i2c_i2c_item i2c_tr;
+000325  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
            //========================================================================
            // Nothing to compare until both queues have an entry
            //========================================================================
        
~000100     if (apb_queue.size() == 0)
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
+000100  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
~000025     if (i2c_queue.size() == 0)
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
+000025  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
            `uvm_info(
              "QUEUE_CHECK",
              $sformatf(
                "Both queues valid: APB=%0d I2C=%0d",
                apb_queue.size(),
                i2c_queue.size()),
~000325       UVM_MEDIUM)
+000325  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
            //========================================================================
            // Look at first entries
            //
            // Use [0] first rather than immediately popping.
            // This prevents losing transactions if the transaction type is wrong.
            //========================================================================
        
 000325     apb_tr = apb_queue[0];
+000325  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
 000325     i2c_tr = i2c_queue[0];
+000325  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
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
        
~000025     if (i2c_tr.write == 1'b0) begin
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
              `uvm_info(
                "QUEUE_CHECK",
                "Checking I2C WRITE",
~000025         UVM_MEDIUM)
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
~000025       if (!apb_tr.pwrite) begin
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
+000025  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
                `uvm_error(
                  "SCOREBOARD",
                  $sformatf(
                    "I2C WRITE expects APB WRITE, but APB transaction is READ. APB=%s I2C=%s",
                    apb_tr.convert2string(),
%000000             i2c_tr.convert2string()))
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
%000000         mismatch_cnt++;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
                // Do not pop.
%000000         return;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
              end
        
        
              //======================================================================
              // Compare data
              //======================================================================
        
~000025       if (apb_tr.pwdata[7:0] === i2c_tr.rdata[7:0]) begin
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
 000025         match_cnt++;
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
                `uvm_info(
                  "SCOREBOARD",
                  $sformatf(
                    "I2C WRITE PASS: APB pwdata=0x%02h I2C rdata=0x%02h",
                    apb_tr.pwdata[7:0],
                    i2c_tr.rdata[7:0]),
~000025           UVM_LOW)
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
              end
%000000       else begin
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
%000000         mismatch_cnt++;
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
                `uvm_error(
                  "SCOREBOARD",
                  $sformatf(
                    "I2C WRITE FAIL: APB pwdata=0x%02h I2C rdata=0x%02h",
                    apb_tr.pwdata[7:0],
%000000             i2c_tr.rdata[7:0]))
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
              end
        
        
              //======================================================================
              // Remove matched pair
              //======================================================================
        
 000025       void'(apb_queue.pop_front());
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
 000025       void'(i2c_queue.pop_front());
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
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
        
%000000     else begin
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
              `uvm_info(
                "QUEUE_CHECK",
                "Checking I2C READ",
%000000         UVM_MEDIUM)
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
%000000       if (apb_tr.pwrite) begin
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
                `uvm_error(
                  "SCOREBOARD",
                  $sformatf(
                    "I2C READ expects APB READ, but APB transaction is WRITE. APB=%s I2C=%s",
                    apb_tr.convert2string(),
%000000             i2c_tr.convert2string()))
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
%000000         mismatch_cnt++;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
                // Do not pop.
%000000         return;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
              end
        
        
              //======================================================================
              // Compare data
              //======================================================================
        
%000000       if (apb_tr.prdata[7:0] === i2c_tr.wdata[7:0]) begin
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
%000000         match_cnt++;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
                `uvm_info(
                  "SCOREBOARD",
                  $sformatf(
                    "I2C READ PASS: APB prdata=0x%02h I2C wdata=0x%02h",
                    apb_tr.prdata[7:0],
                    i2c_tr.wdata[7:0]),
%000000           UVM_LOW)
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
              end
%000000       else begin
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
%000000         mismatch_cnt++;
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
                `uvm_error(
                  "SCOREBOARD",
                  $sformatf(
                    "I2C READ FAIL: APB prdata=0x%02h I2C wdata=0x%02h",
                    apb_tr.prdata[7:0],
%000000             i2c_tr.wdata[7:0]))
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
              end
        
        
              //======================================================================
              // Remove matched pair
              //======================================================================
        
%000000       void'(apb_queue.pop_front());
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
%000000       void'(i2c_queue.pop_front());
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
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
~000325       UVM_MEDIUM)
+000325  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
+000025  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
          endfunction
        
        
          //==========================================================================
          // RESET CHECK
          //==========================================================================
        
%000000   task check_reset_values();
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
%000000     uvm_reg regs[$];
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
%000000     uvm_reg_data_t exp;
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
%000000     uvm_reg_data_t mir;
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
%000000     uvm_reg rg;
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
%000000     ral_model.get_registers(regs);
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
%000000     foreach (regs[i]) begin
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
%000000       rg = regs[i];
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
%000000       if (is_dont_compare(rg.get_name()))
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
%000000         continue;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
%000000       if (is_volatile(rg.get_name()))
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
%000000         continue;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
%000000       if (has_read_side_effect(rg.get_name()) ||
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
                  has_write_side_effect(rg.get_name()))
%000000         continue;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
%000000       if (!reg_readable(rg))
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
%000000         continue;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
%000000       exp = rg.get_reset();
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
%000000       mir = rg.get_mirrored_value();
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
%000000       if (mir !== exp) begin
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
%000000         mismatch_cnt++;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
                `uvm_error(
                  "SCOREBOARD",
                  $sformatf(
                    "RESET MISMATCH %s: mirrored=0x%0h reset=0x%0h",
                    rg.get_name(),
                    mir,
%000000             exp))
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
              end
%000000       else begin
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
%000000         match_cnt++;
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
              end
        
            end
        
          endtask
        
        
          //==========================================================================
          // REGISTER READABLE
          //==========================================================================
        
%000000   function bit reg_readable(uvm_reg rg);
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
%000000     uvm_reg_field fs[$];
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
%000000     rg.get_fields(fs);
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
%000000     foreach (fs[i])
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
%000000       if (fs[i].get_access() != "WO")
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
%000000         return 1;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
%000000     return 0;
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
          endfunction
        
        
          //==========================================================================
          // MIRROR CHECK
          //==========================================================================
        
%000000   function void check_mirror_desired(string ctx = "");
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
%000000     uvm_reg regs[$];
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
%000000     uvm_reg rg;
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
%000000     ral_model.get_registers(regs);
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
%000000     foreach (regs[i]) begin
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
%000000       rg = regs[i];
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
              `uvm_info(
                "SCOREBOARD",
                $sformatf(
                  "CHECK [%s] %s desired=0x%08h mirrored=0x%08h reset=0x%08h",
                  ctx,
                  rg.get_name(),
                  rg.get(),
                  rg.get_mirrored_value(),
                  rg.get_reset()),
%000000         UVM_HIGH)
-000000  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
            end
        
          endfunction
        
        
          //==========================================================================
          // REPORT
          //==========================================================================
        
%000001   function void report_phase(uvm_phase phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
%000001     super.report_phase(phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
        
        
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
%000001       UVM_LOW)
-000001  point: type=line comment=block hier=$unit::apb_i2c_scoreboard__Vclpkg
-000001  point: type=branch comment=if hier=$unit::apb_i2c_scoreboard__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_scoreboard__Vclpkg
        
          endfunction
        
        
        endclass
        
        

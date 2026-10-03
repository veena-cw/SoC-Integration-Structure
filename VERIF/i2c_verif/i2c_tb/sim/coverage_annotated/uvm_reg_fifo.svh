//      // verilator_coverage annotation
        //
        // -------------------------------------------------------------
        //    Copyright 2010-2011 Mentor Graphics Corporation
        //    All Rights Reserved Worldwide
        //
        //    Licensed under the Apache License, Version 2.0 (the
        //    "License"); you may not use this file except in
        //    compliance with the License.  You may obtain a copy of
        //    the License at
        //
        //        http://www.apache.org/licenses/LICENSE-2.0
        //
        //    Unless required by applicable law or agreed to in
        //    writing, software distributed under the License is
        //    distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
        //    CONDITIONS OF ANY KIND, either express or implied.  See
        //    the License for the specific language governing
        //    permissions and limitations under the License.
        // -------------------------------------------------------------
        //
        
        
        //------------------------------------------------------------------------------
        // Class: uvm_reg_fifo
        //
        // This special register models a DUT FIFO accessed via write/read,
        // where writes push to the FIFO and reads pop from it.
        //
        // Backdoor access is not enabled, as it is not yet possible to force
        // complete FIFO state, i.e. the write and read indexes used to access
        // the FIFO data.
        //
        //------------------------------------------------------------------------------
        
        class uvm_reg_fifo extends uvm_reg;
        
            local uvm_reg_field value;
            local int m_set_cnt;
            local int unsigned m_size;
        
            // Variable: fifo
            //
            // The abstract representation of the FIFO. Constrained
            // to be no larger than the size parameter. It is public
            // to enable subtypes to add constraints on it and randomize.
            //
            rand uvm_reg_data_t fifo[$];
        
            constraint valid_fifo_size {
              fifo.size() <= m_size;
            }
        
        
            //----------------------
            // Group: Initialization
            //----------------------
        
            // Function: new
            //
            // Creates an instance of a FIFO register having ~size~ elements of
            // ~n_bits~ each.
            //
%000000     function new(string name = "reg_fifo",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
                         int unsigned size,
                         int unsigned n_bits,
                         int has_cover);
%000000        super.new(name,n_bits,has_cover);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000        m_size = size;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
            endfunction
        
        
            // Funtion: build
            //
            // Builds the abstract FIFO register object. Called by
            // the instantiating block, a <uvm_reg_block> subtype.
            //
%000000     virtual function void build();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000         value = uvm_reg_field::type_id::create("value");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000         value.configure(this, get_n_bits(), 0, "RW", 0, 32'h0, 1, 0, 1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
            endfunction
        
        
            // Function: set_compare
            //
            // Sets the compare policy during a mirror (read) of the DUT FIFO. 
            // The DUT read value is checked against its mirror only when both the
            // ~check~ argument in the <mirror()> call and the compare policy
            // for the field is <UVM_CHECK>.
            //
%000000     function void set_compare(uvm_check_e check=UVM_CHECK);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000        value.set_compare(check);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
            endfunction
        
        
            //---------------------
            // Group: Introspection
            //---------------------
        
            // Function: size
            //
            // The number of entries currently in the FIFO.
            //
%000000     function int unsigned size();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000       return fifo.size();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
            endfunction
        
        
            // Function: capacity
            //
            // The maximum number of entries, or depth, of the FIFO.
        
%000000     function int unsigned capacity();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000       return m_size;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
            endfunction
        
        
            //--------------
            // Group: Access
            //--------------
        
            //  Function: write
            // 
            //  Pushes the given value to the DUT FIFO. If auto-predition is enabled,
            //  the written value is also pushed to the abstract FIFO before the
            //  call returns. If auto-prediction is not enabled (see 
            //  <uvm_map::set_auto_predict>), the value is pushed to abstract
            //  FIFO only when the write operation is observed on the target bus.
            //  This mode requires using the <uvm_reg_predictor #(BUSTYPE)> class.
            //  If the write is via an <update()> operation, the abstract FIFO
            //  already contains the written value and is thus not affected by
            //  either prediction mode.
        
        
            //  Function: read
            //
            //  Reads the next value out of the DUT FIFO. If auto-prediction is
            //  enabled, the frontmost value in abstract FIFO is popped.
        
        
            // Function: set
            //
            // Pushes the given value to the abstract FIFO. You may call this
            // method several times before an <update()> as a means of preloading
            // the DUT FIFO. Calls to ~set()~ to a full FIFO are ignored. You
            // must call <update()> to update the DUT FIFO with your set values.
            //
%000000     virtual function void set(uvm_reg_data_t  value,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
                                      string          fname = "",
                                      int             lineno = 0);
              // emulate write, with intention of update
%000000       value &= ((1 << get_n_bits())-1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000       if (fifo.size() == m_size) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
              end
%000000       super.set(value,fname,lineno);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000       m_set_cnt++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000       fifo.push_back(this.value.value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
            endfunction
            
        
            // Function: update
            //
            // Pushes (writes) all values preloaded using <set(()> to the DUT>.
            // You must ~update~ after ~set~ before any blocking statements,
            // else other reads/writes to the DUT FIFO may cause the mirror to
            // become out of sync with the DUT.
            //
%000000     virtual task update(output uvm_status_e      status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
                                input  uvm_path_e        path = UVM_DEFAULT_PATH,
                                input  uvm_reg_map       map = null,
                                input  uvm_sequence_base parent = null,
                                input  int               prior = -1,
                                input  uvm_object        extension = null,
                                input  string            fname = "",
                                input  int               lineno = 0);
%000000        uvm_reg_data_t upd;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000        if (!m_set_cnt || fifo.size() == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000           return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000        m_update_in_progress = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000        for (int i=fifo.size()-m_set_cnt; m_set_cnt > 0; i++, m_set_cnt--) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000          if (i >= 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_fifo__Vclpkg
                    //uvm_reg_data_t val = get();
                    //super.update(status,path,map,parent,prior,extension,fname,lineno);
%000000             write(status,fifo[i],path,map,parent,prior,extension,fname,lineno);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
                 end
               end
%000000        m_update_in_progress = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
            endtask
        
        
            // Function: mirror
            //
            // Reads the next value out of the DUT FIFO. If auto-prediction is
            // enabled, the frontmost value in abstract FIFO is popped. If 
            // the ~check~ argument is set and comparison is enabled with
            // <set_compare()>.
        
        
            // Function: get
            //
            // Returns the next value from the abstract FIFO, but does not pop it.
            // Used to get the expected value in a <mirror()> operation.
            //
%000000     virtual function uvm_reg_data_t get(string fname="", int lineno=0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
               //return fifo.pop_front();
%000000        return fifo[0];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
            endfunction
        
        
            // Function: do_predict
            //
            // Updates the abstract (mirror) FIFO based on <write()> and
            // <read()> operations.  When auto-prediction is on, this method
            // is called before each read, write, peek, or poke operation returns.
            // When auto-prediction is off, this method is called by a 
            // <uvm_reg_predictor> upon receipt and conversion of an observed bus
            // operation to this register.
            //
            // If a write prediction, the observed
            // write value is pushed to the abstract FIFO as long as it is 
            // not full and the operation did not originate from an <update()>.
            // If a read prediction, the observed read value is compared
            // with the frontmost value in the abstract FIFO if <set_compare()>
            // enabled comparison and the FIFO is not empty.
            //
%000000     virtual function void do_predict(uvm_reg_item      rw,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
                                             uvm_predict_e     kind = UVM_PREDICT_DIRECT,
                                             uvm_reg_byte_en_t be = -1);
        
%000000       super.do_predict(rw,kind,be);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
        
%000000       if (rw.status == UVM_NOT_OK)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
        
%000000       case (kind)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
        
                UVM_PREDICT_WRITE,
%000000         UVM_PREDICT_DIRECT:
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000         begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000            if (fifo.size() != m_size && !m_update_in_progress)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=expr comment=((fifo.size() != m_size)==0) => 0 hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=expr comment=((fifo.size() != m_size)==1 && m_update_in_progress==0) => 1 hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=expr comment=(m_update_in_progress==1) => 0 hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000              fifo.push_back(this.value.value);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
                end
        
%000000         UVM_PREDICT_READ:
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000         begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000            uvm_reg_data_t value = rw.value[0] & ((1 << get_n_bits())-1);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000            uvm_reg_data_t mirror_val;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000            if (fifo.size() == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000              return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
                   end
%000000            mirror_val = fifo.pop_front();
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000            if (this.value.get_compare() == UVM_CHECK && mirror_val != value) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_fifo__Vclpkg
                      `uvm_warning("MIRROR_MISMATCH",
%000000                $sformatf("Observed DUT read value 'h%0h != mirror value 'h%0h",value,mirror_val))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_fifo__Vclpkg
                   end
                end
        
              endcase
        
            endfunction
        
        
            // Group: Special Overrides
        
            // Task: pre_write
            //
            // Special pre-processing for a <write()> or <update()>.
            // Called as a result of a <write()> or <update()>. It is an error to
            // attempt a write to a full FIFO or a write while an update is still
            // pending. An update is pending after one or more calls to <set()>.
            // If in your application the DUT allows writes to a full FIFO, you
            // must override ~pre_write~ as appropriate.
            //
%000000     virtual task pre_write(uvm_reg_item rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000       if (m_set_cnt && !m_update_in_progress) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000         `uvm_error("Needs Update","Must call update() after set() and before write()")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000         rw.status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
              end
%000000       if (fifo.size() >= m_size && !m_update_in_progress) begin
-000000  point: type=expr comment=((fifo.size() >= m_size)==0) => 0 hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=expr comment=((fifo.size() >= m_size)==1 && m_update_in_progress==0) => 1 hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=expr comment=(m_update_in_progress==1) => 0 hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000         `uvm_error("FIFO Full","Write to full FIFO ignored")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000         rw.status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
              end
            endtask
        
        
            // Task: pre_read
            //
            // Special post-processing for a <write()> or <update()>.
            // Aborts the operation if the internal FIFO is empty. If in your application
            // the DUT does not behave this way, you must override ~pre_write~ as
            // appropriate.
            //
            //
%000000     virtual task pre_read(uvm_reg_item rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
              // abort if fifo empty
%000000       if (fifo.size() == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000         rw.status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_fifo__Vclpkg
              end
            endtask
        
        
%000000     function void post_randomize();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
%000000       m_set_cnt = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_fifo__Vclpkg
            endfunction
        
        endclass
        
        

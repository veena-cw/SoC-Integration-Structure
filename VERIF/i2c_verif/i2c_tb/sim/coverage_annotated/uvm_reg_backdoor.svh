//      // verilator_coverage annotation
        //
        // -------------------------------------------------------------
        //    Copyright 2004-2009 Synopsys, Inc.
        //    Copyright 2010-2011 Mentor Graphics Corporation
        //    Copyright 2010 Cadence Design Systems, Inc.
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
        
        typedef class uvm_reg_cbs;
        
        
        //------------------------------------------------------------------------------
        // Class: uvm_reg_backdoor
        //
        // Base class for user-defined back-door register and memory access.
        //
        // This class can be extended by users to provide user-specific back-door access
        // to registers and memories that are not implemented in pure SystemVerilog
        // or that are not accessible using the default DPI backdoor mechanism.
        //------------------------------------------------------------------------------
        
        class uvm_reg_backdoor extends uvm_object;
        
           // Function: new
           //
           // Create an instance of this class
           //
           // Create an instance of the user-defined backdoor class
           // for the specified register or memory
           //
%000000    function new(string name = "");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000       super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
           endfunction: new
        
           
           // Task: do_pre_read
           //
           // Execute the pre-read callbacks
           //
           // This method ~must~ be called as the first statement in
           // a user extension of the <read()> method.
           //
%000000    protected task do_pre_read(uvm_reg_item rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000       pre_read(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
              `uvm_do_obj_callbacks(uvm_reg_backdoor, uvm_reg_cbs, this,
%000000                             pre_read(rw))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
           endtask
        
        
           // Task: do_post_read
           //
           // Execute the post-read callbacks
           //
           // This method ~must~ be called as the last statement in
           // a user extension of the <read()> method.
           //
%000000    protected task do_post_read(uvm_reg_item rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000       uvm_callback_iter#(uvm_reg_backdoor, uvm_reg_cbs) iter = new(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000       for(uvm_reg_cbs cb = iter.last(); cb != null; cb=iter.prev())
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000          cb.decode(rw.value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000       `uvm_do_obj_callbacks(uvm_reg_backdoor,uvm_reg_cbs,this,post_read(rw))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000       post_read(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
           endtask
        
        
           // Task: do_pre_write
           //
           // Execute the pre-write callbacks
           //
           // This method ~must~ be called as the first statement in
           // a user extension of the <write()> method.
           //
%000000    protected task do_pre_write(uvm_reg_item rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000       uvm_callback_iter#(uvm_reg_backdoor, uvm_reg_cbs) iter = new(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000       pre_write(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000       `uvm_do_obj_callbacks(uvm_reg_backdoor,uvm_reg_cbs,this,pre_write(rw))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000       for(uvm_reg_cbs cb = iter.first(); cb != null; cb = iter.next())
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000          cb.encode(rw.value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
           endtask
        
        
           // Task: do_post_write
           //
           // Execute the post-write callbacks
           //
           // This method ~must~ be called as the last statement in
           // a user extension of the <write()> method.
           //
%000000    protected task do_post_write(uvm_reg_item rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000       `uvm_do_obj_callbacks(uvm_reg_backdoor,uvm_reg_cbs,this,post_write(rw))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000       post_write(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
           endtask
        
        
           // Task: write
           //
           // User-defined backdoor write operation.
           //
           // Call <do_pre_write()>.
           // Deposit the specified value in the specified register HDL implementation.
           // Call <do_post_write()>.
           // Returns an indication of the success of the operation.
           //
           extern virtual task write(uvm_reg_item rw);
        
        
           // Task: read
           //
           // User-defined backdoor read operation.
           //
           // Overload this method only if the backdoor requires the use of task.
           //
           // Call <do_pre_read()>.
           // Peek the current value of the specified HDL implementation.
           // Call <do_post_read()>.
           // Returns the current value and an indication of the success of
           // the operation.
           //
           // By default, calls <read_func()>.
           //
           extern virtual task read(uvm_reg_item rw);
        
           
           // Function: read_func
           //
           // User-defined backdoor read operation.
           //
           // Peek the current value in the HDL implementation.
           // Returns the current value and an indication of the success of
           // the operation.
           //
           extern virtual function void read_func(uvm_reg_item rw);
        
        
           // Function: is_auto_updated
           //
           // Indicates if wait_for_change() method is implemented
           //
           // Implement to return TRUE if and only if
           // <wait_for_change()> is implemented to watch for changes
           // in the HDL implementation of the specified field
           //
           extern virtual function bit is_auto_updated(uvm_reg_field field);
        
        
           // Task: wait_for_change
           //
           // Wait for a change in the value of the register or memory
           // element in the DUT.
           //
           // When this method returns, the mirror value for the register
           // corresponding to this instance of the backdoor class will be updated
           // via a backdoor read operation.
           //
           extern virtual local task wait_for_change(uvm_object element);
        
          
           /*local*/ extern function void start_update_thread(uvm_object element);
           /*local*/ extern function void kill_update_thread(uvm_object element);
           /*local*/ extern function bit has_update_threads();
        
        
           // Task: pre_read
           //
           // Called before user-defined backdoor register read.
           //
           // The registered callback methods are invoked after the invocation
           // of this method.
           //
%000000    virtual task pre_read(uvm_reg_item rw); endtask
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
        
        
           // Task: post_read
           //
           // Called after user-defined backdoor register read.
           //
           // The registered callback methods are invoked before the invocation
           // of this method.
           //
%000000    virtual task post_read(uvm_reg_item rw); endtask
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
        
        
           // Task: pre_write
           //
           // Called before user-defined backdoor register write.
           //
           // The registered callback methods are invoked after the invocation
           // of this method.
           //
           // The written value, if modified, modifies the actual value that
           // will be written.
           //
%000000    virtual task pre_write(uvm_reg_item rw); endtask
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
        
        
           // Task: post_write
           //
           // Called after user-defined backdoor register write.
           //
           // The registered callback methods are invoked before the invocation
           // of this method.
           //
%000000    virtual task post_write(uvm_reg_item rw); endtask
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
        
        
           string fname;
           int lineno;
        
        `ifdef UVM_USE_PROCESS_CONTAINER
           local process_container_c m_update_thread[uvm_object];
        `else
           local process m_update_thread[uvm_object];
        `endif 
        
%000001    `uvm_object_utils(uvm_reg_backdoor)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000001    `uvm_register_cb(uvm_reg_backdoor, uvm_reg_cbs)
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
        
        
        endclass: uvm_reg_backdoor
        
        
        //------------------------------------------------------------------------------
        // IMPLEMENTATION
        //------------------------------------------------------------------------------
        
        
        // is_auto_updated
        
%000000 function bit uvm_reg_backdoor::is_auto_updated(uvm_reg_field field);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000    return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
        endfunction
        
        
        // wait_for_change
        
%000000 task uvm_reg_backdoor::wait_for_change(uvm_object element);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000    `uvm_fatal("RegModel", "uvm_reg_backdoor::wait_for_change() method has not been overloaded");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
        endtask
        
        
        // start_update_thread
        
%000000 function void uvm_reg_backdoor::start_update_thread(uvm_object element);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000    uvm_reg rg;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000    if (this.m_update_thread.exists(element)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000       this.kill_update_thread(element);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
           end
%000000    if (!$cast(rg,element))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000      return; // only regs supported at this time
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
        
%000000    fork
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000       begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000          uvm_reg_field fields[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
        
        `ifdef UVM_USE_PROCESS_CONTAINER         
                 this.m_update_thread[element] = new(process::self());
        `else
%000000          this.m_update_thread[element] = process::self();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
        `endif
              
%000000          rg.get_fields(fields);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000          forever begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000             uvm_status_e status;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000             uvm_reg_data_t  val;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000             uvm_reg_item r_item = new("bd_r_item");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000             r_item.element = rg;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000             r_item.element_kind = UVM_REG;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000             this.read(r_item);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000             val = r_item.value[0];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000             if (r_item.status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
                       `uvm_error("RegModel", $sformatf("Backdoor read of register '%s' failed.",
%000000                           rg.get_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
                    end
%000000             foreach (fields[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000                if (this.is_auto_updated(fields[i])) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000                   r_item.value[0] = (val >> fields[i].get_lsb_pos()) &
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
                                            ((1 << fields[i].get_n_bits())-1);
%000000                   fields[i].do_predict(r_item);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
                        end
                    end
%000000             this.wait_for_change(element);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
                 end
              end
           join_none
        endfunction
        
        
        // kill_update_thread
        
%000000 function void uvm_reg_backdoor::kill_update_thread(uvm_object element);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000    if (this.m_update_thread.exists(element)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
        
        `ifdef UVM_USE_PROCESS_CONTAINER
              this.m_update_thread[element].p.kill();
        `else 
%000000       this.m_update_thread[element].kill();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
        `endif
        
%000000       this.m_update_thread.delete(element);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
           end
        endfunction
        
        
        // has_update_threads
        
%000000 function bit uvm_reg_backdoor::has_update_threads();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000    return this.m_update_thread.num() > 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
        endfunction
        
        
        // write
        
%000000 task uvm_reg_backdoor::write(uvm_reg_item rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000    `uvm_fatal("RegModel", "uvm_reg_backdoor::write() method has not been overloaded");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
        endtask
        
        
        // read
        
%000000 task uvm_reg_backdoor::read(uvm_reg_item rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000    do_pre_read(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000    read_func(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000    do_post_read(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
        endtask
        
        
        // read_func
        
%000000 function void uvm_reg_backdoor::read_func(uvm_reg_item rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000    `uvm_fatal("RegModel", "uvm_reg_backdoor::read_func() method has not been overloaded");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
%000000    rw.status = UVM_NOT_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_backdoor__Vclpkg
        endfunction
        

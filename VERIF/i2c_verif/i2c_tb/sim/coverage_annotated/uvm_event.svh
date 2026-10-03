//      // verilator_coverage annotation
        //
        //------------------------------------------------------------------------------
        //   Copyright 2007-2010 Mentor Graphics Corporation
        //   Copyright 2007-2011 Cadence Design Systems, Inc.
        //   Copyright 2010 Synopsys, Inc.
        //   All Rights Reserved Worldwide
        //
        //   Licensed under the Apache License, Version 2.0 (the
        //   "License"); you may not use this file except in
        //   compliance with the License.  You may obtain a copy of
        //   the License at
        //
        //       http://www.apache.org/licenses/LICENSE-2.0
        //
        //   Unless required by applicable law or agreed to in
        //   writing, software distributed under the License is
        //   distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
        //   CONDITIONS OF ANY KIND, either express or implied.  See
        //   the License for the specific language governing
        //   permissions and limitations under the License.
        //------------------------------------------------------------------------------
        
        //------------------------------------------------------------------------------
        //
        // CLASS: uvm_event
        //
        // The uvm_event class is a wrapper class around the SystemVerilog event
        // construct.  It provides some additional services such as setting callbacks
        // and maintaining the number of waiters.
        //
        //------------------------------------------------------------------------------
        
        class uvm_event extends uvm_object;
        
%000001   const static string type_name = "uvm_event";
-000001  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
        
          local event      m_event;
          local int        num_waiters;
          local bit        on;
 003012   local time       trigger_time=0;
+003012  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
          local uvm_object trigger_data;
          local uvm_event_callback  callbacks[$];
        
          // Function: new
          //
          // Creates a new event object.
        
 003012   function new (string name="");
+003012  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
 003012     super.new(name);
+003012  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
          endfunction  
        
        
          //---------//
          // waiting //
          //---------//
        
          // Task: wait_on
          //
          // Waits for the event to be activated for the first time.
          //
          // If the event has already been triggered, this task returns immediately.
          // If ~delta~ is set, the caller will be forced to wait a single delta #0
          // before returning. This prevents the caller from returning before
          // previously waiting processes have had a chance to resume.
          //
          // Once an event has been triggered, it will be remain "on" until the event
          // is <reset>.
        
 000175   virtual task wait_on (bit delta=0);
+000175  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     if (on) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_event__Vclpkg
~000175       if (delta)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
+000175  point: type=branch comment=else hier=uvm_pkg::uvm_event__Vclpkg
%000000         #0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
            end
 000175     num_waiters++;
+000175  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
 000175     @on;
+000175  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
          endtask
        
        
          // Task: wait_off
          //
          // If the event has already triggered and is "on", this task waits for the
          // event to be turned "off" via a call to <reset>.
          //
          // If the event has not already been triggered, this task returns immediately.
          // If ~delta~ is set, the caller will be forced to wait a single delta #0
          // before returning. This prevents the caller from returning before
          // previously waiting processes have had a chance to resume.
        
%000000   virtual task wait_off (bit delta=0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     if (!on) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_event__Vclpkg
-000000  point: type=expr comment=(on==0) => 1 hier=uvm_pkg::uvm_event__Vclpkg
-000000  point: type=expr comment=(on==1) => 0 hier=uvm_pkg::uvm_event__Vclpkg
%000000       if (delta)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_event__Vclpkg
%000000         #0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
            end
%000000     num_waiters++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     @on;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
          endtask
        
        
          // Task: wait_trigger
          //
          // Waits for the event to be triggered. 
          //
          // If one process calls wait_trigger in the same delta as another process
          // calls <trigger>, a race condition occurs. If the call to wait occurs
          // before the trigger, this method will return in this delta. If the wait
          // occurs after the trigger, this method will not return until the next
          // trigger, which may never occur and thus cause deadlock.
        
%000000   virtual task wait_trigger ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     num_waiters++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     @m_event;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
          endtask
        
        
          // Task: wait_ptrigger
          //
          // Waits for a persistent trigger of the event. Unlike <wait_trigger>, this
          // views the trigger as persistent within a given time-slice and thus avoids
          // certain race conditions. If this method is called after the trigger but
          // within the same time-slice, the caller returns immediately.
        
%000000   virtual task wait_ptrigger ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     if (m_event.triggered)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_event__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
%000000     num_waiters++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     @m_event;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
          endtask
        
        
          // Task: wait_trigger_data
          //
          // This method calls <wait_trigger> followed by <get_trigger_data>.
        
%000000   virtual task wait_trigger_data (output uvm_object data);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     wait_trigger();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     data = get_trigger_data();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
          endtask
        
        
          // Task: wait_ptrigger_data
          //
          // This method calls <wait_ptrigger> followed by <get_trigger_data>.
        
%000000   virtual task wait_ptrigger_data (output uvm_object data);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     wait_ptrigger();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     data = get_trigger_data();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
          endtask
        
        
          //------------//
          // triggering //
          //------------//
        
          // Function: trigger
          //
          // Triggers the event, resuming all waiting processes.
          //
          // An optional ~data~ argument can be supplied with the enable to provide
          // trigger-specific information.
        
 000808   virtual function void trigger (uvm_object data=null);
+000808  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
 000808     int skip;
+000808  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
 000808     skip=0;
+000808  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
~000808     if (callbacks.size()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
+000808  point: type=branch comment=else hier=uvm_pkg::uvm_event__Vclpkg
%000000       for (int i=0;i<callbacks.size();i++) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000         uvm_event_callback tmp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000         tmp=callbacks[i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000         skip = skip + tmp.pre_trigger(this,data);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
              end
            end
~000808     if (skip==0) begin
+000808  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_event__Vclpkg
 000808       ->m_event;
+000808  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
~000808       if (callbacks.size()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
+000808  point: type=branch comment=else hier=uvm_pkg::uvm_event__Vclpkg
%000000         for (int i=0;i<callbacks.size();i++) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000           uvm_event_callback tmp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000           tmp=callbacks[i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000           tmp.post_trigger(this,data);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
                end
              end
 000808       num_waiters = 0;
+000808  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
 000808       on = 1;
+000808  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
 000808       trigger_time = $realtime;
+000808  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
 000808       trigger_data = data;
+000808  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
            end
          endfunction
        
        
          // Function: get_trigger_data
          //
          // Gets the data, if any, provided by the last call to <trigger>.
        
%000000   virtual function uvm_object get_trigger_data ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     return trigger_data;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
          endfunction
        
        
          // Function: get_trigger_time
          //
          // Gets the time that this event was last triggered. If the event has not been
          // triggered, or the event has been reset, then the trigger time will be 0.
        
%000000   virtual function time get_trigger_time ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     return trigger_time;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
          endfunction
        
        
          //-------//
          // state //
          //-------//
        
          // Function: is_on
          //
          // Indicates whether the event has been triggered since it was last reset. 
          //
          // A return of 1 indicates that the event has triggered.
        
%000000   virtual function bit is_on ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     return (on == 1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
          endfunction
        
        
          // Function: is_off
          //
          // Indicates whether the event has been triggered or been reset.
          //
          // A return of 1 indicates that the event has not been triggered.
        
%000000   virtual function bit is_off ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     return (on == 0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
          endfunction
        
        
          // Function: reset
          //
          // Resets the event to its off state. If ~wakeup~ is set, then all processes
          // currently waiting for the event are activated before the reset.
          //
          // No callbacks are called during a reset.
        
%000000   virtual function void reset (bit wakeup=0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
            event e;
%000000     if (wakeup)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_event__Vclpkg
%000000       ->m_event;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
%000000     m_event = e;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     num_waiters = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     on = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     trigger_time = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     trigger_data = null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
          endfunction
        
        
          //-----------//
          // callbacks //
          //-----------//
        
          // Function: add_callback
          //
          // Registers a callback object, ~cb~, with this event. The callback object
          // may include pre_trigger and post_trigger functionality. If ~append~ is set
          // to 1, the default, ~cb~ is added to the back of the callback list. Otherwise,
          // ~cb~ is placed at the front of the callback list.
        
%000000   virtual function void add_callback (uvm_event_callback cb, bit append=1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     for (int i=0;i<callbacks.size();i++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000       if (cb == callbacks[i]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_event__Vclpkg
%000000         uvm_report_warning("CBRGED","add_callback: Callback already registered. Ignoring.", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
              end
            end
%000000     if (append)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_event__Vclpkg
%000000       callbacks.push_back(cb);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
            else
%000000       callbacks.push_front(cb);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_event__Vclpkg
          endfunction
        
        
          // Function: delete_callback
          //
          // Unregisters the given callback, ~cb~, from this event. 
          
%000000   virtual function void delete_callback (uvm_event_callback cb);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     for (int i=0;i<callbacks.size();i++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000       if (cb == callbacks[i]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_event__Vclpkg
%000000         callbacks.delete(i);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
              end
            end
%000000     uvm_report_warning("CBNTFD", "delete_callback: Callback not found. Ignoring delete request.", UVM_NONE);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
          endfunction
        
        
          //--------------//
          // waiters list //
          //--------------//
        
          // Function: cancel
          //
          // Decrements the number of waiters on the event. 
          //
          // This is used if a process that is waiting on an event is disabled or
          // activated by some other means.
        
%000000   virtual function void cancel ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     if (num_waiters > 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_event__Vclpkg
%000000       num_waiters--;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
          endfunction
        
        
          // Function: get_num_waiters
          //
          // Returns the number of processes waiting on the event.
        
%000000   virtual function int get_num_waiters ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     return num_waiters;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
          endfunction
        
        
%000000   virtual function uvm_object create(string name=""); 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     uvm_event v;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     v=new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     return v;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
          endfunction
        
        
%000000   virtual function string get_type_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     return type_name;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
          endfunction
        
        
%000000   virtual function void do_print (uvm_printer printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     printer.print_int("num_waiters", num_waiters, $bits(num_waiters), UVM_DEC, ".", "int");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     printer.print_int("on", on, $bits(on), UVM_BIN, ".", "bit");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     printer.print_time("trigger_time", trigger_time);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     printer.print_object("trigger_data", trigger_data);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     printer.m_scope.down("callbacks");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     foreach(callbacks[e]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_event__Vclpkg
%000000       printer.print_object($sformatf("[%0d]",e), callbacks[e], "[");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
            end
%000000     printer.m_scope.up();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
          endfunction
        
        
%000000   virtual function void do_copy (uvm_object rhs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     uvm_event e;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     super.do_copy(rhs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     if(!$cast(e, rhs) || (e==null)) return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_event__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_event__Vclpkg
          
%000000     m_event = e.m_event;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     num_waiters = e.num_waiters;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     on = e.on;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     trigger_time = e.trigger_time;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     trigger_data = e.trigger_data;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     callbacks.delete();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
%000000     callbacks = e.callbacks;   
-000000  point: type=line comment=block hier=uvm_pkg::uvm_event__Vclpkg
        
          endfunction
        
        endclass : uvm_event
        
        

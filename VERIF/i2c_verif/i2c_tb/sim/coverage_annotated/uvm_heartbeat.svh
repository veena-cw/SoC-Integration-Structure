//      // verilator_coverage annotation
        //----------------------------------------------------------------------
        //   Copyright 2007-2011 Mentor Graphics Corporation
        //   Copyright 2007-2009 Cadence Design Systems, Inc. 
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
        //----------------------------------------------------------------------
        
        `ifndef UVM_HEARTBEAT_SVH
        `define UVM_HEARTBEAT_SVH
        
        typedef enum {
          UVM_ALL_ACTIVE,
          UVM_ONE_ACTIVE,
          UVM_ANY_ACTIVE,
          UVM_NO_HB_MODE
        } uvm_heartbeat_modes;
        
        typedef class uvm_heartbeat_callback;
        typedef uvm_callbacks #(uvm_callbacks_objection,uvm_heartbeat_callback) uvm_heartbeat_cbs_t;
        
        
        //------------------------------------------------------------------------------
        //
        // Class: uvm_heartbeat
        //
        //------------------------------------------------------------------------------
        // Heartbeats provide a way for environments to easily ensure that their
        // descendants are alive. A uvm_heartbeat is associated with a specific
        // objection object. A component that is being tracked by the heartbeat
        // object must raise (or drop) the synchronizing objection during
        // the heartbeat window. The synchronizing objection must be a
        // <uvm_callbacks_objection> type.
        //
        // The uvm_heartbeat object has a list of participating objects. The heartbeat
        // can be configured so that all components (UVM_ALL_ACTIVE), exactly one
        // (UVM_ONE_ACTIVE), or any component (UVM_ANY_ACTIVE) must trigger the
        // objection in order to satisfy the heartbeat condition.
        //------------------------------------------------------------------------------
        
        typedef class uvm_objection_callback;
        class uvm_heartbeat extends uvm_object;
        
          protected uvm_callbacks_objection m_objection;
          protected uvm_heartbeat_callback m_cb;
          protected uvm_component   m_cntxt;
          protected uvm_heartbeat_modes   m_mode;
          protected uvm_component   m_hblist[$];
          protected uvm_event       m_event;
          protected bit             m_started;
          protected event           m_stop_event;
        
          // Function: new
          //
          // Creates a new heartbeat instance associated with ~cntxt~. The context
          // is the hierarchical location that the heartbeat objections will flow
          // through and be monitored at. The ~objection~ associated with the heartbeat 
          // is optional, if it is left null but it must be set before the heartbeat
          // monitor will activate.
          //
          //| uvm_callbacks_objection myobjection = new("myobjection"); //some shared objection
          //| class myenv extends uvm_env;
          //|    uvm_heartbeat hb = new("hb", this, myobjection);
          //|    ...
          //| endclass
        
%000000   function new(string name, uvm_component cntxt, uvm_callbacks_objection objection=null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     m_objection = objection;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
            
            //if a cntxt is given it will be used for reporting.
%000000     if(cntxt != null) m_cntxt = cntxt;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     else m_cntxt = uvm_root::get();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat__Vclpkg
        
%000000     m_cb = new({name,"_cb"},m_cntxt);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
        
          endfunction
        
        
          // Function: set_mode
          //
          // Sets or retrieves the heartbeat mode. The current value for the heartbeat
          // mode is returned. If an argument is specified to change the mode then the
          // mode is changed to the new value.
        
%000000   function uvm_heartbeat_modes set_mode (uvm_heartbeat_modes mode = UVM_NO_HB_MODE);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     set_mode = m_mode;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     if(mode == UVM_ANY_ACTIVE || mode == UVM_ONE_ACTIVE || mode == UVM_ALL_ACTIVE)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=expr comment=((mode == uvm_pkg::UVM_ALL_ACTIVE)==1) => 1 hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=expr comment=((mode == uvm_pkg::UVM_ANY_ACTIVE)==0 && (mode == uvm_pkg::UVM_ONE_ACTIVE)==0 && (mode == uvm_pkg::UVM_ALL_ACTIVE)==0) => 0 hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=expr comment=((mode == uvm_pkg::UVM_ANY_ACTIVE)==1) => 1 hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=expr comment=((mode == uvm_pkg::UVM_ONE_ACTIVE)==1) => 1 hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000       m_mode = mode;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
          endfunction
        
        
          // Function: set_heartbeat 
          //
          // Sets up the heartbeat event and assigns a list of objects to watch. The
          // monitoring is started as soon as this method is called. Once the
          // monitoring has been started with a specific event, providing a new
          // monitor event results in an error. To change trigger events, you
          // must first <stop> the monitor and then <start> with a new event trigger.
          //
          // If the trigger event ~e~ is null and there was no previously set
          // trigger event, then the monitoring is not started. Monitoring can be 
          // started by explicitly calling <start>.
        
%000000   function void set_heartbeat (uvm_event e, ref uvm_component comps[$]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     uvm_object c;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     foreach(comps[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000       c = comps[i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000       if(!m_cb.cnt.exists(c)) 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000         m_cb.cnt[c]=0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000       if(!m_cb.last_trigger.exists(c)) 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000         m_cb.last_trigger[c]=0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
            end
%000000     if(e==null && m_event==null) return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     start(e);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
          endfunction
        
          // Function: add
          //
          // Add a single component to the set of components to be monitored.
          // This does not cause monitoring to be started. If monitoring is
          // currently active then this component will be immediately added
          // to the list of components and will be expected to participate
          // in the currently active event window.
        
%000000   function void add (uvm_component comp);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     uvm_object c = comp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     if(m_cb.cnt.exists(c)) return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     m_cb.cnt[c]=0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     m_cb.last_trigger[c]=0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
          endfunction
        
          // Function: remove
          //
          // Remove a single component to the set of components being monitored.
          // Monitoring is not stopped, even if the last component has been
          // removed (an explicit stop is required).
        
%000000   function void remove (uvm_component comp);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     uvm_object c = comp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     if(m_cb.cnt.exists(c)) m_cb.cnt.delete(c);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     if(m_cb.last_trigger.exists(c)) m_cb.last_trigger.delete(c);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat__Vclpkg
          endfunction
        
        
          // Function: start
          //
          // Starts the heartbeat monitor. If ~e~ is null then whatever event
          // was previously set is used. If no event was previously set then
          // a warning is issued. It is an error if the monitor is currently
          // running and ~e~ is specifying a different trigger event from the
          // current event.
        
%000000   function void start (uvm_event e=null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     if(m_event == null && e == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000       m_cntxt.uvm_report_warning("NOEVNT", { "start() was called for: ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000         get_name(), " with a null trigger and no currently set trigger" },
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000         UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
            end
%000000     if((m_event != null) && (e != m_event) && m_started) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000       m_cntxt.uvm_report_error("ILHBVNT", { "start() was called for: ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000         get_name(), " with trigger ", e.get_name(), " which is different ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000         "from the original trigger ", m_event.get_name() }, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
            end  
%000000     if(e != null) m_event = e;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     m_enable_cb();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     m_start_hb_process();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
          endfunction
        
          // Function: stop
          //
          // Stops the heartbeat monitor. Current state information is reset so
          // that if <start> is called again the process will wait for the first
          // event trigger to start the monitoring.
        
%000000   function void stop ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     m_started = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     ->m_stop_event;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     m_disable_cb();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
          endfunction
        
%000000   function void m_start_hb_process();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     if(m_started) return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     m_started = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     fork
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000       m_hb_process;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
            join_none
          endfunction
        
          protected bit m_added;
%000000   function void m_enable_cb;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     void'(m_cb.callback_mode(1));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     if(m_objection == null) return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     if(!m_added) 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=expr comment=(m_added==0) => 1 hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=expr comment=(m_added==1) => 0 hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000       uvm_heartbeat_cbs_t::add(m_objection, m_cb);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     m_added = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
          endfunction
        
%000000   function void m_disable_cb;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     void'(m_cb.callback_mode(0));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
          endfunction
        
%000000   task m_hb_process;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     uvm_object obj;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     bit  triggered;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     time last_trigger=0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000     fork
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000       begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
                // The process waits for the event trigger. The first trigger is
                // ignored, but sets the first start window. On susequent triggers
                // the monitor tests that the mode criteria was full-filled.
%000000         while(1) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000           m_event.wait_trigger();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000           if(triggered) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000             case (m_mode)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000               UVM_ALL_ACTIVE:              
-000000  point: type=line comment=case hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                 begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                   foreach(m_cb.cnt[idx]) begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                     obj = idx;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                     if(!m_cb.cnt[obj]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                       m_cntxt.uvm_report_fatal("HBFAIL", $sformatf("Did not recieve an update of %s for component %s since last event trigger at time %0t : last update time was %0t",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                         m_objection.get_name(), obj.get_full_name(), 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                         last_trigger, m_cb.last_trigger[obj]), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
                            end
                          end
                        end 
%000000               UVM_ANY_ACTIVE:              
-000000  point: type=line comment=case hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                 begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                   if(m_cb.cnt.num() && !m_cb.objects_triggered()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                     string s;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                     foreach(m_cb.cnt[idx]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                       obj = idx;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                       s={s,"\n  ",obj.get_full_name()};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
                            end
%000000                     m_cntxt.uvm_report_fatal("HBFAIL", $sformatf("Did not recieve an update of %s on any component since last event trigger at time %0t. The list of registered components is:%s",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                       m_objection.get_name(), last_trigger, s), UVM_NONE); 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
                          end
                        end 
%000000               UVM_ONE_ACTIVE:              
-000000  point: type=line comment=case hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                 begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                   if(m_cb.objects_triggered() > 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                     string s;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                     foreach(m_cb.cnt[idx])  begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                       obj = idx;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                       if(m_cb.cnt[obj]) $swrite(s,"%s\n  %s (updated: %0t)",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                          s, obj.get_full_name(), m_cb.last_trigger[obj]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
                            end
%000000                     m_cntxt.uvm_report_fatal("HBFAIL", $sformatf("Recieved update of %s from more than one component since last event trigger at time %0t. The list of triggered components is:%s",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                       m_objection.get_name(), last_trigger, s), UVM_NONE); 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
                          end
%000000                   if(m_cb.cnt.num() && !m_cb.objects_triggered()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                     string s;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                     foreach(m_cb.cnt[idx]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                       obj = idx;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                       s={s,"\n  ",obj.get_full_name()};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
                            end
%000000                     m_cntxt.uvm_report_fatal("HBFAIL", $sformatf("Did not recieve an update of %s on any component since last event trigger at time %0t. The list of registered components is:%s",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000                       m_objection.get_name(), last_trigger, s), UVM_NONE); 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat__Vclpkg
                          end
                        end 
                    endcase
                  end 
%000000           m_cb.reset_counts();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000           last_trigger = $realtime;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
%000000           triggered = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
                end
              end
%000000       @(m_stop_event);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
            join_any
%000000     disable fork;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat__Vclpkg
          endtask
        endclass
        
        
        class uvm_heartbeat_callback extends uvm_objection_callback;
          int  cnt [uvm_object];
          time last_trigger [uvm_object];
          uvm_object target;
        
%000000   function new(string name, uvm_object target);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
%000000     super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
%000000     if (target != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
%000000        this.target = target;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
            else
%000000        this.target = uvm_root::get();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
          endfunction
        
%000000   virtual function void raised (uvm_objection objection,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
                                        uvm_object obj,
                                        uvm_object source_obj,
                                        string description,
                                        int count);
%000000     if(obj == target) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
%000000       if(!cnt.exists(source_obj))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
%000000         cnt[source_obj] = 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
%000000       cnt[source_obj] = cnt[source_obj]+1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
%000000       last_trigger[source_obj] = $realtime;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
            end
          endfunction
        
%000000   virtual function void dropped (uvm_objection objection,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
                                         uvm_object obj,
                                         uvm_object source_obj,
                                         string description,
                                         int count);
%000000     raised(objection,obj,source_obj,description,count);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
          endfunction
        
%000000   function void reset_counts;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
%000000     foreach(cnt[i]) cnt[i] = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
          endfunction
        
%000000   function int objects_triggered;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
%000000     objects_triggered = 0; 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
%000000     foreach(cnt[i])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
%000000       if (cnt[i] != 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
%000000         objects_triggered++;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_heartbeat_callback__Vclpkg
          endfunction
        
        endclass
        
        `endif
        
        

//      // verilator_coverage annotation
        //
        //----------------------------------------------------------------------
        //   Copyright 2007-2011 Mentor Graphics Corporation
        //   Copyright 2007-2011 Cadence Design Systems, Inc. 
        //   Copyright 2010-2011 Synopsys, Inc.
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
        
        `ifndef UVM_OBJECTION_SVH
        `define UVM_OBJECTION_SVH
        
        typedef class uvm_objection_context_object;
        typedef class uvm_objection;
        typedef class uvm_sequence_base;
        typedef class uvm_objection_callback;
        typedef uvm_callbacks #(uvm_objection,uvm_objection_callback) uvm_objection_cbs_t;
        typedef class uvm_cmdline_processor;
        typedef class uvm_callbacks_objection;
        
%000001 class uvm_objection_events;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_objection_events__Vclpkg
          int waiters;
          event raised;
          event dropped;
          event all_dropped;
        endclass
        
        //------------------------------------------------------------------------------
        // Title: Objection Mechanism
        //------------------------------------------------------------------------------
        // The following classes define the objection mechanism and end-of-test
        // functionality, which is based on <uvm_objection>.
        //------------------------------------------------------------------------------
        
        //------------------------------------------------------------------------------
        //
        // Class: uvm_objection
        //
        //------------------------------------------------------------------------------
        // Objections provide a facility for coordinating status information between
        // two or more participating components, objects, and even module-based IP.
        //
        // Tracing of objection activity can be turned on to follow the activity of
        // the objection mechanism. It may be turned on for a specific objection
        // instance with <uvm_objection::trace_mode>, or it can be set for all 
        // objections from the command line using the option +UVM_OBJECTION_TRACE.
        //------------------------------------------------------------------------------
        
        class uvm_objection extends uvm_report_object;
        
          protected bit     m_trace_mode;
          protected int     m_source_count[uvm_object];
          protected int     m_total_count [uvm_object];
          protected time    m_drain_time  [uvm_object];
          protected uvm_objection_events m_events [uvm_object];
          /*protected*/ bit     m_top_all_dropped;
        
 000047   protected uvm_root m_top = uvm_root::get();
+000047  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        
          static uvm_objection m_objections[$];
        
          //// Drain Logic
        
          // The context pool holds used context objects, so that
          // they're not constantly being recreated.  The maximum
          // number of contexts in the pool is equal to the maximum
          // number of simultaneous drains you could have occuring,
          // both pre and post forks.
          //
          // There's the potential for a programmability within the
          // library to dictate the largest this pool should be allowed
          // to grow, but that seems like overkill for the time being.
          local static uvm_objection_context_object m_context_pool[$];
        
          // These are the active drain processes, which have been
          // forked off by the background process.  A raise can
          // use this array to kill a drain.
        `ifndef UVM_USE_PROCESS_CONTAINER   
          local process m_drain_proc[uvm_object];
        `else
          local process_container_c m_drain_proc[uvm_object];
        `endif
           
          // These are the contexts which have been scheduled for
          // retrieval by the background process, but which the
          // background process hasn't seen yet.
          local static uvm_objection_context_object m_scheduled_list[$];
        
          // Once a context is seen by the background process, it is
          // removed from the scheduled list, and placed in the forked
          // list.  At the same time, it is placed in the scheduled
          // contexts array.  A re-raise can use the scheduled contexts
          // array to detect (and cancel) the drain.
          local uvm_objection_context_object m_scheduled_contexts[uvm_object];
          local uvm_objection_context_object m_forked_list[$];
        
          // Once the forked drain has actually started (this occurs
          // ~1 delta AFTER the background process schedules it), the
          // context is removed from the above array and list, and placed
          // in the forked_contexts list.  
          local uvm_objection_context_object m_forked_contexts[uvm_object];
        
 000047   /*protected*/ bit m_hier_mode = 1;
+000047  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        
 000047   uvm_root top = uvm_root::get();
+000047  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        
        
          protected bit m_cleared; /* for checking obj count<0 */
        
        
          // Function: clear
          //
          // Immediately clears the objection state. All counts are cleared and the
          // any processes waiting on a call to wait_for(UVM_ALL_DROPPED, uvm_top)
          // are released.
          //
          // The caller, if a uvm_object-based object, should pass its 'this' handle
          // to the ~obj~ argument to document who cleared the objection.
          // Any drain_times set by the user are not effected. 
          //
 000021   virtual function void clear(uvm_object obj=null);
+000021  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
 000021     string name;
+000021  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
 000021     uvm_objection_context_object ctxt;
+000021  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
 000021     int  idx;
+000021  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        
~000021     if (obj==null)
+000021  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
 000021       obj=m_top;
+000021  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
 000021     name = obj.get_full_name();
+000021  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
~000021     if (name == "")
+000021  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
 000021       name = "uvm_top";
+000021  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
            else
%000000       name = obj.get_full_name();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
~000021     if (!m_top_all_dropped && get_objection_total(m_top))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
+000021  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       uvm_report_warning("OBJTN_CLEAR",{"Object '",name,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000             "' cleared objection counts for ",get_name()});
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
            //Should there be a warning if there are outstanding objections?
 000021     m_source_count.delete();
+000021  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
 000021     m_total_count.delete();
+000021  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        
            // Remove any scheduled drains from the static queue
 000021     idx = 0;
+000021  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     while (idx < m_scheduled_list.size()) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000         if (m_scheduled_list[idx].objection == this) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000             m_scheduled_list[idx].clear();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000             m_context_pool.push_back(m_scheduled_list[idx]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000             m_scheduled_list.delete(idx);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                end
%000000         else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000             idx++;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
                end
            end
        
            // Scheduled contexts and m_forked_lists have duplicate
            // entries... clear out one, free the other.
 000021     m_scheduled_contexts.delete();
+000021  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     while (m_forked_list.size()) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000         m_forked_list[0].clear();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000         m_context_pool.push_back(m_forked_list[0]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000         void'(m_forked_list.pop_front());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
            end
        
            // running drains have a context and a process
~000021     foreach (m_forked_contexts[o]) begin
+000021  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        `ifndef UVM_USE_PROCESS_CONTAINER       
%000000         m_drain_proc[o].kill();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000         m_drain_proc.delete(o);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        `else
                m_drain_proc[o].p.kill();
                m_drain_proc.delete(o);
        `endif
               
%000000         m_forked_contexts[o].clear();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000         m_context_pool.push_back(m_forked_contexts[o]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000         m_forked_contexts.delete(o);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
            end
        
 000021     m_top_all_dropped = 0;
+000021  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
 000021     m_cleared = 1;
+000021  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
~000021     if (m_events.exists(m_top))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
+000021  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       ->m_events[m_top].all_dropped;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
        
          endfunction
        
        
          // Function: new
          //
          // Creates a new objection instance. Accesses the command line
          // argument +UVM_OBJECTION_TRACE to turn tracing on for
          // all objection objects.
        
 000047   function new(string name="");
+000047  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
 000047     uvm_cmdline_processor clp;
+000047  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
 000047     string trace_args[$];
+000047  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
 000047     super.new(name);
+000047  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
 000047     set_report_verbosity_level(m_top.get_report_verbosity_level());
+000047  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        
            // Get the command line trace mode setting
 000047     clp = uvm_cmdline_processor::get_inst();
+000047  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
~000047     if(clp.get_arg_matches("+UVM_OBJECTION_TRACE", trace_args)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
+000047  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       m_trace_mode=1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
            end
 000047     m_objections.push_back(this);
+000047  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
          endfunction
        
        
          // Function: trace_mode
          //
          // Set or get the trace mode for the objection object. If no
          // argument is specified (or an argument other than 0 or 1)
          // the current trace mode is unaffected. A trace_mode of
          // 0 turns tracing off. A trace mode of 1 turns tracing on.
          // The return value is the mode prior to being reset.
        
%000000    function bit trace_mode (int mode=-1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     trace_mode = m_trace_mode;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     if(mode == 0) m_trace_mode = 0;
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_objection__Vclpkg
%000000     else if(mode == 1) m_trace_mode = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
           endfunction
        
          // Function- m_report
          //
          // Internal method for reporting count updates
        
%000000   function void m_report(uvm_object obj, uvm_object source_obj, string description, int count, string action);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     string desc;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     int _count = m_source_count.exists(obj) ? m_source_count[obj] : 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     int _total = m_total_count.exists(obj) ? m_total_count[obj] : 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     if (!uvm_report_enabled(UVM_NONE,UVM_INFO,"OBJTN_TRC") || !m_trace_mode) return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
        
            //desc = description == "" ? "" : {" ", description, "" };
%000000     if (source_obj == obj)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
        
%000000       uvm_report_info("OBJTN_TRC", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000         $sformatf("Object %0s %0s %0d objection(s)%s: count=%0d  total=%0d",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000            obj.get_full_name()==""?"uvm_top":obj.get_full_name(), action,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000            count, description != ""? {" (",description,")"}:"", _count, _total), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=expr comment=((description != %22%22)==0) => 0 hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=expr comment=((description != %22%22)==1) => 1 hier=uvm_pkg::uvm_objection__Vclpkg
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       int cpath = 0, last_dot=0;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       string sname = source_obj.get_full_name(), nm = obj.get_full_name();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       int max = sname.len() > nm.len() ? nm.len() : sname.len();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=expr comment=(((sname) > (nm))==0) => 0 hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=expr comment=(((sname) > (nm))==1) => 1 hier=uvm_pkg::uvm_objection__Vclpkg
        
              // For readability, only print the part of the source obj hierarchy underneath
              // the current object.
%000000       while((sname[cpath] == nm[cpath]) && (cpath < max)) begin
-000000  point: type=expr comment=(((sname.getc(cpath)) == (nm.getc(cpath)))==0) => 0 hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=expr comment=(((sname.getc(cpath)) == (nm.getc(cpath)))==1 && (cpath < max)==1) => 1 hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=expr comment=((cpath < max)==0) => 0 hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000         if(sname[cpath] == ".") last_dot = cpath;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000         cpath++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
              end 
        
%000000       if(last_dot) sname = sname.substr(last_dot+1, sname.len());
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       uvm_report_info("OBJTN_TRC",
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000         $sformatf("Object %0s %0s %0d objection(s) %0s its total (%s from source object %s%s): count=%0d  total=%0d",
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000            obj.get_full_name()==""?"uvm_top":obj.get_full_name(), action=="raised"?"added":"subtracted",
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=expr comment=((action == %22raised%22)==0) => 0 hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=expr comment=((action == %22raised%22)==1) => 1 hier=uvm_pkg::uvm_objection__Vclpkg
%000000             count, action=="raised"?"to":"from", action, sname, 
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=expr comment=((action == %22raised%22)==0) => 0 hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=expr comment=((action == %22raised%22)==1) => 1 hier=uvm_pkg::uvm_objection__Vclpkg
%000000             description != ""?{", ",description}:"", _count, _total), UVM_NONE);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=expr comment=((description != %22%22)==0) => 0 hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=expr comment=((description != %22%22)==1) => 1 hier=uvm_pkg::uvm_objection__Vclpkg
            end
          endfunction
        
        
          // Function- m_get_parent
          //
          // Internal method for getting the parent of the given ~object~.
          // The ultimate parent is uvm_top, UVM's implicit top-level component. 
        
%000002   function uvm_object m_get_parent(uvm_object obj);
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000002     uvm_component comp;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000002     uvm_sequence_base seq;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000002     if ($cast(comp, obj)) begin
-000002  point: type=line comment=elsif hier=uvm_pkg::uvm_objection__Vclpkg
%000002       obj = comp.get_parent();
-000002  point: type=line comment=elsif hier=uvm_pkg::uvm_objection__Vclpkg
            end
%000000     else if ($cast(seq, obj)) begin
-000000  point: type=line comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=line comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000        obj = seq.get_sequencer();
-000000  point: type=line comment=if hier=uvm_pkg::uvm_objection__Vclpkg
            end
            else
%000000       obj = m_top;
-000000  point: type=line comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000002     if (obj == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       obj = m_top;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000002     return obj;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
          endfunction
        
        
          // Function- m_propagate
          //
          // Propagate the objection to the objects parent. If the object is a
          // component, the parent is just the hierarchical parent. If the object is
          // a sequence, the parent is the parent sequence if one exists, or
          // it is the attached sequencer if there is no parent sequence. 
          //
          // obj : the uvm_object on which the objection is being raised or lowered
          // source_obj : the root object on which the end user raised/lowered the 
          //   objection (as opposed to an anscestor of the end user object)a
          // count : the number of objections associated with the action.
          // raise : indicator of whether the objection is being raised or lowered. A
          //   1 indicates the objection is being raised.
        
%000002   function void m_propagate (uvm_object obj,
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
                                     uvm_object source_obj,
                                     string description,
                                     int count,
                                     bit raise,
                                     int in_top_thread);
%000002     if (obj != null && obj != m_top) begin
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000002       obj = m_get_parent(obj);
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000001       if(raise)
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000001         m_raise(obj, source_obj, description, count);
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
              else
%000001         m_drop(obj, source_obj, description, count, in_top_thread);
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
            end
          endfunction
        
        
          // Group: Objection Control
          
          // Function: m_set_hier_mode
          //
          // Hierarchical mode only needs to be set for intermediate components, not
          // for uvm_root or a leaf component.
        
%000000   function void m_set_hier_mode (uvm_object obj);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     uvm_component c;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     if((m_hier_mode == 1) || (obj == m_top)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
              // Don't set if already set or the object is uvm_top.
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
            end
%000000     if($cast(c,obj)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
              // Don't set if object is a leaf.
%000000       if(c.get_num_children() == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
              end
            end
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
              // Don't set if object is a non-component.
%000000       return;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
            end
        
            // restore counts on non-source nodes
%000000     m_total_count.delete();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     foreach (m_source_count[obj]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000       uvm_object theobj = obj;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000       int count = m_source_count[obj];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000       do begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000         if (m_total_count.exists(theobj))
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000           m_total_count[theobj] += count;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                else
%000000           m_total_count[theobj] = count;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000         theobj = m_get_parent(theobj);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
              end
%000000       while (theobj != null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
            end
            
%000000     m_hier_mode = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
          endfunction
        
        
          // Function: raise_objection
          //
          // Raises the number of objections for the source ~object~ by ~count~, which
          // defaults to 1.  The ~object~ is usually the ~this~ handle of the caller.
          // If ~object~ is not specified or null, the implicit top-level component,
          // <uvm_root>, is chosen.
          //
          // Rasing an objection causes the following.
          //
          // - The source and total objection counts for ~object~ are increased by
          //   ~count~. ~description~ is a string that marks a specific objection
          //   and is used in tracing/debug.
          //
          // - The objection's <raised> virtual method is called, which calls the
          //   <uvm_component::raised> method for all of the components up the 
          //   hierarchy.
          //
        
%000001   virtual function void raise_objection (uvm_object obj=null,
-000001  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
                                                 string description="",
                                                 int count=1);
%000001     if(obj == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       obj = m_top;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000001     m_cleared = 0;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000001     m_top_all_dropped = 0;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000001     m_raise (obj, obj, description, count);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
          endfunction
        
        
          // Function- m_raise
        
%000002   function void m_raise (uvm_object obj,
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
                                 uvm_object source_obj,
                                 string description="",
                                 int count=1);
%000002     int idx;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000002     uvm_objection_context_object ctxt;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        
%000002     if (m_total_count.exists(obj))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       m_total_count[obj] += count;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
            else 
%000002       m_total_count[obj] = count;
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
        
%000001     if (source_obj==obj) begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000001       if (m_source_count.exists(obj))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000         m_source_count[obj] += count;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
              else
%000001         m_source_count[obj] = count;
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
            end
          
%000002     if (m_trace_mode)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       m_report(obj,source_obj,description,count,"raised");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
        
%000002     raised(obj, source_obj, description, count);
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        
              // Handle any outstanding drains...
        
            // First go through the scheduled list
%000002     idx = 0;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000002     while (idx < m_scheduled_list.size()) begin
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000         if ((m_scheduled_list[idx].obj == obj) &&
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000             (m_scheduled_list[idx].objection == this)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                    // Caught it before the drain was forked
%000000             ctxt = m_scheduled_list[idx];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000             m_scheduled_list.delete(idx);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000             break;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                end
%000000         idx++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
            end
        
            // If it's not there, go through the forked list
%000002     if (ctxt == null) begin
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000002         idx = 0;
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000002         while (idx < m_forked_list.size()) begin
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000             if (m_forked_list[idx].obj == obj) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
                        // Caught it after the drain was forked,
                        // but before the fork started
%000000                 ctxt = m_forked_list[idx];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000                 m_forked_list.delete(idx);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000                 m_scheduled_contexts.delete(ctxt.obj);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000                 break;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                    end
%000000             idx++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
                end
            end
        
            // If it's not there, go through the forked contexts
%000002     if (ctxt == null) begin
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000002         if (m_forked_contexts.exists(obj)) begin
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                    // Caught it with the forked drain running
%000000             ctxt = m_forked_contexts[obj];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000             m_forked_contexts.delete(obj);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                    // Kill the drain
        `ifndef UVM_USE_PROCESS_CONTAINER	   
%000000             m_drain_proc[obj].kill();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000             m_drain_proc.delete(obj);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
        `else
                    m_drain_proc[obj].p.kill();
                    m_drain_proc.delete(obj);
        `endif
        	   
                end
            end
        
%000002     if (ctxt == null) begin
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
                // If there were no drains, just propagate as usual
        
%000000         if (!m_hier_mode && obj != m_top)
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_objection__Vclpkg
%000000           m_raise(m_top,source_obj,description,count);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_objection__Vclpkg
%000001         else if (obj != m_top)
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000001           m_propagate(obj, source_obj, description, count, 1, 0);
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
            end
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
                // Otherwise we need to determine what exactly happened
%000000         int diff_count;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
        
                // Determine the diff count, if it's positive, then we're
                // looking at a 'raise' total, if it's negative, then
                // we're looking at a 'drop', but not down to 0.  If it's
                // a '0', that means that there is no change in the total.
%000000         diff_count = count - ctxt.count;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
        
%000000         if (diff_count != 0) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                    // Something changed
%000000             if (diff_count > 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
                        // we're looking at an increase in the total
%000000                 if (!m_hier_mode && obj != m_top)
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_objection__Vclpkg
%000000                   m_raise(m_top, source_obj, description, diff_count);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_objection__Vclpkg
%000000                 else if (obj != m_top)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000                   m_propagate(obj, source_obj, description, diff_count, 1, 0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                    end
%000000             else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
                        // we're looking at a decrease in the total
                        // The count field is always positive...
%000000                 diff_count = -diff_count;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000                 if (!m_hier_mode && obj != m_top)
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_objection__Vclpkg
%000000                   m_drop(m_top, source_obj, description, diff_count);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_objection__Vclpkg
%000000                 else if (obj != m_top)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000                   m_propagate(obj, source_obj, description, diff_count, 0, 0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                    end
                end
        
                // Cleanup
%000000         ctxt.clear();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000         m_context_pool.push_back(ctxt);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
            end
                
          endfunction
          
        
          // Function: drop_objection
          //
          // Drops the number of objections for the source ~object~ by ~count~, which
          // defaults to 1.  The ~object~ is usually the ~this~ handle of the caller.
          // If ~object~ is not specified or null, the implicit top-level component,
          // <uvm_root>, is chosen.
          //
          // Dropping an objection causes the following.
          //
          // - The source and total objection counts for ~object~ are decreased by
          //   ~count~. It is an error to drop the objection count for ~object~ below
          //   zero.
          //
          // - The objection's <dropped> virtual method is called, which calls the
          //   <uvm_component::dropped> method for all of the components up the 
          //   hierarchy.
          //
          // - If the total objection count has not reached zero for ~object~, then
          //   the drop is propagated up the object hierarchy as with
          //   <raise_objection>. Then, each object in the hierarchy will have updated
          //   their ~source~ counts--objections that they originated--and ~total~
          //   counts--the total number of objections by them and all their
          //   descendants.
          //
          // If the total objection count reaches zero, propagation up the hierarchy
          // is deferred until a configurable drain-time has passed and the 
          // <uvm_component::all_dropped> callback for the current hierarchy level
          // has returned. The following process occurs for each instance up
          // the hierarchy from the source caller:
          //
          // A process is forked in a non-blocking fashion, allowing the ~drop~
          // call to return. The forked process then does the following:
          //
          // - If a drain time was set for the given ~object~, the process waits for
          //   that amount of time.
          //
          // - The objection's <all_dropped> virtual method is called, which calls the
          //   <uvm_component::all_dropped> method (if ~object~ is a component).
          //
          // - The process then waits for the ~all_dropped~ callback to complete.
          //
          // - After the drain time has elapsed and all_dropped callback has
          //   completed, propagation of the dropped objection to the parent proceeds
          //   as described in <raise_objection>, except as described below.
          //
          // If a new objection for this ~object~ or any of its descendents is raised
          // during the drain time or during execution of the all_dropped callback at
          // any point, the hierarchical chain described above is terminated and the
          // dropped callback does not go up the hierarchy. The raised objection will
          // propagate up the hierarchy, but the number of raised propagated up is
          // reduced by the number of drops that were pending waiting for the 
          // all_dropped/drain time completion. Thus, if exactly one objection
          // caused the count to go to zero, and during the drain exactly one new
          // objection comes in, no raises or drops are propagted up the hierarchy,
          //
          // As an optimization, if the ~object~ has no set drain-time and no
          // registered callbacks, the forked process can be skipped and propagation
          // proceeds immediately to the parent as described. 
        
%000001   virtual function void drop_objection (uvm_object obj=null,
-000001  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
                                                string description="",
                                                int count=1);
%000001     if(obj == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       obj = m_top;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000001     m_drop (obj, obj, description, count, 0);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
          endfunction
        
        
          // Function- m_drop
        
%000002   function void m_drop (uvm_object obj,
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
                                uvm_object source_obj,
                                string description="",
                                int count=1,
%000000                         int in_top_thread=0);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_objection__Vclpkg
        
%000002     if (!m_total_count.exists(obj) || (count > m_total_count[obj])) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       if(m_cleared)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000       uvm_report_fatal("OBJTN_ZERO", {"Object \"", obj.get_full_name(), 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000         "\" attempted to drop objection '",this.get_name(),"' count below zero"});
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
            end
        
%000001     if (obj == source_obj) begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000001       if (!m_source_count.exists(obj) || (count > m_source_count[obj])) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000         if(m_cleared)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000           return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000         uvm_report_fatal("OBJTN_ZERO", {"Object \"", obj.get_full_name(), 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000           "\" attempted to drop objection '",this.get_name(),"' count below zero"});
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
              end
%000001       m_source_count[obj] -= count;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
            end
        
%000002     m_total_count[obj] -= count;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        
%000002     if (m_trace_mode)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       m_report(obj,source_obj,description,count,"dropped");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
            
%000002     dropped(obj, source_obj, description, count);
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
          
            // if count != 0, no reason to fork
%000002     if (m_total_count[obj] != 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       if (!m_hier_mode && obj != m_top)
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_objection__Vclpkg
%000000         m_drop(m_top,source_obj,description, count, in_top_thread);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_objection__Vclpkg
%000000       else if (obj != m_top) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000         this.m_propagate(obj, source_obj, description, count, 0, in_top_thread);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
              end
        
            end
%000002     else begin
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000002         uvm_objection_context_object ctxt;
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000002         if (m_context_pool.size())
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000           ctxt = m_context_pool.pop_front();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                else
%000002           ctxt = new;
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
        
%000002         ctxt.obj = obj;
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000002         ctxt.source_obj = source_obj;
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000002         ctxt.description = description;
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000002         ctxt.count = count;
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000002         ctxt.objection = this;
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
                // Need to be thread-safe, let the background
                // process handle it.
        
                // Why don't we look at in_top_thread here?  Because
                // a re-raise will kill the drain at object that it's
                // currently occuring at, and we need the leaf-level kills
                // to not cause accidental kills at branch-levels in
                // the propagation.
        
                // Using the background process just allows us to
                // seperate the links of the chain.
%000002         m_scheduled_list.push_back(ctxt);
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
        
            end // else: !if(m_total_count[obj] != 0)
        
          endfunction
        
        
        
          // m_execute_scheduled_forks
          // -------------------------
        
          // background process; when non
%000000   static task m_execute_scheduled_forks();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000002     while(1) begin
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000002       wait(m_scheduled_list.size() != 0);
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000002       if(m_scheduled_list.size() != 0) begin
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000002           uvm_objection_context_object c;
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000002           uvm_objection o;
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                  // Save off the context before the fork
%000002           c = m_scheduled_list.pop_front();
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                  // A re-raise can use this to figure out props (if any)
%000002           c.objection.m_scheduled_contexts[c.obj] = c;
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                  // The fork below pulls out from the forked list
%000002           c.objection.m_forked_list.push_back(c);
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                  // The fork will guard the m_forked_drain call, but
                  // a re-raise can kill m_forked_list contexts in the delta
                  // before the fork executes.
%000002           fork : guard
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000002               automatic uvm_objection objection = c.objection;
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000002               begin
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                          // Check to maike sure re-raise didn't empty the fifo
%000002                   if (objection.m_forked_list.size() > 0) begin
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000002                       uvm_objection_context_object ctxt;
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000002 	              ctxt = objection.m_forked_list.pop_front();
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                              // Clear it out of scheduled
%000002                       objection.m_scheduled_contexts.delete(ctxt.obj);
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                              // Move it in to forked (so re-raise can figure out props)
%000002                       objection.m_forked_contexts[ctxt.obj] = ctxt;
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                              // Save off our process handle, so a re-raise can kill it...
        `ifndef UVM_USE_PROCESS_CONTAINER		     
%000002                       objection.m_drain_proc[ctxt.obj] = process::self();
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
        `else
        		     begin
        			process_container_c c = new(process::self());
        			objection.m_drain_proc[ctxt.obj]=c;
        		     end
        `endif		     
                              // Execute the forked drain
%000002                       objection.m_forked_drain(ctxt.obj, ctxt.source_obj, ctxt.description, ctxt.count, 1);
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                              // Cleanup if we survived (no re-raises)
%000002                       objection.m_drain_proc.delete(ctxt.obj);
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000002                       objection.m_forked_contexts.delete(ctxt.obj);
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                              // Clear out the context object (prevent memory leaks)
%000002                       ctxt.clear();
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                              // Save the context in the pool for later reuse
%000002                       m_context_pool.push_back(ctxt);
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                          end
                      end
                  join_none : guard
              end
            end
          endtask
        
        
          // m_forked_drain
          // -------------
        
%000002   task m_forked_drain (uvm_object obj,
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
                               uvm_object source_obj,
                               string description="",
                               int count=1,
                               int in_top_thread=0);
        
%000002       int diff_count;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        
%000002       if (m_drain_time.exists(obj))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000         `uvm_delay(m_drain_time[obj])
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
              
%000002       if (m_trace_mode)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000         m_report(obj,source_obj,description,count,"all_dropped");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
              
%000002       all_dropped(obj,source_obj,description, count);
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
                  
                  // wait for all_dropped cbs to complete
%000002       wait fork;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        
              /* NOT NEEDED - Any raise would have killed us!
              if(!m_total_count.exists(obj))
                diff_count = -count;
              else
                diff_count = m_total_count[obj] - count;
              */
        
              // we are ready to delete the 0-count entries for the current
              // object before propagating up the hierarchy. 
%000001       if (m_source_count.exists(obj) && m_source_count[obj] == 0)
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000001         m_source_count.delete(obj);
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                  
%000002       if (m_total_count.exists(obj) && m_total_count[obj] == 0)
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000002         m_total_count.delete(obj);
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
        
%000000       if (!m_hier_mode && obj != m_top)
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_objection__Vclpkg
%000000         m_drop(m_top,source_obj,description, count, 1);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_objection__Vclpkg
%000001       else if (obj != m_top)
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000001         m_propagate(obj, source_obj, description, count, 0, 1);
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
        
          endtask
        
        
          // m_init_objections
          // -----------------
        
          // Forks off the single background process
%000001   static function void m_init_objections();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000001     fork 
-000001  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000001       uvm_objection::m_execute_scheduled_forks();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
            join_none
          endfunction
        
          // Function: set_drain_time
          //
          // Sets the drain time on the given ~object~ to ~drain~.
          //
          // The drain time is the amount of time to wait once all objections have
          // been dropped before calling the all_dropped callback and propagating
          // the objection to the parent. 
          //
          // If a new objection for this ~object~ or any of its descendents is raised
          // during the drain time or during execution of the all_dropped callbacks,
          // the drain_time/all_dropped execution is terminated. 
        
          // AE: set_drain_time(drain,obj=null)?
%000000   function void set_drain_time (uvm_object obj=null, time drain);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     if (obj==null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       obj = m_top;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000     m_drain_time[obj] = drain;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     m_set_hier_mode(obj);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
          endfunction
          
        
          //----------------------
          // Group: Callback Hooks
          //----------------------
        
          // Function: raised
          //
          // Objection callback that is called when a <raise_objection> has reached ~obj~.
          // The default implementation calls <uvm_component::raised>.
        
%000002   virtual function void raised (uvm_object obj,
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
                                        uvm_object source_obj,
                                        string description,
                                        int count);
%000002     uvm_component comp;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000002     if ($cast(comp,obj))    
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000002       comp.raised(this, source_obj, description, count);
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000002     if (m_events.exists(obj))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000        ->m_events[obj].raised;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
          endfunction
        
        
          // Function: dropped
          //
          // Objection callback that is called when a <drop_objection> has reached ~obj~.
          // The default implementation calls <uvm_component::dropped>.
        
%000002   virtual function void dropped (uvm_object obj,
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
                                         uvm_object source_obj,
                                         string description,
                                         int count);
%000002     uvm_component comp;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000002     if($cast(comp,obj))    
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000002       comp.dropped(this, source_obj, description, count);
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000001     if (m_events.exists(obj))
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000001        ->m_events[obj].dropped;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
          endfunction
        
        
          // Function: all_dropped
          //
          // Objection callback that is called when a <drop_objection> has reached ~obj~,
          // and the total count for ~obj~ goes to zero. This callback is executed
          // after the drain time associated with ~obj~. The default implementation 
          // calls <uvm_component::all_dropped>.
        
%000001   virtual task all_dropped (uvm_object obj,
-000001  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
                                    uvm_object source_obj,
                                    string description,
                                    int count);
%000001     uvm_component comp;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000001     if($cast(comp,obj))    
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000001       comp.all_dropped(this, source_obj, description, count);
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000001     if (m_events.exists(obj))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000        ->m_events[obj].all_dropped;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000001     if (obj == m_top)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       m_top_all_dropped = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
          endtask
        
        
          //------------------------
          // Group: Objection Status
          //------------------------
        
          // Function: get_objectors
          //
          // Returns the current list of objecting objects (objects that
          // raised an objection but have not dropped it).
        
%000000   function void get_objectors(ref uvm_object list[$]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     list.delete();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     foreach (m_source_count[obj]) list.push_back(obj); 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
          endfunction
        
        
          // Task: wait_for
          //
          // Waits for the raised, dropped, or all_dropped ~event~ to occur in
          // the given ~obj~. The task returns after all corresponding callbacks
          // for that event have been executed.
          //
%000002   task wait_for(uvm_objection_event objt_event, uvm_object obj=null);
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        
%000002      if (obj==null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000        obj = m_top;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
        
%000001      if (!m_events.exists(obj)) begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000001        m_events[obj] = new;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
             end
        
%000002      m_events[obj].waiters++;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000002      case (objt_event)
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000        UVM_RAISED:      @(m_events[obj].raised);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_objection__Vclpkg
%000000        UVM_DROPPED:     @(m_events[obj].dropped);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_objection__Vclpkg
%000002        UVM_ALL_DROPPED: @(m_events[obj].all_dropped);
-000002  point: type=line comment=case hier=uvm_pkg::uvm_objection__Vclpkg
             endcase
             
%000002      m_events[obj].waiters--;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        
%000001      if (m_events[obj].waiters == 0)
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000001        m_events.delete(obj);
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
        
           endtask
        
        
%000000    task wait_for_total_count(uvm_object obj=null, int count=0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000      if (obj==null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000        obj = m_top;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
        
%000000      if(!m_total_count.exists(obj) && count == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000        return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000      if (count == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000         wait (!m_total_count.exists(obj) && count == 0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
             else
%000000         wait (m_total_count.exists(obj) && m_total_count[obj] == count);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
           endtask
           
        
          // Function: get_objection_count
          //
          // Returns the current number of objections raised by the given ~object~.
        
%000000   function int get_objection_count (uvm_object obj=null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     if (obj==null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       obj = m_top;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
        
%000000     if (!m_source_count.exists(obj))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000     return m_source_count[obj];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
          endfunction
          
        
          // Function: get_objection_total
          //
          // Returns the current number of objections raised by the given ~object~ 
          // and all descendants.
        
 000065   function int get_objection_total (uvm_object obj=null);
+000065  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
 000065     uvm_component c;
+000065  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
 000065     string ch;
+000065  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
         
~000065     if (obj==null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
+000065  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       obj = m_top;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
        
%000002     if (!m_total_count.exists(obj))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000     if (m_hier_mode) 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       return m_total_count[obj];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       if ($cast(c,obj)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000         if (!m_source_count.exists(obj))
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000           get_objection_total = 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                else
%000000           get_objection_total = m_source_count[obj];
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000         if (c.get_first_child(ch))
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000         do
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000           get_objection_total += get_objection_total(c.get_child(ch));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000         while (c.get_next_child(ch));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
              end
%000000       else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000         return m_total_count[obj];
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
              end
            end
          endfunction
          
        
          // Function: get_drain_time
          //
          // Returns the current drain time set for the given ~object~ (default: 0 ns).
        
%000000   function time get_drain_time (uvm_object obj=null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     if (obj==null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       obj = m_top;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
        
%000000     if (!m_drain_time.exists(obj))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000     return m_drain_time[obj];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
          endfunction
        
        
          // m_display_objections
        
%000000   protected function string m_display_objections(uvm_object obj=null, bit show_header=1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        
%000000     static string blank="                                                                                   ";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
            
%000000     string s;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     int total;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     uvm_object list[string];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     uvm_object curr_obj;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     int depth;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     string name;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     string this_obj_name;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     string curr_obj_name;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
          
%000000     foreach (m_total_count[o]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000       uvm_object theobj = o; 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000       if ( m_total_count[o] > 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000         list[theobj.get_full_name()] = theobj;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
            end
        
%000000     if (obj==null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       obj = m_top;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
        
%000000     total = get_objection_total(obj);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
            
%000000     s = $sformatf("The total objection count is %0d\n",total);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        
%000000     if (total == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000       return s;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
        
%000000     s = {s,"---------------------------------------------------------\n"};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     s = {s,"Source  Total   \n"};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     s = {s,"Count   Count   Object\n"};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     s = {s,"---------------------------------------------------------\n"};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        
          
%000000     this_obj_name = obj.get_full_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     curr_obj_name = this_obj_name;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        
%000000     do begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        
%000000       curr_obj = list[curr_obj_name];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
          
              // determine depth
%000000       depth=0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000       foreach (curr_obj_name[i])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000         if (curr_obj_name[i] == ".")
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000           depth++;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
        
              // determine leaf name
%000000       name = curr_obj_name;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000       for (int i=curr_obj_name.len()-1;i >= 0; i--)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000         if (curr_obj_name[i] == ".") begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000            name = curr_obj_name.substr(i+1,curr_obj_name.len()-1); 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
%000000            break;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
                end
%000000       if (curr_obj_name == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
%000000         name = "uvm_top";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_objection__Vclpkg
              else
%000000         depth++;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_objection__Vclpkg
        
              // print it
%000000       s = {s, $sformatf("%-6d  %-6d %s%s\n",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000          m_source_count.exists(curr_obj) ? m_source_count[curr_obj] : 0,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000          m_total_count.exists(curr_obj) ? m_total_count[curr_obj] : 0,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000          blank.substr(0,2*depth), name)};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        
%000000     end while (list.next(curr_obj_name) &&
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
                curr_obj_name.substr(0,this_obj_name.len()-1) == this_obj_name);
          
%000000     s = {s,"---------------------------------------------------------\n"};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        
%000000     return s;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
        
          endfunction
          
        
%000000   function string convert2string();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     return m_display_objections(m_top,1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
          endfunction
          
          
          // Function: display_objections
          // 
          // Displays objection information about the given ~object~. If ~object~ is
          // not specified or ~null~, the implicit top-level component, <uvm_root>, is
          // chosen. The ~show_header~ argument allows control of whether a header is
          // output.
        
%000000   function void display_objections(uvm_object obj=null, bit show_header=1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     $display(m_display_objections(obj,show_header));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
          endfunction
        
        
          // Below is all of the basic data stuff that is needed for an uvm_object
          // for factory registration, printing, comparing, etc.
        
          typedef uvm_object_registry#(uvm_objection,"uvm_objection") type_id;
%000000   static function type_id get_type();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     return type_id::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
          endfunction
        
%000000   function uvm_object create (string name="");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     uvm_objection tmp = new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     return tmp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
          endfunction
        
%000000   virtual function string get_type_name ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     return "uvm_objection";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
          endfunction
        
%000000   function void do_copy (uvm_object rhs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     uvm_objection _rhs;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     $cast(_rhs, rhs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     m_source_count = _rhs.m_source_count;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     m_total_count  = _rhs.m_total_count;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     m_drain_time   = _rhs.m_drain_time;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
%000000     m_hier_mode    = _rhs.m_hier_mode;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection__Vclpkg
          endfunction
        
        endclass
        
        
        `ifdef UVM_USE_CALLBACKS_OBJECTION_FOR_TEST_DONE
          typedef uvm_callbacks_objection m_uvm_test_done_objection_base;
        `else
          typedef uvm_objection m_uvm_test_done_objection_base;
        `endif
        
        
        // TODO: change to plusarg
        `define UVM_DEFAULT_TIMEOUT 9200s
        
        typedef class uvm_cmdline_processor;
        
        
        
        //------------------------------------------------------------------------------
        //
        // Class- uvm_test_done_objection DEPRECATED
        //
        // Provides built-in end-of-test coordination
        //------------------------------------------------------------------------------
        
        class uvm_test_done_objection extends m_uvm_test_done_objection_base;
        
           protected static uvm_test_done_objection m_inst;
          protected bit m_forced;
        
          // For communicating all objections dropped and end of phasing
          local  bit m_executing_stop_processes;
          local  int m_n_stop_threads;
        
        
          // Function- new DEPRECATED
          //
          // Creates the singleton test_done objection. Users must not to call
          // this method directly.
        
%000001   function new(string name="uvm_test_done");
-000001  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000001     super.new(name);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
          endfunction
        
        
          // Function- qualify DEPRECATED
          //
          // Checks that the given ~object~ is derived from either <uvm_component> or
          // <uvm_sequence_base>.
        
%000002   virtual function void qualify(uvm_object obj=null,
-000002  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
                                        bit is_raise,
                                        string description);
%000002     uvm_component c;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000002     uvm_sequence_base s;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000002     string nm = is_raise ? "raise_objection" : "drop_objection";
-000002  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000001  point: type=expr comment=(is_raise==0) => 0 hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000001  point: type=expr comment=(is_raise==1) => 1 hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000002     string desc = description == "" ? "" : {" (\"", description, "\")"};
-000002  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000000  point: type=expr comment=((description == %22%22)==0) => 0 hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000002  point: type=expr comment=((description == %22%22)==1) => 1 hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000002     if(! ($cast(c,obj) || $cast(s,obj))) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000       uvm_report_error("TEST_DONE_NOHIER", {"A non-hierarchical object, '",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000         obj.get_full_name(), "' (", obj.get_type_name(),") was used in a call ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000         "to uvm_test_done.", nm,"(). For this objection, a sequence ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000         "or component is required.", desc });
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
            end
          endfunction
        
          
        `ifndef UVM_NO_DEPRECATED
          // m_do_stop_all
          // -------------
        
 000057   task m_do_stop_all(uvm_component comp);
+000057  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
        
 000057     string name;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
        
            // we use an external traversal to ensure all forks are 
            // made from a single threaad.
 000036     if (comp.get_first_child(name))
+000021  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
+000036  point: type=branch comment=else hier=uvm_pkg::uvm_test_done_objection__Vclpkg
 000056       do begin
+000035  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
+000056  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
 000056         m_do_stop_all(comp.get_child(name));
+000056  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
              end
 000056       while (comp.get_next_child(name));
+000035  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
+000056  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
          
~000057     if (comp.enable_stop_interrupt) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
+000057  point: type=branch comment=else hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000       m_n_stop_threads++;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000       fork begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000         comp.stop_phase(run_ph);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000         m_n_stop_threads--;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
              end
              join_none
            end
          endtask
         
        
          // Function- stop_request DEPRECATED
          //
          // Calling this function triggers the process of shutting down the currently
          // running task-based phase. This process involves calling all components'
          // stop tasks for those components whose enable_stop_interrupt bit is set.
          // Once all stop tasks return, or once the optional global_stop_timeout
          // expires, all components' kill method is called, effectively ending the
          // current phase. The uvm_top will then begin execution of the next phase,
          // if any.
        
%000000   function void stop_request();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
            `uvm_info_context("STOP_REQ",
                              "Stop-request called. Waiting for all-dropped on uvm_test_done",
%000000                       UVM_FULL,m_top);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000     fork
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000       m_stop_request();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
            join_none
          endfunction
        
%000000   task m_stop_request();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000     raise_objection(m_top,"stop_request called; raising test_done objection");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000     uvm_wait_for_nba_region();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000     drop_objection(m_top,"stop_request called; dropping test_done objection");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
          endtask
        
        
          // Variable- stop_timeout DEPRECATED
          //
          // These set watchdog timers for task-based phases and stop tasks. You can not
          // disable the timeouts. When set to 0, a timeout of the maximum time possible
          // is applied. A timeout at this value usually indicates a problem with your
          // testbench. You should lower the timeout to prevent "never-ending"
          // simulations. 
        
%000001   time stop_timeout = 0;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
           
        
          // Task- all_dropped DEPRECATED
          //
          // This callback is called when the given ~object's~ objection count reaches
          // zero; if the ~object~ is the implicit top-level, <uvm_root> then it means
          // there are no more objections raised for the ~uvm_test_done~ objection.
          // Thus, after calling <uvm_objection::all_dropped>, this method will call
          // <global_stop_request> to stop the current task-based phase (e.g. run).
          
%000002   virtual task all_dropped (uvm_object obj,
-000002  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
                                    uvm_object source_obj,
                                    string description,
                                    int count);
%000001     if (obj != m_top) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000       super.all_dropped(obj,source_obj,description,count);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
            end
        
%000002     m_top.all_dropped(this, source_obj, description, count);
-000002  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
        
            // All stop tasks are forked from a single thread within a 'guard' process
            // so 'disable fork' can be used.
          
%000001     if(m_cleared == 0) begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_test_done_objection__Vclpkg
              `uvm_info_context("TEST_DONE",
                  "All end-of-test objections have been dropped. Calling stop tasks",
%000001           UVM_FULL,m_top);
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000001       fork begin // guard
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000001         fork
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000001           begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000001             m_executing_stop_processes = 1;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000001             m_do_stop_all(m_top);
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000001             wait (m_n_stop_threads == 0);
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000001             m_executing_stop_processes = 0;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
                  end
%000001           begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000             if (stop_timeout == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000               wait(stop_timeout != 0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000001             `uvm_delay(stop_timeout)
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
                    `uvm_error("STOP_TIMEOUT",
                      {$sformatf("Stop-task timeout of %0t expired. ", stop_timeout),
%000001                  "'run' phase ready to proceed to extract phase"})
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_test_done_objection__Vclpkg
                  end
                join_any
%000001         disable fork;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
              end
              join // guard
          
              `uvm_info_context("TEST_DONE", {"'run' phase is ready ",
%000001                         "to proceed to the 'extract' phase"}, UVM_LOW,m_top)
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_test_done_objection__Vclpkg
        
            end
        
%000001     if (m_events.exists(obj))
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000001       ->m_events[obj].all_dropped;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000002     m_top_all_dropped = 1;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
        
          endtask
        
        
          // Function- raise_objection DEPRECATED
          //
          // Calls <uvm_objection::raise_objection> after calling <qualify>. 
          // If the ~object~ is not provided or is ~null~, then the implicit top-level
          // component, ~uvm_top~, is chosen.
        
%000001   virtual function void raise_objection (uvm_object obj=null, 
-000001  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
                                                 string description="",
%000000                                          int count=1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000001     if(obj==null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000       obj=m_top;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
            else
%000001       qualify(obj, 1, description);
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_test_done_objection__Vclpkg
        
%000001     if (m_executing_stop_processes) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000       string desc = description == "" ? "" : {"(\"", description, "\") "};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000000  point: type=expr comment=((description == %22%22)==0) => 0 hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000000  point: type=expr comment=((description == %22%22)==1) => 1 hier=uvm_pkg::uvm_test_done_objection__Vclpkg
              `uvm_warning("ILLRAISE", {"The uvm_test_done objection was ",
                "raised ", desc, "during processing of a stop_request, i.e. stop ",
%000000         "task execution. The objection is ignored by the stop process"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
            end
        
%000001     super.raise_objection(obj,description,count);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
        
          endfunction
        
        
          // Function- drop_objection DEPRECATED
          //
          // Calls <uvm_objection::drop_objection> after calling <qualify>. 
          // If the ~object~ is not provided or is ~null~, then the implicit top-level
          // component, ~uvm_top~, is chosen.
        
%000001   virtual function void drop_objection (uvm_object obj=null, 
-000001  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
                                                string description="",
%000000                                         int count=1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000001     if(obj==null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000       obj=m_top;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
            else
%000001       qualify(obj, 0, description);
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000001     super.drop_objection(obj,description,count);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
          endfunction
        
        
          // Task- force_stop DEPRECATED
          //
          // Forces the propagation of the all_dropped() callback, even if there are still
          // outstanding objections. The net effect of this action is to forcibly end
          // the current phase.
        
%000000   virtual task force_stop(uvm_object obj=null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000     uvm_report_warning("FORCE_STOP",{"Object '",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000        (obj!=null?obj.get_name():"<unknown>"),"' called force_stop"});
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000     m_cleared = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000     all_dropped(m_top,obj,"force_stop() called",1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000     clear(obj);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
          endtask
        `endif
        
        
          // Below are basic data operations needed for all uvm_objects
          // for factory registration, printing, comparing, etc.
        
          typedef uvm_object_registry#(uvm_test_done_objection,"uvm_test_done") type_id;
%000000   static function type_id get_type();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000     return type_id::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
          endfunction
        
%000000   function uvm_object create (string name="");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000     uvm_test_done_objection tmp = new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000     return tmp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
          endfunction
        
%000000   virtual function string get_type_name ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000000     return "uvm_test_done";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
          endfunction
        
%000003   static function uvm_test_done_objection get();
-000003  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000002     if(m_inst == null)
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000001       m_inst = uvm_test_done_objection::type_id::create("run");
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_test_done_objection__Vclpkg
%000003     return m_inst;
-000003  point: type=line comment=block hier=uvm_pkg::uvm_test_done_objection__Vclpkg
          endfunction
        
        endclass
        
        
        
        // Have a pool of context objects to use
%000002 class uvm_objection_context_object;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection_context_object__Vclpkg
            uvm_object obj;
            uvm_object source_obj;
            string description;
            int    count;
            uvm_objection objection;
        
            // Clears the values stored within the object,
            // preventing memory leaks from reused objects
%000002     function void clear();
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection_context_object__Vclpkg
%000002         obj = null;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection_context_object__Vclpkg
%000002         source_obj = null;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection_context_object__Vclpkg
%000002         description = "";
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection_context_object__Vclpkg
%000002         count = 0;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection_context_object__Vclpkg
%000002         objection = null;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_objection_context_object__Vclpkg
            endfunction : clear
        endclass
        
        
        //------------------------------------------------------------------------------
        //
        // Class: uvm_callbacks_objection
        //
        //------------------------------------------------------------------------------
        // The uvm_callbacks_objection is a specialized <uvm_objection> which contains
        // callbacks for the raised and dropped events. Callbacks happend for the three
        // standard callback activities, <raised>, <dropped>, and <all_dropped>.
        //
        // The <uvm_heartbeat> mechanism use objections of this type for creating
        // heartbeat conditions.  Whenever the objection is raised or dropped, the component 
        // which did the raise/drop is considered to be alive.
        //
        
        
        class uvm_callbacks_objection extends uvm_objection;
%000001   `uvm_register_cb(uvm_callbacks_objection, uvm_objection_callback)
-000001  point: type=line comment=block hier=uvm_pkg::uvm_callbacks_objection__Vclpkg
%000000   function new(string name="");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_callbacks_objection__Vclpkg
%000000     super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_callbacks_objection__Vclpkg
          endfunction
        
          // Function: raised
          //
          // Executes the <uvm_objection_callback::raised> method in the user callback
          // class whenever this objection is raised at the object ~obj~.
        
%000000   virtual function void raised (uvm_object obj, uvm_object source_obj, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_callbacks_objection__Vclpkg
              string description, int count);
%000000     `uvm_do_callbacks(uvm_callbacks_objection,uvm_objection_callback,raised(this,obj,source_obj,description,count))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_callbacks_objection__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_callbacks_objection__Vclpkg
          endfunction
        
          // Function: dropped
          //
          // Executes the <uvm_objection_callback::dropped> method in the user callback
          // class whenever this objection is dropped at the object ~obj~.
        
%000000   virtual function void dropped (uvm_object obj, uvm_object source_obj, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_callbacks_objection__Vclpkg
              string description, int count);
%000000     `uvm_do_callbacks(uvm_callbacks_objection,uvm_objection_callback,dropped(this,obj,source_obj,description,count))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_callbacks_objection__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_callbacks_objection__Vclpkg
          endfunction
        
          // Function: all_dropped
          //
          // Executes the <uvm_objection_callback::all_dropped> task in the user callback
          // class whenever the objection count for this objection in reference to ~obj~
          // goes to zero.
        
%000000   virtual task all_dropped (uvm_object obj, uvm_object source_obj, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_callbacks_objection__Vclpkg
              string description, int count);
%000000     `uvm_do_callbacks(uvm_callbacks_objection,uvm_objection_callback,all_dropped(this,obj,source_obj,description,count))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_callbacks_objection__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_callbacks_objection__Vclpkg
          endtask
        endclass
        
        
        //------------------------------------------------------------------------------
        //
        // Class: uvm_objection_callback
        //
        //------------------------------------------------------------------------------
        // The uvm_objection is the callback type that defines the callback 
        // implementations for an objection callback. A user uses the callback
        // type uvm_objection_cbs_t to add callbacks to specific objections.
        //
        // For example:
        //
        //| class my_objection_cb extends uvm_objection_callback;
        //|   function new(string name);
        //|     super.new(name);
        //|   endfunction
        //|
        //|   virtual function void raised (uvm_objection objection, uvm_object obj, 
        //|       uvm_object source_obj, string description, int count);
        //|     $display("%0t: Objection %s: Raised for %s", $time, objection.get_name(),
        //|         obj.get_full_name());
        //|   endfunction
        //| endclass
        //| ...
        //| initial begin
        //|   my_objection_cb cb = new("cb");
        //|   uvm_objection_cbs_t::add(null, cb); //typewide callback
        //| end
        
        
        class uvm_objection_callback extends uvm_callback;
%000000   function new(string name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection_callback__Vclpkg
%000000     super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection_callback__Vclpkg
          endfunction
        
          // Function: raised
          //
          // Objection raised callback function. Called by <uvm_callbacks_objection::raised>.
        
%000000   virtual function void raised (uvm_objection objection, uvm_object obj, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection_callback__Vclpkg
              uvm_object source_obj, string description, int count);
          endfunction
        
          // Function: dropped
          //
          // Objection dropped callback function. Called by <uvm_callbacks_objection::dropped>.
        
%000000   virtual function void dropped (uvm_objection objection, uvm_object obj, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection_callback__Vclpkg
              uvm_object source_obj, string description, int count);
          endfunction
        
          // Function: all_dropped
          //
          // Objection all_dropped callback function. Called by <uvm_callbacks_objection::all_dropped>.
        
%000000   virtual task all_dropped (uvm_objection objection, uvm_object obj, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_objection_callback__Vclpkg
              uvm_object source_obj, string description, int count);
          endtask
        
        endclass
        
        
        `endif
        
        

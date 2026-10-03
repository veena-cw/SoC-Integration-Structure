//      // verilator_coverage annotation
        //
        //----------------------------------------------------------------------
        //   Copyright 2007-2011 Mentor Graphics Corporation
        //   Copyright 2007-2010 Cadence Design Systems, Inc.
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
        
        //------------------------------------------------------------------------------
        //
        // Class: uvm_task_phase
        //
        //------------------------------------------------------------------------------
        // Base class for all task phases.
        // It forks a call to <uvm_phase::exec_task()>
        // for each component in the hierarchy.
        //
        // The completion of the task does not imply, nor is it required for, 
        // the end of phase. Once the phase completes, any remaining forked 
        // <uvm_phase::exec_task()> threads are forcibly and immediately killed.
        //
        // By default, the way for a task phase to extend over time is if there is
        // at least one component that raises an objection.  
        //| class my_comp extends uvm_component;
        //|    task main_phase(uvm_phase phase);
        //|       phase.raise_objection(this, "Applying stimulus")
        //|       ...
        //|       phase.drop_objection(this, "Applied enough stimulus")
        //|    endtask
        //| endclass
        // 
        //   
        // There is however one scenario wherein time advances within a task-based phase
        // without any objections to the phase being raised. If two (or more) phases 
        // share a common successor, such as the <uvm_run_phase> and the 
        // <uvm_post_shutdown_phase> sharing the <uvm_extract_phase> as a successor, 
        // then phase advancement is delayed until all predecessors of the common 
        // successor are ready to proceed.  Because of this, it is possible for time to 
        // advance between <uvm_component::phase_started> and <uvm_component::phase_ended>
        // of a task phase without any participants in the phase raising an objection.
        //
        
        virtual class uvm_task_phase extends uvm_phase;
        
        
          // Function: new
          //
          // Create a new instance of a task-based phase
          //
 000013   function new(string name);
+000013  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
 000013     super.new(name,UVM_PHASE_IMP);
+000013  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
          endfunction
        
        
          // Function: traverse
          //
          // Traverses the component tree in bottom-up order, calling <execute> for
          // each component. The actual order for task-based phases doesn't really
          // matter, as each component task is executed in a separate process whose
          // starting order is not deterministic.
          //
 000052   virtual function void traverse(uvm_component comp,
+000052  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
                                         uvm_phase phase,
                                         uvm_phase_state state);
 000052     phase.m_num_procs_not_yet_returned = 0;
+000052  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
 000052     m_traverse(comp, phase, state);
+000052  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
          endfunction
        
 002964   function void m_traverse(uvm_component comp,
+002964  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
                                   uvm_phase phase,
                                   uvm_phase_state state);
 002964     string name;
+002964  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
 002964     uvm_domain phase_domain =phase.get_domain();
+002964  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
 002964     uvm_domain comp_domain = comp.get_domain();
+002964  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
            
 001872     if (comp.get_first_child(name))
+001092  point: type=branch comment=if hier=uvm_pkg::uvm_task_phase__Vclpkg
+001872  point: type=branch comment=else hier=uvm_pkg::uvm_task_phase__Vclpkg
 001820       do
+001820  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
 002912         m_traverse(comp.get_child(name), phase, state);
+002912  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
 002912       while(comp.get_next_child(name));
+001820  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
+002912  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
        
~002964     if (m_phase_trace)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_task_phase__Vclpkg
+002964  point: type=branch comment=else hier=uvm_pkg::uvm_task_phase__Vclpkg
            `uvm_info("PH_TRACE",$sformatf("topdown-phase phase=%s state=%s comp=%s comp.domain=%s phase.domain=%s",
                  phase.get_name(), state.name(), comp.get_full_name(),comp_domain.get_name(),phase_domain.get_name()),
%000000           UVM_DEBUG)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_task_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_task_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_task_phase__Vclpkg
        
~002964     if (phase_domain == uvm_domain::get_common_domain() ||
+002964  point: type=branch comment=if hier=uvm_pkg::uvm_task_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_task_phase__Vclpkg
 002964         phase_domain == comp_domain) begin
+002964  point: type=branch comment=if hier=uvm_pkg::uvm_task_phase__Vclpkg
 002964       case (state)
+002964  point: type=branch comment=if hier=uvm_pkg::uvm_task_phase__Vclpkg
 000741         UVM_PHASE_STARTED: begin
+000741  point: type=line comment=case hier=uvm_pkg::uvm_task_phase__Vclpkg
 000741           comp.m_current_phase = phase;
+000741  point: type=line comment=case hier=uvm_pkg::uvm_task_phase__Vclpkg
 000741           comp.m_apply_verbosity_settings(phase);
+000741  point: type=line comment=case hier=uvm_pkg::uvm_task_phase__Vclpkg
 000741           comp.phase_started(phase);
+000741  point: type=line comment=case hier=uvm_pkg::uvm_task_phase__Vclpkg
                  end
 000741         UVM_PHASE_EXECUTING: begin
+000741  point: type=line comment=case hier=uvm_pkg::uvm_task_phase__Vclpkg
 000741           uvm_phase ph = this; 
+000741  point: type=line comment=case hier=uvm_pkg::uvm_task_phase__Vclpkg
~000741           if (comp.m_phase_imps.exists(this))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_task_phase__Vclpkg
+000741  point: type=branch comment=else hier=uvm_pkg::uvm_task_phase__Vclpkg
%000000             ph = comp.m_phase_imps[this];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_task_phase__Vclpkg
 000741           ph.execute(comp, phase);
+000741  point: type=line comment=case hier=uvm_pkg::uvm_task_phase__Vclpkg
                  end
 000741         UVM_PHASE_READY_TO_END: begin
+000741  point: type=line comment=case hier=uvm_pkg::uvm_task_phase__Vclpkg
 000741           comp.phase_ready_to_end(phase);
+000741  point: type=line comment=case hier=uvm_pkg::uvm_task_phase__Vclpkg
                  end
 000741         UVM_PHASE_ENDED: begin
+000741  point: type=line comment=case hier=uvm_pkg::uvm_task_phase__Vclpkg
 000741           comp.phase_ended(phase);
+000741  point: type=line comment=case hier=uvm_pkg::uvm_task_phase__Vclpkg
 000741           comp.m_current_phase = null;
+000741  point: type=line comment=case hier=uvm_pkg::uvm_task_phase__Vclpkg
                  end
%000000         default:
-000000  point: type=line comment=case hier=uvm_pkg::uvm_task_phase__Vclpkg
%000000           `uvm_fatal("PH_BADEXEC","task phase traverse internal error")
-000000  point: type=line comment=case hier=uvm_pkg::uvm_task_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_task_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_task_phase__Vclpkg
              endcase
            end
        
          endfunction
        
        
          // Function: execute
          //
          // Fork the task-based phase ~phase~ for the component ~comp~. 
          //
 000741   virtual function void execute(uvm_component comp,
+000741  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
                                                  uvm_phase phase);
        
 000741     fork
+000741  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
 000741       begin
+000741  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
 000741         uvm_sequencer_base seqr;
+000741  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
 000741         process proc;
+000741  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
        
                // reseed this process for random stability
 000741         proc = process::self();
+000741  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
 000741         proc.srandom(uvm_create_random_seed(phase.get_type_name(), comp.get_full_name()));
+000741  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
        
 000741         phase.m_num_procs_not_yet_returned++;
+000741  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
        
 000715         if ($cast(seqr,comp))
+000715  point: type=branch comment=else hier=uvm_pkg::uvm_task_phase__Vclpkg
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_task_phase__Vclpkg
 000026           seqr.start_phase_sequence(phase);
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_task_phase__Vclpkg
        
 000741         exec_task(comp,phase);
+000741  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
        
 000741         phase.m_num_procs_not_yet_returned--;
+000741  point: type=line comment=block hier=uvm_pkg::uvm_task_phase__Vclpkg
        
              end
            join_none
        
          endfunction
        endclass
        
        

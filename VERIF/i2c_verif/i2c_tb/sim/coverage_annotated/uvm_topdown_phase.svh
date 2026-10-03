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
        // Class: uvm_topdown_phase
        //
        //------------------------------------------------------------------------------
        // Virtual base class for function phases that operate top-down.
        // The pure virtual function execute() is called for each component.
        //
        // A top-down function phase completes when the <execute()> method
        // has been called and returned on all applicable components
        // in the hierarchy.
        
        virtual class uvm_topdown_phase extends uvm_phase;
        
        
          // Function: new
          //
          // Create a new instance of a top-down phase
          //
%000002   function new(string name);
-000002  point: type=line comment=block hier=uvm_pkg::uvm_topdown_phase__Vclpkg
%000002     super.new(name,UVM_PHASE_IMP);
-000002  point: type=line comment=block hier=uvm_pkg::uvm_topdown_phase__Vclpkg
          endfunction
        
        
          // Function: traverse
          //
          // Traverses the component tree in top-down order, calling <execute> for
          // each component.
          //
 000287   virtual function void traverse(uvm_component comp,
+000287  point: type=line comment=block hier=uvm_pkg::uvm_topdown_phase__Vclpkg
                                         uvm_phase phase,
                                         uvm_phase_state state);
 000287     string name;
+000287  point: type=line comment=block hier=uvm_pkg::uvm_topdown_phase__Vclpkg
 000287     uvm_domain phase_domain = phase.get_domain();
+000287  point: type=line comment=block hier=uvm_pkg::uvm_topdown_phase__Vclpkg
 000287     uvm_domain comp_domain = comp.get_domain();
+000287  point: type=line comment=block hier=uvm_pkg::uvm_topdown_phase__Vclpkg
        
~000287     if (m_phase_trace)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_topdown_phase__Vclpkg
+000287  point: type=branch comment=else hier=uvm_pkg::uvm_topdown_phase__Vclpkg
            `uvm_info("PH_TRACE",$sformatf("topdown-phase phase=%s state=%s comp=%s comp.domain=%s phase.domain=%s",
                  phase.get_name(), state.name(), comp.get_full_name(),comp_domain.get_name(),phase_domain.get_name()),
%000000           UVM_DEBUG)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_topdown_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_topdown_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_topdown_phase__Vclpkg
        
~000287     if (phase_domain == uvm_domain::get_common_domain() ||
+000287  point: type=branch comment=if hier=uvm_pkg::uvm_topdown_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_topdown_phase__Vclpkg
 000287         phase_domain == comp_domain) begin
+000287  point: type=branch comment=if hier=uvm_pkg::uvm_topdown_phase__Vclpkg
 000287         case (state)
+000287  point: type=branch comment=if hier=uvm_pkg::uvm_topdown_phase__Vclpkg
 000059           UVM_PHASE_STARTED: begin
+000059  point: type=line comment=case hier=uvm_pkg::uvm_topdown_phase__Vclpkg
 000059             comp.m_current_phase = phase;
+000059  point: type=line comment=case hier=uvm_pkg::uvm_topdown_phase__Vclpkg
 000059             comp.m_apply_verbosity_settings(phase);
+000059  point: type=line comment=case hier=uvm_pkg::uvm_topdown_phase__Vclpkg
 000059             comp.phase_started(phase);
+000059  point: type=line comment=case hier=uvm_pkg::uvm_topdown_phase__Vclpkg
                    end
 000114           UVM_PHASE_EXECUTING: begin
+000114  point: type=line comment=case hier=uvm_pkg::uvm_topdown_phase__Vclpkg
~000114             if (!(phase.get_name() == "build" && comp.m_build_done)) begin
+000114  point: type=branch comment=if hier=uvm_pkg::uvm_topdown_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_topdown_phase__Vclpkg
 000114               uvm_phase ph = this; 
+000114  point: type=branch comment=if hier=uvm_pkg::uvm_topdown_phase__Vclpkg
 000114               comp.m_phasing_active++;
+000114  point: type=branch comment=if hier=uvm_pkg::uvm_topdown_phase__Vclpkg
~000114               if (comp.m_phase_imps.exists(this))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_topdown_phase__Vclpkg
+000114  point: type=branch comment=else hier=uvm_pkg::uvm_topdown_phase__Vclpkg
%000000                 ph = comp.m_phase_imps[this];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_topdown_phase__Vclpkg
 000114               ph.execute(comp, phase);
+000114  point: type=branch comment=if hier=uvm_pkg::uvm_topdown_phase__Vclpkg
 000114               comp.m_phasing_active--;
+000114  point: type=branch comment=if hier=uvm_pkg::uvm_topdown_phase__Vclpkg
                    end
                    end
%000000           UVM_PHASE_READY_TO_END: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_topdown_phase__Vclpkg
%000000             comp.phase_ready_to_end(phase);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_topdown_phase__Vclpkg
                    end
 000114           UVM_PHASE_ENDED: begin
+000114  point: type=line comment=case hier=uvm_pkg::uvm_topdown_phase__Vclpkg
 000114             comp.phase_ended(phase);
+000114  point: type=line comment=case hier=uvm_pkg::uvm_topdown_phase__Vclpkg
 000114             comp.m_current_phase = null;
+000114  point: type=line comment=case hier=uvm_pkg::uvm_topdown_phase__Vclpkg
                    end
%000000           default:
-000000  point: type=line comment=case hier=uvm_pkg::uvm_topdown_phase__Vclpkg
%000000             `uvm_fatal("PH_BADEXEC","topdown phase traverse internal error")
-000000  point: type=line comment=case hier=uvm_pkg::uvm_topdown_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_topdown_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_topdown_phase__Vclpkg
                endcase
            end
 000181     if(comp.get_first_child(name))
+000106  point: type=branch comment=if hier=uvm_pkg::uvm_topdown_phase__Vclpkg
+000181  point: type=branch comment=else hier=uvm_pkg::uvm_topdown_phase__Vclpkg
 000175       do
+000175  point: type=line comment=block hier=uvm_pkg::uvm_topdown_phase__Vclpkg
 000281         traverse(comp.get_child(name), phase, state);
+000281  point: type=line comment=block hier=uvm_pkg::uvm_topdown_phase__Vclpkg
 000281       while(comp.get_next_child(name));
+000175  point: type=line comment=block hier=uvm_pkg::uvm_topdown_phase__Vclpkg
+000281  point: type=line comment=block hier=uvm_pkg::uvm_topdown_phase__Vclpkg
          endfunction
        
        
          // Function: execute
          //
          // Executes the top-down phase ~phase~ for the component ~comp~. 
          //
 000114   virtual function void execute(uvm_component comp,
+000114  point: type=line comment=block hier=uvm_pkg::uvm_topdown_phase__Vclpkg
                                                  uvm_phase phase);
            // reseed this process for random stability
 000114     process proc = process::self();
+000114  point: type=line comment=block hier=uvm_pkg::uvm_topdown_phase__Vclpkg
 000114     proc.srandom(uvm_create_random_seed(phase.get_type_name(), comp.get_full_name()));
+000114  point: type=line comment=block hier=uvm_pkg::uvm_topdown_phase__Vclpkg
        
 000114     comp.m_current_phase = phase;
+000114  point: type=line comment=block hier=uvm_pkg::uvm_topdown_phase__Vclpkg
 000114     exec_func(comp,phase);
+000114  point: type=line comment=block hier=uvm_pkg::uvm_topdown_phase__Vclpkg
          endfunction
        
        endclass
        

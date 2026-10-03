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
        // Class: uvm_bottomup_phase
        //
        //------------------------------------------------------------------------------
        // Virtual base class for function phases that operate bottom-up.
        // The pure virtual function execute() is called for each component.
        // This is the default traversal so is included only for naming.
        //
        // A bottom-up function phase completes when the <execute()> method
        // has been called and returned on all applicable components
        // in the hierarchy.
        
        virtual class uvm_bottomup_phase extends uvm_phase;
        
          // Function: new
          //
          // Create a new instance of a bottom-up phase.
          //
%000006   function new(string name);
-000006  point: type=line comment=block hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
%000006     super.new(name,UVM_PHASE_IMP);
-000006  point: type=line comment=block hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
          endfunction
        
        
          // Function: traverse
          //
          // Traverses the component tree in bottom-up order, calling <execute> for
          // each component.
          //
 001026   virtual function void traverse(uvm_component comp,
+001026  point: type=line comment=block hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
                                         uvm_phase phase,
                                         uvm_phase_state state);
 001026     string name;
+001026  point: type=line comment=block hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
 001026     uvm_domain phase_domain =phase.get_domain();
+001026  point: type=line comment=block hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
 001026     uvm_domain comp_domain = comp.get_domain();
+001026  point: type=line comment=block hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
        
 000648     if (comp.get_first_child(name))
+000378  point: type=branch comment=if hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
+000648  point: type=branch comment=else hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
 000630       do
+000630  point: type=line comment=block hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
 001008         traverse(comp.get_child(name), phase, state);
+001008  point: type=line comment=block hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
 001008       while(comp.get_next_child(name));
+000630  point: type=line comment=block hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
+001008  point: type=line comment=block hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
        
~001026     if (m_phase_trace)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
+001026  point: type=branch comment=else hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
            `uvm_info("PH_TRACE",$sformatf("bottomup-phase phase=%s state=%s comp=%s comp.domain=%s phase.domain=%s",
                  phase.get_name(), state.name(), comp.get_full_name(),comp_domain.get_name(),phase_domain.get_name()),
%000000           UVM_DEBUG)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
        
~001026     if (phase_domain == uvm_domain::get_common_domain() ||
+001026  point: type=branch comment=if hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
 001026         phase_domain == comp_domain) begin
+001026  point: type=branch comment=if hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
 001026       case (state)
+001026  point: type=branch comment=if hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
 000342         UVM_PHASE_STARTED: begin
+000342  point: type=line comment=case hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
 000342           comp.m_current_phase = phase;
+000342  point: type=line comment=case hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
 000342           comp.m_apply_verbosity_settings(phase);
+000342  point: type=line comment=case hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
 000342           comp.phase_started(phase);
+000342  point: type=line comment=case hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
                  end
 000342         UVM_PHASE_EXECUTING: begin
+000342  point: type=line comment=case hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
 000342           uvm_phase ph = this; 
+000342  point: type=line comment=case hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
~000342           if (comp.m_phase_imps.exists(this))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
+000342  point: type=branch comment=else hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
%000000             ph = comp.m_phase_imps[this];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
 000342           ph.execute(comp, phase);
+000342  point: type=line comment=case hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
                  end
%000000         UVM_PHASE_READY_TO_END: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
%000000           comp.phase_ready_to_end(phase);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
                  end
 000342         UVM_PHASE_ENDED: begin
+000342  point: type=line comment=case hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
 000342           comp.phase_ended(phase);
+000342  point: type=line comment=case hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
 000342           comp.m_current_phase = null;
+000342  point: type=line comment=case hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
                  end
%000000         default:
-000000  point: type=line comment=case hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
%000000           `uvm_fatal("PH_BADEXEC","bottomup phase traverse internal error")
-000000  point: type=line comment=case hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
              endcase
            end
          endfunction
        
        
          // Function: execute
          //
          // Executes the bottom-up phase ~phase~ for the component ~comp~. 
          //
 000342   virtual function void execute(uvm_component comp,
+000342  point: type=line comment=block hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
                                                  uvm_phase phase);
            // reseed this process for random stability
 000342     process proc = process::self();
+000342  point: type=line comment=block hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
 000342     proc.srandom(uvm_create_random_seed(phase.get_type_name(), comp.get_full_name()));
+000342  point: type=line comment=block hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
        
 000342     comp.m_current_phase = phase;
+000342  point: type=line comment=block hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
 000342     exec_func(comp,phase);
+000342  point: type=line comment=block hier=uvm_pkg::uvm_bottomup_phase__Vclpkg
          endfunction
        
        endclass
        
        

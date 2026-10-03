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
        
        typedef class uvm_build_phase;
        typedef class uvm_connect_phase;
        typedef class uvm_end_of_elaboration_phase;
        typedef class uvm_start_of_simulation_phase;
        typedef class uvm_run_phase;
        typedef class uvm_extract_phase;
        typedef class uvm_check_phase;
        typedef class uvm_report_phase;
        typedef class uvm_final_phase;
        
        typedef class uvm_pre_reset_phase;
        typedef class uvm_reset_phase;
        typedef class uvm_post_reset_phase;
        typedef class uvm_pre_configure_phase;
        typedef class uvm_configure_phase;
        typedef class uvm_post_configure_phase;
        typedef class uvm_pre_main_phase;
        typedef class uvm_main_phase;
        typedef class uvm_post_main_phase;
        typedef class uvm_pre_shutdown_phase;
        typedef class uvm_shutdown_phase;
        typedef class uvm_post_shutdown_phase;
        
        uvm_phase build_ph;
        uvm_phase connect_ph;
        uvm_phase end_of_elaboration_ph;
        uvm_phase start_of_simulation_ph;
        uvm_phase run_ph;
        uvm_phase extract_ph;
        uvm_phase check_ph;
        uvm_phase report_ph;
           
        //------------------------------------------------------------------------------
        //
        // Class: uvm_domain
        //
        //------------------------------------------------------------------------------
        //
        // Phasing schedule node representing an independent branch of the schedule.
        // Handle used to assign domains to components or hierarchies in the testbench
        //
        
        class uvm_domain extends uvm_phase;
        
          static local uvm_domain m_common_domain;
          static local uvm_domain m_uvm_domain; // run-time phases
          static local uvm_domain m_domains[string];
          static local uvm_phase m_uvm_schedule;
        
        
          // Function: get_domains
          //
          // Provides a list of all domains in the provided ~domains~ argument. 
          //
%000000   static function void get_domains(output uvm_domain domains[string]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
%000000     domains = m_domains;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
          endfunction 
        
        
          // Function: get_uvm_schedule
          //
          // Get the "UVM" schedule, which consists of the run-time phases that
          // all components execute when participating in the "UVM" domain.
          //
%000000   static function uvm_phase get_uvm_schedule();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
%000000     void'(get_uvm_domain());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
%000000     return m_uvm_schedule;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
          endfunction 
        
        
          // Function: get_common_domain
          //
          // Get the "common" domain, which consists of the common phases that
          // all components execute in sync with each other. Phases in the "common"
          // domain are build, connect, end_of_elaboration, start_of_simulation, run,
          // extract, check, report, and final.
          //
 004335   static function uvm_domain get_common_domain();
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
        
 004335     uvm_domain domain;
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
 004335     uvm_phase schedule;
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
        
%000001     if (m_common_domain != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_domain__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_domain__Vclpkg
%000000       return m_common_domain;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_domain__Vclpkg
        
 004335     domain = new("common");
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
 004335     domain.add(uvm_build_phase::get());
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
 004335     domain.add(uvm_connect_phase::get());
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
 004335     domain.add(uvm_end_of_elaboration_phase::get());
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
 004335     domain.add(uvm_start_of_simulation_phase::get());
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
 004335     domain.add(uvm_run_phase::get());
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
 004335     domain.add(uvm_extract_phase::get());
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
 004335     domain.add(uvm_check_phase::get());
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
 004335     domain.add(uvm_report_phase::get());
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
 004335     domain.add(uvm_final_phase::get());
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
 004335     m_domains["common"] = domain;
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
        
            // for backward compatibility, make common phases visible;
            // same as uvm_<name>_phase::get().
 004335     build_ph               = domain.find(uvm_build_phase::get());
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
 004335     connect_ph             = domain.find(uvm_connect_phase::get());
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
 004335     end_of_elaboration_ph  = domain.find(uvm_end_of_elaboration_phase::get());
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
 004335     start_of_simulation_ph = domain.find(uvm_start_of_simulation_phase::get());
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
 004335     run_ph                 = domain.find(uvm_run_phase::get());   
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
 004335     extract_ph             = domain.find(uvm_extract_phase::get());
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
 004335     check_ph               = domain.find(uvm_check_phase::get());
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
 004335     report_ph              = domain.find(uvm_report_phase::get());
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
 004335     m_common_domain = domain;
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
        
 004335     domain = get_uvm_domain();
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
 004335     m_common_domain.add(domain,
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
 004335                      .with_phase(m_common_domain.find(uvm_run_phase::get())));
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
        
        
 004335     return m_common_domain;
+004335  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
        
          endfunction
        
        
          // Function: add_uvm_phases
          //
          // Appends to the given ~schedule~ the built-in UVM phases.
          //
%000001   static function void add_uvm_phases(uvm_phase schedule);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
        
%000001     schedule.add(uvm_pre_reset_phase::get());
-000001  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
%000001     schedule.add(uvm_reset_phase::get());
-000001  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
%000001     schedule.add(uvm_post_reset_phase::get());
-000001  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
%000001     schedule.add(uvm_pre_configure_phase::get());
-000001  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
%000001     schedule.add(uvm_configure_phase::get());
-000001  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
%000001     schedule.add(uvm_post_configure_phase::get());
-000001  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
%000001     schedule.add(uvm_pre_main_phase::get());
-000001  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
%000001     schedule.add(uvm_main_phase::get());
-000001  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
%000001     schedule.add(uvm_post_main_phase::get());
-000001  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
%000001     schedule.add(uvm_pre_shutdown_phase::get());
-000001  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
%000001     schedule.add(uvm_shutdown_phase::get());
-000001  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
%000001     schedule.add(uvm_post_shutdown_phase::get());
-000001  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
        
          endfunction
        
        
          // Function: get_uvm_domain
          //
          // Get a handle to the singleton ~uvm~ domain
          //
%000002   static function uvm_domain get_uvm_domain();
-000002  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
          
%000001     if (m_uvm_domain == null) begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_domain__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_domain__Vclpkg
%000001       m_uvm_domain = new("uvm");
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_domain__Vclpkg
%000001       m_uvm_schedule = new("uvm_sched", UVM_PHASE_SCHEDULE);
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_domain__Vclpkg
%000001       add_uvm_phases(m_uvm_schedule);
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_domain__Vclpkg
%000001       m_uvm_domain.add(m_uvm_schedule);
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_domain__Vclpkg
            end
%000002     return m_uvm_domain;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
          endfunction
        
        
          // Function: new
          //
          // Create a new instance of a phase domain.
%000002   function new(string name);
-000002  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
%000002     super.new(name,UVM_PHASE_DOMAIN);
-000002  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
%000002     if (m_domains.exists(name))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_domain__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_domain__Vclpkg
%000000       `uvm_error("UNIQDOMNAM", $sformatf("Domain created with non-unique name '%s'", name))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_domain__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_domain__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_domain__Vclpkg
%000002     m_domains[name] = this;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
          endfunction
        
          // Function: jump
          //
          // jumps all active phases of this domain to to-phase if
          // there is a path between active-phase and to-phase
%000000   function void jump(uvm_phase phase);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
%000000     uvm_phase phases[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
        
%000000     m_get_transitive_children(phases);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
            
%000000     phases = phases.find(item) with (item.get_state() inside {[UVM_PHASE_STARTED:UVM_PHASE_CLEANUP]}); 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
            
%000000     foreach(phases[idx]) 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_domain__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_domain__Vclpkg
%000000         if(phases[idx].is_before(phase) || phases[idx].is_after(phase))
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_domain__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_domain__Vclpkg
%000000             phases[idx].jump(phase);        
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_domain__Vclpkg
            
          endfunction
        
        // jump_all
        // --------
%000000   static function void jump_all(uvm_phase phase);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
%000000     uvm_domain domains[string];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
            
%000000     uvm_domain::get_domains(domains);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
                   
%000000     foreach(domains[idx])      
-000000  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
%000000         domains[idx].jump(phase);        
-000000  point: type=line comment=block hier=uvm_pkg::uvm_domain__Vclpkg
            
           endfunction
        endclass
        

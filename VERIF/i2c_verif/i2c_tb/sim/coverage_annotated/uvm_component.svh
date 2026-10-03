//      // verilator_coverage annotation
        //
        //------------------------------------------------------------------------------
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
        //------------------------------------------------------------------------------
        
        typedef class uvm_objection;
        typedef class uvm_sequence_base;
        typedef class uvm_sequence_item;
        
        //------------------------------------------------------------------------------
        //
        // CLASS: uvm_component
        //
        // The uvm_component class is the root base class for UVM components. In
        // addition to the features inherited from <uvm_object> and <uvm_report_object>,
        // uvm_component provides the following interfaces:
        //
        // Hierarchy - provides methods for searching and traversing the component
        //     hierarchy.
        //
        // Phasing - defines a phased test flow that all components follow, with a
        //     group of standard phase methods and an API for custom phases and
        //     multiple independent phasing domains to mirror DUT behavior e.g. power
        //
        // Configuration - provides methods for configuring component topology and other
        //     parameters ahead of and during component construction.
        //
        // Reporting - provides a convenience interface to the <uvm_report_handler>. All
        //     messages, warnings, and errors are processed through this interface.
        //
        // Transaction recording - provides methods for recording the transactions
        //     produced or consumed by the component to a transaction database (vendor
        //     specific). 
        //
        // Factory - provides a convenience interface to the <uvm_factory>. The factory
        //     is used to create new components and other objects based on type-wide and
        //     instance-specific configuration.
        //
        // The uvm_component is automatically seeded during construction using UVM
        // seeding, if enabled. All other objects must be manually reseeded, if
        // appropriate. See <uvm_object::reseed> for more information.
        //
        //------------------------------------------------------------------------------
        
        virtual class uvm_component extends uvm_report_object;
        
          // Function: new
          //
          // Creates a new component with the given leaf instance ~name~ and handle to
          // to its ~parent~.  If the component is a top-level component (i.e. it is
          // created in a static module or interface), ~parent~ should be null.
          //
          // The component will be inserted as a child of the ~parent~ object, if any.
          // If ~parent~ already has a child by the given ~name~, an error is produced.
          //
          // If ~parent~ is null, then the component will become a child of the
          // implicit top-level component, ~uvm_top~.
          //
          // All classes derived from uvm_component must call super.new(name,parent).
        
          extern function new (string name, uvm_component parent);
        
        
          //----------------------------------------------------------------------------
          // Group: Hierarchy Interface
          //----------------------------------------------------------------------------
          //
          // These methods provide user access to information about the component
          // hierarchy, i.e., topology.
          // 
          //----------------------------------------------------------------------------
        
          // Function: get_parent
          //
          // Returns a handle to this component's parent, or null if it has no parent.
        
          extern virtual function uvm_component get_parent ();
        
        
          // Function: get_full_name
          //
          // Returns the full hierarchical name of this object. The default
          // implementation concatenates the hierarchical name of the parent, if any,
          // with the leaf name of this object, as given by <uvm_object::get_name>. 
        
          extern virtual function string get_full_name ();
        
        
          // Function: get_children
          //
          // This function populates the end of the ~children~ array with the 
          // list of this component's children. 
          //
          //|   uvm_component array[$];
          //|   my_comp.get_children(array);
          //|   foreach(array[i]) 
          //|     do_something(array[i]);
        
          extern function void get_children(ref uvm_component children[$]);
        
        
          // Function: get_child
          extern function uvm_component get_child (string name);
        
          // Function: get_next_child
          extern function int get_next_child (ref string name);
        
          // Function: get_first_child
          //
          // These methods are used to iterate through this component's children, if
          // any. For example, given a component with an object handle, ~comp~, the
          // following code calls <uvm_object::print> for each child:
          //
          //|    string name;
          //|    uvm_component child;
          //|    if (comp.get_first_child(name))
          //|      do begin
          //|        child = comp.get_child(name);
          //|        child.print();
          //|      end while (comp.get_next_child(name));
        
          extern function int get_first_child (ref string name);
        
        
          // Function: get_num_children
          //
          // Returns the number of this component's children. 
        
          extern function int get_num_children ();
        
        
          // Function: has_child
          //
          // Returns 1 if this component has a child with the given ~name~, 0 otherwise.
        
          extern function int has_child (string name);
        
        
          // Function - set_name
          //
          // Renames this component to ~name~ and recalculates all descendants'
          // full names. This is an internal function for now.
        
          extern virtual function void set_name (string name);
        
          
          // Function: lookup
          //
          // Looks for a component with the given hierarchical ~name~ relative to this
          // component. If the given ~name~ is preceded with a '.' (dot), then the search
          // begins relative to the top level (absolute lookup). The handle of the
          // matching component is returned, else null. The name must not contain
          // wildcards.
        
          extern function uvm_component lookup (string name);
        
        
          // Function: get_depth
          //
          // Returns the component's depth from the root level. uvm_top has a
          // depth of 0. The test and any other top level components have a depth
          // of 1, and so on.
        
          extern function int unsigned get_depth();
        
        
          //----------------------------------------------------------------------------
          // Group: Phasing Interface
          //----------------------------------------------------------------------------
          //
          // These methods implement an interface which allows all components to step
          // through a standard schedule of phases, or a customized schedule, and
          // also an API to allow independent phase domains which can jump like state
          // machines to reflect behavior e.g. power domains on the DUT in different
          // portions of the testbench. The phase tasks and functions are the phase
          // name with the _phase suffix. For example, the build phase function is
          // <build_phase>.
          //
          // All processes associated with a task-based phase are killed when the phase
          // ends. See <uvm_phase::execute> for more details.
          //----------------------------------------------------------------------------
        
        
          // Function: build_phase
          //
          // The <uvm_build_phase> phase implementation method.
          //
          // Any override should call super.build_phase(phase) to execute the automatic
          // configuration of fields registed in the component by calling 
          // <apply_config_settings>.
          // To turn off automatic configuration for a component, 
          // do not call super.build_phase(phase).
          //
          // This method should never be called directly. 
        
          extern virtual function void build_phase(uvm_phase phase);
        
          // For backward compatibility the base build_phase method calls build.
          extern virtual function void build();
        
        
          // Function: connect_phase
          //
          // The <uvm_connect_phase> phase implementation method.
          //
          // This method should never be called directly. 
        
          extern virtual function void connect_phase(uvm_phase phase);
        
          // For backward compatibility the base connect_phase method calls connect.
          extern virtual function void connect();
        
          // Function: end_of_elaboration_phase
          //
          // The <uvm_end_of_elaboration_phase> phase implementation method.
          //
          // This method should never be called directly.
        
          extern virtual function void end_of_elaboration_phase(uvm_phase phase);
        
          // For backward compatibility the base end_of_elaboration_phase method calls end_of_elaboration.
          extern virtual function void end_of_elaboration();
        
          // Function: start_of_simulation_phase
          //
          // The <uvm_start_of_simulation_phase> phase implementation method.
          //
          // This method should never be called directly.
        
          extern virtual function void start_of_simulation_phase(uvm_phase phase);
        
          // For backward compatibility the base start_of_simulation_phase method calls start_of_simulation.
          extern virtual function void start_of_simulation();
        
          // Task: run_phase
          //
          // The <uvm_run_phase> phase implementation method.
          //
          // This task returning or not does not indicate the end
          // or persistence of this phase.
          // Thn the phase will automatically
          // ends once all objections are dropped using ~phase.drop_objection()~.
          // 
          // Any processes forked by this task continue to run
          // after the task returns,
          // but they will be killed once the phase ends.
          //
          // The run_phase task should never be called directly.
        
          extern virtual task run_phase(uvm_phase phase);
        
          // For backward compatibility the base run_phase method calls run.
          extern virtual task run();
        
          // Task: pre_reset_phase
          //
          // The <uvm_pre_reset_phase> phase implementation method.
          //
          // This task returning or not does not indicate the end
          // or persistence of this phase.
          // It is necessary to raise an objection
          // using ~phase.raise_objection()~ to cause the phase to persist.
          // Once all components have dropped their respective objection
          // using ~phase.drop_objection()~, or if no components raises an
          // objection, the phase is ended.
          // 
          // Any processes forked by this task continue to run
          // after the task returns,
          // but they will be killed once the phase ends.
          //
          // This method should not be called directly.
        
          extern virtual task pre_reset_phase(uvm_phase phase);
        
          // Task: reset_phase
          //
          // The <uvm_reset_phase> phase implementation method.
          //
          // This task returning or not does not indicate the end
          // or persistence of this phase.
          // It is necessary to raise an objection
          // using ~phase.raise_objection()~ to cause the phase to persist.
          // Once all components have dropped their respective objection
          // using ~phase.drop_objection()~, or if no components raises an
          // objection, the phase is ended.
          // 
          // Any processes forked by this task continue to run
          // after the task returns,
          // but they will be killed once the phase ends.
          //
          // This method should not be called directly.
        
          extern virtual task reset_phase(uvm_phase phase);
        
          // Task: post_reset_phase
          //
          // The <uvm_post_reset_phase> phase implementation method.
          //
          // This task returning or not does not indicate the end
          // or persistence of this phase.
          // It is necessary to raise an objection
          // using ~phase.raise_objection()~ to cause the phase to persist.
          // Once all components have dropped their respective objection
          // using ~phase.drop_objection()~, or if no components raises an
          // objection, the phase is ended.
          // 
          // Any processes forked by this task continue to run
          // after the task returns,
          // but they will be killed once the phase ends.
          //
          // This method should not be called directly.
        
          extern virtual task post_reset_phase(uvm_phase phase);
        
          // Task: pre_configure_phase
          //
          // The <uvm_pre_configure_phase> phase implementation method.
          //
          // This task returning or not does not indicate the end
          // or persistence of this phase.
          // It is necessary to raise an objection
          // using ~phase.raise_objection()~ to cause the phase to persist.
          // Once all components have dropped their respective objection
          // using ~phase.drop_objection()~, or if no components raises an
          // objection, the phase is ended.
          // 
          // Any processes forked by this task continue to run
          // after the task returns,
          // but they will be killed once the phase ends.
          //
          // This method should not be called directly.
        
          extern virtual task pre_configure_phase(uvm_phase phase);
        
          // Task: configure_phase
          //
          // The <uvm_configure_phase> phase implementation method.
          //
          // This task returning or not does not indicate the end
          // or persistence of this phase.
          // It is necessary to raise an objection
          // using ~phase.raise_objection()~ to cause the phase to persist.
          // Once all components have dropped their respective objection
          // using ~phase.drop_objection()~, or if no components raises an
          // objection, the phase is ended.
          // 
          // Any processes forked by this task continue to run
          // after the task returns,
          // but they will be killed once the phase ends.
          //
          // This method should not be called directly.
        
          extern virtual task configure_phase(uvm_phase phase);
        
          // Task: post_configure_phase
          //
          // The <uvm_post_configure_phase> phase implementation method.
          //
          // This task returning or not does not indicate the end
          // or persistence of this phase.
          // It is necessary to raise an objection
          // using ~phase.raise_objection()~ to cause the phase to persist.
          // Once all components have dropped their respective objection
          // using ~phase.drop_objection()~, or if no components raises an
          // objection, the phase is ended.
          // 
          // Any processes forked by this task continue to run
          // after the task returns,
          // but they will be killed once the phase ends.
          //
          // This method should not be called directly.
        
          extern virtual task post_configure_phase(uvm_phase phase);
        
          // Task: pre_main_phase
          //
          // The <uvm_pre_main_phase> phase implementation method.
          //
          // This task returning or not does not indicate the end
          // or persistence of this phase.
          // It is necessary to raise an objection
          // using ~phase.raise_objection()~ to cause the phase to persist.
          // Once all components have dropped their respective objection
          // using ~phase.drop_objection()~, or if no components raises an
          // objection, the phase is ended.
          // 
          // Any processes forked by this task continue to run
          // after the task returns,
          // but they will be killed once the phase ends.
          //
          // This method should not be called directly.
        
          extern virtual task pre_main_phase(uvm_phase phase);
        
          // Task: main_phase
          //
          // The <uvm_main_phase> phase implementation method.
          //
          // This task returning or not does not indicate the end
          // or persistence of this phase.
          // It is necessary to raise an objection
          // using ~phase.raise_objection()~ to cause the phase to persist.
          // Once all components have dropped their respective objection
          // using ~phase.drop_objection()~, or if no components raises an
          // objection, the phase is ended.
          // 
          // Any processes forked by this task continue to run
          // after the task returns,
          // but they will be killed once the phase ends.
          //
          // This method should not be called directly.
        
          extern virtual task main_phase(uvm_phase phase);
        
          // Task: post_main_phase
          //
          // The <uvm_post_main_phase> phase implementation method.
          //
          // This task returning or not does not indicate the end
          // or persistence of this phase.
          // It is necessary to raise an objection
          // using ~phase.raise_objection()~ to cause the phase to persist.
          // Once all components have dropped their respective objection
          // using ~phase.drop_objection()~, or if no components raises an
          // objection, the phase is ended.
          // 
          // Any processes forked by this task continue to run
          // after the task returns,
          // but they will be killed once the phase ends.
          //
          // This method should not be called directly.
        
          extern virtual task post_main_phase(uvm_phase phase);
        
          // Task: pre_shutdown_phase
          //
          // The <uvm_pre_shutdown_phase> phase implementation method.
          //
          // This task returning or not does not indicate the end
          // or persistence of this phase.
          // It is necessary to raise an objection
          // using ~phase.raise_objection()~ to cause the phase to persist.
          // Once all components have dropped their respective objection
          // using ~phase.drop_objection()~, or if no components raises an
          // objection, the phase is ended.
          // 
          // Any processes forked by this task continue to run
          // after the task returns,
          // but they will be killed once the phase ends.
          //
          // This method should not be called directly.
        
          extern virtual task pre_shutdown_phase(uvm_phase phase);
        
          // Task: shutdown_phase
          //
          // The <uvm_shutdown_phase> phase implementation method.
          //
          // This task returning or not does not indicate the end
          // or persistence of this phase.
          // It is necessary to raise an objection
          // using ~phase.raise_objection()~ to cause the phase to persist.
          // Once all components have dropped their respective objection
          // using ~phase.drop_objection()~, or if no components raises an
          // objection, the phase is ended.
          // 
          // Any processes forked by this task continue to run
          // after the task returns,
          // but they will be killed once the phase ends.
          //
          // This method should not be called directly.
        
          extern virtual task shutdown_phase(uvm_phase phase);
        
          // Task: post_shutdown_phase
          //
          // The <uvm_post_shutdown_phase> phase implementation method.
          //
          // This task returning or not does not indicate the end
          // or persistence of this phase.
          // It is necessary to raise an objection
          // using ~phase.raise_objection()~ to cause the phase to persist.
          // Once all components have dropped their respective objection
          // using ~phase.drop_objection()~, or if no components raises an
          // objection, the phase is ended.
          // 
          // Any processes forked by this task continue to run
          // after the task returns,
          // but they will be killed once the phase ends.
          //
          // This method should not be called directly.
        
          extern virtual task post_shutdown_phase(uvm_phase phase);
        
          // Function: extract_phase
          //
          // The <uvm_extract_phase> phase implementation method.
          //
          // This method should never be called directly.
        
          extern virtual function void extract_phase(uvm_phase phase);
        
          // For backward compatibility the base extract_phase method calls extract.
          extern virtual function void extract();
        
          // Function: check_phase
          //
          // The <uvm_check_phase> phase implementation method.
          //
          // This method should never be called directly.
        
          extern virtual function void check_phase(uvm_phase phase);
        
          // For backward compatibility the base check_phase method calls check.
          extern virtual function void check();
        
          // Function: report_phase
          //
          // The <uvm_report_phase> phase implementation method.
          //
          // This method should never be called directly.
        
          extern virtual function void report_phase(uvm_phase phase);
        
          // For backward compatibility the base report_phase method calls report.
          extern virtual function void report();
        
          // Function: final_phase
          //
          // The <uvm_final_phase> phase implementation method.
          //
          // This method should never be called directly.
          
          extern virtual function void final_phase(uvm_phase phase);
        
          // Function: phase_started
          //
          // Invoked at the start of each phase. The ~phase~ argument specifies
          // the phase being started. Any threads spawned in this callback are
          // not affected when the phase ends.
        
          extern virtual function void phase_started (uvm_phase phase);
        
          // Function: phase_ready_to_end
          //
          // Invoked when all objections to ending the given ~phase~ and all
          // sibling phases have been dropped, thus indicating that ~phase~ is 
          // ready to begin a clean exit. Sibling phases are any phases that 
          // have a common successor phase in the schedule plus any phases that
          // sync'd to the current phase. Components needing to consume delta
          // cycles or advance time to perform a clean exit from the phase
          // may raise the phase's objection. 
          //
          // |phase.raise_objection(this,"Reason");
          //
          // It is the responsibility of this component to drop the objection 
          // once it is ready for this phase to end (and processes killed).
          // If no objection to the given ~phase~ or sibling phases are raised,
          // then phase_ended() is called after a delta cycle.  If any objection
          // is raised, then when all objections to ending the given ~phase~
          // and siblings are dropped, another iteration of phase_ready_to_end
          // is called.  To prevent endless iterations due to coding error,
          // after 20 iterations, phase_ended() is called regardless of whether
          // previous iteration had any objections raised.
          
          extern virtual function void phase_ready_to_end (uvm_phase phase);
        
        
          // Function: phase_ended
          //
          // Invoked at the end of each phase. The ~phase~ argument specifies
          // the phase that is ending.  Any threads spawned in this callback are
          // not affected when the phase ends.
          
          extern virtual function void phase_ended (uvm_phase phase);
        
          
          //--------------------------------------------------------------------
          // phase / schedule / domain API
          //--------------------------------------------------------------------
        
          
          // Function: set_domain
          //
          // Apply a phase domain to this component and, if ~hier~ is set, 
          // recursively to all its children. 
          //
          // Calls the virtual <define_domain> method, which derived components can
          // override to augment or replace the domain definition of ita base class.
          //
        
          extern function void set_domain(uvm_domain domain, int hier=1);
        
        
          // Function: get_domain
          //
          // Return handle to the phase domain set on this component
          
          extern function uvm_domain get_domain();
        
        
          // Function: define_domain
          //
          // Builds custom phase schedules into the provided ~domain~ handle.
          //
          // This method is called by <set_domain>, which integrators use to specify
          // this component belongs in a domain apart from the default 'uvm' domain.
          //
          // Custom component base classes requiring a custom phasing schedule can
          // augment or replace the domain definition they inherit by overriding
          // <defined_domain>. To augment, overrides would call super.define_domain().
          // To replace, overrides would not call super.define_domain().
          // 
          // The default implementation adds a copy of the ~uvm~ phasing schedule to
          // the given ~domain~, if one doesn't already exist, and only if the domain
          // is currently empty.
          //
          // Calling <set_domain>
          // with the default ~uvm~ domain (see <uvm_domain::get_uvm_domain>) on
          // a component with no ~define_domain~ override effectively reverts the
          // that component to using the default ~uvm~ domain. This may be useful
          // if a branch of the testbench hierarchy defines a custom domain, but
          // some child sub-branch should remain in the default ~uvm~ domain,
          // call <set_domain> with a new domain instance handle with ~hier~ set.
          // Then, in the sub-branch, call <set_domain> with the default ~uvm~ domain handle,
          // obtained via <uvm_domain::get_uvm_domain()>.
          //
          // Alternatively, the integrator may define the graph in a new domain externally,
          // then call <set_domain> to apply it to a component.
        
        
          extern virtual protected function void define_domain(uvm_domain domain);
        
        
          // Function: set_phase_imp
          //
          // Override the default implementation for a phase on this component (tree) with a
          // custom one, which must be created as a singleton object extending the default
          // one and implementing required behavior in exec and traverse methods
          //
          // The ~hier~ specifies whether to apply the custom functor to the whole tree or
          // just this component.
        
          extern function void set_phase_imp(uvm_phase phase, uvm_phase imp, int hier=1);
        
          
          // Task: suspend
          //
          // Suspend this component.
          //
          // This method must be implemented by the user to suspend the
          // component according to the protocol and functionality it implements.
          // A suspended component can be subsequently resumed using <resume()>. 
        
          extern virtual task suspend ();
        
        
          // Task: resume
          //
          // Resume this component.
          //
          // This method must be implemented by the user to resume a component
          // that was previously suspended using <suspend()>.
          // Some component may start in the suspended state and
          // may need to be explicitly resumed.
        
          extern virtual task resume ();
        
        
        `ifndef UVM_NO_DEPRECATED
          // Function- status  - DEPRECATED
          //
          // Returns the status of this component.
          //
          // Returns a string that describes the current status of the
          // components. Possible values include, but are not limited to
          //
          // "<unknown>"   - Status is unknown (default)
          // "FINISHED"    - Component has stopped on its own accord. May be resumed.
          // "RUNNING"     - Component is running.
          //                 May be suspended after normal completion
          //                 of operation in progress.
          // "WAITING"     - Component is waiting. May be suspended immediately.
          // "SUSPENDED"   - Component is suspended. May be resumed.
          // "KILLED"      - Component has been killed and is unable to operate
          //                 any further. It cannot be resumed.
        
        
          extern function string status ();
        
        
          // Function- kill  - DEPRECATED
          //
          // Kills the process tree associated with this component's currently running
          // task-based phase, e.g., run.
        
          extern virtual function void kill ();
        
        
          // Function- do_kill_all  - DEPRECATED
          //
          // Recursively calls <kill> on this component and all its descendants,
          // which abruptly ends the currently running task-based phase, e.g., run.
          // See <run_phase> for better options to ending a task-based phase.
        
          extern virtual  function void  do_kill_all ();
        
        
          // Task- stop_phase  -- DEPRECATED
          //
          // The stop_phase task is called when this component's <enable_stop_interrupt>
          // bit is set and <global_stop_request> is called during a task-based phase,
          // e.g., run.
          //
          // Before a phase is abruptly ended, e.g., when a test deems the simulation
          // complete, some components may need extra time to shut down cleanly. Such
          // components may implement stop_phase to finish the currently executing
          // transaction, flush the queue, or perform other cleanup. Upon return from
          // stop_phase, a component signals it is ready to be stopped. 
          //
          // The ~stop_phase~ method will not be called if <enable_stop_interrupt> is 0.
          //
          // The default implementation is empty, i.e., it will return immediately.
          //
          // This method should never be called directly.
        
          extern virtual task stop_phase(uvm_phase phase);
        
          // backward compat
          extern virtual task stop (string ph_name);
        
        
          // Variable- enable_stop_interrupt  - DEPRECATED
          //
          // This bit allows a component to raise an objection to the stopping of the
          // current phase. It affects only time consuming phases (such as the run
          // phase).
          //
          // When this bit is set, the <stop> task in the component is called as a result
          // of a call to <global_stop_request>. Components that are sensitive to an
          // immediate killing of its run-time processes should set this bit and
          // implement the stop task to prepare for shutdown.
        
          int enable_stop_interrupt;
        `endif
        
        
          // Function: resolve_bindings
          //
          // Processes all port, export, and imp connections. Checks whether each port's
          // min and max connection requirements are met.
          //
          // It is called just before the end_of_elaboration phase.
          //
          // Users should not call directly.
        
          extern virtual function void resolve_bindings ();
        
        
          //----------------------------------------------------------------------------
          // Group: Configuration Interface
          //----------------------------------------------------------------------------
          //
          // Components can be designed to be user-configurable in terms of its
          // topology (the type and number of children it has), mode of operation, and
          // run-time parameters (knobs). The configuration interface accommodates
          // this common need, allowing component composition and state to be modified
          // without having to derive new classes or new class hierarchies for
          // every configuration scenario. 
          //
          //----------------------------------------------------------------------------
        
        
          // Used for caching config settings
%000001   static bit m_config_set = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
          extern function string massage_scope(string scope);
        
          // Function: set_config_int
        
          extern virtual function void set_config_int (string inst_name,  
                                                       string field_name,
                                                       uvm_bitstream_t value);
        
          // Function: set_config_string
        
          extern virtual function void set_config_string (string inst_name,  
                                                          string field_name,
                                                          string value);
        
          // Function: set_config_object
          //
          // Calling set_config_* causes configuration settings to be created and
          // placed in a table internal to this component. There are similar global
          // methods that store settings in a global table. Each setting stores the
          // supplied ~inst_name~, ~field_name~, and ~value~ for later use by descendent
          // components during their construction. (The global table applies to
          // all components and takes precedence over the component tables.)
          //
          // When a descendant component calls a get_config_* method, the ~inst_name~
          // and ~field_name~ provided in the get call are matched against all the
          // configuration settings stored in the global table and then in each
          // component in the parent hierarchy, top-down. Upon the first match, the
          // value stored in the configuration setting is returned. Thus, precedence is
          // global, following by the top-level component, and so on down to the
          // descendent component's parent.
          //
          // These methods work in conjunction with the get_config_* methods to
          // provide a configuration setting mechanism for integral, string, and
          // uvm_object-based types. Settings of other types, such as virtual interfaces
          // and arrays, can be indirectly supported by defining a class that contains
          // them.
          //
          // Both ~inst_name~ and ~field_name~ may contain wildcards.
          //
          // - For set_config_int, ~value~ is an integral value that can be anything
          //   from 1 bit to 4096 bits.
          //
          // - For set_config_string, ~value~ is a string.
          //
          // - For set_config_object, ~value~ must be an <uvm_object>-based object or
          //   null.  Its clone argument specifies whether the object should be cloned.
          //   If set, the object is cloned both going into the table (during the set)
          //   and coming out of the table (during the get), so that multiple components
          //   matched to the same setting (by way of wildcards) do not end up sharing
          //   the same object.
          //
          //
          // See <get_config_int>, <get_config_string>, and <get_config_object> for
          // information on getting the configurations set by these methods.
        
        
          extern virtual function void set_config_object (string inst_name,  
                                                          string field_name,
                                                          uvm_object value,  
                                                          bit clone=1);
        
        
          // Function: get_config_int
        
          extern virtual function bit get_config_int (string field_name,
                                                      inout uvm_bitstream_t value);
        
          // Function: get_config_string
        
          extern virtual function bit get_config_string (string field_name,
                                                         inout string value);
        
          // Function: get_config_object
          //
          // These methods retrieve configuration settings made by previous calls to
          // their set_config_* counterparts. As the methods' names suggest, there is
          // direct support for integral types, strings, and objects.  Settings of other
          // types can be indirectly supported by defining an object to contain them.
          //
          // Configuration settings are stored in a global table and in each component
          // instance. With each call to a get_config_* method, a top-down search is
          // made for a setting that matches this component's full name and the given
          // ~field_name~. For example, say this component's full instance name is
          // top.u1.u2. First, the global configuration table is searched. If that
          // fails, then it searches the configuration table in component 'top',
          // followed by top.u1. 
          //
          // The first instance/field that matches causes ~value~ to be written with the
          // value of the configuration setting and 1 is returned. If no match
          // is found, then ~value~ is unchanged and the 0 returned.
          //
          // Calling the get_config_object method requires special handling. Because
          // ~value~ is an output of type <uvm_object>, you must provide an uvm_object
          // handle to assign to (_not_ a derived class handle). After the call, you can
          // then $cast to the actual type.
          //
          // For example, the following code illustrates how a component designer might
          // call upon the configuration mechanism to assign its ~data~ object property,
          // whose type myobj_t derives from uvm_object.
          //
          //|  class mycomponent extends uvm_component;
          //|
          //|    local myobj_t data;
          //|
          //|    function void build_phase(uvm_phase phase);
          //|      uvm_object tmp;
          //|      super.build_phase(phase);
          //|      if(get_config_object("data", tmp))
          //|        if (!$cast(data, tmp))
          //|          $display("error! config setting for 'data' not of type myobj_t");
          //|        endfunction
          //|      ...
          //
          // The above example overrides the <build_phase> method. If you want to retain
          // any base functionality, you must call super.build_phase(uvm_phase phase).
          //
          // The ~clone~ bit clones the data inbound. The get_config_object method can
          // also clone the data outbound.
          //
          // See Members for information on setting the global configuration table.
        
          extern virtual function bit get_config_object (string field_name,
                                                         inout uvm_object value,  
                                                         input bit clone=1);
        
        
          // Function: check_config_usage
          //
          // Check all configuration settings in a components configuration table
          // to determine if the setting has been used, overridden or not used.
          // When ~recurse~ is 1 (default), configuration for this and all child
          // components are recursively checked. This function is automatically
          // called in the check phase, but can be manually called at any time.
          //
          // To get all configuration information prior to the run phase, do something 
          // like this in your top object:
          //|  function void start_of_simulation_phase(uvm_phase phase);
          //|    check_config_usage();
          //|  endfunction
        
          extern function void check_config_usage (bit recurse=1);
        
        
          // Function: apply_config_settings
          //
          // Searches for all config settings matching this component's instance path.
          // For each match, the appropriate set_*_local method is called using the
          // matching config setting's field_name and value. Provided the set_*_local
          // method is implemented, the component property associated with the
          // field_name is assigned the given value. 
          //
          // This function is called by <uvm_component::build_phase>.
          //
          // The apply_config_settings method determines all the configuration
          // settings targeting this component and calls the appropriate set_*_local
          // method to set each one. To work, you must override one or more set_*_local
          // methods to accommodate setting of your component's specific properties.
          // Any properties registered with the optional `uvm_*_field macros do not
          // require special handling by the set_*_local methods; the macros provide
          // the set_*_local functionality for you. 
          //
          // If you do not want apply_config_settings to be called for a component,
          // then the build_phase() method should be overloaded and you should not call
          // super.build_phase(phase). Likewise, apply_config_settings can be overloaded to
          // customize automated configuration.
          //
          // When the ~verbose~ bit is set, all overrides are printed as they are
          // applied. If the component's <print_config_matches> property is set, then
          // apply_config_settings is automatically called with ~verbose~ = 1.
        
          extern virtual function void apply_config_settings (bit verbose=0);
        
        
          // Function: print_config_settings
          //
          // Called without arguments, print_config_settings prints all configuration
          // information for this component, as set by previous calls to set_config_*.
          // The settings are printing in the order of their precedence.
          // 
          // If ~field~ is specified and non-empty, then only configuration settings
          // matching that field, if any, are printed. The field may not contain
          // wildcards. 
          //
          // If ~comp~ is specified and non-null, then the configuration for that
          // component is printed.
          //
          // If ~recurse~ is set, then configuration information for all ~comp~'s
          // children and below are printed as well.
          //
          // This function has been deprecated.  Use print_config instead.
        
          extern function void print_config_settings (string field="", 
                                                      uvm_component comp=null, 
                                                      bit recurse=0);
        
          // Function: print_config
          //
          // Print_config_settings prints all configuration information for this
          // component, as set by previous calls to set_config_* and exports to
          // the resources pool.  The settings are printing in the order of
          // their precedence.
          //
          // If ~recurse~ is set, then configuration information for all
          // children and below are printed as well.
          //
          // if ~audit~ is set then the audit trail for each resource is printed
          // along with the resource name and value
        
          extern function void print_config(bit recurse = 0, bit audit = 0);
        
          // Function: print_config_with_audit
          //
          // Operates the same as print_config except that the audit bit is
          // forced to 1.  This interface makes user code a bit more readable as
          // it avoids multiple arbitrary bit settings in the argument list.
          //
          // If ~recurse~ is set, then configuration information for all
          // children and below are printed as well.
        
          extern function void print_config_with_audit(bit recurse = 0);
        
          // Variable: print_config_matches
          //
          // Setting this static variable causes get_config_* to print info about
          // matching configuration settings as they are being applied.
        
          static bit print_config_matches;
        
        
          //----------------------------------------------------------------------------
          // Group: Objection Interface
          //----------------------------------------------------------------------------
          //
          // These methods provide object level hooks into the <uvm_objection> 
          // mechanism.
          // 
          //----------------------------------------------------------------------------
        
        
          // Function: raised
          //
          // The ~raised~ callback is called when this or a descendant of this component
          // instance raises the specfied ~objection~. The ~source_obj~ is the object
          // that originally raised the objection. 
          // The ~description~ is optionally provided by the ~source_obj~ to give a
          // reason for raising the objection. The ~count~ indicates the number of
          // objections raised by the ~source_obj~.
        
%000002   virtual function void raised (uvm_objection objection, uvm_object source_obj, 
-000002  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
              string description, int count);
          endfunction
        
        
          // Function: dropped
          //
          // The ~dropped~ callback is called when this or a descendant of this component
          // instance drops the specfied ~objection~. The ~source_obj~ is the object
          // that originally dropped the objection. 
          // The ~description~ is optionally provided by the ~source_obj~ to give a
          // reason for dropping the objection. The ~count~ indicates the number of
          // objections dropped by the the ~source_obj~.
        
%000002   virtual function void dropped (uvm_objection objection, uvm_object source_obj, 
-000002  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
              string description, int count);
          endfunction
        
        
          // Task: all_dropped
          //
          // The ~all_droppped~ callback is called when all objections have been 
          // dropped by this component and all its descendants.  The ~source_obj~ is the
          // object that dropped the last objection.
          // The ~description~ is optionally provided by the ~source_obj~ to give a
          // reason for raising the objection. The ~count~ indicates the number of
          // objections dropped by the the ~source_obj~.
        
%000002   virtual task all_dropped (uvm_objection objection, uvm_object source_obj, 
-000002  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
              string description, int count);
          endtask
        
        
          //----------------------------------------------------------------------------
          // Group: Factory Interface
          //----------------------------------------------------------------------------
          //
          // The factory interface provides convenient access to a portion of UVM's
          // <uvm_factory> interface. For creating new objects and components, the
          // preferred method of accessing the factory is via the object or component
          // wrapper (see <uvm_component_registry #(T,Tname)> and
          // <uvm_object_registry #(T,Tname)>). The wrapper also provides functions
          // for setting type and instance overrides.
          //
          //----------------------------------------------------------------------------
        
          // Function: create_component
          //
          // A convenience function for <uvm_factory::create_component_by_name>,
          // this method calls upon the factory to create a new child component
          // whose type corresponds to the preregistered type name, ~requested_type_name~,
          // and instance name, ~name~. This method is equivalent to:
          //
          //|  factory.create_component_by_name(requested_type_name,
          //|                                   get_full_name(), name, this);
          //
          // If the factory determines that a type or instance override exists, the type
          // of the component created may be different than the requested type. See
          // <set_type_override> and <set_inst_override>. See also <uvm_factory> for
          // details on factory operation.
        
          extern function uvm_component create_component (string requested_type_name, 
                                                          string name);
        
        
          // Function: create_object
          //
          // A convenience function for <uvm_factory::create_object_by_name>,
          // this method calls upon the factory to create a new object
          // whose type corresponds to the preregistered type name,
          // ~requested_type_name~, and instance name, ~name~. This method is
          // equivalent to:
          //
          //|  factory.create_object_by_name(requested_type_name,
          //|                                get_full_name(), name);
          //
          // If the factory determines that a type or instance override exists, the
          // type of the object created may be different than the requested type.  See
          // <uvm_factory> for details on factory operation.
        
          extern function uvm_object create_object (string requested_type_name,
                                                    string name="");
        
        
          // Function: set_type_override_by_type
          //
          // A convenience function for <uvm_factory::set_type_override_by_type>, this
          // method registers a factory override for components and objects created at
          // this level of hierarchy or below. This method is equivalent to:
          //
          //|  factory.set_type_override_by_type(original_type, override_type,replace);
          //
          // The ~relative_inst_path~ is relative to this component and may include
          // wildcards. The ~original_type~ represents the type that is being overridden.
          // In subsequent calls to <uvm_factory::create_object_by_type> or
          // <uvm_factory::create_component_by_type>, if the requested_type matches the
          // ~original_type~ and the instance paths match, the factory will produce
          // the ~override_type~. 
          //
          // The original and override type arguments are lightweight proxies to the
          // types they represent. See <set_inst_override_by_type> for information
          // on usage.
        
          extern static function void set_type_override_by_type
                                                     (uvm_object_wrapper original_type, 
                                                      uvm_object_wrapper override_type,
                                                      bit replace=1);
        
        
          // Function: set_inst_override_by_type
          //
          // A convenience function for <uvm_factory::set_inst_override_by_type>, this
          // method registers a factory override for components and objects created at
          // this level of hierarchy or below. In typical usage, this method is
          // equivalent to:
          //
          //|  factory.set_inst_override_by_type({get_full_name(),".",
          //|                                     relative_inst_path},
          //|                                     original_type,
          //|                                     override_type);
          //
          // The ~relative_inst_path~ is relative to this component and may include
          // wildcards. The ~original_type~ represents the type that is being overridden.
          // In subsequent calls to <uvm_factory::create_object_by_type> or
          // <uvm_factory::create_component_by_type>, if the requested_type matches the
          // ~original_type~ and the instance paths match, the factory will produce the
          // ~override_type~. 
          //
          // The original and override types are lightweight proxies to the types they
          // represent. They can be obtained by calling ~type::get_type()~, if
          // implemented by ~type~, or by directly calling ~type::type_id::get()~, where 
          // ~type~ is the user type and ~type_id~ is the name of the typedef to
          // <uvm_object_registry #(T,Tname)> or <uvm_component_registry #(T,Tname)>.
          //
          // If you are employing the `uvm_*_utils macros, the typedef and the get_type
          // method will be implemented for you. For details on the utils macros
          // refer to <Utility and Field Macros for Components and Objects>.
          //
          // The following example shows `uvm_*_utils usage:
          //
          //|  class comp extends uvm_component;
          //|    `uvm_component_utils(comp)
          //|    ...
          //|  endclass
          //|
          //|  class mycomp extends uvm_component;
          //|    `uvm_component_utils(mycomp)
          //|    ...
          //|  endclass
          //|
          //|  class block extends uvm_component;
          //|    `uvm_component_utils(block)
          //|    comp c_inst;
          //|    virtual function void build_phase(uvm_phase phase);
          //|      set_inst_override_by_type("c_inst",comp::get_type(),
          //|                                         mycomp::get_type());
          //|    endfunction
          //|    ...
          //|  endclass
        
          extern function void set_inst_override_by_type(string relative_inst_path,  
                                                         uvm_object_wrapper original_type,
                                                         uvm_object_wrapper override_type);
        
        
          // Function: set_type_override
          //
          // A convenience function for <uvm_factory::set_type_override_by_name>,
          // this method configures the factory to create an object of type
          // ~override_type_name~ whenever the factory is asked to produce a type
          // represented by ~original_type_name~.  This method is equivalent to:
          //
          //|  factory.set_type_override_by_name(original_type_name,
          //|                                    override_type_name, replace);
          //
          // The ~original_type_name~ typically refers to a preregistered type in the
          // factory. It may, however, be any arbitrary string. Subsequent calls to
          // create_component or create_object with the same string and matching
          // instance path will produce the type represented by override_type_name.
          // The ~override_type_name~ must refer to a preregistered type in the factory. 
        
          extern static function void set_type_override(string original_type_name, 
                                                        string override_type_name,
                                                        bit    replace=1);
        
        
          // Function: set_inst_override
          //
          // A convenience function for <uvm_factory::set_inst_override_by_name>, this
          // method registers a factory override for components created at this level
          // of hierarchy or below. In typical usage, this method is equivalent to:
          //
          //|  factory.set_inst_override_by_name({get_full_name(),".",
          //|                                     relative_inst_path},
          //|                                      original_type_name,
          //|                                     override_type_name);
          //
          // The ~relative_inst_path~ is relative to this component and may include
          // wildcards. The ~original_type_name~ typically refers to a preregistered type
          // in the factory. It may, however, be any arbitrary string. Subsequent calls
          // to create_component or create_object with the same string and matching
          // instance path will produce the type represented by ~override_type_name~.
          // The ~override_type_name~ must refer to a preregistered type in the factory. 
        
          extern function void set_inst_override(string relative_inst_path,  
                                                 string original_type_name,
                                                 string override_type_name);
        
        
          // Function: print_override_info
          //
          // This factory debug method performs the same lookup process as create_object
          // and create_component, but instead of creating an object, it prints
          // information about what type of object would be created given the
          // provided arguments.
        
          extern function void print_override_info(string requested_type_name,
                                                   string name="");
        
        
          //----------------------------------------------------------------------------
          // Group: Hierarchical Reporting Interface
          //----------------------------------------------------------------------------
          //
          // This interface provides versions of the set_report_* methods in the
          // <uvm_report_object> base class that are applied recursively to this
          // component and all its children.
          //
          // When a report is issued and its associated action has the LOG bit set, the
          // report will be sent to its associated FILE descriptor.
          //----------------------------------------------------------------------------
        
          // Function: set_report_id_verbosity_hier
        
          extern function void set_report_id_verbosity_hier (string id,
                                                          int verbosity);
        
          // Function: set_report_severity_id_verbosity_hier
          //
          // These methods recursively associate the specified verbosity with reports of
          // the given ~severity~, ~id~, or ~severity-id~ pair. An verbosity associated
          // with a particular severity-id pair takes precedence over an verbosity
          // associated with id, which takes precedence over an an verbosity associated
          // with a severity.
          //
          // For a list of severities and their default verbosities, refer to
          // <uvm_report_handler>.
        
          extern function void set_report_severity_id_verbosity_hier(uvm_severity severity,
                                                                  string id,
                                                                  int verbosity);
        
        
          // Function: set_report_severity_action_hier
        
          extern function void set_report_severity_action_hier (uvm_severity severity,
                                                                uvm_action action);
        
        
          // Function: set_report_id_action_hier
        
          extern function void set_report_id_action_hier (string id,
                                                          uvm_action action);
        
          // Function: set_report_severity_id_action_hier
          //
          // These methods recursively associate the specified action with reports of
          // the given ~severity~, ~id~, or ~severity-id~ pair. An action associated
          // with a particular severity-id pair takes precedence over an action
          // associated with id, which takes precedence over an an action associated
          // with a severity.
          //
          // For a list of severities and their default actions, refer to
          // <uvm_report_handler>.
        
          extern function void set_report_severity_id_action_hier(uvm_severity severity,
                                                                  string id,
                                                                  uvm_action action);
        
        
        
          // Function: set_report_default_file_hier
        
          extern function void set_report_default_file_hier (UVM_FILE file);
        
          // Function: set_report_severity_file_hier
        
          extern function void set_report_severity_file_hier (uvm_severity severity,
                                                              UVM_FILE file);
        
          // Function: set_report_id_file_hier
        
          extern function void set_report_id_file_hier (string id,
                                                        UVM_FILE file);
        
          // Function: set_report_severity_id_file_hier
          //
          // These methods recursively associate the specified FILE descriptor with
          // reports of the given ~severity~, ~id~, or ~severity-id~ pair. A FILE
          // associated with a particular severity-id pair takes precedence over a FILE
          // associated with id, which take precedence over an a FILE associated with a
          // severity, which takes precedence over the default FILE descriptor.
          //
          // For a list of severities and other information related to the report
          // mechanism, refer to <uvm_report_handler>.
        
          extern function void set_report_severity_id_file_hier(uvm_severity severity,
                                                                string id,
                                                                UVM_FILE file);
        
        
          // Function: set_report_verbosity_level_hier
          //
          // This method recursively sets the maximum verbosity level for reports for
          // this component and all those below it. Any report from this component
          // subtree whose verbosity exceeds this maximum will be ignored.
          // 
          // See <uvm_report_handler> for a list of predefined message verbosity levels
          // and their meaning.
        
            extern function void set_report_verbosity_level_hier (int verbosity);
         
        
          // Function: pre_abort
          //
          // This callback is executed when the message system is executing a
          // <UVM_EXIT> action. The exit action causes an immediate termination of
          // the simulation, but the pre_abort callback hook gives components an 
          // opportunity to provide additional information to the user before
          // the termination happens. For example, a test may want to executed
          // the report function of a particular component even when an error
          // condition has happened to force a premature termination you would
          // write a function like:
          //
          //| function void mycomponent::pre_abort();
          //|   report();
          //| endfunction
          //
          // The pre_abort() callback hooks are called in a bottom-up fashion.
        
%000000   virtual function void pre_abort;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
          endfunction
        
          //----------------------------------------------------------------------------
          // Group: Recording Interface
          //----------------------------------------------------------------------------
          // These methods comprise the component-based transaction recording
          // interface. The methods can be used to record the transactions that
          // this component "sees", i.e. produces or consumes.
          //
          // The API and implementation are subject to change once a vendor-independent
          // use-model is determined.
          //----------------------------------------------------------------------------
        
          // Function: accept_tr
          //
          // This function marks the acceptance of a transaction, ~tr~, by this
          // component. Specifically, it performs the following actions:
          //
          // - Calls the ~tr~'s <uvm_transaction::accept_tr> method, passing to it the
          //   ~accept_time~ argument.
          //
          // - Calls this component's <do_accept_tr> method to allow for any post-begin
          //   action in derived classes.
          //
          // - Triggers the component's internal accept_tr event. Any processes waiting
          //   on this event will resume in the next delta cycle. 
        
          extern function void accept_tr (uvm_transaction tr, time accept_time=0);
        
        
          // Function: do_accept_tr
          //
          // The <accept_tr> method calls this function to accommodate any user-defined
          // post-accept action. Implementations should call super.do_accept_tr to
          // ensure correct operation.
            
          extern virtual protected function void do_accept_tr (uvm_transaction tr);
        
        
          // Function: begin_tr
          //
          // This function marks the start of a transaction, ~tr~, by this component.
          // Specifically, it performs the following actions:
          //
          // - Calls ~tr~'s <uvm_transaction::begin_tr> method, passing to it the
          //   ~begin_time~ argument. The ~begin_time~ should be greater than or equal
          //   to the accept time. By default, when ~begin_time~ = 0, the current
          //   simulation time is used.
          //
          //   If recording is enabled (recording_detail != UVM_OFF), then a new
          //   database-transaction is started on the component's transaction stream
          //   given by the stream argument. No transaction properties are recorded at
          //   this time.
          //
          // - Calls the component's <do_begin_tr> method to allow for any post-begin
          //   action in derived classes.
          //
          // - Triggers the component's internal begin_tr event. Any processes waiting
          //   on this event will resume in the next delta cycle. 
          //
          // A handle to the transaction is returned. The meaning of this handle, as
          // well as the interpretation of the arguments ~stream_name~, ~label~, and
          // ~desc~ are vendor specific.
        
          extern function integer begin_tr (uvm_transaction tr,
                                            string stream_name="main",
                                            string label="",
                                            string desc="",
                                            time begin_time=0,
                                            integer parent_handle=0);
        
        
          // Function: begin_child_tr
          //
          // This function marks the start of a child transaction, ~tr~, by this
          // component. Its operation is identical to that of <begin_tr>, except that
          // an association is made between this transaction and the provided parent
          // transaction. This association is vendor-specific.
        
          extern function integer begin_child_tr (uvm_transaction tr,
                                                  integer parent_handle=0,
                                                  string stream_name="main",
                                                  string label="",
                                                  string desc="",
                                                  time begin_time=0);
        
        
          // Function: do_begin_tr
          //
          // The <begin_tr> and <begin_child_tr> methods call this function to
          // accommodate any user-defined post-begin action. Implementations should call
          // super.do_begin_tr to ensure correct operation.
        
          extern virtual protected 
                         function void do_begin_tr (uvm_transaction tr,
                                                    string stream_name,
                                                    integer tr_handle);
        
        
          // Function: end_tr
          //
          // This function marks the end of a transaction, ~tr~, by this component.
          // Specifically, it performs the following actions:
          //
          // - Calls ~tr~'s <uvm_transaction::end_tr> method, passing to it the
          //   ~end_time~ argument. The ~end_time~ must at least be greater than the
          //   begin time. By default, when ~end_time~ = 0, the current simulation time
          //   is used.
          //
          //   The transaction's properties are recorded to the database-transaction on
          //   which it was started, and then the transaction is ended. Only those
          //   properties handled by the transaction's do_record method (and optional
          //   `uvm_*_field macros) are recorded.
          //
          // - Calls the component's <do_end_tr> method to accommodate any post-end
          //   action in derived classes.
          //
          // - Triggers the component's internal end_tr event. Any processes waiting on
          //   this event will resume in the next delta cycle. 
          //
          // The ~free_handle~ bit indicates that this transaction is no longer needed.
          // The implementation of free_handle is vendor-specific.
        
          extern function void end_tr (uvm_transaction tr,
                                       time end_time=0,
                                       bit free_handle=1);
        
        
          // Function: do_end_tr
          //
          // The <end_tr> method calls this function to accommodate any user-defined
          // post-end action. Implementations should call super.do_end_tr to ensure
          // correct operation.
        
          extern virtual protected function void do_end_tr (uvm_transaction tr,
                                                            integer tr_handle);
        
        
          // Function: record_error_tr
          //
          // This function marks an error transaction by a component. Properties of the
          // given uvm_object, ~info~, as implemented in its <uvm_object::do_record> method,
          // are recorded to the transaction database.
          //
          // An ~error_time~ of 0 indicates to use the current simulation time. The
          // ~keep_active~ bit determines if the handle should remain active. If 0,
          // then a zero-length error transaction is recorded. A handle to the
          // database-transaction is returned. 
          //
          // Interpretation of this handle, as well as the strings ~stream_name~,
          // ~label~, and ~desc~, are vendor-specific.
        
          extern function integer record_error_tr (string stream_name="main",
                                                   uvm_object info=null,
                                                   string label="error_tr",
                                                   string desc="",
                                                   time   error_time=0,
                                                   bit    keep_active=0);
        
        
          // Function: record_event_tr
          //
          // This function marks an event transaction by a component. 
          //
          // An ~event_time~ of 0 indicates to use the current simulation time. 
          //
          // A handle to the transaction is returned. The ~keep_active~ bit determines
          // if the handle may be used for other vendor-specific purposes. 
          //
          // The strings for ~stream_name~, ~label~, and ~desc~ are vendor-specific
          // identifiers for the transaction.
        
          extern function integer record_event_tr (string stream_name="main",
                                                   uvm_object info=null,
                                                   string label="event_tr",
                                                   string desc="",
                                                   time   event_time=0,
                                                   bit    keep_active=0);
        
        
          // Variable: print_enabled
          //
          // This bit determines if this component should automatically be printed as a
          // child of its parent object. 
          // 
          // By default, all children are printed. However, this bit allows a parent
          // component to disable the printing of specific children.
        
 000057   bit print_enabled = 1;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
        
          // Variable: recorder
          //
          // Specifies the <uvm_recorder> object to use for <begin_tr> and other
          // methods in the <Recording Interface>. Default is <uvm_default_recorder>.
          //
          uvm_recorder recorder;
        
          //----------------------------------------------------------------------------
          //                     PRIVATE or PSUEDO-PRIVATE members
          //                      *** Do not call directly ***
          //         Implementation and even existence are subject to change. 
          //----------------------------------------------------------------------------
          // Most local methods are prefixed with m_, indicating they are not
          // user-level methods. SystemVerilog does not support friend classes,
          // which forces some otherwise internal methods to be exposed (i.e. not
          // be protected via 'local' keyword). These methods are also prefixed
          // with m_ to indicate they are not intended for public use.
          //
          // Internal methods will not be documented, although their implementa-
          // tions are freely available via the open-source license.
          //----------------------------------------------------------------------------
        
          protected uvm_domain m_domain;    // set_domain stores our domain handle
        
          /*protected*/ uvm_phase  m_phase_imps[uvm_phase];    // functors to override ovm_root defaults
        
          //TND review protected, provide read-only accessor.
          uvm_phase            m_current_phase;            // the most recently executed phase
          protected process    m_phase_process;
        
          /*protected*/ bit  m_build_done;
          /*protected*/ int  m_phasing_active;
        
          extern                   function void set_int_local(string field_name, 
                                                               uvm_bitstream_t value,
                                                               bit recurse=1);
        
          /*protected*/ uvm_component m_parent;
          protected     uvm_component m_children[string];
          protected     uvm_component m_children_by_handle[uvm_component];
          extern protected virtual function bit  m_add_child(uvm_component child);
          extern local     virtual function void m_set_full_name();
        
          extern                   function void do_resolve_bindings();
          extern                   function void do_flush();
        
          extern virtual           function void flush ();
        
          extern local             function void m_extract_name(string name ,
                                                                output string leaf ,
                                                                output string remainder );
        
          // overridden to disable
          extern virtual function uvm_object create (string name=""); 
          extern virtual function uvm_object clone  ();
        
          local integer m_stream_handle[string];
          local integer m_tr_h[uvm_transaction];
          extern protected function integer m_begin_tr (uvm_transaction tr,
                      integer parent_handle=0, bit has_parent=0,
                      string stream_name="main", string label="",
                      string desc="", time begin_time=0);
        
          string m_name;
        
%000001   const static string type_name = "uvm_component";
-000001  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   virtual function string get_type_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     return type_name;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
          endfunction
        
          protected uvm_event_pool event_pool;
        
 000057   int unsigned recording_detail = UVM_NONE;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
          extern         function void   do_print(uvm_printer printer);
        
          // Internal methods for setting up command line messaging stuff
          extern function void m_set_cl_msg_args;
          extern function void m_set_cl_verb;
          extern function void m_set_cl_action;
          extern function void m_set_cl_sev;
          extern function void m_apply_verbosity_settings(uvm_phase phase);
        
          // The verbosity settings may have a specific phase to start at. 
          // We will do this work in the phase_started callback. 
        
          typedef struct {
            string comp;
            string phase;
            time   offset;
            uvm_verbosity verbosity;
            string id;
          } m_verbosity_setting;
        
          m_verbosity_setting m_verbosity_settings[$];
          static m_verbosity_setting m_time_settings[$];
        
          // does the pre abort callback hierarchically
          extern /*local*/ function void m_do_pre_abort;
        
        endclass : uvm_component
        
        `include "base/uvm_root.svh"
        
        //------------------------------------------------------------------------------
        // IMPLEMENTATION
        //------------------------------------------------------------------------------
        
        //------------------------------------------------------------------------------
        //
        // CLASS- uvm_component
        //
        //------------------------------------------------------------------------------
        
        
        // new
        // ---
        
 000057 function uvm_component::new (string name, uvm_component parent);
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   string error_str;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   uvm_root top;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
 000057   super.new(name);
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
          // If uvm_top, reset name to "" so it doesn't show in full paths then return
~000056   if (parent==null && name == "__top__") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000056  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     set_name(""); // *** VIRTUAL
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          end
        
 000057   top = uvm_root::get();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
          // Check that we're not in or past end_of_elaboration
 000057   begin
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057     uvm_phase bld;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057     uvm_domain common;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057     common = uvm_domain::get_common_domain();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057     bld = common.find(uvm_build_phase::get());
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
~000056     if (bld == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000056  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       uvm_report_fatal("COMP/INTERNAL",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000                        "attempt to find build phase object failed",UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
~000056     if (bld.get_state() == UVM_PHASE_DONE) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000056  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       uvm_report_fatal("ILLCRT", {"It is illegal to create a component ('",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000                 name,"' under '",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000                 (parent == null ? top.get_full_name() : parent.get_full_name()),
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000                "') after the build phase has ended."},
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000                        UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
            end
          end
        
~000056   if (name == "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000056  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     name.itoa(m_inst_count);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000     name = {"COMP_", name};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          end
        
~000056   if(parent == this) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000056  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     `uvm_fatal("THISPARENT", "cannot set the parent of a component to itself")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
          end
        
~000055   if (parent == null)
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000055  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000001     parent = top;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
~000056   if(uvm_report_enabled(UVM_MEDIUM+1, UVM_INFO, "NEWCOMP"))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000056  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
            `uvm_info("NEWCOMP", {"Creating ",
%000000       (parent==top?"uvm_top":parent.get_full_name()),".",name},UVM_MEDIUM+1)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
        
~000056   if (parent.has_child(name) && this != parent.get_child(name)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000056  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     if (parent == top) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       error_str = {"Name '",name,"' is not unique to other top-level ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000       "instances. If parent is a module, build a unique name by combining the ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000       "the module name and component name: $sformatf(\"\%m.\%s\",\"",name,"\")."};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000       `uvm_fatal("CLDEXT",error_str)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
            end
            else
              `uvm_fatal("CLDEXT",
                $sformatf("Cannot set '%s' as a child of '%s', %s",
                          name, parent.get_full_name(),
%000000                   "which already has a child by that name."))
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          end
        
 000057   m_parent = parent;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
 000057   set_name(name); // *** VIRTUAL
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
~000056   if (!m_parent.m_add_child(this))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000056  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     m_parent = null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
 000057   event_pool = new("event_pool");
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
 000057   m_domain = parent.m_domain;     // by default, inherit domains from parents
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
          
          // Now that inst name is established, reseed (if use_uvm_seeding is set)
 000057   reseed();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
          // Do local configuration settings
~000057   if (!uvm_config_db #(uvm_bitstream_t)::get(this, "", "recording_detail", recording_detail))
+000056  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
+000057  point: type=expr comment=(get(this%22%22%22recording_detail%22recording_detail)==0) => 1 hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=expr comment=(get(this%22%22%22recording_detail%22recording_detail)==1) => 0 hier=uvm_pkg::uvm_component__Vclpkg
 000056         void'(uvm_config_db #(int)::get(this, "", "recording_detail", recording_detail));
+000056  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
 000057   set_report_verbosity_level(parent.get_report_verbosity_level());
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
 000057   m_set_cl_msg_args();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
        endfunction
        
        
        // m_add_child
        // -----------
        
 000056 function bit uvm_component::m_add_child(uvm_component child);
+000056  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
~000056   if (m_children.exists(child.get_name()) &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000056  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       m_children[child.get_name()] != child) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
              `uvm_warning("BDCLD",
                $sformatf("A child with the name '%0s' (type=%0s) already exists.",
%000000            child.get_name(), m_children[child.get_name()].get_type_name()))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          end
        
~000056   if (m_children_by_handle.exists(child)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000056  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
              `uvm_warning("BDCHLD",
                $sformatf("A child with the name '%0s' %0s %0s'",
                          child.get_name(),
                          "already exists in parent under name '",
%000000                   m_children_by_handle[child].get_name()))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
            end
        
 000056   m_children[child.get_name()] = child;
+000056  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000056   m_children_by_handle[child] = child;
+000056  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000056   return 1;
+000056  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        
        //------------------------------------------------------------------------------
        //
        // Hierarchy Methods
        // 
        //------------------------------------------------------------------------------
        
        
        // get_children
        // ------------
        
%000000 function void uvm_component::get_children(ref uvm_component children[$]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   foreach(m_children[i]) 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     children.push_back(m_children[i]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // get_first_child
        // ---------------
        
 004334 function int uvm_component::get_first_child(ref string name);
+004334  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 004334   return m_children.first(name);
+004334  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // get_next_child
        // --------------
        
 004257 function int uvm_component::get_next_child(ref string name);
+004257  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 004257   return m_children.next(name);
+004257  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // get_child
        // ---------
        
 004257 function uvm_component uvm_component::get_child(string name);
+004257  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   if (m_children.exists(name))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     return m_children[name];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          `uvm_warning("NOCHILD",{"Component with name '",name,
~004257        "' is not a child of component '",get_full_name(),"'"})
+004257  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
 004257   return null;
+004257  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // has_child
        // ---------
        
 000056 function int uvm_component::has_child(string name);
+000056  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000056   return m_children.exists(name);
+000056  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // get_num_children
        // ----------------
        
%000000 function int uvm_component::get_num_children();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   return m_children.num();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // get_full_name
        // -------------
        
 004081 function string uvm_component::get_full_name ();
+004081  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
          // Note- Implementation choice to construct full name once since the
          // full name may be used often for lookups.
%000000   if(m_name == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     return get_name();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          else
%000000     return m_name;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // get_parent
        // ----------
        
 000018 function uvm_component uvm_component::get_parent ();
+000018  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000018   return  m_parent;
+000018  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // set_name
        // --------
        
 000057 function void uvm_component::set_name (string name);
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
~000057   if(m_name != "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000057  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     `uvm_error("INVSTNM", $sformatf("It is illegal to change the name of a component. The component name will not be changed to \"%s\"", name))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          end
 000057   super.set_name(name);
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   m_set_full_name();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
        endfunction
        
        
        // m_set_full_name
        // ---------------
        
 000057 function void uvm_component::m_set_full_name();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   uvm_root top;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   top = uvm_top;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
~000055   if (m_parent == top || m_parent==null)
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000055  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000002     m_name = get_name();
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          else 
 000055     m_name = {m_parent.get_full_name(), ".", get_name()};
+000055  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
        
~000057   foreach (m_children[c]) begin
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     uvm_component tmp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     tmp = m_children[c];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     tmp.m_set_full_name(); 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
          end
        
        endfunction
        
        
        // lookup
        // ------
        
%000000 function uvm_component uvm_component::lookup( string name );
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   string leaf , remainder;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   uvm_component comp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   uvm_root top;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   top = uvm_root::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   comp = this;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
          
%000000   m_extract_name(name, leaf, remainder);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   if (leaf == "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     comp = top; // absolute lookup
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000     m_extract_name(remainder, leaf, remainder);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          end
          
%000000   if (!comp.has_child(leaf)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
            `uvm_warning("Lookup Error", 
%000000        $sformatf("Cannot find child %0s",leaf))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          end
        
%000000   if( remainder != "" )
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     return comp.m_children[leaf].lookup(remainder);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   return comp.m_children[leaf];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
        endfunction
        
        
        // get_depth
        // ---------
        
%000000 function int unsigned uvm_component::get_depth();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   if(m_name == "") return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000   get_depth = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   foreach(m_name[i]) 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     if(m_name[i] == ".") ++get_depth;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // m_extract_name
        // --------------
        
%000000 function void uvm_component::m_extract_name(input string name ,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000                                             output string leaf ,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000                                             output string remainder );
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   int i , len;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   string extract_str;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   len = name.len();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
          
%000000   for( i = 0; i < name.len(); i++ ) begin  
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     if( name[i] == "." ) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       break;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
            end
          end
        
%000000   if( i == len ) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     leaf = name;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000     remainder = "";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          end
        
%000000   leaf = name.substr( 0 , i - 1 );
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   remainder = name.substr( i + 1 , len - 1 );
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   return;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
          
        
        // flush
        // -----
        
%000000 function void uvm_component::flush();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   return;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // do_flush  (flush_hier?)
        // --------
        
%000000 function void uvm_component::do_flush();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   foreach( m_children[s] )
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     m_children[s].do_flush();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   flush();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
          
        
        
        //------------------------------------------------------------------------------
        //
        // Factory Methods
        // 
        //------------------------------------------------------------------------------
        
        
        // create
        // ------
        
%000000 function uvm_object  uvm_component::create (string name =""); 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
          `uvm_error("ILLCRT",
%000000     "create cannot be called on a uvm_component. Use create_component instead.")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000   return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // clone
        // ------
        
%000000 function uvm_object  uvm_component::clone ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   `uvm_error("ILLCLN", $sformatf("Attempting to clone '%s'.  Clone cannot be called on a uvm_component.  The clone target variable will be set to null.", get_full_name()))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000   return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // print_override_info
        // -------------------
        
%000000 function void  uvm_component::print_override_info (string requested_type_name, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                           string name="");
%000000   factory.debug_create_by_name(requested_type_name, get_full_name(), name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // create_component
        // ----------------
        
%000000 function uvm_component uvm_component::create_component (string requested_type_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                                string name);
%000000   return factory.create_component_by_name(requested_type_name, get_full_name(),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000                                           name, this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // create_object
        // -------------
        
%000000 function uvm_object uvm_component::create_object (string requested_type_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                          string name="");
%000000   return factory.create_object_by_name(requested_type_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000                                        get_full_name(), name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // set_type_override (static)
        // -----------------
        
%000000 function void uvm_component::set_type_override (string original_type_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                        string override_type_name,
                                                        bit    replace=1);
%000000    factory.set_type_override_by_name(original_type_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000                                      override_type_name, replace);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction 
        
        
        // set_type_override_by_type (static)
        // -------------------------
        
%000000 function void uvm_component::set_type_override_by_type (uvm_object_wrapper original_type,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                                uvm_object_wrapper override_type,
                                                                bit    replace=1);
%000000    factory.set_type_override_by_type(original_type, override_type, replace);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction 
        
        
        // set_inst_override
        // -----------------
        
%000000 function void  uvm_component::set_inst_override (string relative_inst_path,  
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                         string original_type_name,
                                                         string override_type_name);
%000000   string full_inst_path;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   if (relative_inst_path == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     full_inst_path = get_full_name();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          else
%000000     full_inst_path = {get_full_name(), ".", relative_inst_path};
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   factory.set_inst_override_by_name(
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000                             original_type_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000                             override_type_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000                             full_inst_path);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction 
        
        
        // set_inst_override_by_type
        // -------------------------
        
%000000 function void uvm_component::set_inst_override_by_type (string relative_inst_path,  
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                                uvm_object_wrapper original_type,
                                                                uvm_object_wrapper override_type);
%000000   string full_inst_path;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   if (relative_inst_path == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     full_inst_path = get_full_name();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          else
%000000     full_inst_path = {get_full_name(), ".", relative_inst_path};
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   factory.set_inst_override_by_type(original_type, override_type, full_inst_path);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
        endfunction
        
        
        
        //------------------------------------------------------------------------------
        //
        // Hierarchical report configuration interface
        //
        //------------------------------------------------------------------------------
        
        // set_report_id_verbosity_hier
        // -------------------------
        
%000000 function void uvm_component::set_report_id_verbosity_hier( string id, int verbosity);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   set_report_id_verbosity(id, verbosity);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   foreach( m_children[c] )
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     m_children[c].set_report_id_verbosity_hier(id, verbosity);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // set_report_severity_id_verbosity_hier
        // ----------------------------------
        
%000000 function void uvm_component::set_report_severity_id_verbosity_hier( uvm_severity severity,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                                         string id,
                                                                         int verbosity);
%000000   set_report_severity_id_verbosity(severity, id, verbosity);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   foreach( m_children[c] )
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     m_children[c].set_report_severity_id_verbosity_hier(severity, id, verbosity);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // set_report_severity_action_hier
        // -------------------------
        
%000000 function void uvm_component::set_report_severity_action_hier( uvm_severity severity, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                                   uvm_action action);
%000000   set_report_severity_action(severity, action);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   foreach( m_children[c] )
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     m_children[c].set_report_severity_action_hier(severity, action);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // set_report_id_action_hier
        // -------------------------
        
%000000 function void uvm_component::set_report_id_action_hier( string id, uvm_action action);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   set_report_id_action(id, action);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   foreach( m_children[c] )
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     m_children[c].set_report_id_action_hier(id, action);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // set_report_severity_id_action_hier
        // ----------------------------------
        
%000000 function void uvm_component::set_report_severity_id_action_hier( uvm_severity severity,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                                         string id,
                                                                         uvm_action action);
%000000   set_report_severity_id_action(severity, id, action);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   foreach( m_children[c] )
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     m_children[c].set_report_severity_id_action_hier(severity, id, action);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // set_report_severity_file_hier
        // -----------------------------
        
%000000 function void uvm_component::set_report_severity_file_hier( uvm_severity severity,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                                    UVM_FILE file);
%000000   set_report_severity_file(severity, file);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   foreach( m_children[c] )
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     m_children[c].set_report_severity_file_hier(severity, file);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // set_report_default_file_hier
        // ----------------------------
        
%000000 function void uvm_component::set_report_default_file_hier( UVM_FILE file);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   set_report_default_file(file);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   foreach( m_children[c] )
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     m_children[c].set_report_default_file_hier(file);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // set_report_id_file_hier
        // -----------------------
          
%000000 function void uvm_component::set_report_id_file_hier( string id, UVM_FILE file);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   set_report_id_file(id, file);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   foreach( m_children[c] )
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     m_children[c].set_report_id_file_hier(id, file);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // set_report_severity_id_file_hier
        // --------------------------------
        
%000000 function void uvm_component::set_report_severity_id_file_hier ( uvm_severity severity,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                                        string id,
                                                                        UVM_FILE file);
%000000   set_report_severity_id_file(severity, id, file);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   foreach( m_children[c] )
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     m_children[c].set_report_severity_id_file_hier(severity, id, file);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // set_report_verbosity_level_hier
        // -------------------------------
        
%000001 function void uvm_component::set_report_verbosity_level_hier(int verbosity);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000001   set_report_verbosity_level(verbosity);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000001   foreach( m_children[c] )
-000001  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     m_children[c].set_report_verbosity_level_hier(verbosity);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction  
        
        
        
        //------------------------------------------------------------------------------
        //
        // Phase interface 
        //
        //------------------------------------------------------------------------------
        
        
        // phase methods
        //--------------
        // these are prototypes for the methods to be implemented in user components
        // build_phase() has a default implementation, the others have an empty default
        
 000017 function void uvm_component::build_phase(uvm_phase phase);
+000017  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000017   m_build_done = 1;
+000017  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000017   build();
+000017  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        // Backward compatibility build function
        
 000057 function void uvm_component::build();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   m_build_done = 1;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   apply_config_settings(print_config_matches);
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
~000057   if(m_phasing_active == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000057  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     uvm_report_warning("UVM_DEPRECATED", "build()/build_phase() has been called explicitly, outside of the phasing system. This usage of build is deprecated and may lead to unexpected behavior.");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          end
        endfunction
        
        // these phase methods are common to all components in UVM. For backward
        // compatibility, they call the old style name (without the _phse)
        
 000057 function void uvm_component::connect_phase(uvm_phase phase);
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   connect();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   return; 
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
 000057 function void uvm_component::start_of_simulation_phase(uvm_phase phase);
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   start_of_simulation();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   return; 
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
 000057 function void uvm_component::end_of_elaboration_phase(uvm_phase phase);
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   end_of_elaboration();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   return; 
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
 000049 task          uvm_component::run_phase(uvm_phase phase);
+000049  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000049   run();
+000049  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000049   return; 
+000049  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endtask
 000057 function void uvm_component::extract_phase(uvm_phase phase);
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   extract();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   return; 
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
 000057 function void uvm_component::check_phase(uvm_phase phase);
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   check();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   return; 
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
 000057 function void uvm_component::report_phase(uvm_phase phase);
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   report();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   return; 
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // These are the old style phase names. In order for runtime phase names
        // to not conflict with user names, the _phase postfix was added.
        
 000057 function void uvm_component::connect();             return; endfunction
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057 function void uvm_component::start_of_simulation(); return; endfunction
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057 function void uvm_component::end_of_elaboration();  return; endfunction
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000049 task          uvm_component::run();                 return; endtask
+000049  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057 function void uvm_component::extract();             return; endfunction
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057 function void uvm_component::check();               return; endfunction
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057 function void uvm_component::report();              return; endfunction
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057 function void uvm_component::final_phase(uvm_phase phase);         return; endfunction
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
        // these runtime phase methods are only called if a set_domain() is done
        
 000057 task uvm_component::pre_reset_phase(uvm_phase phase);      return; endtask
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057 task uvm_component::reset_phase(uvm_phase phase);          return; endtask
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057 task uvm_component::post_reset_phase(uvm_phase phase);     return; endtask
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057 task uvm_component::pre_configure_phase(uvm_phase phase);  return; endtask
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057 task uvm_component::configure_phase(uvm_phase phase);      return; endtask
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057 task uvm_component::post_configure_phase(uvm_phase phase); return; endtask
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057 task uvm_component::pre_main_phase(uvm_phase phase);       return; endtask
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057 task uvm_component::main_phase(uvm_phase phase);           return; endtask
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057 task uvm_component::post_main_phase(uvm_phase phase);      return; endtask
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057 task uvm_component::pre_shutdown_phase(uvm_phase phase);   return; endtask
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057 task uvm_component::shutdown_phase(uvm_phase phase);       return; endtask
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057 task uvm_component::post_shutdown_phase(uvm_phase phase);  return; endtask
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
        
        //------------------------------
        // current phase convenience API
        //------------------------------
        
        
        // phase_started
        // -------------
        // phase_started() and phase_ended() are extra callbacks called at the
        // beginning and end of each phase, respectively.  Since they are
        // called for all phases the phase is passed in as an argument so the
        // extender can decide what to do, if anything, for each phase.
        
 001121 function void uvm_component::phase_started(uvm_phase phase);
+001121  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        // phase_ended
        // -----------
        
 001197 function void uvm_component::phase_ended(uvm_phase phase);
+001197  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // phase_ready_to_end
        // ------------------
        
 000741 function void uvm_component::phase_ready_to_end (uvm_phase phase);
+000741  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        //------------------------------
        // phase / schedule / domain API
        //------------------------------
        // methods for VIP creators and integrators to use to set up schedule domains
        // - a schedule is a named, organized group of phases for a component base type
        // - a domain is a named instance of a schedule in the master phasing schedule
        
        
        // define_domain
        // -------------
        
%000000 function void uvm_component::define_domain(uvm_domain domain);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   uvm_phase schedule;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
          //schedule = domain.find(uvm_domain::get_uvm_schedule());
%000000   schedule = domain.find_by_name("uvm_sched");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   if (schedule == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     uvm_domain common;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000     schedule = new("uvm_sched", UVM_PHASE_SCHEDULE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000     uvm_domain::add_uvm_phases(schedule);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000     domain.add(schedule);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000     common = uvm_domain::get_common_domain();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000     if (common.find(domain,0) == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       common.add(domain,.with_phase(uvm_run_phase::get()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          end
        
        endfunction
        
        
        // set_domain
        // ----------
        // assigns this component [tree] to a domain. adds required schedules into graph
        // If called from build, ~hier~ won't recurse into all chilren (which don't exist yet)
        // If we have components inherit their parent's domain by default, then ~hier~
        // isn't needed and we need a way to prevent children from inheriting this component's domain
        
%000000 function void uvm_component::set_domain(uvm_domain domain, int hier=1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
          // build and store the custom domain
%000000   m_domain = domain;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   define_domain(domain);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   if (hier)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     foreach (m_children[c])
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000       m_children[c].set_domain(domain);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        // get_domain
        // ----------
        //
 004277 function uvm_domain uvm_component::get_domain();
+004277  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 004277   return m_domain;
+004277  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // set_phase_imp
        // -------------
        
%000000 function void uvm_component::set_phase_imp(uvm_phase phase, uvm_phase imp, int hier=1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   m_phase_imps[phase] = imp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   if (hier)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     foreach (m_children[c])
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000       m_children[c].set_phase_imp(phase,imp,hier);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        //--------------------------
        // phase runtime control API
        //--------------------------
        
        `ifndef UVM_NO_DEPRECATED
        // do_kill_all
        // -----------
        
%000000 function void uvm_component::do_kill_all();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   foreach(m_children[c])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     m_children[c].do_kill_all();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   kill();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // kill
        // ----
        
%000000 function void uvm_component::kill();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     if (m_phase_process != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       m_phase_process.kill;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000       m_phase_process = null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
            end
        endfunction
        `endif
        
        // suspend
        // -------
        
%000000 task uvm_component::suspend();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000    `uvm_warning("COMP/SPND/UNIMP", "suspend() not implemented")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
        endtask
        
        
        // resume
        // ------
        
%000000 task uvm_component::resume();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000    `uvm_warning("COMP/RSUM/UNIMP", "resume() not implemented")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
        endtask
        
        
        // status
        //-------
        
        `ifndef UVM_NO_DEPRECATED
%000000 function string uvm_component::status();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
          `ifdef UVM_USE_SUSPEND_RESUME
           `ifdef UVM_USE_PROCESS_STATE
            process::state ps;
        
            if(m_phase_process == null)
              return "<unknown>";
        
            ps = m_phase_process.status();
        
            return ps.name();
          `else
            if(m_phase_process == null)
              return "<unknown>";
        
            case(m_phase_process.status())
              0: return "FINISHED";
              1: return "RUNNING";
              2: return "WAITING";
              3: return "SUSPENDED";
              4: return "KILLED";
              default: return "<unknown>";
            endcase
          `endif
          `endif 
        
%000000    return "<unknown>";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
           
        endfunction
        
        // stop
        // ----
        
%000000 task uvm_component::stop(string ph_name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   return;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endtask
        
        
        // stop_phase
        // ----------
        
%000000 task uvm_component::stop_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   stop(phase.get_name());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   return;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endtask
        `endif
        
        
        // resolve_bindings
        // ----------------
        
 000021 function void uvm_component::resolve_bindings();
+000021  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000021   return;
+000021  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // do_resolve_bindings
        // -------------------
        
 000057 function void uvm_component::do_resolve_bindings();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   foreach( m_children[s] )
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
+000056  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000056     m_children[s].do_resolve_bindings();
+000056  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   resolve_bindings();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        
        //------------------------------------------------------------------------------
        //
        // Recording interface
        //
        //------------------------------------------------------------------------------
        
        // accept_tr
        // ---------
        
%000000 function void uvm_component::accept_tr (uvm_transaction tr,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                time accept_time=0);
%000000   uvm_event e;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   tr.accept_tr(accept_time);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   do_accept_tr(tr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   e = event_pool.get("accept_tr");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   if(e!=null) 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     e.trigger();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        // begin_tr
        // --------
        
 000026 function integer uvm_component::begin_tr (uvm_transaction tr,
+000026  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                  string stream_name ="main",
                                                  string label="",
                                                  string desc="",
                                                  time begin_time=0,
                                                  integer parent_handle=0);
 000026   return m_begin_tr(tr, parent_handle, (parent_handle!=0), stream_name, label, desc, begin_time);
+000026  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        // begin_child_tr
        // --------------
        
 000176 function integer uvm_component::begin_child_tr (uvm_transaction tr,
+000176  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                  integer parent_handle=0,
                                                  string stream_name="main",
                                                  string label="",
                                                  string desc="",
                                                  time begin_time=0);
 000176   return m_begin_tr(tr, parent_handle, 1, stream_name, label, desc, begin_time);
+000176  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        // m_begin_tr
        // ----------
        
 000202 function integer uvm_component::m_begin_tr (uvm_transaction tr,
+000202  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                  integer parent_handle=0,
                                                  bit    has_parent=0,
                                                  string stream_name="main",
                                                  string label="",
                                                  string desc="",
                                                  time begin_time=0);
 000202   uvm_event e;
+000202  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000202   integer stream_h=0;
+000202  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000202   integer tr_h;
+000202  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000202   integer link_tr_h;
+000202  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000202   string name;
+000202  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000202   string kind;
+000202  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000202   uvm_recorder recordr;
+000202  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
~000202   if (tr == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000202  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
 000202   recordr = (recorder == null) ? uvm_default_recorder : recorder;
+000202  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
 000176   if (!has_parent) begin
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000176  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
+000026  point: type=expr comment=(has_parent==0) => 1 hier=uvm_pkg::uvm_component__Vclpkg
+000176  point: type=expr comment=(has_parent==1) => 0 hier=uvm_pkg::uvm_component__Vclpkg
 000026     uvm_sequence_item seq;
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
~000026     if ($cast(seq,tr)) begin
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
 000026       uvm_sequence_base parent_seq = seq.get_parent_sequence();
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
~000026       if (parent_seq != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000         parent_handle = parent_seq.m_tr_handle;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000         if (parent_handle!=0)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000           has_parent = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
              end
            end
          end
        
 000202   tr_h = 0;
+000202  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000176   if(has_parent)
+000176  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
 000176     link_tr_h = tr.begin_child_tr(begin_time, parent_handle);
+000176  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          else
 000026     link_tr_h = tr.begin_tr(begin_time);
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
        
~000202   if (tr.get_name() != "")
+000202  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
 000202     name = tr.get_name();
+000202  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          else
%000000     name = tr.get_type_name();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
        
~000202   if(stream_name == "") stream_name="main";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000202  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
        
~000202   if (uvm_verbosity'(recording_detail) != UVM_NONE) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000202  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
        
%000000     if(m_stream_handle.exists(stream_name))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000         stream_h = m_stream_handle[stream_name];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
%000000     if (recordr.check_handle_kind("Fiber", stream_h) != 1) begin  
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000         stream_h = recordr.create_stream(stream_name, "TVM", get_full_name());
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000         m_stream_handle[stream_name] = stream_h;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
            end
        
%000000     kind = (has_parent == 0) ? "Begin_No_Parent, Link" : "Begin_End, Link";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=expr comment=((has_parent == 32'sh0)==0) => 0 hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=expr comment=((has_parent == 32'sh0)==1) => 1 hier=uvm_pkg::uvm_component__Vclpkg
        
%000000     tr_h = recordr.begin_tr(kind, stream_h, name, label, desc, begin_time);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
%000000     if (has_parent && parent_handle != 0)
-000000  point: type=expr comment=((parent_handle != 32'sh0)==0) => 0 hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=expr comment=(has_parent==0) => 0 hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=expr comment=(has_parent==1 && (parent_handle != 32'sh0)==1) => 1 hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000         recordr.link_tr(parent_handle, tr_h, "child");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
%000000     m_tr_h[tr] = tr_h;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
%000000     if (recordr.check_handle_kind("Transaction", link_tr_h) == 1)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       recordr.link_tr(tr_h,link_tr_h);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
                
%000000     do_begin_tr(tr,stream_name,tr_h); 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
                
          end
         
 000202   e = event_pool.get("begin_tr");
+000202  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
~000202   if (e!=null) 
+000202  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
 000202     e.trigger(tr);
+000202  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
                
 000202   return tr_h;
+000202  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
        endfunction
        
        
        // end_tr
        // ------
        
 000202 function void uvm_component::end_tr (uvm_transaction tr,
+000202  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                             time end_time=0,
                                             bit free_handle=1);
 000202   uvm_event e;
+000202  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000202   integer tr_h;
+000202  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000202   uvm_recorder recordr;
+000202  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
~000202   if (tr == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000202  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
 000202   recordr = (recorder == null) ? uvm_default_recorder : recorder;
+000202  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000202   tr_h = 0;
+000202  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
 000202   tr.end_tr(end_time,free_handle);
+000202  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
~000202   if (uvm_verbosity'(recording_detail) != UVM_NONE) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000202  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
        
%000000     if (m_tr_h.exists(tr)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
        
%000000       tr_h = m_tr_h[tr];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
%000000       do_end_tr(tr, tr_h); // callback
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
%000000       m_tr_h.delete(tr);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
%000000       if (recordr.check_handle_kind("Transaction", tr_h) == 1) begin  
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
        
%000000         recordr.tr_handle = tr_h;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000         tr.record(recordr);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
%000000         recordr.end_tr(tr_h,end_time);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
%000000         if (free_handle)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000            recordr.free_tr(tr_h);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
              end
            end
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       do_end_tr(tr, tr_h); // callback
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
            end
        
          end
        
 000202   e = event_pool.get("end_tr");
+000202  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
~000202   if(e!=null) 
+000202  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
 000202     e.trigger();
+000202  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
        endfunction
        
        
        // record_error_tr
        // ---------------
        
%000000 function integer uvm_component::record_error_tr (string stream_name="main",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                      uvm_object info=null,
                                                      string label="error_tr",
                                                      string desc="",
                                                      time   error_time=0,
                                                      bit    keep_active=0);
%000000   string etype;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   integer stream_h;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   uvm_recorder recordr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   recordr = (recorder == null) ? uvm_default_recorder : recorder;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   if(keep_active) etype = "Error, Link";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000   else etype = "Error";
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   if(error_time == 0) error_time = $realtime;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   stream_h = m_stream_handle[stream_name];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   if (recordr.check_handle_kind("Fiber", stream_h) != 1) begin  
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     stream_h = recordr.create_stream(stream_name, "TVM", get_full_name());
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000     m_stream_handle[stream_name] = stream_h;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          end
        
%000000   record_error_tr = recordr.begin_tr(etype, stream_h, label,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000                          label, desc, error_time);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   if(info!=null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     recordr.tr_handle = record_error_tr;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000     info.record(recordr);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          end
        
%000000   recordr.end_tr(record_error_tr,error_time);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // record_event_tr
        // ---------------
        
%000000 function integer uvm_component::record_event_tr (string stream_name="main",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                      uvm_object info=null,
                                                      string label="event_tr",
                                                      string desc="",
                                                      time   event_time=0,
                                                      bit    keep_active=0);
%000000   string etype;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   integer stream_h;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   uvm_recorder recordr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   recordr = (recorder == null) ? uvm_default_recorder : recorder;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   if(keep_active) etype = "Event, Link";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000   else etype = "Event";
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   if(event_time == 0) event_time = $realtime;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   stream_h = m_stream_handle[stream_name];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   if (recordr.check_handle_kind("Fiber", stream_h) != 1) begin  
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     stream_h = recordr.create_stream(stream_name, "TVM", get_full_name());
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000     m_stream_handle[stream_name] = stream_h;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          end
        
%000000   record_event_tr = recordr.begin_tr(etype, stream_h, label,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000                          label, desc, event_time);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   if(info!=null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     recordr.tr_handle = record_event_tr;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000     info.record(recordr);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          end
        
%000000   recordr.end_tr(record_event_tr,event_time);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        // do_accept_tr
        // ------------
        
%000000 function void uvm_component::do_accept_tr (uvm_transaction tr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   return;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // do_begin_tr
        // -----------
        
%000000 function void uvm_component::do_begin_tr (uvm_transaction tr,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                  string stream_name,
                                                  integer tr_handle);
%000000   return;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // do_end_tr
        // ---------
        
%000000 function void uvm_component::do_end_tr (uvm_transaction tr,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                integer tr_handle);
%000000   return;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        //------------------------------------------------------------------------------
        //
        // Configuration interface
        //
        //------------------------------------------------------------------------------
        
        
%000000 function string uvm_component::massage_scope(string scope);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
          // uvm_top
%000000   if(scope == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     return "^$";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   if(scope == "*")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     return {get_full_name(), ".*"};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
          // absolute path to the top-level test
%000000   if(scope == "uvm_test_top")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     return "uvm_test_top";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
          // absolute path to uvm_root
%000000   if(scope[0] == ".")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     return {get_full_name(), scope};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   return {get_full_name(), ".", scope};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
        endfunction
        
        //
        // set_config_int
        //
        typedef uvm_config_db#(uvm_bitstream_t) uvm_config_int;
        typedef uvm_config_db#(string) uvm_config_string;
        typedef uvm_config_db#(uvm_object) uvm_config_object;
        
        // Undocumented struct for storing clone bit along w/
        // object on set_config_object(...) calls
%000000 class uvm_config_object_wrapper;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_object_wrapper__Vclpkg
           uvm_object obj;
           bit clone;
        endclass : uvm_config_object_wrapper
        
%000000 function void uvm_component::set_config_int(string inst_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                   string field_name,
                                                   uvm_bitstream_t value);
        
%000000   uvm_config_int::set(this, inst_name, field_name, value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        //
        // set_config_string
        //
%000000 function void uvm_component::set_config_string(string inst_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                       string field_name,
                                                       string value);
        
%000000   uvm_config_string::set(this, inst_name, field_name, value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        //
        // set_config_object
        //
%000000 function void uvm_component::set_config_object(string inst_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                       string field_name,
                                                       uvm_object value,
                                                       bit clone = 1);
%000000   uvm_object tmp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   uvm_config_object_wrapper wrapper;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   if(value == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
            `uvm_warning("NULLCFG", {"A null object was provided as a ",
               $sformatf("configuration object for set_config_object(\"%s\",\"%s\")",
%000000        inst_name, field_name), ". Verify that this is intended."})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   if(clone && (value != null)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     tmp = value.clone();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000     if(tmp == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       uvm_component comp;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000       if ($cast(comp,value)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
                `uvm_error("INVCLNC", {"Clone failed during set_config_object ",
%000000           "with an object that is an uvm_component. Components cannot be cloned."})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
              end
%000000       else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
                `uvm_warning("INVCLN", {"Clone failed during set_config_object, ",
                  "the original reference will be used for configuration. Check that ",
%000000           "the create method for the object type is defined properly."})
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
              end
            end
            else
%000000       value = tmp;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
          end
        
        
%000000   uvm_config_object::set(this, inst_name, field_name, value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   wrapper = new;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   wrapper.obj = value;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   wrapper.clone = clone;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   uvm_config_db#(uvm_config_object_wrapper)::set(this, inst_name, field_name, wrapper);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        //
        // get_config_int
        //
 000047 function bit uvm_component::get_config_int (string field_name,
+000047  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                    inout uvm_bitstream_t value);
        
 000047   return uvm_config_int::get(this, "", field_name, value);
+000047  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        //
        // get_config_string
        //
%000002 function bit uvm_component::get_config_string(string field_name,
-000002  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                      inout string value);
        
%000002   return uvm_config_string::get(this, "", field_name, value);
-000002  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        //
        // get_config_object
        //
        //
        // Note that this does not honor the set_config_object clone bit
%000000 function bit uvm_component::get_config_object (string field_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                       inout uvm_object value,
                                                       input bit clone=1);
        
%000000   if(!uvm_config_object::get(this, "", field_name, value)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          end
        
%000000   if(clone && value != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     value = value.clone();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          end
        
%000000   return 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        // check_config_usage
        // ------------------
        
%000000 function void uvm_component::check_config_usage ( bit recurse=1 );
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   uvm_resource_pool rp = uvm_resource_pool::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   uvm_queue#(uvm_resource_base) rq;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   rq = rp.find_unused_resources();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   if(rq.size() == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   uvm_report_info("CFGNRD"," ::: The following resources have at least one write and no reads :::",UVM_INFO);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   rp.print_resources(rq, 1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        // apply_config_settings
        // ---------------------
        
 000057 function void uvm_component::apply_config_settings (bit verbose=0);
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
 000057   uvm_resource_pool rp = uvm_resource_pool::get();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   uvm_queue#(uvm_resource_base) rq;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   uvm_resource_base r;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   string name;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   string search_name;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   int unsigned i;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   int unsigned j;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
          // populate an internal 'field_array' with list of
          // fields declared with `uvm_field macros (checking
          // that there aren't any duplicates along the way)
 000057   __m_uvm_field_automation (null, UVM_CHECK_FIELDS, "");
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
          // if no declared fields, nothing to do. 
%000000   if (__m_uvm_status_container.field_array.size() == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   if(verbose)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     uvm_report_info("CFGAPL","applying configuration settings", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
          // Note: the following is VERY expensive. Needs refactoring. Should
          // get config only for the specific field names in 'field_array'.
          // That's because the resource pool is organized first by field name.
          // Can further optimize by encoding the value for each 'field_array' 
          // entry to indicate string, uvm_bitstream_t, or object. That way,
          // we call 'get' for specific fields of specific types rather than
          // the search-and-cast approach here.
 000057   rq = rp.lookup_scope(get_full_name());
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   rp.sort_by_precedence(rq);
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
          // rq is in precedence order now, so we have to go through in reverse
          // order to do the settings.
~000057   for(int i=rq.size()-1; i>=0; --i) begin
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
%000000     r = rq.get(i);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     name = r.get_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
            // does name have brackets [] in it?
%000000     for(j = 0; j < name.len(); j++)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000       if(name[j] == "[" || name[j] == ".")
-000000  point: type=expr comment=(((name.getc(j)) == 8'h2e)==1) => 1 hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=expr comment=(((name.getc(j)) == 8'h5b)==0 && ((name.getc(j)) == 8'h2e)==0) => 0 hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=expr comment=(((name.getc(j)) == 8'h5b)==1) => 1 hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000         break;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
            // If it does have brackets then we'll use the name
            // up to the brackets to search __m_uvm_status_container.field_array
%000000     if(j < name.len())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       search_name = name.substr(0, j-1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
            else
%000000       search_name = name;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
        
%000000     if(!uvm_resource_pool::m_has_wildcard_names && 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000        !__m_uvm_status_container.field_array.exists(search_name) && 
-000000  point: type=expr comment=((search_name != %22recording_detail%22)==0) => 0 hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=expr comment=(field_array.exists(search_name)==1) => 0 hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=expr comment=(m_has_wildcard_names==0 && field_array.exists(search_name)==0 && (search_name != %22recording_detail%22)==1) => 1 hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=expr comment=(m_has_wildcard_names==1) => 0 hier=uvm_pkg::uvm_component__Vclpkg
               search_name != "recording_detail")
%000000       continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
%000000     if(verbose)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       uvm_report_info("CFGAPL",$sformatf("applying configuration to field %s", name),UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
%000000     begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     uvm_resource#(uvm_bitstream_t) rbs;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     if($cast(rbs, r))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       set_int_local(name, rbs.read(this));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       uvm_resource#(int) ri;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       if($cast(ri, r))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000         set_int_local(name, ri.read(this));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000       else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000         uvm_resource#(int unsigned) riu;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000         if($cast(riu, r))
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000           set_int_local(name, riu.read(this));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000         else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000           uvm_resource#(string) rs;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000           if($cast(rs, r))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000             set_string_local(name, rs.read(this));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000           else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000              uvm_resource#(uvm_config_object_wrapper) rcow;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000              if ($cast(rcow, r)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000                 uvm_config_object_wrapper cow = rcow.read();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000                 set_object_local(name, cow.obj, cow.clone);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
                     end
%000000              else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000                 uvm_resource#(uvm_object) ro;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000                 if($cast(ro, r)) begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_component__Vclpkg
%000000                   set_object_local(name, ro.read(this), 0);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_component__Vclpkg
                        end 
%000000                 else if (verbose) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000                   uvm_report_info("CFGAPL", $sformatf("field %s has an unsupported type", name), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
                        end
                     end
                  end
                end
              end
            end
            end
        
          end
        
 000057   __m_uvm_status_container.field_array.delete();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
          
        endfunction
        
        
        // print_config
        // ------------
        
%000000 function void uvm_component::print_config(bit recurse = 0, audit = 0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   uvm_resource_pool rp = uvm_resource_pool::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   uvm_report_info("CFGPRT","visible resources:",UVM_INFO);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   rp.print_resources(rp.lookup_scope(get_full_name()), audit);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
%000000   if(recurse) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     uvm_component c;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000     foreach(m_children[name]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000       c = m_children[name];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000       c.print_config(recurse, audit);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
            end
          end
        
        endfunction
        
        
        // print_config_settings
        // ---------------------
        
%000000 function void uvm_component::print_config_settings (string field="",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                                            uvm_component comp=null,
                                                            bit recurse=0);
%000000   static bit have_been_warned;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   if(!have_been_warned) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=expr comment=(have_been_warned==0) => 1 hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=expr comment=(have_been_warned==1) => 0 hier=uvm_pkg::uvm_component__Vclpkg
%000000     uvm_report_warning("deprecated", "uvm_component::print_config_settings has been deprecated.  Use print_config() instead");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000     have_been_warned = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          end
        
%000000   print_config(recurse, 1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // print_config_with_audit
        // -----------------------
        
%000000 function void uvm_component::print_config_with_audit(bit recurse = 0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   print_config(recurse, 1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // do_print (override)
        // --------
        
%000000 function void uvm_component::do_print(uvm_printer printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   string v;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   super.do_print(printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
          // It is printed only if its value is other than the default (UVM_NONE)
%000000   if(uvm_verbosity'(recording_detail) != UVM_NONE)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     case (recording_detail)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000       UVM_LOW : printer.print_generic("recording_detail", "uvm_verbosity", 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_component__Vclpkg
%000000         $bits(recording_detail), "UVM_LOW");
-000000  point: type=line comment=case hier=uvm_pkg::uvm_component__Vclpkg
%000000       UVM_MEDIUM : printer.print_generic("recording_detail", "uvm_verbosity", 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_component__Vclpkg
%000000         $bits(recording_detail), "UVM_MEDIUM");
-000000  point: type=line comment=case hier=uvm_pkg::uvm_component__Vclpkg
%000000       UVM_HIGH : printer.print_generic("recording_detail", "uvm_verbosity", 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_component__Vclpkg
%000000         $bits(recording_detail), "UVM_HIGH");
-000000  point: type=line comment=case hier=uvm_pkg::uvm_component__Vclpkg
%000000       UVM_FULL : printer.print_generic("recording_detail", "uvm_verbosity", 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_component__Vclpkg
%000000         $bits(recording_detail), "UVM_FULL");
-000000  point: type=line comment=case hier=uvm_pkg::uvm_component__Vclpkg
%000000       default : printer.print_int("recording_detail", recording_detail, 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_component__Vclpkg
%000000         $bits(recording_detail), UVM_DEC, , "integral");
-000000  point: type=line comment=case hier=uvm_pkg::uvm_component__Vclpkg
            endcase
        
        `ifndef UVM_NO_DEPRECATED
%000000   if (enable_stop_interrupt != 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     printer.print_int("enable_stop_interrupt", enable_stop_interrupt,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000                         $bits(enable_stop_interrupt), UVM_BIN, ".", "bit");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
          end
         `endif
        endfunction
        
        
        // set_int_local (override)
        // -------------
        
%000000 function void uvm_component::set_int_local (string field_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                                     uvm_bitstream_t value,
%000000                              bit recurse=1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
          //call the super function to get child recursion and any registered fields
%000000   super.set_int_local(field_name, value, recurse);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
          //set the local properties
%000000   if(uvm_is_match(field_name, "recording_detail"))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     recording_detail = value;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
        endfunction
        
        
        // Internal methods for setting messagin parameters from command line switches
        
        typedef class uvm_cmdline_processor;
        
        
        // m_set_cl_msg_args
        // -----------------
        
 000057 function void uvm_component::m_set_cl_msg_args;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   m_set_cl_verb();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   m_set_cl_action();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   m_set_cl_sev();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // m_set_cl_verb
        // -------------
 000057 function void uvm_component::m_set_cl_verb;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
          // _ALL_ can be used for ids
          // +uvm_set_verbosity=<comp>,<id>,<verbosity>,<phase|time>,<offset>
          // +uvm_set_verbosity=uvm_test_top.env0.agent1.*,_ALL_,UVM_FULL,time,800
         
 000057   static string values[$];
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   static bit first = 1;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   string args[$];
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   uvm_cmdline_processor clp = uvm_cmdline_processor::get_inst();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   uvm_root top = uvm_root::get();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
~000057   if(!values.size())
+000057  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
 000057     void'(uvm_cmdline_proc.get_arg_values("+uvm_set_verbosity=",values));
+000057  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
~000057   foreach(values[i]) begin
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     m_verbosity_setting setting;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     args.delete();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     uvm_split_string(values[i], ",", args);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
            // Warning is already issued in uvm_root, so just don't keep it
%000000     if(first && ( ((args.size() != 4) && (args.size() != 5)) || 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
                          (clp.m_convert_verb(args[2], setting.verbosity) == 0))  )
%000000     begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000       values.delete(i);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
            end
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       setting.comp = args[0];
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       setting.id = args[1];
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       void'(clp.m_convert_verb(args[2],setting.verbosity));
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       setting.phase = args[3];
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       setting.offset = 0;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       if(args.size() == 5) setting.offset = args[4].atoi();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       if((setting.phase == "time") && (this == top)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000         m_time_settings.push_back(setting);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
              end
          
%000000       if (uvm_is_match(setting.comp, get_full_name()) ) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000         if((setting.phase == "" || setting.phase == "build" || setting.phase == "time") && 
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=expr comment=((setting.offset == 64'h0)==0) => 0 hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=expr comment=((setting.phase == %22%22)==0 && (setting.phase == %22build%22)==0 && (setting.phase == %22time%22)==0) => 0 hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=expr comment=((setting.phase == %22%22)==1 && (setting.offset == 64'h0)==1) => 1 hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=expr comment=((setting.phase == %22build%22)==1 && (setting.offset == 64'h0)==1) => 1 hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=expr comment=((setting.phase == %22time%22)==1 && (setting.offset == 64'h0)==1) => 1 hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
                   (setting.offset == 0) ) 
%000000         begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000           if(setting.id == "_ALL_") 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000             set_report_verbosity_level(setting.verbosity);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
                  else
%000000             set_report_id_verbosity(setting.id, setting.verbosity);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
                end
%000000         else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000           if(setting.phase != "time") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000             m_verbosity_settings.push_back(setting);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
                  end
                end
              end
            end
          end
          // do time based settings
~000056   if(this == top) begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
+000056  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000001     fork begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000001       time last_time = 0;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000001       if (m_time_settings.size() > 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000         m_time_settings.sort() with ( item.offset );
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000001       foreach(m_time_settings[i]) begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000         uvm_component comps[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000         top.find_all(m_time_settings[i].comp,comps);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000         #(m_time_settings[i].offset - last_time);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000         last_time = m_time_settings[i].offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000         if(m_time_settings[i].id == "_ALL_") begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000            foreach(comps[j]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000              comps[j].set_report_verbosity_level(m_time_settings[i].verbosity);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                   end
                end
%000000         else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000           foreach(comps[j]) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000             comps[j].set_report_id_verbosity(m_time_settings[i].id, m_time_settings[i].verbosity);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
                  end
                end
              end
            end join_none // fork begin
          end
        
 000057   first = 0;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        
        
        // m_set_cl_action
        // ---------------
        
 000057 function void uvm_component::m_set_cl_action;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
          // _ALL_ can be used for ids or severities
          // +uvm_set_action=<comp>,<id>,<severity>,<action[|action]>
          // +uvm_set_action=uvm_test_top.env0.*,_ALL_,UVM_ERROR,UVM_NO_ACTION
        
 000057   static string values[$];
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   string args[$];
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   uvm_severity sev;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   uvm_action action;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
~000057   if(!values.size())
+000057  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
 000057     void'(uvm_cmdline_proc.get_arg_values("+uvm_set_action=",values));
+000057  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
~000057   foreach(values[i]) begin
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     uvm_split_string(values[i], ",", args);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     if(args.size() != 4) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       `uvm_warning("INVLCMDARGS", $sformatf("+uvm_set_action requires 4 arguments, only %0d given for command +uvm_set_action=%s, Usage: +uvm_set_action=<comp>,<id>,<severity>,<action[|action]>", args.size(), values[i]))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       values.delete(i);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000       break;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
            end
%000000     if (!uvm_is_match(args[0], get_full_name()) ) break; 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     if((args[2] != "_ALL_") && !uvm_string_to_severity(args[2], sev)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       `uvm_warning("INVLCMDARGS", $sformatf("Bad severity argument \"%s\" given to command +uvm_set_action=%s, Usage: +uvm_set_action=<comp>,<id>,<severity>,<action[|action]>", args[2], values[i]))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       values.delete(i);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000       break;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
            end
%000000     if(!uvm_string_to_action(args[3], action)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=expr comment=(uvm_string_to_action(string'(args.at(32'sh3))action)==0) => 1 hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=expr comment=(uvm_string_to_action(string'(args.at(32'sh3))action)==1) => 0 hier=uvm_pkg::uvm_component__Vclpkg
%000000       `uvm_warning("INVLCMDARGS", $sformatf("Bad action argument \"%s\" given to command +uvm_set_action=%s, Usage: +uvm_set_action=<comp>,<id>,<severity>,<action[|action]>", args[3], values[i]))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       values.delete(i);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000       break;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
            end
%000000     if(args[1] == "_ALL_") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       if(args[2] == "_ALL_") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000         set_report_severity_action(UVM_INFO, action);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000         set_report_severity_action(UVM_WARNING, action);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000         set_report_severity_action(UVM_ERROR, action);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000         set_report_severity_action(UVM_FATAL, action);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
              end
%000000       else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000         set_report_severity_action(sev, action);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
              end
            end
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       if(args[2] == "_ALL_") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000         set_report_id_action(args[1], action);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
              end
%000000       else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000         set_report_severity_id_action(sev, args[1], action);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
              end
            end
          end
        
        endfunction
        
        
        // m_set_cl_sev
        // ------------
        
 000057 function void uvm_component::m_set_cl_sev;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
          // _ALL_ can be used for ids or severities
          //  +uvm_set_severity=<comp>,<id>,<orig_severity>,<new_severity>
          //  +uvm_set_severity=uvm_test_top.env0.*,BAD_CRC,UVM_ERROR,UVM_WARNING
        
 000057   static string values[$];
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   static bit first = 1;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   string args[$];
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
 000057   uvm_severity orig_sev, sev;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        
~000057   if(!values.size())
+000057  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
 000057     void'(uvm_cmdline_proc.get_arg_values("+uvm_set_severity=",values));
+000057  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
        
~000057   foreach(values[i]) begin
+000057  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     uvm_split_string(values[i], ",", args);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     if(args.size() != 4) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       `uvm_warning("INVLCMDARGS", $sformatf("+uvm_set_severity requires 4 arguments, only %0d given for command +uvm_set_severity=%s, Usage: +uvm_set_severity=<comp>,<id>,<orig_severity>,<new_severity>", args.size(), values[i]))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       values.delete(i);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000       break;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
            end
%000000     if (!uvm_is_match(args[0], get_full_name()) ) break; 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     if(args[2] != "_ALL_" && !uvm_string_to_severity(args[2], orig_sev)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       `uvm_warning("INVLCMDARGS", $sformatf("Bad severity argument \"%s\" given to command +uvm_set_severity=%s, Usage: +uvm_set_severity=<comp>,<id>,<orig_severity>,<new_severity>", args[2], values[i]))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       values.delete(i);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000       break;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
            end
%000000     if(!uvm_string_to_severity(args[3], sev)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       `uvm_warning("INVLCMDARGS", $sformatf("Bad severity argument \"%s\" given to command +uvm_set_severity=%s, Usage: +uvm_set_severity=<comp>,<id>,<orig_severity>,<new_severity>", args[3], values[i]))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       values.delete(i);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000       break;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
            end
%000000     if(args[1] == "_ALL_" && args[2] == "_ALL_") begin
-000000  point: type=expr comment=((args.at(32'sh1) == %22_ALL_%22)==0) => 0 hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=expr comment=((args.at(32'sh1) == %22_ALL_%22)==1 && (args.at(32'sh2) == %22_ALL_%22)==1) => 1 hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=expr comment=((args.at(32'sh2) == %22_ALL_%22)==0) => 0 hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_component__Vclpkg
%000000       set_report_severity_override(UVM_INFO,sev);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_component__Vclpkg
%000000       set_report_severity_override(UVM_WARNING,sev);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_component__Vclpkg
%000000       set_report_severity_override(UVM_ERROR,sev);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_component__Vclpkg
%000000       set_report_severity_override(UVM_FATAL,sev);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_component__Vclpkg
            end
%000000     else if(args[1] == "_ALL_") begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_component__Vclpkg
%000000       set_report_severity_override(orig_sev,sev);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_component__Vclpkg
            end
%000000     else if(args[2] == "_ALL_") begin
-000000  point: type=line comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       set_report_severity_id_override(UVM_INFO,args[1],sev);
-000000  point: type=line comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000       set_report_severity_id_override(UVM_WARNING,args[1],sev);
-000000  point: type=line comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000       set_report_severity_id_override(UVM_ERROR,args[1],sev);
-000000  point: type=line comment=if hier=uvm_pkg::uvm_component__Vclpkg
%000000       set_report_severity_id_override(UVM_FATAL,args[1],sev);
-000000  point: type=line comment=if hier=uvm_pkg::uvm_component__Vclpkg
            end
%000000     else begin
-000000  point: type=line comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       set_report_severity_id_override(orig_sev,args[1],sev);
-000000  point: type=line comment=else hier=uvm_pkg::uvm_component__Vclpkg
            end
          end
        endfunction
        
        
        // m_apply_verbosity_settings
        // --------------------------
        
 001142 function void uvm_component::m_apply_verbosity_settings(uvm_phase phase);
+001142  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
~001142   foreach(m_verbosity_settings[i]) begin
+001142  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000     if(phase.get_name() == m_verbosity_settings[i].phase) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000       if( m_verbosity_settings[i].offset == 0 ) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000           if(m_verbosity_settings[i].id == "_ALL_") 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000             set_report_verbosity_level(m_verbosity_settings[i].verbosity);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
                  else 
%000000             set_report_id_verbosity(m_verbosity_settings[i].id, m_verbosity_settings[i].verbosity);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
              end
%000000       else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000         process p = process::self();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000         string p_rand = p.get_randstate();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000         fork begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000           m_verbosity_setting setting = m_verbosity_settings[i];
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000           #setting.offset;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000           if(setting.id == "_ALL_") 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
%000000             set_report_verbosity_level(setting.verbosity);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
                  else 
%000000             set_report_id_verbosity(setting.id, setting.verbosity);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
                end join_none;
%000000         p.set_randstate(p_rand);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_component__Vclpkg
              end
              // Remove after use
%000000       m_verbosity_settings.delete(i);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_component__Vclpkg
            end
          end
        endfunction
        
        
        // m_do_pre_abort
        // --------------
        
%000000 function void uvm_component::m_do_pre_abort;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   foreach(m_children[i])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000     m_children[i].m_do_pre_abort(); 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
%000000   pre_abort(); 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_component__Vclpkg
        endfunction
        

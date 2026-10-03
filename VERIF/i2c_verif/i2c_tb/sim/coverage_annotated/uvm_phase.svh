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
        
        typedef class uvm_test_done_objection;
        typedef class uvm_sequencer_base;
        
        typedef class uvm_domain;
        typedef class uvm_task_phase;
        
           
        //------------------------------------------------------------------------------
        //
        // Class: uvm_phase
        //
        //------------------------------------------------------------------------------
        //
        // This base class defines everything about a phase: behavior, state, and context.
        //
        // To define behavior, it is extended by UVM or the user to create singleton
        // objects which capture the definition of what the phase does and how it does it.
        // These are then cloned to produce multiple nodes which are hooked up in a graph
        // structure to provide context: which phases follow which, and to hold the state
        // of the phase throughout its lifetime.
        // UVM provides default extensions of this class for the standard runtime phases.
        // VIP Providers can likewise extend this class to define the phase functor for a
        // particular component context as required.
        //
        // *Phase Definition*
        //
        // Singleton instances of those extensions are provided as package variables.
        // These instances define the attributes of the phase (not what state it is in)
        // They are then cloned into schedule nodes which point back to one of these
        // implementations, and calls it's virtual task or function methods on each
        // participating component.
        // It is the base class for phase functors, for both predefined and
        // user-defined phases. Per-component overrides can use a customized imp.
        //
        // To create custom phases, do not extend uvm_phase directly: see the
        // three predefined extended classes below which encapsulate behavior for
        // different phase types: task, bottom-up function and top-down function.
        //
        // Extend the appropriate one of these to create a uvm_YOURNAME_phase class
        // (or YOURPREFIX_NAME_phase class) for each phase, containing the default
        // implementation of the new phase, which must be a uvm_component-compatible
        // delegate, and which may be a null implementation. Instantiate a singleton
        // instance of that class for your code to use when a phase handle is required.
        // If your custom phase depends on methods that are not in uvm_component, but
        // are within an extended class, then extend the base YOURPREFIX_NAME_phase
        // class with parameterized component class context as required, to create a
        // specialized functor which calls your extended component class methods.
        // This scheme ensures compile-safety for your extended component classes while
        // providing homogeneous base types for APIs and underlying data structures.
        //
        // *Phase Context*
        //
        // A schedule is a coherent group of one or mode phase/state nodes linked
        // together by a graph structure, allowing arbitrary linear/parallel
        // relationships to be specified, and executed by stepping through them in
        // the graph order.
        // Each schedule node points to a phase and holds the execution state of that
        // phase, and has optional links to other nodes for synchronization.
        //
        // The main operations are: construct, add phases, and instantiate
        // hierarchically within another schedule.
        //
        // Structure is a DAG (Directed Acyclic Graph). Each instance is a node
        // connected to others to form the graph. Hierarchy is overlaid with m_parent.
        // Each node in the graph has zero or more successors, and zero or more
        // predecessors. No nodes are completely isolated from others. Exactly
        // one node has zero predecessors. This is the root node. Also the graph
        // is acyclic, meaning for all nodes in the graph, by following the forward
        // arrows you will never end up back where you started but you will eventually
        // reach a node that has no successors.
        //
        // *Phase State*
        //
        // A given phase may appear multiple times in the complete phase graph, due
        // to the multiple independent domain feature, and the ability for different
        // VIP to customize their own phase schedules perhaps reusing existing phases.
        // Each node instance in the graph maintains its own state of execution.
        //
        // *Phase Handle*
        //
        // Handles of this type uvm_phase are used frequently in the API, both by
        // the user, to access phasing-specific API, and also as a parameter to some
        // APIs. In many cases, the singleton package-global phase handles can be
        // used (eg. connect_ph, run_ph) in APIs. For those APIs that need to look
        // up that phase in the graph, this is done automatically.
        
        class uvm_phase extends uvm_object;
        
          //`uvm_object_utils(uvm_phase)
        
        
          //--------------------
          // Group: Construction
          //--------------------
          
          // Function: new
          //
          // Create a new phase node, with a name and a note of its type
          //   name   - name of this phase
          //   type   - task, topdown func or bottomup func
          //
          extern function new(string name="uvm_phase",
                              uvm_phase_type phase_type=UVM_PHASE_SCHEDULE,
                              uvm_phase parent=null);
        
          // Function: get_phase_type
          //
          // Returns the phase type as defined by <uvm_phase_type>
          //
          extern function uvm_phase_type get_phase_type();
        
        
          //-------------
          // Group: State
          //-------------
        
          // Function: get_state
          //
          // Accessor to return current state of this phase
          //
          extern function uvm_phase_state get_state();
        
        
          // Function: get_run_count
          //
          // Accessor to return the integer number of times this phase has executed
          //
          extern function int get_run_count();
        
        
          // Function: find_by_name
          //
          // Locate a phase node with the specified ~name~ and return its handle.
          // With ~stay_in_scope~ set, searches only within this phase's schedule or
          // domain.
          //
          extern function uvm_phase find_by_name(string name, bit stay_in_scope=1);
        
        
          // Function: find
          //
          // Locate the phase node with the specified ~phase~ IMP and return its handle.
          // With ~stay_in_scope~ set, searches only within this phase's schedule or
          // domain.
          //
          extern function uvm_phase find(uvm_phase phase, bit stay_in_scope=1);
        
        
          // Function: is
          //
          // returns 1 if the containing uvm_phase refers to the same phase
          // as the phase argument, 0 otherwise
          //
          extern function bit is(uvm_phase phase);
        
        
          // Function: is_before
          //
          // Returns 1 if the containing uvm_phase refers to a phase that is earlier
          // than the phase argument, 0 otherwise
          //
          extern function bit is_before(uvm_phase phase);
        
        
          // Function: is_after
          //
          // returns 1 if the containing uvm_phase refers to a phase that is later
          // than the phase argument, 0 otherwise
          //
          extern function bit is_after(uvm_phase phase);
        
        
          //-----------------
          // Group: Callbacks
          //-----------------
        
          // Function: exec_func
          //
          // Implements the functor/delegate functionality for a function phase type
          //   comp  - the component to execute the functionality upon
          //   phase - the phase schedule that originated this phase call
          //
%000000   virtual function void exec_func(uvm_component comp, uvm_phase phase); endfunction
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
        
          // Function: exec_task
          //
          // Implements the functor/delegate functionality for a task phase type
          //   comp  - the component to execute the functionality upon
          //   phase - the phase schedule that originated this phase call
          //
%000000   virtual task exec_task(uvm_component comp, uvm_phase phase); endtask
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
        
        
          //----------------
          // Group: Schedule
          //----------------
        
          // Function: add
          //
          // Build up a schedule structure inserting phase by phase, specifying linkage
          //
          // Phases can be added anywhere, in series or parallel with existing nodes
          //
          //   phase        - handle of singleton derived imp containing actual functor.
          //                  by default the new phase is appended to the schedule
          //   with_phase   - specify to add the new phase in parallel with this one
          //   after_phase  - specify to add the new phase as successor to this one
          //   before_phase - specify to add the new phase as predecessor to this one
          //
          extern function void add(uvm_phase phase,
                                   uvm_phase with_phase=null,
                                   uvm_phase after_phase=null,
                                   uvm_phase before_phase=null);
        
        
          // Function: get_parent
          //
          // Returns the parent schedule node, if any, for hierarchical graph traversal
          //
          extern function uvm_phase get_parent();
        
        
          // Function: get_full_name
          //
          // Returns the full path from the enclosing domain down to this node.
          // The singleton IMP phases have no hierarchy.
          //
          extern virtual function string get_full_name();
        
        
          // Function: get_schedule
          //
          // Returns the topmost parent schedule node, if any, for hierarchical graph traversal
          //
          extern function uvm_phase get_schedule(bit hier=0);
        
        
          // Function: get_schedule_name
          //
          // Returns the schedule name associated with this phase node
          //
          extern function string get_schedule_name(bit hier=0);
        
        
          // Function: get_domain
          //
          // Returns the enclosing domain
          //
          extern function uvm_domain get_domain();
        
        
          // Function: get_imp
          //
          // Returns the phase implementation for this this node.
          // Returns null if this phase type is not a UVM_PHASE_LEAF_NODE. 
          //
          extern function uvm_phase get_imp();
        
        
          // Function: get_domain_name
          //
          // Returns the domain name associated with this phase node
          //
          extern function string get_domain_name();
        
        
          //-----------------------
          // Group: Synchronization
          //-----------------------
        
          // Function: get_objection
          //
          // Return the <uvm_objection> that gates the termination of the phase.
          //
%000000   function uvm_objection get_objection(); return this.phase_done; endfunction
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
        
          // Function: raise_objection
          //
          // Raise an objection to ending this phase
          // Provides components with greater control over the phase flow for
          // processes which are not implicit objectors to the phase.
          //
          //|   while(1) begin
          //|     some_phase.raise_objection(this);
          //|     ...
          //|     some_phase.drop_objection(this);
          //|   end 
          //|   ...
          //
          extern virtual function void raise_objection (uvm_object obj, 
                                                        string description="",
                                                        int count=1);
        
          // Function: drop_objection
          //
          // Drop an objection to ending this phase
          //
          // The drop is expected to be matched with an earlier raise.
          //
          extern virtual function void drop_objection (uvm_object obj, 
                                                       string description="",
                                                       int count=1);
        
        
          // Functions: sync and unsync
          //
          // Add soft sync relationships between nodes
          //
          // Summary of usage:
          //| my_phase.sync(.target(domain)
          //|              [,.phase(phase)[,.with_phase(phase)]]);
          //| my_phase.unsync(.target(domain)
          //|                [,.phase(phase)[,.with_phase(phase)]]);
          //
          // Components in different schedule domains can be phased independently or in sync
          // with each other. An API is provided to specify synchronization rules between any
          // two domains. Synchronization can be done at any of three levels:
          //
          // - the domain's whole phase schedule can be synchronized
          // - a phase can be specified, to sync that phase with a matching counterpart
          // - or a more detailed arbitrary synchronization between any two phases
          //
          // Each kind of synchronization causes the same underlying data structures to
          // be managed. Like other APIs, we use the parameter dot-notation to set
          // optional parameters.
          //
          // When a domain is synced with another domain, all of the matching phases in
          // the two domains get a 'with' relationship between them. Likewise, if a domain
          // is unsynched, all of the matching phases that have a 'with' relationship have
          // the dependency removed. It is possible to sync two domains and then just
          // remove a single phase from the dependency relationship by unsyncing just
          // the one phase.
        
        
          // Function: sync
          //
          // Synchronize two domains, fully or partially
          //
          //   target       - handle of target domain to synchronize this one to
          //   phase        - optional single phase in this domain to synchronize, 
          //                  otherwise sync all
          //   with_phase   - optional different target-domain phase to synchronize with,
          //                  otherwise use ~phase~ in the target domain
          //
          extern function void sync(uvm_domain target,
                                    uvm_phase phase=null,
                                    uvm_phase with_phase=null);
        
          // Function: unsync
          //
          // Remove synchronization between two domains, fully or partially
          //
          //   target       - handle of target domain to remove synchronization from
          //   phase        - optional single phase in this domain to un-synchronize, 
          //                  otherwise unsync all
          //   with_phase   - optional different target-domain phase to un-synchronize with,
          //                  otherwise use ~phase~ in the target domain
          //
          extern function void unsync(uvm_domain target,
                                      uvm_phase phase=null,
                                      uvm_phase with_phase=null);
        
        
          // Function: wait_for_state
          //
          // Wait until this phase compares with the given ~state~ and ~op~ operand.
          // For <UVM_EQ> and <UVM_NE> operands, several <uvm_phase_states> can be
          // supplied by ORing their enum constants, in which case the caller will
          // wait until the phase state is any of (UVM_EQ) or none of (UVM_NE) the
          // provided states.
          //
          // To wait for the phase to be at the started state or after
          //
          //| wait_for_state(UVM_PHASE_STARTED, UVM_GTE);
          //
          // To wait for the phase to be either started or executing
          //
          //| wait_for_state(UVM_PHASE_STARTED | UVM_PHASE_EXECUTING, UVM_EQ);
          //
          extern task wait_for_state(uvm_phase_state state, uvm_wait_op op=UVM_EQ);
        
           
          //---------------
          // Group: Jumping
          //---------------
        
          // Force phases to jump forward or backward in a schedule
          //
          // A phasing domain can execute a jump from its current phase to any other.
          // A jump passes phasing control in the current domain from the current phase
          // to a target phase. There are two kinds of jump scope:
          //
          // - local jump to another phase within the current schedule, back- or forwards
          // - global jump of all domains together, either to a point in the master
          //   schedule outwith the current schedule, or by calling jump_all()
          //
          // A jump preserves the existing soft synchronization, so the domain that is
          // ahead of schedule relative to another synchronized domain, as a result of
          // a jump in either domain, will await the domain that is behind schedule.
          //
          // *Note*: A jump out of the local schedule causes other schedules that have
          // the jump node in their schedule to jump as well. In some cases, it is
          // desirable to jump to a local phase in the schedule but to have all
          // schedules that share that phase to jump as well. In that situation, the
          // jump_all static function should be used. This function causes all schedules
          // that share a phase to jump to that phase.
         
          // Function: jump
          //
          // Jump to a specified ~phase~. If the destination ~phase~ is within the current 
          // phase schedule, a simple local jump takes place. If the jump-to ~phase~ is
          // outside of the current schedule then the jump affects other schedules which
          // share the phase.
          //
          extern function void jump(uvm_phase phase);
        
        
          // Function: jump_all
          //
          // Make all schedules jump to a specified ~phase~, even if the jump target is local.
          // The jump happens to all phase schedules that contain the jump-to ~phase~,
          // i.e. a global jump. 
          //
          extern static function void jump_all(uvm_phase phase);
        
        
          // Function: get_jump_target
          //
          // Return handle to the target phase of the current jump, or null if no jump
          // is in progress. Valid for use during the phase_ended() callback
          //
          extern function uvm_phase get_jump_target();
        
        
 000048   int unsigned max_ready_to_end_iter = 20;
+000048  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
          //--------------------------
          // Internal - Implementation
          //--------------------------
        
          // Implementation - Construction
          //------------------------------
          protected uvm_phase_type m_phase_type;
          protected uvm_phase      m_parent;     // our 'schedule' node [or points 'up' one level]
          uvm_phase                m_imp;        // phase imp to call when we execute this node
        
          // Implementation - State
          //-----------------------
          local uvm_phase_state    m_state;
          local int                m_run_count; // num times this phase has executed
          local process            m_phase_proc;
          int                      m_num_procs_not_yet_returned;
          extern function uvm_phase m_find_predecessor(uvm_phase phase, bit stay_in_scope=1, uvm_phase orig_phase=null);
          extern function uvm_phase m_find_successor(uvm_phase phase, bit stay_in_scope=1, uvm_phase orig_phase=null);
          extern function uvm_phase m_find_predecessor_by_name(string name, bit stay_in_scope=1, uvm_phase orig_phase=null);
          extern function uvm_phase m_find_successor_by_name(string name, bit stay_in_scope=1, uvm_phase orig_phase=null);
          extern function void m_print_successors();
        
          // Implementation - Callbacks
          //---------------------------
          // Provide the required component traversal behavior. Called by execute()
%000000   virtual function void traverse(uvm_component comp,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
                                         uvm_phase phase,
                                         uvm_phase_state state);
          endfunction
          // Provide the required per-component execution flow. Called by traverse()
%000000   virtual function void execute(uvm_component comp,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
                                         uvm_phase phase);
          endfunction
        
          // Implementation - Schedule
          //--------------------------
          protected bit  m_predecessors[uvm_phase];
          protected bit  m_successors[uvm_phase];
          protected uvm_phase m_end_node;
          // Track the currently executing real task phases (used for debug)
          static protected bit m_executing_phases[uvm_phase];
%000000   function uvm_phase get_begin_node(); if (m_imp != null) return this; return null; endfunction
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000   function uvm_phase get_end_node();   return m_end_node; endfunction
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
          // Implementation - Synchronization
          //---------------------------------
          local uvm_phase m_sync[$];  // schedule instance to which we are synced
          uvm_objection phase_done; // phase done objection
          local int unsigned m_ready_to_end_count;
        
%000000   function int unsigned get_ready_to_end_count();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000      return m_ready_to_end_count;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          endfunction
        
          extern local function void get_predecessors_for_successors(output bit pred_of_succ[uvm_phase]);
          extern local task m_wait_for_pred();
        
          // Implementation - Jumping
          //-------------------------
          local bit                m_jump_bkwd;
          local bit                m_jump_fwd;
          local uvm_phase          m_jump_phase;
          extern function void clear(uvm_phase_state state = UVM_PHASE_DORMANT);
          extern function void clear_successors(
                                     uvm_phase_state state = UVM_PHASE_DORMANT,
                                     uvm_phase end_state=null);
        
          // Implementation - Overall Control
          //---------------------------------
%000001   local static mailbox #(uvm_phase) m_phase_hopper = new();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
          extern static task m_run_phases();
          extern local task  execute_phase();
          extern local function void m_terminate_phase();
          extern local function void m_print_termination_state();
          extern local task wait_for_self_and_siblings_to_drop();
          extern function void kill();
          extern function void kill_successors();
        
          // TBD add more useful debug
          //---------------------------------
          protected static bit m_phase_trace;
          local static bit m_use_ovm_run_semantic;
        
        
%000000   function string convert2string();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          //return $sformatf("PHASE %s = %p",get_name(),this);
%000000   string s;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     s = $sformatf("phase: %s parent=%s  pred=%s  succ=%s",get_name(),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000                      (m_parent==null) ? "null" : get_schedule_name(),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000                      m_aa2string(m_predecessors),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000                      m_aa2string(m_successors));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     return s;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          endfunction
        
%000000   local function string m_aa2string(bit aa[uvm_phase]); // TBD tidy
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     string s;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     int i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     s = "'{ ";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     foreach (aa[ph]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000       uvm_phase n = ph;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000       s = {s, (n == null) ? "null" : n.get_name(),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000         (i == aa.num()-1) ? "" : ", "};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000       i++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
            end
%000000     s = {s, " }"};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     return s;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          endfunction
        
%000000   function bit is_domain();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     return (m_phase_type == UVM_PHASE_DOMAIN);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          endfunction
        
%000000   virtual function void m_get_transitive_children(ref uvm_phase phases[$]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     foreach (m_successors[succ])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000         phases.push_back(succ);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000         succ.m_get_transitive_children(phases);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
            end
          endfunction
        endclass
        
        
        
        //------------------------------------------------------------------------------
        //                               IMPLEMENTATION
        //------------------------------------------------------------------------------
        
        typedef class uvm_cmdline_processor;
        
        `define UVM_PH_TRACE(ID,MSG,PH,VERB) \
           `uvm_info(ID, {$sformatf("Phase '%0s' (id=%0d) ", \
               PH.get_full_name(), PH.get_inst_id()),MSG}, VERB);
        
        //-----------------------------
        // Implementation - Construction
        //-----------------------------
        
        // new
        
 000048 function uvm_phase::new(string name="uvm_phase",
+000048  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
                                uvm_phase_type phase_type=UVM_PHASE_SCHEDULE,
                                uvm_phase parent=null);
 000048   super.new(name);
+000048  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000048   m_phase_type = phase_type;
+000048  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
~000046   if (name == "run")
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000046  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000002     phase_done = uvm_test_done_objection::get();
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
 000046   else begin
+000046  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
 000046     phase_done = new({name,"_objection"});
+000046  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
          end
        
 000048   m_state = UVM_PHASE_DORMANT;
+000048  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000048   m_run_count = 0;
+000048  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000048   m_parent = parent;
+000048  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
 000048   begin
+000048  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000048     uvm_cmdline_processor clp = uvm_cmdline_processor::get_inst();
+000048  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000048     string val;
+000048  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
~000048     if (clp.get_arg_value("+UVM_PHASE_TRACE", val))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000048  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000       m_phase_trace = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
            else
 000048       m_phase_trace = 0;
+000048  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
~000048     if (clp.get_arg_value("+UVM_USE_OVM_RUN_SEMANTIC", val))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000048  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000       m_use_ovm_run_semantic = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
            else
 000048       m_use_ovm_run_semantic = 0;
+000048  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
          end
        
           
~000045   if (parent == null && (phase_type == UVM_PHASE_SCHEDULE ||
-000003  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000045  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000003                          phase_type == UVM_PHASE_DOMAIN )) begin
-000003  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
            //m_parent = this;
%000003     m_end_node = new({name,"_end"}, UVM_PHASE_TERMINAL, this);
-000003  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000003     this.m_successors[m_end_node] = 1;
-000003  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000003     m_end_node.m_predecessors[this] = 1;
-000003  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
          end
        
        endfunction
        
        
        // add
        // ---
        // TBD error checks if param nodes are actually in this schedule or not
        
 000023 function void uvm_phase::add(uvm_phase phase,
+000023  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
                                     uvm_phase with_phase=null,
                                     uvm_phase after_phase=null,
                                     uvm_phase before_phase=null);
 000023   uvm_phase new_node, begin_node, end_node;
+000023  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
~000023   if (phase == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000023  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000       `uvm_fatal("PH/NULL", "add: phase argument is null")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
        
~000023   if (with_phase != null && with_phase.get_phase_type() == UVM_PHASE_IMP) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000023  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     string nm = with_phase.get_name();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     with_phase = find(with_phase);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     if (with_phase == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
              `uvm_fatal("PH_BAD_ADD",
%000000          {"cannot find with_phase '",nm,"' within node '",get_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
          end
        
~000023   if (before_phase != null && before_phase.get_phase_type() == UVM_PHASE_IMP) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000023  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     string nm = before_phase.get_name();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     before_phase = find(before_phase);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     if (before_phase == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
              `uvm_fatal("PH_BAD_ADD",
%000000          {"cannot find before_phase '",nm,"' within node '",get_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
          end
        
~000023   if (after_phase != null && after_phase.get_phase_type() == UVM_PHASE_IMP) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000023  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     string nm = after_phase.get_name();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     after_phase = find(after_phase);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     if (after_phase == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
              `uvm_fatal("PH_BAD_ADD",
%000000          {"cannot find after_phase '",nm,"' within node '",get_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
          end
        
~000023   if (with_phase != null && (after_phase != null || before_phase != null))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000023  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
            `uvm_fatal("PH_BAD_ADD",
%000000        "cannot specify both 'with' and 'before/after' phase relationships")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
        
~000023   if (before_phase == this || after_phase == m_end_node || with_phase == m_end_node)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000023  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
            `uvm_fatal("PH_BAD_ADD",
%000000        "cannot add before begin node, after end node, or with end nodes")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
        
          // If we are inserting a new "leaf node"
~000021   if (phase.get_phase_type() == UVM_PHASE_IMP) begin
+000021  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
 000021     new_node = new(phase.get_name(),UVM_PHASE_NODE,this);
+000021  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
 000021     new_node.m_imp = phase;
+000021  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
 000021     begin_node = new_node;
+000021  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
 000021     end_node = new_node;
+000021  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
          end
          // We are inserting an existing schedule
%000002   else begin
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000002     begin_node = phase;
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000002     end_node   = phase.m_end_node;
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000002     phase.m_parent = this;
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
          end
        
          // If 'with_phase' is us, then insert node in parallel
          /*
          if (with_phase == this) begin
            after_phase = this;
            before_phase = m_end_node;
          end
          */
        
          // If no before/after/with specified, insert at end of this schedule
~000022   if (with_phase == null && after_phase == null && before_phase == null) begin
+000022  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
 000022     before_phase = m_end_node;
+000022  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
          end
        
        
~000023   if (m_phase_trace) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000023  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     uvm_phase_type typ = phase.get_phase_type();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
            `uvm_info("PH/TRC/ADD_PH",
              {get_name()," (",m_phase_type.name(),") ADD_PHASE: phase=",phase.get_full_name()," (",
              typ.name(),", inst_id=",$sformatf("%0d",phase.get_inst_id()),")",
              " with_phase=",   (with_phase == null)   ? "null" : with_phase.get_name(), 
              " after_phase=",  (after_phase == null)  ? "null" : after_phase.get_name(),
              " before_phase=", (before_phase == null) ? "null" : before_phase.get_name(), 
              " new_node=",     (new_node == null)     ? "null" : {new_node.get_name(),
                                                                   " inst_id=",
                                                                   $sformatf("%0d",new_node.get_inst_id())},
              " begin_node=",   (begin_node == null)   ? "null" : begin_node.get_name(),
%000000       " end_node=",     (end_node == null)     ? "null" : end_node.get_name()},UVM_DEBUG)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
          end
        
        
          // INSERT IN PARALLEL WITH 'WITH' PHASE
%000001   if (with_phase != null) begin
-000001  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
%000001     begin_node.m_predecessors = with_phase.m_predecessors;
-000001  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
%000001     end_node.m_successors = with_phase.m_successors;
-000001  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
%000001     foreach (with_phase.m_predecessors[pred])
-000001  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000001       pred.m_successors[begin_node] = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000001     foreach (with_phase.m_successors[succ])
-000001  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000001       succ.m_predecessors[end_node] = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          end
          
          
          // INSERT BEFORE PHASE
 000022   else if (before_phase != null && after_phase == null) begin
+000022  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
 000022     begin_node.m_predecessors = before_phase.m_predecessors;
+000022  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
 000022     end_node.m_successors[before_phase] = 1;
+000022  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
 000022     foreach (before_phase.m_predecessors[pred]) begin
+000022  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
+000022  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000022       pred.m_successors.delete(before_phase);
+000022  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000022       pred.m_successors[begin_node] = 1;
+000022  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
            end
 000022     before_phase.m_predecessors.delete();
+000022  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
 000022     before_phase.m_predecessors[end_node] = 1;
+000022  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
          end
          
        
          // INSERT AFTER PHASE
%000000   else if (before_phase == null && after_phase != null) begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
%000000     end_node.m_successors = after_phase.m_successors;
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
%000000     begin_node.m_predecessors[after_phase] = 1;
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
%000000     foreach (after_phase.m_successors[succ]) begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000       succ.m_predecessors.delete(after_phase);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000       succ.m_predecessors[end_node] = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
            end
%000000     after_phase.m_successors.delete();
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
%000000     after_phase.m_successors[begin_node] = 1;
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
          end
          
        
          // IN BETWEEN 'BEFORE' and 'AFTER' PHASES
%000000   else if (before_phase != null && after_phase != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     if (!after_phase.is_before(before_phase)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
              `uvm_fatal("PH_ADD_PHASE",{"Phase '",before_phase.get_name(),
%000000                  "' is not before phase '",after_phase.get_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
            end
            // before and after? add 1 pred and 1 succ
%000000     begin_node.m_predecessors[after_phase] = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     end_node.m_successors[before_phase] = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     after_phase.m_successors[begin_node] = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     before_phase.m_predecessors[end_node] = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     if (after_phase.m_successors.exists(before_phase)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000       after_phase.m_successors.delete(before_phase);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000       before_phase.m_successors.delete(after_phase);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
            end
          end
        
        endfunction
        
        
        // get_parent
        // ----------
        
%000000 function uvm_phase uvm_phase::get_parent();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   return m_parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // get_imp
        // -------
        
%000000 function uvm_phase uvm_phase::get_imp();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   return m_imp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // get_schedule
        // ------------
        
 000194 function uvm_phase uvm_phase::get_schedule(bit hier=0);
+000194  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000194   uvm_phase sched;
+000194  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000194   sched = this;
+000194  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
~000194   if (hier)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000194  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     while (sched.m_parent != null && (sched.m_parent.get_phase_type() == UVM_PHASE_SCHEDULE))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000       sched = sched.m_parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
~000194   if (sched.m_phase_type == UVM_PHASE_SCHEDULE)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000194  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     return sched;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
 000097   if (sched.m_phase_type == UVM_PHASE_NODE)
+000097  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000097  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
~000097     if (m_parent != null && m_parent.m_phase_type != UVM_PHASE_DOMAIN)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000097  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000       return m_parent;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
 000194   return null;
+000194  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // get_domain
        // ----------
        
 004277 function uvm_domain uvm_phase::get_domain();
+004277  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 004277   uvm_phase phase;
+004277  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 004277   phase = this;
+004277  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 007013   while (phase != null && phase.m_phase_type != UVM_PHASE_DOMAIN)
+007013  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 007013     phase = phase.m_parent;
+007013  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
~004277   if (phase == null) // no parent domain 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+004277  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
~004277   if(!$cast(get_domain,phase))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+004277  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000       `uvm_fatal("PH/INTERNAL", "get_domain: m_phase_type is DOMAIN but $cast to uvm_domain fails")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // get_domain_name
        // ---------------
          
%000000 function string uvm_phase::get_domain_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   uvm_domain domain;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   domain = get_domain();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   if (domain == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     return "unknown";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000   return domain.get_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // get_schedule_name
        // -----------------
          
%000000 function string uvm_phase::get_schedule_name(bit hier=0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   uvm_phase sched;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   string s;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   sched = get_schedule(hier);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   if (sched == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     return "";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000   s = sched.get_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   while (sched.m_parent != null && sched.m_parent != sched &&
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000           (sched.m_parent.get_phase_type() == UVM_PHASE_SCHEDULE)) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     sched = sched.m_parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     s = {sched.get_name(),(s.len()>0?".":""),s};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=(((s) > 32'sh0)==0) => 0 hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=(((s) > 32'sh0)==1) => 1 hier=uvm_pkg::uvm_phase__Vclpkg
          end
%000000   return s;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // get_full_name
        // -------------
        
%000000 function string uvm_phase::get_full_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   string dom, sch;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   if (m_phase_type == UVM_PHASE_IMP)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     return get_name();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000   get_full_name = get_domain_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   sch = get_schedule_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   if (sch != "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     get_full_name = {get_full_name, ".", sch};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000   if (m_phase_type != UVM_PHASE_DOMAIN && m_phase_type != UVM_PHASE_SCHEDULE)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=((m_phase_type != uvm_pkg::UVM_PHASE_DOMAIN)==0) => 0 hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=((m_phase_type != uvm_pkg::UVM_PHASE_DOMAIN)==1 && (m_phase_type != uvm_pkg::UVM_PHASE_SCHEDULE)==1) => 1 hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=((m_phase_type != uvm_pkg::UVM_PHASE_SCHEDULE)==0) => 0 hier=uvm_pkg::uvm_phase__Vclpkg
%000000     get_full_name = {get_full_name, ".", get_name()};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // get_phase_type
        // --------------
        
 000124 function uvm_phase_type uvm_phase::get_phase_type();
+000124  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000124   return m_phase_type;
+000124  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        //-----------------------
        // Implementation - State
        //-----------------------
        
        // get_state
        // ---------
        
 000072 function uvm_phase_state uvm_phase::get_state();
+000072  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000072   return m_state;
+000072  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        // get_run_count
        // -------------
        
%000000 function int uvm_phase::get_run_count();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   return m_run_count;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // m_print_successors
        // ------------------
        
%000000 function void uvm_phase::m_print_successors();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   uvm_phase found;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   static string spaces = "                                                 ";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   static int level;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   if (m_phase_type == UVM_PHASE_DOMAIN)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     level = 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000   $display(spaces.substr(0,level*2),get_name(), " (",m_phase_type.name(),") id=%0d",get_inst_id());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   level++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   foreach (m_successors[succ]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     succ.m_print_successors();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          end
%000000   level--;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // m_find_predecessor
        // ------------------
        
~000065 function uvm_phase uvm_phase::m_find_predecessor(uvm_phase phase, bit stay_in_scope=1, uvm_phase orig_phase=null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
+000065  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000065   uvm_phase found;
+000065  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          //$display("  FIND PRED node '",phase.get_name(),"' (id=",$sformatf("%0d",phase.get_inst_id()),") - checking against ",get_name()," (",m_phase_type.name()," id=",$sformatf("%0d",get_inst_id()),(m_imp==null)?"":{"/",$sformatf("%0d",m_imp.get_inst_id())},")");
~000065   if (phase == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000065  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     return null ;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
          end
~000065   if (phase == m_imp || phase == this)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000065  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     return this;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
~000065   foreach (m_predecessors[pred]) begin
+000065  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     uvm_phase orig;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     orig = (orig_phase==null) ? this : orig_phase;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     if (!stay_in_scope || 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
                (pred.get_schedule() == orig.get_schedule()) ||
%000000         (pred.get_domain() == orig.get_domain())) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000       found = pred.m_find_predecessor(phase,stay_in_scope,orig);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000       if (found != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000         return found;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
            end
          end
 000065   return null;
+000065  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // m_find_predecessor_by_name
        // --------------------------
        
%000000 function uvm_phase uvm_phase::m_find_predecessor_by_name(string name, bit stay_in_scope=1, uvm_phase orig_phase=null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   uvm_phase found;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          //$display("  FIND PRED node '",name,"' - checking against ",get_name()," (",m_phase_type.name()," id=",$sformatf("%0d",get_inst_id()),(m_imp==null)?"":{"/",$sformatf("%0d",m_imp.get_inst_id())},")");
%000000   if (get_name() == name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     return this;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000   foreach (m_predecessors[pred]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     uvm_phase orig;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     orig = (orig_phase==null) ? this : orig_phase;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     if (!stay_in_scope || 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
                (pred.get_schedule() == orig.get_schedule()) ||
%000000         (pred.get_domain() == orig.get_domain())) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000       found = pred.m_find_predecessor_by_name(name,stay_in_scope,orig);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000       if (found != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000         return found;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
            end
          end
%000000   return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // m_find_successor
        // ----------------
        
~000162 function uvm_phase uvm_phase::m_find_successor(uvm_phase phase, bit stay_in_scope=1, uvm_phase orig_phase=null);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000162  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000162   uvm_phase found;
+000162  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          //$display("  FIND SUCC node '",phase.get_name(),"' (id=",$sformatf("%0d",phase.get_inst_id()),") - checking against ",get_name()," (",m_phase_type.name()," id=",$sformatf("%0d",get_inst_id()),(m_imp==null)?"":{"/",$sformatf("%0d",m_imp.get_inst_id())},")");
~000162   if (phase == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000162  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     return null ;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
          end
~000097   if (phase == m_imp || phase == this) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000097  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     return this;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
            end
~000162   foreach (m_successors[succ]) begin
+000162  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     uvm_phase orig;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     orig = (orig_phase==null) ? this : orig_phase;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     if (!stay_in_scope || 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
                (succ.get_schedule() == orig.get_schedule()) ||
%000000         (succ.get_domain() == orig.get_domain())) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000       found = succ.m_find_successor(phase,stay_in_scope,orig);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000       if (found != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000         return found;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
                end
            end
          end
 000162   return null;
+000162  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // m_find_successor_by_name
        // ------------------------
        
%000000 function uvm_phase uvm_phase::m_find_successor_by_name(string name, bit stay_in_scope=1, uvm_phase orig_phase=null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   uvm_phase found;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          //$display("  FIND SUCC node '",name,"' - checking against ",get_name()," (",m_phase_type.name()," id=",$sformatf("%0d",get_inst_id()),(m_imp==null)?"":{"/",$sformatf("%0d",m_imp.get_inst_id())},")");
%000000   if (get_name() == name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     return this;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000   foreach (m_successors[succ]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     uvm_phase orig;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     orig = (orig_phase==null) ? this : orig_phase;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     if (!stay_in_scope || 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
                (succ.get_schedule() == orig.get_schedule()) ||
%000000         (succ.get_domain() == orig.get_domain())) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000       found = succ.m_find_successor_by_name(name,stay_in_scope,orig);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000       if (found != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000         return found;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
            end
          end
%000000   return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // find
        // ----
        
~000065 function uvm_phase uvm_phase::find(uvm_phase phase, bit stay_in_scope=1);
+000065  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=else hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=else hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
          // TBD full search
          //$display({"\nFIND node '",phase.get_name(),"' within ",get_name()," (scope ",m_phase_type.name(),")", (stay_in_scope) ? " staying within scope" : ""});
~000065   if (phase == m_imp || phase == this)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000065  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     return phase;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
 000065   find = m_find_predecessor(phase,stay_in_scope,this);
+000065  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
~000065   if (find == null)
+000065  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
 000065     find = m_find_successor(phase,stay_in_scope,this);
+000065  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // find_by_name
        // ------------
        
%000000 function uvm_phase uvm_phase::find_by_name(string name, bit stay_in_scope=1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          // TBD full search
          //$display({"\nFIND node named '",name,"' within ",get_name()," (scope ",m_phase_type.name(),")", (stay_in_scope) ? " staying within scope" : ""});
%000000   if (get_name() == name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     return this;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000   find_by_name = m_find_predecessor_by_name(name,stay_in_scope,this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   if (find_by_name == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     find_by_name = m_find_successor_by_name(name,stay_in_scope,this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // is
        // --
          
%000000 function bit uvm_phase::is(uvm_phase phase);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   return (m_imp == phase || this == phase); 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
          
        // is_before
        // ---------
        
%000000 function bit uvm_phase::is_before(uvm_phase phase);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          //$display("this=%s is before phase=%s?",get_name(),phase.get_name());
          // TODO: add support for 'stay_in_scope=1' functionality
%000000   return (!is(phase) && m_find_successor(phase,0,this) != null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // is_after
        // --------
          
%000000 function bit uvm_phase::is_after(uvm_phase phase);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          //$display("this=%s is after phase=%s?",get_name(),phase.get_name());
          // TODO: add support for 'stay_in_scope=1' functionality
%000000   return (!is(phase) && m_find_predecessor(phase,0,this) != null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // execute_phase
        // -------------
        
 000027 task uvm_phase::execute_phase();
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
 000027   uvm_task_phase task_phase;
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000027   uvm_root top;
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000027   top = uvm_root::get();
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
          // If we got here by jumping forward, we must wait for
          // all its predecessor nodes to be marked DONE.
          // (the next conditional speeds this up)
          // Also, this helps us fast-forward through terminal (end) nodes
 000027   foreach (m_predecessors[pred])
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000027     wait (pred.m_state == UVM_PHASE_DONE);
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
        
          // If DONE (by, say, a forward jump), return immed
~000027   if (m_state == UVM_PHASE_DONE)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000027  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
          
        
          //---------
          // SYNCING:
          //---------
          // Wait for phases with which we have a sync()
          // relationship to be ready. Sync can be 2-way -
          // this additional state avoids deadlock.
~000027   if (m_sync.size()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000027  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     m_state = UVM_PHASE_SYNCING;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     foreach (m_sync[i]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000       wait (m_sync[i].m_state >= UVM_PHASE_SYNCING);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
            end
          end
        
 000027   m_run_count++;
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
        
~000027   if (m_phase_trace) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000027  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     `UVM_PH_TRACE("PH/TRC/STRT","Starting phase",this,UVM_LOW)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
          end
        
        
          // If we're a schedule or domain, then "fake" execution
~000021   if (m_phase_type != UVM_PHASE_NODE) begin
-000006  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000021  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000006     m_state = UVM_PHASE_STARTED;
-000006  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000006     #0;
-000006  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000006     m_state = UVM_PHASE_EXECUTING;
-000006  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000006     #0;
-000006  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
          end
        
        
 000021   else begin // PHASE NODE
+000021  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
        
            //---------
            // STARTED:
            //---------
 000021     m_state = UVM_PHASE_STARTED;
+000021  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
 000021     m_imp.traverse(top,this,UVM_PHASE_STARTED);
+000021  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
 000021     m_ready_to_end_count = 0 ; // reset the ready_to_end count when phase starts
+000021  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
 000021     #0; // LET ANY WAITERS WAKE UP
+000021  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
        
        
            //if (m_imp.get_phase_type() != UVM_PHASE_TASK) begin
~000013     if (!$cast(task_phase,m_imp)) begin
-000008  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
        
              //-----------
              // EXECUTING: (function phases)
              //-----------
%000008       m_state = UVM_PHASE_EXECUTING;
-000008  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000008       #0; // LET ANY WAITERS WAKE UP
-000008  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000008       m_imp.traverse(top,this,UVM_PHASE_EXECUTING);
-000008  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
        
            end
 000013     else begin
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
 000013         m_executing_phases[this] = 1;
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
        
 000013         fork : master_phase_process
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
 000013           begin
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
          
 000013             m_phase_proc = process::self();
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
          
                    //-----------
                    // EXECUTING: (task phases)
                    //-----------
 000013             m_state = UVM_PHASE_EXECUTING;
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
 000013             task_phase.traverse(top,this,UVM_PHASE_EXECUTING);
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
          
 000013             wait(0); // stay alive for later kill
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
          
                  end
                join_none
          
 000013         uvm_wait_for_nba_region(); //Give sequences, etc. a chance to object
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
          
                // Now wait for one of three criterion for end-of-phase.
 000013         fork
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
 000013           begin // guard
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
                  
 000013            fork
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
                     // JUMP
 000013              begin
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
~000013                 wait (m_jump_fwd || m_jump_bkwd);
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=(m_jump_bkwd==1) => 1 hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=(m_jump_fwd==0 && m_jump_bkwd==0) => 0 hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=(m_jump_fwd==1) => 1 hier=uvm_pkg::uvm_phase__Vclpkg
~000013                 `UVM_PH_TRACE("PH/TRC/EXE/JUMP","PHASE EXIT ON JUMP REQUEST",this,UVM_DEBUG)
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
                     end
          
                     // WAIT_FOR_ALL_DROPPED
 000013              begin
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
 000013                bit do_ready_to_end  ; // bit used for ready_to_end iterations
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
                       // OVM semantic: don't end until objection raised or stop request
~000012                if (phase_done.get_objection_total(top) ||
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000012  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000001                    m_use_ovm_run_semantic && m_imp.get_name() == "run") begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000001                  if (!phase_done.m_top_all_dropped)
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000001                    phase_done.wait_for(UVM_ALL_DROPPED, top);
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000001                  `UVM_PH_TRACE("PH/TRC/EXE/ALLDROP","PHASE EXIT ALL_DROPPED",this,UVM_DEBUG)
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
                       end
 000012                else begin
+000012  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
~000012                   if (m_phase_trace)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000012  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000                     `UVM_PH_TRACE("PH/TRC/SKIP","No objections raised, skipping phase",this,UVM_LOW)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
                       end
                       
 000013                wait_for_self_and_siblings_to_drop() ;
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
 000013                do_ready_to_end = 1;
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
                          
                       //--------------
                       // READY_TO_END:
                       //--------------
         
 000013                while (do_ready_to_end) begin
+000013  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000013                  uvm_wait_for_nba_region(); // Let all siblings see no objections before traverse might raise another 
+000013  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
~000013                  `UVM_PH_TRACE("PH_READY_TO_END","PHASE READY TO END",this,UVM_DEBUG)
+000013  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
 000013                  m_ready_to_end_count++;
+000013  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
~000013                  if (m_phase_trace)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000                    `UVM_PH_TRACE("PH_READY_TO_END_CB","CALLING READY_TO_END CB",this,UVM_HIGH)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
 000013                  m_state = UVM_PHASE_READY_TO_END;
+000013  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
~000013                  if (m_imp != null)
+000013  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
 000013                    m_imp.traverse(top,this,UVM_PHASE_READY_TO_END);
+000013  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
                          
 000013                  uvm_wait_for_nba_region(); // Give traverse targets a chance to object 
+000013  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
 000013                  wait_for_self_and_siblings_to_drop();
+000013  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
~000013                  do_ready_to_end = (m_state == UVM_PHASE_EXECUTING) && (m_ready_to_end_count < max_ready_to_end_iter) ; //when we don't wait in task above, we drop out of while loop
+000013  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=((m_ready_to_end_count < max_ready_to_end_iter)==0) => 0 hier=uvm_pkg::uvm_phase__Vclpkg
+000013  point: type=expr comment=((m_state == uvm_pkg::UVM_PHASE_EXECUTING)==0) => 0 hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=((m_state == uvm_pkg::UVM_PHASE_EXECUTING)==1 && (m_ready_to_end_count < max_ready_to_end_iter)==1) => 1 hier=uvm_pkg::uvm_phase__Vclpkg
                       end
                     end
          
                     // TIMEOUT
 000013              begin
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000                if (this.get_name() == "run") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000001                   if (top.phase_timeout == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000                     wait(top.phase_timeout != 0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000001                   if (m_phase_trace)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000                     `UVM_PH_TRACE("PH/TRC/TO_WAIT", $sformatf("STARTING PHASE TIMEOUT WATCHDOG (timeout == %t)", top.phase_timeout), this, UVM_HIGH)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000                   `uvm_delay(top.phase_timeout)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000                   if ($time == `UVM_DEFAULT_TIMEOUT) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000                      if (m_phase_trace)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000                        `UVM_PH_TRACE("PH/TRC/TIMEOUT", "PHASE TIMEOUT WATCHDOG EXPIRED", this, UVM_LOW)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000                      foreach (m_executing_phases[p]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000                         if (p.phase_done.get_objection_total() > 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000                            if (m_phase_trace)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
                                     `UVM_PH_TRACE("PH/TRC/TIMEOUT/OBJCTN", 
                                                   $sformatf("Phase '%s' has outstanding objections:\n%s", p.get_full_name(), p.phase_done.convert2string()),
                                                   this,
%000000                                            UVM_LOW)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
                                end
                             end
                                
                             `uvm_fatal("PH_TIMEOUT",
                                        $sformatf("Default timeout of %0t hit, indicating a probable testbench issue",
%000000                                           `UVM_DEFAULT_TIMEOUT))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
                          end
%000000                   else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000                      if (m_phase_trace)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000                        `UVM_PH_TRACE("PH/TRC/TIMEOUT", "PHASE TIMEOUT WATCHDOG EXPIRED", this, UVM_LOW)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000                      foreach (m_executing_phases[p]) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000                         if (p.phase_done.get_objection_total() > 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000                            if (m_phase_trace)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
                                     `UVM_PH_TRACE("PH/TRC/TIMEOUT/OBJCTN", 
                                                   $sformatf("Phase '%s' has outstanding objections:\n%s", p.get_full_name(), p.phase_done.convert2string()),
                                                   this,
%000000                                            UVM_LOW)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
                                end
                             end
                                
                             `uvm_fatal("PH_TIMEOUT",
                                        $sformatf("Explicit timeout of %0t hit, indicating a probable testbench issue",
%000000                                           top.phase_timeout))
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
                          end
%000000                   if (m_phase_trace)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000                     `UVM_PH_TRACE("PH/TRC/EXE/3","PHASE EXIT TIMEOUT",this,UVM_DEBUG)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
                       end // if (this.get_name() == "run")
%000000                else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000                   wait (0); // never unblock for non-run phase
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
                       end
                     end // if (m_phase_trace)
        
          
                   join_any
 000013            disable fork;
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
                
                  end
          
                join // guard
        
            end
        
          end
        
 000027   m_executing_phases.delete(this);
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
          //---------
          // JUMPING:
          //---------
        
          // If jump_to() was called then we need to kill all the successor
          // phases which may still be running and then initiate the new
          // phase.  The return is necessary so we don't start new successor
          // phases.  If we are doing a forward jump then we want to set the
          // state of this phase's successors to UVM_PHASE_DONE.  This
          // will let us pretend that all the phases between here and there
          // were executed and completed.  Thus any dependencies will be
          // satisfied preventing deadlocks.
          // GSA TBD insert new jump support
        
~000021   if (m_phase_type == UVM_PHASE_NODE) begin
+000021  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000006  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
        
~000021   if(m_jump_fwd || m_jump_bkwd) begin
-000000  point: type=expr comment=(m_jump_bkwd==1) => 1 hier=uvm_pkg::uvm_phase__Vclpkg
+000021  point: type=expr comment=(m_jump_fwd==0 && m_jump_bkwd==0) => 0 hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=(m_jump_fwd==1) => 1 hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000021  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
            `uvm_info("PH_JUMP",
                    $sformatf("phase %s (schedule %s, domain %s) is jumping to phase %s",
                     get_name(), get_schedule_name(), get_domain_name(), m_jump_phase.get_name()),
%000000             UVM_MEDIUM);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
        
        
%000000     #0; // LET ANY WAITERS ON READY_TO_END TO WAKE UP
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
        
            // execute 'phase_ended' callbacks
%000000     if (m_phase_trace)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000       `UVM_PH_TRACE("PH_END","JUMPING OUT OF PHASE",this,UVM_HIGH)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     m_state = UVM_PHASE_ENDED;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     if (m_imp != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000        m_imp.traverse(top,this,UVM_PHASE_ENDED);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     #0; // LET ANY WAITERS WAKE UP
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     m_state = UVM_PHASE_JUMPING;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     if (m_phase_proc != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000       m_phase_proc.kill();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000       m_phase_proc = null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
            end
%000000     #0; // LET ANY WAITERS WAKE UP
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     phase_done.clear();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
        
%000000     if(m_jump_fwd) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000       clear_successors(UVM_PHASE_DONE,m_jump_phase);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
            end
%000000     m_jump_phase.clear_successors();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     m_jump_fwd = 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     m_jump_bkwd = 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     void'(m_phase_hopper.try_put(m_jump_phase));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     m_jump_phase = null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
          end
        
          // WAIT FOR PREDECESSORS:  // WAIT FOR PREDECESSORS:
          // function phases only
~000013   if (task_phase == null)
-000008  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000013  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000008     m_wait_for_pred();
-000008  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
        
        
          //-------
          // ENDED:
          //-------
          // execute 'phase_ended' callbacks
~000021   if (m_phase_trace)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000021  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     `UVM_PH_TRACE("PH_END","ENDING PHASE",this,UVM_HIGH)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
 000021   m_state = UVM_PHASE_ENDED;
+000021  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
~000021   if (m_imp != null)
+000021  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
 000021     m_imp.traverse(top,this,UVM_PHASE_ENDED);
+000021  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
 000021   #0; // LET ANY WAITERS WAKE UP
+000021  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
        
          //---------
          // CLEANUP:
          //---------
          // kill this phase's threads
 000021   m_state = UVM_PHASE_CLEANUP;
+000021  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
~000013   if (m_phase_proc != null) begin
+000013  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000008  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
 000013     m_phase_proc.kill();
+000013  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
 000013     m_phase_proc = null;
+000013  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
          end
 000021   #0; // LET ANY WAITERS WAKE UP
+000021  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
 000021   phase_done.clear();
+000021  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
        
          end
        
        
          //------
          // DONE:
          //------
~000027   if (m_phase_trace)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000027  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     `UVM_PH_TRACE("PH/TRC/DONE","Completed phase",this,UVM_LOW)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
 000027   m_state = UVM_PHASE_DONE;
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000027   m_phase_proc = null;
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000027   #0; // LET ANY WAITERS WAKE UP
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
        
        
          //-----------
          // SCHEDULED:
          //-----------
          // If more successors, schedule them to run now
~000026   if (m_successors.size() == 0) begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000001     top.m_phase_all_done=1;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
          end 
 000026   else begin
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
            // execute all the successors
 000027     foreach (m_successors[succ]) begin
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
~000026       if(succ.m_state < UVM_PHASE_SCHEDULED) begin
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
 000026         succ.m_state = UVM_PHASE_SCHEDULED;
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
 000026           #0; // LET ANY WAITERS WAKE UP
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
 000026         void'(m_phase_hopper.try_put(succ));
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
~000026         if (m_phase_trace)
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000           `UVM_PH_TRACE("PH/TRC/SCHEDULED",{"Scheduled from phase ",get_full_name()},succ,UVM_LOW)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
              end
            end
          end
        
        endtask
        
        
 000034 function void uvm_phase::get_predecessors_for_successors(output bit pred_of_succ[uvm_phase]);
+000034  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000034     bit done;
+000034  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000034     bit successors[uvm_phase];
+000034  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
            // get all successors
 000035     foreach (m_successors[succ])
+000034  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
+000035  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000035       successors[succ] = 1;
+000035  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
            // replace TERMINAL or SCHEDULE nodes with their successors
~000041     do begin
-000007  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
+000041  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000041       done=1;
+000041  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000043       foreach (successors[succ]) begin
+000043  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
+000041  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
~000036         if (succ.get_phase_type() != UVM_PHASE_NODE) begin
+000036  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
-000007  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000007           successors.delete(succ);
-000007  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000007           foreach (succ.m_successors[next_succ])
-000007  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000006  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000006             successors[next_succ] = 1;
-000006  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000007           done = 0;
-000007  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
                end
              end
~000041     end while(!done);
-000007  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000007  point: type=expr comment=(done==0) => 1 hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=(done==1) => 0 hier=uvm_pkg::uvm_phase__Vclpkg
+000041  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
                  
            // get all predecessors to these successors
 000034     foreach (successors[succ])
+000034  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
+000034  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000038       foreach (succ.m_predecessors[pred])
+000034  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
+000038  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000038         pred_of_succ[pred] = 1;
+000038  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
            
            // replace any terminal nodes with their predecessors, recursively.
            // we are only interested in "real" phase nodes
 000044     do begin
+000010  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
+000044  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000044       done=1;
+000044  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000057       foreach (pred_of_succ[pred]) begin
+000057  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
+000044  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000047         if (pred.get_phase_type() != UVM_PHASE_NODE) begin
+000047  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
+000010  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
 000010           pred_of_succ.delete(pred); 
+000010  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
 000010           foreach (pred.m_predecessors[next_pred])
+000010  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000010  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000010             pred_of_succ[next_pred] = 1;
+000010  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000010           done =0;
+000010  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
                end
              end
~000044     end while (!done);
+000010  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
+000010  point: type=expr comment=(done==0) => 1 hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=(done==1) => 0 hier=uvm_pkg::uvm_phase__Vclpkg
+000044  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
        
            // remove ourselves from the list
 000034     pred_of_succ.delete(this);
+000034  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // m_wait_for_pred
        // ---------------
        
%000008 task uvm_phase::m_wait_for_pred();
-000008  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
%000008   if(!(m_jump_fwd || m_jump_bkwd)) begin
-000008  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=(m_jump_bkwd==1) => 0 hier=uvm_pkg::uvm_phase__Vclpkg
-000008  point: type=expr comment=(m_jump_fwd==0 && m_jump_bkwd==0) => 1 hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=(m_jump_fwd==1) => 0 hier=uvm_pkg::uvm_phase__Vclpkg
        
%000008     bit pred_of_succ[uvm_phase];
-000008  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000008     get_predecessors_for_successors(pred_of_succ);
-000008  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
        
            // wait for predecessors to successors (real phase nodes, not terminals)
            // mostly debug msgs
%000008     foreach (pred_of_succ[sibling]) begin
-000008  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
%000000       if (m_phase_trace) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000         string s;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000         s = $sformatf("Waiting for phase '%s' (%0d) to be READY_TO_END. Current state is %s",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000             sibling.get_name(),sibling.get_inst_id(),sibling.m_state.name());
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000         `UVM_PH_TRACE("PH/TRC/WAIT_PRED_OF_SUCC",s,this,UVM_HIGH)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
              end
        
%000000       sibling.wait_for_state(UVM_PHASE_READY_TO_END, UVM_GTE);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
%000000       if (m_phase_trace) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000         string s;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000         s = $sformatf("Phase '%s' (%0d) is now READY_TO_END. Releasing phase",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000             sibling.get_name(),sibling.get_inst_id());
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000         `UVM_PH_TRACE("PH/TRC/WAIT_PRED_OF_SUCC",s,this,UVM_HIGH)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
              end
        
            end
        
%000008     if (m_phase_trace) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000008  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000       if (pred_of_succ.num()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000         string s = "( ";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000         foreach (pred_of_succ[pred])
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000           s = {s, pred.get_full_name()," "};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000         s = {s, ")"};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
                `UVM_PH_TRACE("PH/TRC/WAIT_PRED_OF_SUCC",
%000000               {"*** All pred to succ ",s," in READY_TO_END state, so ending phase ***"},this,UVM_HIGH)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
              end
%000000       else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
                `UVM_PH_TRACE("PH/TRC/WAIT_PRED_OF_SUCC",
%000000                     "*** No pred to succ other than myself, so ending phase ***",this,UVM_HIGH)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
              end
            end
        
          end
%000008   #0; // LET ANY WAITERS WAKE UP
-000008  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
        endtask
        
        
        //---------------------------------
        // Implementation - Synchronization
        //---------------------------------
        
        // raise_objection
        // ---------------
        
%000001 function void uvm_phase::raise_objection (uvm_object obj, 
-000001  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
                                                           string description="",
                                                           int count=1);
%000001   phase_done.raise_objection(obj,description,count);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // drop_objection
        // --------------
        
%000001 function void uvm_phase::drop_objection (uvm_object obj, 
-000001  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
                                                          string description="",
                                                          int count=1);
%000001   phase_done.drop_objection(obj,description,count);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // sync
        // ----
        
%000000 function void uvm_phase::sync(uvm_domain target,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
                                      uvm_phase phase=null,
%000000                               uvm_phase with_phase=null);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000   if (!this.is_domain()) begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=(is_domain()==0) => 1 hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=(is_domain()==1) => 0 hier=uvm_pkg::uvm_phase__Vclpkg
%000000     `uvm_fatal("PH_BADSYNC","sync() called from a non-domain phase schedule node");
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
          end
%000000   else if (target == null) begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
%000000     `uvm_fatal("PH_BADSYNC","sync() called with a null target domain");
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
          end
%000000   else if (!target.is_domain()) begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
%000000     `uvm_fatal("PH_BADSYNC","sync() called with a non-domain phase schedule node as target");
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
          end
%000000   else if (phase == null && with_phase != null) begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
%000000     `uvm_fatal("PH_BADSYNC","sync() called with null phase and non-null with phase");
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
          end
%000000   else if (phase == null) begin
-000000  point: type=line comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=else hier=uvm_pkg::uvm_phase__Vclpkg
            // whole domain sync - traverse this domain schedule from begin to end node and sync each node
%000000     int visited[uvm_phase];
-000000  point: type=line comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     uvm_phase queue[$];
-000000  point: type=line comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     queue.push_back(this);
-000000  point: type=line comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     visited[this] = 1;
-000000  point: type=line comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     while (queue.size()) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000       uvm_phase node;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000       node = queue.pop_front();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000       if (node.m_imp != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000         sync(target, node.m_imp);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
              end
%000000       foreach (node.m_successors[succ]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000         if (!visited.exists(succ)) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000           queue.push_back(succ);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000           visited[succ] = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
                end
              end
            end
%000000   end else begin
-000000  point: type=line comment=else hier=uvm_pkg::uvm_phase__Vclpkg
            // single phase sync
            // this is a 2-way ('with') sync and we check first in case it is already there
%000000     uvm_phase from_node, to_node;
-000000  point: type=line comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     int found_to[$], found_from[$];
-000000  point: type=line comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     if(with_phase == null) with_phase = phase;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     from_node = find(phase);
-000000  point: type=line comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     to_node = target.find(with_phase);
-000000  point: type=line comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     if(from_node == null || to_node == null) return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     found_to = from_node.m_sync.find_index(node) with (node == to_node);
-000000  point: type=line comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     found_from = to_node.m_sync.find_index(node) with (node == from_node);
-000000  point: type=line comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     if (found_to.size() == 0) from_node.m_sync.push_back(to_node);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     if (found_from.size() == 0) to_node.m_sync.push_back(from_node);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
          end
        endfunction
        
        
        // unsync
        // ------
        
%000000 function void uvm_phase::unsync(uvm_domain target,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
                                        uvm_phase phase=null,
%000000                                 uvm_phase with_phase=null);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000   if (!this.is_domain()) begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=(is_domain()==0) => 1 hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=(is_domain()==1) => 0 hier=uvm_pkg::uvm_phase__Vclpkg
%000000     `uvm_fatal("PH_BADSYNC","unsync() called from a non-domain phase schedule node");
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000   end else if (target == null) begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
%000000     `uvm_fatal("PH_BADSYNC","unsync() called with a null target domain");
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000   end else if (!target.is_domain()) begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
%000000     `uvm_fatal("PH_BADSYNC","unsync() called with a non-domain phase schedule node as target");
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000   end else if (phase == null && with_phase != null) begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
%000000     `uvm_fatal("PH_BADSYNC","unsync() called with null phase and non-null with phase");
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000   end else if (phase == null) begin
-000000  point: type=line comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=else hier=uvm_pkg::uvm_phase__Vclpkg
            // whole domain unsync - traverse this domain schedule from begin to end node and unsync each node
%000000     int visited[uvm_phase];
-000000  point: type=line comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     uvm_phase queue[$];
-000000  point: type=line comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     queue.push_back(this);
-000000  point: type=line comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     visited[this] = 1;
-000000  point: type=line comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     while (queue.size()) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000       uvm_phase node;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000       node = queue.pop_front();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000       if (node.m_imp != null) unsync(target,node.m_imp);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000       foreach (node.m_successors[succ]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000         if (!visited.exists(succ)) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000           queue.push_back(succ);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000           visited[succ] = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
                end
              end
            end
%000000   end else begin
-000000  point: type=line comment=else hier=uvm_pkg::uvm_phase__Vclpkg
            // single phase unsync
            // this is a 2-way ('with') sync and we check first in case it is already there
%000000     uvm_phase from_node, to_node;
-000000  point: type=line comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     int found_to[$], found_from[$];
-000000  point: type=line comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     from_node = target.find(phase);
-000000  point: type=line comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     to_node = target.find(phase);
-000000  point: type=line comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     found_to = from_node.m_sync.find_index(node) with (node == to_node);
-000000  point: type=line comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     found_from = to_node.m_sync.find_index(node) with (node == from_node);
-000000  point: type=line comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     if (found_to.size()) from_node.m_sync.delete(found_to[0]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     if (found_from.size()) to_node.m_sync.delete(found_from[0]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
          end
        endfunction
        
        
        // wait_for_state
        //---------------
          
%000005 task uvm_phase::wait_for_state(uvm_phase_state state, uvm_wait_op op=UVM_EQ);
-000005  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000005   case (op)
-000005  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     UVM_EQ:  wait((state&m_state) != 0);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_phase__Vclpkg
%000000     UVM_NE:  wait((state&m_state) == 0);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_phase__Vclpkg
%000000     UVM_LT:  wait(m_state <  state);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_phase__Vclpkg
%000000     UVM_LTE: wait(m_state <= state);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_phase__Vclpkg
%000000     UVM_GT:  wait(m_state >  state);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_phase__Vclpkg
%000005     UVM_GTE: wait(m_state >= state);
-000005  point: type=line comment=case hier=uvm_pkg::uvm_phase__Vclpkg
          endcase
        endtask
        
        
        //-------------------------
        // Implementation - Jumping
        //-------------------------
        
        // jump
        // ----
        //
        // Note that this function does not directly alter flow of control.
        // That is, the new phase is not initiated in this function.
        // Rather, flags are set which execute_phase() uses to determine
        // that a jump has been requested and performs the jump.
        
%000000 function void uvm_phase::jump(uvm_phase phase);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   uvm_phase d;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          // TBD refactor
        
%000000   if ((m_state <  UVM_PHASE_STARTED) ||
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=((m_state < uvm_pkg::UVM_PHASE_STARTED)==0 && (m_state > uvm_pkg::UVM_PHASE_READY_TO_END)==0) => 0 hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=((m_state < uvm_pkg::UVM_PHASE_STARTED)==1) => 1 hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=expr comment=((m_state > uvm_pkg::UVM_PHASE_READY_TO_END)==1) => 1 hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
              (m_state >  UVM_PHASE_READY_TO_END) )
%000000   begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
           `uvm_error("JMPPHIDL", { "Attempting to jump from phase \"",
              get_name(), "\" which is not currently active (current state is ",
              m_state.name(), "). The jump will not happen until the phase becomes ",
%000000       "active."})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
          end
        
        
        
          // A jump can be either forward or backwards in the phase graph.
          // If the specified phase (name) is found in the set of predecessors
          // then we are jumping backwards.  If, on the other hand, the phase is in the set
          // of successors then we are jumping forwards.  If neither, then we
          // have an error.
          //
          // If the phase is non-existant and thus we don't know where to jump
          // we have a situation where the only thing to do is to uvm_report_fatal
          // and terminate_phase.  By calling this function the intent was to
          // jump to some other phase. So, continuing in the current phase doesn't
          // make any sense.  And we don't have a valid phase to jump to.  So we're done.
        
%000000   d = m_find_predecessor(phase,0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   if (d == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     d = m_find_successor(phase,0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     if (d == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000       string msg;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000       $sformat(msg,{"phase %s is neither a predecessor or successor of ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000                     "phase %s or is non-existant, so we cannot jump to it.  ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000                     "Phase control flow is now undefined so the simulation ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000                     "must terminate"}, phase.get_name(), get_name());
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000       `uvm_fatal("PH_BADJUMP", msg);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
            end
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000       m_jump_fwd = 1;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
              `uvm_info("PH_JUMPF",$sformatf("jumping forward to phase %s", phase.get_name()),
%000000                 UVM_DEBUG);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
            end
          end
%000000   else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     m_jump_bkwd = 1;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
            `uvm_info("PH_JUMPB",$sformatf("jumping backward to phase %s", phase.get_name()),
%000000               UVM_DEBUG);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
          end
          
%000000   m_jump_phase = d;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          //m_terminate_phase(); // JAR - not needed
        
        endfunction
        
        
        // jump_all
        // --------
%000000 function void uvm_phase::jump_all(uvm_phase phase);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     `uvm_warning("NOTIMPL","uvm_phase::jump_all is not implemented and has been replaced by uvm_domain::jump_all")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // get_jump_target
        // ---------------
          
%000000 function uvm_phase uvm_phase::get_jump_target();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   return m_jump_phase;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // clear
        // -----
        // for internal graph maintenance after a forward jump
%000000 function void uvm_phase::clear(uvm_phase_state state = UVM_PHASE_DORMANT);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   m_state = state;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   m_phase_proc = null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   phase_done.clear(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // clear_successors
        // ----------------
        // for internal graph maintenance after a forward jump
        // - called only by execute_phase()
        // - depth-first traversal of the DAG, calliing clear() on each node
        // - do not clear the end phase or beyond 
%000000 function void uvm_phase::clear_successors(uvm_phase_state state = UVM_PHASE_DORMANT, 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     uvm_phase end_state=null);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000   if(this == end_state) 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000   clear(state);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   foreach(m_successors[succ]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     succ.clear_successors(state, end_state);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          end
        endfunction
        
        
        //---------------------------------
        // Implementation - Overall Control
        //---------------------------------
        // wait_for_self_and_siblings_to_drop
        // -----------------------------
        // This task loops until this phase instance and all its siblings, either
        // sync'd or sharing a common successor, have all objections dropped.
 000026 task uvm_phase::wait_for_self_and_siblings_to_drop() ;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000026   bit need_to_check_all = 1 ;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000026   uvm_root top;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000026   bit siblings[uvm_phase];
+000026  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          
 000026   top = uvm_root::get();
+000026  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          
 000026   get_predecessors_for_successors(siblings);
+000026  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
~000026   foreach (m_sync[i]) begin
+000026  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     siblings[m_sync[i]] = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          end
        
 000027   while (need_to_check_all) begin
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000027     need_to_check_all = 0 ; //if all are dropped, we won't need to do this again
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
            // wait for own objections to drop
~000027     if (phase_done.get_objection_total(top) != 0) begin 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
+000027  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000       m_state = UVM_PHASE_EXECUTING ;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000       phase_done.wait_for(UVM_ALL_DROPPED, top);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000       need_to_check_all = 1 ;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
            end
        
            // now wait for siblings to drop
~000027     foreach(siblings[sib]) begin
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000005  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000005       sib.wait_for_state(UVM_PHASE_EXECUTING, UVM_GTE); // sibling must be at least executing 
-000005  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000004       if (sib.phase_done.get_objection_total(top) != 0) begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000004  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000001         m_state = UVM_PHASE_EXECUTING ;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000001         sib.phase_done.wait_for(UVM_ALL_DROPPED, top); // sibling must drop any objection
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000001         need_to_check_all = 1 ;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
              end
            end
          end
        endtask
        
        // kill
        // ----
        
%000000 function void uvm_phase::kill();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
%000000   `uvm_info("PH_KILL", {"killing phase '", get_name(),"'"}, UVM_DEBUG);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
        
%000000   if (m_phase_proc != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
%000000     m_phase_proc.kill();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
%000000     m_phase_proc = null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
          end
        
        endfunction
        
        
        // kill_successors
        // ---------------
        
        // Using a depth-first traversal, kill all the successor phases of the
        // current phase.
%000000 function void uvm_phase::kill_successors();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   foreach (m_successors[succ])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     succ.kill_successors();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   kill();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // m_run_phases
        // ------------
        
        // This task contains the top-level process that owns all the phase
        // processes.  By hosting the phase processes here we avoid problems
        // associated with phase processes related as parents/children
%000000 task uvm_phase::m_run_phases();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   uvm_root top = uvm_root::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        
          // initiate by starting first phase in common domain
%000000   begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     uvm_phase ph = uvm_domain::get_common_domain();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000     void'(m_phase_hopper.try_put(ph));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          end
        
 000027   forever begin
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000027     uvm_phase phase;
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000027     m_phase_hopper.get(phase);
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000027     fork
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000027       begin
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
 000027         phase.execute_phase();
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
              end
            join_none
 000027     #0;  // let the process start running
+000027  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          end
        endtask
        
        
        // terminate_phase
        // ---------------
        
%000000 function void uvm_phase::m_terminate_phase();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
%000000   phase_done.clear(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        // print_termination_state
        // -----------------------
        
%000000 function void uvm_phase::m_print_termination_state();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
          `uvm_info("PH_TERMSTATE",
                    $sformatf("phase %s outstanding objections = %0d",
                    get_name(), phase_done.get_objection_total(uvm_root::get())),
%000000             UVM_DEBUG);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_phase__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_phase__Vclpkg
        endfunction
        
        
        
        

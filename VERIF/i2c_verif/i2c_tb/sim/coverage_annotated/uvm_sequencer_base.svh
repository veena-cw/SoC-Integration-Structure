//      // verilator_coverage annotation
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
        
        typedef uvm_config_db#(uvm_sequence_base) uvm_config_seq;
        typedef class uvm_sequence_request;
        
        
        //------------------------------------------------------------------------------
        //
        // CLASS: uvm_sequencer_base
        //
        // Controls the flow of sequences, which generate the stimulus (sequence item
        // transactions) that is passed on to drivers for execution.
        //
        //------------------------------------------------------------------------------
        
        class uvm_sequencer_base extends uvm_component;
        
%000000   typedef enum {SEQ_TYPE_REQ,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                        SEQ_TYPE_LOCK,
                        SEQ_TYPE_GRAB} seq_req_t;
        
          protected uvm_sequence_request arb_sequence_q[$];
        
          protected bit                 arb_completed[int];
        
          protected uvm_sequence_base   lock_list[$];
          protected uvm_sequence_base   reg_sequences[int];
          protected int                 m_sequencer_id;
          protected int                 m_lock_arb_size;  // used for waiting processes
          protected int                 m_arb_size;       // used for waiting processes
          protected int                 m_wait_for_item_sequence_id,
                                        m_wait_for_item_transaction_id;
        
%000002   local uvm_sequencer_arb_mode  m_arbitration = SEQ_ARB_FIFO;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          local static int              g_request_id;
%000001   local static int              g_sequence_id = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000001   local static int              g_sequencer_id = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
        
          // Function: new
          //
          // Creates and initializes an instance of this class using the normal
          // constructor arguments for uvm_component: name is the name of the
          // instance, and parent is the handle to the hierarchical parent.
          
          extern function new (string name, uvm_component parent);
        
        
          // Function: is_child
          //
          // Returns 1 if the child sequence is a child of the parent sequence,
          // 0 otherwise.
          //
          extern function bit is_child (uvm_sequence_base parent, uvm_sequence_base child);
        
        
          // Function: user_priority_arbitration
          //
          // When the sequencer arbitration mode is set to SEQ_ARB_USER (via the
          // <set_arbitration> method), the sequencer will call this function each
          // time that it needs to arbitrate among sequences. 
          //
          // Derived sequencers may override this method to perform a custom arbitration
          // policy. The override must return one of the entries from the
          // avail_sequences queue, which are indexes into an internal queue,
          // arb_sequence_q. The 
          //
          // The default implementation behaves like SEQ_ARB_FIFO, which returns the
          // entry at avail_sequences[0]. 
          //
          extern virtual function integer user_priority_arbitration(integer avail_sequences[$]);
        
        
          // Task: execute_item
          //
          // Executes the given transaction ~item~ directly on this sequencer. A temporary
          // parent sequence is automatically created for the ~item~.  There is no capability to
          // retrieve responses. If the driver returns responses, they will accumulate in the
          // sequencer, eventually causing response overflow unless
          // <set_response_queue_error_report_disabled> is called.
        
          extern virtual task execute_item(uvm_sequence_item item);
        
        
          // Function: start_phase_sequence
          //
          // Start the default sequence for this phase, if any.
          // The default sequence is configured via resources using
          // either a sequence instance or sequence type (object wrapper).
          // If both are used,
          // the sequence instance takes precedence. When attempting to override
          // a previous default sequence setting, you must override both
          // the instance and type (wrapper) reources, else your override may not
          // take effect.
          //
          // When setting the resource using ~set~, the 1st argument specifies the
          // context pointer, usually "this" for components or "null" when executed from
          // outside the component hierarchy (i.e. in module).  
          // The 2nd argument is the instance string, which is a path name to the
          // target sequencer, relative to the context pointer.  The path must include
          // the name of the phase with a "_phase" suffix. The 3rd argument is the
          // resource name, which is "default_sequence". The 4th argument is either
          // an object wrapper for the sequence type, or an instance of a sequence.
          //
          // Configuration by instances
          // allows pre-initialization, setting rand_mode, use of inline 
          // constraints, etc.
          //
          //| myseq_t myseq = new("myseq");
          //| myseq.randomize() with { ... };
          //| uvm_config_db #(uvm_sequence_base)::set(null, "top.agent.myseqr.main_phase",
          //|                                         "default_sequence",
          //|                                         myseq);
          //
          // Configuration by type is shorter and can be substituted via the
          // the factory.
          //
          //| uvm_config_db #(uvm_object_wrapper)::set(null, "top.agent.myseqr.main_phase",
          //|                                          "default_sequence",
          //|                                          myseq_type::type_id::get());
          //
          // The uvm_resource_db can similarly be used.
          //
          //| myseq_t myseq = new("myseq");
          //| myseq.randomize() with { ... };
          //| uvm_resource_db #(uvm_sequence_base)::set({get_full_name(), ".myseqr.main_phase",
          //|                                           "default_sequence",
          //|                                           myseq, this);
          //
          //| uvm_resource_db #(uvm_object_wrapper)::set({get_full_name(), ".myseqr.main_phase",
          //|                                            "default_sequence",
          //|                                            myseq_t::type_id::get(),
          //|                                            this );
          //
          // 
             
             
        
          extern virtual function void start_phase_sequence(uvm_phase phase);
        
          // Task: wait_for_grant
          //
          // This task issues a request for the specified sequence.  If item_priority
          // is not specified, then the current sequence priority will be used by the
          // arbiter.  If a lock_request is made, then the  sequencer will issue a lock
          // immediately before granting the sequence.  (Note that the lock may be
          // granted without the sequence being granted if is_relevant is not asserted).
          //
          // When this method returns, the sequencer has granted the sequence, and the
          // sequence must call send_request without inserting any simulation delay
          // other than delta cycles.  The driver is currently waiting for the next
          // item to be sent via the send_request call.
          
          extern virtual task wait_for_grant(uvm_sequence_base sequence_ptr,
                                             int item_priority = -1,
                                             bit lock_request = 0);
        
        
          // Task: wait_for_item_done
          //
          // A sequence may optionally call wait_for_item_done.  This task will block
          // until the driver calls item_done() or put() on a transaction issued by the
          // specified sequence.  If no transaction_id parameter is specified, then the
          // call will return the next time that the driver calls item_done() or put().
          // If a specific transaction_id is specified, then the call will only return
          // when the driver indicates that it has completed that specific item.
          //
          // Note that if a specific transaction_id has been specified, and the driver
          // has already issued an item_done or put for that transaction, then the call
          // will hang waiting for that specific transaction_id.
          //
          extern virtual task wait_for_item_done(uvm_sequence_base sequence_ptr,
                                                 int transaction_id);
        
        
          // Function: is_blocked
          //
          // Returns 1 if the sequence referred to by sequence_ptr is currently locked
          // out of the sequencer.  It will return 0 if the sequence is currently
          // allowed to issue operations.
          //
          // Note that even when a sequence is not blocked, it is possible for another
          // sequence to issue a lock before this sequence is able to issue a request
          // or lock.
          //
          extern function bit is_blocked(uvm_sequence_base sequence_ptr);
        
        
          // Function: has_lock
          //
          // Returns 1 if the sequence refered to in the parameter currently has a lock
          // on this sequencer, 0 otherwise.
          //
          // Note that even if this sequence has a lock, a child sequence may also have
          // a lock, in which case the sequence is still blocked from issueing
          // operations on the sequencer
          //
          extern function bit has_lock(uvm_sequence_base sequence_ptr);
        
        
          // Task: lock
          //
          // Requests a lock for the sequence specified by sequence_ptr.
          //
          // A lock request will be arbitrated the same as any other request. A lock is
          // granted after all earlier requests are completed and no other locks or
          // grabs are blocking this sequence.
          //
          // The lock call will return when the lock has been granted.
          //
          extern virtual task lock(uvm_sequence_base sequence_ptr);
        
        
          // Task: grab
          //
          // Requests a lock for the sequence specified by sequence_ptr. 
          //
          // A grab request is put in front of the arbitration queue. It will be
          // arbitrated before any other requests. A grab is granted when no other
          // grabs or locks are blocking this sequence.
          //
          // The grab call will return when the grab has been granted.
          //
          extern virtual task grab(uvm_sequence_base sequence_ptr);
        
        
          // Function: unlock
          //
          // Removes any locks and grabs obtained by the specified sequence_ptr.
          //
          extern virtual function void unlock(uvm_sequence_base sequence_ptr);
        
        
          // Function: ungrab
          //
          // Removes any locks and grabs obtained by the specified sequence_ptr.
          //
          extern virtual function void  ungrab(uvm_sequence_base sequence_ptr);
        
        
          // Function: stop_sequences
          //
          // Tells the sequencer to kill all sequences and child sequences currently
          // operating on the sequencer, and remove all requests, locks and responses
          // that are currently queued.  This essentially resets the sequencer to an
          // idle state.
          //
          extern virtual function void stop_sequences();
              
        
          // Function: is_grabbed
          //
          // Returns 1 if any sequence currently has a lock or grab on this sequencer,
          // 0 otherwise.
          //
          extern virtual function bit is_grabbed();
        
        
          // Function: current_grabber
          //
          // Returns a reference to the sequence that currently has a lock or grab on
          // the sequence.  If multiple hierarchical sequences have a lock, it returns
          // the child that is currently allowed to perform operations on the sequencer.
          //
          extern virtual function uvm_sequence_base current_grabber();
        
        
          // Function: has_do_available
          //
          // Returns 1 if any sequence running on this sequencer is ready to supply a
          // transaction, 0 otherwise. A sequence is ready if it is not blocked (via
          // ~grab~ or ~lock~ and ~is_relevant~ returns 1.
          //
          extern virtual function bit has_do_available();
        
         
          // Function: set_arbitration
          //
          // Specifies the arbitration mode for the sequencer. It is one of
          //
          // SEQ_ARB_FIFO          - Requests are granted in FIFO order (default)
          // SEQ_ARB_WEIGHTED      - Requests are granted randomly by weight
          // SEQ_ARB_RANDOM        - Requests are granted randomly
          // SEQ_ARB_STRICT_FIFO   - Requests at highest priority granted in fifo order
          // SEQ_ARB_STRICT_RANDOM - Requests at highest priority granted in randomly
          // SEQ_ARB_USER          - Arbitration is delegated to the user-defined 
          //                         function, user_priority_arbitration. That function
          //                         will specify the next sequence to grant.
          //
          // The default user function specifies FIFO order.
          //
          extern function void set_arbitration(SEQ_ARB_TYPE val);
        
        
          // Function: get_arbitration
          //
          // Return the current arbitration mode set for this sequencer. See
          // <set_arbitration> for a list of possible modes.
          //
          extern function SEQ_ARB_TYPE get_arbitration();
        
        
          // Task: wait_for_sequences
          //
          // Waits for a sequence to have a new item available. Uses
          // <uvm_wait_for_nba_region> to give a sequence as much time as
          // possible to deliver an item before advancing time.
        
          extern virtual task wait_for_sequences();
        
        
          // Function: send_request
          //
          // Derived classes implement this function to send a request item to the
          // sequencer, which will forward it to the driver.  If the rerandomize bit
          // is set, the item will be randomized before being sent to the driver.
          //  
          // This function may only be called after a <wait_for_grant> call.
        
          extern virtual function void send_request(uvm_sequence_base sequence_ptr,
                                                    uvm_sequence_item t,
                                                    bit rerandomize = 0);
        
        
        
          //----------------------------------------------------------------------------
          // INTERNAL METHODS - DO NOT CALL DIRECTLY, ONLY OVERLOAD IF VIRTUAL
          //----------------------------------------------------------------------------
         
          extern protected function void grant_queued_locks();
            
                
          extern protected task          m_select_sequence();
          extern protected function int  m_choose_next_request();
          extern           task          m_wait_for_arbitration_completed(int request_id);
          extern           function void m_set_arbitration_completed(int request_id);
        
        
          extern local task m_lock_req(uvm_sequence_base sequence_ptr, bit lock);
            
        
          // Task- m_unlock_req
          // 
          // Called by a sequence to request an unlock.  This
          // will remove a lock for this sequence if it exists
          
          extern function void m_unlock_req(uvm_sequence_base sequence_ptr);
        
        
          extern local function void remove_sequence_from_queues(uvm_sequence_base sequence_ptr);
          extern function void m_sequence_exiting(uvm_sequence_base sequence_ptr);
          extern function void kill_sequence(uvm_sequence_base sequence_ptr);
        
          extern virtual function void analysis_write(uvm_sequence_item t);
        
        
          extern virtual   function void   build();
          extern virtual   function void   build_phase(uvm_phase phase);
          extern           function void   do_print (uvm_printer printer);
        
        
          extern virtual   function int    m_register_sequence(uvm_sequence_base sequence_ptr);
          extern protected
                   virtual function void   m_unregister_sequence(int sequence_id);
          extern protected function
                         uvm_sequence_base m_find_sequence(int sequence_id);
        
          extern protected function void   m_update_lists();
          extern           function string convert2string();
          extern protected
                   virtual function int    m_find_number_driver_connections();
          extern protected task            m_wait_arb_not_equal();
          extern protected task            m_wait_for_available_sequence();
          extern protected function int    m_get_seq_item_priority(uvm_sequence_request seq_q_entry);
        
          int m_is_relevant_completed;
        
        
          //----------------------------------------------------------------------------
          // DEPRECATED - DO NOT USE IN NEW DESIGNS - NOT PART OF UVM STANDARD
          //----------------------------------------------------------------------------
        
        `ifndef UVM_NO_DEPRECATED
          // Variable- count
          //
          // Sets the number of items to execute.
          //
          // Supercedes the max_random_count variable for uvm_random_sequence class
          // for backward compatibility.
        
%000002   int count = -1;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
          int m_random_count;
          int m_exhaustive_count;
          int m_simple_count;
        
%000002   int unsigned max_random_count = 10;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000002   int unsigned max_random_depth = 4;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
%000002   protected string default_sequence = "uvm_random_sequence";
-000002  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          protected bit m_default_seq_set;
        
        
          string sequences[$];
          protected int sequence_ids[string];
          protected rand int seq_kind;
        
          extern function void              add_sequence(string type_name);
          extern function void              remove_sequence(string type_name);
          extern function void              set_sequences_queue(ref string sequencer_sequence_lib[$]);
          extern virtual task               start_default_sequence();
          extern function int               get_seq_kind(string type_name);
          extern function uvm_sequence_base get_sequence(int req_kind);
          extern function int               num_sequences();
          extern virtual function void      m_add_builtin_seqs(bit add_simple = 1);
          extern virtual task               run_phase(uvm_phase phase);
        `endif
        
        endclass
        
        
        
        
        //------------------------------------------------------------------------------
        // IMPLEMENTATION
        //------------------------------------------------------------------------------
        
        
        // new
        // ---
        
%000002 function uvm_sequencer_base::new (string name, uvm_component parent);
-000002  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000002   super.new(name, parent);
-000002  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000002   m_sequencer_id = g_sequencer_id++;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000002   m_lock_arb_size = -1;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // build_phase
        // -----------
        
%000002 function void uvm_sequencer_base::build_phase(uvm_phase phase);
-000002  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          // For mantis 3402, the config stuff must be done in the deprecated
          // build() phase in order for a manual build call to work. Both
          // the manual build call and the config settings in build() are
          // deprecated.
%000002   super.build_phase(phase);
-000002  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
%000002 function void uvm_sequencer_base::build();
-000002  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000002   int dummy;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000002   super.build();
-000002  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          `ifndef UVM_NO_DEPRECATED
          // deprecated parameters for sequencer. Use uvm_sequence_library class
          // for sequence library functionality.
%000002   if (get_config_string("default_sequence", default_sequence)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            `uvm_warning("UVM_DEPRECATED",{"default_sequence config parameter is deprecated and not ",
%000000                  "part of the UVM standard. See documentation for uvm_sequencer_base::start_phase_sequence()."})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     this.m_default_seq_set = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
%000002   if (get_config_int("count", count)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            `uvm_warning("UVM_DEPRECATED",{"count config parameter is deprecated and not ",
%000000                  "part of the UVM standard"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
%000002   if (get_config_int("max_random_count", max_random_count)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            `uvm_warning("UVM_DEPRECATED",{"count config parameter is deprecated and not ",
%000000                  "part of the UVM standard"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
%000002   if (get_config_int("max_random_depth", max_random_depth)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            `uvm_warning("UVM_DEPRECATED",{"max_random_depth config parameter is deprecated and not ",
                         "part of the UVM standard. Use 'uvm_sequence_library' class for ",
%000000                  "sequence library functionality"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
%000002   if (get_config_int("pound_zero_count", dummy))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            `uvm_warning("UVM_DEPRECATED",
              {"pound_zero_count was set but ignored. ",
%000000        "Sequencer/driver synchronization now uses 'uvm_wait_for_nba_region'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          `endif // UVM_NO_DEPRECATED
        endfunction
        
        
        // do_print
        // --------
        
%000000 function void uvm_sequencer_base::do_print (uvm_printer printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   super.do_print(printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   printer.print_array_header("arbitration_queue", arb_sequence_q.size());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   foreach (arb_sequence_q[i])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     printer.print_string($sformatf("[%0d]", i),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000        $sformatf("%s@seqid%0d",arb_sequence_q[i].request.name(),arb_sequence_q[i].sequence_id), "[");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   printer.print_array_footer(arb_sequence_q.size());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
%000000   printer.print_array_header("lock_queue", lock_list.size());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   foreach(lock_list[i])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     printer.print_string($sformatf("[%0d]", i),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000        $sformatf("%s@seqid%0d",lock_list[i].get_full_name(),lock_list[i].get_sequence_id()), "[");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   printer.print_array_footer(lock_list.size());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
         
        
        // m_update_lists
        // --------------
        
 000352 function void uvm_sequencer_base::m_update_lists();
+000352  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000352   m_lock_arb_size++;
+000352  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // convert2string
        // ----------------
        
%000000 function string uvm_sequencer_base::convert2string();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   string s;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          
%000000   $sformat(s, "  -- arb i/id/type: ");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   foreach (arb_sequence_q[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     $sformat(s, "%s %0d/%0d/%s ", s, i, arb_sequence_q[i].sequence_id, arb_sequence_q[i].request.name());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
%000000   $sformat(s, "%s\n -- lock_list i/id: ", s);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   foreach (lock_list[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     $sformat(s, "%s %0d/%0d",s, i, lock_list[i].get_sequence_id());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
%000000   return(s);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        
        // m_find_number_driver_connections
        // --------------------------------
        
%000000 function int  uvm_sequencer_base::m_find_number_driver_connections();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // m_register_sequence
        // -------------------
        
 000202 function int uvm_sequencer_base::m_register_sequence(uvm_sequence_base sequence_ptr);
+000202  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
~000201   if (sequence_ptr.m_get_sqr_sequence_id(m_sequencer_id, 1) > 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
+000201  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     return sequence_ptr.get_sequence_id();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          
 000202   sequence_ptr.m_set_sqr_sequence_id(m_sequencer_id, g_sequence_id++);
+000202  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000202   reg_sequences[sequence_ptr.get_sequence_id()] = sequence_ptr;
+000202  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000202   return sequence_ptr.get_sequence_id();
+000202  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // m_find_sequence
        // ---------------
        
%000000 function uvm_sequence_base uvm_sequencer_base::m_find_sequence(int sequence_id);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   uvm_sequence_base seq_ptr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   int           i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          
          // When sequence_id is -1, return the first available sequence.  This is used
          // when deleting all sequences
%000000   if (sequence_id == -1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     if (reg_sequences.first(i)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       return(reg_sequences[i]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            end
%000000     return(null);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
          
%000000   if (!reg_sequences.exists(sequence_id))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   return reg_sequences[sequence_id];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction  
        
        
        // m_unregister_sequence
        // ---------------------
        
 000201 function void uvm_sequencer_base::m_unregister_sequence(int sequence_id);
+000201  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
~000201   if (!reg_sequences.exists(sequence_id))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
+000201  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000201   reg_sequences.delete(sequence_id);
+000201  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction  
        
        
        // user_priority_arbitration
        // -------------------------
        
%000000 function integer uvm_sequencer_base::user_priority_arbitration(integer avail_sequences[$]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   return avail_sequences[0];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // grant_queued_locks
        // ------------------
        // Any lock or grab requests that are at the front of the queue will be
        // granted at the earliest possible time.  This function grants any queues
        // at the front that are not locked out
        
 000556 function void uvm_sequencer_base::grant_queued_locks();
+000556  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000556   int i, temp;
+000556  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
 000556   i = 0;
+000556  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176   while (i < arb_sequence_q.size()) begin
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
            // Check for lock requests.  Any lock request at the head
            // of the queue that is not blocked will be granted immediately.
 000176     temp = 0;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
~000176     if (i < arb_sequence_q.size()) begin
+000176  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
~000176       if (arb_sequence_q[i].request == SEQ_TYPE_LOCK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
+000176  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000          if ((arb_sequence_q[i].process_id.status == process::KILLED) ||
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000              (arb_sequence_q[i].process_id.status == process::FINISHED)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000             `uvm_error("SEQLCKZMB", $sformatf("The task responsible for requesting a lock on sequencer '%s' for sequence '%s' has been killed, to avoid a deadlock the sequence will be removed from the arbitration queues", this.get_full_name(), arb_sequence_q[i].sequence_ptr.get_full_name()))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000             remove_sequence_from_queues(arb_sequence_q[i].sequence_ptr);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000             continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                 end
                 
%000000          temp = (is_blocked(arb_sequence_q[i].sequence_ptr) == 0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
              end
            end
        
            // Grant the lock request and remove it from the queue.
            // This is a loop to handle multiple back-to-back locks.
            // Since each entry is deleted, i remains constant
%000000     while (temp) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       lock_list.push_back(arb_sequence_q[i].sequence_ptr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       m_set_arbitration_completed(arb_sequence_q[i].request_id);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       arb_sequence_q.delete(i);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       m_update_lists();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
%000000       temp = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       if (i < arb_sequence_q.size()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000         if (arb_sequence_q[i].request == SEQ_TYPE_LOCK) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000           temp = is_blocked(arb_sequence_q[i].sequence_ptr) == 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                end
              end
            end
        
 000176     i++;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
        
        endfunction
        
          
        // m_select_sequence
        // -----------------
        
 000176 task uvm_sequencer_base::m_select_sequence();
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176    int selected_sequence;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
            // Select a sequence
 000202     do begin
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
+000202  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000202       wait_for_sequences();
+000202  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000202       selected_sequence = m_choose_next_request();
+000202  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176       if (selected_sequence == -1) begin
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
+000176  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000026         m_wait_for_available_sequence();
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
              end
 000202     end while (selected_sequence == -1);
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
+000202  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            // issue grant
~000176     if (selected_sequence >= 0) begin
+000176  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176       m_set_arbitration_completed(arb_sequence_q[selected_sequence].request_id);
+000176  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176       arb_sequence_q.delete(selected_sequence);
+000176  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176       m_update_lists();
+000176  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            end
        endtask
              
        
        // m_choose_next_request
        // ---------------------
        // When a driver requests an operation, this function must find the next
        // available, unlocked, relevant sequence.
        //
        // This function returns -1 if no sequences are available or the entry into
        // arb_sequence_q for the chosen sequence
        
 000204 function int uvm_sequencer_base::m_choose_next_request();
+000204  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000204   int i, temp;
+000204  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000204   int avail_sequence_count;
+000204  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000204   int sum_priority_val;
+000204  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000204   integer avail_sequences[$];
+000204  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000204   integer highest_sequences[$];
+000204  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000204   int highest_pri;
+000204  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000204   string  s;
+000204  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
 000204   avail_sequence_count = 0;
+000204  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
 000204   grant_queued_locks();
+000204  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
 000204   i = 0;
+000204  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   while (i < arb_sequence_q.size()) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
~000176      if ((arb_sequence_q[i].process_id.status == process::KILLED) ||
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
+000176  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000          (arb_sequence_q[i].process_id.status == process::FINISHED)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000         `uvm_error("SEQREQZMB", $sformatf("The task responsible for requesting a wait_for_grant on sequencer '%s' for sequence '%s' has been killed, to avoid a deadlock the sequence will be removed from the arbitration queues", this.get_full_name(), arb_sequence_q[i].sequence_ptr.get_full_name()))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000          remove_sequence_from_queues(arb_sequence_q[i].sequence_ptr);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000          continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
             end
        
%000000     if (i < arb_sequence_q.size())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       if (arb_sequence_q[i].request == SEQ_TYPE_REQ)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000         if (is_blocked(arb_sequence_q[i].sequence_ptr) == 0)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000           if (arb_sequence_q[i].sequence_ptr.is_relevant() == 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000             if (m_arbitration == SEQ_ARB_FIFO) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000               return i;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                    end
%000000             else avail_sequences.push_back(i);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                  end
        
%000000     i++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
        
          // Return immediately if there are 0 or 1 available sequences
%000000   if (m_arbitration == SEQ_ARB_FIFO) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     return -1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
%000000   if (avail_sequences.size() < 1)  begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     return -1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
          
%000000   if (avail_sequences.size() == 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     return avail_sequences[0];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
          
          // If any locks are in place, then the available queue must
          // be checked to see if a lock prevents any sequence from proceeding
%000000   if (lock_list.size() > 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     for (i = 0; i < avail_sequences.size(); i++) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       if (is_blocked(arb_sequence_q[avail_sequences[i]].sequence_ptr) != 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000         avail_sequences.delete(i);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000         i--;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
              end
            end
%000000     if (avail_sequences.size() < 1)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       return -1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     if (avail_sequences.size() == 1)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       return avail_sequences[0];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
        
          //  Weighted Priority Distribution
          // Pick an available sequence based on weighted priorities of available sequences
%000000   if (m_arbitration == SEQ_ARB_WEIGHTED) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     sum_priority_val = 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     for (i = 0; i < avail_sequences.size(); i++) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       sum_priority_val += m_get_seq_item_priority(arb_sequence_q[avail_sequences[i]]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            end
            
%000000     temp = $urandom_range(sum_priority_val-1, 0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
%000000     sum_priority_val = 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     for (i = 0; i < avail_sequences.size(); i++) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       if ((m_get_seq_item_priority(arb_sequence_q[avail_sequences[i]]) + 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000            sum_priority_val) > temp) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000         return avail_sequences[i];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
              end
%000000       sum_priority_val += m_get_seq_item_priority(arb_sequence_q[avail_sequences[i]]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            end
%000000     uvm_report_fatal("Sequencer", "UVM Internal error in weighted arbitration code", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
          
          //  Random Distribution
%000000   if (m_arbitration == SEQ_ARB_RANDOM) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     i = $urandom_range(avail_sequences.size()-1, 0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     return avail_sequences[i];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
        
          //  Strict Fifo
~000204   if ((m_arbitration == SEQ_ARB_STRICT_FIFO) || m_arbitration == SEQ_ARB_STRICT_RANDOM) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
+000204  point: type=expr comment=((m_arbitration == uvm_pkg::SEQ_ARB_STRICT_FIFO)==0 && (m_arbitration == uvm_pkg::SEQ_ARB_STRICT_RANDOM)==0) => 0 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=expr comment=((m_arbitration == uvm_pkg::SEQ_ARB_STRICT_FIFO)==1) => 1 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=expr comment=((m_arbitration == uvm_pkg::SEQ_ARB_STRICT_RANDOM)==1) => 1 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     highest_pri = 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            // Build a list of sequences at the highest priority
%000000     for (i = 0; i < avail_sequences.size(); i++) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       if (m_get_seq_item_priority(arb_sequence_q[avail_sequences[i]]) > highest_pri) begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                // New highest priority, so start new list
%000000         highest_sequences.delete();
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000         highest_sequences.push_back(avail_sequences[i]);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000         highest_pri = m_get_seq_item_priority(arb_sequence_q[avail_sequences[i]]);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_sequencer_base__Vclpkg
              end
%000000       else if (m_get_seq_item_priority(arb_sequence_q[avail_sequences[i]]) == highest_pri) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000         highest_sequences.push_back(avail_sequences[i]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
              end
            end
        
            // Now choose one based on arbitration type
%000000     if (m_arbitration == SEQ_ARB_STRICT_FIFO) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       return(highest_sequences[0]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            end
            
%000000     i = $urandom_range(highest_sequences.size()-1, 0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     return highest_sequences[i];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
        
%000000   if (m_arbitration == SEQ_ARB_USER) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     i = user_priority_arbitration( avail_sequences);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
            // Check that the returned sequence is in the list of available sequences.  Failure to
            // use an available sequence will cause highly unpredictable results.
%000000     highest_sequences = avail_sequences.find with (item == i);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     if (highest_sequences.size() == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       uvm_report_fatal("Sequencer",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000           $sformatf("Error in User arbitration, sequence %0d not available\n%s",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000                     i, convert2string()), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            end
%000000     return(i);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
            
 000204   uvm_report_fatal("Sequencer", "Internal error: Failed to choose sequence", UVM_NONE);
+000204  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
        endfunction
        
        
        // m_wait_arb_not_equal
        // --------------------
        
 000026 task uvm_sequencer_base::m_wait_arb_not_equal();
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000026   wait (m_arb_size != m_lock_arb_size);
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endtask
        
        
        // m_wait_for_available_sequence
        // -----------------------------
        
 000026 task uvm_sequencer_base::m_wait_for_available_sequence();
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000026   int i;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000026   int is_relevant_entries[$];
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
          // This routine will wait for a change in the request list, or for
          // wait_for_relevant to return on any non-relevant, non-blocked sequence
 000026   m_arb_size = m_lock_arb_size;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
~000026   for (i = 0; i < arb_sequence_q.size(); i++) begin
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     if (arb_sequence_q[i].request == SEQ_TYPE_REQ) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       if (is_blocked(arb_sequence_q[i].sequence_ptr) == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000         if (arb_sequence_q[i].sequence_ptr.is_relevant() == 0) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000           is_relevant_entries.push_back(i);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                end
              end
            end
          end
        
          // Typical path - don't need fork if all queued entries are relevant
%000000   if (is_relevant_entries.size() == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     m_wait_arb_not_equal();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
        
 000026   fork  // isolate inner fork block for disabling
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000026     begin
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000026       fork
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000026         begin
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000026           fork
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000026               begin
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                        // One path in fork is for any wait_for_relevant to return
 000026                 m_is_relevant_completed = 0;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                        
~000026                 for(i = 0; i < is_relevant_entries.size(); i++) begin
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000                 fork
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000                     automatic int k = i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                            
%000000                   begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000                     arb_sequence_q[is_relevant_entries[k]].sequence_ptr.wait_for_relevant();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000                       m_is_relevant_completed = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                          end
                        join_none
                          
                        end
 000026                 wait (m_is_relevant_completed > 0);
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                      end
                      
                    // The other path in the fork is for any queue entry to change
 000026             begin
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000026               m_wait_arb_not_equal();
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                    end
                  join_any
                end
              join_any
 000026       disable fork;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            end
          join
        endtask
        
        
        // m_get_seq_item_priority
        // -----------------------
        
%000000 function int uvm_sequencer_base::m_get_seq_item_priority(uvm_sequence_request seq_q_entry);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          // If the priority was set on the item, then that is used
%000000   if (seq_q_entry.item_priority != -1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     if (seq_q_entry.item_priority <= 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       uvm_report_fatal("SEQITEMPRI",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000                     $sformatf("Sequence item from %s has illegal priority: %0d",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000                             seq_q_entry.sequence_ptr.get_full_name(),
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000                             seq_q_entry.item_priority), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            end
%000000     return seq_q_entry.item_priority;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
          // Otherwise, use the priority of the calling sequence
%000000   if (seq_q_entry.sequence_ptr.get_priority() < 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     uvm_report_fatal("SEQDEFPRI",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000                     $sformatf("Sequence %s has illegal priority: %0d",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000                             seq_q_entry.sequence_ptr.get_full_name(),
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000                             seq_q_entry.sequence_ptr.get_priority()), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
%000000   return seq_q_entry.sequence_ptr.get_priority();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // m_wait_for_arbitration_completed
        // --------------------------------
        
 000176 task uvm_sequencer_base::m_wait_for_arbitration_completed(int request_id);
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176   int lock_arb_size;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          
          // Search the list of arb_wait_q, see if this item is done
 000176   forever 
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176     begin
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176       lock_arb_size  = m_lock_arb_size;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
              
~000176       if (arb_completed.exists(request_id)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
+000176  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000         arb_completed.delete(request_id);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
              end
 000176       wait (lock_arb_size != m_lock_arb_size);
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            end
        endtask
        
        
        // m_set_arbitration_completed
        // ---------------------------
        
 000176 function void uvm_sequencer_base::m_set_arbitration_completed(int request_id);
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176   arb_completed[request_id] = 1;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // is_child
        // --------
        
%000000 function bit uvm_sequencer_base::is_child (uvm_sequence_base parent,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                                                   uvm_sequence_base child);
%000000   uvm_sequence_base child_parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
%000000   if (child == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     uvm_report_fatal("uvm_sequencer", "is_child passed null child", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
        
%000000   if (parent == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     uvm_report_fatal("uvm_sequencer", "is_child passed null parent", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
        
%000000   child_parent = child.get_parent_sequence();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   while (child_parent != null) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     if (child_parent.get_inst_id() == parent.get_inst_id()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            end
%000000     child_parent = child_parent.get_parent_sequence();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
%000000   return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
         
        // execute_item
        // ------------
        
%000000 task uvm_sequencer_base::execute_item(uvm_sequence_item item);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   uvm_sequence_base seq;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          
%000000   seq = new();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   item.set_sequencer(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   item.set_parent_sequence(seq);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   seq.set_sequencer(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   seq.start_item(item);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   seq.finish_item(item);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endtask
        
        
        // wait_for_grant
        // --------------
        
 000176 task uvm_sequencer_base::wait_for_grant(uvm_sequence_base sequence_ptr,
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                                                int item_priority = -1,
                                                bit lock_request = 0);
 000176   uvm_sequence_request req_s;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176   int my_seq_id;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
~000176   if (sequence_ptr == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
+000176  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     uvm_report_fatal("uvm_sequencer",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000        "wait_for_grant passed null sequence_ptr", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
 000176   my_seq_id = m_register_sequence(sequence_ptr);
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          
          // If lock_request is asserted, then issue a lock.  Don't wait for the response, since
          // there is a request immediately following the lock request
~000176   if (lock_request == 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
+000176  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     req_s = new();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     req_s.grant = 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     req_s.sequence_id = my_seq_id;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     req_s.request = SEQ_TYPE_LOCK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     req_s.sequence_ptr = sequence_ptr;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     req_s.request_id = g_request_id++;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     req_s.process_id = process::self();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     arb_sequence_q.push_back(req_s);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
              
          // Push the request onto the queue
 000176   req_s = new();
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176   req_s.grant = 0;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176   req_s.request = SEQ_TYPE_REQ;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176   req_s.sequence_id = my_seq_id;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176   req_s.item_priority = item_priority;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176   req_s.sequence_ptr = sequence_ptr;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176   req_s.request_id = g_request_id++;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176   req_s.process_id = process::self();
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176   arb_sequence_q.push_back(req_s);
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176   m_update_lists();
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
          // Wait until this entry is granted
          // Continue to point to the element, since location in queue will change
 000176   m_wait_for_arbitration_completed(req_s.request_id);
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
          // The wait_for_grant_semaphore is used only to check that send_request
          // is only called after wait_for_grant.  This is not a complete check, since
          // requests might be done in parallel, but it will catch basic errors
 000176   req_s.sequence_ptr.m_wait_for_grant_semaphore++;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
        endtask
        
        
        // wait_for_item_done
        // ------------------
        
 000176 task uvm_sequencer_base::wait_for_item_done(uvm_sequence_base sequence_ptr,
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                                                    int transaction_id);
 000176   int sequence_id;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
 000176   sequence_id = sequence_ptr.m_get_sqr_sequence_id(m_sequencer_id, 1);
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176   m_wait_for_item_sequence_id = -1;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176   m_wait_for_item_transaction_id = -1;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
~000176   if (transaction_id == -1)
+000176  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000176     wait (m_wait_for_item_sequence_id == sequence_id);
+000176  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          else
%000000     wait ((m_wait_for_item_sequence_id == sequence_id &&
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=expr comment=((m_wait_for_item_sequence_id == sequence_id)==0) => 0 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=expr comment=((m_wait_for_item_sequence_id == sequence_id)==1 && (m_wait_for_item_transaction_id == transaction_id)==1) => 1 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=expr comment=((m_wait_for_item_transaction_id == transaction_id)==0) => 0 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000            m_wait_for_item_transaction_id == transaction_id));
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endtask
        
        
        // is_blocked
        // ----------
        
 000176 function bit uvm_sequencer_base::is_blocked(uvm_sequence_base sequence_ptr);
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
~000176   if (sequence_ptr == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
+000176  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     uvm_report_fatal("uvm_sequence_controller",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000                      "is_blocked passed null sequence_ptr", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
~000176     foreach (lock_list[i]) begin
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       if ((lock_list[i].get_inst_id() != 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                   sequence_ptr.get_inst_id()) &&
%000000           (is_child(lock_list[i], sequence_ptr) == 0)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000         return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
              end
            end 
 000176     return 0;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // has_lock
        // --------
        
%000000 function bit uvm_sequencer_base::has_lock(uvm_sequence_base sequence_ptr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   int my_seq_id;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          
%000000   if (sequence_ptr == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     uvm_report_fatal("uvm_sequence_controller",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000                      "has_lock passed null sequence_ptr", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   my_seq_id = m_register_sequence(sequence_ptr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     foreach (lock_list[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       if (lock_list[i].get_inst_id() == sequence_ptr.get_inst_id()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000         return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
              end
            end 
%000000   return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // m_lock_req
        // ----------
        // Internal method. Called by a sequence to request a lock.
        // Puts the lock request onto the arbitration queue.
        
%000000 task uvm_sequencer_base::m_lock_req(uvm_sequence_base sequence_ptr, bit lock);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   int my_seq_id;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   uvm_sequence_request new_req;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          
%000000   if (sequence_ptr == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     uvm_report_fatal("uvm_sequence_controller",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000                      "lock_req passed null sequence_ptr", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
%000000   my_seq_id = m_register_sequence(sequence_ptr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   new_req = new();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   new_req.grant = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   new_req.sequence_id = sequence_ptr.get_sequence_id();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   new_req.request = SEQ_TYPE_LOCK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   new_req.sequence_ptr = sequence_ptr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   new_req.request_id = g_request_id++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   new_req.process_id = process::self();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          
%000000   if (lock == 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            // Locks are arbitrated just like all other requests
%000000     arb_sequence_q.push_back(new_req);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   end else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            // Grabs are not arbitrated - they go to the front
            // TODO:
            // Missing: grabs get arbitrated behind other grabs
%000000     arb_sequence_q.push_front(new_req);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     m_update_lists();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
        
          // If this lock can be granted immediately, then do so.
%000000   grant_queued_locks();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          
%000000   m_wait_for_arbitration_completed(new_req.request_id);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endtask
          
        
        // m_unlock_req
        // ------------
        // Called by a sequence to request an unlock.  This
        // will remove a lock for this sequence if it exists
        
%000000 function void uvm_sequencer_base::m_unlock_req(uvm_sequence_base sequence_ptr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   int my_seq_id;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          
%000000   if (sequence_ptr == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     uvm_report_fatal("uvm_sequencer",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000                      "m_unlock_req passed null sequence_ptr", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
%000000   my_seq_id = m_register_sequence(sequence_ptr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
%000000   foreach (lock_list[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     if (lock_list[i].get_inst_id() == sequence_ptr.get_inst_id()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       lock_list.delete(i);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       m_update_lists();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            end
          end
%000000   uvm_report_warning("SQRUNL", 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000            {"Sequence '", sequence_ptr.get_full_name(),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000             "' called ungrab / unlock, but didn't have lock"}, UVM_NONE);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // lock
        // ----
        
%000000 task uvm_sequencer_base::lock(uvm_sequence_base sequence_ptr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   m_lock_req(sequence_ptr, 1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endtask
        
        
        // grab
        // ----
        
%000000 task uvm_sequencer_base::grab(uvm_sequence_base sequence_ptr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   m_lock_req(sequence_ptr, 0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endtask
        
        
        // unlock
        // ------
        
%000000 function void uvm_sequencer_base::unlock(uvm_sequence_base sequence_ptr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   m_unlock_req(sequence_ptr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // ungrab
        // ------
        
%000000 function void  uvm_sequencer_base::ungrab(uvm_sequence_base sequence_ptr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   m_unlock_req(sequence_ptr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // remove_sequence_from_queues
        // ---------------------------
        
 000201 function void uvm_sequencer_base::remove_sequence_from_queues(
+000201  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                                               uvm_sequence_base sequence_ptr);
 000201   int i;
+000201  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000201   int seq_id;
+000201  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          
 000201   seq_id = sequence_ptr.m_get_sqr_sequence_id(m_sequencer_id, 0);
+000201  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          
          // Remove all queued items for this sequence and any child sequences
 000201   i = 0;
+000201  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   do 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000201     begin
+000201  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
~000201       if (arb_sequence_q.size() > i) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
+000201  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000         if ((arb_sequence_q[i].sequence_id == seq_id) ||
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000             (is_child(sequence_ptr, arb_sequence_q[i].sequence_ptr))) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000           if (sequence_ptr.get_sequence_state() == FINISHED)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000             `uvm_error("SEQFINERR", $sformatf("Parent sequence '%s' should not finish before all items from itself and items from descendent sequences are processed.  The item request from the sequence '%s' is being removed.", sequence_ptr.get_full_name(), arb_sequence_q[i].sequence_ptr.get_full_name()))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000           arb_sequence_q.delete(i);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000           m_update_lists();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                end
%000000         else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000           i++;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                end
              end
            end
~000201   while (i < arb_sequence_q.size());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
+000201  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          
          // remove locks for this sequence, and any child sequences 
 000201   i = 0;
+000201  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   do
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000201     begin
+000201  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
~000201       if (lock_list.size() > i) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
+000201  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000         if ((lock_list[i].get_inst_id() == sequence_ptr.get_inst_id()) ||
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000             (is_child(sequence_ptr, lock_list[i]))) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000           if (sequence_ptr.get_sequence_state() == FINISHED)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000             `uvm_error("SEQFINERR", $sformatf("Parent sequence '%s' should not finish before locks from itself and descedent sequences are removed.  The lock held by the child sequence '%s' is being removed.",sequence_ptr.get_full_name(), lock_list[i].get_full_name()))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000           lock_list.delete(i);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000           m_update_lists();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                end
%000000         else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000           i++;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                end
              end
            end
~000201   while (i < lock_list.size());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
+000201  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          
          // Unregister the sequence_id, so that any returning data is dropped
 000201   m_unregister_sequence(sequence_ptr.m_get_sqr_sequence_id(m_sequencer_id, 1));
+000201  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // stop_sequences
        // --------------
        
%000000 function void uvm_sequencer_base::stop_sequences();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   uvm_sequence_base seq_ptr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          
%000000   seq_ptr = m_find_sequence(-1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   while (seq_ptr != null)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       kill_sequence(seq_ptr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       seq_ptr = m_find_sequence(-1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            end
        endfunction
            
        
        // m_sequence_exiting
        // ------------------
        
 000201 function void uvm_sequencer_base::m_sequence_exiting(uvm_sequence_base sequence_ptr);
+000201  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000201   remove_sequence_from_queues(sequence_ptr);
+000201  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // kill_sequence 
        // -------------
        
%000000 function void uvm_sequencer_base::kill_sequence(uvm_sequence_base sequence_ptr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   remove_sequence_from_queues(sequence_ptr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   sequence_ptr.m_kill();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // is_grabbed
        // ----------
        
%000000 function bit uvm_sequencer_base::is_grabbed();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   return (lock_list.size() != 0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // current_grabber
        // ---------------
        
%000000 function uvm_sequence_base uvm_sequencer_base::current_grabber();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   if (lock_list.size() == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
%000000   return lock_list[lock_list.size()-1];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // has_do_available
        // ----------------
        
%000000 function bit uvm_sequencer_base::has_do_available();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          
%000000   foreach (arb_sequence_q[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     if ((arb_sequence_q[i].sequence_ptr.is_relevant() == 1) &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000         (is_blocked(arb_sequence_q[i].sequence_ptr) == 0)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            end
          end
%000000   return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
         
        // set_arbitration
        // ---------------
        
%000000 function void uvm_sequencer_base::set_arbitration(SEQ_ARB_TYPE val);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   m_arbitration = val;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // get_arbitration
        // ---------------
        
%000000 function SEQ_ARB_TYPE uvm_sequencer_base::get_arbitration();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   return m_arbitration;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // analysis_write
        // --------------
        
%000000 function void uvm_sequencer_base::analysis_write(uvm_sequence_item t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   return;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // wait_for_sequences
        // ------------------
        
 000204 task uvm_sequencer_base::wait_for_sequences();
+000204  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000204   uvm_wait_for_nba_region();
+000204  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endtask
        
        
        
        // send_request
        // ------------
        
%000000 function void uvm_sequencer_base::send_request(uvm_sequence_base sequence_ptr,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                                                       uvm_sequence_item t,
                                                       bit rerandomize = 0);
%000000   return;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // start_phase_sequence
        // --------------------
        
 000026 function void uvm_sequencer_base::start_phase_sequence(uvm_phase phase);
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000026     uvm_object_wrapper wrapper;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000026     uvm_sequence_base  seq;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000026     uvm_factory f = uvm_factory::get();
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
            // default sequence instance?
%000000     if (!uvm_config_db #(uvm_sequence_base)::get(
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000           this, {phase.get_name(),"_phase"}, "default_sequence", seq) || seq == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
              // default sequence object wrapper?
%000000       if (uvm_config_db #(uvm_object_wrapper)::get(
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000                this, {phase.get_name(),"_phase"}, "default_sequence", wrapper) && wrapper != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                // use wrapper is a sequence type        
%000000         if(!$cast(seq , f.create_object_by_type(
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000               wrapper, get_full_name(), wrapper.get_type_name()))) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                  `uvm_warning("PHASESEQ", {"Default sequence for phase '",
%000000                        phase.get_name(),"' %s is not a sequence type"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000           return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                end
              end
%000000       else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                `uvm_info("PHASESEQ", {"No default phase sequence for phase '",
~000026                                phase.get_name(),"'"}, UVM_FULL)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000         return;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
              end
            end
        
            `uvm_info("PHASESEQ", {"Starting default sequence '",
~000026        seq.get_type_name(),"' for phase '", phase.get_name(),"'"}, UVM_FULL)
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
 000026     seq.print_sequence_info = 1;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000026     seq.set_sequencer(this);
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000026     seq.reseed();
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000026     seq.starting_phase = phase;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
%000000     if (!seq.do_not_randomize && !seq.randomize()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
              `uvm_warning("STRDEFSEQ", {"Randomization failed for default sequence '",
%000000        seq.get_type_name(),"' for phase '", phase.get_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000        return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            end
        
 000026     fork begin
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
              // reseed this process for random stability
 000026       process proc = process::self();
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000026       proc.srandom(uvm_create_random_seed(seq.get_type_name(), this.get_full_name()));
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000026       seq.start(this);
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            end
            join_none
        
        endfunction
        
        
        
        //----------------------------------------------------------------------------
        //
        //                              *** DEPRECATED ***
        //
        //                        - DO NOT USE IN NEW DESIGNS -
        //
        //                        - NOT PART OF UVM STANDARD -
        //----------------------------------------------------------------------------
        
        `ifndef UVM_NO_DEPRECATED
        
        // add_sequence
        // ------------
        //
        // Adds a sequence of type specified in the type_name paramter to the
        // sequencer's sequence library.
        
%000000 function void uvm_sequencer_base::add_sequence(string type_name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
          `uvm_warning("UVM_DEPRECATED",{"Registering sequence '",type_name,
%000000      "' with sequencer '",get_full_name(),"' is deprecated. "})
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
          //assign typename key to an int based on size
          //used with get_seq_kind to return an int key to match a type name
%000000   if (!sequence_ids.exists(type_name)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=expr comment=(sequence_ids.exists(type_name)==0) => 1 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=expr comment=(sequence_ids.exists(type_name)==1) => 0 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     sequence_ids[type_name] = sequences.size();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            //used w/ get_sequence to return a uvm_sequence factory object that 
            //matches an int id
%000000     sequences.push_back(type_name);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
        endfunction
        
        
        // remove_sequence
        // ---------------
        
%000000 function void uvm_sequencer_base::remove_sequence(string type_name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   sequence_ids.delete(type_name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   for (int i = 0; i < this.sequences.size(); i++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     if (this.sequences[i] == type_name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       this.sequences.delete(i);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
        endfunction
        
        
        // set_sequences_queue
        // -------------------
        
%000000 function void uvm_sequencer_base::set_sequences_queue(
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                                            ref string sequencer_sequence_lib[$]);
          
%000000   for(int j=0; j < sequencer_sequence_lib.size(); j++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     sequence_ids[sequencer_sequence_lib[j]] = sequences.size();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     this.sequences.push_back(sequencer_sequence_lib[j]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
        endfunction
        
        
        // start_default_sequence
        // ----------------------
        // Called when the run phase begins, this method starts the default sequence,
        // as specified by the default_sequence member variable.
        //
        
%000002 task uvm_sequencer_base::start_default_sequence();
-000002  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000002   uvm_sequence_base m_seq ;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
          // Default sequence was cleared, or the count is zero
%000002   if (default_sequence == "" || count == 0 ||
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=expr comment=((count == 32'sh0)==1) => 1 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=expr comment=((default_sequence == %22%22)==0 && (count == 32'sh0)==0 && (default_sequence == %22uvm_random_sequence%22)==0) => 0 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=expr comment=((default_sequence == %22%22)==0 && (count == 32'sh0)==0 && (sequences.size() == 32'sh0)==0) => 0 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=expr comment=((default_sequence == %22%22)==1) => 1 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000002  point: type=expr comment=((sequences.size() == 32'sh0)==1 && (default_sequence == %22uvm_random_sequence%22)==1) => 1 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                (sequences.size() == 0 && default_sequence == "uvm_random_sequence"))
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
          // Have run-time phases and no user setting of default sequence
%000000   if(this.m_default_seq_set == 0 && m_domain != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     default_sequence = "";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            `uvm_info("NODEFSEQ", {"The \"default_sequence\" has not been set. ",
               "Since this sequencer has a runtime phase schedule, the ",
%000000        "uvm_random_sequence is not being started for the run phase."}, UVM_HIGH)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
        
          // Have a user setting for both old and new default sequence mechanisms
%000002   if (this.m_default_seq_set == 1 &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000002  point: type=expr comment=((m_default_seq_set == 32'sh1)==0) => 0 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=expr comment=((m_default_seq_set == 32'sh1)==1 && exists(this%22run_phase%22%22default_sequence%221'h0)==1) => 1 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000002  point: type=expr comment=(exists(this%22run_phase%22%22default_sequence%221'h0)==0) => 0 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
             (uvm_config_db #(uvm_sequence_base)::exists(this, "run_phase", "default_sequence", 0) ||
              uvm_config_db #(uvm_object_wrapper)::exists(this, "run_phase", "default_sequence", 0)))
%000000   begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            `uvm_warning("MULDEFSEQ", {"A default phase sequence has been set via the ",
               "\"<phase_name>.default_sequence\" configuration option.",
%000000        "The deprecated \"default_sequence\" configuration option is ignored."})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
        
          // no user sequences to choose from
%000000   if(sequences.size() == 2 &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000002      sequences[0] == "uvm_random_sequence" &&
-000002  point: type=expr comment=((sequences.at(32'sh0) == %22uvm_random_sequence%22)==0) => 0 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000002  point: type=expr comment=((sequences.at(32'sh1) == %22uvm_exhaustive_sequence%22)==0) => 0 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000002  point: type=expr comment=((sequences.size() == 32'sh2)==0) => 0 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=expr comment=((sequences.size() == 32'sh2)==1 && (sequences.at(32'sh0) == %22uvm_random_sequence%22)==1 && (sequences.at(32'sh1) == %22uvm_exhaustive_sequence%22)==1) => 1 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000      sequences[1] == "uvm_exhaustive_sequence") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     uvm_report_warning("NOUSERSEQ", {"No user sequence available. ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000                        "Not starting the (deprecated) default sequence."}, UVM_HIGH);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
          
          `uvm_warning("UVM_DEPRECATED",{"Starting (deprecated) default sequence '",default_sequence,
             "' on sequencer '",get_full_name(),
             "'. See documentation for uvm_sequencer_base::start_phase_sequence() for information on ",
%000002      "starting default sequences in UVM."})
-000002  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
%000000   if(sequences.size() != 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            //create the sequence object
%000000     if (!$cast(m_seq, factory.create_object_by_name(default_sequence, 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                                                    get_full_name(), default_sequence))) 
%000000       begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000         uvm_report_fatal("FCTSEQ",{"Default sequence set to invalid value : ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000                                    default_sequence}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
              end
        
%000000     if (m_seq == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       uvm_report_fatal("STRDEFSEQ", "Null m_sequencer reference", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            end
%000000     m_seq.starting_phase = run_ph;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     m_seq.print_sequence_info = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     m_seq.set_parent_sequence(null);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     m_seq.set_sequencer(this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     m_seq.reseed();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     if (!m_seq.randomize()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       uvm_report_warning("STRDEFSEQ", "Failed to randomize sequence");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            end
%000000     m_seq.start(this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
        endtask
        
        
        // get_seq_kind
        // ------------
        // Returns an int seq_kind correlating to the sequence of type type_name
        // in the sequencer¿s sequence library. If the named sequence is not
        // registered a SEQNF warning is issued and -1 is returned.
        
%000000 function int uvm_sequencer_base::get_seq_kind(string type_name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
%000000   `uvm_warning("UVM_DEPRECATED", $sformatf("%m is deprecated"))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
%000000   if (sequence_ids.exists(type_name))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     return sequence_ids[type_name];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
          `uvm_warning("SEQNF", 
%000000     {"Sequence type_name '",type_name,"' not registered with this sequencer."})
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
            
%000000   return -1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // get_sequence
        // ------------
        // Returns a reference to a sequence specified by the seq_kind int.
        // The seq_kind int may be obtained using the get_seq_kind() method.
        
%000000 function uvm_sequence_base uvm_sequencer_base::get_sequence(int req_kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
%000000   uvm_factory factory = uvm_factory::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   uvm_sequence_base m_seq ;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   string m_seq_type;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
%000000   `uvm_warning("UVM_DEPRECATED", $sformatf("%m is deprecated"))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
%000000   if (req_kind < 0 || req_kind >= sequences.size()) begin
-000000  point: type=expr comment=((req_kind < 32'sh0)==0 && (req_kind >= sequences.size())==0) => 0 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=expr comment=((req_kind < 32'sh0)==1) => 1 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=expr comment=((req_kind >= sequences.size())==1) => 1 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     uvm_report_error("SEQRNG", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       $sformatf("Kind arg '%0d' out of range. Need 0-%0d", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       req_kind, sequences.size()-1));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
        
%000000   m_seq_type = sequences[req_kind];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   if (!$cast(m_seq, factory.create_object_by_name(m_seq_type,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
                                                  get_full_name(),
                                                  m_seq_type))) 
%000000   begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       uvm_report_fatal("FCTSEQ", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000         $sformatf("Factory can not produce a sequence of type %0s.",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000         m_seq_type), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
        
%000000   m_seq.print_sequence_info = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   m_seq.set_sequencer (this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   return m_seq;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        
        endfunction
        
        
        // num_sequences
        // -------------
        
 000050 function int uvm_sequencer_base::num_sequences();
+000050  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
 000050   return sequences.size();
+000050  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endfunction
        
        
        // m_add_builtin_seqs
        // ------------------
        
%000000 function void uvm_sequencer_base::m_add_builtin_seqs(bit add_simple=1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   if(!sequence_ids.exists("uvm_random_sequence"))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=expr comment=(sequence_ids.exists(%22uvm_random_sequence%22)==0) => 1 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=expr comment=(sequence_ids.exists(%22uvm_random_sequence%22)==1) => 0 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     add_sequence("uvm_random_sequence");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   if(!sequence_ids.exists("uvm_exhaustive_sequence"))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=expr comment=(sequence_ids.exists(%22uvm_exhaustive_sequence%22)==0) => 1 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=expr comment=(sequence_ids.exists(%22uvm_exhaustive_sequence%22)==1) => 0 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     add_sequence("uvm_exhaustive_sequence");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000   if(add_simple == 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000     if(!sequence_ids.exists("uvm_simple_sequence"))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=expr comment=(sequence_ids.exists(%22uvm_simple_sequence%22)==0) => 1 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
-000000  point: type=expr comment=(sequence_ids.exists(%22uvm_simple_sequence%22)==1) => 0 hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000000       add_sequence("uvm_simple_sequence");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_base__Vclpkg
          end
        endfunction
        
        
        // run_phase
        // ---------
        
%000002 task uvm_sequencer_base::run_phase(uvm_phase phase);
-000002  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000002   super.run_phase(phase);
-000002  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
%000002   start_default_sequence();
-000002  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_base__Vclpkg
        endtask
        
        
        `endif // UVM_NO_DEPRECATED
        
        //------------------------------------------------------------------------------
        //
        // Class- uvm_sequence_request
        //
        //------------------------------------------------------------------------------
        
 000176 class uvm_sequence_request;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_request__Vclpkg
          bit        grant;
          int        sequence_id;
          int        request_id;
          int        item_priority;
          process    process_id;
          uvm_sequencer_base::seq_req_t  request;
          uvm_sequence_base sequence_ptr;
        endclass
        
        

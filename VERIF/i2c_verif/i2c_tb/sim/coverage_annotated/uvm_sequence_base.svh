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
        
        
        //------------------------------------------------------------------------------
        //
        // CLASS: uvm_sequence_base
        //
        // The uvm_sequence_base class provides the interfaces needed to create streams
        // of sequence items and/or other sequences.
        //
        // A sequence is executed by calling its <start> method, either directly
        // or invocation of any of the `uvm_do_* macros.
        // 
        // Executing sequences via <start>:
        // 
        // A sequence's <start> method has a ~parent_sequence~ argument that controls
        // whether <pre_do>, <mid_do>, and <post_do> are called *in the parent*
        // sequence. It also has a ~call_pre_post~ argument that controls whether its
        // <pre_body> and <post_body> methods are called.
        // In all cases, its <pre_start> and <post_start> methods are always called.
        // 
        // When <start> is called directly, you can provide the appropriate arguments
        // according to your application.
        //
        // The sequence execution flow looks like this
        // 
        // User code
        //
        //| sub_seq.randomize(...); // optional
        //| sub_seq.start(seqr, parent_seq, priority, call_pre_post)
        //|
        //
        // The following methods are called, in order
        //
        //|
        //|   sub_seq.pre_start()        (task)
        //|   sub_seq.pre_body()         (task)  if call_pre_post==1
        //|     parent_seq.pre_do(0)     (task)  if parent_sequence!=null
        //|     parent_seq.mid_do(this)  (func)  if parent_sequence!=null
        //|   sub_seq.body               (task)  YOUR STIMULUS CODE
        //|     parent_seq.post_do(this) (func)  if parent_sequence!=null
        //|   sub_seq.post_body()        (task)  if call_pre_post==1
        //|   sub_seq.post_start()       (task)
        // 
        //
        // Executing sub-sequences via `uvm_do macros:
        //
        // A sequence can also be indirectly started as a child in the <body> of a
        // parent sequence. The child sequence's <start> method is called indirectly
        // by invoking any of the `uvm_do macros.
        // In thise cases, <start> is called with
        // ~call_pre_post~ set to 0, preventing the started sequence's <pre_body> and
        // <post_body> methods from being called. During execution of the
        // child sequence, the parent's <pre_do>, <mid_do>, and <post_do> methods
        // are called.
        //
        // The sub-sequence execution flow looks like
        // 
        // User code
        //
        //|
        //| `uvm_do_with_prior(seq_seq, { constraints }, priority)
        //|
        //
        // The following methods are called, in order
        //
        //|
        //|   sub_seq.pre_start()         (task)
        //|   parent_seq.pre_do(0)        (task)
        //|   parent_req.mid_do(sub_seq)  (func)
        //|     sub_seq.body()            (task)
        //|   parent_seq.post_do(sub_seq) (func)
        //|   sub_seq.post_start()        (task)
        //|
        //
        // Remember, it is the *parent* sequence's pre|mid|post_do that are called, not
        // the sequence being executed. 
        //
        // 
        // Executing sequence items via <start_item>/<finish_item> or `uvm_do macros:
        // 
        // Items are started in the <body> of a parent sequence via calls to
        // <start_item>/<finish_item> or invocations of any of the `uvm_do
        // macros. The <pre_do>, <mid_do>, and <post_do> methods of the parent
        // sequence will be called as the item is executed.
        //
        // The sequence-item execution flow looks like
        // 
        // User code
        //
        //| parent_seq.start_item(item, priority);
        //| item.randomize(...) [with {constraints}];
        //| parent_seq.finish_item(item);
        //|
        //| or
        //|
        //| `uvm_do_with_prior(item, constraints, priority)
        //|
        //
        // The following methods are called, in order
        //
        //|
        //|   sequencer.wait_for_grant(prior) (task) \ start_item  \
        //|   parent_seq.pre_do(1)            (task) /              \
        //|                                                      `uvm_do* macros
        //|   parent_seq.mid_do(item)         (func) \              /
        //|   sequencer.send_request(item)    (func)  \finish_item /
        //|   sequencer.wait_for_item_done()  (task)  /
        //|   parent_seq.post_do(item)        (func) /
        // 
        // Attempting to execute a sequence via <start_item>/<finish_item>
        // will produce a run-time error.
        //------------------------------------------------------------------------------
        
%000000 class uvm_sequence_base extends uvm_sequence_item;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
          protected uvm_sequence_state m_sequence_state;
 000177             int                m_next_transaction_id = 1;
+000177  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000177   local     int                m_priority = -1;
+000177  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
                    int                m_tr_handle;
                    int                m_wait_for_grant_semaphore;
        
          // Each sequencer will assign a sequence id.  When a sequence is talking to multiple
          // sequencers, each sequence_id is managed seperately
          protected int m_sqr_seq_ids[int];
        
          protected bit children_array[uvm_sequence_base];
           
          protected uvm_sequence_item response_queue[$];
 000177   protected int               response_queue_depth = 8;
+000177  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          protected bit               response_queue_error_report_disabled;
        
          // Variable: do_not_randomize
          //
          // If set, prevents the sequence from being randomized before being executed
          // by the `uvm_do*() and `uvm_rand_send*() macros,
          // or as a default sequence.
          //
          bit do_not_randomize;
        
          protected process  m_sequence_process;
          local bit m_use_response_handler;
        
%000001   static string type_name = "uvm_sequence_base";
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
          // bits to detect if is_relevant()/wait_for_relevant() are implemented
          local bit is_rel_default;
          local bit wait_rel_default;
        
        
          // Function: new
          //
          // The constructor for uvm_sequence_base. 
          //
 000177   function new (string name = "uvm_sequence");
+000177  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
 000177     super.new(name);
+000177  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000177     m_sequence_state = CREATED;
+000177  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000177     m_wait_for_grant_semaphore = 0;
+000177  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
          // Function: is_item
          //
          // Returns 1 on items and 0 on sequences. As this object is a sequence,
          // ~is_item~ will always return 0.
          //
%000000   virtual function bit is_item();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
          // Function: get_sequence_state
          //
          // Returns the sequence state as an enumerated value.
        
%000000   function uvm_sequence_state_enum get_sequence_state();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     return m_sequence_state;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
          // Task: wait_for_sequence_state
          // 
          // Waits until the sequence reaches one of the given ~state~. If the sequence
          // is already in one of the state, this method returns immediately.
          //
          //| wait_for_sequence_state(STOPPED|FINISHED);
        
%000000   task wait_for_sequence_state(int unsigned state_mask);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     wait (m_sequence_state & state_mask);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endtask
        
        
          //--------------------------
          // Group: Sequence Execution
          //--------------------------
        
        
          // Task: start
          //
          // Executes this sequence, returning when the sequence has completed.
          //
          // The ~sequencer~ argument specifies the sequencer on which to run this
          // sequence. The sequencer must be compatible with the sequence.
          //
          // If ~parent_sequence~ is null, then this sequence is a root parent,
          // otherwise it is a child of ~parent_sequence~. The ~parent_sequence~'s
          // pre_do, mid_do, and post_do methods will be called during the execution
          // of this sequence.
          //
          // By default, the ~priority~ of a sequence
          // is the priority of its parent sequence.
          // If it is a root sequence, its default priority is 100.
          // A different priority may be specified by ~this_priority~.
          // Higher numbers indicate higher priority.
          //
          // If ~call_pre_post~ is set to 1 (default), then the <pre_body> and
          // <post_body> tasks will be called before and after the sequence
          // <body> is called.
        
 000026   virtual task start (uvm_sequencer_base sequencer,
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
                              uvm_sequence_base parent_sequence = null,
                              int this_priority = -1,
                              bit call_pre_post = 1);
        
 000026     set_item_context(parent_sequence, sequencer);
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
~000026     if (!(m_sequence_state inside {CREATED,STOPPED,FINISHED})) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=expr comment=((m_sequence_state ==? uvm_pkg::CREATED)==0 && (m_sequence_state ==? uvm_pkg::STOPPED)==0 && (m_sequence_state ==? uvm_pkg::FINISHED)==0) => 1 hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=expr comment=((m_sequence_state ==? uvm_pkg::CREATED)==1) => 0 hier=uvm_pkg::uvm_sequence_base__Vclpkg
+000026  point: type=expr comment=((m_sequence_state ==? uvm_pkg::FINISHED)==1) => 0 hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=expr comment=((m_sequence_state ==? uvm_pkg::STOPPED)==1) => 0 hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       uvm_report_fatal("SEQ_NOT_DONE", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000          {"Sequence ", get_full_name(), " already started"},UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
        
~000026     if (m_parent_sequence != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000        m_parent_sequence.children_array[this] = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
        
~000026     if (this_priority < -1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       uvm_report_fatal("SEQPRI", $sformatf("Sequence %s start has illegal priority: %0d",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000                                            get_full_name(),
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000                                            this_priority), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
~000026     if (this_priority < 0) begin
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
~000026        if (parent_sequence == null) this_priority = 100;
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000        else this_priority = parent_sequence.get_priority();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
        
            // Check that the response queue is empty from earlier runs
 000026     clear_response_queue();
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
 000026     m_priority           = this_priority;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
~000026     if (m_sequencer != null) begin
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
~000026         if (m_parent_sequence == null) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026           m_tr_handle = m_sequencer.begin_tr(this, get_name());
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000         end else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000           m_tr_handle = m_sequencer.begin_child_tr(this, m_parent_sequence.m_tr_handle, 
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000                                                    get_root_sequence_name());
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
                end
            end
        
            // Ensure that the sequence_id is intialized in case this sequence has been stopped previously
 000026     set_sequence_id(-1);
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
            // Remove all sqr_seq_ids
 000026     m_sqr_seq_ids.delete();
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
            // Register the sequence with the sequencer if defined.
~000026     if (m_sequencer != null) begin
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026       void'(m_sequencer.m_register_sequence(this));
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
        
            // Change the state to PRE_START, do this before the fork so that
            // the "if (!(m_sequence_state inside {...}" works
 000026     m_sequence_state = PRE_START;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026     fork
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026       begin
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026         m_sequence_process = process::self();
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
                // absorb delta to ensure PRE_START was seen
 000026         #0;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026         pre_start();
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
~000026         if (call_pre_post == 1) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026           m_sequence_state = PRE_BODY;
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026           #0;
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026           pre_body();
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
                end
        
~000026         if (parent_sequence != null) begin
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000           parent_sequence.pre_do(0);    // task
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000           parent_sequence.mid_do(this); // function
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
                end
        
 000026         m_sequence_state = BODY;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026         #0;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026         body();
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
 000026         m_sequence_state = ENDED;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026         #0;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
~000026         if (parent_sequence != null) begin
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000           parent_sequence.post_do(this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
                end
        
~000026         if (call_pre_post == 1) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026           m_sequence_state = POST_BODY;
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026           #0;
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026           post_body();
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
                end
        
 000026         m_sequence_state = POST_START;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026         #0;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026         post_start();
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
 000026         m_sequence_state = FINISHED;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026         #0;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
              end
            join
        
~000026     if (m_sequencer != null) begin      
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026       m_sequencer.end_tr(this);
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
                
            // Clean up any sequencer queues after exiting; if we
            // were forcibly stoped, this step has already taken place
~000026     if (m_sequence_state != STOPPED) begin
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
~000026       if (m_sequencer != null)
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026         m_sequencer.m_sequence_exiting(this);
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
        
 000026     #0; // allow stopped and finish waiters to resume
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
~000026     if ((m_parent_sequence != null) && (m_parent_sequence.children_array.exists(this))) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000        m_parent_sequence.children_array.delete(this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
          endtask
        
        
          // Task: pre_start
          //
          // This task is a user-definable callback that is called before the
          // optional execution of <pre_body>.
          // This method should not be called directly by the user.
        
 000026   virtual task pre_start();  
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026     return;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endtask
        
        
          // Task: pre_body
          //
          // This task is a user-definable callback that is called before the
          // execution of <body> ~only~ when the sequence is started with <start>.
          // If <start> is called with ~call_pre_post~ set to 0, ~pre_body~ is not
          // called.
          // This method should not be called directly by the user.
        
 000026   virtual task pre_body();  
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026     return;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endtask
        
        
          // Task: pre_do
          //
          // This task is a user-definable callback task that is called ~on the
          // parent sequence~, if any.the
          // sequence has issued a wait_for_grant() call and after the sequencer has
          // selected this sequence, and before the item is randomized.
          //
          // Although pre_do is a task, consuming simulation cycles may result in
          // unexpected behavior on the driver.
          //
          // This method should not be called directly by the user.
        
 000176   virtual task pre_do(bit is_item);
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000176     return;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endtask
        
        
          // Function: mid_do
          //
          // This function is a user-definable callback function that is called after
          // the sequence item has been randomized, and just before the item is sent
          // to the driver.  This mehod should not be called directly by the user.
        
 000351   virtual function void mid_do(uvm_sequence_item this_item);
+000351  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000351     return;
+000351  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
          
          
          // Task: body
          //
          // This is the user-defined task where the main sequence code resides.
          // This method should not be called directly by the user.
        
%000000   virtual task body();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     uvm_report_warning("uvm_sequence_base", "Body definition undefined");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     return;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endtask  
        
        
          // Function: post_do
          //
          // This function is a user-definable callback function that is called after
          // the driver has indicated that it has completed the item, using either
          // this item_done or put methods. This method should not be called directly
          // by the user.
        
 000351   virtual function void post_do(uvm_sequence_item this_item);
+000351  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000351     return;
+000351  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
          // Task: post_body
          //
          // This task is a user-definable callback task that is called after the
          // execution of <body> ~only~ when the sequence is started with <start>.
          // If <start> is called with ~call_pre_post~ set to 0, ~post_body~ is not
          // called.
          // This task is a user-definable callback task that is called after the
          // execution of the body, unless the sequence is started with call_pre_post=0.
          // This method should not be called directly by the user.
        
 000026   virtual task post_body();
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026     return;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endtask
            
        
          // Task: post_start
          //
          // This task is a user-definable callback that is called after the
          // optional execution of <post_body>.
          // This method should not be called directly by the user.
        
 000026   virtual task post_start();  
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026     return;
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endtask
        
        
          // Variable: starting_phase
          //
          // If non-null, specifies the phase in which this sequence was started.
          // The ~starting_phase~ is set automatically when this sequence is 
          // started as the default sequence. See 
          // <uvm_sequencer_base::start_phase_sequence>.
          //
          //| virtual task user_sequence::body();
          //|    if (starting_phase != null)
          //|       starting_phase.raise_objection(this,"user_seq not finished");
          //|    ...
          //|    if (starting_phase != null)
          //|       starting_phase.drop_objection(this,"user_seq finished");
          //| endtask
          //
          uvm_phase starting_phase;
        
          //------------------------
          // Group: Sequence Control
          //------------------------
        
          // Function: set_priority
          //
          // The priority of a sequence may be changed at any point in time.  When the
          // priority of a sequence is changed, the new priority will be used by the
          // sequencer the next time that it arbitrates between sequences.
          //
          // The default priority value for a sequence is 100.  Higher values result
          // in higher priorities.
        
%000000   function void set_priority (int value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     m_priority = value;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
          // Function: get_priority
          //
          // This function returns the current priority of the sequence.
        
 000176   function int get_priority();
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000176     return m_priority;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
          // Function: is_relevant
          //
          // The default is_relevant implementation returns 1, indicating that the
          // sequence is always relevant.
          //
          // Users may choose to override with their own virtual function to indicate
          // to the sequencer that the sequence is not currently relevant after a
          // request has been made.
          //
          // When the sequencer arbitrates, it will call is_relevant on each requesting,
          // unblocked sequence to see if it is relevant. If a 0 is returned, then the
          // sequence will not be chosen.
          //
          // If all requesting sequences are not relevant, then the sequencer will call
          // wait_for_relevant on all sequences and re-arbitrate upon its return.
          //
          // Any sequence that implements is_relevant must also implement
          // wait_for_relevant so that the sequencer has a way to wait for a
          // sequence to become relevant.
        
 000176   virtual function bit is_relevant(); 
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000176     is_rel_default = 1;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000176     return 1;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
          // Task: wait_for_relevant
          //
          // This method is called by the sequencer when all available sequences are
          // not relevant.  When wait_for_relevant returns the sequencer attempt to
          // re-arbitrate. 
          //
          // Returning from this call does not guarantee a sequence is relevant,
          // although that would be the ideal. The method provide some delay to
          // prevent an infinite loop.
          //
          // If a sequence defines is_relevant so that it is not always relevant (by
          // default, a sequence is always relevant), then the sequence must also supply
          // a wait_for_relevant method.  
        
%000000   virtual task wait_for_relevant();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
            event e;
%000000     wait_rel_default = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     if (is_rel_default != wait_rel_default)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       uvm_report_fatal("RELMSM", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000         "is_relevant() was implemented without defining wait_for_relevant()", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     @e;  // this is intended to never return
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endtask
         
        
          // Task: lock
          //
          // Requests a lock on the specified sequencer. If sequencer is null, the lock
          // will be requested on the current default sequencer.
          //
          // A lock request will be arbitrated the same as any other request.  A lock is
          // granted after all earlier requests are completed and no other locks or
          // grabs are blocking this sequence.
          //
          // The lock call will return when the lock has been granted.
        
%000000   task lock(uvm_sequencer_base sequencer = null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     if (sequencer == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       sequencer = m_sequencer;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
%000000     if (sequencer == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       uvm_report_fatal("LOCKSEQR", "Null m_sequencer reference", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
%000000     sequencer.lock(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endtask
        
        
          // Task: grab
          // 
          // Requests a lock on the specified sequencer.  If no argument is supplied,
          // the lock will be requested on the current default sequencer.
          //
          // A grab equest is put in front of the arbitration queue. It will be
          // arbitrated before any other requests. A grab is granted when no other grabs
          // or locks are blocking this sequence.
          //
          // The grab call will return when the grab has been granted.
        
%000000   task grab(uvm_sequencer_base sequencer = null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     if (sequencer == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       if (m_sequencer == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000         uvm_report_fatal("GRAB", "Null m_sequencer reference", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
              end
%000000       m_sequencer.grab(this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       sequencer.grab(this);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
          endtask
        
        
          // Function: unlock
          //
          // Removes any locks or grabs obtained by this sequence on the specified
          // sequencer. If sequencer is null, then the unlock will be done on the
          // current default sequencer.
        
%000000   function void  unlock(uvm_sequencer_base sequencer = null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     if (sequencer == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       if (m_sequencer == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000         uvm_report_fatal("UNLOCK", "Null m_sequencer reference", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
              end
%000000       m_sequencer.unlock(this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     end else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       sequencer.unlock(this);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
          endfunction
        
        
          // Function: ungrab
          //
          // Removes any locks or grabs obtained by this sequence on the specified
          // sequencer. If sequencer is null, then the unlock will be done on the
          // current default sequencer.
        
%000000   function void  ungrab(uvm_sequencer_base sequencer = null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     unlock(sequencer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
          // Function: is_blocked
          //
          // Returns a bit indicating whether this sequence is currently prevented from
          // running due to another lock or grab. A 1 is returned if the sequence is
          // currently blocked. A 0 is returned if no lock or grab prevents this
          // sequence from executing. Note that even if a sequence is not blocked, it
          // is possible for another sequence to issue a lock or grab before this
          // sequence can issue a request.
        
%000000   function bit is_blocked();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     return m_sequencer.is_blocked(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
          // Function: has_lock
          //
          // Returns 1 if this sequence has a lock, 0 otherwise.
          //
          // Note that even if this sequence has a lock, a child sequence may also have
          // a lock, in which case the sequence is still blocked from issuing
          // operations on the sequencer.
        
%000000   function bit has_lock();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     return m_sequencer.has_lock(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
          // Function: kill
          //
          // This function will kill the sequence, and cause all current locks and
          // requests in the sequence's default sequencer to be removed. The sequence
          // state will change to STOPPED, and the post_body() and post_start() callback
          // methods will not be executed.
          //
          // If a sequence has issued locks, grabs, or requests on sequencers other than
          // the default sequencer, then care must be taken to unregister the sequence
          // with the other sequencer(s) using the sequencer unregister_sequence() 
          // method.
        
%000000   function void kill();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     if (m_sequence_process != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
              // If we are not connected to a sequencer, then issue
              // kill locally.
%000000       if (m_sequencer == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000         m_kill();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
              end
              // If we are attached to a sequencer, then the sequencer
              // will clear out queues, and then kill this sequence
%000000       m_sequencer.kill_sequence(this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
          endfunction
        
        
          // Function: do_kill
          // 
          // This function is a user hook that is called whenever a sequence is
          // terminated by using either sequence.kill() or sequencer.stop_sequences()
          // (which effectively calls sequence.kill()).
        
%000000   virtual function void do_kill();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     return;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
%000000   function void m_kill();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     do_kill();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     foreach(children_array[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000        i.kill();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
%000000     if (m_sequence_process != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       m_sequence_process.kill;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       m_sequence_process = null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
%000000     m_sequence_state = STOPPED;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     if ((m_parent_sequence != null) && (m_parent_sequence.children_array.exists(this)))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       m_parent_sequence.children_array.delete(this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
          //-------------------------------
          // Group: Sequence Item Execution
          //-------------------------------
        
          // Function: create_item
          //
          // Create_item will create and initialize a sequence_item or sequence
          // using the factory.  The sequence_item or sequence will be initialized
          // to communicate with the specified sequencer.
        
%000000   protected function uvm_sequence_item create_item(uvm_object_wrapper type_var, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
                                                           uvm_sequencer_base l_sequencer, string name);
        
%000000     uvm_factory f_ = uvm_factory::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     $cast(create_item,  f_.create_object_by_type( type_var, this.get_full_name(), name ));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
%000000     create_item.set_item_context(this, l_sequencer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
          // Function: start_item
          //
          // ~start_item~ and <finish_item> together will initiate operation of
          // a sequence item.  If the item has not already been
          // initialized using create_item, then it will be initialized here to use
          // the default sequencer specified by m_sequencer.  Randomization
          // may be done between start_item and finish_item to ensure late generation
          //
        
 000176   virtual task start_item (uvm_sequence_item item,
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
                                   int set_priority = -1,
                                   uvm_sequencer_base sequencer=null);
 000176     uvm_sequence_base seq;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
             
~000176     if(item == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
+000176  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       uvm_report_fatal("NULLITM",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000          {"attempting to start a null item from sequence '",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000           get_full_name(), "'"}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
                  
~000176     if($cast(seq, item)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
+000176  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       uvm_report_fatal("SEQNOTITM",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000          {"attempting to start a sequence using start_item() from sequence '",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000           get_full_name(), "'. Use seq.start() instead."}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
                  
~000176     if (sequencer == null)
+000176  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000176         sequencer = item.get_sequencer();
+000176  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
                
~000175     if(sequencer == null)
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
+000175  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000001         sequencer = get_sequencer();   
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
                
~000176     if(sequencer == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
+000176  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000         uvm_report_fatal("SEQ",{"neither the item's sequencer nor dedicated sequencer has been supplied to start item in ",get_full_name()},UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000        return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
        
 000176     item.set_item_context(this, sequencer);
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
~000176     if (set_priority < 0)
+000176  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000176       set_priority = get_priority();
+000176  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            
 000176     sequencer.wait_for_grant(this, set_priority);
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
            `ifndef UVM_DISABLE_AUTO_ITEM_RECORDING
 000176       void'(sequencer.begin_child_tr(item, m_tr_handle, item.get_root_sequence_name()));
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
            `endif
        
 000176     pre_do(1);
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
          endtask  
        
        
          // Function: finish_item
          //
          // finish_item, together with start_item together will initiate operation of 
          // a sequence_item.  Finish_item must be called
          // after start_item with no delays or delta-cycles.  Randomization, or other
          // functions may be called between the start_item and finish_item calls.
          //
        
 000176   virtual task finish_item (uvm_sequence_item item,
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
                                    int set_priority = -1);
        
 000176     uvm_sequencer_base sequencer;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
            
 000176     sequencer = item.get_sequencer();
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
~000176     if (sequencer == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
+000176  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000         uvm_report_fatal("STRITM", "sequence_item has null sequencer", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
        
 000176     mid_do(item);
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000176     sequencer.send_request(this, item);
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000176     sequencer.wait_for_item_done(this, -1);
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
            `ifndef UVM_DISABLE_AUTO_ITEM_RECORDING
 000176     sequencer.end_tr(item);
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
            `endif
 000176     post_do(item);
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
          endtask
        
          
          // Task: wait_for_grant
          //
          // This task issues a request to the current sequencer.  If item_priority is
          // not specified, then the current sequence priority will be used by the
          // arbiter. If a lock_request is made, then the sequencer will issue a lock
          // immediately before granting the sequence.  (Note that the lock may be
          // granted without the sequence being granted if is_relevant is not asserted).
          //
          // When this method returns, the sequencer has granted the sequence, and the
          // sequence must call send_request without inserting any simulation delay
          // other than delta cycles.  The driver is currently waiting for the next
          // item to be sent via the send_request call.
        
%000000   virtual task wait_for_grant(int item_priority = -1, bit lock_request = 0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     if (m_sequencer == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       uvm_report_fatal("WAITGRANT", "Null m_sequencer reference", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
%000000     m_sequencer.wait_for_grant(this, item_priority, lock_request);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endtask
        
        
          // Function: send_request
          //
          // The send_request function may only be called after a wait_for_grant call. 
          // This call will send the request item to the sequencer, which will forward
          // it to the driver. If the rerandomize bit is set, the item will be
          // randomized before being sent to the driver.
        
%000000   virtual function void send_request(uvm_sequence_item request, bit rerandomize = 0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     if (m_sequencer == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000         uvm_report_fatal("SENDREQ", "Null m_sequencer reference", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
              end
%000000     m_sequencer.send_request(this, request, rerandomize);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
          // Task: wait_for_item_done
          //
          // A sequence may optionally call wait_for_item_done.  This task will block
          // until the driver calls item_done or put.  If no transaction_id parameter
          // is specified, then the call will return the next time that the driver calls
          // item_done or put.  If a specific transaction_id is specified, then the call
          // will return when the driver indicates completion of that specific item.
          //
          // Note that if a specific transaction_id has been specified, and the driver
          // has already issued an item_done or put for that transaction, then the call
          // will hang, having missed the earlier notification.
        
        
%000000   virtual task wait_for_item_done(int transaction_id = -1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     if (m_sequencer == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000         uvm_report_fatal("WAITITEMDONE", "Null m_sequencer reference", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
              end
%000000     m_sequencer.wait_for_item_done(this, transaction_id);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endtask
        
        
        
          // Group: Response API
          //--------------------
        
          // Function: use_response_handler
          //
          // When called with enable set to 1, responses will be sent to the response
          // handler. Otherwise, responses must be retrieved using get_response.
          //
          // By default, responses from the driver are retrieved in the sequence by
          // calling get_response.
          //
          // An alternative method is for the sequencer to call the response_handler
          // function with each response.
        
%000000   function void use_response_handler(bit enable);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     m_use_response_handler = enable;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
          // Function: get_use_response_handler
          //
          // Returns the state of the use_response_handler bit.
        
%000000   function bit get_use_response_handler();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     return m_use_response_handler;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
          // Function: response_handler
          //
          // When the use_reponse_handler bit is set to 1, this virtual task is called
          // by the sequencer for each response that arrives for this sequence.
        
%000000   virtual function void response_handler(uvm_sequence_item response);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     return;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
          // Function: set_response_queue_error_report_disabled
          //
          // By default, if the response_queue overflows, an error is reported. The
          // response_queue will overflow if more responses are sent to this sequence
          // from the driver than get_response calls are made. Setting value to 0
          // disables these errors, while setting it to 1 enables them.
        
%000000   function void set_response_queue_error_report_disabled(bit value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     response_queue_error_report_disabled = value;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
          
          // Function: get_response_queue_error_report_disabled
          //
          // When this bit is 0 (default value), error reports are generated when
          // the response queue overflows. When this bit is 1, no such error
          // reports are generated.
        
%000000   function bit get_response_queue_error_report_disabled();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     return response_queue_error_report_disabled;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
          // Function: set_response_queue_depth
          //
          // The default maximum depth of the response queue is 8. These method is used
          // to examine or change the maximum depth of the response queue.
          //
          // Setting the response_queue_depth to -1 indicates an arbitrarily deep
          // response queue.  No checking is done.
        
%000000   function void set_response_queue_depth(int value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     response_queue_depth = value;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction  
        
        
          // Function: get_response_queue_depth
          //
          // Returns the current depth setting for the response queue.
        
%000000   function int get_response_queue_depth();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     return response_queue_depth;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction  
        
        
          // Function: clear_response_queue
          //
          // Empties the response queue for this sequence.
        
 000026   virtual function void clear_response_queue();
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000026     response_queue.delete();
+000026  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
%000000   virtual function void put_base_response(input uvm_sequence_item response);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     if ((response_queue_depth == -1) ||
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000         (response_queue.size() < response_queue_depth)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       response_queue.push_back(response);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
%000000     if (response_queue_error_report_disabled == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       uvm_report_error(get_full_name(), "Response queue overflow, response was dropped", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
          endfunction
        
        
          // Function- put_response
          //
          // Internal method.
        
%000000   virtual function void put_response (uvm_sequence_item response_item);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     put_base_response(response_item); // no error-checking
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
          // Function- get_base_response
        
%000000   virtual task get_base_response(output uvm_sequence_item response, input int transaction_id = -1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
%000000     int queue_size, i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
%000000     if (response_queue.size() == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       wait (response_queue.size() != 0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
%000000     if (transaction_id == -1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       response = response_queue.pop_front();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
        
%000000     forever begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       queue_size = response_queue.size();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       for (i = 0; i < queue_size; i++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000         if (response_queue[i].get_transaction_id() == transaction_id) 
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000           begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000             $cast(response,response_queue[i]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000             response_queue.delete(i);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000             return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
                  end
              end
%000000       wait (response_queue.size() != queue_size);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
          endtask
        
        
        
          //------------------------
          // Group- Sequence Library DEPRECATED
          //------------------------
        
        `ifndef UVM_NO_DEPRECATED
        
          // Variable- seq_kind
          //
          // Used as an identifier in constraints for a specific sequence type.
        
          rand int unsigned seq_kind;
        
          // For user random selection. This excludes the exhaustive and
          // random sequences.
          constraint pick_sequence { 
               (num_sequences() <= 2) || (seq_kind >= 2);
               (seq_kind <  num_sequences()) || (seq_kind == 0); }
        
        
          // Function- num_sequences
          // 
          // Returns the number of sequences in the sequencer's sequence library.
        
 000050   function int num_sequences();
+000050  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
~000050     if (m_sequencer == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000050     return (m_sequencer.num_sequences());
+000050  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
        
          // Function- get_seq_kind
          //
          // This function returns an int representing the sequence kind that has
          // been registerd with the sequencer.  The return value may be used with
          // the <get_sequence> or <do_sequence_kind> methods.
        
%000000   function int get_seq_kind(string type_name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     `uvm_warning("UVM_DEPRECATED",$sformatf("%m deprecated."))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     if(m_sequencer != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       return m_sequencer.get_seq_kind(type_name);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            else 
%000000       uvm_report_warning("NULLSQ", $sformatf("%0s sequencer is null.",
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000                                            get_type_name()), UVM_NONE);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
          // Function- get_sequence
          //
          // This function returns a reference to a sequence specified by ~req_kind~,
          // which can be obtained using the <get_seq_kind> method.
        
%000000   function uvm_sequence_base get_sequence(int unsigned req_kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     uvm_sequence_base m_seq;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     string m_seq_type;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     uvm_factory factory = uvm_factory::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     `uvm_warning("UVM_DEPRECATED",$sformatf("%m deprecated."))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     if (req_kind < 0 || req_kind >= m_sequencer.sequences.size()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       uvm_report_error("SEQRNG", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000         $sformatf("Kind arg '%0d' out of range. Need 0-%0d",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000         req_kind, m_sequencer.sequences.size()-1), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
%000000     m_seq_type = m_sequencer.sequences[req_kind];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     if (!$cast(m_seq, factory.create_object_by_name(m_seq_type, get_full_name(), m_seq_type))) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       uvm_report_fatal("FCTSEQ", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000         $sformatf("Factory can not produce a sequence of type %0s.",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000         m_seq_type), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
%000000     m_seq.set_use_sequence_info(1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     return m_seq;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
          // Task- do_sequence_kind
          //
          // This task will start a sequence of kind specified by ~req_kind~,
          // which can be obtained using the <get_seq_kind> method.
        
%000000   task do_sequence_kind(int unsigned req_kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     string m_seq_type;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     uvm_sequence_base m_seq;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     uvm_factory factory = uvm_factory::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     `uvm_warning("UVM_DEPRECATED",$sformatf("%m deprecated."))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     m_seq_type = m_sequencer.sequences[req_kind];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     if (!$cast(m_seq, factory.create_object_by_name(m_seq_type, get_full_name(), m_seq_type))) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       uvm_report_fatal("FCTSEQ", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000         $sformatf("Factory can not produce a sequence of type %0s.", m_seq_type), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
        
%000000     m_seq.set_item_context(this, m_sequencer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
            
%000000     if(!m_seq.randomize()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       uvm_report_warning("RNDFLD", "Randomization failed in do_sequence_kind()");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
%000000     m_seq.start(m_sequencer,this,get_priority(),0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endtask
        
        
          // Function- get_sequence_by_name
          //
          // Internal method.
        
%000000   function uvm_sequence_base get_sequence_by_name(string seq_name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     uvm_sequence_base m_seq;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     `uvm_warning("UVM_DEPRECATED",$sformatf("%m deprecated."))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     if (!$cast(m_seq, factory.create_object_by_name(seq_name, get_full_name(), seq_name))) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000       uvm_report_fatal("FCTSEQ", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000         $sformatf("Factory can not produce a sequence of type %0s.", seq_name), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
%000000     m_seq.set_use_sequence_info(1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     return m_seq;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        
          // Task- create_and_start_sequence_by_name
          //
          // Internal method.
        
%000000   task create_and_start_sequence_by_name(string seq_name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     uvm_sequence_base m_seq;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     `uvm_warning("UVM_DEPRECATED",$sformatf("%m deprecated."))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     m_seq = get_sequence_by_name(seq_name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
%000000     m_seq.start(m_sequencer, this, this.get_priority(), 0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endtask
        
        
        `endif // UVM_NO_DEPRECATED
        
          //----------------------
          // Misc Internal methods
          //----------------------
        
        
          // m_get_sqr_sequence_id
          // ---------------------
        
 000956   function int m_get_sqr_sequence_id(int sequencer_id, bit update_sequence_id);
+000956  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
~000201     if (m_sqr_seq_ids.exists(sequencer_id)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
+000201  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000554       if (update_sequence_id == 1) begin
+000554  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
+000201  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000554         set_sequence_id(m_sqr_seq_ids[sequencer_id]);
+000554  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
              end
%000000       return m_sqr_seq_ids[sequencer_id];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
            end
        
~000201     if (update_sequence_id == 1)
+000201  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000201       set_sequence_id(-1);
+000201  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_base__Vclpkg
        
 000956     return -1;
+000956  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
          
        
          // m_set_sqr_sequence_id
          // ---------------------
        
 000201   function void m_set_sqr_sequence_id(int sequencer_id, int sequence_id);
+000201  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000201     m_sqr_seq_ids[sequencer_id] = sequence_id;
+000201  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
 000201     set_sequence_id(sequence_id);
+000201  point: type=line comment=block hier=uvm_pkg::uvm_sequence_base__Vclpkg
          endfunction
        
        endclass                
        
        

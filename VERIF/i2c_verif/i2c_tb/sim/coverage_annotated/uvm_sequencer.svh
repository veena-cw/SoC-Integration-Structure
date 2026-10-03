//      // verilator_coverage annotation
        //----------------------------------------------------------------------
        //   Copyright 2007-2011 Mentor Graphics Corporation
        //   Copyright 2007-2011 Cadence Design Systems, Inc. 
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
        // CLASS: uvm_sequencer #(REQ,RSP)
        //
        //------------------------------------------------------------------------------
        
        class uvm_sequencer #(type REQ=uvm_sequence_item, RSP=REQ)
                                           extends uvm_sequencer_param_base #(REQ, RSP);
        
          typedef uvm_sequencer #( REQ , RSP) this_type;
        
          bit sequence_item_requested;
          bit get_next_item_called;
        
%000000   `uvm_component_param_utils(this_type)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
        
          // Variable: seq_item_export
          //
          // This export provides access to this sequencer's implementation of the
          // sequencer interface, <uvm_sqr_if_base #(REQ,RSP)>, which defines the following
          // methods:
          //
          //| Requests:
          //|  virtual task          get_next_item      (output REQ request);
          //|  virtual task          try_next_item      (output REQ request);
          //|  virtual task          get                (output REQ request);
          //|  virtual task          peek               (output REQ request);
          //| Responses:
          //|  virtual function void item_done          (input RSP response=null);
          //|  virtual task          put                (input RSP response);
          //| Sync Control:
          //|  virtual task          wait_for_sequences ();
          //|  virtual function bit  has_do_available   ();
          //
          // See <uvm_sqr_if_base #(REQ,RSP)> for information about this interface.
        
          uvm_seq_item_pull_imp #(REQ, RSP, this_type) seq_item_export;
        
        
        
          // Function: new
          //
          // Standard component constructor that creates an instance of this class
          // using the given ~name~ and ~parent~, if any.
          //
          extern function new (string name, uvm_component parent=null);
          
        
          // Function: stop_sequences
          //
          // Tells the sequencer to kill all sequences and child sequences currently
          // operating on the sequencer, and remove all requests, locks and responses
          // that are currently queued.  This essentially resets the sequencer to an
          // idle state.
          //
          extern virtual function void stop_sequences();
        
        
          extern virtual function string get_type_name();
        
          
          //-----------------
          // Internal Methods
          //-----------------
          // Do not use directly; not part of standard
        
          // Access to following internal methods provided via seq_item_export
          extern virtual task          get_next_item (output REQ t);
          extern virtual task          try_next_item (output REQ t);
          extern virtual function void item_done     (RSP item = null);
          extern virtual task          put           (RSP t);
          extern task                  get           (output REQ t);
          extern task                  peek          (output REQ t);
          extern function void         item_done_trigger(RSP item = null);
%000000   function RSP                 item_done_get_trigger_data();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000     return last_rsp(0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
          endfunction
        
          extern protected virtual function int m_find_number_driver_connections();
        
        endclass  
        
        
        typedef uvm_sequencer #(uvm_sequence_item) uvm_virtual_sequencer;
        
        
        
        //------------------------------------------------------------------------------
        // IMPLEMENTATION
        //------------------------------------------------------------------------------
        
%000001 function uvm_sequencer::new (string name, uvm_component parent=null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000001   super.new(name, parent);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000001   seq_item_export = new ("seq_item_export", this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
        endfunction
        
        
        // Function- stop_sequences
        //
        // Tells the sequencer to kill all sequences and child sequences currently
        // operating on the sequencer, and remove all requests, locks and responses
        // that are currently queued.  This essentially resets the sequencer to an
        // idle state.
        //
%000000 function void uvm_sequencer::stop_sequences();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   REQ t;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   super.stop_sequences();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   sequence_item_requested  = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   get_next_item_called     = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
          // Empty the request fifo
%000000   if (m_req_fifo.used()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000     uvm_report_info(get_full_name(), "Sequences stopped.  Removing request from sequencer fifo");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000     while (m_req_fifo.try_get(t));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
          end
        endfunction
        
        
%000000 function string uvm_sequencer::get_type_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   return "uvm_sequencer";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
        endfunction 
        
        
        //-----------------
        // Internal Methods
        //-----------------
        
        // m_find_number_driver_connections
        // --------------------------------
        // Counting the number of of connections is done at end of
        // elaboration and the start of run.  If the user neglects to
        // call super in one or the other, the sequencer will still
        // have the correct value
        
%000000 function int uvm_sequencer::m_find_number_driver_connections();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   uvm_port_component_base provided_to_port_list[string];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   uvm_port_component_base seq_port_base;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
          
          // Check that the seq_item_pull_port is connected
%000000   seq_port_base = seq_item_export.get_comp();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   seq_port_base.get_provided_to(provided_to_port_list);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   return provided_to_port_list.num();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
        endfunction
        
        
        // get_next_item
        // -------------
        
~000175 task uvm_sequencer::get_next_item(output REQ t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
+000175  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
~000175   REQ req_item;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
+000175  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
        
          // If a sequence_item has already been requested, then get_next_item()
          // should not be called again until item_done() has been called.
        
~000176   if (get_next_item_called == 1)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
+000176  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000     uvm_report_error(get_full_name(),
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000       "Get_next_item called twice without item_done or get in between", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
          
~000175   if (!sequence_item_requested)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
+000175  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
-000000  point: type=expr comment=(sequence_item_requested==0) => 1 hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=expr comment=(sequence_item_requested==1) => 0 hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=expr comment=(sequence_item_requested==0) => 1 hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=expr comment=(sequence_item_requested==1) => 0 hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=expr comment=(sequence_item_requested==0) => 1 hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000001  point: type=expr comment=(sequence_item_requested==1) => 0 hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=expr comment=(sequence_item_requested==0) => 1 hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
+000175  point: type=expr comment=(sequence_item_requested==1) => 0 hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
~000175     m_select_sequence();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
+000175  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
        
          // Set flag indicating that the item has been requested to ensure that item_done or get
          // is called between requests
~000175   sequence_item_requested = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
+000175  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
~000175   get_next_item_called = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
+000175  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
~000175   m_req_fifo.peek(t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
+000175  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
        endtask
        
        
        // try_next_item
        // -------------
        
%000000 task uvm_sequencer::try_next_item(output REQ t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   int selected_sequence;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   time arb_time;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   uvm_sequence_base seq;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
        
%000000   if (get_next_item_called == 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000     uvm_report_error(get_full_name(), "get_next_item/try_next_item called twice without item_done or get in between", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
          end
            
          // allow state from last transaction to settle such that sequences'
          // relevancy can be determined with up-to-date information
%000000   wait_for_sequences();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
        
          // choose the sequence based on relevancy
%000000   selected_sequence = m_choose_next_request();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
        
          // return if none available
%000000   if (selected_sequence == -1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000     t = null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
          end
        
          // now, allow chosen sequence to resume
%000000   m_set_arbitration_completed(arb_sequence_q[selected_sequence].request_id);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   seq = arb_sequence_q[selected_sequence].sequence_ptr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   arb_sequence_q.delete(selected_sequence);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   m_update_lists();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   sequence_item_requested = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   get_next_item_called = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
        
          // give it one NBA to put a new item in the fifo
%000000   wait_for_sequences();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
        
          // attempt to get the item; if it fails, produce an error and return
%000000   if (!m_req_fifo.try_peek(t))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000     uvm_report_error("TRY_NEXT_BLOCKED", {"try_next_item: the selected sequence '",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000       seq.get_full_name(), "' did not produce an item within an NBA delay. ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000       "Sequences should not consume time between calls to start_item and finish_item. ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000       "Returning null item."}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
        
        endtask
        
        
        // item_done
        // ---------
        
~000175 function void uvm_sequencer::item_done(RSP item = null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
+000175  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
~000175   REQ t;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
+000175  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
        
          // Set flag to allow next get_next_item or peek to get a new sequence_item
~000175   sequence_item_requested = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
+000175  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
~000175   get_next_item_called = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
+000175  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
          
~000175   if (m_req_fifo.try_get(t) == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
+000175  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000     uvm_report_fatal(get_full_name(), {"Item_done() called with no outstanding requests.",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000       " Each call to item_done() must be paired with a previous call to get_next_item()."});
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
~000175   end else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
+000175  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
~000175     m_wait_for_item_sequence_id = t.get_sequence_id();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
+000175  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
~000175     m_wait_for_item_transaction_id = t.get_transaction_id();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
+000175  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
          end
          
~000175   if (item != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
+000175  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000     seq_item_export.put_response(item);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
          end
        
          // Grant any locks as soon as possible
~000175   grant_queued_locks();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
+000175  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
        endfunction
        
        
        // put
        // ---
        
%000000 task uvm_sequencer::put (RSP t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   put_response(t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
        endtask
        
        
        // get
        // ---
        
%000000 task uvm_sequencer::get(output REQ t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   if (sequence_item_requested == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000     m_select_sequence();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
          end
%000000   sequence_item_requested = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   m_req_fifo.peek(t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   item_done();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
        endtask
        
        
        // peek
        // ----
        
%000000 task uvm_sequencer::peek(output REQ t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
        
%000000   if (sequence_item_requested == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000     m_select_sequence();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
          end
          
          // Set flag indicating that the item has been requested to ensure that item_done or get
          // is called between requests
%000000   sequence_item_requested = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   m_req_fifo.peek(t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
        endtask
        
        
        // item_done_trigger
        // -----------------
        
%000000 function void uvm_sequencer::item_done_trigger(RSP item = null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
%000000   item_done(item);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz130_TBz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz31_TBz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer__Tz45_TBz45__Vclpkg
        endfunction
        
        
        
        

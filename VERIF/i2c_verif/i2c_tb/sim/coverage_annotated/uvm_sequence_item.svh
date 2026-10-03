//      // verilator_coverage annotation
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
        
        typedef class uvm_sequence_base;
        typedef class uvm_sequencer_base;
        
        
        //------------------------------------------------------------------------------
        //
        // CLASS: uvm_sequence_item
        //
        // The base class for user-defined sequence items and also the base class for
        // the uvm_sequence class. The uvm_sequence_item class provides the basic
        // functionality for objects, both sequence items and sequences, to operate in
        // the sequence mechanism.
        //
        //------------------------------------------------------------------------------
        
%000000 class uvm_sequence_item extends uvm_transaction;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
        
 001504   local      int                m_sequence_id = -1;
+001504  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          protected  bit                m_use_sequence_info;
 001504   protected  int                m_depth = -1;
+001504  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          protected  uvm_sequencer_base m_sequencer;
          protected  uvm_sequence_base  m_parent_sequence;
          static     bit issued1,issued2;
          bit        print_sequence_info;
        
        
          // Function: new
          //
          // The constructor method for uvm_sequence_item. 
          
 001504   function new (string name = "uvm_sequence_item");
+001504  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 001504     super.new(name);
+001504  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction
        
%000000   function string get_type_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000     return "uvm_sequence_item";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction 
        
          // Macro for factory creation
%000000   `uvm_object_registry(uvm_sequence_item, "uvm_sequence_item")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
        
        
          // Function- set_sequence_id
        
 001158   function void set_sequence_id(int id);
+001158  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 001158     m_sequence_id = id;
+001158  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction
        
        
          // Function: get_sequence_id
          //
          // private
          //
          // Get_sequence_id is an internal method that is not intended for user code.
          // The sequence_id is not a simple integer.  The get_transaction_id is meant
          // for users to identify specific transactions.
          // 
          // These methods allow access to the sequence_item sequence and transaction
          // IDs. get_transaction_id and set_transaction_id are methods on the
          // uvm_transaction base_class. These IDs are used to identify sequences to
          // the sequencer, to route responses back to the sequence that issued a
          // request, and to uniquely identify transactions.
          //
          // The sequence_id is assigned automatically by a sequencer when a sequence
          // initiates communication through any sequencer calls (i.e. `uvm_do_xxx,
          // wait_for_grant).  A sequence_id will remain unique for this sequence
          // until it ends or it is killed.  However, a single sequence may have
          // multiple valid sequence ids at any point in time.  Should a sequence 
          // start again after it has ended, it will be given a new unique sequence_id.
          //
          // The transaction_id is assigned automatically by the sequence each time a
          // transaction is sent to the sequencer with the transaction_id in its
          // default (-1) value.  If the user sets the transaction_id to any non-default
          // value, that value will be maintained.
          //
          // Responses are routed back to this sequences based on sequence_id. The
          // sequence may use the transaction_id to correlate responses with their
          // requests.
        
 000579   function int get_sequence_id();
+000579  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000579     return (m_sequence_id);
+000579  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction
        
        
          // Function: set_item_context
          //
          // Set the sequence and sequencer execution context for a sequence item
        
 000202   function void set_item_context(uvm_sequence_base  parent_seq,
+000202  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
                                         uvm_sequencer_base sequencer = null);
 000202      set_use_sequence_info(1);
+000202  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000176      if (parent_seq != null) set_parent_sequence(parent_seq);
+000176  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
~000202      if (sequencer == null && m_parent_sequence != null) sequencer = m_parent_sequence.get_sequencer();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
+000202  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000202      set_sequencer(sequencer); 
+000202  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000176      if (m_parent_sequence != null) set_depth(m_parent_sequence.get_depth() + 1); 
+000176  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000202      reseed();      
+000202  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction
        
        
          // Function: set_use_sequence_info
          //
        
 000202   function void set_use_sequence_info(bit value);
+000202  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000202     m_use_sequence_info = value;
+000202  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction
        
        
          // Function: get_use_sequence_info
          //
          // These methods are used to set and get the status of the use_sequence_info
          // bit. Use_sequence_info controls whether the sequence information
          // (sequencer, parent_sequence, sequence_id, etc.) is printed, copied, or
          // recorded. When use_sequence_info is the default value of 0, then the
          // sequence information is not used. When use_sequence_info is set to 1,
          // the sequence information will be used in printing and copying.
        
%000000   function bit get_use_sequence_info();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000     return (m_use_sequence_info);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction
        
        
          // Function: set_id_info
          //
          // Copies the sequence_id and transaction_id from the referenced item into
          // the calling item.  This routine should always be used by drivers to
          // initialize responses for future compatibility.
        
%000000   function void set_id_info(uvm_sequence_item item);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000     if (item == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000       uvm_report_fatal(get_full_name(), "set_id_info called with null parameter", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
            end
%000000     this.set_transaction_id(item.get_transaction_id());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000     this.set_sequence_id(item.get_sequence_id());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction
        
        
          // Function: set_sequencer
          //
          // Sets the default sequencer for the sequence to sequencer.  It will take
          // effect immediately, so it should not be called while the sequence is
          // actively communicating with the sequencer.
        
 000553   virtual function void set_sequencer(uvm_sequencer_base sequencer);
+000553  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000553     m_sequencer = sequencer;
+000553  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000553     m_set_p_sequencer();
+000553  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction
        
        
          // Function: get_sequencer
          //
          // Returns a reference to the default sequencer used by this sequence.
        
 000353   function uvm_sequencer_base get_sequencer();
+000353  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000353     return m_sequencer;
+000353  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction
        
        
          // Function: set_parent_sequence
          //
          // Sets the parent sequence of this sequence_item.  This is used to identify
          // the source sequence of a sequence_item.
        
 000176   function void set_parent_sequence(uvm_sequence_base parent);
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000176     m_parent_sequence = parent;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction
        
        
          // Function: get_parent_sequence
          //
          // Returns a reference to the parent sequence of any sequence on which this
          // method was called. If this is a parent sequence, the method returns null.
        
 000555   function uvm_sequence_base get_parent_sequence();
+000555  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000555     return (m_parent_sequence);
+000555  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction 
        
        
          // Function: set_depth
          //
          // The depth of any sequence is calculated automatically.  However, the user
          // may use  set_depth to specify the depth of a particular sequence. This
          // method will override the automatically calculated depth, even if it is
          // incorrect.  
        
 000176   function void set_depth(int value);
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000176     m_depth = value;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction
        
        
          // Function: get_depth
          //
          // Returns the depth of a sequence from it's parent.  A  parent sequence will
          // have a depth of 1, it's child will have a depth  of 2, and it's grandchild
          // will have a depth of 3.
        
 000176   function int get_depth();
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
        
            // If depth has been set or calculated, then use that
~000176     if (m_depth != -1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
+000176  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000       return (m_depth);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
            end
        
            // Calculate the depth, store it, and return the value
~000176     if (m_parent_sequence == null) begin
+000176  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000176       m_depth = 1;
+000176  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000     end else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000       m_depth = m_parent_sequence.get_depth() + 1;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
            end
        
 000176     return (m_depth);
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction 
        
        
          // Function: is_item
          //
          // This function may be called on any sequence_item or sequence. It will
          // return 1 for items and 0 for sequences (which derive from this class).
        
%000000   virtual function bit is_item();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000     return(1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction
        
        
          // Function- get_full_name
          //
          // Internal method; overrides must follow same naming convention
        
 000378   function string get_full_name();
+000378  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000176     if(m_parent_sequence != null) 
+000176  point: type=line comment=elsif hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000176       get_full_name = {m_parent_sequence.get_full_name(), "."};
+000176  point: type=line comment=elsif hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000175     else if(m_sequencer!=null)
+000027  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
+000175  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000027       get_full_name = {m_sequencer.get_full_name(), "."};
+000027  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
~000378     if(get_name() != "") 
+000378  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000378       get_full_name = {get_full_name, get_name()};
+000378  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000       get_full_name = {get_full_name, "_item"};
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
            end
          endfunction
        
        
          // Function: get_root_sequence_name
          //
          // Provides the name of the root sequence (the top-most parent sequence).
        
 000176   function string get_root_sequence_name();
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000176     uvm_sequence_base root_seq;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000176     root_seq = get_root_sequence();
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000     if (root_seq == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000       return "";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
            else
%000000       return root_seq.get_name();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction
        
        
          // Function- m_set_p_sequencer
          //
          // Internal method
        
 000553   virtual function void m_set_p_sequencer();
+000553  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000553     return;
+000553  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction  
        
        
          // Function: get_root_sequence
          //
          // Provides a reference to the root sequence (the top-most parent sequence).
        
 000176   function uvm_sequence_base get_root_sequence();
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000176     uvm_sequence_item root_seq_base;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000176     uvm_sequence_base root_seq;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000176     root_seq_base = this;
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000176     while(1) begin
+000176  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
~000176       if(root_seq_base.get_parent_sequence()!=null) begin
+000176  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000176         root_seq_base = root_seq_base.get_parent_sequence();
+000176  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000176         $cast(root_seq, root_seq_base);
+000176  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
              end
              else
%000000         return root_seq;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
            end
          endfunction
        
        
          // Function: get_sequence_path
          //
          // Provides a string of names of each sequence in the full hierarchical
          // path. A "." is used as the separator between each sequence.
        
%000001   function string get_sequence_path();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000001     uvm_sequence_item this_item;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000001     string seq_path;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000001     this_item = this;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000001     seq_path = this.get_name();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000     while(1) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000       if(this_item.get_parent_sequence()!=null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000         this_item = this_item.get_parent_sequence();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000         seq_path = {this_item.get_name(), ".", seq_path};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
              end
              else
%000000         return seq_path;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
            end
          endfunction
        
        
          //---------------------------
          // Group: Reporting Interface
          //---------------------------
          //
          // Sequence items and sequences will use the sequencer which they are
          // associated with for reporting messages. If no sequencer has been set
          // for the item/sequence using <set_sequencer> or indirectly via 
          // <uvm_sequence_base::start_item> or <uvm_sequence_base::start>),
          // then the global reporter will be used.
        
          // The sequence path string is an on-demand string. To avoid building this name
          // information continuously, we save the info here. The m_get_client_info function
          // should only be called for a message that has passed the is_enabled check, 
          // e.g. from the `uvm_info macro.
          protected string m_client_str;
          protected uvm_report_object m_client;
          protected uvm_report_handler m_rh;
        
 000225   virtual function string m_get_client_info (output uvm_report_object client);
+000225  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000001     if(m_client_str != "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000       client = m_client;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000       return m_client_str;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
            end
%000001     if(m_sequencer != null)
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000001       m_client = m_sequencer;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
            else 
%000000       m_client = uvm_root::get();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000225     m_rh = m_client.get_report_handler();
+000225  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000225     client = m_client;
+000225  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          
 000225     m_client_str = client.get_full_name();
+000225  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000001     if(m_client_str == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000       m_client_str = {"reporter@@", get_sequence_path()};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
            else
%000001       m_client_str = {m_client_str,"@@", get_sequence_path()};
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000225     return m_client_str;
+000225  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction
        
          // Function: uvm_report
%000000   virtual function void uvm_report( uvm_severity severity,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
                                            string id,
                                            string message,
                                            int verbosity = (severity == uvm_severity'(UVM_ERROR)) ? UVM_LOW :
                                                            (severity == uvm_severity'(UVM_FATAL)) ? UVM_NONE : UVM_MEDIUM,
                                            string filename = "",
                                            int line = 0);
%000000       uvm_report_object client;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000       string str = m_get_client_info(client);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
        
%000000       m_rh.report(severity, str, id, message, verbosity, filename,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000                   line, client);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction
            
          // Function: uvm_report_info
        
 000225   virtual function void uvm_report_info( string id,
+000225  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
                                                 string message,
                                                 int verbosity = UVM_MEDIUM,
                                                 string filename = "",
                                                 int line = 0);
 000225     uvm_report_object client;
+000225  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000225     string str = m_get_client_info(client);
+000225  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
        
 000225     m_rh.report(UVM_INFO, str, id, message, verbosity, filename,
+000225  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
 000225       line, client);
+000225  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction
        
          // Function: uvm_report_warning
        
%000000   virtual function void uvm_report_warning( string id,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
                                                    string message,
                                                    int verbosity = UVM_MEDIUM,
                                                    string filename = "",
                                                    int line = 0);
%000000     uvm_report_object client;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000     string str = m_get_client_info(client);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
        
%000000     m_rh.report(UVM_WARNING, str, id, message, verbosity, filename,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000       line, client);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction
        
          // Function: uvm_report_error
        
%000000   virtual function void uvm_report_error( string id,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
                                                  string message,
                                                  int verbosity = UVM_LOW,
                                                  string filename = "",
                                                  int line = 0);
%000000     uvm_report_object client;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000     string str = m_get_client_info(client);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
        
%000000     m_rh.report(UVM_ERROR, str, id, message, verbosity, filename,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000       line, client);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction
        
          // Function: uvm_report_fatal
          //
          // These are the primary reporting methods in the UVM. uvm_sequence_item
          // derived types delegate these functions to their associated sequencer
          // if they have one, or to the global reporter. See <uvm_report_object::Reporting>
          // for details on the messaging functions.
        
%000000   virtual function void uvm_report_fatal( string id,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
                                                  string message,
                                                  int verbosity = UVM_NONE,
%000000                                           string filename = "",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000                                           int line = 0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000     uvm_report_object client;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000     string str = m_get_client_info(client);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
        
%000000     m_rh.report(UVM_FATAL, str, id, message, verbosity, filename,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000       line, client);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction
        
        
 000225   function int uvm_report_enabled(int verbosity, 
+000225  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
                                  uvm_severity severity=UVM_INFO, string id="");
~000224     if(m_client == null) begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
+000224  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000001       if(m_sequencer != null) m_client = m_sequencer;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000       else m_client = uvm_root::get();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
            end
%000000     if (m_client.get_report_verbosity_level(severity, id) < verbosity ||
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
                m_client.get_report_action(severity,id) == uvm_action'(UVM_NO_ACTION))
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
            else
%000000       return 1;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
          endfunction
        
        
          // Function- do_print
          //
          // Internal method
        
%000000   function void do_print (uvm_printer printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000     string temp_str0, temp_str1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000     int depth = get_depth();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000     super.do_print(printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000     if(print_sequence_info || m_use_sequence_info) begin
-000000  point: type=expr comment=(m_use_sequence_info==1) => 1 hier=uvm_pkg::uvm_sequence_item__Vclpkg
-000000  point: type=expr comment=(print_sequence_info==0 && m_use_sequence_info==0) => 0 hier=uvm_pkg::uvm_sequence_item__Vclpkg
-000000  point: type=expr comment=(print_sequence_info==1) => 1 hier=uvm_pkg::uvm_sequence_item__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000       printer.print_int("depth", depth, $bits(depth), UVM_DEC, ".", "int");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000       if(m_parent_sequence != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000         temp_str0 = m_parent_sequence.get_name();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000         temp_str1 = m_parent_sequence.get_full_name();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
              end
%000000       printer.print_string("parent sequence (name)", temp_str0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000       printer.print_string("parent sequence (full name)", temp_str1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000       temp_str1 = "";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000       if(m_sequencer != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequence_item__Vclpkg
%000000         temp_str1 = m_sequencer.get_full_name();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
              end
%000000       printer.print_string("sequencer", temp_str1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequence_item__Vclpkg
            end
          endfunction
        
          /*
          virtual task pre_do(bit is_item);
            return;
          endtask
        
          virtual task body();
            return;
          endtask  
        
          virtual function void mid_do(uvm_sequence_item this_item);
            return;
          endfunction
          
          virtual function void post_do(uvm_sequence_item this_item);
            return;
          endfunction
        
          virtual task wait_for_grant(int item_priority = -1, bit  lock_request = 0);
            return;
          endtask
        
          virtual function void send_request(uvm_sequence_item request, bit rerandomize = 0);
            return;
          endfunction
        
          virtual task wait_for_item_done(int transaction_id = -1);
            return;
          endtask
          */
        
        endclass
        

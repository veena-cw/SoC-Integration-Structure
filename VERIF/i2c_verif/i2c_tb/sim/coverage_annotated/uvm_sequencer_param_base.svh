//      // verilator_coverage annotation
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
        
        
        //------------------------------------------------------------------------------
        //
        // CLASS: uvm_sequencer_param_base #(REQ,RSP)
        //
        // Extends <uvm_sequencer_base> with an API depending on specific
        // request (REQ) and response (RSP) types.
        //------------------------------------------------------------------------------
        
        class uvm_sequencer_param_base #(type REQ = uvm_sequence_item,
                                         type RSP = REQ) extends uvm_sequencer_base;
        
          typedef uvm_sequencer_param_base #( REQ , RSP) this_type;
          typedef REQ req_type;
          typedef RSP rsp_type;
        
          REQ m_last_req_buffer[$];
          RSP m_last_rsp_buffer[$];
        
%000001   protected int m_num_last_reqs = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000001   protected int num_last_items = m_num_last_reqs;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000001   protected int m_num_last_rsps = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
          protected int m_num_reqs_sent;
          protected int m_num_rsps_received;
          uvm_sequencer_analysis_fifo #(RSP) sqr_rsp_analysis_fifo;
        
        
          // Function: new
          //
          // Creates and initializes an instance of this class using the normal 
          // constructor arguments for uvm_component: name is the name of the instance,
          // and parent is the handle to the hierarchical parent, if any.
          //
          extern function new (string name, uvm_component parent);
        
        
          // Function: send_request
          //
          // The send_request function may only be called after a wait_for_grant call.
          // This call will send the request item, t,  to the sequencer pointed to by
          // sequence_ptr. The sequencer will forward it to the driver. If rerandomize
          // is set, the item will be randomized before being sent to the driver.
          //
          extern virtual function void send_request(uvm_sequence_base sequence_ptr,
                                                    uvm_sequence_item t,
                                                    bit rerandomize = 0);
        
        
          // Function: get_current_item
          //
          // Returns the request_item currently being executed by the sequencer. If the
          // sequencer is not currently executing an item, this method will return null.
          //
          // The sequencer is executing an item from the time that get_next_item or peek
          // is called until the time that get or item_done is called.
          //
          // Note that a driver that only calls get() will never show a current item,
          // since the item is completed at the same time as it is requsted.
          //
%000000   function REQ get_current_item();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000     REQ t;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000     if (m_req_fifo.try_peek(t) == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000     return t;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
          endfunction
        
        
          //----------------
          // Group: Requests
          //----------------
        
          // Function: get_num_reqs_sent
          //
          // Returns the number of requests that have been sent by this sequencer.
          //
          extern function int get_num_reqs_sent();
        
        
          // Function: set_num_last_reqs
          //
          // Sets the size of the last_requests buffer.  Note that the maximum buffer
          // size is 1024.  If max is greater than 1024, a warning is issued, and the
          // buffer is set to 1024.  The default value is 1.
          //
          extern function void set_num_last_reqs(int unsigned max);
        
        
          // Function: get_num_last_reqs
          //
          // Returns the size of the last requests buffer, as set by set_num_last_reqs.
        
          extern function int unsigned get_num_last_reqs();
        
        
          // Function: last_req
          //
          // Returns the last request item by default.  If n is not 0, then it will get
          // the n�th before last request item.  If n is greater than the last request
          // buffer size, the function will return null.
          //
%000000   function REQ last_req(int unsigned n = 0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000     if(n > m_num_last_reqs) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000       uvm_report_warning("HSTOB",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000         $sformatf("Invalid last access (%0d), the max history is %0d", n,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000         m_num_last_reqs));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
            end
%000000     if(n == m_last_req_buffer.size())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
          
%000000     return m_last_req_buffer[n];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
          endfunction
        
        
        
          //-----------------
          // Group: Responses
          //-----------------
        
          // Port: rsp_export
          //
          // Drivers or monitors can connect to this port to send responses
          // to the sequencer.  Alternatively, a driver can send responses 
          // via its seq_item_port.
          //
          //|  seq_item_port.item_done(response)
          //|  seq_item_port.put(response)
          //|  rsp_port.write(response)   <--- via this export
          //
          // The rsp_port in the driver and/or monitor must be connected to the
          // rsp_export in this sequencer in order to send responses through the
          // response analysis port.
          
          uvm_analysis_export #(RSP) rsp_export;
        
        
          // Function: get_num_rsps_received
          //
          // Returns the number of responses received thus far by this sequencer.
        
          extern function int get_num_rsps_received();
        
        
          // Function: set_num_last_rsps
          //
          // Sets the size of the last_responses buffer.  The maximum buffer size is
          // 1024. If max is greater than 1024, a warning is issued, and the buffer is
          // set to 1024.  The default value is 1.
          //
          extern function void set_num_last_rsps(int unsigned max);
        
        
          // Function: get_num_last_rsps
          //
          // Returns the max size of the last responses buffer, as set by
          // set_num_last_rsps.
          //
          extern function int unsigned get_num_last_rsps();
        
        
          // Function: last_rsp
          //
          // Returns the last response item by default.  If n is not 0, then it will
          // get the nth-before-last response item.  If n is greater than the last
          // response buffer size, the function will return null.
          //
%000000   function RSP last_rsp(int unsigned n = 0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000     if(n > m_num_last_rsps) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000       uvm_report_warning("HSTOB",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000         $sformatf("Invalid last access (%0d), the max history is %0d", n,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000         m_num_last_rsps));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
            end
%000000     if(n == m_last_rsp_buffer.size())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
          
%000000     return m_last_rsp_buffer[n];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
          endfunction
        
        
        
          // Internal methods and variables; do not use directly; not part of standard
        
          /* local */ extern function void m_last_rsp_push_front(RSP item);
          /* local */ extern function void put_response (RSP t);
          /* local */ extern virtual function void build_phase(uvm_phase phase);
          /* local */ extern virtual function void connect_phase(uvm_phase phase);
          /* local */ extern virtual function void do_print (uvm_printer printer);
          /* local */ extern virtual function void analysis_write(uvm_sequence_item t);
          /* local */ extern function void m_last_req_push_front(REQ item);
        
          /* local */ uvm_tlm_fifo #(REQ) m_req_fifo;
        
        endclass
        
        
        //------------------------------------------------------------------------------
        // IMPLEMENTATION
        //------------------------------------------------------------------------------
        
        // new
        // ---
        
%000001 function uvm_sequencer_param_base::new (string name, uvm_component parent);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000001   super.new(name, parent);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        
%000001   rsp_export              = new("rsp_export", this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000001   sqr_rsp_analysis_fifo   = new("sqr_rsp_analysis_fifo", this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000001   sqr_rsp_analysis_fifo.print_enabled = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000001   m_req_fifo              = new("req_fifo", this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000001   m_req_fifo.print_enabled = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        endfunction
        
        
        // do_print
        // --------
        
%000000 function void uvm_sequencer_param_base::do_print (uvm_printer printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000   super.do_print(printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000   printer.print_int("num_last_reqs", m_num_last_reqs, $bits(m_num_last_reqs), UVM_DEC);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000   printer.print_int("num_last_rsps", m_num_last_rsps, $bits(m_num_last_rsps), UVM_DEC);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        endfunction
        
        
        // connect_phase
        // -------------
        
%000001 function void uvm_sequencer_param_base::connect_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000001   super.connect_phase(phase);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000001   rsp_export.connect(sqr_rsp_analysis_fifo.analysis_export);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        endfunction
        
        
        // build_phase
        // -----------
        
%000001 function void uvm_sequencer_param_base::build_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000001   super.build_phase(phase);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000001   sqr_rsp_analysis_fifo.sequencer_ptr = this;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        endfunction
        
        
        // send_request
        // ------------
        
~000175 function void uvm_sequencer_param_base::send_request(uvm_sequence_base sequence_ptr,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
+000175  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
                                                             uvm_sequence_item t,
                                                             bit rerandomize = 0);
~000175   REQ param_t;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
+000175  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        
~000175   if (sequence_ptr == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
+000175  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000     uvm_report_fatal("SNDREQ", "Send request sequence_ptr is null", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
          end
        
~000175   if (sequence_ptr.m_wait_for_grant_semaphore < 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
+000175  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000     uvm_report_fatal("SNDREQ", "Send request called without wait_for_grant", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
          end
~000175   sequence_ptr.m_wait_for_grant_semaphore--;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
+000175  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
          
~000175   if ($cast(param_t, t)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
+000175  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
~000175     if (rerandomize == 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
+000175  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000       if (!param_t.randomize()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000         uvm_report_warning("SQRSNDREQ", "Failed to rerandomize sequence item in send_request");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
              end
            end
~000175     if (param_t.get_transaction_id() == -1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
+000175  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
~000175       param_t.set_transaction_id(sequence_ptr.m_next_transaction_id++);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
+000175  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
            end
~000175     m_last_req_push_front(param_t);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
+000175  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000   end else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000     uvm_report_fatal(get_name(),$sformatf("send_request failed to cast sequence item"), UVM_NONE);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
          end
        
~000175   param_t.set_sequence_id(sequence_ptr.m_get_sqr_sequence_id(m_sequencer_id, 1));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
+000175  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
~000175   t.set_sequencer(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
+000175  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
~000175   if (m_req_fifo.try_put(param_t) != 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
+000175  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000     uvm_report_fatal(get_full_name(), "Concurrent calls to get_next_item() not supported. Consider using a semaphore to ensure that concurrent processes take turns in the driver", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
          end
        
~000175   m_num_reqs_sent++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
+000175  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
          // Grant any locks as soon as possible
~000175   grant_queued_locks();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
+000175  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        endfunction
        
        
        // put_response
        // ------------
        
%000000 function void uvm_sequencer_param_base::put_response (RSP t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000   uvm_sequence_base sequence_ptr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
          
%000000   if (t == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000     uvm_report_fatal("SQRPUT", "Driver put a null response", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
          end
        
%000000   m_last_rsp_push_front(t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000   m_num_rsps_received++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        
          // Check that set_id_info was called
%000000   if (t.get_sequence_id() == -1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        `ifndef CDNS_NO_SQR_CHK_SEQ_ID
%000000     uvm_report_fatal("SQRPUT", "Driver put a response with null sequence_id", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        `endif
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
          end
            
%000000   sequence_ptr = m_find_sequence(t.get_sequence_id());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        
%000000   if (sequence_ptr != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
            // If the response_handler is enabled for this sequence, then call the response handler
%000000     if (sequence_ptr.get_use_response_handler() == 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000       sequence_ptr.response_handler(t);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
            end
            
%000000     sequence_ptr.put_response(t);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
          end
%000000   else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000     uvm_report_info("Sequencer", 
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000                     $sformatf("Dropping response for sequence %0d, sequence not found.  Probable cause: sequence exited or has been killed", 
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000                               t.get_sequence_id()));
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
          end
        endfunction
        
        
        // analysis_write
        // --------------
        
%000000 function void uvm_sequencer_param_base::analysis_write(uvm_sequence_item t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000   RSP response;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        
%000000   if (!$cast(response, t)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000     uvm_report_fatal("ANALWRT", "Failure to cast analysis port write item", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
          end
%000000   put_response(response);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        endfunction
        
        
        // get_num_reqs_sent
        // -----------------
        
%000000 function int uvm_sequencer_param_base::get_num_reqs_sent();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000   return m_num_reqs_sent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        endfunction
        
        
        // get_num_rsps_received
        // ---------------------
        
%000000 function int uvm_sequencer_param_base::get_num_rsps_received();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000   return m_num_rsps_received;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        endfunction
        
        
        // set_num_last_reqs
        // -----------------
        
%000000 function void uvm_sequencer_param_base::set_num_last_reqs(int unsigned max);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000   if(max > 1024) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000     uvm_report_warning("HSTOB", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000       $sformatf("Invalid last size; 1024 is the maximum and will be used"));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000     max = 1024;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
          end
        
          //shrink the buffer if necessary
%000000   while((m_last_req_buffer.size() != 0) && (m_last_req_buffer.size() > max))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000     void'(m_last_req_buffer.pop_back());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        
%000000   m_num_last_reqs = max;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000   num_last_items = max;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        
        endfunction
        
        
        // get_num_last_reqs
        // -----------------
        
%000000 function int unsigned uvm_sequencer_param_base::get_num_last_reqs();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000   return m_num_last_reqs;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        endfunction
        
        
        // m_last_req_push_front
        // ---------------------
        
~000175 function void uvm_sequencer_param_base::m_last_req_push_front(REQ item);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
+000175  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
~000175   if(!m_num_last_reqs)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
+000175  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
         
~000174   if(m_last_req_buffer.size() == m_num_last_reqs)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
+000174  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
~000174     void'(m_last_req_buffer.pop_back());
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
+000174  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        
~000175   this.m_last_req_buffer.push_front(item);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
+000175  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        endfunction
        
        
        // set_num_last_rsps
        // -----------------
        
%000000 function void uvm_sequencer_param_base::set_num_last_rsps(int unsigned max);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000   if(max > 1024) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000     uvm_report_warning("HSTOB", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000       $sformatf("Invalid last size; 1024 is the maximum and will be used"));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000     max = 1024;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
          end
        
          //shrink the buffer
%000000   while((m_last_rsp_buffer.size() != 0) && (m_last_rsp_buffer.size() > max)) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000     void'(m_last_rsp_buffer.pop_back());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
          end
        
%000000   m_num_last_rsps = max;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        
        endfunction
        
        
        // get_num_last_rsps
        // -----------------
        
%000000 function int unsigned uvm_sequencer_param_base::get_num_last_rsps();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000   return m_num_last_rsps;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        endfunction
        
        
        // m_last_rsp_push_front
        // ---------------------
        
%000000 function void uvm_sequencer_param_base::m_last_rsp_push_front(RSP item);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000   if(!m_num_last_rsps)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
         
%000000   if(m_last_rsp_buffer.size() == m_num_last_rsps)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
%000000     void'(m_last_rsp_buffer.pop_back());
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        
%000000   this.m_last_rsp_buffer.push_front(item);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi49__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi52__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_param_base__pi68__Vclpkg
        endfunction
        
        
        

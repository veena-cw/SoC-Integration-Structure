//      // verilator_coverage annotation
        // $Id: uvm_report_catcher.svh,v 1.1.2.10 2010/04/09 15:03:25 janick Exp $
        //------------------------------------------------------------------------------
        //   Copyright 2007-2010 Mentor Graphics Corporation
        //   Copyright 2007-2009 Cadence Design Systems, Inc.
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
        //------------------------------------------------------------------------------
        
        `ifndef UVM_REPORT_CATCHER_SVH
        `define UVM_REPORT_CATCHER_SVH
        
        typedef class uvm_report_object;
        typedef class uvm_report_handler;
        typedef class uvm_report_server;
        typedef class uvm_report_catcher;
        
        typedef uvm_callbacks    #(uvm_report_object, uvm_report_catcher) uvm_report_cb;
        typedef uvm_callback_iter#(uvm_report_object, uvm_report_catcher) uvm_report_cb_iter;
        
%000000 class sev_id_struct;
-000000  point: type=line comment=block hier=uvm_pkg::sev_id_struct__Vclpkg
          bit sev_specified ;
          bit id_specified ;
          uvm_severity sev ;
          string  id ;
          bit is_on ;
        endclass
        
        //------------------------------------------------------------------------------
        //
        // CLASS: uvm_report_catcher
        //
        // The uvm_report_catcher is used to catch messages issued by the uvm report
        // server. Catchers are
        // uvm_callbacks#(<uvm_report_object>,uvm_report_catcher) objects,
        // so all factilities in the <uvm_callback> and <uvm_callbacks#(T,CB)>
        // classes are available for registering catchers and controlling catcher
        // state.
        // The uvm_callbacks#(<uvm_report_object>,uvm_report_catcher) class is
        // aliased to ~uvm_report_cb~ to make it easier to use.
        // Multiple report catchers can be 
        // registered with a report object. The catchers can be registered as default 
        // catchers which catch all reports on all <uvm_report_object> reporters,
        // or catchers can be attached to specific report objects (i.e. components). 
        //
        // User extensions of <uvm_report_catcher> must implement the <catch> method in 
        // which the action to be taken on catching the report is specified. The catch 
        // method can return ~CAUGHT~, in which case further processing of the report is 
        // immediately stopped, or return ~THROW~ in which case the (possibly modified) report 
        // is passed on to other registered catchers. The catchers are processed in the order 
        // in which they are registered.
        //
        // On catching a report, the <catch> method can modify the severity, id, action,
        // verbosity or the report string itself before the report is finally issued by
        // the report server. The report can be immediately issued from within the catcher 
        // class by calling the <issue> method.
        //
        // The catcher maintains a count of all reports with FATAL,ERROR or WARNING severity
        // and a count of all reports with FATAL, ERROR or WARNING severity whose severity
        // was lowered. These statistics are reported in the summary of the <uvm_report_server>.
        //
        // This example shows the basic concept of creating a report catching
        // callback and attaching it to all messages that get emitted:
        //
        //| class my_error_demoter extends uvm_report_catcher;
        //|   function new(string name="my_error_demoter");
        //|     super.new(name);
        //|   endfunction
        //|   //This example demotes "MY_ID" errors to an info message
        //|   function action_e catch();
        //|     if(get_severity() == UVM_ERROR && get_id() == "MY_ID")
        //|       set_severity(UVM_INFO);
        //|     return THROW;
        //|   endfunction
        //| endclass
        //|
        //| my_error_demoter demoter = new;
        //| initial begin
        //|  // Catchers are callbacks on report objects (components are report 
        //|  // objects, so catchers can be attached to components).
        //|
        //|  // To affect all reporters, use null for the object
        //|  uvm_report_cb::add(null, demoter); 
        //|
        //|  // To affect some specific object use the specific reporter
        //|  uvm_report_cb::add(mytest.myenv.myagent.mydriver, demoter);
        //|
        //|  // To affect some set of components using the component name
        //|  uvm_report_cb::add_by_name("*.*driver", demoter);
        //| end
        //
        //
        //------------------------------------------------------------------------------
        
        virtual class uvm_report_catcher extends uvm_callback;
        
%000001   `uvm_register_cb(uvm_report_object,uvm_report_catcher)
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
        
          typedef enum { UNKNOWN_ACTION, THROW, CAUGHT} action_e;
        
          local static uvm_severity m_modified_severity;
          local static int m_modified_verbosity;
          local static string m_modified_id;
          local static string m_modified_message;
          local static string m_file_name;
          local static int m_line_number;
          local static uvm_report_object m_client;
          local static uvm_action m_modified_action;
          local static bit m_set_action_called;
          local static uvm_report_server m_server;
          local static string m_name;
          
          local static int m_demoted_fatal;
          local static int m_demoted_error;
          local static int m_demoted_warning;
          local static int m_caught_fatal;
          local static int m_caught_error;
          local static int m_caught_warning;
        
%000001   const static int DO_NOT_CATCH      = 1; 
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000001   const static int DO_NOT_MODIFY     = 2; 
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
          local static int m_debug_flags;
        
          local static  uvm_severity  m_orig_severity;
          local static  uvm_action    m_orig_action;
          local static  string        m_orig_id;
          local static  int           m_orig_verbosity;
          local static  string        m_orig_message;
        
          local static  bit do_report;
          
          // Function: new
          //
          // Create a new report catcher. The name argument is optional, but
          // should generally be provided to aid in debugging.
        
%000000   function new(string name = "uvm_report_catcher");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     do_report = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
          endfunction    
        
          // Group: Current Message State
        
          // Function: get_client
          //
          // Returns the <uvm_report_object> that has generated the message that
          // is currently being processes.
        
%000000   function uvm_report_object get_client();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     return this.m_client; 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
          endfunction
        
          // Function: get_severity
          //
          // Returns the <uvm_severity> of the message that is currently being
          // processed. If the severity was modified by a previously executed
          // catcher object (which re-threw the message), then the returned 
          // severity is the modified value.
        
%000000   function uvm_severity get_severity();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     return this.m_modified_severity;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
          endfunction
          
          // Function: get_context
          //
          // Returns the context (source) of the message that is currently being
          // processed. This is typically the full hierarchical name of the component
          // that issued the message. However, when the message comes via a report
          // handler that is not associated with a component, the context is
          // user-defined.
        
%000000   function string get_context();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     return this.m_name;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
          endfunction
          
          // Function: get_verbosity
          //
          // Returns the verbosity of the message that is currently being
          // processed. If the verbosity was modified by a previously executed
          // catcher (which re-threw the message), then the returned 
          // verbosity is the modified value.
          
%000000   function int get_verbosity();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     return this.m_modified_verbosity;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
          endfunction
          
          // Function: get_id
          //
          // Returns the string id of the message that is currently being
          // processed. If the id was modified by a previously executed
          // catcher (which re-threw the message), then the returned 
          // id is the modified value.
          
%000000   function string get_id();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     return this.m_modified_id;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
          endfunction
          
          // Function: get_message
          //
          // Returns the string message of the message that is currently being
          // processed. If the message was modified by a previously executed
          // catcher (which re-threw the message), then the returned 
          // message is the modified value.
          
%000000   function string get_message();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      return this.m_modified_message;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
          endfunction
          
          // Function: get_action
          //
          // Returns the <uvm_action> of the message that is currently being
          // processed. If the action was modified by a previously executed
          // catcher (which re-threw the message), then the returned 
          // action is the modified value.
          
%000000   function uvm_action get_action();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     return this.m_modified_action;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
          endfunction
          
          // Function: get_fname
          //
          // Returns the file name of the message.
          
%000000   function string get_fname();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     return this.m_file_name;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
          endfunction             
        
          // Function: get_line
          //
          // Returns the line number of the message.
        
%000000   function int get_line();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     return this.m_line_number;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
          endfunction
          
          // Group: Change Message State
        
          // Function: set_severity
          //
          // Change the severity of the message to ~severity~. Any other
          // report catchers will see the modified value.
          
%000000   protected function void set_severity(uvm_severity severity);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     this.m_modified_severity = severity;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
          endfunction
          
          // Function: set_verbosity
          //
          // Change the verbosity of the message to ~verbosity~. Any other
          // report catchers will see the modified value.
        
%000000   protected function void set_verbosity(int verbosity);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     this.m_modified_verbosity = verbosity;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
          endfunction      
        
          // Function: set_id
          //
          // Change the id of the message to ~id~. Any other
          // report catchers will see the modified value.
        
%000000   protected function void set_id(string id);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     this.m_modified_id = id;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
          endfunction
          
          // Function: set_message
          //
          // Change the text of the message to ~message~. Any other
          // report catchers will see the modified value.
        
%000000   protected function void set_message(string message);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     this.m_modified_message = message;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
          endfunction
          
          // Function: set_action
          //
          // Change the action of the message to ~action~. Any other
          // report catchers will see the modified value.
          
%000000   protected function void set_action(uvm_action action);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     this.m_modified_action = action;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     this.m_set_action_called = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
          endfunction
          
          // Group: Debug
             
          // Function: get_report_catcher
          //
          // Returns the first report catcher that has ~name~. 
          
%000000   static function uvm_report_catcher get_report_catcher(string name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     static uvm_report_cb_iter iter = new(null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     get_report_catcher = iter.first();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     while(get_report_catcher != null) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       if(get_report_catcher.get_name() == name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000         return get_report_catcher;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       get_report_catcher = iter.next();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
            end
%000000     return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
          endfunction
        
        
          // Function: print_catcher
          //
          // Prints information about all of the report catchers that are 
          // registered. For finer grained detail, the <uvm_callbacks #(T,CB)::display>
          // method can be used by calling uvm_report_cb::display(<uvm_report_object>).
        
%000000   static function void print_catcher(UVM_FILE file=0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     string msg;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     string enabled;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     uvm_report_catcher catcher;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     static uvm_report_cb_iter iter = new(null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
        
%000000     f_display(file, "-------------UVM REPORT CATCHERS----------------------------");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
        
%000000     catcher = iter.first();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     while(catcher != null) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000        if(catcher.callback_mode())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000         enabled = "ON";        
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
               else
%000000         enabled = "OFF";        
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_catcher__Vclpkg
              
%000000       $swrite(msg, "%20s : %s", catcher.get_name(),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000               enabled);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       f_display(file, msg);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       catcher = iter.next();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
            end
%000000     f_display(file, "--------------------------------------------------------------");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
          endfunction
          
          // Funciton: debug_report_catcher
          //
          // Turn on report catching debug information. ~what~ is a bitwise and of
          // * DO_NOT_CATCH  -- forces catch to be ignored so that all catchers see the
          //   the reports.
          // * DO_NOT_MODIFY -- forces the message to remain unchanged
        
%000000   static function void debug_report_catcher(int what= 0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     m_debug_flags = what;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
          endfunction        
          
          // Group: Callback Interface
         
          // Function: catch
          //
          // This is the method that is called for each registered report catcher.
          // There are no arguments to this function. The <Current Message State>
          // interface methods can be used to access information about the 
          // current message being processed.
        
%000000   pure virtual function action_e catch();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
             
        
          // Group: Reporting
        
           // Function: uvm_report_fatal
           //
           // Issues a fatal message using the current message's report object.
           // This message will bypass any message catching callbacks.
           
%000000    protected function void uvm_report_fatal(string id, string message, int verbosity, string fname = "", int line = 0 );
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      string m;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      uvm_action a;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      UVM_FILE f;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      uvm_report_handler rh;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
             
%000000      rh   = this.m_client.get_report_handler();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      a    = rh.get_action(UVM_FATAL,id);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      f    = rh.get_file_handle(UVM_FATAL,id);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
             
%000000      m    = this.m_server.compose_message(UVM_FATAL,this.m_name, id, message, fname, line);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      this.m_server.process_report(UVM_FATAL, this.m_name, id, message, a, f, fname, line,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000                                   m, verbosity, this.m_client);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
           endfunction  
        
        
           // Function: uvm_report_error
           //
           // Issues a error message using the current message's report object.
           // This message will bypass any message catching callbacks.
           
           
%000000    protected function void uvm_report_error(string id, string message, int verbosity, string fname = "", int line = 0 );
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      string m;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      uvm_action a;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      UVM_FILE f;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      uvm_report_handler rh;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
             
%000000      rh   = this.m_client.get_report_handler();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      a    = rh.get_action(UVM_ERROR,id);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      f    = rh.get_file_handle(UVM_ERROR,id);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
             
%000000      m    = this.m_server.compose_message(UVM_ERROR,this.m_name, id, message, fname, line);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      this.m_server.process_report(UVM_ERROR, this.m_name, id, message, a, f, fname, line,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000                                   m, verbosity, this.m_client);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
           endfunction  
        
        
           // Function: uvm_report_warning
           //
           // Issues a warning message using the current message's report object.
           // This message will bypass any message catching callbacks.
           
%000000    protected function void uvm_report_warning(string id, string message, int verbosity, string fname = "", int line = 0 );
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      string m;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      uvm_action a;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      UVM_FILE f;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      uvm_report_handler rh;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
             
%000000      rh   = this.m_client.get_report_handler();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      a    = rh.get_action(UVM_WARNING,id);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      f    = rh.get_file_handle(UVM_WARNING,id);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
             
%000000      m    = this.m_server.compose_message(UVM_WARNING,this.m_name, id, message, fname, line);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      this.m_server.process_report(UVM_WARNING, this.m_name, id, message, a, f, fname, line,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000                                   m, verbosity, this.m_client);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
           endfunction  
        
        
           // Function: uvm_report_info
           //
           // Issues a info message using the current message's report object.
           // This message will bypass any message catching callbacks.
           
%000000    protected function void uvm_report_info(string id, string message, int verbosity, string fname = "", int line = 0 );
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      string m;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      uvm_action a;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      UVM_FILE f;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      uvm_report_handler rh;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      rh    = this.m_client.get_report_handler();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      a    = rh.get_action(UVM_INFO,id);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      f     = rh.get_file_handle(UVM_INFO,id);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
             
%000000      m     = this.m_server.compose_message(UVM_INFO,this.m_name, id, message, fname, line);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      this.m_server.process_report(UVM_INFO, this.m_name, id, message, a, f, fname, line,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000                                   m, verbosity, this.m_client);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
           endfunction // uvm_report_info
        
            // Function: uvm_report
            //
            // Issues a message using the current message's report object.
            // This message will bypass any message catching callbacks.
        
%000000     protected function void uvm_report(uvm_severity severity, string id, string message, int verbosity, string fname="", int line = 0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000         string m;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000         uvm_action a;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000         UVM_FILE f;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000         uvm_report_handler rh;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000         rh = this.m_client.get_report_handler();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000         a = rh.get_action(severity, id);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000         f = rh.get_file_handle(severity, id);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
        
%000000         m = this.m_server.compose_message(severity, this.m_name, id, message, fname, line);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000         this.m_server.process_report(severity, this.m_name, id, message, a , f, fname, line,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000                                      m, verbosity, this.m_client);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
            endfunction // uvm_report
        
          // Function: issue
          // Immediately issues the message which is currently being processed. This
          // is useful if the message is being ~CAUGHT~ but should still be emitted.
          //
          // Issuing a message will update the report_server stats, possibly multiple 
          // times if the message is not ~CAUGHT~.
        
%000000   protected function void issue();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      string m;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      uvm_action a;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      UVM_FILE f;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      uvm_report_handler rh;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
             
%000000      rh = this.m_client.get_report_handler();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      a  =  this.m_modified_action;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      f  = rh.get_file_handle(this.m_modified_severity,this.m_modified_id);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
             
%000000      m  = this.m_server.compose_message(this.m_modified_severity, this.m_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000                                         this.m_modified_id,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000                                         this.m_modified_message,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000                                         this.m_file_name, this.m_line_number);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000      this.m_server.process_report(this.m_modified_severity, this.m_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000                                   this.m_modified_id, this.m_modified_message,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000                                   a, f, this.m_file_name, this.m_line_number,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000                                   m, this.m_modified_verbosity,this.m_client);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
          endfunction
        
        
          //process_all_report_catchers
          //method called by report_server.report to process catchers
          //
        
 002611   static function int process_all_report_catchers( 
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
            input uvm_report_server server,
            input uvm_report_object client,
            ref uvm_severity severity, 
            input string name, 
            ref string id,
            ref string message,
            ref int verbosity_level,
            ref uvm_action action,
            input string filename,
            input int line 
          );
 002611     int iter;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     uvm_report_catcher catcher;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     int thrown = 1;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     uvm_severity orig_severity;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     static bit in_catcher;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
        
~002611     if(in_catcher == 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
+002611  point: type=branch comment=else hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000         return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
            end
 002611     in_catcher = 1;    
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     uvm_callbacks_base::m_tracing = 0;  //turn off cb tracing so catcher stuff doesn't print
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
        
 002611     m_server             = server;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     m_client             = client;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     orig_severity        = severity;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     m_name               = name;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     m_file_name          = filename;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     m_line_number        = line;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     m_modified_id        = id;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     m_modified_severity  = severity;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     m_modified_message   = message;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     m_modified_verbosity = verbosity_level;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     m_modified_action    = action;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
        
 002611     m_orig_severity  = severity;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     m_orig_id        = id;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     m_orig_verbosity = verbosity_level;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     m_orig_action    = action;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     m_orig_message   = message;      
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
        
 002611     catcher = uvm_report_cb::get_first(iter,client);
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
~002611     while(catcher != null) begin
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       uvm_severity prev_sev;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
        
%000000       if (!catcher.callback_mode()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000         catcher = uvm_report_cb::get_next(iter,client);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000         continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
              end
        
%000000       prev_sev = m_modified_severity;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       m_set_action_called = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       thrown = catcher.process_report_catcher();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
        
              // Set the action to the default action for the new severity
              // if it is still at the default for the previous severity,
              // unless it was explicitly set.
%000000       if (!m_set_action_called &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_catcher__Vclpkg
                  m_modified_severity != prev_sev &&
%000000           m_modified_action == m_client.get_report_action(prev_sev, "*@&*^*^*#")) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000          m_modified_action = m_client.get_report_action(m_modified_severity, "*@&*^*^*#");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
              end
        
%000000       if(thrown == 0) begin 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000         case(orig_severity)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000           UVM_FATAL:   m_caught_fatal++;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000           UVM_ERROR:   m_caught_error++;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000           UVM_WARNING: m_caught_warning++;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_report_catcher__Vclpkg
                 endcase   
%000000          break;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
              end 
%000000       catcher = uvm_report_cb::get_next(iter,client);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
            end //while
        
            //update counters if message was returned with demoted severity
 002611     case(orig_severity)
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       UVM_FATAL:    
-000000  point: type=line comment=case hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000         if(m_modified_severity < orig_severity)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_catcher__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000           m_demoted_fatal++;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       UVM_ERROR:
-000000  point: type=line comment=case hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000         if(m_modified_severity < orig_severity)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_catcher__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000           m_demoted_error++;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
 000325       UVM_WARNING:
+000325  point: type=line comment=case hier=uvm_pkg::uvm_report_catcher__Vclpkg
~000325         if(m_modified_severity < orig_severity)
+000325  point: type=branch comment=else hier=uvm_pkg::uvm_report_catcher__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000           m_demoted_warning++;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
            endcase
           
 002611     in_catcher = 0;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     uvm_callbacks_base::m_tracing = 1;  //turn tracing stuff back on
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
        
 002611     severity        = m_modified_severity;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     id              = m_modified_id;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     message         = m_modified_message;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     verbosity_level = m_modified_verbosity;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
 002611     action          = m_modified_action;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
        
 002611     return thrown; 
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
          endfunction
        
        
          //process_report_catcher
          //internal method to call user catch() method
          //
        
%000000   local function int process_report_catcher();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
        
%000000     action_e act;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
        
%000000     act = this.catch();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
        
%000000     if(act == UNKNOWN_ACTION)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       this.uvm_report_error("RPTCTHR", {"uvm_report_this.catch() in catcher instance ", this.get_name(), " must return THROW or CAUGHT"}, UVM_NONE, `uvm_file, `uvm_line);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
        
%000000     if(m_debug_flags & DO_NOT_MODIFY) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       m_modified_severity    = m_orig_severity;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       m_modified_id          = m_orig_id;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       m_modified_verbosity   = m_orig_verbosity;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       m_modified_action      = m_orig_action;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       m_modified_message     = m_orig_message;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
            end     
        
%000000     if(act == CAUGHT  && !(m_debug_flags & DO_NOT_CATCH)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
            end  
        
%000000     return 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
        
          endfunction
        
          //f_display
          //internal method to check if file is open
          //
          
%000000   local static function void f_display(UVM_FILE file, string str);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000     if (file == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       $display("%s", str);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
            else
%000000       $fdisplay(file, "%s", str);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_catcher__Vclpkg
          endfunction
        
          // Function: summarize_report_catcher
          //
          // This function is called automatically by <uvm_report_server::summarize()>.
          // It prints the statistics for the active catchers.
        
%000001   static function void summarize_report_catcher(UVM_FILE file);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000001     string s;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000001     if(do_report) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       f_display(file, "");   
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       f_display(file, "--- UVM Report catcher Summary ---");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       f_display(file, "");   
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       f_display(file, "");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
          
%000000       $sformat(s, "Number of demoted UVM_FATAL reports  :%5d", m_demoted_fatal);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       f_display(file,s);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
          
%000000       $sformat(s, "Number of demoted UVM_ERROR reports  :%5d", m_demoted_error);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       f_display(file,s);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
          
%000000       $sformat(s, "Number of demoted UVM_WARNING reports:%5d", m_demoted_warning);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       f_display(file,s);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
        
%000000       $sformat(s, "Number of caught UVM_FATAL reports   :%5d", m_caught_fatal);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       f_display(file,s);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
          
%000000       $sformat(s, "Number of caught UVM_ERROR reports   :%5d", m_caught_error);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       f_display(file,s);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
          
%000000       $sformat(s, "Number of caught UVM_WARNING reports :%5d", m_caught_warning);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
%000000       f_display(file,s);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_catcher__Vclpkg
            end
          endfunction
        
        endclass
        
        `endif // UVM_REPORT_CATCHER_SVH
        

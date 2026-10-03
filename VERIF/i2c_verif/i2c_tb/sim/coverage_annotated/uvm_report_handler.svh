//      // verilator_coverage annotation
        //
        //------------------------------------------------------------------------------
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
        //------------------------------------------------------------------------------
        
        `ifndef UVM_REPORT_HANDLER_SVH
        `define UVM_REPORT_HANDLER_SVH
        
        typedef class uvm_report_object;
        typedef class uvm_report_server;
        
        //------------------------------------------------------------------------------
        //
        // CLASS: uvm_report_handler
        //
        // The uvm_report_handler is the class to which most methods in
        // <uvm_report_object> delegate. It stores the maximum verbosity, actions,
        // and files that affect the way reports are handled. 
        //
        // The report handler is not intended for direct use. See <uvm_report_object>
        // for information on the UVM reporting mechanism.
        //
        // The relationship between <uvm_report_object> (a base class for uvm_component)
        // and uvm_report_handler is typically one to one, but it can be many to one
        // if several uvm_report_objects are configured to use the same
        // uvm_report_handler_object. See <uvm_report_object::set_report_handler>.
        //
        // The relationship between uvm_report_handler and <uvm_report_server> is many
        // to one. 
        //
        //------------------------------------------------------------------------------
        
        typedef uvm_pool#(string, uvm_action) uvm_id_actions_array;
        typedef uvm_pool#(string, UVM_FILE) uvm_id_file_array;
        typedef uvm_pool#(string, int) uvm_id_verbosities_array;
        typedef uvm_pool#(uvm_severity, uvm_severity) uvm_sev_override_array;
        
        class uvm_report_handler;
        
          int m_max_verbosity_level;
        
          // internal variables
        
          uvm_action severity_actions[uvm_severity];
        
          uvm_id_actions_array id_actions;
          uvm_id_actions_array severity_id_actions[uvm_severity];
        
          // id verbosity settings : default and severity
          uvm_id_verbosities_array id_verbosities;
          uvm_id_verbosities_array severity_id_verbosities[uvm_severity];
        
          // severity overrides
          uvm_sev_override_array sev_overrides;
          uvm_sev_override_array sev_id_overrides [string];
        
        
          // file handles : default, severity, action, (severity,id)
          UVM_FILE default_file_handle;
          UVM_FILE severity_file_handles[uvm_severity];
 000126   uvm_id_file_array id_file_handles=new;
+000126  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          uvm_id_file_array severity_id_file_handles[uvm_severity];
        
        
          // Function: new
          // 
          // Creates and initializes a new uvm_report_handler object.
        
 000126   function new();
+000126  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
 000126     id_actions=new();
+000126  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
 000126     id_verbosities=new();
+000126  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
 000126     sev_overrides=new();
+000126  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
 000126     initialize;
+000126  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
        
        
          // Function- get_server
          //
          // Internal method called by <uvm_report_object::get_report_server>.
        
%000002   function uvm_report_server get_server();
-000002  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000002     return uvm_report_server::get_server();
-000002  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
        
        
          // Function- set_max_quit_count
          //
          // Internal method called by <uvm_report_object::set_report_max_quit_count>.
        
%000000   function void set_max_quit_count(int max_count);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     uvm_report_server srvr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr = uvm_report_server::get_server();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.set_max_quit_count(max_count);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
        
        
          // Function- summarize
          //
          // Internal method called by <uvm_report_object::report_summarize>.
        
%000001   function void summarize(UVM_FILE file = 0);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000001     uvm_report_server srvr;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000001     srvr = uvm_report_server::get_server();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000001     srvr.summarize(file);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
        
        
          // Function- report_relnotes_banner
          //
          // Internal method called by <uvm_report_object::report_header>.
        
          static local bit m_relnotes_done;
%000002   function void report_relnotes_banner(UVM_FILE file = 0);
-000002  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000002      uvm_report_server srvr;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000001      if (m_relnotes_done) return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
             
%000002      srvr = uvm_report_server::get_server();
-000002  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
             
%000002      srvr.f_display(file,
-000002  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000002                     "\n  ***********       IMPORTANT RELEASE NOTES         ************");
-000002  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
             
%000002      m_relnotes_done = 1;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
        
           
          // Function- report_header
          //
          // Internal method called by <uvm_report_object::report_header>
        
%000001   function void report_header(UVM_FILE file = 0);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000001     uvm_report_server srvr;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000001     srvr = uvm_report_server::get_server();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000001     srvr.f_display(file,
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000001       "----------------------------------------------------------------");
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000001     srvr.f_display(file, uvm_revision_string());
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000001     srvr.f_display(file, uvm_mgc_copyright);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000001     srvr.f_display(file, uvm_cdn_copyright);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000001     srvr.f_display(file, uvm_snps_copyright);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000001     srvr.f_display(file, uvm_cy_copyright);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000001     srvr.f_display(file,
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000001       "----------------------------------------------------------------");
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000001     begin
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000001        uvm_cmdline_processor clp;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000001        string args[$];
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
             
%000001        clp = uvm_cmdline_processor::get_inst();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000001        if (clp.get_arg_matches("+UVM_NO_RELNOTES", args)) return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
        
        `ifndef UVM_NO_DEPRECATED
%000001        report_relnotes_banner(file);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000001        srvr.f_display(file, "\n  You are using a version of the UVM library that has been compiled");
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000001        srvr.f_display(file, "  with `UVM_NO_DEPRECATED undefined.");
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000001        srvr.f_display(file, "  See http://www.eda.org/svdb/view.php?id=3313 for more details.");
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        `endif
        
        `ifndef UVM_OBJECT_MUST_HAVE_CONSTRUCTOR
%000001        report_relnotes_banner(file);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000001        srvr.f_display(file, "\n  You are using a version of the UVM library that has been compiled");
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000001        srvr.f_display(file, "  with `UVM_OBJECT_MUST_HAVE_CONSTRUCTOR undefined.");
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000001        srvr.f_display(file, "  See http://www.eda.org/svdb/view.php?id=3770 for more details.");
-000001  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        `endif
        
%000001        if (m_relnotes_done)
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000001           srvr.f_display(file, "\n      (Specify +UVM_NO_RELNOTES to turn off this notice)\n");
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
        
            end
          endfunction
        
        
          // Function- initialize
          // 
          // This method is called by the constructor to initialize the arrays and
          // other variables described above to their default values.
        
 000126   function void initialize();
+000126  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
 000126     set_default_file(0);
+000126  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
 000126     m_max_verbosity_level = UVM_MEDIUM;
+000126  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
 000126     set_defaults();
+000126  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
        
        
          // Function: run_hooks
          //
          // The run_hooks method is called if the <UVM_CALL_HOOK> action is set for a
          // report. It first calls the client's <uvm_report_object::report_hook> method, 
          // followed by the appropriate severity-specific hook method. If either 
          // returns 0, then the report is not processed.
        
%000000   virtual function bit run_hooks(uvm_report_object client,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
                                         uvm_severity severity,
                                         string id,
                                         string message,
                                         int verbosity,
                                         string filename,
                                         int line);
        
%000000     bit ok;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000000     ok = client.report_hook(id, message, verbosity, filename, line);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000000     case(severity)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       UVM_INFO:
-000000  point: type=line comment=case hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000        ok &= client.report_info_hook   (id, message, verbosity, filename, line);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       UVM_WARNING:
-000000  point: type=line comment=case hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000        ok &= client.report_warning_hook(id, message, verbosity, filename, line);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       UVM_ERROR:
-000000  point: type=line comment=case hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000        ok &= client.report_error_hook  (id, message, verbosity, filename, line);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       UVM_FATAL:
-000000  point: type=line comment=case hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000        ok &= client.report_fatal_hook  (id, message, verbosity, filename, line);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_report_handler__Vclpkg
            endcase
        
%000000     return ok;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
          endfunction
        
          
          // Function- get_severity_id_file
          //
          // Return the file id based on the severity and the id
        
 002611   local function UVM_FILE get_severity_id_file(uvm_severity severity, string id);
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
 002611     uvm_id_file_array array;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
~002611     if(severity_id_file_handles.exists(severity)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
+002611  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       array = severity_id_file_handles[severity];      
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       if(array.exists(id))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000         return array.get(id);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
            end
        
        
~002611     if(id_file_handles.exists(id))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
+002611  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       return id_file_handles.get(id);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000000     if(severity_file_handles.exists(severity))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       return severity_file_handles[severity];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
        
 002611     return default_file_handle;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
          endfunction
        
        
          // Function- set_verbosity_level
          //
          // Internal method called by uvm_report_object.
        
 000104   function void set_verbosity_level(int verbosity_level);
+000104  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
 000104     m_max_verbosity_level = verbosity_level;
+000104  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
        
        
          // Function: get_verbosity_level
          //
          // Returns the verbosity associated with the given ~severity~ and ~id~.
          // 
          // First, if there is a verbosity associated with the ~(severity,id)~ pair,
          // return that.  Else, if there is an verbosity associated with the ~id~, return
          // that.  Else, return the max verbosity setting.
        
 020707   function int get_verbosity_level(uvm_severity severity=UVM_INFO, string id="" );
+020707  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
 020707     uvm_id_verbosities_array array;
+020707  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
~020707     if(severity_id_verbosities.exists(severity)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
+020707  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       array = severity_id_verbosities[severity];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       if(array.exists(id)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000         return array.get(id);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
              end
            end
        
~020707     if(id_verbosities.exists(id)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
+020707  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       return id_verbosities.get(id);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
            end
        
 020707     return m_max_verbosity_level;
+020707  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
          endfunction
        
        
          // Function: get_action
          //
          // Returns the action associated with the given ~severity~ and ~id~.
          // 
          // First, if there is an action associated with the ~(severity,id)~ pair,
          // return that.  Else, if there is an action associated with the ~id~, return
          // that.  Else, if there is an action associated with the ~severity~, return
          // that. Else, return the default action associated with the ~severity~.
        
 019621   function uvm_action get_action(uvm_severity severity, string id);
+019621  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
 019621     uvm_id_actions_array array;
+019621  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
~019621     if(severity_id_actions.exists(severity)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
+019621  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       array = severity_id_actions[severity];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       if(array.exists(id))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000         return array.get(id);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
            end
        
~019621     if(id_actions.exists(id))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
+019621  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       return id_actions.get(id);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
        
 019621     return severity_actions[severity];
+019621  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
          endfunction
        
        
          // Function: get_file_handle
          //
          // Returns the file descriptor associated with the given ~severity~ and ~id~.
          //
          // First, if there is a file handle associated with the ~(severity,id)~ pair,
          // return that. Else, if there is a file handle associated with the ~id~, return
          // that. Else, if there is an file handle associated with the ~severity~, return
          // that. Else, return the default file handle.
        
 002611   function UVM_FILE get_file_handle(uvm_severity severity, string id);
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
 002611     UVM_FILE file;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          
 002611     file = get_severity_id_file(severity, id);
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
~002611     if (file != 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
+002611  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       return file;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
          
~002611     if (id_file_handles.exists(id)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
+002611  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       file = id_file_handles.get(id);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       if (file != 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000         return file;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
            end
        
~002611     if (severity_file_handles.exists(severity)) begin
+002611  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
 002611       file = severity_file_handles[severity];
+002611  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
~002611       if(file != 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
+002611  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000         return file;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
            end
        
 002611     return default_file_handle;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
        
        
          // Function: report
          //
          // This is the common handler method used by the four core reporting methods
          // (e.g., uvm_report_error) in <uvm_report_object>.
        
 002611   virtual function void report(
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
              uvm_severity severity,
              string name,
              string id,
              string message,
              int verbosity_level=UVM_MEDIUM,
              string filename="",
              int line=0,
              uvm_report_object client=null
              );
        
 002611     uvm_report_server srvr;
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
 002611     srvr = uvm_report_server::get_server();
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
~002611     if (client==null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
+002611  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       client = uvm_root::get();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
        
            // Check for severity overrides and apply them before calling the server.
            // An id specific override has precedence over a generic severity override.
~002611     if(sev_id_overrides.exists(id)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
+002611  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       if(sev_id_overrides[id].exists(severity)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000         severity = sev_id_overrides[id].get(severity);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
              end
            end
 002611     else begin
+002611  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
~002611       if(sev_overrides.exists(severity)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
+002611  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000          severity = sev_overrides.get(severity);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
              end
            end
        
 002611     srvr.report(severity,name,id,message,verbosity_level,filename,line,client);
+002611  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
            
          endfunction
        
        
          // Function: format_action
          //
          // Returns a string representation of the ~action~, e.g., "DISPLAY".
        
%000000   function string format_action(uvm_action action);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     string s;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000000     if(uvm_action_type'(action) == UVM_NO_ACTION) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       s = "NO ACTION";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
            end
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       s = "";
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       if(action & UVM_DISPLAY)   s = {s, "DISPLAY "};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       if(action & UVM_LOG)       s = {s, "LOG "};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       if(action & UVM_COUNT)     s = {s, "COUNT "};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       if(action & UVM_EXIT)      s = {s, "EXIT "};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       if(action & UVM_CALL_HOOK) s = {s, "CALL_HOOK "};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       if(action & UVM_STOP)      s = {s, "STOP "};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
            end
        
%000000     return s;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
        
        
          // Function- set_default
          //
          // Internal method for initializing report handler.
        
 000126   function void set_defaults();
+000126  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
 000126     set_severity_action(UVM_INFO,    UVM_DISPLAY);
+000126  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
 000126     set_severity_action(UVM_WARNING, UVM_DISPLAY);
+000126  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
 000126     set_severity_action(UVM_ERROR,   UVM_DISPLAY | UVM_COUNT);
+000126  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
 000126     set_severity_action(UVM_FATAL,   UVM_DISPLAY | UVM_EXIT);
+000126  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
 000126     set_severity_file(UVM_INFO, default_file_handle);
+000126  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
 000126     set_severity_file(UVM_WARNING, default_file_handle);
+000126  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
 000126     set_severity_file(UVM_ERROR,   default_file_handle);
+000126  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
 000126     set_severity_file(UVM_FATAL,   default_file_handle);
+000126  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
        
        
          // Function- set_severity_action
          // Function- set_id_action
          // Function- set_severity_id_action
          // Function- set_id_verbosity
          // Function- set_severity_id_verbosity
          //
          // Internal methods called by uvm_report_object.
        
 000504   function void set_severity_action(input uvm_severity severity,
+000504  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
                                            input uvm_action action);
 000504     severity_actions[severity] = action;
+000504  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
        
 000036   function void set_id_action(input string id, input uvm_action action);
+000036  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
 000036     id_actions.add(id, action);
+000036  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
        
%000000   function void set_severity_id_action(uvm_severity severity,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
                                               string id,
                                               uvm_action action);
%000000     if(!severity_id_actions.exists(severity))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       severity_id_actions[severity] = new;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     severity_id_actions[severity].add(id,action);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
          
%000000   function void set_id_verbosity(input string id, input int verbosity);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     id_verbosities.add(id, verbosity);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
        
%000000   function void set_severity_id_verbosity(uvm_severity severity,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
                                               string id,
                                               int verbosity);
%000000     if(!severity_id_verbosities.exists(severity))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       severity_id_verbosities[severity] = new;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     severity_id_verbosities[severity].add(id,verbosity);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
        
          // Function- set_default_file
          // Function- set_severity_file
          // Function- set_id_file
          // Function- set_severity_id_file
          //
          // Internal methods called by uvm_report_object.
        
 000126   function void set_default_file (UVM_FILE file);
+000126  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
 000126     default_file_handle = file;
+000126  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
        
 000504   function void set_severity_file (uvm_severity severity, UVM_FILE file);
+000504  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
 000504     severity_file_handles[severity] = file;
+000504  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
        
%000000   function void set_id_file (string id, UVM_FILE file);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     id_file_handles.add(id, file);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
        
%000000   function void set_severity_id_file(uvm_severity severity,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
                                             string id, UVM_FILE file);
%000000     if(!severity_id_file_handles.exists(severity))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       severity_id_file_handles[severity] = new;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     severity_id_file_handles[severity].add(id, file);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
        
%000000   function void set_severity_override(uvm_severity cur_severity,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
                                              uvm_severity new_severity);
%000000     sev_overrides.add(cur_severity, new_severity);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
        
%000000   function void set_severity_id_override(uvm_severity cur_severity,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
                                                 string id,
                                                 uvm_severity new_severity);
            // has precedence over set_severity_override
            // silently override previous setting
%000000     uvm_sev_override_array arr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     if(!sev_id_overrides.exists(id))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       sev_id_overrides[id] = new;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
         
%000000     sev_id_overrides[id].add(cur_severity, new_severity);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
        
          
          // Function- dump_state
          //
          // Internal method for debug.
        
%000000   function void dump_state();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000000     string s;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     uvm_action a;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     string idx;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     UVM_FILE file;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     uvm_report_server srvr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
         
%000000     uvm_id_actions_array id_a_ary;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     uvm_id_verbosities_array id_v_ary;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     uvm_id_file_array id_f_ary;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000000     srvr = uvm_report_server::get_server();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000000     srvr.f_display(0,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       "----------------------------------------------------------------------");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, "report handler state dump");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, "");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
            // verbosities
        
%000000     srvr.f_display(0, "");   
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, "+-----------------+");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, "|   Verbosities   |");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, "+-----------------+");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, "");   
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000000     $sformat(s, "max verbosity level = %d", m_max_verbosity_level);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, s);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000000     srvr.f_display(0, "*** verbosities by id");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000000     if(id_verbosities.first(idx))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     do begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       uvm_verbosity v = uvm_verbosity'(id_verbosities.get(idx));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       $sformat(s, "[%s] --> %s", idx, v.name());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       srvr.f_display(0, s);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     end while(id_verbosities.next(idx));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
            // verbosities by id
        
%000000     srvr.f_display(0, "");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, "*** verbosities by id and severity");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000000     foreach( severity_id_verbosities[severity] ) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       uvm_severity_type sev = uvm_severity_type'(severity);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       id_v_ary = severity_id_verbosities[severity];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       if(id_v_ary.first(idx))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       do begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000         uvm_verbosity v = uvm_verbosity'(id_v_ary.get(idx));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000         $sformat(s, "%s:%s --> %s",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000            sev.name(), idx, v.name());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000         srvr.f_display(0, s);        
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       end while(id_v_ary.next(idx));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
            end
        
            // actions
        
%000000     srvr.f_display(0, "");   
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, "+-------------+");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, "|   actions   |");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, "+-------------+");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, "");   
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000000     srvr.f_display(0, "*** actions by severity");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     foreach( severity_actions[severity] ) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       uvm_severity_type sev = uvm_severity_type'(severity);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       $sformat(s, "%s = %s",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000        sev.name(), format_action(severity_actions[severity]));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       srvr.f_display(0, s);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
            end
        
%000000     srvr.f_display(0, "");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, "*** actions by id");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000000     if(id_actions.first(idx))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     do begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       $sformat(s, "[%s] --> %s", idx, format_action(id_actions.get(idx)));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       srvr.f_display(0, s);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     end while(id_actions.next(idx));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
            // actions by id
        
%000000     srvr.f_display(0, "");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, "*** actions by id and severity");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000000     foreach( severity_id_actions[severity] ) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       uvm_severity_type sev = uvm_severity_type'(severity);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       id_a_ary = severity_id_actions[severity];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       if(id_a_ary.first(idx))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       do begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000         $sformat(s, "%s:%s --> %s",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000            sev.name(), idx, format_action(id_a_ary.get(idx)));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000         srvr.f_display(0, s);        
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       end while(id_a_ary.next(idx));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
            end
        
            // Files
        
%000000     srvr.f_display(0, "");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, "+-------------+");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, "|    files    |");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, "+-------------+");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, "");   
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000000     $sformat(s, "default file handle = %d", default_file_handle);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, s);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000000     srvr.f_display(0, "");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, "*** files by severity");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     foreach( severity_file_handles[severity] ) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       uvm_severity_type sev = uvm_severity_type'(severity);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       file = severity_file_handles[severity];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       $sformat(s, "%s = %d", sev.name(), file);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       srvr.f_display(0, s);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
            end
        
%000000     srvr.f_display(0, "");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, "*** files by id");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000000     if(id_file_handles.first(idx))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     do begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       file = id_file_handles.get(idx);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       $sformat(s, "id %s --> %d", idx, file);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       srvr.f_display(0, s);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     end while (id_file_handles.next(idx));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000000     srvr.f_display(0, "");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000     srvr.f_display(0, "*** files by id and severity");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
        
%000000     foreach( severity_id_file_handles[severity] ) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       uvm_severity_type sev = uvm_severity_type'(severity);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       id_f_ary = severity_id_file_handles[severity];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       if(id_f_ary.first(idx))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       do begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000         $sformat(s, "%s:%s --> %d", sev.name(), idx, id_f_ary.get(idx));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000         srvr.f_display(0, s);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       end while(id_f_ary.next(idx));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
            end
        
%000000     srvr.dump_server_state();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
            
%000000     srvr.f_display(0,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
%000000       "----------------------------------------------------------------------");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_report_handler__Vclpkg
          endfunction
        
        endclass : uvm_report_handler
        
        `endif // UVM_REPORT_HANDLER_SVH
        
        

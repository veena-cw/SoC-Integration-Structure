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
        
        
        // Title: Globals
        
        //------------------------------------------------------------------------------
        //
        // Group: Simulation Control
        //
        //------------------------------------------------------------------------------
        
        // Task: run_test
        //
        // Convenience function for uvm_top.run_test(). See <uvm_root> for more
        // information.
        
%000001 task run_test (string test_name="");
-000001  point: type=line comment=block hier=uvm_pkg
%000001   uvm_root top;
-000001  point: type=line comment=block hier=uvm_pkg
%000001   top = uvm_root::get();
-000001  point: type=line comment=block hier=uvm_pkg
%000001   top.run_test(test_name);
-000001  point: type=line comment=block hier=uvm_pkg
        endtask
        
        
        `ifndef UVM_NO_DEPRECATED
        // Variable- uvm_test_done - DEPRECATED
        //
        // An instance of the <uvm_test_done_objection> class, this object is
        // used by components to coordinate when to end the currently running
        // task-based phase. When all participating components have dropped their
        // raised objections, an implicit call to <global_stop_request> is issued
        // to end the run phase (or any other task-based phase).
        
%000001 uvm_test_done_objection uvm_test_done = uvm_test_done_objection::get();
-000001  point: type=line comment=block hier=uvm_pkg
        
        
        // Method- global_stop_request  - DEPRECATED
        //
        // Convenience function for uvm_test_done.stop_request(). See 
        // <uvm_test_done_objection::stop_request> for more information.
        
%000000 function void global_stop_request();
-000000  point: type=line comment=block hier=uvm_pkg
%000000   uvm_test_done_objection tdo;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   tdo = uvm_test_done_objection::get();
-000000  point: type=line comment=block hier=uvm_pkg
%000000   tdo.stop_request();
-000000  point: type=line comment=block hier=uvm_pkg
        endfunction
        
        
        // Method- set_global_timeout  - DEPRECATED
        //
        // Convenience function for uvm_top.set_timeout(). See 
        // <uvm_root::set_timeout> for more information.  The overridable bit 
        // controls whether subsequent settings will be honored.
        
        
%000000 function void set_global_timeout(time timeout, bit overridable = 1);
-000000  point: type=line comment=block hier=uvm_pkg
%000000   uvm_root top;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   top = uvm_root::get();
-000000  point: type=line comment=block hier=uvm_pkg
%000000   top.set_timeout(timeout,overridable);
-000000  point: type=line comment=block hier=uvm_pkg
        endfunction
        
        
        // Function- set_global_stop_timeout - DEPRECATED
        //
        // Convenience function for uvm_test_done.stop_timeout = timeout.
        // See <uvm_uvm_test_done::stop_timeout> for more information.
        
%000000 function void set_global_stop_timeout(time timeout);
-000000  point: type=line comment=block hier=uvm_pkg
%000000   uvm_test_done_objection tdo;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   tdo = uvm_test_done_objection::get();
-000000  point: type=line comment=block hier=uvm_pkg
%000000   tdo.stop_timeout = timeout;
-000000  point: type=line comment=block hier=uvm_pkg
        endfunction
        `endif
        
        
        //----------------------------------------------------------------------------
        //
        // Group: Reporting
        //
        //----------------------------------------------------------------------------
        
        // Function: uvm_report_enabled
        //
        // Returns 1 if the configured verbosity in ~uvm_top~ is greater than 
        // ~verbosity~ and the action associated with the given ~severity~ and ~id~
        // is not UVM_NO_ACTION, else returns 0.
        // 
        // See also <uvm_report_object::uvm_report_enabled>.
        //
        //
        // Static methods of an extension of uvm_report_object, e.g. uvm_compoent-based
        // objects, can not call ~uvm_report_enabled~ because the call will resolve to
        // the <uvm_report_object::uvm_report_enabled>, which is non-static.
        // Static methods can not call non-static methods of the same class. 
        
 002439 function bit uvm_report_enabled (int verbosity,
+002439  point: type=line comment=block hier=uvm_pkg
                                         uvm_severity severity=UVM_INFO, string id="");
 002439   uvm_root top;
+002439  point: type=line comment=block hier=uvm_pkg
 002439   top = uvm_root::get();
+002439  point: type=line comment=block hier=uvm_pkg
 002439   return top.uvm_report_enabled(verbosity,severity,id);
+002439  point: type=line comment=block hier=uvm_pkg
        endfunction
        
        // Function: uvm_report
        
%000000 function void uvm_report( uvm_severity severity,
-000000  point: type=line comment=block hier=uvm_pkg
                                  string id,
                                  string message,
                                  int verbosity = (severity == uvm_severity'(UVM_ERROR)) ? UVM_LOW :
                                                  (severity == uvm_severity'(UVM_FATAL)) ? UVM_NONE : UVM_MEDIUM,
                                  string filename = "",
                                  int line = 0);
%000000   uvm_root top;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   top = uvm_root::get();
-000000  point: type=line comment=block hier=uvm_pkg
%000000   top.uvm_report(severity, id, message, verbosity, filename, line);
-000000  point: type=line comment=block hier=uvm_pkg
        endfunction 
        
        // Function: uvm_report_info
        
 001575 function void uvm_report_info(string id,
+001575  point: type=line comment=block hier=uvm_pkg
        			      string message,
                                      int verbosity = UVM_MEDIUM,
        			      string filename = "",
        			      int line = 0);
 001575   uvm_root top;
+001575  point: type=line comment=block hier=uvm_pkg
 001575   top = uvm_root::get();
+001575  point: type=line comment=block hier=uvm_pkg
 001575   top.uvm_report_info(id, message, verbosity, filename, line);
+001575  point: type=line comment=block hier=uvm_pkg
        endfunction
        
        
        // Function: uvm_report_warning
        
 000325 function void uvm_report_warning(string id,
+000325  point: type=line comment=block hier=uvm_pkg
                                         string message,
                                         int verbosity = UVM_MEDIUM,
        				 string filename = "",
        				 int line = 0);
 000325   uvm_root top;
+000325  point: type=line comment=block hier=uvm_pkg
 000325   top = uvm_root::get();
+000325  point: type=line comment=block hier=uvm_pkg
 000325   top.uvm_report_warning(id, message, verbosity, filename, line);
+000325  point: type=line comment=block hier=uvm_pkg
        endfunction
        
        
        // Function: uvm_report_error
        
%000000 function void uvm_report_error(string id,
-000000  point: type=line comment=block hier=uvm_pkg
                                       string message,
                                       int verbosity = UVM_LOW,
        			       string filename = "",
        			       int line = 0);
%000000   uvm_root top;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   top = uvm_root::get();
-000000  point: type=line comment=block hier=uvm_pkg
%000000   top.uvm_report_error(id, message, verbosity, filename, line);
-000000  point: type=line comment=block hier=uvm_pkg
        endfunction
        
        
        // Function: uvm_report_fatal
        //
        // These methods, defined in package scope, are convenience functions that
        // delegate to the corresponding component methods in ~uvm_top~. They can be
        // used in module-based code to use the same reporting mechanism as class-based
        // components. See <uvm_report_object> for details on the reporting mechanism. 
        //
        // *Note:* Verbosity is ignored for warnings, errors, and fatals to ensure users
        // do not inadvertently filter them out. It remains in the methods for backward
        // compatibility.
        
%000000 function void uvm_report_fatal(string id,
-000000  point: type=line comment=block hier=uvm_pkg
        	                       string message,
                                       int verbosity = UVM_NONE,
        			       string filename = "",
        			       int line = 0);
%000000   uvm_root top;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   top = uvm_root::get();
-000000  point: type=line comment=block hier=uvm_pkg
%000000   top.uvm_report_fatal(id, message, verbosity, filename, line);
-000000  point: type=line comment=block hier=uvm_pkg
        endfunction
        
        
%000000 function bit uvm_string_to_severity (string sev_str, output uvm_severity sev);
-000000  point: type=line comment=block hier=uvm_pkg
%000000   case (sev_str)
-000000  point: type=line comment=block hier=uvm_pkg
%000000     "UVM_INFO": sev = UVM_INFO;
-000000  point: type=line comment=case hier=uvm_pkg
%000000     "UVM_WARNING": sev = UVM_WARNING;
-000000  point: type=line comment=case hier=uvm_pkg
%000000     "UVM_ERROR": sev = UVM_ERROR;
-000000  point: type=line comment=case hier=uvm_pkg
%000000     "UVM_FATAL": sev = UVM_FATAL;
-000000  point: type=line comment=case hier=uvm_pkg
%000000     default: return 0;
-000000  point: type=line comment=case hier=uvm_pkg
          endcase
%000000   return 1;
-000000  point: type=line comment=block hier=uvm_pkg
        endfunction
        
%000000  function automatic bit uvm_string_to_action (string action_str, output uvm_action action);
-000000  point: type=line comment=block hier=uvm_pkg
%000000   string actions[$];
-000000  point: type=line comment=block hier=uvm_pkg
%000000   uvm_split_string(action_str,"|",actions);
-000000  point: type=line comment=block hier=uvm_pkg
%000000   uvm_string_to_action = 1;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   action = 0;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   foreach(actions[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg
-000000  point: type=line comment=block hier=uvm_pkg
%000000     case (actions[i])
-000000  point: type=line comment=block hier=uvm_pkg
%000000       "UVM_NO_ACTION": action |= UVM_NO_ACTION;
-000000  point: type=line comment=case hier=uvm_pkg
%000000       "UVM_DISPLAY":   action |= UVM_DISPLAY;
-000000  point: type=line comment=case hier=uvm_pkg
%000000       "UVM_LOG":       action |= UVM_LOG;
-000000  point: type=line comment=case hier=uvm_pkg
%000000       "UVM_COUNT":     action |= UVM_COUNT;
-000000  point: type=line comment=case hier=uvm_pkg
%000000       "UVM_EXIT":      action |= UVM_EXIT;
-000000  point: type=line comment=case hier=uvm_pkg
%000000       "UVM_CALL_HOOK": action |= UVM_CALL_HOOK;
-000000  point: type=line comment=case hier=uvm_pkg
%000000       "UVM_STOP":      action |= UVM_STOP;
-000000  point: type=line comment=case hier=uvm_pkg
%000000       default: uvm_string_to_action = 0;
-000000  point: type=line comment=case hier=uvm_pkg
            endcase
          end
        endfunction
        
          
        //------------------------------------------------------------------------------
        //
        // Group: Configuration
        //
        //------------------------------------------------------------------------------
        
        // Function: set_config_int
        //
        // This is the global version of set_config_int in <uvm_component>. This
        // function places the configuration setting for an integral field in a
        // global override table, which has highest precedence over any
        // component-level setting.  See <uvm_component::set_config_int> for
        // details on setting configuration.
        
%000000 function void  set_config_int  (string inst_name,
-000000  point: type=line comment=block hier=uvm_pkg
                                        string field_name,
                                        uvm_bitstream_t value);
%000000   uvm_root top;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   top = uvm_root::get();
-000000  point: type=line comment=block hier=uvm_pkg
%000000   top.set_config_int(inst_name, field_name, value);
-000000  point: type=line comment=block hier=uvm_pkg
        endfunction
        
        
        // Function: set_config_object
        //
        // This is the global version of set_config_object in <uvm_component>. This
        // function places the configuration setting for an object field in a
        // global override table, which has highest precedence over any
        // component-level setting.  See <uvm_component::set_config_object> for
        // details on setting configuration.
        
%000000 function void set_config_object (string inst_name,
-000000  point: type=line comment=block hier=uvm_pkg
                                         string field_name,
                                         uvm_object value,
                                         bit clone=1);
%000000   uvm_root top;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   top = uvm_root::get();
-000000  point: type=line comment=block hier=uvm_pkg
%000000   top.set_config_object(inst_name, field_name, value, clone);
-000000  point: type=line comment=block hier=uvm_pkg
        endfunction
        
        
        // Function: set_config_string
        //
        // This is the global version of set_config_string in <uvm_component>. This
        // function places the configuration setting for an string field in a
        // global override table, which has highest precedence over any
        // component-level setting.  See <uvm_component::set_config_string> for
        // details on setting configuration.
        
%000000 function void set_config_string (string inst_name,  
-000000  point: type=line comment=block hier=uvm_pkg
                                         string field_name,
                                         string value);
%000000   uvm_root top;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   top = uvm_root::get();
-000000  point: type=line comment=block hier=uvm_pkg
%000000   top.set_config_string(inst_name, field_name, value);
-000000  point: type=line comment=block hier=uvm_pkg
        endfunction
        
        
        
        //----------------------------------------------------------------------------
        //
        // Group: Miscellaneous
        //
        //----------------------------------------------------------------------------
        
        
        // Function: uvm_is_match
        //
        // Returns 1 if the two strings match, 0 otherwise.
        //
        // The first string, ~expr~, is a string that may contain '*' and '?'
        // characters. A * matches zero or more characters, and ? matches any single
        // character. The 2nd argument, ~str~, is the string begin matched against.
        // It must not contain any wildcards.
        //
        //----------------------------------------------------------------------------
        
%000000 function bit uvm_is_match (string expr, string str);
-000000  point: type=line comment=block hier=uvm_pkg
%000000   string s;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   s = uvm_glob_to_re(expr);
-000000  point: type=line comment=block hier=uvm_pkg
%000000   return (uvm_re_match(s, str) == 0);
-000000  point: type=line comment=block hier=uvm_pkg
        endfunction
        
        `ifndef UVM_LINE_WIDTH
          `define UVM_LINE_WIDTH 120
        `endif 
        parameter UVM_LINE_WIDTH = `UVM_LINE_WIDTH;
        
        `ifndef UVM_NUM_LINES
          `define UVM_NUM_LINES 120
        `endif
        parameter UVM_NUM_LINES = `UVM_NUM_LINES;
        
        parameter UVM_SMALL_STRING = UVM_LINE_WIDTH*8-1;
        parameter UVM_LARGE_STRING = UVM_LINE_WIDTH*UVM_NUM_LINES*8-1;
        
        
        //----------------------------------------------------------------------------
        //
        // Function: uvm_string_to_bits
        //
        // Converts an input string to its bit-vector equivalent. Max bit-vector
        // length is approximately 14000 characters.
        //----------------------------------------------------------------------------
        
%000000 function logic[UVM_LARGE_STRING:0] uvm_string_to_bits(string str);
-000000  point: type=line comment=block hier=uvm_pkg
%000000   $swrite(uvm_string_to_bits, "%0s", str);
-000000  point: type=line comment=block hier=uvm_pkg
        endfunction
        
        
        //----------------------------------------------------------------------------
        //
        // Function: uvm_bits_to_string
        //
        // Converts an input bit-vector to its string equivalent. Max bit-vector
        // length is approximately 14000 characters.
        //----------------------------------------------------------------------------
        
%000000 function string uvm_bits_to_string(logic [UVM_LARGE_STRING:0] str);
-000000  point: type=line comment=block hier=uvm_pkg
%000000   $swrite(uvm_bits_to_string, "%0s", str);
-000000  point: type=line comment=block hier=uvm_pkg
        endfunction
        
        
        //----------------------------------------------------------------------------
        //
        // Task: uvm_wait_for_nba_region
        //
        // Callers of this task will not return until the NBA region, thus allowing
        // other processes any number of delta cycles (#0) to settle out before
        // continuing. See <uvm_sequencer_base::wait_for_sequences> for example usage.
        //
        //----------------------------------------------------------------------------
        
 000243 task uvm_wait_for_nba_region;
+000243  point: type=line comment=block hier=uvm_pkg
        
 000243   string s;
+000243  point: type=line comment=block hier=uvm_pkg
        
 000243   int nba;
+000243  point: type=line comment=block hier=uvm_pkg
 000243   int next_nba;
+000243  point: type=line comment=block hier=uvm_pkg
        
          //If `included directly in a program block, can't use a non-blocking assign,
          //but it isn't needed since program blocks are in a seperate region.
        `ifndef UVM_NO_WAIT_FOR_NBA
 000243   next_nba++;
+000243  point: type=line comment=block hier=uvm_pkg
 000243   nba <= next_nba;
+000243  point: type=line comment=block hier=uvm_pkg
 000243   @(nba);
+000243  point: type=line comment=block hier=uvm_pkg
        `else
          repeat(`UVM_POUND_ZERO_COUNT) #0;
        `endif
        
        
        endtask
        
        
        //----------------------------------------------------------------------------
        //
        // Function: uvm_split_string
        //
        // Returns a queue of strings, ~values~, that is the result of the ~str~ split
        // based on the ~sep~.  For example:
        //
        //| uvm_split_string("1,on,false", ",", splits);
        //
        // Results in the 'splits' queue containing the three elements: 1, on and 
        // false.
        //----------------------------------------------------------------------------
        
%000000 function automatic void uvm_split_string (string str, byte sep, ref string values[$]);
-000000  point: type=line comment=block hier=uvm_pkg
%000000   int s = 0, e = 0;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   values.delete();
-000000  point: type=line comment=block hier=uvm_pkg
%000000   while(e < str.len()) begin
-000000  point: type=line comment=block hier=uvm_pkg
%000000     for(s=e; e<str.len(); ++e)
-000000  point: type=line comment=block hier=uvm_pkg
-000000  point: type=line comment=block hier=uvm_pkg
%000000       if(str[e] == sep) break;
-000000  point: type=branch comment=if hier=uvm_pkg
-000000  point: type=branch comment=else hier=uvm_pkg
%000000     if(s != e)
-000000  point: type=branch comment=if hier=uvm_pkg
-000000  point: type=branch comment=else hier=uvm_pkg
%000000       values.push_back(str.substr(s,e-1));
-000000  point: type=branch comment=if hier=uvm_pkg
%000000     e++;
-000000  point: type=line comment=block hier=uvm_pkg
          end
        endfunction
        
        

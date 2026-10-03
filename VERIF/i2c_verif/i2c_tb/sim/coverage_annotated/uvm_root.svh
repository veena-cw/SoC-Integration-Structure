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
        
        
        //------------------------------------------------------------------------------
        //
        // CLASS: uvm_root
        //
        // The ~uvm_root~ class serves as the implicit top-level and phase controller for
        // all UVM components. Users do not directly instantiate ~uvm_root~. The UVM 
        // automatically creates a single instance of <uvm_root> that users can
        // access via the global (uvm_pkg-scope) variable, ~uvm_top~. 
        // 
        // (see uvm_ref_root.gif)
        // 
        // The ~uvm_top~ instance of ~uvm_root~ plays several key roles in the UVM.
        // 
        // Implicit top-level - The ~uvm_top~ serves as an implicit top-level component.
        // Any component whose parent is specified as NULL becomes a child of ~uvm_top~. 
        // Thus, all UVM components in simulation are descendants of ~uvm_top~.
        //
        // Phase control - ~uvm_top~ manages the phasing for all components.
        //
        // Search - Use ~uvm_top~ to search for components based on their
        // hierarchical name. See <find> and <find_all>.
        //
        // Report configuration - Use ~uvm_top~ to globally configure
        // report verbosity, log files, and actions. For example,
        // ~uvm_top.set_report_verbosity_level_hier(UVM_FULL)~ would set
        // full verbosity for all components in simulation.
        //
        // Global reporter - Because ~uvm_top~ is globally accessible (in uvm_pkg
        // scope), UVM's reporting mechanism is accessible from anywhere
        // outside ~uvm_component~, such as in modules and sequences.
        // See <uvm_report_error>, <uvm_report_warning>, and other global
        // methods.
        //
        //
        // The ~uvm_top~ instance checks during the end_of_elaboration phase if any errors have 
        // been generated so far. If errors are found an UVM_FATAL error is being generated as result 
        // so that the simulation will not continue to the start_of_simulation_phase.
        // 
        
        //------------------------------------------------------------------------------
        
        typedef class uvm_test_done_objection;
        typedef class uvm_cmdline_processor;
        
        class uvm_root extends uvm_component;
        
          // Function: get()
          // Get the factory singleton
          //
          extern static function uvm_root get();
        
          uvm_cmdline_processor clp;
        
          // Task: run_test
          //
          // Phases all components through all registered phases. If the optional
          // test_name argument is provided, or if a command-line plusarg,
          // +UVM_TESTNAME=TEST_NAME, is found, then the specified component is created
          // just prior to phasing. The test may contain new verification components or
          // the entire testbench, in which case the test and testbench can be chosen from
          // the command line without forcing recompilation. If the global (package)
          // variable, finish_on_completion, is set, then $finish is called after
          // phasing completes.
        
          extern virtual task run_test (string test_name="");
        
        
          // Variable: top_levels
          //
          // This variable is a list of all of the top level components in UVM. It
          // includes the uvm_test_top component that is created by <run_test> as
          // well as any other top level components that have been instantiated
          // anywhere in the hierarchy.
        
          uvm_component top_levels[$];
        
          
          // Function: find
        
          extern function uvm_component find (string comp_match);
        
          // Function: find_all
          //
          // Returns the component handle (find) or list of components handles
          // (find_all) matching a given string. The string may contain the wildcards,
          // * and ?. Strings beginning with '.' are absolute path names. If optional
          // comp arg is provided, then search begins from that component down
          // (default=all components).
        
          extern function void find_all (string comp_match,
                                         ref uvm_component comps[$],
                                         input uvm_component comp=null);
        
        
%000000   virtual function string get_type_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000     return "uvm_root";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
          endfunction
        
        
          // Function: print_topology
          //
          // Print the verification environment's component topology. The
          // ~printer~ is a <uvm_printer> object that controls the format
          // of the topology printout; a ~null~ printer prints with the
          // default output.
        
          extern function void print_topology  (uvm_printer printer=null);
        
        
          // Variable: enable_print_topology
          //
          // If set, then the entire testbench topology is printed just after completion
          // of the end_of_elaboration phase.
        
%000001   bit  enable_print_topology = 0;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
        
          // Variable: finish_on_completion
          //
          // If set, then run_test will call $finish after all phases are executed. 
        
        
%000001   bit  finish_on_completion = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
        
          // Variable- phase_timeout
          //
          // Specifies the timeout for the run phase. Default is `UVM_DEFAULT_TIMEOUT
        
        
%000001   time phase_timeout = `UVM_DEFAULT_TIMEOUT;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
        
          // Function: set_timeout
          //
          // Specifies the timeout for the simulation. Default is <`UVM_DEFAULT_TIMEOUT>
          //
          // The timeout is simply the maximum absolute simulation time allowed before a
          // ~FATAL~ occurs.  If the timeout is set to 20ns, then the simulation must end
          // before 20ns, or a ~FATAL~ timeout will occur.
          //
          // This is provided so that the user can prevent the simulation from potentially 
          // consuming too many resources (Disk, Memory, CPU, etc) when the testbench is
          // essentially hung.
          //
          //
           
           
          extern function void set_timeout(time timeout, bit overridable=1);
        
        
          // PRIVATE members
          extern function void m_find_all_recurse(string comp_match,
                                                  ref uvm_component comps[$],
                                                  input uvm_component comp=null); 
          
          extern protected function new ();
          extern protected virtual function bit m_add_child (uvm_component child);
          extern function void build_phase(uvm_phase phase);
          extern local function void m_do_verbosity_settings();
          extern local function void m_do_timeout_settings();
          extern local function void m_do_factory_settings();
          extern local function void m_process_inst_override(string ovr);
          extern local function void m_process_type_override(string ovr);
          extern local function void m_do_config_settings();
          extern local function void m_do_max_quit_settings();
          extern local function void m_do_dump_args();
          extern local function void m_process_config(string cfg, bit is_int);
          extern function void m_check_verbosity();
          // singleton handle
          static local uvm_root m_inst;
        
          // For error checking
          extern virtual task run_phase (uvm_phase phase);
        
        
          // phase_started
          // -------------
          // At end of elab phase we need to do tlm binding resolution.
 000021   function void phase_started(uvm_phase phase);
+000021  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
~000020     if (phase == end_of_elaboration_ph) begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
+000020  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000001       do_resolve_bindings(); 
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000001       if (enable_print_topology) print_topology();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
              
%000001       begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000001            uvm_report_server srvr;           
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000001           srvr = get_report_server();
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000001           if(srvr.get_severity_count(UVM_ERROR) > 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000             uvm_report_fatal("BUILDERR", "stopping due to build errors", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
                  end
              end      
            end
          endfunction
        
          bit m_phase_all_done;
        
        
        `ifndef UVM_NO_DEPRECATED
          // stop_request
          // ------------
        
          // backward compat only 
          // call global_stop_request() or uvm_test_done.stop_request() instead
%000000   function void stop_request();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000     uvm_test_done_objection tdo;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000     tdo = uvm_test_done_objection::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000     tdo.stop_request();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
          endfunction
        `endif
        
        
        endclass
        
        
        
        //------------------------------------------------------------------------------
        // Variable: uvm_top
        //
        // This is the top-level that governs phase execution and provides component
        // search interface. See <uvm_root> for more information.
        //------------------------------------------------------------------------------
        
%000001 const uvm_root uvm_top = uvm_root::get();
-000001  point: type=line comment=block hier=uvm_pkg
        
        // for backward compatibility
%000001 const uvm_root _global_reporter = uvm_root::get();
-000001  point: type=line comment=block hier=uvm_pkg
        
        
        
        //-----------------------------------------------------------------------------
        //
        // Class- uvm_root_report_handler
        //
        //-----------------------------------------------------------------------------
        // Root report has name "reporter"
        
%000001 class uvm_root_report_handler extends uvm_report_handler;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root_report_handler__Vclpkg
 001903   virtual function void report(uvm_severity severity,
+001903  point: type=line comment=block hier=uvm_pkg::uvm_root_report_handler__Vclpkg
                                       string name,
                                       string id,
                                       string message,
                                       int verbosity_level=UVM_MEDIUM,
                                       string filename="",
                                       int line=0,
                                       uvm_report_object client=null);
~001903     if(name == "")
+001903  point: type=branch comment=if hier=uvm_pkg::uvm_root_report_handler__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root_report_handler__Vclpkg
 001903       name = "reporter";
+001903  point: type=branch comment=if hier=uvm_pkg::uvm_root_report_handler__Vclpkg
 001903     super.report(severity, name, id, message, verbosity_level, filename, line, client);
+001903  point: type=line comment=block hier=uvm_pkg::uvm_root_report_handler__Vclpkg
          endfunction 
        endclass
        
        
        
        //-----------------------------------------------------------------------------
        // IMPLEMENTATION
        //-----------------------------------------------------------------------------
        
        // get
        // ---
        
 004611 function uvm_root uvm_root::get();
+004611  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
~004610   if (m_inst == null) begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
+004610  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000001     m_inst = new();
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000001     void'(uvm_domain::get_common_domain());
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000001     m_inst.m_domain = uvm_domain::get_uvm_domain();
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
          end
 004611   return m_inst;
+004611  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        endfunction
        
        
        // new
        // ---
        
%000001 function uvm_root::new();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000001   uvm_root_report_handler rh;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000001   super.new("__top__", null);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000001   rh = new;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   set_report_handler(rh);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000001   clp = uvm_cmdline_processor::get_inst();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000001   report_header();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
          // This sets up the global verbosity. Other command line args may
          // change individual component verbosity.
%000001   m_check_verbosity();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        endfunction
        
        
        // run_test
        // --------
        
%000001 task uvm_root::run_test(string test_name="");
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000001   uvm_factory factory= uvm_factory::get();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   bit testname_plusarg;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   int test_name_count;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   string test_names[$];
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   string msg;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   uvm_component uvm_test_top;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000001   process phase_runner_proc; // store thread forked below for final cleanup
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000001   testname_plusarg = 0;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
          // Set up the process that decouples the thread that drops objections from
          // the process that processes drop/all_dropped objections. Thus, if the
          // original calling thread (the "dropper") gets killed, it does not affect
          // drain-time and propagation of the drop up the hierarchy.
          // Needs to be done in run_test since it needs to be in an
          // initial block to fork a process.
%000001   uvm_objection::m_init_objections();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
        `ifndef UVM_NO_DPI
        
          // Retrieve the test names provided on the command line.  Command line
          // overrides the argument.
          test_name_count = clp.get_arg_values("+UVM_TESTNAME=", test_names);
        
          // If at least one, use first in queue.
          if (test_name_count > 0) begin
            test_name = test_names[0];
            testname_plusarg = 1;
          end
        
          // If multiple, provided the warning giving the number, which one will be
          // used and the complete list.
          if (test_name_count > 1) begin
            string test_list;
            string sep;
            for (int i = 0; i < test_names.size(); i++) begin
              if (i != 0)
                sep = ", ";
              test_list = {test_list, sep, test_names[i]};
            end
            uvm_report_warning("MULTTST", 
              $sformatf("Multiple (%0d) +UVM_TESTNAME arguments provided on the command line.  '%s' will be used.  Provided list: %s.", test_name_count, test_name, test_list), UVM_NONE);
          end
        
        `else
        
             // plusarg overrides argument
%000001   if ($value$plusargs("UVM_TESTNAME=%s", test_name)) begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000001     `uvm_info("NO_DPI_TSTNAME", "UVM_NO_DPI defined--getting UVM_TESTNAME directly, without DPI", UVM_NONE)
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000001     testname_plusarg = 1;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
          end
        
        `endif
        
          // if test now defined, create it using common factory
%000001   if (test_name != "") begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000001     if(m_children.exists("uvm_test_top")) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000       uvm_report_fatal("TTINST",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000           "An uvm_test_top already exists via a previous call to run_test", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000       #0; // forces shutdown because $finish is forked
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
            end
%000001     $cast(uvm_test_top, factory.create_component_by_name(test_name,
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
                  "", "uvm_test_top", null));
        
%000001     if (uvm_test_top == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000       msg = testname_plusarg ? {"command line +UVM_TESTNAME=",test_name} : 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=expr comment=(testname_plusarg==0) => 0 hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=expr comment=(testname_plusarg==1) => 1 hier=uvm_pkg::uvm_root__Vclpkg
                                       {"call to run_test(",test_name,")"};
%000000       uvm_report_fatal("INVTST",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000           {"Requested test from ",msg, " not found." }, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
            end
          end
        
%000001   if (m_children.num() == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     uvm_report_fatal("NOCOMP",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000           {"No components instantiated. You must either instantiate",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000            " at least one component before calling run_test or use",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000            " run_test to do so. To run a test using run_test,",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000            " use +UVM_TESTNAME or supply the test name in",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000            " the argument to run_test(). Exiting simulation."}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
          end
        
%000001   begin
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000   	if(test_name=="") 
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_root__Vclpkg
%000000   		uvm_report_info("RNTST", "Running test ...", UVM_LOW); 
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_root__Vclpkg
%000001   	else if (test_name == uvm_test_top.get_type_name())
-000000  point: type=line comment=else hier=uvm_pkg::uvm_root__Vclpkg
-000001  point: type=line comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000001   		uvm_report_info("RNTST", {"Running test ",test_name,"..."}, UVM_LOW); 
-000001  point: type=line comment=if hier=uvm_pkg::uvm_root__Vclpkg
          	else
%000000   		uvm_report_info("RNTST", {"Running test ",uvm_test_top.get_type_name()," (via factory override for test \"",test_name,"\")..."}, UVM_LOW);
-000000  point: type=line comment=else hier=uvm_pkg::uvm_root__Vclpkg
          end
          
          // phase runner, isolated from calling process
%000001   fork begin
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
            // spawn the phase runner task
%000001     phase_runner_proc = process::self();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001     uvm_phase::m_run_phases();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
          end
          join_none
%000001   #0; // let the phase runner start
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
          
%000001   wait (m_phase_all_done == 1);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
          
          // clean up after ourselves
%000001   phase_runner_proc.kill();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000001   report_summarize();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000001   if (finish_on_completion)
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000001     $finish;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
        
        endtask
        
        
        // find_all
        // --------
        
%000000 function void uvm_root::find_all(string comp_match, ref uvm_component comps[$],
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000                                  input uvm_component comp=null); 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000000   if (comp==null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     comp = this;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000   m_find_all_recurse(comp_match, comps, comp);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
        endfunction
        
        
        // find
        // ----
        
%000000 function uvm_component uvm_root::find (string comp_match);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000   uvm_component comp_list[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000000   find_all(comp_match,comp_list);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000000   if (comp_list.size() > 1)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     uvm_report_warning("MMATCH",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000     $sformatf("Found %0d components matching '%s'. Returning first match, %0s.",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000               comp_list.size(),comp_match,comp_list[0].get_full_name()), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
        
%000000   if (comp_list.size() == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     uvm_report_warning("CMPNFD",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000       {"Component matching '",comp_match,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000        "' was not found in the list of uvm_components"}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000     return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
          end
        
%000000   return comp_list[0];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        endfunction
        
        
        // print_topology
        // --------------
        
%000000 function void uvm_root::print_topology(uvm_printer printer=null);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000000   string s;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000000   uvm_report_info("UVMTOP", "UVM testbench topology:", UVM_LOW);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000000   if (m_children.num()==0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     uvm_report_warning("EMTCOMP", "print_topology - No UVM components to print.", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
          end
        
%000000   if (printer==null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     printer = uvm_default_printer;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
        
%000000   foreach (m_children[c]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000     if(m_children[c].print_enabled) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000       printer.print_object("", m_children[c]);  
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
            end
          end
%000000   $display(printer.emit());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
        endfunction
        
        
        // set_timeout
        // -----------
        
%000000 function void uvm_root::set_timeout(time timeout, bit overridable=1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000   static bit m_uvm_timeout_overridable = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000   if (m_uvm_timeout_overridable == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     uvm_report_info("NOTIMOUTOVR",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000       $sformatf("The global timeout setting of %0d is not overridable to %0d due to a previous setting.",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000          phase_timeout, timeout), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
          end
%000000   m_uvm_timeout_overridable = overridable;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000   phase_timeout = timeout;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        endfunction
        
        
        
        // m_find_all_recurse
        // ------------------
        
%000000 function void uvm_root::m_find_all_recurse(string comp_match, ref uvm_component comps[$],
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
                                                   input uvm_component comp=null); 
%000000   string name;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000000   if (comp.get_first_child(name))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     do begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000       this.m_find_all_recurse(comp_match, comps, comp.get_child(name));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
            end
%000000     while (comp.get_next_child(name));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000   if (uvm_is_match(comp_match, comp.get_full_name()) &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
              comp.get_name() != "") /* uvm_top */
%000000     comps.push_back(comp);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
        
        endfunction
        
        
        // m_add_child
        // -----------
        
        // Add to the top levels array
%000001 function bit uvm_root::m_add_child (uvm_component child);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000   if(super.m_add_child(child)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000001     if(child.get_name() == "uvm_test_top")
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000001       top_levels.push_front(child);
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
            else
%000000       top_levels.push_back(child);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
          end
          else
%000000     return 0;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
        endfunction
        
        
        // build_phase
        // -----
        
%000001 function void uvm_root::build_phase(uvm_phase phase);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000001   super.build_phase(phase);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000001   m_set_cl_msg_args();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000001   m_do_verbosity_settings();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   m_do_timeout_settings();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   m_do_factory_settings();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   m_do_config_settings();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   m_do_max_quit_settings();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   m_do_dump_args();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
        endfunction
        
        
        // m_do_verbosity_settings
        // -----------------------
        
%000001 function void uvm_root::m_do_verbosity_settings();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   string set_verbosity_settings[$];
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   string split_vals[$];
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   uvm_verbosity tmp_verb;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
          // Retrieve them all into set_verbosity_settings
%000001   void'(clp.get_arg_values("+uvm_set_verbosity=", set_verbosity_settings));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000001   for(int i = 0; i < set_verbosity_settings.size(); i++) begin
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000     uvm_split_string(set_verbosity_settings[i], ",", split_vals);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000     if(split_vals.size() < 4 || split_vals.size() > 5) begin
-000000  point: type=expr comment=((split_vals.size() < 32'sh4)==0 && (split_vals.size() > 32'sh5)==0) => 0 hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=expr comment=((split_vals.size() < 32'sh4)==1) => 1 hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=expr comment=((split_vals.size() > 32'sh5)==1) => 1 hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000       uvm_report_warning("INVLCMDARGS", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000         $sformatf("Invalid number of arguments found on the command line for setting '+uvm_set_verbosity=%s'.  Setting ignored.",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000         set_verbosity_settings[i]), UVM_NONE, "", "");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
            end
            // Invalid verbosity
%000000     if(!clp.m_convert_verb(split_vals[2], tmp_verb)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000       uvm_report_warning("INVLCMDVERB", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000         $sformatf("Invalid verbosity found on the command line for setting '%s'.", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000         set_verbosity_settings[i]), UVM_NONE, "", "");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
            end
          end
        endfunction
        
        
        // m_do_timeout_settings
        // ---------------------
        
%000001 function void uvm_root::m_do_timeout_settings();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   string timeout_settings[$];
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   string timeout;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   string split_timeout[$];
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   int timeout_count;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   time timeout_int;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   string override_spec;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   timeout_count = clp.get_arg_values("+UVM_TIMEOUT=", timeout_settings);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000   if (timeout_count ==  0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000   else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     timeout = timeout_settings[0];
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     if (timeout_count > 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000       string timeout_list;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000       string sep;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000       for (int i = 0; i < timeout_settings.size(); i++) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000         if (i != 0)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000           sep = "; ";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000         timeout_list = {timeout_list, sep, timeout_settings[i]};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
              end
%000000       uvm_report_warning("MULTTIMOUT", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000         $sformatf("Multiple (%0d) +UVM_TIMEOUT arguments provided on the command line.  '%s' will be used.  Provided list: %s.", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000         timeout_count, timeout, timeout_list), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
            end
%000000     uvm_report_info("TIMOUTSET",
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000       $sformatf("'+UVM_TIMEOUT=%s' provided on the command line is being applied.", timeout), UVM_NONE);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000       void'($sscanf(timeout,"%d,%s",timeout_int,override_spec));
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     case(override_spec)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000       "YES"   : set_timeout(timeout_int, 1);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000       "NO"    : set_timeout(timeout_int, 0);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000       default : set_timeout(timeout_int, 1);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
            endcase
          end
        endfunction
        
        
        // m_do_factory_settings
        // ---------------------
        
%000001 function void uvm_root::m_do_factory_settings();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   string args[$];
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000001   void'(clp.get_arg_matches("/^\\+(UVM_SET_INST_OVERRIDE|uvm_set_inst_override)=/",args));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   foreach(args[i]) begin
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     m_process_inst_override(args[i].substr(23, args[i].len()-1));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
          end
%000001   void'(clp.get_arg_matches("/^\\+(UVM_SET_TYPE_OVERRIDE|uvm_set_type_override)=/",args));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   foreach(args[i]) begin
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     m_process_type_override(args[i].substr(23, args[i].len()-1));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
          end
        endfunction
        
        
        // m_process_inst_override
        // -----------------------
        
%000000 function void uvm_root::m_process_inst_override(string ovr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000   string split_val[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000   uvm_factory fact = uvm_factory::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000000   uvm_split_string(ovr, ",", split_val);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000000   if(split_val.size() != 3 ) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     uvm_report_error("UVM_CMDLINE_PROC", {"Invalid setting for +uvm_set_inst_override=", ovr,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000       ", setting must specify <requested_type>,<override_type>,<instance_path>"}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
          end
        
%000000   uvm_report_info("INSTOVR", {"Applying instance override from the command line: +uvm_set_inst_override=", ovr}, UVM_NONE);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000   fact.set_inst_override_by_name(split_val[0], split_val[1], split_val[2]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        endfunction
        
        
        // m_process_type_override
        // -----------------------
        
%000000 function void uvm_root::m_process_type_override(string ovr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000   string split_val[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000   int replace=1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000   uvm_factory fact = uvm_factory::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000000   uvm_split_string(ovr, ",", split_val);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000000   if(split_val.size() > 3 || split_val.size() < 2) begin
-000000  point: type=expr comment=((split_val.size() < 32'sh2)==1) => 1 hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=expr comment=((split_val.size() > 32'sh3)==0 && (split_val.size() < 32'sh2)==0) => 0 hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=expr comment=((split_val.size() > 32'sh3)==1) => 1 hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     uvm_report_error("UVM_CMDLINE_PROC", {"Invalid setting for +uvm_set_type_override=", ovr,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000       ", setting must specify <requested_type>,<override_type>[,<replace>]"}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
          end
        
          // Replace arg is optional. If set, must be 0 or 1
%000000   if(split_val.size() == 3) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     if(split_val[2]=="0") replace =  0;
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_root__Vclpkg
%000000     else if (split_val[2] == "1") replace = 1;
-000000  point: type=line comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=line comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     else begin
-000000  point: type=line comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000       uvm_report_error("UVM_CMDLINE_PROC", {"Invalid replace arg for +uvm_set_type_override=", ovr ," value must be 0 or 1"}, UVM_NONE);
-000000  point: type=line comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000       return;
-000000  point: type=line comment=else hier=uvm_pkg::uvm_root__Vclpkg
            end
          end
        
%000000   uvm_report_info("UVM_CMDLINE_PROC", {"Applying type override from the command line: +uvm_set_type_override=", ovr}, UVM_NONE);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000   fact.set_type_override_by_name(split_val[0], split_val[1], replace);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        endfunction
        
        
        // m_process_config
        // ----------------
        
%000000 function void uvm_root::m_process_config(string cfg, bit is_int);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000   uvm_bitstream_t v;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000   string split_val[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000   uvm_root m_uvm_top = uvm_root::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000000   uvm_split_string(cfg, ",", split_val);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000   if(split_val.size() == 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     uvm_report_error("UVM_CMDLINE_PROC", {"Invalid +uvm_set_config command\"", cfg,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000       "\" missing field and value: component is \"", split_val[0], "\""}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
          end
        
%000000   if(split_val.size() == 2) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     uvm_report_error("UVM_CMDLINE_PROC", {"Invalid +uvm_set_config command\"", cfg,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000       "\" missing value: component is \"", split_val[0], "\"  field is \"", split_val[1], "\""}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
          end
        
%000000   if(split_val.size() > 3) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     uvm_report_error("UVM_CMDLINE_PROC", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000       $sformatf("Invalid +uvm_set_config command\"%s\" : expected only 3 fields (component, field and value).", cfg), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
          end
         
%000000   if(is_int) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     if(split_val[2].len() > 2) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000       string base, extval;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000       base = split_val[2].substr(0,1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000       extval = split_val[2].substr(2,split_val[2].len()-1); 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000       case(base)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000         "'b" : v = extval.atobin();
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000         "0b" : v = extval.atobin();
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000         "'o" : v = extval.atooct();
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000         "'d" : v = extval.atoi();
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000         "'h" : v = extval.atohex();
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000         "'x" : v = extval.atohex();
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000         "0x" : v = extval.atohex();
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000         default : v = split_val[2].atoi();
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
              endcase
            end
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000       v = split_val[2].atoi();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
            end
%000000     uvm_report_info("UVM_CMDLINE_PROC", {"Applying config setting from the command line: +uvm_set_config_int=", cfg}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000     m_uvm_top.set_config_int(split_val[0], split_val[1], v);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
          end
%000000   else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     uvm_report_info("UVM_CMDLINE_PROC", {"Applying config setting from the command line: +uvm_set_config_string=", cfg}, UVM_NONE);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     m_uvm_top.set_config_string(split_val[0], split_val[1], split_val[2]);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
          end 
        
        endfunction
        
        
        // m_do_config_settings
        // --------------------
        
%000001 function void uvm_root::m_do_config_settings();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   string args[$];
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000001   void'(clp.get_arg_matches("/^\\+(UVM_SET_CONFIG_INT|uvm_set_config_int)=/",args));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   foreach(args[i]) begin
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     m_process_config(args[i].substr(20, args[i].len()-1), 1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
          end
%000001   void'(clp.get_arg_matches("/^\\+(UVM_SET_CONFIG_STRING|uvm_set_config_string)=/",args));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   foreach(args[i]) begin
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     m_process_config(args[i].substr(23, args[i].len()-1), 0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
          end
        endfunction
        
        
        // m_do_max_quit_settings
        // ----------------------
        
%000001 function void uvm_root::m_do_max_quit_settings();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   uvm_report_server srvr;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   string max_quit_settings[$];
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   int max_quit_count;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   string max_quit;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   string split_max_quit[$];
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   int max_quit_int;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   srvr = get_report_server();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   max_quit_count = clp.get_arg_values("+UVM_MAX_QUIT_COUNT=", max_quit_settings);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000   if (max_quit_count ==  0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000   else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     max_quit = max_quit_settings[0];
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     if (max_quit_count > 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000       string max_quit_list;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000       string sep;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000       for (int i = 0; i < max_quit_settings.size(); i++) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000         if (i != 0)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000           sep = "; ";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000         max_quit_list = {max_quit_list, sep, max_quit_settings[i]};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
              end
%000000       uvm_report_warning("MULTMAXQUIT", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000         $sformatf("Multiple (%0d) +UVM_MAX_QUIT_COUNT arguments provided on the command line.  '%s' will be used.  Provided list: %s.", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000         max_quit_count, max_quit, max_quit_list), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
            end
%000000     uvm_report_info("MAXQUITSET",
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000       $sformatf("'+UVM_MAX_QUIT_COUNT=%s' provided on the command line is being applied.", max_quit), UVM_NONE);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     uvm_split_string(max_quit, ",", split_max_quit);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     max_quit_int = split_max_quit[0].atoi();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     case(split_max_quit[1])
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000       "YES"   : srvr.set_max_quit_count(max_quit_int, 1);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000       "NO"    : srvr.set_max_quit_count(max_quit_int, 0);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000       default : srvr.set_max_quit_count(max_quit_int, 1);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
            endcase
          end
        endfunction
        
        
        // m_do_dump_args
        // --------------
        
%000001 function void uvm_root::m_do_dump_args();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   string dump_args[$];
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   string all_args[$];
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   string out_string;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   if(clp.get_arg_matches("+UVM_DUMP_CMDLINE_ARGS", dump_args)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     clp.get_args(all_args);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000     for (int i = 0; i < all_args.size(); i++) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000       if (all_args[i] == "__-f__")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000         continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000       out_string = {out_string, all_args[i], " "};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
            end
%000000     uvm_report_info("DUMPARGS", out_string, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
          end
        endfunction
        
        
        // m_check_verbosity
        // ----------------
        
%000001 function void uvm_root::m_check_verbosity();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
%000001   string verb_string;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   string verb_settings[$];
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   int verb_count;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   int plusarg;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   int verbosity = UVM_MEDIUM;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
          `ifndef UVM_CMDLINE_NO_DPI
          // Retrieve the verbosities provided on the command line.
          verb_count = clp.get_arg_values("+UVM_VERBOSITY=", verb_settings);
          `else
%000001   verb_count = $value$plusargs("UVM_VERBOSITY=%s",verb_string);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   if (verb_count)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     verb_settings.push_back(verb_string);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
          `endif
        
          // If none provided, provide message about the default being used.
          //if (verb_count == 0)
          //  uvm_report_info("DEFVERB", ("No verbosity specified on the command line.  Using the default: UVM_MEDIUM"), UVM_NONE);
        
          // If at least one, use the first.
%000001   if (verb_count > 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     verb_string = verb_settings[0];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000     plusarg = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
          end
        
          // If more than one, provide the warning stating how many, which one will
          // be used and the complete list.
%000001   if (verb_count > 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     string verb_list;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000     string sep;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000     for (int i = 0; i < verb_settings.size(); i++) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000000       if (i != 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000         sep = ", ";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000       verb_list = {verb_list, sep, verb_settings[i]};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
            end
%000000     uvm_report_warning("MULTVERB", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000       $sformatf("Multiple (%0d) +UVM_VERBOSITY arguments provided on the command line.  '%s' will be used.  Provided list: %s.", verb_count, verb_string, verb_list), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
          end
        
%000001   if(plusarg == 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
%000000     case(verb_string)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000       "UVM_NONE"    : verbosity = UVM_NONE;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000       "NONE"        : verbosity = UVM_NONE;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000       "UVM_LOW"     : verbosity = UVM_LOW;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000       "LOW"         : verbosity = UVM_LOW;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000       "UVM_MEDIUM"  : verbosity = UVM_MEDIUM;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000       "MEDIUM"      : verbosity = UVM_MEDIUM;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000       "UVM_HIGH"    : verbosity = UVM_HIGH;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000       "HIGH"        : verbosity = UVM_HIGH;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000       "UVM_FULL"    : verbosity = UVM_FULL;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000       "FULL"        : verbosity = UVM_FULL;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000       "UVM_DEBUG"   : verbosity = UVM_DEBUG;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000       "DEBUG"       : verbosity = UVM_DEBUG;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000       default       : begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000         verbosity = verb_string.atoi();
-000000  point: type=line comment=case hier=uvm_pkg::uvm_root__Vclpkg
%000000         if(verbosity > 0)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000           uvm_report_info("NSTVERB", $sformatf("Non-standard verbosity value, using provided '%0d'.", verbosity), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000         if(verbosity == 0) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000           verbosity = UVM_MEDIUM;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
%000000           uvm_report_warning("ILLVERB", "Illegal verbosity value, using default of UVM_MEDIUM.", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
                end
              end
            endcase
          end
        
%000001   set_report_verbosity_level_hier(verbosity);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
        
        endfunction
        
        // It is required that the run phase start at simulation time 0
        // TBD this looks wrong - taking advantage of uvm_root not doing anything else?
        // TBD move to phase_started callback?
%000001 task uvm_root::run_phase (uvm_phase phase);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_root__Vclpkg
%000001   if($time > 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
            `uvm_fatal("RUNPHSTIME", {"The run phase must start at time 0, current time is ",
               $sformatf("%0t", $realtime), ". No non-zero delays are allowed before ",
               "run_test(), and pre-run user defined phases may not consume ",
%000000        "simulation time before the start of the run phase."})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_root__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_root__Vclpkg
        endtask
        
        

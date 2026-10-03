//      // verilator_coverage annotation
        //----------------------------------------------------------------------
        //   Copyright 2011 Cypress Semiconductor
        //   Copyright 2010-2011 Mentor Graphics Corporation
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
        
        typedef class uvm_phase;
        
        //----------------------------------------------------------------------
        // Title: UVM Configuration Database
        //
        // Topic: Intro
        //
        // The <uvm_config_db> class provides a convenience interface 
        // on top of the <uvm_resource_db> to simplify the basic interface
        // that is used for configuring <uvm_component> instances.
        //
        // If the run-time ~+UVM_CONFIG_DB_TRACE~ command line option is specified,
        // all configuration DB accesses (read and write) are displayed.
        //----------------------------------------------------------------------
        
        //Internal class for config waiters
        class m_uvm_waiter;
          string inst_name;
          string field_name;
          event trigger;
%000000   function new (string inst_name, string field_name);
-000000  point: type=line comment=block hier=uvm_pkg::m_uvm_waiter__Vclpkg
%000000     this.inst_name = inst_name;
-000000  point: type=line comment=block hier=uvm_pkg::m_uvm_waiter__Vclpkg
%000000     this.field_name = field_name;
-000000  point: type=line comment=block hier=uvm_pkg::m_uvm_waiter__Vclpkg
          endfunction
        endclass
        
        typedef class uvm_config_db_options;
        
        //----------------------------------------------------------------------
        // class: uvm_config_db
        //
        // All of the functions in uvm_config_db#(T) are static, so they
        // must be called using the :: operator.  For example:
        //
        //|  uvm_config_db#(int)::set(this, "*", "A");
        //
        // The parameter value "int" identifies the configuration type as
        // an int property.  
        //
        // The <set> and <get> methods provide the same api and
        // semantics as the set/get_config_* functions in <uvm_component>.
        //----------------------------------------------------------------------
%000000 class uvm_config_db#(type T=int) extends uvm_resource_db#(T);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
        
          // Internal lookup of config settings so they can be reused
          // The context has a pool that is keyed by the inst/field name.
          static uvm_pool#(string,uvm_resource#(T)) m_rsc[uvm_component];
        
          // Internal waiter list for wait_modified
          static local uvm_queue#(m_uvm_waiter) m_waiters[string];
        
          // function: get
          //
          // Get the value for ~field_name~ in ~inst_name~, using component ~cntxt~ as 
          // the starting search point. ~inst_name~ is an explicit instance name 
          // relative to ~cntxt~ and may be an empty string if the ~cntxt~ is the
          // instance that the configuration object applies to. ~field_name~
          // is the specific field in the scope that is being searched for.
          //
          // The basic get_config_* methods from <uvm_component> are mapped to 
          // this function as:
          //
          //| get_config_int(...) => uvm_config_db#(uvm_bitstream_t)::get(cntxt,...)
          //| get_config_string(...) => uvm_config_db#(string)::get(cntxt,...)
          //| get_config_object(...) => uvm_config_db#(uvm_object)::get(cntxt,...)
        
~000103   static function bit get(uvm_component cntxt,
+000056  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
                                  string inst_name,
                                  string field_name,
                                  inout T value);
        //TBD: add file/line
~000103     int unsigned p;
+000056  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
~000103     uvm_resource#(T) r, rt;
+000056  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
~000103     uvm_resource_pool rp = uvm_resource_pool::get();
+000056  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
~000103     uvm_resource_types::rsrc_q_t rq;
+000056  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
        
~000103     if(cntxt == null) 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
+000056  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
+000103  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       cntxt = uvm_root::get();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
~000103     if(inst_name == "") 
+000056  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000002  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
+000103  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
~000103       inst_name = cntxt.get_full_name();
+000056  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000002  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
+000103  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
~000026     else if(cntxt.get_full_name() != "") 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
~000026       inst_name = {cntxt.get_full_name(), ".", inst_name};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
+000026  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
         
~000103     rq = rp.lookup_regex_names(inst_name, field_name, uvm_resource#(T)::get_type());
+000056  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
~000103     r = uvm_resource#(T)::get_highest_precedence(rq);
+000056  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
            
~000103     if(uvm_config_db_options::is_tracing())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
+000056  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
+000103  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       m_show_msg("CFGDB/GET", "Configuration","read", inst_name, field_name, cntxt, r);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
        
%000000     if(r == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
        
~000103     value = r.read(cntxt);
+000056  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
        
~000103     return 1;
+000056  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
          endfunction
        
          // function: set 
          //
          // Create a new or update an existing configuration setting for
          // ~field_name~ in ~inst_name~ from ~cntxt~.
          // The setting is made at ~cntxt~, with the full scope of the set 
          // being {~cntxt~,".",~inst_name~}. If ~cntxt~ is null then ~inst_name~
          // provides the complete scope information of the setting.
          // ~field_name~ is the target field. Both ~inst_name~ and ~field_name~
          // may be glob style or regular expression style expressions.
          //
          // If a setting is made at build time, the ~cntxt~ hierarchy is
          // used to determine the setting's precedence in the database.
          // Settings from hierarchically higher levels have higher
          // precedence. Settings from the same level of hierarchy have
          // a last setting wins semantic. A precedence setting of 
          // <uvm_resource_base::default_precedence>  is used for uvm_top, and 
          // each hierarcical level below the top is decremented by 1.
          //
          // After build time, all settings use the default precedence and thus
          // have a last wins semantic. So, if at run time, a low level 
          // component makes a runtime setting of some field, that setting 
          // will have precedence over a setting from the test level that was 
          // made earlier in the simulation.
          //
          // The basic set_config_* methods from <uvm_component> are mapped to 
          // this function as:
          //
          //| set_config_int(...) => uvm_config_db#(uvm_bitstream_t)::set(cntxt,...)
          //| set_config_string(...) => uvm_config_db#(string)::set(cntxt,...)
          //| set_config_object(...) => uvm_config_db#(uvm_object)::set(cntxt,...)
        
%000000   static function void set(uvm_component cntxt,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
                                   string inst_name,
                                   string field_name,
                                   T value);
        
%000000     uvm_root top;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000     uvm_phase curr_phase;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000     uvm_resource#(T) r;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000     bit exists;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000     string lookup;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000     uvm_pool#(string,uvm_resource#(T)) pool;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
             
            //take care of random stability during allocation
%000000     process p = process::self();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000     string rstate = p.get_randstate();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000     top = uvm_root::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000     curr_phase = top.m_current_phase;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
        
%000000     if(cntxt == null) 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       cntxt = top;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000     if(inst_name == "") 
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       inst_name = cntxt.get_full_name();
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000     else if(cntxt.get_full_name() != "") 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       inst_name = {cntxt.get_full_name(), ".", inst_name};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
        
%000000     if(!m_rsc.exists(cntxt)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       m_rsc[cntxt] = new;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
            end
%000000     pool = m_rsc[cntxt];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
        
            // Insert the token in the middle to prevent cache
            // oddities like i=foobar,f=xyz and i=foo,f=barxyz.
            // Can't just use '.', because '.' isn't illegal
            // in field names
%000000     lookup = {inst_name, "__M_UVM__", field_name};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
        
%000000     if(!pool.exists(lookup)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000        r = new(field_name, inst_name);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000        pool.add(lookup, r);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
            end
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       r = pool.get(lookup);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       exists = 1;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
            end
              
%000000     if(curr_phase != null && curr_phase.get_name() == "build")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       r.precedence = uvm_resource_base::default_precedence - (cntxt.get_depth());
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
            else
%000000       r.precedence = uvm_resource_base::default_precedence;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
        
%000000     r.write(value, cntxt);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
        
%000000     if(exists) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       uvm_resource_pool rp = uvm_resource_pool::get();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       rp.set_priority_name(r, uvm_resource_types::PRI_HIGH);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
            end
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
              //Doesn't exist yet, so put it in resource db at the head.
%000000       r.set_override();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
            end
        
            //trigger any waiters
%000000     if(m_waiters.exists(field_name)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       m_uvm_waiter w;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       for(int i=0; i<m_waiters[field_name].size(); ++i) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000         w = m_waiters[field_name].get(i);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000         if(uvm_re_match(uvm_glob_to_re(inst_name),w.inst_name) == 0)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000            ->w.trigger;  
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
              end
            end
        
%000000     p.set_randstate(rstate);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
        
%000000     if(uvm_config_db_options::is_tracing())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       m_show_msg("CFGDB/SET", "Configuration","set", inst_name, field_name, cntxt, r);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
          endfunction
        
        
          // function: exists
          //
          // Check if a value for ~field_name~ is available in ~inst_name~, using
          // component ~cntxt~ as the starting search point. ~inst_name~ is an explicit
          // instance name relative to ~cntxt~ and may be an empty string if the
          // ~cntxt~ is the instance that the configuration object applies to.
          // ~field_name~ is the specific field in the scope that is being searched for.
          // The ~spell_chk~ arg can be set to 1 to turn spell checking on if it
          // is expected that the field should exist in the database. The function
          // returns 1 if a config parameter exists and 0 if it doesn't exist.
          //
        
%000000   static function bit exists(uvm_component cntxt, string inst_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
              string field_name, bit spell_chk=0);
        
%000000     if(cntxt == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       cntxt = uvm_root::get();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000     if(inst_name == "")
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       inst_name = cntxt.get_full_name();
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000     else if(cntxt.get_full_name() != "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       inst_name = {cntxt.get_full_name(), ".", inst_name};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
        
%000000     return (uvm_resource_db#(T)::get_by_name(inst_name,field_name,spell_chk) != null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
          endfunction
        
        
          // Function: wait_modified
          //
          // Wait for a configuration setting to be set for ~field_name~
          // in ~cntxt~ and ~inst_name~. The task blocks until a new configuration
          // setting is applied that effects the specified field.
        
%000000   static task wait_modified(uvm_component cntxt, string inst_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
              string field_name);
%000000     process p = process::self();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000     string rstate = p.get_randstate();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000     m_uvm_waiter waiter;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
        
%000000     if(cntxt == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       cntxt = uvm_root::get();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000     if(cntxt != uvm_root::get()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       if(inst_name != "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000         inst_name = {cntxt.get_full_name(),".",inst_name};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
              else
%000000         inst_name = cntxt.get_full_name();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
            end
        
%000000     waiter = new(inst_name, field_name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
        
%000000     if(!m_waiters.exists(field_name))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       m_waiters[field_name] = new;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000     m_waiters[field_name].push_back(waiter);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
        
%000000     p.set_randstate(rstate);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
        
            // wait on the waiter to trigger
%000000     @waiter.trigger;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
          
            // Remove the waiter from the waiter list 
%000000     for(int i=0; i<m_waiters[field_name].size(); ++i) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000       if(m_waiters[field_name].get(i) == waiter) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000         m_waiters[field_name].delete(i);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
%000000         break;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db__Tz9__Vclpkg
              end
            end 
          endtask
        
        
        endclass
        
        typedef uvm_config_db#(uvm_object_wrapper) uvm_config_wrapper;
        
        
        //----------------------------------------------------------------------
        // Class: uvm_config_db_options
        //
        // Provides a namespace for managing options for the
        // configuration DB facility.  The only thing allowed in this class is static
        // local data members and static functions for manipulating and
        // retrieving the value of the data members.  The static local data
        // members represent options and settings that control the behavior of
        // the configuration DB facility.
        
        // Options include:
        //
        //  * tracing:  on/off
        //
        //    The default for tracing is off.
        //
        //----------------------------------------------------------------------
%000000 class uvm_config_db_options;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db_options__Vclpkg
           
          static local bit ready;
          static local bit tracing;
        
          // Function: turn_on_tracing
          //
          // Turn tracing on for the configuration database. This causes all
          // reads and writes to the database to display information about
          // the accesses. Tracing is off by default.
          //
          // This method is implicitly called by the ~+UVM_CONFIG_DB_TRACE~.
        
%000000   static function void turn_on_tracing();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db_options__Vclpkg
%000000      if (!ready) init();
-000000  point: type=expr comment=(ready==0) => 1 hier=uvm_pkg::uvm_config_db_options__Vclpkg
-000000  point: type=expr comment=(ready==1) => 0 hier=uvm_pkg::uvm_config_db_options__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db_options__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db_options__Vclpkg
%000000     tracing = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db_options__Vclpkg
          endfunction
        
          // Function: turn_off_tracing
          //
          // Turn tracing off for the configuration database.
        
%000000   static function void turn_off_tracing();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db_options__Vclpkg
%000000      if (!ready) init();
-000000  point: type=expr comment=(ready==0) => 1 hier=uvm_pkg::uvm_config_db_options__Vclpkg
-000000  point: type=expr comment=(ready==1) => 0 hier=uvm_pkg::uvm_config_db_options__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db_options__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_config_db_options__Vclpkg
%000000     tracing = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_config_db_options__Vclpkg
          endfunction
        
          // Function: is_tracing
          //
          // Returns 1 if the tracing facility is on and 0 if it is off.
        
 000213   static function bit is_tracing();
+000213  point: type=line comment=block hier=uvm_pkg::uvm_config_db_options__Vclpkg
~000213     if (!ready) init();
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_config_db_options__Vclpkg
+000212  point: type=branch comment=else hier=uvm_pkg::uvm_config_db_options__Vclpkg
-000000  point: type=expr comment=(ready==0) => 1 hier=uvm_pkg::uvm_config_db_options__Vclpkg
+000213  point: type=expr comment=(ready==1) => 0 hier=uvm_pkg::uvm_config_db_options__Vclpkg
 000213     return tracing;
+000213  point: type=line comment=block hier=uvm_pkg::uvm_config_db_options__Vclpkg
          endfunction
        
        
%000001   static local function void init();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_config_db_options__Vclpkg
%000001      uvm_cmdline_processor clp;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_config_db_options__Vclpkg
%000001      string trace_args[$];
-000001  point: type=line comment=block hier=uvm_pkg::uvm_config_db_options__Vclpkg
             
%000001      clp = uvm_cmdline_processor::get_inst();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_config_db_options__Vclpkg
        
%000001      if (clp.get_arg_matches("+UVM_CONFIG_DB_TRACE", trace_args)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db_options__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_config_db_options__Vclpkg
%000000         tracing = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_config_db_options__Vclpkg
             end
        
%000001      ready = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_config_db_options__Vclpkg
          endfunction
        
        endclass
        

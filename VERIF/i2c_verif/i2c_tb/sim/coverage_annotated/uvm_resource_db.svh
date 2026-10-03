//      // verilator_coverage annotation
        //----------------------------------------------------------------------
        //   Copyright 2011 Cypress Semiconductor
        //   Copyright 2010 Mentor Graphics Corporation
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
        
        //----------------------------------------------------------------------
        // Title: UVM Resource Database
        //
        // Topic: Intro
        //
        // The <uvm_resource_db> class provides a convenience interface for
        // the resources facility.  In many cases basic operations such as
        // creating and setting a resource or getting a resource could take
        // multiple lines of code using the interfaces in <uvm_resource_base> or
        // <uvm_resource#(T)>.  The convenience layer in <uvm_resource_db>
        // reduces many of those operations to a single line of code.
        //
        // If the run-time ~+UVM_RESOURCE_DB_TRACE~ command line option is
        // specified, all resource DB accesses (read and write) are displayed.
        //----------------------------------------------------------------------
        
        typedef class uvm_resource_db_options;
        typedef class uvm_cmdline_processor;
        
        //----------------------------------------------------------------------
        // class: uvm_resource_db
        //
        // All of the functions in uvm_resource_db#(T) are static, so they
        // must be called using the :: operator.  For example:
        //
        //|  uvm_resource_db#(int)::set("A", "*", 17, this);
        //
        // The parameter value "int" identifies the resource type as
        // uvm_resource#(int).  Thus, the type of the object in the resource
        // container is int. This maintains the type-safety characteristics of
        // resource operations.
        //
        //----------------------------------------------------------------------
        class uvm_resource_db #(type T=uvm_object);
        
          typedef uvm_resource #(T) rsrc_t;
        
%000000   protected function new();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
          endfunction
        
          // function: get_by_type
          //
          // Get a resource by type.  The type is specified in the db
          // class parameter so the only argument to this function is the
          // ~scope~.
        
%000000   static function rsrc_t get_by_type(string scope);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000     return rsrc_t::get_by_type(scope, rsrc_t::get_type());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
          endfunction
        
          // function: get_by_name
          //
          // Imports a resource by ~name~.  The first argument is the ~name~ of the
          // resource to be retrieved and the second argument is the current
          // ~scope~. The ~rpterr~ flag indicates whether or not to generate
          // a warning if no matching resource is found.
        
%000003   static function rsrc_t get_by_name(string scope,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
                                             string name,
%000003                                      bit rpterr=1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000003     return rsrc_t::get_by_name(scope, name, rpterr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
          endfunction
        
          // function: set_default
          //
          // add a new item into the resources database.  The item will not be
          // written to so it will have its default value. The resource is
          // created using ~name~ and ~scope~ as the lookup parameters.
        
%000000   static function rsrc_t set_default(string scope, string name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000000     rsrc_t r;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
            
%000000     r = new(name, scope);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000     r.set();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000     return r;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
          endfunction
        
          // function- show_msg
        
          // internal helper function to print resource accesses
        
%000000   protected static function void m_show_msg(
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
                  input string id,
                  input string rtype,
                  input string action,
                  input string scope,
                  input string name,
                  input uvm_object accessor,
                  input rsrc_t rsrc);
        
%000000           T foo;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000           string msg=`uvm_typename(foo);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000000           $sformat(msg, "%s '%s%s' (type %s) %s by %s = %s",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000               rtype,scope, name=="" ? "" : {".",name}, msg,action,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==0) => 0 hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=expr comment=((name == %22%22)==1) => 1 hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=expr comment=((name == %22%22)==0) => 0 hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==1) => 1 hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==0) => 0 hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==1) => 1 hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==0) => 0 hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==1) => 1 hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==0) => 0 hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==1) => 1 hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==0) => 0 hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==1) => 1 hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==0) => 0 hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==1) => 1 hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==0) => 0 hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==1) => 1 hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==0) => 0 hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==1) => 1 hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==0) => 0 hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==1) => 1 hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==0) => 0 hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==1) => 1 hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==0) => 0 hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==1) => 1 hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==0) => 0 hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==1) => 1 hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000               (accessor != null) ? accessor.get_full_name() : "<unknown>",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000               rsrc==null?"null (failed lookup)":rsrc.convert2string());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000000           `uvm_info(id, msg, UVM_LOW)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
          endfunction
        
          // function: set
          //
          // Create a new resource, write a ~val~ to it, and set it into the
          // database using ~name~ and ~scope~ as the lookup parameters. The
          // ~accessor~ is used for auditting.
%000001   static function void set(input string scope, input string name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
                                   T val, input uvm_object accessor = null);
        
%000001     rsrc_t rsrc = new(name, scope);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000001     rsrc.write(val, accessor);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000001     rsrc.set();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000001     if(uvm_resource_db_options::is_tracing())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db___Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000       m_show_msg("RSRCDB/SET", "Resource","set", scope, name, accessor, rsrc);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
          endfunction
        
          // function: set_anonymous
          //
          // Create a new resource, write a ~val~ to it, and set it into the
          // database.  The resource has no name and therefore will not be
          // entered into the name map. But is does have a ~scope~ for lookup
          // purposes. The ~accessor~ is used for auditting.
%000000   static function void set_anonymous(input string scope,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
                                             T val, input uvm_object accessor = null);
        
%000000     rsrc_t rsrc = new("", scope);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000     rsrc.write(val, accessor);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000     rsrc.set();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000000     if(uvm_resource_db_options::is_tracing())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000       m_show_msg("RSRCDB/SETANON","Resource", "set", scope, "", accessor, rsrc);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
          endfunction
        
          // function set_override
          //
          // Create a new resource, write ~val~ to it, and set it into the
          // database.  Set it at the beginning of the queue in the type map and
          // the name map so that it will be (currently) the highest priority
          // resource with the specified name and type.
        
%000000   static function void set_override(input string scope, input string name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
                                            T val, uvm_object accessor = null);
%000000     rsrc_t rsrc = new(name, scope);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000     rsrc.write(val, accessor);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000     rsrc.set_override();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000000     if(uvm_resource_db_options::is_tracing())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000       m_show_msg("RSRCDB/SETOVRD", "Resource","set", scope, name, accessor, rsrc);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
          endfunction
        
        
            
          // function set_override_type
          //
          // Create a new resource, write ~val~ to it, and set it into the
          // database.  Set it at the beginning of the queue in the type map so
          // that it will be (currently) the highest priority resource with the
          // specified type. It will be normal priority (i.e. at the end of the
          // queue) in the name map.
        
%000000   static function void set_override_type(input string scope, input string name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
                                                 T val, uvm_object accessor = null);
%000000     rsrc_t rsrc = new(name, scope);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000     rsrc.write(val, accessor);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000     rsrc.set_override(uvm_resource_types::TYPE_OVERRIDE);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000000     if(uvm_resource_db_options::is_tracing())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000       m_show_msg("RSRCDB/SETOVRDTYP","Resource", "set", scope, name, accessor, rsrc);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
          endfunction
        
          // function set_override_name
          //
          // Create a new resource, write ~val~ to it, and set it into the
          // database.  Set it at the beginning of the queue in the name map so
          // that it will be (currently) the highest priority resource with the
          // specified name. It will be normal priority (i.e. at the end of the
          // queue) in the type map.
        
%000000   static function void set_override_name(input string scope, input string name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
                                          T val, uvm_object accessor = null);
%000000     rsrc_t rsrc = new(name, scope);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000     rsrc.write(val, accessor);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000     rsrc.set_override(uvm_resource_types::NAME_OVERRIDE);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000000     if(uvm_resource_db_options::is_tracing())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000       m_show_msg("RSRCDB/SETOVRDNAM","Resource", "set", scope, name, accessor, rsrc);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
          endfunction
        
          // function: read_by_name
          //
          // locate a resource by ~name~ and ~scope~ and read its value. The value 
          // is returned through the output argument ~val~.  The return value is a bit 
          // that indicates whether or not the read was successful. The ~accessor~
          // is used for auditting.
%000003   static function bit read_by_name(input string scope,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
                                           input string name,
                                           inout T val, input uvm_object accessor = null);
        
%000003     rsrc_t rsrc = get_by_name(scope, name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000003     if(uvm_resource_db_options::is_tracing())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db___Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000       m_show_msg("RSRCDB/RDBYNAM","Resource", "read", scope, name, accessor, rsrc);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000003     if(rsrc == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db___Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000003     val = rsrc.read(accessor);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000003     return 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
          
          endfunction
        
          // function: read_by_type
          //
          // Read a value by type.  The value is returned through the output
          // argument ~val~.  The ~scope~ is used for the lookup. The return
          // value is a bit that indicates whether or not the read is successful.
          // The ~accessor~ is used for auditting.
%000000   static function bit read_by_type(input string scope,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
                                           inout T val,
                                           input uvm_object accessor = null);
            
%000000     rsrc_t rsrc = get_by_type(scope);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000000     if(uvm_resource_db_options::is_tracing())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000       m_show_msg("RSRCDB/RDBYTYP", "Resource","read", scope, "", accessor, rsrc);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000000     if(rsrc == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000000     val = rsrc.read(accessor);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000000     return 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
          endfunction
        
          // function: write_by_name
          //
          // write a ~val~ into the resources database.  First, look up the
          // resource by ~name~ and ~scope~.  If it is not located then add a new 
          // resource to the database and then write its value.
          //
          // Because the ~scope~ is matched to a resource which may be a
          // regular expression, and consequently may target other scopes beyond
          // the ~scope~ argument. Care must be taken with this function. If
          // a <get_by_name> match is found for ~name~ and ~scope~ then ~val~
          // will be written to that matching resource and thus may impact
          // other scopes which also match the resource.
%000000   static function bit write_by_name(input string scope, input string name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
                                             T val, input uvm_object accessor = null);
        
%000000     rsrc_t rsrc = get_by_name(scope, name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000000     if(uvm_resource_db_options::is_tracing())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000       m_show_msg("RSRCDB/WR","Resource", "written", scope, name, accessor, rsrc);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000000     if(rsrc == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000000     rsrc.write(val, accessor);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000000     return 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
          endfunction
        
          // function: write_by_type
          //
          // write a ~val~ into the resources database.  First, look up the
          // resource by type.  If it is not located then add a new resource to
          // the database and then write its value.
          //
          // Because the ~scope~ is matched to a resource which may be a
          // regular expression, and consequently may target other scopes beyond
          // the ~scope~ argument. Care must be taken with this function. If
          // a <get_by_name> match is found for ~name~ and ~scope~ then ~val~
          // will be written to that matching resource and thus may impact
          // other scopes which also match the resource.
%000000   static function bit write_by_type(input string scope,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
                                            input T val, input uvm_object accessor = null);
        
%000000     rsrc_t rsrc = get_by_type(scope);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000000     if(uvm_resource_db_options::is_tracing())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000       m_show_msg("RSRCDB/WRTYP", "Resource","written", scope, "", accessor, rsrc);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000000     if(rsrc == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000000     rsrc.write(val, accessor);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
        
%000000     return 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
          endfunction
        
          // function: dump
          //
          // Dump all the resources in the resource pool. This is useful for
          // debugging purposes.  This function does not use the parameter T, so
          // it will dump the same thing -- the entire database -- no matter the
          // value of the parameter.
        
%000000   static function void dump();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000     uvm_resource_pool rp = uvm_resource_pool::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
%000000     rp.dump();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz14__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db__Tz9__Vclpkg
          endfunction
        
        endclass
        
        
        //----------------------------------------------------------------------
        // Class: uvm_resource_db_options
        //
        // Provides a namespace for managing options for the
        // resources DB facility.  The only thing allowed in this class is static
        // local data members and static functions for manipulating and
        // retrieving the value of the data members.  The static local data
        // members represent options and settings that control the behavior of
        // the resources DB facility.
        
        // Options include:
        //
        //  * tracing:  on/off
        //
        //    The default for tracing is off.
        //
        //----------------------------------------------------------------------
%000000 class uvm_resource_db_options;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db_options__Vclpkg
           
          static local bit ready;
          static local bit tracing;
        
          // Function: turn_on_tracing
          //
          // Turn tracing on for the resource database. This causes all
          // reads and writes to the database to display information about
          // the accesses. Tracing is off by default.
          //
          // This method is implicitly called by the ~+UVM_RESOURCE_DB_TRACE~.
        
%000000   static function void turn_on_tracing();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db_options__Vclpkg
%000000      if (!ready) init();
-000000  point: type=expr comment=(ready==0) => 1 hier=uvm_pkg::uvm_resource_db_options__Vclpkg
-000000  point: type=expr comment=(ready==1) => 0 hier=uvm_pkg::uvm_resource_db_options__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db_options__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db_options__Vclpkg
%000000     tracing = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db_options__Vclpkg
          endfunction
        
          // Function: turn_off_tracing
          //
          // Turn tracing off for the resource database.
        
%000000   static function void turn_off_tracing();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db_options__Vclpkg
%000000      if (!ready) init();
-000000  point: type=expr comment=(ready==0) => 1 hier=uvm_pkg::uvm_resource_db_options__Vclpkg
-000000  point: type=expr comment=(ready==1) => 0 hier=uvm_pkg::uvm_resource_db_options__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db_options__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db_options__Vclpkg
%000000     tracing = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_db_options__Vclpkg
          endfunction
        
          // Function: is_tracing
          //
          // Returns 1 if the tracing facility is on and 0 if it is off.
        
 000010   static function bit is_tracing();
+000010  point: type=line comment=block hier=uvm_pkg::uvm_resource_db_options__Vclpkg
~000010     if (!ready) init();
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db_options__Vclpkg
-000009  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db_options__Vclpkg
-000000  point: type=expr comment=(ready==0) => 1 hier=uvm_pkg::uvm_resource_db_options__Vclpkg
+000010  point: type=expr comment=(ready==1) => 0 hier=uvm_pkg::uvm_resource_db_options__Vclpkg
 000010     return tracing;
+000010  point: type=line comment=block hier=uvm_pkg::uvm_resource_db_options__Vclpkg
          endfunction
        
        
%000001   static local function void init();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource_db_options__Vclpkg
%000001      uvm_cmdline_processor clp;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource_db_options__Vclpkg
%000001      string trace_args[$];
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource_db_options__Vclpkg
             
%000001      clp = uvm_cmdline_processor::get_inst();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource_db_options__Vclpkg
        
%000001      if (clp.get_arg_matches("+UVM_RESOURCE_DB_TRACE", trace_args)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db_options__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_resource_db_options__Vclpkg
%000000         tracing = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_db_options__Vclpkg
             end
        
%000001      ready = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource_db_options__Vclpkg
          endfunction
        
        endclass
        

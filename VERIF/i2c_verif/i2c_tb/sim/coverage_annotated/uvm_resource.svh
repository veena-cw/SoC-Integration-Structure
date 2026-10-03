//      // verilator_coverage annotation
        //----------------------------------------------------------------------
        //   Copyright 2011 Cypress Semiconductor
        //   Copyright 2010 Mentor Graphics Corporation
        //   Copyright 2011 Cadence Design Systems, Inc. 
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
        // Title: Resources
        //
        // Topic: Intro
        //
        // A resource is a parameterized container that holds arbitrary data.
        // Resources can be used to configure components, supply data to
        // sequences, or enable sharing of information across disparate parts of
        // a testbench.  They are stored using scoping information so their
        // visibility can be constrained to certain parts of the testbench.
        // Resource containers can hold any type of data, constrained only by
        // the data types available in SystemVerilog.  Resources can contain
        // scalar objects, class handles, queues, lists, or even virtual
        // interfaces.
        //
        // Resources are stored in a resource database so that each resource can
        // be retrieved by name or by type. The databse has both a name table
        // and a type table and each resource is entered into both. The database
        // is globally accessible.
        //
        // Each resource has a set of scopes over which it is visible.  The set
        // of scopes is represented as a regular expression.  When a resource is
        // looked up the scope of the entity doing the looking up is supplied to
        // the lookup function.  This is called the ~current scope~.  If the
        // current scope is in the set of scopes over which a resource is
        // visible then the resource can be retuned in the lookup.
        //
        // Resources can be looked up by name or by type. To support type lookup
        // each resource has a static type handle that uniquely identifies the
        // type of each specialized resource container.
        //
        // Mutliple resources that have the same name are stored in a queue.
        // Each resource is pushed into a queue with the first one at the front
        // of the queue and each subsequent one behind it.  The same happens for
        // multiple resources that have the same type.  The resource queues are
        // searched front to back, so those placed earlier in the queue have
        // precedence over those placed later.
        //
        // The precedence of resources with the same name or same type can be
        // altered.  One way is to set the ~precedence~ member of the resource
        // container to any arbitrary value.  The search algorithm will return
        // the resource with the highest precedence.  In the case where there
        // are multiple resources that match the search criteria and have the
        // same (highest) precedence, the earliest one located in the queue will
        // be one returned.  Another way to change the precedence is to use the
        // set_priority function to move a resource to either the front or back
        // of the queue.
        //
        // The classes defined here form the low level layer of the resource
        // database.  The classes include the resource container and the database
        // that holds the containers.  The following set of classes are defined
        // here:
        //
        // <uvm_resource_types>: A class without methods or members, only
        // typedefs and enums. These types and enums are used throughout the
        // resources facility.  Putting the types in a class keeps them confined
        // to a specific name space.
        //
        // <uvm_resource_options>: policy class for setting options, such
        // as auditing, which effect resources.
        //
        // <uvm_resource_base>: the base (untyped) resource class living in the
        // resource database.  This class includes the interface for setting a
        // resource as read-only, notification, scope management, altering
        // search priority, and managing auditing.
        //
        // <uvm_resource#(T)>: parameterized resource container.  This class
        // includes the interfaces for reading and writing each resource.
        // Because the class is parameterized, all the access functions are type
        // sace.
        //
        // <uvm_resource_pool>: the resource database. This is a singleton
        // class object.
        //----------------------------------------------------------------------
        
        typedef class uvm_resource_base; // forward reference
        
        
        //----------------------------------------------------------------------
        // Class: uvm_resource_types
        //
        // Provides typedefs and enums used throughout the resources facility.
        // This class has no members or methods, only typedefs.  It's used in
        // lieu of package-scope types.  When needed, other classes can use
        // these types by prefixing their usage with uvm_resource_types::.  E.g.
        //
        //|  uvm_resource_types::rsrc_q_t queue;
        //
        //----------------------------------------------------------------------
%000000 class uvm_resource_types;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_types__Vclpkg
        
          // types uses for setting overrides
          typedef bit[1:0] override_t;
          typedef enum override_t { TYPE_OVERRIDE = 2'b01,
                                    NAME_OVERRIDE = 2'b10 } override_e;
        
           // general purpose queue of resourcex
          typedef uvm_queue#(uvm_resource_base) rsrc_q_t;
        
          // enum for setting resource search priority
          typedef enum { PRI_HIGH, PRI_LOW } priority_e;
        
          // access record for resources.  A set of these is stored for each
          // resource by accessing object.  It's updated for each read/write.
          typedef struct
          {
            time read_time;
            time write_time;
            int unsigned read_count;
            int unsigned write_count;
          } access_t;
        
        endclass
        
        //----------------------------------------------------------------------
        // Class: uvm_resource_options
        //
        // Provides a namespace for managing options for the
        // resources facility.  The only thing allowed in this class is static
        // local data members and static functions for manipulating and
        // retrieving the value of the data members.  The static local data
        // members represent options and settings that control the behavior of
        // the resources facility.
        
        // Options include:
        //
        //  * auditing:  on/off
        //
        //    The default for auditing is on.  You may wish to turn it off to
        //    for performance reasons.  With auditing off memory is not
        //    consumed for storage of auditing information and time is not
        //    spent collecting and storing auditing information.  Of course,
        //    during the period when auditing is off no audit trail information
        //    is available
        //
        //----------------------------------------------------------------------
%000000 class uvm_resource_options;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_options__Vclpkg
        
%000001   static local bit auditing = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource_options__Vclpkg
        
          // Function: turn_on_auditing
          //
          // Turn auditing on for the resource database. This causes all
          // reads and writes to the database to store information about
          // the accesses. Auditing is turned on by default.
        
%000000   static function void turn_on_auditing();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_options__Vclpkg
%000000     auditing = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_options__Vclpkg
          endfunction
        
          // Function: turn_off_auditing
          //
          // Turn auditing off for the resource database. If auditing is turned off,
          // it is not possible to get extra information about resource
          // database accesses.
        
%000000   static function void turn_off_auditing();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_options__Vclpkg
%000000     auditing = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_options__Vclpkg
          endfunction
        
          // Function: is_auditing
          //
          // Returns 1 if the auditing facility is on and 0 if it is off.
        
 000017   static function bit is_auditing();
+000017  point: type=line comment=block hier=uvm_pkg::uvm_resource_options__Vclpkg
 000017     return auditing;
+000017  point: type=line comment=block hier=uvm_pkg::uvm_resource_options__Vclpkg
          endfunction
        endclass
        
        //----------------------------------------------------------------------
        // Class: uvm_resource_base
        //
        // Non-parameterized base class for resources.  Supports interfaces for
        // scope matching, and virtual functions for printing the resource and
        // for printing the accessor list
        //----------------------------------------------------------------------
        
        virtual class uvm_resource_base extends uvm_object;
        
          protected string scope;
          protected bit modified;
          protected bit read_only;
        
          local bit m_is_regex_name;
        
          uvm_resource_types::access_t access[string];
        
          // variable: precedence
          //
          // This variable is used to associate a precedence that a resource
          // has with respect to other resources which match the same scope
          // and name. Resources are set to the <default_precedence> initially,
          // and may be set to a higher or lower precedence as desired.
        
          int unsigned precedence;
        
          // variable: default_precedence
          //
          // The default precedence for an resource that has been created.
          // When two resources have the same precedence, the first resource
          // found has precedence.
          //
        
%000001   static int unsigned default_precedence = 1000;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
        
          // Function: new
          //
          // constructor for uvm_resource_base.  The constructor takes two
          // arguments, the name of the resource and a resgular expression which
          // represents the set of scopes over which this resource is visible.
        
 000017   function new(string name = "", string s = "*");
+000017  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
 000017     super.new(name);
+000017  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
 000017     set_scope(s);
+000017  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
 000017     modified = 0;
+000017  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
 000017     read_only = 0;
+000017  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
 000017     precedence = default_precedence;
+000017  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
~000017     if(uvm_has_wildcard(name))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_base__Vclpkg
+000017  point: type=branch comment=else hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000       m_is_regex_name = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_base__Vclpkg
          endfunction
        
          // Function: get_type_handle
          //
          // Pure virtual function that returns the type handle of the resource
          // container.
        
%000000   pure virtual function uvm_resource_base get_type_handle();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
        
        
          //---------------------------
          // Group: Read-only Interface
          //---------------------------
        
          // Function: set_read_only
          //
          // Establishes this resource as a read-only resource.  An attempt
          // to call <uvm_resource#(T)::write> on the resource will cause an error.
        
%000000   function void set_read_only();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000     read_only = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
          endfunction
        
          // function set_read_write
          //
          // Returns the resource to normal read-write capability.
          
          // Implementation question: Not sure if this function is necessary.  
          // Once a resource is set to read_only no one should be able to change 
          // that.  If anyone can flip the read_only bit then the resource is not 
          // truly read_only.
        
%000000   function void set_read_write();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000     read_only = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
          endfunction
        
          // Function: is_read_only
          //
          // Retruns one if this resource has been set to read-only, zero
          // otherwise
%000003   function bit is_read_only();
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000003     return read_only;
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
          endfunction
        
        
          //--------------------
          // Group: Notification
          //--------------------
        
          // Task: wait_modified
          //
          // This task blocks until the resource has been modified -- that is, a
          // <uvm_resource#(T)::write> operation has been performed.  When a 
          // <uvm_resource#(T)::write> is performed the modified bit is set which 
          // releases the block.  Wait_modified() then clears the modified bit so 
          // it can be called repeatedly.
        
%000000   task wait_modified();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000     wait (modified == 1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000     modified = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
          endtask
        
          //-----------------------
          // Group: Scope Interface
          //-----------------------
          //
          // Each resource has a name, a value and a set of scopes over which it
          // is visible. A scope is a hierarchical entity or a context.  A scope
          // name is a multi-element string that identifies a scope.  Each
          // element refers to a scope context and the elements are separated by
          // dots (.).
          // 
          //|    top.env.agent.monitor
          // 
          // Consider the example above of a scope name.  It consists of four
          // elements: "top", "env", "agent", and "monitor".  The elements are
          // strung together with a dot separating each element.  ~top.env.agent~
          // is the parent of ~top.env.agent.monitor~, ~top.env~ is the parent of
          // ~top.env.agent~, and so on.  A set of scopes can be represented by a
          // set of scope name strings.  A very straightforward way to represent
          // a set of strings is to use regular expressions.  A regular
          // expression is a special string that contains placeholders which can
          // be substituted in various ways to generate or recognize a
          // particular set of strings.  Here are a few simple examples:
          // 
          //|     top\..*	                all of the scopes whose top-level component
          //|                            is top
          //|    top\.env\..*\.monitor	all of the scopes in env that end in monitor;
          //|                            i.e. all the monitors two levels down from env
          //|    .*\.monitor	            all of the scopes that end in monitor; i.e.
          //|                            all the monitors (assuming a naming convention
          //|                            was used where all monitors are named "monitor")
          //|    top\.u[1-5]\.*	        all of the scopes rooted and named u1, u2, u3,
          //                             u4, or u5, and any of their subscopes.
          // 
          // The examples above use posix regular expression notation.  This is
          // a very general and expressive notation.  It is not always the case
          // that so much expressiveness is required.  Sometimes an expression
          // syntax that is easy to read and easy to write is useful, even if
          // the syntax is not as expressive as the full power of posix regular
          // expressions.  A popular substitute for regular expressions is
          // globs.  A glob is a simplified regular expression. It only has
          // three metacharacters -- *, +, and ?.  Character ranges are not
          // allowed and dots are not a metacharacter in globs as they are in
          // regular expressions.  The following table shows glob
          // metacharacters.
          // 
          //|      char	meaning	                regular expression
          //|                                    equivalent
          //|      *	    0 or more characters	.*
          //|      +	    1 or more characters	.+
          //|      ?	    exactly one character	.
          // 
          // Of the examples above, the first three can easily be translated
          // into globs.  The last one cannot.  It relies on notation that is
          // not available in glob syntax.
          // 
          //|    regular expression	    glob equivalent
          //|    ---------------------      ------------------
          //|    top\..*	            top.*
          //|    top\.env\..*\.monitor	    top.env.*.monitor
          //|    .*\.monitor	            *.monitor
          // 
          // The resource facility supports both regular expression and glob
          // syntax.  Regular expressions are identified as such when they 
          // surrounded by '/' characters. For example, ~/^top\.*/~ is
          // interpreted as the regular expression ~^top\.*~, where the
          // surrounding '/' characters have been removed. All other expressions
          // are treated as glob expressions. They are converted from glob 
          // notation to regular expression notation internally.  Regular expression 
          // compilation and matching as well as glob-to-regular expression 
          // conversion are handled by three DPI functions:
          // 
          //|    function int uvm_re_match(string re, string str);
          //|    function string uvm_glob_to_re(string glob);
          // 
          // uvm_re_match both compiles and matches the regular expression.
          // of the matching is done using regular expressions, so globs are
          // converted to regular expressions and then processed.
        
        
          // Function: set_scope
          //
          // Set the value of the regular expression that identifies the set of
          // scopes over which this resource is visible.  If the supplied
          // argument is a glob it will be converted to a regular expression
          // before it is stored.
          //
 000017   function void set_scope(string s);
+000017  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
 000017     scope = uvm_glob_to_re(s);
+000017  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
          endfunction
        
          // Function: get_scope
          //
          // Retrieve the regular expression string that identifies the set of
          // scopes over which this resource is visible.
          //
%000000   function string get_scope();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000     return scope;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
          endfunction
        
          // Function: match_scope
          //
          // Using the regular expression facility, determine if this resource
          // is visible in a scope.  Return one if it is, zero otherwise.
          //
%000007   function bit match_scope(string s);
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000007     int err = uvm_re_match(scope, s);
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000007     return (err == 0);
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
          endfunction
        
          //----------------
          // Group: Priority
          //----------------
          //
          // Functions for manipulating the search priority of resources.  The
          // function definitions here are pure virtual and are implemented in
          // derived classes.  The definitons serve as a priority management
          // interface.
        
          // Function: set priority
          //
          // Change the search priority of the resource based on the value of
          // the priority enum argument.
          //
%000000   pure virtual function void set_priority (uvm_resource_types::priority_e pri);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
        
          //-------------------------
          // Group: Utility Functions
          //-------------------------
        
          // function convert2string
          //
          // Create a string representation of the resource value.  By default
          // we don't know how to do this so we just return a "?".  Resource
          // specializations are expected to override this function to produce a
          // proper string representation of the resource value.
        
%000000   function string convert2string();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000     return "?";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
          endfunction
        
          // Function: do_print
          //
          // Implementation of do_print which is called by print().
        
%000000   function void do_print (uvm_printer printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000     $display("%s [%s] : %s", get_name(), get_scope(), convert2string());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
          endfunction
        
          //-------------------
          // Group: Audit Trail
          //-------------------
          //
          // To find out what is happening as the simulation proceeds, an audit 
          // trail of each read and write is kept. The read and write methods
          // in uvm_resource#(T) each take an accessor argument.  This is a
          // handle to the object that performed that resource access.
          //
          //|    function T read(uvm_object accessor = null);
          //|    function void write(T t, uvm_object accessor = null);
          //
          // The accessor can by anything as long as it is derived from
          // uvm_object.  The accessor object can be a component or a sequence
          // or whatever object from which a read or write was invoked.
          // Typically the ~this~ handle is used as the
          // accessor.  For example:
          //
          //|    uvm_resource#(int) rint;
          //|    int i;
          //|    ...
          //|    rint.write(7, this);
          //|    i = rint.read(this);
          //
          // The accessor's ~get_full_name()~ is stored as part of the audit trail. 
          // This way you can find out what object performed each resource access.
          // Each audit record also includes the time of the access (simulation time)
          // and the particular operation performed (read or write).
          //
          // Auditting is controlled through the <uvm_resource_options> class.
        
          // function: record_read_access
        
%000007   function void record_read_access(uvm_object accessor = null);
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
        
%000007     string str;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000007     uvm_resource_types::access_t access_record;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
        
            // If an accessor object is supplied then get the accessor record.
            // Otherwise create a new access record.  In either case populate
            // the access record with information about this access.  Check
            // first to make sure that auditing is turned on.
        
%000007     if(!uvm_resource_options::is_auditing())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_base__Vclpkg
-000007  point: type=branch comment=else hier=uvm_pkg::uvm_resource_base__Vclpkg
-000000  point: type=expr comment=(is_auditing()==0) => 1 hier=uvm_pkg::uvm_resource_base__Vclpkg
-000007  point: type=expr comment=(is_auditing()==1) => 0 hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_base__Vclpkg
        
            // If an accessor is supplied, then use its name
        	// as the database entry for the accessor record.
        	// Otherwise, use "<empty>" as the database entry.
%000007     if(accessor != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_base__Vclpkg
-000007  point: type=branch comment=else hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000       str = accessor.get_full_name();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_base__Vclpkg
            else
%000007       str = "<empty>";
-000007  point: type=branch comment=else hier=uvm_pkg::uvm_resource_base__Vclpkg
        
            // Create a new accessor record if one does not exist
%000004     if(access.exists(str))
-000004  point: type=branch comment=if hier=uvm_pkg::uvm_resource_base__Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_resource_base__Vclpkg
%000004       access_record = access[str];
-000004  point: type=branch comment=if hier=uvm_pkg::uvm_resource_base__Vclpkg
            else
%000003       init_access_record(access_record);
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_resource_base__Vclpkg
        
            // Update the accessor record
%000007     access_record.read_count++;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000007     access_record.read_time = $realtime;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000007     access[str] = access_record;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
        
          endfunction
        
          // function: record_write_access
        
%000003   function void record_write_access(uvm_object accessor = null);
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
        
%000003     string str;
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
        
            // If an accessor object is supplied then get the accessor record.
            // Otherwise create a new access record.  In either case populate
            // the access record with information about this access.  Check
            // first that auditing is turned on
        
%000003     if(uvm_resource_options::is_auditing()) begin
-000003  point: type=branch comment=if hier=uvm_pkg::uvm_resource_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_base__Vclpkg
%000003       if(accessor != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_base__Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000         uvm_resource_types::access_t access_record;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000         string str;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000         str = accessor.get_full_name();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000         if(access.exists(str))
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_base__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000           access_record = access[str];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_base__Vclpkg
                else
%000000           init_access_record(access_record);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000         access_record.write_count++;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000         access_record.write_time = $realtime;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000         access[str] = access_record;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_base__Vclpkg
              end
            end
          endfunction
        
          // Function: print_accessors
          //
          // Dump the access records for this resource
          //
%000000   virtual function void print_accessors();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
        
%000000     string str;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000     uvm_component comp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000     uvm_resource_types::access_t access_record;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
        
%000000     if(access.num() == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_base__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_base__Vclpkg
        
%000000     $display("  --------");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
        
%000000     foreach (access[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000       str = i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000       $write("  %s", str);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000       access_record = access[str];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000       $display(" reads: %0d @ %0t  writes: %0d @ %0t",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000                access_record.read_count,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000                access_record.read_time,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000                access_record.write_count,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000000                access_record.write_time);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
            end
        
%000000     $display();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
        
          endfunction
        
        
          // Function: init_access_record
          //
          // Initalize a new access record
          //
%000003   function void init_access_record (inout uvm_resource_types::access_t access_record);
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000003     access_record.read_time = 0;
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000003     access_record.write_time = 0;
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000003     access_record.read_count = 0;
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000003     access_record.write_count = 0;
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
          endfunction
        
%000003   virtual function bit has_regex_name();
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
%000003   	return m_is_regex_name;
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_base__Vclpkg
          endfunction
        endclass
        
        
        //----------------------------------------------------------------------
        // Class - get_t
        //
        // Instances of get_t are stored in the history list as a record of each
        // get.  Failed gets are indicated with rsrc set to null.  This is part
        // of the audit trail facility for resources.
        //----------------------------------------------------------------------
%000007 class get_t;
-000007  point: type=line comment=block hier=uvm_pkg::get_t__Vclpkg
          string name;
          string scope;
          uvm_resource_base rsrc;
          time t;
        endclass
        
        //----------------------------------------------------------------------
        // Class: uvm_resource_pool
        //
        // The global (singleton) resource database.
        //
        // Each resource is stored both by primary name and by type handle.  The
        // resource pool contains two associative arrays, one with name as the
        // key and one with the type handle as the key.  Each associative array
        // contains a queue of resources.  Each resource has a regular
        // expression that represents the set of scopes over with it is visible.
        //
        //|  +------+------------+                          +------------+------+
        //|  | name | rsrc queue |                          | rsrc queue | type |
        //|  +------+------------+                          +------------+------+
        //|  |      |            |                          |            |      |
        //|  +------+------------+                  +-+-+   +------------+------+
        //|  |      |            |                  | | |<--+---*        |  T   |
        //|  +------+------------+   +-+-+          +-+-+   +------------+------+
        //|  |  A   |        *---+-->| | |           |      |            |      |
        //|  +------+------------+   +-+-+           |      +------------+------+
        //|  |      |            |      |            |      |            |      |
        //|  +------+------------+      +-------+  +-+      +------------+------+
        //|  |      |            |              |  |        |            |      |
        //|  +------+------------+              |  |        +------------+------+
        //|  |      |            |              V  V        |            |      |
        //|  +------+------------+            +------+      +------------+------+
        //|  |      |            |            | rsrc |      |            |      |
        //|  +------+------------+            +------+      +------------+------+
        //
        // The above diagrams illustrates how a resource whose name is A and
        // type is T is stored in the pool.  The pool contains an entry in the
        // type map for type T and an entry in the name map for name A.  The
        // queues in each of the arrays each contain an entry for the resource A
        // whose type is T.  The name map can contain in its queue other
        // resources whose name is A which may or may not have the same type as
        // our resource A.  Similarly, the type map can contain in its queue
        // other resources whose type is T and whose name may or may not be A.
        //
        // Resources are added to the pool by calling <set>; they are retrieved
        // from the pool by calling <get_by_name> or <get_by_type>.  When an object 
        // creates a new resource and calls <set> the resource is made available to be
        // retrieved by other objects outside of itsef; an object gets a
        // resource when it wants to access a resource not currently available
        // in its scope.
        //
        // The scope is stored in the resource itself (not in the pool) so
        // whether you get by name or by type the resource's visibility is
        // the same.
        //
        // As an auditing capability, the pool contains a history of gets.  A
        // record of each get, whether by <get_by_type> or <get_by_name>, is stored 
        // in the audit record.  Both successful and failed gets are recorded. At
        // the end of simulation, or any time for that matter, you can dump the
        // history list.  This will tell which resources were successfully
        // located and which were not.  You can use this information
        // to determine if there is some error in name, type, or
        // scope that has caused a resource to not be located or to be incorrrectly
        // located (i.e. the wrong resource is located).
        //
        //----------------------------------------------------------------------
        
        class uvm_resource_pool;
        
          static bit m_has_wildcard_names;
%000001   static local uvm_resource_pool rp = get();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
          uvm_resource_types::rsrc_q_t rtab [string];
          uvm_resource_types::rsrc_q_t ttab [uvm_resource_base];
        
          get_t get_record [$];  // history of gets
        
%000001   local function new();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
          endfunction
        
        
          // Function: get
          //
          // Returns the singleton handle to the resource pool
        
 000282   static function uvm_resource_pool get();
+000282  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
~000281     if(rp == null)
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
+000281  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000001       rp = new();
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
 000282     return rp;
+000282  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
          endfunction
        
        
          // Function: spell_check
          //
          // Invokes the spell checker for a string s.  The universe of
          // correctly spelled strings -- i.e. the dictionary -- is the name
          // map.
        
%000007   function bit spell_check(string s);
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000007     return uvm_spell_chkr#(uvm_resource_types::rsrc_q_t)::check(rtab, s);
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
          endfunction
        
        
          //-----------
          // Group: Set
          //-----------
        
          // Function: set
          //
          // Add a new resource to the resource pool.  The resource is inserted
          // into both the name map and type map so it can be located by
          // either.
          //
          // An object creates a resources and ~sets~ it into the resource pool.
          // Later, other objects that want to access the resource must ~get~ it
          // from the pool
          //
          // Overrides can be specified using this interface.  Either a name
          // override, a type override or both can be specified.  If an
          // override is specified then the resource is entered at the front of
          // the queue instead of at the back.  It is not recommended that users
          // specify the override paramterer directly, rather they use the
          // <set_override>, <set_name_override>, or <set_type_override>
          // functions.
          //
%000003   function void set (uvm_resource_base rsrc, 
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000001                      uvm_resource_types::override_t override = 0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
        
%000003     uvm_resource_types::rsrc_q_t rq;
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000003     string name;
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000003     uvm_resource_base type_handle;
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
            // If resource handle is null then there is nothing to do.
%000003     if(rsrc == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
            // insert into the name map.  Resources with empty names are
            // anonymous resources and are not entered into the name map
%000003     name = rsrc.get_name();
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000003     if(name != "") begin
-000003  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000002       if(rtab.exists(name))
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000001         rq = rtab[name];
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
              else
%000002         rq = new();
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
              // Insert the resource into the queue associated with its name.
              // If we are doing a name override then insert it in the front of
              // the queue, otherwise insert it in the back.
%000003       if(override & uvm_resource_types::NAME_OVERRIDE)
-000003  point: type=expr comment=((override & uvm_resource_types::NAME_OVERRIDE)[0]==0 && (override & uvm_resource_types::NAME_OVERRIDE)[1]==0) => 0 hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=expr comment=((override & uvm_resource_types::NAME_OVERRIDE)[0]==1) => 1 hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=expr comment=((override & uvm_resource_types::NAME_OVERRIDE)[1]==1) => 1 hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000         rq.push_front(rsrc);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
              else
%000003         rq.push_back(rsrc);
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000003       rtab[name] = rq;
-000003  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
            end
        
            // insert into the type map
%000003     type_handle = rsrc.get_type_handle();
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000003     if(ttab.exists(type_handle))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       rq = ttab[type_handle];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
            else
%000003       rq = new();
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
            // insert the resource into the queue associated with its type.  If
            // we are doing a type override then insert it in the front of the
            // queue, otherwise insert it in the back of the queue.
%000003     if(override & uvm_resource_types::TYPE_OVERRIDE)
-000003  point: type=expr comment=((override & uvm_resource_types::TYPE_OVERRIDE)[0]==0 && (override & uvm_resource_types::TYPE_OVERRIDE)[1]==0) => 0 hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=expr comment=((override & uvm_resource_types::TYPE_OVERRIDE)[0]==1) => 1 hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=expr comment=((override & uvm_resource_types::TYPE_OVERRIDE)[1]==1) => 1 hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       rq.push_front(rsrc);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
            else
%000003       rq.push_back(rsrc);
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000003     ttab[type_handle] = rq;
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
            //optimization for name lookups. Since most environments never
            //use wildcarded names, don't want to incurr a search penalty
            //unless a wildcarded name has been used.
%000003     if(rsrc.has_regex_name())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       m_has_wildcard_names = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
          endfunction
        
          // Function: set_override
          //
          // The resource provided as an argument will be entered into the pool
          // and will override both by name and type.
        
%000000   function void set_override(uvm_resource_base rsrc);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     set(rsrc, (uvm_resource_types::NAME_OVERRIDE |
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
                       uvm_resource_types::TYPE_OVERRIDE));
          endfunction
        
        
          // Function: set_name_override
          //
          // The resource provided as an argument will entered into the pool
          // using normal precedence in the type map and will override the name.
        
%000000   function void set_name_override(uvm_resource_base rsrc);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     set(rsrc, uvm_resource_types::NAME_OVERRIDE);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
          endfunction
        
        
          // Function: set_type_override
          //
          // The resource provided as an argument will be entered into the pool
          // using noraml precedence in the name map and will override the type.
        
%000000   function void set_type_override(uvm_resource_base rsrc);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     set(rsrc, uvm_resource_types::TYPE_OVERRIDE);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
          endfunction
        
        
          // function - push_get_record
          //
          // Insert a new record into the get history list.
        
%000007   function void push_get_record(string name, string scope,
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
                                          uvm_resource_base rsrc);
%000007     get_t impt;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
            // if auditing is turned off then there is no reason
            // to save a get record
%000007     if(!uvm_resource_options::is_auditing())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000007  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=expr comment=(is_auditing()==0) => 1 hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000007  point: type=expr comment=(is_auditing()==1) => 0 hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000007     impt = new();
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000007     impt.name  = name;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000007     impt.scope = scope;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000007     impt.rsrc  = rsrc;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000007     impt.t     = $realtime;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000007     get_record.push_back(impt);
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
          endfunction
        
          // function - dump_get_records
          //
          // Format and print the get history list.
        
%000000   function void dump_get_records();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     get_t record;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     bit success;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     $display("--- resource get records ---");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     foreach (get_record[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       record = get_record[i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       success = (record.rsrc != null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       $display("get: name=%s  scope=%s  %s @ %0t",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000                record.name, record.scope,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000                ((success)?"success":"fail"),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=expr comment=(success==0) => 0 hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=expr comment=(success==1) => 1 hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000                record.t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
            end
          endfunction
        
          //--------------
          // Group: Lookup
          //--------------
          //
          // This group of functions is for finding resources in the resource database.  
          //
          // <lookup_name> and <lookup_type> locate the set of resources that
          // matches the name or type (respectively) and is visible in the
          // current scope.  These functions return a queue of resources.
          //
          // <get_highest_precedence> traverese a queue of resources and
          // returns the one with the highest precedence -- i.e. the one whose
          // precedence member has the highest value.
          //
          // <get_by_name> and <get_by_type> use <lookup_name> and <lookup_type>
          // (respectively) and <get_highest_precedence> to find the resource with
          // the highest priority that matches the other search criteria.
        
        
          // Function: lookup_name
          //
          // Lookup resources by ~name~.  Returns a queue of resources that
          // match the ~name~, ~scope~, and ~type_handle~.  If no resources
          // match the queue is returned empty. If ~rpterr~ is set then a
          // warning is issued if no matches are found, and the spell checker is
          // invoked on ~name~.  If ~type_handle~ is null then a type check is
          // not made and resources are returned that match only ~name~ and
          // ~scope~.
        
 000220   function uvm_resource_types::rsrc_q_t lookup_name(string scope = "",
+000220  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
                                                            string name,
                                                            uvm_resource_base type_handle = null,
                                                            bit rpterr = 1);
 000220     uvm_resource_types::rsrc_q_t rq;
+000220  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
 000220     uvm_resource_types::rsrc_q_t q = new();
+000220  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
 000220     uvm_resource_base rsrc;
+000220  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
 000220     uvm_resource_base r;
+000220  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
            // resources with empty names are anonymous and do not exist in the name map
~000220     if(name == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
+000220  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       return q;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
            // Does an entry in the name map exist with the specified name?
            // If not, then we're done
%000007     if((rpterr && !spell_check(name)) || (!rpterr && !rtab.exists(name))) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000007  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       return q;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
            end
        
 000220     rsrc = null;
+000220  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
 000220     rq = rtab[name];
+000220  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
 000220     for(int i=0; i<rq.size(); ++i) begin 
+000220  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
+000011  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
 000011       r = rq.get(i);
+000011  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
              // does the type and scope match?
%000007       if(((type_handle == null) || (r.get_type_handle() == type_handle)) &&
-000007  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000004  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
                  r.match_scope(scope))
%000007         q.push_back(r);
-000007  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
            end
        
 000220     return q;
+000220  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
          endfunction
        
          // Function: get_highest_precedence
          //
          // Traverse a queue, ~q~, of resources and return the one with the highest
          // precedence.  In the case where there exists more than one resource
          // with the highest precedence value, the first one that has that
          // precedence will be the one that is returned.
        
%000007   function uvm_resource_base get_highest_precedence(ref uvm_resource_types::rsrc_q_t q);
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000007     uvm_resource_base rsrc;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000007     uvm_resource_base r;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000007     int unsigned i;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000007     int unsigned prec;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000007     if(q.size() == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000007  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
            // get the first resources in the queue
%000007     rsrc = q.get(0);
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000007     prec = rsrc.precedence;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
            // start searching from the second resource
%000007     for(int i = 1; i < q.size(); ++i) begin
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       r = q.get(i);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       if(r.precedence > prec) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000         rsrc = r;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000         prec = r.precedence;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
              end
            end
        
%000007     return rsrc;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
          endfunction
        
          // Function: sort_by_precedence
          //
          // Given a list of resources, obtained for example from <lookup_scope>,
          // sort the resources in  precedence order. The highest precedence
          // resource will be first in the list and the lowest precedence will
          // be last. Resources that have the same precedence and the same name
          // will be ordered by most recently set first.
        
%000000   static function void sort_by_precedence(ref uvm_resource_types::rsrc_q_t q);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     uvm_resource_types::rsrc_q_t all[int];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     uvm_resource_base r;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     for(int i=0; i<q.size(); ++i) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       r = q.get(i);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       if(!all.exists(r.precedence))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000          all[r.precedence] = new;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       all[r.precedence].push_front(r); //since we will push_front in the final
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
            end
%000000     q.delete();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     foreach(all[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       for(int j=0; j<all[i].size(); ++j) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000         r = all[i].get(j);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000         q.push_front(r);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
              end
            end
          endfunction
        
        
          // Function: get_by_name
          //
          // Lookup a resource by ~name~, ~scope~, and ~type_handle~.  Whether
          // the get succeeds or fails, save a record of the get attempt.  The
          // ~rpterr~ flag indicates whether to report errors or not.
          // Essentially, it serves as a verbose flag.  If set then the spell
          // checker will be invoked and warnings about multiple resources will
          // be produced.
        
%000007   function uvm_resource_base get_by_name(string scope = "",
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
                                                 string name,
                                                 uvm_resource_base type_handle,
                                                 bit rpterr = 1);
        
%000007     uvm_resource_types::rsrc_q_t q;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000007     uvm_resource_base rsrc;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000007     q = lookup_name(scope, name, type_handle, rpterr);
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000007     if(q.size() == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000007  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       push_get_record(name, scope, null);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
            end
        
%000007     rsrc = get_highest_precedence(q);
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000007     push_get_record(name, scope, rsrc);
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000007     return rsrc;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
            
          endfunction
        
        
          // Function: lookup_type
          //
          // Lookup resources by type. Return a queue of resources that match
          // the ~type_handle~ and ~scope~.  If no resources match then the returned
          // queue is empty.
        
%000000   function uvm_resource_types::rsrc_q_t lookup_type(string scope = "",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
                                                            uvm_resource_base type_handle);
        
%000000     uvm_resource_types::rsrc_q_t q = new();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     uvm_resource_types::rsrc_q_t rq;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     uvm_resource_base r;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     int unsigned i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     if(type_handle == null || !ttab.exists(type_handle)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       return q;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
            end
        
%000000     rq = ttab[type_handle];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     for(int i = 0; i < rq.size(); ++i) begin 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       r = rq.get(i);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       if(r.match_scope(scope))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000         q.push_back(r);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
            end
        
%000000     return q;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
          endfunction
        
          // Function: get_by_type
          //
          // Lookup a resource by ~type_handle~ and ~scope~.  Insert a record into
          // the get history list whether or not the get succeeded.
        
%000000   function uvm_resource_base get_by_type(string scope = "",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
                                                 uvm_resource_base type_handle);
        
%000000     uvm_resource_types::rsrc_q_t q;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     uvm_resource_base rsrc;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     q = lookup_type(scope, type_handle);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     if(q.size() == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       push_get_record("<type>", scope, null);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
            end
        
%000000     rsrc = q.get(0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     push_get_record("<type>", scope, rsrc);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     return rsrc;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
            
          endfunction
        
          // Function: lookup_regex_names
          //
          // This utility function answers the question, for a given ~name~,
          // ~scope~,and ~type_handle~, what are all of the resources with a
          // matching name (where the resource name may be a regular
          // expression), a matching scope (where the resoucre scope may be a
          // regular expression), and a matching type? ~name~ and ~scope~ are
          // explicit values.
        
 000213   function uvm_resource_types::rsrc_q_t lookup_regex_names(string scope,
+000213  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
                                                                   string name,
                                                                   uvm_resource_base type_handle = null);
        
 000213     uvm_resource_types::rsrc_q_t rq;
+000213  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
 000213     uvm_resource_types::rsrc_q_t result_q;
+000213  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
 000213     int unsigned i;
+000213  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
 000213     uvm_resource_base r;
+000213  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
            //For the simple case where no wildcard names exist, then we can
            //just return the queue associated with name.
~000213     if(!m_has_wildcard_names) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
+000213  point: type=expr comment=(m_has_wildcard_names==0) => 1 hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=expr comment=(m_has_wildcard_names==1) => 0 hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       result_q = lookup_name(scope, name, type_handle, 0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       return result_q;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
            end
        
 000213     result_q = new();
+000213  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
~000213     foreach (rtab[re]) begin
+000213  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       rq = rtab[re];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       for(i = 0; i < rq.size(); i++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000         r = rq.get(i);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000         if(uvm_re_match(uvm_glob_to_re(re),name) == 0)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
                  // does the type and scope match?
%000000           if(((type_handle == null) || (r.get_type_handle() == type_handle)) &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
                     r.match_scope(scope))
%000000             result_q.push_back(r);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
              end
            end
 000213     return result_q;
+000213  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
          endfunction
        
          // Function: lookup_regex
          //
          // Looks for all the resources whose name matches the regular
          // expression argument and whose scope matches the current scope.
        
%000000   function uvm_resource_types::rsrc_q_t lookup_regex(string re, scope);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     uvm_resource_types::rsrc_q_t rq;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     uvm_resource_types::rsrc_q_t result_q;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     int unsigned i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     uvm_resource_base r;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     re = uvm_glob_to_re(re);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     result_q = new();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     foreach (rtab[name]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       if(uvm_re_match(re, name))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000         continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       rq = rtab[name];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       for(i = 0; i < rq.size(); i++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000         r = rq.get(i);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000         if(r.match_scope(scope))
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000           result_q.push_back(r);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
              end
            end
        
%000000     return result_q;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
          endfunction
        
          // Function: lookup_scope
          //
          // This is a utility function that answers the question: For a given
          // ~scope~, what resources are visible to it?  Locate all the resources
          // that are visible to a particular scope.  This operation could be
          // quite expensive, as it has to traverse all of the resources in the
          // database.
        
%000000   function uvm_resource_types::rsrc_q_t lookup_scope(string scope);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     uvm_resource_types::rsrc_q_t rq;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     uvm_resource_base r;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     int unsigned i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     int unsigned err;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     uvm_resource_types::rsrc_q_t q = new();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
            //iterate in reverse order for the special case of autoconfig
            //of arrays. The array name with no [] needs to be higher priority.
            //This has no effect an manual accesses.
%000000     string name;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     if(rtab.last(name)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     do begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       rq = rtab[name];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       for(int i = 0; i < rq.size(); ++i) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000         r = rq.get(i);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000         if(r.match_scope(scope)) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000           q.push_back(r);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
                end
              end
%000000     end while(rtab.prev(name));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
            end
        
%000000     return q;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
            
          endfunction
        
          //--------------------
          // Group: Set Priority
          //--------------------
          //
          // Functions for altering the search priority of resources.  Resources
          // are stored in queues in the type and name maps.  When retrieving
          // resoures, either by type or by name, the resource queue is search
          // from front to back.  The first one that matches the search criteria
          // is the one that is returned.  The ~set_priority~ functions let you
          // change the order in which resources are searched.  For any
          // particular resource, you can set its priority to UVM_HIGH, in which
          // case the resource is moved to the front of the queue, or to UVM_LOW in
          // which case the resource is moved to the back of the queue.
        
          // function- set_priority_queue
          //
          // This function handles the mechanics of moving a resource to either
          // the front or back of the queue.
        
%000000   local function void set_priority_queue(uvm_resource_base rsrc,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
                                                 ref uvm_resource_types::rsrc_q_t q,
                                                 uvm_resource_types::priority_e pri);
        
%000000     uvm_resource_base r;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     int unsigned i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     string msg;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     string name = rsrc.get_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     for(i = 0; i < q.size(); i++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       r = q.get(i);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       if(r == rsrc) break;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
            end
        
%000000     if(r != rsrc) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       $sformat(msg, "Handle for resource named %s is not in the name name; cannot change its priority", name);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       uvm_report_error("NORSRC", msg);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
            end
        
%000000     q.delete(i);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     case(pri)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       uvm_resource_types::PRI_HIGH: q.push_front(rsrc);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       uvm_resource_types::PRI_LOW:  q.push_back(rsrc);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_resource_pool__Vclpkg
            endcase
        
          endfunction
        
        
          // Function: set_priority_type
          //
          // Change the priority of the ~rsrc~ based on the value of ~pri~, the
          // priority enum argument.  This function changes the priority only in
          // the type map, leavint the name map untouched.
        
%000000   function void set_priority_type(uvm_resource_base rsrc,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
                                          uvm_resource_types::priority_e pri);
        
%000000     uvm_resource_base type_handle;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     string msg;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     uvm_resource_types::rsrc_q_t q;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     if(rsrc == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       uvm_report_warning("NULLRASRC", "attempting to change the serach priority of a null resource");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
            end
        
%000000     type_handle = rsrc.get_type_handle();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     if(!ttab.exists(type_handle)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       $sformat(msg, "Type handle for resrouce named %s not found in type map; cannot change its search priority", rsrc.get_name());
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       uvm_report_error("RNFTYPE", msg);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
            end
        
%000000     q = ttab[type_handle];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     set_priority_queue(rsrc, q, pri);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
          endfunction
        
        
          // Function: set_priority_name
          //
          // Change the priority of the ~rsrc~ based on the value of ~pri~, the
          // priority enum argument.  This function changes the priority only in
          // the name map, leaving the type map untouched.
        
%000000   function void set_priority_name(uvm_resource_base rsrc,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
                                          uvm_resource_types::priority_e pri);
        
%000000     string name;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     string msg;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     uvm_resource_types::rsrc_q_t q;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     if(rsrc == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       uvm_report_warning("NULLRASRC", "attempting to change the serach priority of a null resource");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
            end
        
%000000     name = rsrc.get_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     if(!rtab.exists(name)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       $sformat(msg, "Resrouce named %s not found in name map; cannot change its search priority", name);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       uvm_report_error("RNFNAME", msg);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
            end
        
%000000     q = rtab[name];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     set_priority_queue(rsrc, q, pri);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
          endfunction
        
        
          // Function: set_priority
          //
          // Change the search priority of the ~rsrc~ based on the value of ~pri~,
          // the priority enum argument.  This function changes the priority in
          // both the name and type maps.
        
%000000   function void set_priority (uvm_resource_base rsrc,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
                                      uvm_resource_types::priority_e pri);
%000000     set_priority_type(rsrc, pri);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     set_priority_name(rsrc, pri);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
          endfunction
        
          //--------------------------------------------------------------------
          // Group: Debug
          //--------------------------------------------------------------------
        
          // Function: find_unused_resources
          //
          // Locate all the resources that have at least one write and no reads
        
%000000   function uvm_resource_types::rsrc_q_t find_unused_resources();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     uvm_resource_types::rsrc_q_t rq;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     uvm_resource_types::rsrc_q_t q = new;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     int unsigned i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     uvm_resource_base r;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     uvm_resource_types::access_t a;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     int reads;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     int writes;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     foreach (rtab[name]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       rq = rtab[name];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       for(int i=0; i<rq.size(); ++i) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000         r = rq.get(i);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000         reads = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000         writes = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000         foreach(r.access[str]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000           a = r.access[str];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000           reads += a.read_count;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000           writes += a.write_count;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
                end
%000000         if(writes > 0 && reads == 0)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=expr comment=((reads == 32'sh0)==0) => 0 hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=expr comment=((writes > 32'sh0)==0) => 0 hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=expr comment=((writes > 32'sh0)==1 && (reads == 32'sh0)==1) => 1 hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000           q.push_back(r);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
              end
            end
        
%000000     return q;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
          endfunction
        
        
          // Function: print_resources
          //
          // Print the resources that are in a single queue, ~rq~.  This is a utility
          // function that can be used to print any collection of resources
          // stored in a queue.  The ~audit~ flag determines whether or not the
          // audit trail is printed for each resource along with the name,
          // value, and scope regular expression.
        
%000000   function void print_resources(uvm_resource_types::rsrc_q_t rq, bit audit = 0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     int unsigned i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     uvm_resource_base r;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     static uvm_line_printer printer = new();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     printer.knobs.separator="";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     printer.knobs.full_name=0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     printer.knobs.identifier=0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     printer.knobs.type_name=0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     printer.knobs.reference=0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     if(rq == null || rq.size() == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       $display("<none>");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
            end
        
%000000     for(int i=0; i<rq.size(); ++i) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       r = rq.get(i);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       r.print(printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       if(audit == 1)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000         r.print_accessors();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource_pool__Vclpkg
            end
        
          endfunction
        
        
          // Function: dump
          //
          // dump the entire resource pool.  The resource pool is traversed and
          // each resource is printed.  The utility function print_resources()
          // is used to initiate the printing. If the ~audit~ bit is set then
          // the audit trail is dumped for each resource.
        
%000000   function void dump(bit audit = 0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     uvm_resource_types::rsrc_q_t rq;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000     string name;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     $display("\n=== resource pool ===");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
%000000     foreach (rtab[name]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       rq = rtab[name];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
%000000       print_resources(rq, audit);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
            end
        
%000000     $display("=== end of resource pool ===");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource_pool__Vclpkg
        
          endfunction
          
        endclass
        
        `ifdef UVM_USE_RESOURCE_CONVERTER
        typedef class m_uvm_resource_converter;
        `endif
        
        //----------------------------------------------------------------------
        // Class: uvm_resource #(T)
        //
        // Parameterized resource.  Provides essential access methods to read
        // from and write to the resource database. 
        //----------------------------------------------------------------------
        
        class uvm_resource #(type T=int) extends uvm_resource_base;
        
          typedef uvm_resource#(T) this_type;
        
          // singleton handle that represents the type of this resource
%000001   static this_type my_type = get_type();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
        
          // Can't be rand since things like rand strings are not legal.
          protected T val;
        
        `ifdef UVM_USE_RESOURCE_CONVERTER
        
          // Singleton used to convert this resource to a string
          local static m_uvm_resource_converter#(T) m_r2s;
        
          // Function- m_get_converter
          // Get the conversion policy class that specifies how to convert the value
          // of a resource of this type to a string
          //
          static function m_uvm_resource_converter#(T) m_get_converter();
            if (m_r2s==null) m_r2s = new();
            return m_r2s;
          endfunction
            
        
          // Function- m_set_converter
          // Specify how to convert the value of a resource of this type to a string
          //
          // If not specified (or set to ~null~),
          // a default converter that display the name of the resource type is used.
          // Default conversion policies are specified for the built-in type.
          //
          static function void m_set_converter(m_uvm_resource_converter#(T) r2s);
            m_r2s = r2s;
          endfunction
           
        `endif
        
%000002   function new(string name="", scope="");
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000002     super.new(name, scope);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
          endfunction
        
%000000   function string convert2string();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
        `ifdef UVM_USE_RESOURCE_CONVERTER
            void'(m_get_converter());
            return m_r2s.convert2string(val);
        `else
%000000   	return $sformatf("(%s) %0p", `uvm_typename(val), val);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
        `endif
          endfunction
        
        
          //----------------------
          // Group: Type Interface
          //----------------------
          //
          // Resources can be identified by type using a static type handle.
          // The parent class provides the virtual function interface
          // <get_type_handle>.  Here we implement it by returning the static type
          // handle.
        
          // Function: get_type
          //
          // Static function that returns the static type handle.  The return
          // type is this_type, which is the type of the parameterized class.
        
~000104   static function this_type get_type();
+000057  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000005  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000006  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
+000027  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
+000027  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000006  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
+000104  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
~000103     if(my_type == null)
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
+000056  point: type=branch comment=else hier=uvm_pkg::uvm_resource___Vclpkg
-000004  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000005  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
+000026  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000005  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
+000103  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000001       my_type = new();
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
~000104     return my_type;
+000057  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000005  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000006  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
+000027  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
+000027  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000006  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
+000104  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
          endfunction
        
          // Function: get_type_handle
          //
          // Returns the static type handle of this resource in a polymorphic
          // fashion.  The return type of get_type_handle() is
          // uvm_resource_base.  This function is not static and therefore can
          // only be used by instances of a parameterized resource.
        
%000005   function uvm_resource_base get_type_handle();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000005  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000005  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000005     return get_type();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000005  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000005  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
          endfunction
        
          //-------------------------
          // Group: Set/Get Interface
          //-------------------------
          //
          // uvm_resource#(T) provides an interface for setting and getting a
          // resources.  Specifically, a resource can insert itself into the
          // resource pool.  It doesn't make sense for a resource to get itself,
          // since you can't call a funtion on a handle you don't have.
          // However, a static get interface is provided as a convenience.  This
          // obviates the need for the user to get a handle to the global
          // resource pool as this is done for him here.
        
          // Function: set
          //
          // Simply put this resource into the global resource pool
        
%000001   function void set();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000001     uvm_resource_pool rp = uvm_resource_pool::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000001     rp.set(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
          endfunction
        
          
          // Function: set_override
          //
          // Put a resource into the global resource pool as an override.  This
          // means it gets put at the head of the list and is searched before
          // other existing resources that occupy the same position in the name
          // map or the type map.  The default is to override both the name and
          // type maps.  However, using the ~override~ argument you can specify
          // that either the name map or type map is overridden.
        
%000000   function void set_override(uvm_resource_types::override_t override = 2'b11);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000     uvm_resource_pool rp = uvm_resource_pool::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000     rp.set(this, override);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
          endfunction
        
          // Function: get_by_name
          //
          // looks up a resource by ~name~ in the name map. The first resource
          // with the specified nam, whose type is the current type, and is
          // visible in the specified ~scope~ is returned, if one exists.  The
          // ~rpterr~ flag indicates whether or not an error should be reported
          // if the search fails.  If ~rpterr~ is set to one then a failure
          // message is issued, including suggested spelling alternatives, based
          // on resource names that exist in the database, gathered by the spell
          // checker.
        
%000003   static function this_type get_by_name(string scope,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
                                                string name,
                                                bit rpterr = 1);
        
%000003     uvm_resource_pool rp = uvm_resource_pool::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000003     uvm_resource_base rsrc_base;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000003     this_type rsrc;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000003     string msg;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
        
%000003     rsrc_base = rp.get_by_name(scope, name, my_type, rpterr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000003     if(rsrc_base == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource___Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
        
%000003     if(!$cast(rsrc, rsrc_base)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource___Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000       if(rpterr) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000         $sformat(msg, "Resource with name %s in scope %s has incorrect type", name, scope);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000         `uvm_warning("RSRCTYPE", msg);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
              end
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
            end
        
%000003     return rsrc;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
            
          endfunction
        
          // Function: get_by_type
          //
          // looks up a resource by ~type_handle~ in the type map. The first resource
          // with the specified ~type_handle~ that is visible in the specified ~scope~ is
          // returned, if one exists. Null is returned if there is no resource matching
          // the specifications.
        
%000000   static function this_type get_by_type(string scope = "",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
                                                uvm_resource_base type_handle);
        
%000000     uvm_resource_pool rp = uvm_resource_pool::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000     uvm_resource_base rsrc_base;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000     this_type rsrc;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000     string msg;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
        
%000000     if(type_handle == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
        
%000000     rsrc_base = rp.get_by_type(scope, type_handle);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000     if(rsrc_base == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
        
%000000     if(!$cast(rsrc, rsrc_base)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000       $sformat(msg, "Resource with specified type handle in scope %s was not located", scope);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000       `uvm_warning("RSRCNF", msg);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
            end
        
%000000     return rsrc;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
        
          endfunction
          
          //----------------------------
          // Group: Read/Write Interface
          //----------------------------
          //
          // <read> and <write> provide a type-safe interface for getting and
          // setting the object in the resource container.  The interface is
          // type safe because the value argument for <write> and the return
          // value of <read> are T, the type supplied in the class parameter.
          // If either of these functions is used in an incorrect type context
          // the compiler will complain.
        
          // Function: read
          //
          // Return the object stored in the resource container.  If an ~accessor~
          // object is supplied then also update the accessor record for this
          // resource.
        
%000003   function T read(uvm_object accessor = null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000003     record_read_access(accessor);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000003     return val;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
          endfunction
        
          // Function: write
          // Modify the object stored in this resource container.  If the
          // resource is read-only then issue an error message and return
          // without modifying the object in the container.  If the resource is
          // not read-only and an ~accessor~ object has been supplied then also
          // update the accessor record.  Lastly, replace the object value in
          // the container with the value supplied as the argument, ~t~, and
          // release any processes blocked on
          // <uvm_resource_base::wait_modified>.  If the value to be written is
          // the same as the value already present in the resource then the
          // write is not done.  That also means that the accessor record is not
          // updated and the modified bit is not set.
        
%000001   function void write(T t, uvm_object accessor = null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
        
%000001     if(is_read_only()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource___Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000       uvm_report_error("resource", $sformatf("resource %s is read only -- cannot modify", get_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
            end
        
            // Set the modified bit and record the transaction only if the value
            // has actually changed.
%000001     if(val == t)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource___Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
        
%000001     record_write_access(accessor);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
        
            // set the value and set the dirty bit
%000001     val = t;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000001     modified = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
          endfunction
        
          //----------------
          // Group: Priority
          //----------------
          //
          // Functions for manipulating the search priority of resources.  These
          // implementations of the interface defined in the base class delegate
          // to the resource pool. 
        
        
          // Function: set priority
          //
          // Change the search priority of the resource based on the value of
          // the priority enum argument, ~pri~.
        
%000000   function void set_priority (uvm_resource_types::priority_e pri);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000     uvm_resource_pool rp = uvm_resource_pool::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000     rp.set_priority(this, pri);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
          endfunction
        
        
          // Function: get_highest_precedence
          //
          // In a queue of resources, locate the first one with the highest
          // precedence whose type is T.  This function is static so that it can
          // be called from anywhere.
        
~000103   static function this_type get_highest_precedence(ref uvm_resource_types::rsrc_q_t q);
+000056  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
        
~000103     this_type rsrc;
+000056  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
~000103     this_type r;
+000056  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
~000103     int unsigned i;
+000056  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
~000103     int unsigned prec;
+000056  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
~000103     int unsigned first;
+000056  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
        
%000000     if(q.size() == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
        
~000103     first = 0;
+000056  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
~000103     rsrc = null;
+000056  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
~000103     prec = 0;
+000056  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
        
            // Locate first resources in the queue whose type is T
~000103     for(first = 0; first < q.size() && !$cast(rsrc, q.get(first)); first++);
+000056  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
        
            // no resource in the queue whose type is T
%000000     if(rsrc == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
        
~000103     prec = rsrc.precedence;
+000056  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
        
            // start searching from the next resource after the first resource
            // whose type is T
~000103     for(int i = first+1; i < q.size(); ++i) begin
+000056  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000       if($cast(r, q.get(i))) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000         if(r.precedence > prec) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000           rsrc = r;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
%000000           prec = r.precedence;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
                end
              end
            end
        
~000103     return rsrc;
+000056  point: type=line comment=block hier=uvm_pkg::uvm_resource___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz1__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz10__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz11__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz126__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz13__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz135__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz185__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz2__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz23__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz24__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz3__Vclpkg
+000103  point: type=line comment=block hier=uvm_pkg::uvm_resource__Tz9__Vclpkg
        
          endfunction
        
        endclass
        
        //----------------------------------------------------------------------
        // static global resource pool handle
        //----------------------------------------------------------------------
%000001 const uvm_resource_pool uvm_resources = uvm_resource_pool::get();
-000001  point: type=line comment=block hier=uvm_pkg
        

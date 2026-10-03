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
        
        
        typedef class uvm_object;
        typedef class uvm_component;
        typedef class uvm_object_wrapper;
        typedef class uvm_factory_override;
        
        //Instance overrides by requested type lookup
%000000 class uvm_factory_queue_class;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory_queue_class__Vclpkg
          uvm_factory_override queue[$];
        endclass
        
        //------------------------------------------------------------------------------
        // Title: UVM Factory
        //
        // This page covers the classes that define the UVM factory facility.
        //------------------------------------------------------------------------------
        
        
        //------------------------------------------------------------------------------
        //
        // CLASS: uvm_factory
        //
        //------------------------------------------------------------------------------
        //
        // As the name implies, uvm_factory is used to manufacture (create) UVM objects
        // and components. Only one instance of the factory is present in a given
        // simulation (termed a singleton). Object and component types are registered
        // with the factory using lightweight proxies to the actual objects and
        // components being created. The <uvm_object_registry #(T,Tname)> and
        // <uvm_component_registry #(T,Tname)> class are used to proxy <uvm_objects>
        // and <uvm_components>.
        //
        // The factory provides both name-based and type-based interfaces.
        //
        // type-based - The type-based interface is far less prone to errors in usage.
        //   When errors do occur, they are caught at compile-time.
        //
        // name-based - The name-based interface is dominated 
        //   by string arguments that can be misspelled and provided in the wrong order.
        //   Errors in name-based requests might only be caught at the time of the call,
        //   if at all. Further, the name-based interface is not portable across
        //   simulators when used with parameterized classes.
        //
        // See <Usage> section for details on configuring and using the factory.
        //
        
        class uvm_factory;
        
          extern protected function new ();
        
          // Function: get()
          // Get the factory singleton
          //
          extern static function uvm_factory get();
        
          // Group: Registering Types
        
          // Function: register
          //
          // Registers the given proxy object, ~obj~, with the factory. The proxy object
          // is a lightweight substitute for the component or object it represents. When
          // the factory needs to create an object of a given type, it calls the proxy's
          // create_object or create_component method to do so.
          //
          // When doing name-based operations, the factory calls the proxy's
          // get_type_name method to match against the ~requested_type_name~ argument in
          // subsequent calls to <create_component_by_name> and <create_object_by_name>.
          // If the proxy object's get_type_name method returns the empty string,
          // name-based lookup is effectively disabled.
        
          extern function void register (uvm_object_wrapper obj);
        
        
          // Group: Type & Instance Overrides
        
          // Function: set_inst_override_by_type
        
          extern function
              void set_inst_override_by_type (uvm_object_wrapper original_type,
                                              uvm_object_wrapper override_type,
                                              string full_inst_path);
        
          // Function: set_inst_override_by_name
          //
          // Configures the factory to create an object of the override's type whenever
          // a request is made to create an object of the original type using a context
          // that matches ~full_inst_path~. The original type is typically a super class
          // of the override type.
          //
          // When overriding by type, the ~original_type~ and ~override_type~ are
          // handles to the types' proxy objects. Preregistration is not required.
          //
          // When overriding by name, the ~original_type_name~ typically refers to a
          // preregistered type in the factory. It may, however, be any arbitrary
          // string. Future calls to any of the create_* methods with the same string
          // and matching instance path will produce the type represented by
          // ~override_type_name~, which must be preregistered with the factory.
          //
          // The ~full_inst_path~ is matched against the contentation of
          // {~parent_inst_path~, ".", ~name~} provided in future create requests. The
          // ~full_inst_path~ may include wildcards (* and ?) such that a single
          // instance override can be applied in multiple contexts. A ~full_inst_path~
          // of "*" is effectively a type override, as it will match all contexts.
          //
          // When the factory processes instance overrides, the instance queue is
          // processed in order of override registrations, and the first override
          // match prevails. Thus, more specific overrides should be registered
          // first, followed by more general overrides.
        
          extern function
              void set_inst_override_by_name (string original_type_name,
                                              string override_type_name,
                                              string full_inst_path);
        
        
          // Function: set_type_override_by_type
        
          extern function
              void set_type_override_by_type (uvm_object_wrapper original_type,
                                              uvm_object_wrapper override_type,
                                              bit replace=1);
        
          // Function: set_type_override_by_name
          //
          // Configures the factory to create an object of the override's type whenever
          // a request is made to create an object of the original type, provided no
          // instance override applies. The original type is typically a super class of
          // the override type.
          //
          // When overriding by type, the ~original_type~ and ~override_type~ are
          // handles to the types' proxy objects. Preregistration is not required.
          //
          // When overriding by name, the ~original_type_name~ typically refers to a
          // preregistered type in the factory. It may, however, be any arbitrary
          // string. Future calls to any of the create_* methods with the same string
          // and matching instance path will produce the type represented by
          // ~override_type_name~, which must be preregistered with the factory.
          //
          // When ~replace~ is 1, a previous override on ~original_type_name~ is
          // replaced, otherwise a previous override, if any, remains intact.
        
          extern function
              void set_type_override_by_name (string original_type_name,
                                              string override_type_name,
                                              bit replace=1);
        
        
          // Group: Creation
        
          // Function: create_object_by_type
        
          extern function
              uvm_object    create_object_by_type    (uvm_object_wrapper requested_type,  
                                                      string parent_inst_path="",
                                                      string name=""); 
        
          // Function: create_component_by_type
        
          extern function
              uvm_component create_component_by_type (uvm_object_wrapper requested_type,  
                                                      string parent_inst_path="",
                                                      string name, 
                                                      uvm_component parent);
        
          // Function: create_object_by_name
        
          extern function
              uvm_object    create_object_by_name    (string requested_type_name,  
                                                      string parent_inst_path="",
                                                      string name=""); 
        
          // Function: create_component_by_name
          //
          // Creates and returns a component or object of the requested type, which may
          // be specified by type or by name. A requested component must be derived
          // from the <uvm_component> base class, and a requested object must be derived
          // from the <uvm_object> base class.
          //
          // When requesting by type, the ~requested_type~ is a handle to the type's
          // proxy object. Preregistration is not required.
          //
          // When requesting by name, the ~request_type_name~ is a string representing
          // the requested type, which must have been registered with the factory with
          // that name prior to the request. If the factory does not recognize the
          // ~requested_type_name~, an error is produced and a null handle returned.
          //
          // If the optional ~parent_inst_path~ is provided, then the concatenation,
          // {~parent_inst_path~, ".",~name~}, forms an instance path (context) that
          // is used to search for an instance override. The ~parent_inst_path~ is
          // typically obtained by calling the <uvm_component::get_full_name> on the
          // parent.
          //
          // If no instance override is found, the factory then searches for a type
          // override.
          //
          // Once the final override is found, an instance of that component or object
          // is returned in place of the requested type. New components will have the
          // given ~name~ and ~parent~. New objects will have the given ~name~, if
          // provided.
          //
          // Override searches are recursively applied, with instance overrides taking
          // precedence over type overrides. If ~foo~ overrides ~bar~, and ~xyz~
          // overrides ~foo~, then a request for ~bar~ will produce ~xyz~. Recursive
          // loops will result in an error, in which case the type returned will be
          // that which formed the loop. Using the previous example, if ~bar~
          // overrides ~xyz~, then ~bar~ is returned after the error is issued.
        
          extern function
              uvm_component create_component_by_name (string requested_type_name,  
                                                      string parent_inst_path="",
                                                      string name, 
                                                      uvm_component parent);
        
          // Group: Debug
        
          // Function: debug_create_by_type
        
          extern function
              void debug_create_by_type (uvm_object_wrapper requested_type,
                                         string parent_inst_path="",
                                         string name="");
        
          // Function: debug_create_by_name
          //
          // These methods perform the same search algorithm as the create_* methods,
          // but they do not create new objects. Instead, they provide detailed
          // information about what type of object it would return, listing each
          // override that was applied to arrive at the result. Interpretation of the
          // arguments are exactly as with the create_* methods.
        
          extern function
              void debug_create_by_name (string requested_type_name,
                                         string parent_inst_path="",
                                         string name="");
        
                           
          // Function: find_override_by_type
        
          extern function
              uvm_object_wrapper find_override_by_type (uvm_object_wrapper requested_type,
                                                        string full_inst_path);
        
          // Function: find_override_by_name
          //
          // These methods return the proxy to the object that would be created given
          // the arguments. The ~full_inst_path~ is typically derived from the parent's
          // instance path and the leaf name of the object to be created, i.e.
          // { parent.get_full_name(), ".", name }.
        
          extern function
              uvm_object_wrapper find_override_by_name (string requested_type_name,
                                                        string full_inst_path);
        
          extern
            function uvm_object_wrapper find_by_name            (string type_name);
        
          // Function: print
          //
          // Prints the state of the uvm_factory, including registered types, instance
          // overrides, and type overrides.
          //
          // When ~all_types~ is 0, only type and instance overrides are displayed. When
          // ~all_types~ is 1 (default), all registered user-defined types are printed as
          // well, provided they have names associated with them. When ~all_types~ is 2,
          // the UVM types (prefixed with uvm_) are included in the list of registered
          // types.
        
          extern function void print (int all_types=1);
        
        
          //----------------------------------------------------------------------------
          // PRIVATE MEMBERS
          
          extern protected
              function void  m_debug_create (string requested_type_name,
                                             uvm_object_wrapper requested_type,
                                             string parent_inst_path,
                                             string name);
          
          extern protected
              function void  m_debug_display(string requested_type_name,
                                             uvm_object_wrapper result,
                                             string full_inst_path);
          static local uvm_factory m_inst;
        
          protected bit                  m_types[uvm_object_wrapper];
          protected bit                  m_lookup_strs[string];
          protected uvm_object_wrapper   m_type_names[string];
        
          protected uvm_factory_override m_type_overrides[$];
        
          protected uvm_factory_queue_class m_inst_override_queues[uvm_object_wrapper];
          protected uvm_factory_queue_class m_inst_override_name_queues[string];
          protected uvm_factory_override    m_wildcard_inst_overrides[$];
        
          local uvm_factory_override     m_override_info[$];
          local static bit m_debug_pass;
        
          extern function bit m_has_wildcard(string nm);
        
          extern function bit check_inst_override_exists
                                              (uvm_object_wrapper original_type,
                                               uvm_object_wrapper override_type,
                                               string full_inst_path);
        
        endclass
        
        
        //------------------------------------------------------------------------------
        //
        // Group: Usage
        //
        // Using the factory involves three basic operations
        //
        // 1 - Registering objects and components types with the factory
        // 2 - Designing components to use the factory to create objects or components
        // 3 - Configuring the factory with type and instance overrides, both within and
        //     outside components
        //
        // We'll briefly cover each of these steps here. More reference information can
        // be found at <Utility Macros>, <uvm_component_registry #(T,Tname)>,
        // <uvm_object_registry #(T,Tname)>, <uvm_component>.
        //
        // 1 -- Registering objects and component types with the factory:
        //
        // When defining <uvm_object> and <uvm_component>-based classes, simply invoke
        // the appropriate macro. Use of macros are required to ensure portability
        // across different vendors' simulators.
        //
        // Objects that are not parameterized are declared as
        //
        //|  class packet extends uvm_object;
        //|    `uvm_object_utils(packet)
        //|  endclass
        //|
        //|  class packetD extends packet;
        //|    `uvm_object_utils(packetD)
        //|  endclass
        //
        // Objects that are parameterized are declared as
        //
        //|  class packet #(type T=int, int WIDTH=32) extends uvm_object;
        //|    `uvm_object_param_utils(packet #(T,WIDTH))
        //|   endclass
        //
        // Components that are not parameterized are declared as
        //
        //|  class comp extends uvm_component;
        //|    `uvm_component_utils(comp)
        //|  endclass
        //
        // Components that are parameterized are declared as
        //
        //|  class comp #(type T=int, int WIDTH=32) extends uvm_component;
        //|    `uvm_component_param_utils(comp #(T,WIDTH))
        //|  endclass
        //
        // The `uvm_*_utils macros for simple, non-parameterized classes will register
        // the type with the factory and define the get_type, get_type_name, and create
        // virtual methods inherited from <uvm_object>. It will also define a static
        // type_name variable in the class, which will allow you to determine the type
        // without having to allocate an instance. 
        //
        // The `uvm_*_param_utils macros for parameterized classes differ from
        // `uvm_*_utils classes in the following ways:
        //
        // - The get_type_name method and static type_name variable are not defined. You
        //   will need to implement these manually.
        //
        // - A type name is not associated with the type when registeriing with the
        //   factory, so the factory's *_by_name operations will not work with
        //   parameterized classes.
        //
        // - The factory's <print>, <debug_create_by_type>, and <debug_create_by_name>
        //   methods, which depend on type names to convey information, will list
        //   parameterized types as <unknown>.
        //
        // It is worth noting that environments that exclusively use the type-based
        // factory methods (*_by_type) do not require type registration. The factory's
        // type-based methods will register the types involved "on the fly," when first
        // used. However, registering with the `uvm_*_utils macros enables name-based
        // factory usage and implements some useful utility functions.
        //
        //
        // 2 -- Designing components that defer creation to the factory:
        //
        // Having registered your objects and components with the factory, you can now
        // make requests for new objects and components via the factory. Using the factory
        // instead of allocating them directly (via new) allows different objects to be
        // substituted for the original without modifying the requesting class. The
        // following code defines a driver class that is parameterized.
        //
        //|  class driverB #(type T=uvm_object) extends uvm_driver;
        //|
        //|    // parameterized classes must use the _param_utils version
        //|    `uvm_component_param_utils(driverB #(T))
        //|
        //|    // our packet type; this can be overridden via the factory
        //|    T pkt;
        //|
        //|    // standard component constructor
        //|    function new(string name, uvm_component parent=null);
        //|      super.new(name,parent);
        //|    endfunction
        //|
        //|    // get_type_name not implemented by macro for parameterized classes
        //|    const static string type_name = {"driverB #(",T::type_name,")"};
        //|    virtual function string get_type_name();
        //|      return type_name;
        //|    endfunction
        //|
        //|    // using the factory allows pkt overrides from outside the class
        //|    virtual function void build_phase(uvm_phase phase);
        //|      pkt = packet::type_id::create("pkt",this);
        //|    endfunction
        //|
        //|    // print the packet so we can confirm its type when printing
        //|    virtual function void do_print(uvm_printer printer);
        //|      printer.print_object("pkt",pkt);
        //|    endfunction
        //|
        //|  endclass
        //
        // For purposes of illustrating type and instance overrides, we define two
        // subtypes of the ~driverB~ class. The subtypes are also parameterized, so
        // we must again provide an implementation for <uvm_object::get_type_name>,
        // which we recommend writing in terms of a static string constant.
        //
        //|  class driverD1 #(type T=uvm_object) extends driverB #(T);
        //|
        //|    `uvm_component_param_utils(driverD1 #(T))
        //|
        //|    function new(string name, uvm_component parent=null);
        //|      super.new(name,parent);
        //|    endfunction
        //|
        //|    const static string type_name = {"driverD1 #(",T::type_name,")"};
        //|    virtual function string get_type_name();
        //|      ...return type_name;
        //|    endfunction
        //|
        //|  endclass
        //|
        //|  class driverD2 #(type T=uvm_object) extends driverB #(T);
        //|
        //|    `uvm_component_param_utils(driverD2 #(T))
        //|
        //|    function new(string name, uvm_component parent=null);
        //|      super.new(name,parent);
        //|    endfunction
        //|
        //|    const static string type_name = {"driverD2 #(",T::type_name,")"};
        //|    virtual function string get_type_name();
        //|      return type_name;
        //|    endfunction
        //|
        //|  endclass
        //|
        //|  // typedef some specializations for convenience
        //|  typedef driverB  #(packet) B_driver;   // the base driver
        //|  typedef driverD1 #(packet) D1_driver;  // a derived driver
        //|  typedef driverD2 #(packet) D2_driver;  // another derived driver
        //
        // Next, we'll define a agent component, which requires a utils macro for
        // non-parameterized types. Before creating the drivers using the factory, we
        // override ~driver0~'s packet type to be ~packetD~.
        //
        //|  class agent extends uvm_agent;
        //|
        //|    `uvm_component_utils(agent)
        //|    ...
        //|    B_driver driver0;
        //|    B_driver driver1;
        //|
        //|    function new(string name, uvm_component parent=null);
        //|      super.new(name,parent);
        //|    endfunction
        //|
        //|    virtual function void build_phase(uvm_phase phase);
        //|
        //|      // override the packet type for driver0 and below
        //|      packet::type_id::set_inst_override(packetD::get_type(),"driver0.*");
        //|
        //|      // create using the factory; actual driver types may be different
        //|      driver0 = B_driver::type_id::create("driver0",this);
        //|      driver1 = B_driver::type_id::create("driver1",this);
        //|
        //|    endfunction
        //|
        //|  endclass
        //
        // Finally we define an environment class, also not parameterized. Its build
        // method shows three methods for setting an instance override on a grandchild
        // component with relative path name, ~agent1.driver1~, all equivalent.
        //
        //|  class env extends uvm_env;
        //|
        //|    `uvm_component_utils(env)
        //|
        //|    agent agent0;
        //|    agent agent1;
        //|
        //|    function new(string name, uvm_component parent=null);
        //|      super.new(name,parent);
        //|    endfunction
        //|
        //|    virtual function void build_phase(uvm_phase phase);
        //|
        //|      // three methods to set an instance override for agent1.driver1
        //|      // - via component convenience method...
        //|      set_inst_override_by_type("agent1.driver1",
        //|                                B_driver::get_type(),
        //|                                D2_driver::get_type());
        //|
        //|      // - via the component's proxy (same approach as create)...
        //|      B_driver::type_id::set_inst_override(D2_driver::get_type(),
        //|                                           "agent1.driver1",this);
        //|
        //|      // - via a direct call to a factory method...
        //|      factory.set_inst_override_by_type(B_driver::get_type(),
        //|                                        D2_driver::get_type(),
        //|                                        {get_full_name(),".agent1.driver1"});
        //|
        //|      // create agents using the factory; actual agent types may be different
        //|      agent0 = agent::type_id::create("agent0",this);
        //|      agent1 = agent::type_id::create("agent1",this);
        //|
        //|    endfunction
        //|
        //|    // at end_of_elaboration, print topology and factory state to verify
        //|    virtual function void end_of_elaboration_phase(uvm_phase phase);
        //|      uvm_top.print_topology();
        //|    endfunction
        //|
        //|    virtual task run_phase(uvm_phase phase);
        //|      #100 global_stop_request();
        //|    endfunction
        //|
        //|  endclass
        //   
        //
        // 3 -- Configuring the factory with type and instance overrides:
        //
        // In the previous step, we demonstrated setting instance overrides and creating
        // components using the factory within component classes. Here, we will
        // demonstrate setting overrides from outside components, as when initializing
        // the environment prior to running the test.
        //
        //|  module top;
        //|
        //|    env env0;
        //|
        //|    initial begin
        //|
        //|      // Being registered first, the following overrides take precedence
        //|      // over any overrides made within env0's construction & build.
        //|
        //|      // Replace all base drivers with derived drivers...
        //|      B_driver::type_id::set_type_override(D_driver::get_type());
        //|
        //|      // ...except for agent0.driver0, whose type remains a base driver.
        //|      //     (Both methods below have the equivalent result.)
        //|
        //|      // - via the component's proxy (preferred)
        //|      B_driver::type_id::set_inst_override(B_driver::get_type(),
        //|                                           "env0.agent0.driver0");
        //|
        //|      // - via a direct call to a factory method
        //|      factory.set_inst_override_by_type(B_driver::get_type(),
        //|                                        B_driver::get_type(),
        //|                                    {get_full_name(),"env0.agent0.driver0"});
        //|
        //|      // now, create the environment; our factory configuration will
        //|      // govern what topology gets created
        //|      env0 = new("env0");
        //|
        //|      // run the test (will execute build phase)
        //|      run_test();
        //|
        //|    end
        //|
        //|  endmodule
        //
        // When the above example is run, the resulting topology (displayed via a call to
        // <uvm_root::print_topology> in env's <uvm_component::end_of_elaboration_phase> method)
        // is similar to the following:
        //
        //| # UVM_INFO @ 0 [RNTST] Running test ...
        //| # UVM_INFO @ 0 [UVMTOP] UVM testbench topology:
        //| # ----------------------------------------------------------------------
        //| # Name                     Type                Size                Value
        //| # ----------------------------------------------------------------------
        //| # env0                     env                 -                  env0@2
        //| #   agent0                 agent               -                agent0@4
        //| #     driver0              driverB #(packet)   -               driver0@8
        //| #       pkt                packet              -                  pkt@21
        //| #     driver1              driverD #(packet)   -              driver1@14
        //| #       pkt                packet              -                  pkt@23
        //| #   agent1                 agent               -                agent1@6
        //| #     driver0              driverD #(packet)   -              driver0@24
        //| #       pkt                packet              -                  pkt@37
        //| #     driver1              driverD2 #(packet)  -              driver1@30
        //| #       pkt                packet              -                  pkt@39
        //| # ----------------------------------------------------------------------
        // 
        //------------------------------------------------------------------------------
        
        
        //------------------------------------------------------------------------------
        //
        // CLASS: uvm_object_wrapper
        //
        // The uvm_object_wrapper provides an abstract interface for creating object and
        // component proxies. Instances of these lightweight proxies, representing every
        // <uvm_object>-based and <uvm_component>-based object available in the test
        // environment, are registered with the <uvm_factory>. When the factory is
        // called upon to create an object or component, it finds and delegates the
        // request to the appropriate proxy.
        //
        //------------------------------------------------------------------------------
        
 000085 virtual class uvm_object_wrapper;
+000085  point: type=line comment=block hier=uvm_pkg::uvm_object_wrapper__Vclpkg
        
          // Function: create_object
          //
          // Creates a new object with the optional ~name~.
          // An object proxy (e.g., <uvm_object_registry #(T,Tname)>) implements this
          // method to create an object of a specific type, T.
        
%000000   virtual function uvm_object create_object (string name="");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_object_wrapper__Vclpkg
%000000     return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_object_wrapper__Vclpkg
          endfunction
        
        
          // Function: create_component
          //
          // Creates a new component, passing to its constructor the given ~name~ and
          // ~parent~. A component proxy (e.g. <uvm_component_registry #(T,Tname)>)
          // implements this method to create a component of a specific type, T.
        
%000000   virtual function uvm_component create_component (string name, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_object_wrapper__Vclpkg
                                                           uvm_component parent); 
%000000     return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_object_wrapper__Vclpkg
          endfunction
        
        
          // Function: get_type_name
          // 
          // Derived classes implement this method to return the type name of the object
          // created by <create_component> or <create_object>. The factory uses this
          // name when matching against the requested type in name-based lookups.
        
%000000   pure virtual function string get_type_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_object_wrapper__Vclpkg
        
        endclass
        
        
        //------------------------------------------------------------------------------
        //
        // CLASS- uvm_factory_override
        //
        // Internal class.
        //------------------------------------------------------------------------------
        
        class uvm_factory_override;
          string full_inst_path;
          string orig_type_name;
          string ovrd_type_name;
          bit selected;
          uvm_object_wrapper orig_type;
          uvm_object_wrapper ovrd_type;
%000000   function new (string full_inst_path="",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory_override__Vclpkg
                        string orig_type_name="",
                        uvm_object_wrapper orig_type=null,
                        uvm_object_wrapper ovrd_type);
%000000     if (ovrd_type == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory_override__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory_override__Vclpkg
%000000       uvm_report_fatal ("NULLWR", "Attempting to register a null override object with the factory", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory_override__Vclpkg
            end
%000000     this.full_inst_path= full_inst_path;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory_override__Vclpkg
%000000     this.orig_type_name = orig_type == null ? orig_type_name : orig_type.get_type_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory_override__Vclpkg
%000000     this.orig_type      = orig_type;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory_override__Vclpkg
%000000     this.ovrd_type_name = ovrd_type.get_type_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory_override__Vclpkg
%000000     this.ovrd_type      = ovrd_type;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory_override__Vclpkg
          endfunction
        endclass
        
        
        //-----------------------------------------------------------------------------
        // our singleton factory; it is statically initialized
        //-----------------------------------------------------------------------------
        
%000001 const uvm_factory factory = uvm_factory::get();
-000001  point: type=line comment=block hier=uvm_pkg
        
        
        
        //-----------------------------------------------------------------------------
        // IMPLEMENTATION
        //-----------------------------------------------------------------------------
        
        // get
        // ---
        
 000875 function uvm_factory uvm_factory::get();
+000875  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
~000874   if (m_inst == null) begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
+000874  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000001     m_inst = new();
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
          end
 000875   return m_inst;
+000875  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        endfunction
        
        // new
        // ---
        
%000001 function uvm_factory::new ();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        endfunction
        
        
        // register
        // --------
        
 000085 function void uvm_factory::register (uvm_object_wrapper obj);
+000085  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
~000085   if (obj == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
+000085  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     uvm_report_fatal ("NULLWR", "Attempting to register a null object with the factory", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
          end
~000078   if (obj.get_type_name() != "" && obj.get_type_name() != "<unknown>") begin
+000078  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000007  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
~000078     if (m_type_names.exists(obj.get_type_name()))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
+000078  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       uvm_report_warning("TPRGED", {"Type name '",obj.get_type_name(),
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000         "' already registered with factory. No string-based lookup ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000         "support for multiple types with the same type name."}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
            else 
 000078       m_type_names[obj.get_type_name()] = obj;
+000078  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
          end
        
~000085   if (m_types.exists(obj)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
+000085  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     if (obj.get_type_name() != "" && obj.get_type_name() != "<unknown>")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       uvm_report_warning("TPRGED", {"Object type '",obj.get_type_name(),
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000                          "' already registered with factory. "}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
          end
 000085   else begin
+000085  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
 000085     m_types[obj] = 1;
+000085  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
            // If a named override happens before the type is registered, need to copy
            // the override queue.
            // Note:Registration occurs via static initialization, which occurs ahead of
            // procedural (e.g. initial) blocks. There should not be any preexisting overrides.
~000085     if(m_inst_override_name_queues.exists(obj.get_type_name())) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
+000085  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000        m_inst_override_queues[obj] = new;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000        m_inst_override_queues[obj].queue = m_inst_override_name_queues[obj.get_type_name()].queue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000        m_inst_override_name_queues.delete(obj.get_type_name());
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
            end
~000085     if(m_wildcard_inst_overrides.size()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
+000085  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000        if(! m_inst_override_queues.exists(obj)) 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000             m_inst_override_queues[obj] = new;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000        foreach (m_wildcard_inst_overrides[i]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000          if(uvm_is_match( m_wildcard_inst_overrides[i].orig_type_name, obj.get_type_name()))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000             m_inst_override_queues[obj].queue.push_back(m_wildcard_inst_overrides[i]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
               end
            end
        
          end
        
        endfunction
        
        
        // set_type_override_by_type
        // -------------------------
        
%000000 function void uvm_factory::set_type_override_by_type (uvm_object_wrapper original_type,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
                                                              uvm_object_wrapper override_type,
                                                              bit replace=1);
%000000   bit replaced;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
          // check that old and new are not the same
%000000   if (original_type == override_type) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     if (original_type.get_type_name() == "" || original_type.get_type_name() == "<unknown>")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       uvm_report_warning("TYPDUP", {"Original and override type ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000                                     "arguments are identical"}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
            else
%000000       uvm_report_warning("TYPDUP", {"Original and override type ",
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000                                     "arguments are identical: ",
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000                                     original_type.get_type_name()}, UVM_NONE);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
          end
        
          // register the types if not already done so, for the benefit of string-based lookup
%000000   if (!m_types.exists(original_type))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     register(original_type); 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   if (!m_types.exists(override_type))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     register(override_type); 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
        
        
          // check for existing type override
%000000   foreach (m_type_overrides[index]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     if (m_type_overrides[index].orig_type == original_type ||
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
                (m_type_overrides[index].orig_type_name != "<unknown>" &&
                 m_type_overrides[index].orig_type_name != "" &&
%000000          m_type_overrides[index].orig_type_name == original_type.get_type_name())) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       string msg;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       msg = {"Original object type '",original_type.get_type_name(),
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000              "' already registered to produce '",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000              m_type_overrides[index].ovrd_type_name,"'"};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       if (!replace) begin
-000000  point: type=expr comment=(replace==0) => 1 hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=expr comment=(replace==1) => 0 hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000         msg = {msg, ".  Set 'replace' argument to replace the existing entry."};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000         uvm_report_info("TPREGD", msg, UVM_MEDIUM);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
              end
%000000       msg = {msg, ".  Replacing with override to produce type '",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000                   override_type.get_type_name(),"'."};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       uvm_report_info("TPREGR", msg, UVM_MEDIUM);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       replaced = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       m_type_overrides[index].orig_type = original_type; 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       m_type_overrides[index].orig_type_name = original_type.get_type_name(); 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       m_type_overrides[index].ovrd_type = override_type; 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       m_type_overrides[index].ovrd_type_name = override_type.get_type_name(); 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
            end
          end
        
          // make a new entry
%000000   if (!replaced) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=expr comment=(replaced==0) => 1 hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=expr comment=(replaced==1) => 0 hier=uvm_pkg::uvm_factory__Vclpkg
%000000     uvm_factory_override override;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000     override = new(.orig_type(original_type),
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000                    .orig_type_name(original_type.get_type_name()),
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000                    .full_inst_path("*"),
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000                    .ovrd_type(override_type));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000     m_type_overrides.push_back(override);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
          end
        
        endfunction
        
        
        // set_type_override_by_name
        // -------------------------
        
%000000 function void uvm_factory::set_type_override_by_name (string original_type_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
                                                              string override_type_name,
                                                              bit replace=1);
%000000   bit replaced;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
          
%000000   uvm_object_wrapper original_type;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000   uvm_object_wrapper override_type;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   if(m_type_names.exists(original_type_name))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     original_type = m_type_names[original_type_name];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   if(m_type_names.exists(override_type_name))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     override_type = m_type_names[override_type_name];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
        
          // check that type is registered with the factory
%000000   if (override_type == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       uvm_report_error("TYPNTF", {"Cannot register override for original type '",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       original_type_name,"' because the override type '",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       override_type_name, "' is not registered with the factory."}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
          end
        
          // check that old and new are not the same
%000000   if (original_type_name == override_type_name) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       uvm_report_warning("TYPDUP", {"Requested and actual type name ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       " arguments are identical: ",original_type_name,". Ignoring this override."}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
          end
        
%000000   foreach (m_type_overrides[index]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     if (m_type_overrides[index].orig_type_name == original_type_name) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       if (!replace) begin
-000000  point: type=expr comment=(replace==0) => 1 hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=expr comment=(replace==1) => 0 hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000         uvm_report_info("TPREGD", {"Original type '",original_type_name,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000           "' already registered to produce '",m_type_overrides[index].ovrd_type_name,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000           "'.  Set 'replace' argument to replace the existing entry."}, UVM_MEDIUM);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
              end
%000000       uvm_report_info("TPREGR", {"Original object type '",original_type_name,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000         "' already registered to produce '",m_type_overrides[index].ovrd_type_name,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000         "'.  Replacing with override to produce type '",override_type_name,"'."}, UVM_MEDIUM);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       replaced = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       m_type_overrides[index].ovrd_type = override_type; 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       m_type_overrides[index].ovrd_type_name = override_type_name; 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
            end
          end
        
%000000   if (original_type == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     m_lookup_strs[original_type_name] = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   if (!replaced) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=expr comment=(replaced==0) => 1 hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=expr comment=(replaced==1) => 0 hier=uvm_pkg::uvm_factory__Vclpkg
%000000     uvm_factory_override override;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000     override = new(.orig_type(original_type),
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000                    .orig_type_name(original_type_name),
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000                    .full_inst_path("*"),
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000                    .ovrd_type(override_type));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000     m_type_overrides.push_back(override);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
        //    m_type_names[original_type_name] = override.ovrd_type;
          end
        
        endfunction
        
        
        // check_inst_override_exists
        // --------------------------
%000000 function bit uvm_factory::check_inst_override_exists (uvm_object_wrapper original_type,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
                                              uvm_object_wrapper override_type,
                                              string full_inst_path);
%000000   uvm_factory_override override;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000   uvm_factory_queue_class qc;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   if (m_inst_override_queues.exists(original_type))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     qc = m_inst_override_queues[original_type];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
          else
%000000     return 0;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   for (int index=0; index<qc.queue.size(); ++index) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000     override = qc.queue[index]; 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000     if (override.full_inst_path == full_inst_path &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
                override.orig_type == original_type &&
                override.ovrd_type == override_type &&
%000000         override.orig_type_name == original_type.get_type_name()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000     uvm_report_info("DUPOVRD",{"Instance override for '",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000        original_type.get_type_name(),"' already exists: override type '",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000        override_type.get_type_name(),"' with full_inst_path '",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000        full_inst_path,"'"},UVM_HIGH);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
            end
          end
%000000   return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        endfunction
        
        // set_inst_override_by_type
        // -------------------------
        
%000000 function void uvm_factory::set_inst_override_by_type (uvm_object_wrapper original_type,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
                                                              uvm_object_wrapper override_type,
                                                              string full_inst_path);
          
%000000   uvm_factory_override override;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
          // register the types if not already done so
%000000   if (!m_types.exists(original_type))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     register(original_type); 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   if (!m_types.exists(override_type))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     register(override_type); 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   if (check_inst_override_exists(original_type,override_type,full_inst_path))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   if(!m_inst_override_queues.exists(original_type))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     m_inst_override_queues[original_type] = new;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   override = new(.full_inst_path(full_inst_path),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000                  .orig_type(original_type),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000                  .orig_type_name(original_type.get_type_name()),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000                  .ovrd_type(override_type));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
        
%000000   m_inst_override_queues[original_type].queue.push_back(override);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
        endfunction
        
        
        // set_inst_override_by_name
        // -------------------------
        
%000000 function void uvm_factory::set_inst_override_by_name (string original_type_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
                                                              string override_type_name,
                                                              string full_inst_path);
          
%000000   uvm_factory_override override;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000   uvm_object_wrapper original_type;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000   uvm_object_wrapper override_type;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   if(m_type_names.exists(original_type_name))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     original_type = m_type_names[original_type_name];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   if(m_type_names.exists(override_type_name))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     override_type = m_type_names[override_type_name];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
        
          // check that type is registered with the factory
%000000   if (override_type == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     uvm_report_error("TYPNTF", {"Cannot register instance override with type name '",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000     original_type_name,"' and instance path '",full_inst_path,"' because the type it's supposed ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000     "to produce, '",override_type_name,"', is not registered with the factory."}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
          end
        
%000000   if (original_type == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       m_lookup_strs[original_type_name] = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   override = new(.full_inst_path(full_inst_path),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000                  .orig_type(original_type),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000                  .orig_type_name(original_type_name),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000                  .ovrd_type(override_type));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   if(original_type != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     if (check_inst_override_exists(original_type,override_type,full_inst_path))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000     if(!m_inst_override_queues.exists(original_type))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       m_inst_override_queues[original_type] = new;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000     m_inst_override_queues[original_type].queue.push_back(override);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
          end 
%000000   else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     if(m_has_wildcard(original_type_name)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000        foreach(m_type_names[i]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000          if(uvm_is_match(original_type_name,i)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000            this.set_inst_override_by_name(i, override_type_name, full_inst_path);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
                 end
               end
%000000        m_wildcard_inst_overrides.push_back(override);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
            end
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       if(!m_inst_override_name_queues.exists(original_type_name))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000         m_inst_override_name_queues[original_type_name] = new;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       m_inst_override_name_queues[original_type_name].queue.push_back(override);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
            end
          end
        
        endfunction
        
%000000 function bit uvm_factory::m_has_wildcard(string nm);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000   foreach (nm[i]) 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000     if(nm[i] == "*" || nm[i] == "?") return 1;
-000000  point: type=expr comment=(((nm.getc(i)) == 8'h2a)==0 && ((nm.getc(i)) == 8'h3f)==0) => 0 hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=expr comment=(((nm.getc(i)) == 8'h2a)==1) => 1 hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=expr comment=(((nm.getc(i)) == 8'h3f)==1) => 1 hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000   return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        endfunction
        
        
        // create_object_by_name
        // ---------------------
        
%000000 function uvm_object uvm_factory::create_object_by_name (string requested_type_name,  
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
                                                                string parent_inst_path="",  
                                                                string name=""); 
        
%000000   uvm_object_wrapper wrapper;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000   string inst_path;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   if (parent_inst_path == "")
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_factory__Vclpkg
%000000     inst_path = name;
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_factory__Vclpkg
%000000   else if (name != "")
-000000  point: type=line comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     inst_path = {parent_inst_path,".",name};
-000000  point: type=line comment=if hier=uvm_pkg::uvm_factory__Vclpkg
          else
%000000     inst_path = parent_inst_path;
-000000  point: type=line comment=else hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   m_override_info.delete();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   wrapper = find_override_by_name(requested_type_name, inst_path);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
          // if no override exists, try to use requested_type_name directly
%000000   if (wrapper==null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     if(!m_type_names.exists(requested_type_name)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       uvm_report_warning("BDTYP",{"Cannot create an object of type '",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       requested_type_name,"' because it is not registered with the factory."}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
            end
%000000     wrapper = m_type_names[requested_type_name];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
          end
        
%000000   return wrapper.create_object(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
        endfunction
        
        
        // create_object_by_type
        // ---------------------
        
 000747 function uvm_object uvm_factory::create_object_by_type (uvm_object_wrapper requested_type,  
+000747  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
                                                                string parent_inst_path="",  
                                                                string name=""); 
        
 000747   string full_inst_path;
+000747  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
 000568   if (parent_inst_path == "")
+000568  point: type=line comment=elsif hier=uvm_pkg::uvm_factory__Vclpkg
 000568     full_inst_path = name;
+000568  point: type=line comment=elsif hier=uvm_pkg::uvm_factory__Vclpkg
~000179   else if (name != "")
+000179  point: type=line comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=else hier=uvm_pkg::uvm_factory__Vclpkg
 000179     full_inst_path = {parent_inst_path,".",name};
+000179  point: type=line comment=if hier=uvm_pkg::uvm_factory__Vclpkg
          else
%000000     full_inst_path = parent_inst_path;
-000000  point: type=line comment=else hier=uvm_pkg::uvm_factory__Vclpkg
        
 000747   m_override_info.delete();
+000747  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
 000747   requested_type = find_override_by_type(requested_type, full_inst_path);
+000747  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
 000747   return requested_type.create_object(name);
+000747  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
        endfunction
        
        
        // create_component_by_name
        // ------------------------
        
%000001 function uvm_component uvm_factory::create_component_by_name (string requested_type_name,  
-000001  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
                                                                      string parent_inst_path="",  
                                                                      string name, 
                                                                      uvm_component parent);
%000001   uvm_object_wrapper wrapper;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000001   string inst_path;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
%000001   if (parent_inst_path == "")
-000001  point: type=line comment=elsif hier=uvm_pkg::uvm_factory__Vclpkg
%000001     inst_path = name;
-000001  point: type=line comment=elsif hier=uvm_pkg::uvm_factory__Vclpkg
%000000   else if (name != "")
-000000  point: type=line comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     inst_path = {parent_inst_path,".",name};
-000000  point: type=line comment=if hier=uvm_pkg::uvm_factory__Vclpkg
          else
%000000     inst_path = parent_inst_path;
-000000  point: type=line comment=else hier=uvm_pkg::uvm_factory__Vclpkg
        
%000001   m_override_info.delete();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
%000001   wrapper = find_override_by_name(requested_type_name, inst_path);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
          // if no override exists, try to use requested_type_name directly
%000001   if (wrapper == null) begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000001     if(!m_type_names.exists(requested_type_name)) begin 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       uvm_report_warning("BDTYP",{"Cannot create a component of type '",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       requested_type_name,"' because it is not registered with the factory."}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
            end
%000001     wrapper = m_type_names[requested_type_name];
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
          end
        
%000001   return wrapper.create_component(name, parent);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
        endfunction
        
        
        // create_component_by_type
        // ------------------------
        
 000015 function uvm_component uvm_factory::create_component_by_type (uvm_object_wrapper requested_type,  
+000015  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
                                                                    string parent_inst_path="",  
                                                                    string name, 
                                                                    uvm_component parent);
 000015   string full_inst_path;
+000015  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   if (parent_inst_path == "")
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_factory__Vclpkg
%000000     full_inst_path = name;
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_factory__Vclpkg
~000015   else if (name != "")
+000015  point: type=line comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=else hier=uvm_pkg::uvm_factory__Vclpkg
 000015     full_inst_path = {parent_inst_path,".",name};
+000015  point: type=line comment=if hier=uvm_pkg::uvm_factory__Vclpkg
          else
%000000     full_inst_path = parent_inst_path;
-000000  point: type=line comment=else hier=uvm_pkg::uvm_factory__Vclpkg
        
 000015   m_override_info.delete();
+000015  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
 000015   requested_type = find_override_by_type(requested_type, full_inst_path);
+000015  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
 000015   return requested_type.create_component(name, parent);
+000015  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
        endfunction
        
        
        
        // find_by_name
        // ------------
        
%000000 function uvm_object_wrapper uvm_factory::find_by_name(string type_name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   if (m_type_names.exists(type_name))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     return m_type_names[type_name];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   uvm_report_warning("UnknownTypeName", {"find_by_name: Type name '",type_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000       "' not registered with the factory."}, UVM_NONE);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
          
        endfunction
        
        
        // find_override_by_name
        // ---------------------
        
%000001 function uvm_object_wrapper uvm_factory::find_override_by_name (string requested_type_name,
-000001  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
                                                                        string full_inst_path);
%000001   uvm_object_wrapper rtype;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000001   uvm_factory_queue_class qc;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
%000001   uvm_object_wrapper override;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
%000001   if (m_type_names.exists(requested_type_name))
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000001     rtype = m_type_names[requested_type_name];
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
        
        /***
          if(rtype == null) begin
            if(requested_type_name != "") begin
              uvm_report_warning("TYPNTF", {"Requested type name ",
                 requested_type_name, " is not registered with the factory. The instance override to ",
                 full_inst_path, " is ignored"}, UVM_NONE);
            end
            m_lookup_strs[requested_type_name] = 1;
            return null;
          end
        ***/
        
%000001   if (full_inst_path != "") begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000001     if(rtype == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       if(m_inst_override_name_queues.exists(requested_type_name))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000         qc = m_inst_override_name_queues[requested_type_name];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
            end
%000001     else begin
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000001       if(m_inst_override_queues.exists(rtype))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000         qc = m_inst_override_queues[rtype];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
            end
%000001     if(qc != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       for(int index = 0; index<qc.queue.size(); ++index) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000         if (uvm_is_match(qc.queue[index].orig_type_name, requested_type_name) &&
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000             uvm_is_match(qc.queue[index].full_inst_path, full_inst_path)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000           m_override_info.push_back(qc.queue[index]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000           if (m_debug_pass) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000             if (override == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000               override = qc.queue[index].ovrd_type;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000               qc.queue[index].selected = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
                    end
                  end
%000000           else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000             if (qc.queue[index].ovrd_type.get_type_name() == requested_type_name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000               return qc.queue[index].ovrd_type;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
                    else
%000000               return find_override_by_type(qc.queue[index].ovrd_type,full_inst_path);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
                  end
                end
              end
          end
        
%000001   if(rtype != null && !m_inst_override_queues.exists(rtype) && m_wildcard_inst_overrides.size()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000      m_inst_override_queues[rtype] = new;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000      foreach (m_wildcard_inst_overrides[i]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000        if(uvm_is_match(m_wildcard_inst_overrides[i].orig_type_name, requested_type_name))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000          m_inst_override_queues[rtype].queue.push_back(m_wildcard_inst_overrides[i]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
             end
          end
        
          // type override - exact match
%000001   foreach (m_type_overrides[index])
-000001  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     if (m_type_overrides[index].orig_type_name == requested_type_name) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       m_override_info.push_back(m_type_overrides[index]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       if (m_debug_pass) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000         if (override == null) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000           override = m_type_overrides[index].ovrd_type;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000           m_type_overrides[index].selected = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
                end
              end
%000000       else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000         return find_override_by_type(m_type_overrides[index].ovrd_type,full_inst_path);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
              end
            end
        
        
%000001   if (m_debug_pass && override != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     return find_override_by_type(override, full_inst_path);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
        
          // No override found
%000001   return null;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
        
        endfunction
        
        
        // find_override_by_type
        // ---------------------
        
 000762 function uvm_object_wrapper uvm_factory::find_override_by_type(uvm_object_wrapper requested_type,
+000762  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
                                                                       string full_inst_path);
        
 000762   uvm_object_wrapper override;
+000762  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
 000762   uvm_factory_queue_class qc = null;
+000762  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
~000762   if (m_inst_override_queues.exists(requested_type))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
+000762  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     qc = m_inst_override_queues[requested_type];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
        
~000762   foreach (m_override_info[index]) begin
+000762  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     if ( //index != m_override_info.size()-1 &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000        m_override_info[index].orig_type == requested_type) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       uvm_report_error("OVRDLOOP", "Recursive loop detected while finding override.", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       if (!m_debug_pass)
-000000  point: type=expr comment=(m_debug_pass==0) => 1 hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=expr comment=(m_debug_pass==1) => 0 hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000         debug_create_by_type (requested_type, full_inst_path);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000       return requested_type;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
            end
          end
        
          // inst override; return first match; takes precedence over type overrides
~000762   if (full_inst_path != "" && qc != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
+000762  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     for (int index = 0; index < qc.queue.size(); ++index) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000       if ((qc.queue[index].orig_type == requested_type ||
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
                   (qc.queue[index].orig_type_name != "<unknown>" &&
                    qc.queue[index].orig_type_name != "" &&
                    qc.queue[index].orig_type_name == requested_type.get_type_name())) &&
%000000           uvm_is_match(qc.queue[index].full_inst_path, full_inst_path)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000         m_override_info.push_back(qc.queue[index]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000         if (m_debug_pass) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000           if (override == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000             override = qc.queue[index].ovrd_type;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000             qc.queue[index].selected = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
                  end
                end
%000000         else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000           if (qc.queue[index].ovrd_type == requested_type)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000             return requested_type;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
                  else
%000000             return find_override_by_type(qc.queue[index].ovrd_type,full_inst_path);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
                end
              end
            end
        
          // type override - exact match
~000762   foreach (m_type_overrides[index]) begin
+000762  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     if (m_type_overrides[index].orig_type == requested_type ||
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
                (m_type_overrides[index].orig_type_name != "<unknown>" &&
                 m_type_overrides[index].orig_type_name != "" &&
                 requested_type != null &&
%000000          m_type_overrides[index].orig_type_name == requested_type.get_type_name())) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       m_override_info.push_back(m_type_overrides[index]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       if (m_debug_pass) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000         if (override == null) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000           override = m_type_overrides[index].ovrd_type;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000           m_type_overrides[index].selected = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
                end
              end
%000000       else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000         if (m_type_overrides[index].ovrd_type == requested_type)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000           return requested_type;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
                else
%000000           return find_override_by_type(m_type_overrides[index].ovrd_type,full_inst_path);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
              end
            end
          end
        
          // type override with wildcard match
          //foreach (m_type_overrides[index])
          //  if (uvm_is_match(index,requested_type.get_type_name())) begin
          //    m_override_info.push_back(m_inst_overrides[index]);
          //    return find_override_by_type(m_type_overrides[index],full_inst_path);
          //  end
        
~000762   if (m_debug_pass && override != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
+000762  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     if (override == requested_type)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       return requested_type;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
            else
%000000       return find_override_by_type(override,full_inst_path);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
        
 000762   return requested_type;
+000762  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
        endfunction
        
        
        // print
        // -----
        
%000000 function void uvm_factory::print (int all_types=1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   string key;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000   uvm_factory_queue_class sorted_override_queues[string];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   string tmp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000   int id;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000   uvm_object_wrapper obj;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
          //sort the override queues
%000000   foreach (m_inst_override_queues[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000     obj = i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000     tmp = obj.get_type_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000     if(tmp == "") $swrite(tmp, "__unnamed_id_%0d", id++);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     sorted_override_queues[tmp] = m_inst_override_queues[i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
          end
%000000   foreach (m_inst_override_name_queues[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000     sorted_override_queues[i] = m_inst_override_name_queues[i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
          end
        
%000000   $display("\n#### Factory Configuration (*)\n");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
          // print instance overrides
%000000   if(!m_type_overrides.size() && !sorted_override_queues.num())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     $display("  No instance or type overrides are registered with this factory");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000   else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     int max1,max2,max3;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     string dash = "---------------------------------------------------------------------------------------------------";
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     string space= "                                                                                                   ";
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
        
            // print instance overrides
%000000     if(!sorted_override_queues.num())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       $display("No instance overrides are registered with this factory");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       foreach(sorted_override_queues[j]) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000         uvm_factory_queue_class qc = sorted_override_queues[j];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000         for (int i=0; i<qc.queue.size(); ++i) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000           if (qc.queue[i].orig_type_name.len() > max1)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000             max1=qc.queue[i].orig_type_name.len();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000           if (qc.queue[i].full_inst_path.len() > max2)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000             max2=qc.queue[i].full_inst_path.len();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000           if (qc.queue[i].ovrd_type_name.len() > max3)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000             max3=qc.queue[i].ovrd_type_name.len();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
                end
              end
%000000       if (max1 < 14) max1 = 14;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       if (max2 < 13) max2 = 13;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       if (max3 < 13) max3 = 13;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000       $display("Instance Overrides:\n");
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       $display("  %0s%0s  %0s%0s  %0s%0s","Requested Type",space.substr(1,max1-14),
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000                                           "Override Path", space.substr(1,max2-13),
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000                                           "Override Type", space.substr(1,max3-13));
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       $display("  %0s  %0s  %0s",dash.substr(1,max1),
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000                                  dash.substr(1,max2),
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000                                  dash.substr(1,max3));
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000       foreach(sorted_override_queues[j]) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000         uvm_factory_queue_class qc = sorted_override_queues[j];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000         for (int i=0; i<qc.queue.size(); ++i) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000           $write("  %0s%0s",qc.queue[i].orig_type_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000                  space.substr(1,max1-qc.queue[i].orig_type_name.len()));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000           $write("  %0s%0s",  qc.queue[i].full_inst_path,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000                  space.substr(1,max2-qc.queue[i].full_inst_path.len()));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000           $display("  %0s",     qc.queue[i].ovrd_type_name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
                end
              end
            end
        
            // print type overrides
%000000     if (!m_type_overrides.size())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       $display("\nNo type overrides are registered with this factory");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
              // Resize for type overrides
%000000       if (max1 < 14) max1 = 14;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       if (max2 < 13) max2 = 13;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       if (max3 < 13) max3 = 13;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000       foreach (m_type_overrides[i]) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000         if (m_type_overrides[i].orig_type_name.len() > max1)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000           max1=m_type_overrides[i].orig_type_name.len();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000         if (m_type_overrides[i].ovrd_type_name.len() > max2)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000           max2=m_type_overrides[i].ovrd_type_name.len();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
              end
%000000       if (max1 < 14) max1 = 14;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       if (max2 < 13) max2 = 13;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       $display("\nType Overrides:\n");
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       $display("  %0s%0s  %0s%0s","Requested Type",space.substr(1,max1-14),
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000                                   "Override Type", space.substr(1,max2-13));
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       $display("  %0s  %0s",dash.substr(1,max1),
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000                             dash.substr(1,max2));
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       foreach (m_type_overrides[index]) 
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000         $display("  %0s%0s  %0s",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000                  m_type_overrides[index].orig_type_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000                  space.substr(1,max1-m_type_overrides[index].orig_type_name.len()),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000                  m_type_overrides[index].ovrd_type_name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
            end
          end
        
          // print all registered types, if all_types >= 1 
%000000   if (all_types >= 1 && m_type_names.first(key)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     bit banner;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000     $display("\nAll types registered with the factory: %0d total",m_types.num());
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000     $display("(types without type names will not be printed)\n");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000     do begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
              // filter out uvm_ classes (if all_types<2) and non-types (lookup strings)
%000000       if (!(all_types < 2 && uvm_is_match("uvm_*",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
                   m_type_names[key].get_type_name())) &&
%000000            key == m_type_names[key].get_type_name()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000         if (!banner) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=expr comment=(banner==0) => 1 hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=expr comment=(banner==1) => 0 hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000           $display("  Type Name");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000           $display("  ---------");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000           banner=1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
                end
%000000         $display("  ", m_type_names[key].get_type_name());
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
              end
%000000     end while(m_type_names.next(key));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
          end
        
%000000   $display("(*) Types with no associated type name will be printed as <unknown>");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   $display("\n####\n");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
        endfunction
        
        
        // debug_create_by_name
        // --------------------
        
%000000 function void  uvm_factory::debug_create_by_name (string requested_type_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
                                                          string parent_inst_path="",
                                                          string name="");
%000000   m_debug_create(requested_type_name, null, parent_inst_path, name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        endfunction
        
        
        // debug_create_by_type
        // --------------------
        
%000000 function void  uvm_factory::debug_create_by_type (uvm_object_wrapper requested_type,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
                                                          string parent_inst_path="",
%000000                                                   string name="");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000   m_debug_create("", requested_type, parent_inst_path, name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        endfunction
        
        
        // m_debug_create
        // --------------
        
%000000 function void  uvm_factory::m_debug_create (string requested_type_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
                                                    uvm_object_wrapper requested_type,
                                                    string parent_inst_path,
                                                    string name);
        
%000000   string full_inst_path;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000   uvm_object_wrapper result;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
          
%000000   if (parent_inst_path == "")
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_factory__Vclpkg
%000000     full_inst_path = name;
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_factory__Vclpkg
%000000   else if (name != "")
-000000  point: type=line comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     full_inst_path = {parent_inst_path,".",name};
-000000  point: type=line comment=if hier=uvm_pkg::uvm_factory__Vclpkg
          else
%000000     full_inst_path = parent_inst_path;
-000000  point: type=line comment=else hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   m_override_info.delete();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   if (requested_type == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     if (!m_type_names.exists(requested_type_name) &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       !m_lookup_strs.exists(requested_type_name)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       uvm_report_warning("Factory Warning", {"The factory does not recognize '",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000         requested_type_name,"' as a registered type."}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
            end
%000000     m_debug_pass = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
            
%000000     result = find_override_by_name(requested_type_name,full_inst_path);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
          end
%000000   else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     m_debug_pass = 1;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     if (!m_types.exists(requested_type))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       register(requested_type); 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000     result = find_override_by_type(requested_type,full_inst_path);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     if (requested_type_name == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000       requested_type_name = requested_type.get_type_name();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
          end
        
%000000   m_debug_display(requested_type_name, result, full_inst_path);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000   m_debug_pass = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   foreach (m_override_info[index])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     m_override_info[index].selected = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
        endfunction
        
        
        // m_debug_display
        // ---------------
        
%000000 function void  uvm_factory::m_debug_display (string requested_type_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
                                                     uvm_object_wrapper result,
                                                     string full_inst_path);
        
%000000   int    max1,max2,max3;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000   string dash = "---------------------------------------------------------------------------------------------------";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000   string space= "                                                                                                   ";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   $display("\n#### Factory Override Information (*)\n");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000   $write("Given a request for an object of type '",requested_type_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000          "' with an instance\npath of '",full_inst_path,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
                 "', the factory encountered\n");
        
%000000   if (m_override_info.size() == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     $display("no relevant overrides.\n");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000   else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000     $display("the following relevant overrides. An 'x' next to a match indicates a",
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
                     "\nmatch that was ignored.\n");
        
%000000     foreach (m_override_info[i]) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000       if (m_override_info[i].orig_type_name.len() > max1)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000         max1=m_override_info[i].orig_type_name.len();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       if (m_override_info[i].full_inst_path.len() > max2)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000         max2=m_override_info[i].full_inst_path.len();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
%000000       if (m_override_info[i].ovrd_type_name.len() > max3)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000         max3=m_override_info[i].ovrd_type_name.len();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
            end
        
%000000     if (max1 < 13) max1 = 13;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     if (max2 < 13) max2 = 13;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000     if (max3 < 13) max3 = 13;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000     $display("  %0s%0s", "Original Type", space.substr(1,max1-13),
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000              "  %0s%0s", "Instance Path", space.substr(1,max2-13),
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000              "  %0s%0s", "Override Type", space.substr(1,max3-13));
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000     $display("  %0s  %0s  %0s",dash.substr(1,max1),
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000                                dash.substr(1,max2),
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000                                dash.substr(1,max3));
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000     foreach (m_override_info[i]) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000       $write("%s%0s%0s",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000              m_override_info[i].selected ? "  " : "x ",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000              m_override_info[i].orig_type_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000              space.substr(1,max1-m_override_info[i].orig_type_name.len()));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000       $write("  %0s%0s", m_override_info[i].full_inst_path,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000              space.substr(1,max2-m_override_info[i].full_inst_path.len()));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000       $write("  %0s%0s", m_override_info[i].ovrd_type_name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000              space.substr(1,max3-m_override_info[i].ovrd_type_name.len()));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000       if (m_override_info[i].full_inst_path == "*")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
%000000         $display("  <type override>");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_factory__Vclpkg
              else
%000000         $display();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
            end
%000000     $display();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_factory__Vclpkg
          end
        
        
%000000   $display("Result:\n");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000   $display("  The factory will produce an object of type '%0s'", 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
%000000            result == null ? requested_type_name : result.get_type_name());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   $display("\n(*) Types with no associated type name will be printed as <unknown>");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
%000000   $display("\n####\n");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_factory__Vclpkg
        
        endfunction
        
        
        

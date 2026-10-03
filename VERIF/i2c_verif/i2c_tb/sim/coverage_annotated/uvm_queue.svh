//      // verilator_coverage annotation
        //
        //------------------------------------------------------------------------------
        //   Copyright 2007-2010 Mentor Graphics Corporation
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
        //------------------------------------------------------------------------------
        
        
        `ifndef UVM_QUEUE_SVH
        `define UVM_QUEUE_SVH
        
        //------------------------------------------------------------------------------
        //
        // CLASS: uvm_queue #(T)
        //
        //------------------------------------------------------------------------------
        // Implements a class-based dynamic queue. Allows queues to be allocated on
        // demand, and passed and stored by reference.
        //------------------------------------------------------------------------------
        
        class uvm_queue #(type T=int) extends uvm_object;
        
%000001   const static string type_name = "uvm_queue";
-000001  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
        
          typedef uvm_queue #(T) this_type;
        
          static local this_type m_global_queue;
          protected T queue[$];
        
          // Function: new
          //
          // Creates a new queue with the given ~name~.
        
~000225   function new (string name="");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000008  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
+000225  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
~000225     super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000008  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
+000225  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
          endfunction
        
        
          // Function: get_global_queue
          //
          // Returns the singleton global queue for the item type, T. 
          //
          // This allows items to be shared amongst components throughout the
          // verification environment.
        
%000000   static function this_type get_global_queue ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000     if (m_global_queue==null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000       m_global_queue = new("global_queue");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000     return m_global_queue;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
          endfunction
        
        
          // Function: get_global
          //
          // Returns the specified item instance from the global item queue. 
        
%000000   static function T get_global (int index);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000     this_type gqueue;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000     gqueue = get_global_queue(); 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000     return gqueue.get(index);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
          endfunction
        
        
          // Function: get
          //
          // Returns the item at the given ~index~.
          //
          // If no item exists by that key, a new item is created with that key
          // and returned.
        
~000018   virtual function T get (int index);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
+000018  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
~000018     T default_value;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
+000018  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
~000018     if (index >= size() || index < 0) begin
-000000  point: type=expr comment=((index < 32'sh0)==1) => 1 hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=expr comment=((index >= size())==0 && (index < 32'sh0)==0) => 0 hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==1) => 1 hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=expr comment=((index >= size())==0 && (index < 32'sh0)==0) => 0 hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==1) => 1 hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=expr comment=((index >= size())==0 && (index < 32'sh0)==0) => 0 hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==1) => 1 hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=expr comment=((index >= size())==0 && (index < 32'sh0)==0) => 0 hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==1) => 1 hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
+000018  point: type=expr comment=((index >= size())==0 && (index < 32'sh0)==0) => 0 hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
+000018  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000       uvm_report_warning("QUEUEGET",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000         $sformatf("get: given index out of range for queue of size %0d. Ignoring get request",size()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000       return default_value;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
            end
~000018     return queue[index];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
+000018  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
          endfunction
          
        
          // Function: size
          //
          // Returns the number of items stored in the queue.
        
~005186   virtual function int size ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
+005186  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
+000306  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
~005186     return queue.size();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
+005186  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
+000306  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
          endfunction
        
        
          // Function: insert
          //
          // Inserts the item at the given ~index~ in the queue.
        
%000000   virtual function void insert (int index, T item);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000     if (index >= size() || index < 0) begin
-000000  point: type=expr comment=((index < 32'sh0)==1) => 1 hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=expr comment=((index >= size())==0 && (index < 32'sh0)==0) => 0 hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==1) => 1 hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=expr comment=((index >= size())==0 && (index < 32'sh0)==0) => 0 hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==1) => 1 hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=expr comment=((index >= size())==0 && (index < 32'sh0)==0) => 0 hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==1) => 1 hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=expr comment=((index >= size())==0 && (index < 32'sh0)==0) => 0 hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==1) => 1 hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
-000000  point: type=expr comment=((index >= size())==0 && (index < 32'sh0)==0) => 0 hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000       uvm_report_warning("QUEUEINS",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000         $sformatf("insert: given index out of range for queue of size %0d. Ignoring insert request",size()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
            end
%000000     queue.insert(index,item);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
          endfunction
        
        
          // Function: delete
          //
          // Removes the item at the given ~index~ from the queue; if ~index~ is
          // not provided, the entire contents of the queue are deleted.
        
%000000   virtual function void delete (int index=-1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000     if (index >= size() || index < -1) begin
-000000  point: type=expr comment=((index < (- 32'sh1))==1) => 1 hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=expr comment=((index >= size())==0 && (index < (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=expr comment=((index < (- 32'sh1))==1) => 1 hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=expr comment=((index >= size())==0 && (index < (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=expr comment=((index < (- 32'sh1))==1) => 1 hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=expr comment=((index >= size())==0 && (index < (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=expr comment=((index < (- 32'sh1))==1) => 1 hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=expr comment=((index >= size())==0 && (index < (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=expr comment=((index < (- 32'sh1))==1) => 1 hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
-000000  point: type=expr comment=((index >= size())==0 && (index < (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000       uvm_report_warning("QUEUEDEL",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000         $sformatf("delete: given index out of range for queue of size %0d. Ignoring delete request",size()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
            end
%000000     if (index == -1)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000       queue.delete();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
            else
%000000       queue.delete(index);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
          endfunction
        
        
          // Function: pop_front
          //
          // Returns the first element in the queue (index=0),
          // or ~null~ if the queue is empty.
        
%000000   virtual function T pop_front();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000     return queue.pop_front();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
          endfunction
        
        
          // Function: pop_back
          //
          // Returns the last element in the queue (index=size()-1),
          // or ~null~ if the queue is empty.
        
%000000   virtual function T pop_back();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000     return queue.pop_back();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
          endfunction
        
        
          // Function: push_front
          //
          // Inserts the given ~item~ at the front of the queue.
        
%000000   virtual function void push_front(T item);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000     queue.push_front(item);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
          endfunction
        
        
          // Function: push_back
          //
          // Inserts the given ~item~ at the back of the queue.
        
~000013   virtual function void push_back(T item);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
+000013  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
~000013     queue.push_back(item);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
+000013  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
          endfunction
        
        
%000000   virtual function uvm_object create (string name=""); 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000     this_type v;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000     v=new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000     return v;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
          endfunction
        
%000000   virtual function string get_type_name ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000     return type_name;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
          endfunction
        
%000000   virtual function void do_copy (uvm_object rhs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000     this_type p;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000     super.do_copy(rhs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000     if (rhs == null || !$cast(p, rhs))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000     queue = p.queue;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
          endfunction
          
%000000   virtual function string convert2string();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
%000000       return $sformatf("%p",queue);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz12__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz120__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz149__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz26__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_queue__Tz4__Vclpkg
          endfunction
        
        
        endclass
        
        
        `endif // UVM_QUEUE_SVH
        
        

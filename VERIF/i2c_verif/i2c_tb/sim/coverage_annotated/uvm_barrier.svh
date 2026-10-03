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
        
        
        //-----------------------------------------------------------------------------
        //
        // CLASS: uvm_barrier
        //
        // The uvm_barrier class provides a multiprocess synchronization mechanism. 
        // It enables a set of processes to block until the desired number of processes
        // get to the synchronization point, at which time all of the processes are
        // released.
        //-----------------------------------------------------------------------------
        
        class uvm_barrier extends uvm_object;
        
          local  int       threshold;
          local  int       num_waiters;
          local  bit       at_threshold;
          local  bit       auto_reset;
          local  uvm_event m_event;
        
        
          // Function: new
          //
          // Creates a new barrier object.
        
%000000   function new (string name="", int threshold=0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     uvm_event e;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     e = new({"barrier_",name});
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     this.threshold = threshold;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     m_event = e;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     num_waiters = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     auto_reset = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     at_threshold = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
          endfunction
        
        
          // Task: wait_for
          //
          // Waits for enough processes to reach the barrier before continuing. 
          //
          // The number of processes to wait for is set by the <set_threshold> method.
        
%000000   virtual task wait_for();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
        
%000000     if (at_threshold)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_barrier__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_barrier__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_barrier__Vclpkg
        
%000000     num_waiters++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
        
%000000     if (num_waiters >= threshold) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_barrier__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_barrier__Vclpkg
%000000       if (!auto_reset)
-000000  point: type=expr comment=(auto_reset==0) => 1 hier=uvm_pkg::uvm_barrier__Vclpkg
-000000  point: type=expr comment=(auto_reset==1) => 0 hier=uvm_pkg::uvm_barrier__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_barrier__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_barrier__Vclpkg
%000000         at_threshold=1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_barrier__Vclpkg
%000000       m_trigger();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_barrier__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_barrier__Vclpkg
            end
        
%000000     m_event.wait_trigger();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
        
          endtask
        
          
          // Function: reset
          //
          // Resets the barrier. This sets the waiter count back to zero. 
          //
          // The threshold is unchanged. After reset, the barrier will force processes
          // to wait for the threshold again. 
          //
          // If the ~wakeup~ bit is set, any currently waiting processes will
          // be activated.
        
%000000   virtual function void reset (bit wakeup=1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     at_threshold = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     if (num_waiters) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_barrier__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_barrier__Vclpkg
%000000       if (wakeup)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_barrier__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_barrier__Vclpkg
%000000         m_event.trigger();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_barrier__Vclpkg
              else
%000000         m_event.reset();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_barrier__Vclpkg
            end
%000000     num_waiters = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
          endfunction
        
        
          // Function: set_auto_reset
          //
          // Determines if the barrier should reset itself after the threshold is
          // reached. 
          //
          // The default is on, so when a barrier hits its threshold it will reset, and
          // new processes will block until the threshold is reached again. 
          //
          // If auto reset is off, then once the threshold is achieved, new processes
          // pass through without being blocked until the barrier is reset.
        
%000000   virtual function void set_auto_reset (bit value=1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     at_threshold = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     auto_reset = value;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
          endfunction
        
        
          // Function: set_threshold
          //
          // Sets the process threshold. 
          //
          // This determines how many processes must be waiting on the barrier before
          // the processes may proceed. 
          //
          // Once the ~threshold~ is reached, all waiting processes are activated. 
          //
          // If ~threshold~ is set to a value less than the number of currently
          // waiting processes, then the barrier is reset and waiting processes are
          // activated.
        
%000000   virtual function void set_threshold (int threshold);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     this.threshold = threshold;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     if (threshold <= num_waiters)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_barrier__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_barrier__Vclpkg
%000000       reset(1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_barrier__Vclpkg
          endfunction
        
        
          // Function: get_threshold
          //
          // Gets the current threshold setting for the barrier.
        
%000000   virtual function int get_threshold ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     return threshold;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
          endfunction
        
          
          // Function: get_num_waiters
          //
          // Returns the number of processes currently waiting at the barrier.
        
%000000   virtual function int get_num_waiters ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     return num_waiters;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
          endfunction
        
        
          // Function: cancel
          //
          // Decrements the waiter count by one. This is used when a process that is
          // waiting on the barrier is killed or activated by some other means.
        
%000000   virtual function void cancel ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     m_event.cancel();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     num_waiters = m_event.get_num_waiters();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
          endfunction
        
        
%000001   const static string type_name = "uvm_barrier";
-000001  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
        
%000000   virtual  function uvm_object create(string name=""); 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     uvm_barrier v;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     v=new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     return v;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
          endfunction
        
%000000   virtual  function string get_type_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     return type_name;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
          endfunction
        
%000000   local task m_trigger();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     m_event.trigger();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     num_waiters=0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     #0; //this process was last to wait; allow other procs to resume first
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
          endtask
        
%000000   virtual function void do_print (uvm_printer printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     printer.print_int("threshold", threshold, $bits(threshold), UVM_DEC, ".", "int");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     printer.print_int("num_waiters", num_waiters, $bits(num_waiters), UVM_DEC, ".", "int");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     printer.print_int("at_threshold", at_threshold, $bits(at_threshold), UVM_BIN, ".", "bit");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     printer.print_int("auto_reset", auto_reset, $bits(auto_reset), UVM_BIN, ".", "bit");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
          endfunction
        
%000000   virtual function void do_copy (uvm_object rhs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     uvm_barrier b;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     super.do_copy(rhs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     if(!$cast(b, rhs) || (b==null)) return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_barrier__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_barrier__Vclpkg
        
%000000     threshold = b.threshold;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     num_waiters = b.num_waiters;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     at_threshold = b.at_threshold;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     auto_reset = b.auto_reset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
%000000     m_event = b.m_event;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_barrier__Vclpkg
          endfunction  
        
        endclass
        
        
        

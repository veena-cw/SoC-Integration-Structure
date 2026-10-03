//      // verilator_coverage annotation
        // DESCRIPTION: Verilator: built-in packages and classes
        //
        // Code available from: https://verilator.org
        //
        //*************************************************************************
        //
        // This program is free software; you can redistribute it and/or modify it
        // under the terms of either the GNU Lesser General Public License Version 3
        // or the Perl Artistic License Version 2.0.
        // SPDX-FileCopyrightText: 2022-2026 Wilson Snyder
        // SPDX-License-Identifier: LGPL-3.0-only OR Artistic-2.0
        //
        //*************************************************************************
        ///
        /// \file
        /// \brief Verilated IEEE std:: header
        ///
        /// This file is included automatically by Verilator, unless '--no-std-package'
        /// is used.
        ///
        /// This file is not part of the Verilated public-facing API.
        /// It is only for internal use.
        ///
        //*************************************************************************
        //
        // The following keywords from this file are hardcoded for detection in the parser:
        // "mailbox", "process", "randomize", "semaphore", "std"
        
        `ifndef VERILATOR_STD_SV_
        `define VERILATOR_STD_SV_
        
        // verilator lint_off DECLFILENAME
        // verilator lint_off TIMESCALEMOD
        // verilator lint_off UNUSEDSIGNAL
        package std;
          // IEEE 1800-specified standard "mailbox"
          class mailbox #(
              type T
          );
            protected int m_bound;
            protected T m_queue[$];
        
%000002     function new(int bound = 0);
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
-000001  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000002  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
-000002  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
%000002       m_bound = bound;
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
-000001  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000002  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
-000002  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
            endfunction
        
~000700     function int num();
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
+000027  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000004  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
+000700  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
~000700       return m_queue.size();
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
+000027  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000004  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
+000700  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
            endfunction
        
%000000     task put(T message);
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
        `ifdef VERILATOR_TIMING
%000000       while (m_bound != 0 && m_queue.size() >= m_bound)  //
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
%000000         wait (m_queue.size() < m_bound);
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
%000000       m_queue.push_back(message);
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
        `endif
            endtask
        
~000175     function int try_put(T message);
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
+000027  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000001  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
+000175  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
~000175       if (m_bound == 0 || num() < m_bound) begin
-000000  point: type=expr comment=((m_bound == 32'sh0)==0 && (num() < m_bound)==0) => 0 hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=expr comment=((m_bound == 32'sh0)==1) => 1 hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=expr comment=((num() < m_bound)==1) => 1 hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=expr comment=((m_bound == 32'sh0)==0 && (num() < m_bound)==0) => 0 hier=std::mailbox__Tz18__Vclpkg
+000027  point: type=expr comment=((m_bound == 32'sh0)==1) => 1 hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=expr comment=((num() < m_bound)==1) => 1 hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=expr comment=((m_bound == 32'sh0)==0 && (num() < m_bound)==0) => 0 hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=expr comment=((m_bound == 32'sh0)==1) => 1 hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=expr comment=((num() < m_bound)==1) => 1 hier=std::mailbox__Tz19__Vclpkg
-000001  point: type=expr comment=((m_bound == 32'sh0)==0 && (num() < m_bound)==0) => 0 hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=expr comment=((m_bound == 32'sh0)==1) => 1 hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=expr comment=((num() < m_bound)==1) => 1 hier=std::mailbox__Tz31__Vclpkg
+000175  point: type=expr comment=((m_bound == 32'sh0)==0 && (num() < m_bound)==0) => 0 hier=std::mailbox__Tz45__Vclpkg
-000000  point: type=expr comment=((m_bound == 32'sh0)==1) => 1 hier=std::mailbox__Tz45__Vclpkg
-000000  point: type=expr comment=((num() < m_bound)==1) => 1 hier=std::mailbox__Tz45__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz45__Vclpkg
-000000  point: type=branch comment=else hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=branch comment=else hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=branch comment=else hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=branch comment=else hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=branch comment=else hier=std::mailbox__Tz45__Vclpkg
%000000         m_queue.push_back(message);
-000000  point: type=branch comment=if hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz45__Vclpkg
%000000         return 1;
-000000  point: type=branch comment=if hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz45__Vclpkg
              end
~000175       return 0;
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
+000027  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000001  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
+000175  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
            endfunction
        
~000027     task get(ref T message);
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
+000027  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
        `ifdef VERILATOR_TIMING
~000024       while (m_queue.size() == 0) begin
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
+000024  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
~000024         wait (m_queue.size() > 0);
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
+000024  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
              end
~000027       message = m_queue.pop_front();
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
+000027  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
        `endif
            endtask
        
~000175     function int try_get(ref T message);
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000001  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
+000175  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
%000000       if (num() > 0) begin
-000000  point: type=branch comment=if hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz45__Vclpkg
-000000  point: type=branch comment=else hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=branch comment=else hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=branch comment=else hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=branch comment=else hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=branch comment=else hier=std::mailbox__Tz45__Vclpkg
%000000         message = m_queue.pop_front();
-000000  point: type=branch comment=if hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz45__Vclpkg
%000000         return 1;
-000000  point: type=branch comment=if hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz45__Vclpkg
              end
~000175       return 0;
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000001  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
+000175  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
            endfunction
        
~000175     task peek(ref T message);
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000001  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
+000175  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
        `ifdef VERILATOR_TIMING
~000175       while (m_queue.size() == 0) begin
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000001  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
+000175  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
~000175         wait (m_queue.size() > 0);
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000001  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
+000175  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
              end
~000175       message = m_queue[0];
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000001  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
+000175  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
        `endif
            endtask
        
%000000     function int try_peek(ref T message);
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
%000000       if (num() > 0) begin
-000000  point: type=branch comment=if hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz45__Vclpkg
-000000  point: type=branch comment=else hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=branch comment=else hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=branch comment=else hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=branch comment=else hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=branch comment=else hier=std::mailbox__Tz45__Vclpkg
%000000         message = m_queue[0];
-000000  point: type=branch comment=if hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz45__Vclpkg
%000000         return 1;
-000000  point: type=branch comment=if hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=branch comment=if hier=std::mailbox__Tz45__Vclpkg
              end
%000000       return 0;
-000000  point: type=line comment=block hier=std::mailbox__Tz130__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz18__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz19__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz31__Vclpkg
-000000  point: type=line comment=block hier=std::mailbox__Tz45__Vclpkg
            endfunction
          endclass
        
          // IEEE 1800-specified standard "semaphore"
          class semaphore;
            protected int m_keyCount;
%000004     protected int m_nextKeyCount = '1;
-000004  point: type=line comment=block hier=std::semaphore__Vclpkg
%000004     protected longint unsigned m_ticket = 0;
-000004  point: type=line comment=block hier=std::semaphore__Vclpkg
%000004     protected longint unsigned m_nextTicket = 0;
-000004  point: type=line comment=block hier=std::semaphore__Vclpkg
        
%000004     function new(int keyCount = 0);
-000004  point: type=line comment=block hier=std::semaphore__Vclpkg
%000004       m_keyCount = keyCount;
-000004  point: type=line comment=block hier=std::semaphore__Vclpkg
            endfunction
        
 000229     function void put(int keyCount = 1);
+000229  point: type=line comment=block hier=std::semaphore__Vclpkg
 000229       m_keyCount += keyCount;
+000229  point: type=line comment=block hier=std::semaphore__Vclpkg
            endfunction
        
 000175     task get(int keyCount = 1);
+000175  point: type=line comment=block hier=std::semaphore__Vclpkg
        `ifdef VERILATOR_TIMING
 000175       longint unsigned ticket;
+000175  point: type=line comment=block hier=std::semaphore__Vclpkg
              // Fast path: take if keys fit AND either no one is queued, or
              // the head still doesn't fit (so we're not stealing its keys).
~000175       if (m_keyCount >= keyCount && m_nextKeyCount > m_keyCount) begin
+000175  point: type=expr comment=((m_keyCount >= keyCount)==0) => 0 hier=std::semaphore__Vclpkg
-000000  point: type=expr comment=((m_keyCount >= keyCount)==1 && (m_nextKeyCount > m_keyCount)==1) => 1 hier=std::semaphore__Vclpkg
-000000  point: type=expr comment=((m_nextKeyCount > m_keyCount)==0) => 0 hier=std::semaphore__Vclpkg
-000000  point: type=branch comment=if hier=std::semaphore__Vclpkg
+000175  point: type=branch comment=else hier=std::semaphore__Vclpkg
%000000         m_keyCount -= keyCount;
-000000  point: type=branch comment=if hier=std::semaphore__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=std::semaphore__Vclpkg
              end
 000175       ticket = m_nextTicket++;
+000175  point: type=line comment=block hier=std::semaphore__Vclpkg
 000175       wait (m_ticket == ticket);
+000175  point: type=line comment=block hier=std::semaphore__Vclpkg
 000175       m_nextKeyCount = keyCount;
+000175  point: type=line comment=block hier=std::semaphore__Vclpkg
 000175       wait (m_keyCount >= keyCount);
+000175  point: type=line comment=block hier=std::semaphore__Vclpkg
 000175       m_keyCount -= keyCount;
+000175  point: type=line comment=block hier=std::semaphore__Vclpkg
 000175       m_ticket++;
+000175  point: type=line comment=block hier=std::semaphore__Vclpkg
        `endif
            endtask
        
 000229     function int try_get(int keyCount = 1);
+000229  point: type=line comment=block hier=std::semaphore__Vclpkg
~000054       if (m_keyCount < keyCount) return 0;
-000000  point: type=branch comment=if hier=std::semaphore__Vclpkg
+000054  point: type=branch comment=else hier=std::semaphore__Vclpkg
 000229       m_keyCount -= keyCount;
+000229  point: type=line comment=block hier=std::semaphore__Vclpkg
 000229       return 1;
+000229  point: type=line comment=block hier=std::semaphore__Vclpkg
            endfunction
          endclass
        
          // IEEE 1800-specified standard "process"
 003062   class process;
+003062  point: type=line comment=block hier=std::process__Vclpkg
            typedef enum {
              FINISHED = 0,
              RUNNING = 1,
              WAITING = 2,
              SUSPENDED = 3,
              KILLED = 4
            } state;
        
            // Width visitor changes it to VlProcessRef
            // V3Name is hardcoded not to rename this variable
            protected chandle m_process;
        
 001865     static function process self();
+001865  point: type=line comment=block hier=std::process__Vclpkg
 001865       process p = new;
+001865  point: type=line comment=block hier=std::process__Vclpkg
        `ifdef VERILATOR_TIMING
 001865       $c(p.m_process, " = vlProcess;");
+001865  point: type=line comment=block hier=std::process__Vclpkg
        `endif
 001865       return p;
+001865  point: type=line comment=block hier=std::process__Vclpkg
            endfunction
        
 000014     protected function void set_status(state s);
+000014  point: type=line comment=block hier=std::process__Vclpkg
        `ifdef VERILATOR_TIMING
 000014       $c(m_process, "->state(", s, ");");
+000014  point: type=line comment=block hier=std::process__Vclpkg
        `endif
            endfunction
        
 000352     function state status();
+000352  point: type=line comment=block hier=std::process__Vclpkg
        `ifdef VERILATOR_TIMING
 000352       return state'($cpure(m_process, "->state()"));
+000352  point: type=line comment=block hier=std::process__Vclpkg
        `else
              return RUNNING;
        `endif
            endfunction
        
 000014     function void kill();
+000014  point: type=line comment=block hier=std::process__Vclpkg
 000014       set_status(KILLED);
+000014  point: type=line comment=block hier=std::process__Vclpkg
            endfunction
        
            function void suspend();
              $error("std::process::suspend() not supported");
            endfunction
        
%000000     function void resume();
-000000  point: type=line comment=block hier=std::process__Vclpkg
%000000       set_status(RUNNING);
-000000  point: type=line comment=block hier=std::process__Vclpkg
            endfunction
        
%000000     task await();
-000000  point: type=line comment=block hier=std::process__Vclpkg
        `ifdef VERILATOR_TIMING
%000000       wait (status() == FINISHED || status() == KILLED);
-000000  point: type=line comment=block hier=std::process__Vclpkg
-000000  point: type=expr comment=((status() == process::FINISHED)==0 && (status() == process::KILLED)==0) => 0 hier=std::process__Vclpkg
-000000  point: type=expr comment=((status() == process::FINISHED)==1) => 1 hier=std::process__Vclpkg
-000000  point: type=expr comment=((status() == process::KILLED)==1) => 1 hier=std::process__Vclpkg
        `endif
            endtask
        
%000000     static task killQueue(ref process processQueue[$]);
-000000  point: type=line comment=block hier=std::process__Vclpkg
        `ifdef VERILATOR_TIMING
%000000       repeat (processQueue.size()) begin
-000000  point: type=line comment=block hier=std::process__Vclpkg
-000000  point: type=line comment=block hier=std::process__Vclpkg
%000000         process p = processQueue.pop_front();
-000000  point: type=line comment=block hier=std::process__Vclpkg
%000000         if (p) p.kill();
-000000  point: type=branch comment=else hier=std::process__Vclpkg
-000000  point: type=branch comment=if hier=std::process__Vclpkg
              end
        `endif
            endtask
        
            // Two process references are equal if the different classes' containing
            // m_process are equal. Can't yet use <=> as the base class template
            // comparisons doesn't define <=> as they don't yet require --timing and C++20.
            // verilog_format: off
        `ifdef VERILATOR_TIMING
        `systemc_header_post
        template<> template<>
        inline bool VlClassRef<`systemc_class_name>::operator==(const VlClassRef<`systemc_class_name>& rhs) const {
            if (!m_objp && !rhs.m_objp) return true;
            if (!m_objp || !rhs.m_objp) return false;
            return m_objp->m_process == rhs.m_objp->m_process;
        };
        template<> template<>
        inline bool VlClassRef<`systemc_class_name>::operator!=(const VlClassRef<`systemc_class_name>& rhs) const {
            if (!m_objp && !rhs.m_objp) return false;
            if (!m_objp || !rhs.m_objp) return true;
            return m_objp->m_process != rhs.m_objp->m_process;
        };
        template<> template<>
        inline bool VlClassRef<`systemc_class_name>::operator<(const VlClassRef<`systemc_class_name>& rhs) const {
            if (!m_objp && !rhs.m_objp) return false;
            if (!m_objp || !rhs.m_objp) return false;
            return m_objp->m_process < rhs.m_objp->m_process;
        };
        `verilog
        `endif
            // verilog_format: on
        
%000000     function string get_randstate();
-000000  point: type=line comment=block hier=std::process__Vclpkg
              // Initialize with $c to ensure it won't be constified
%000000       string s = string'($c("0"));
-000000  point: type=line comment=block hier=std::process__Vclpkg
        
%000000       $c(s, " = ", m_process, "->randstate();");
-000000  point: type=line comment=block hier=std::process__Vclpkg
%000000       return s;
-000000  point: type=line comment=block hier=std::process__Vclpkg
            endfunction
        
%000000     function void set_randstate(string s);
-000000  point: type=line comment=block hier=std::process__Vclpkg
%000000       $c(m_process, "->randstate(", s, ");");
-000000  point: type=line comment=block hier=std::process__Vclpkg
            endfunction
          endclass
        
          // IEEE 1800-specified standard "std::randomize"
%000000   function int randomize();
-000000  point: type=line comment=block hier=std
%000000     randomize = 0;
-000000  point: type=line comment=block hier=std
          endfunction
        
          // IEEE 1800-2023 19.10 coverage option and type_options
          // IEEE does not define these as std:: structures but Verilator uses
          // them as such currently, so named with a unique prefix
          typedef struct {
            string name;
            int weight;
            int goal;
            string comment;
            int at_least;
            int auto_bin_max;
            int cross_num_print_missing;
            bit cross_retain_auto_bins;
            bit detect_overlap;
            bit per_instance;
            bit get_inst_coverage;
          } vl_covergroup_options_t;
        
          typedef struct {
            int weight;
            int goal;
            string comment;
            int at_least;
            int auto_bin_max;
            bit detect_overlap;
          } vl_coverpoint_options_t;
        
          typedef struct {
            int weight;
            int goal;
            string comment;
            int at_least;
            int cross_num_print_missing;
            bit cross_retain_auto_bins;
          } vl_cross_options_t;
        
          typedef struct {
            int weight;
            int goal;
            string comment;
            bit strobe;
            bit merge_instances;
            bit distribute_first;
            real real_interval;
          } vl_covergroup_type_options_t;
        
          typedef struct {
            int weight;
            int goal;
            string comment;
            real real_interval;
          } vl_coverpoint_type_options_t;
        
          typedef struct {
            int weight;
            int goal;
            string comment;
          } vl_cross_type_options_t;
        
        endpackage
        
        `endif  // Guard
        

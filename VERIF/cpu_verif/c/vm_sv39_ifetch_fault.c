/* vm_sv39_ifetch_fault.c - BP-DV-037: Sv39 instruction page fault only
 * (step 6 of vm_sv39.c), on both harts.
 *
 * S mode jumps to a page mapped readable but not executable. Expected: an
 * instruction page fault (mcause 12, mepc = mtval = 0x4000_1000), then the
 * handler's mret returns to M. Currently the fault is reported correctly
 * but the following mret continues at address 0 instead of mepc, so the
 * core never reports (BP036_TIMEOUT); see the Jira ticket.
 */
#define VM_STEPS (1u << 6)
#include "vm_sv39.c"

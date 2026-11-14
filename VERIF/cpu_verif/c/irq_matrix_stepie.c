/* irq_matrix_stepie.c - BP-DV-098: BP-DV-086 (c/irq_matrix.c) with
 * dcsr.stepie = 1: M / S interrupts taken while stepie is set
 * (bp_be_csr.sv 728). */
#define DCSR_STEPIE_ON 1
#include "irq_matrix.c"

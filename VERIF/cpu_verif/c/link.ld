/* link.ld - minimal bare-metal layout for BlackParrot DV C test cases */
ENTRY(_start)

SECTIONS
{
  . = 0x80000000;
  .text : {
    KEEP(*(.text.start))
    *(.text*)
  }
  .rodata : { *(.rodata*) }
  .data : { *(.data*) }
  .bss : { *(.bss*) *(COMMON) }
  _image_end = .;

  /* The stack (dual_core.h, top 0x8000_4000 by default) grows down towards
     the image: fail the link instead of letting it overwrite code / data.
     A larger program moves the stack (DUAL_CORE_STACK_BASE) and defines
     __stack_floor (e.g. .set __stack_floor, 0x8000F000 in its source). */
  ASSERT(_image_end <= (DEFINED(__stack_floor) ? __stack_floor : 0x80003000),
         "program image reaches the stack area: set DUAL_CORE_STACK_BASE and __stack_floor")

  /* BP-DV-017 shared-memory initialization.  Keeping this section at the
     runtime shared address makes the NBF preload the cache lines in DRAM. */
  .shared 0x80006000 : ALIGN(64) { KEEP(*(.shared)) }

  /* tohost lives at a fixed, separately-mapped uncached address; not part of
     the loaded image itself, just referenced by the C code via TOHOST_ADDR */
}

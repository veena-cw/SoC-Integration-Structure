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

  /* BP-DV-017 shared-memory initialization.  Keeping this section at the
     runtime shared address makes the NBF preload the cache lines in DRAM. */
  .shared 0x80006000 : ALIGN(64) { KEEP(*(.shared)) }

  /* tohost lives at a fixed, separately-mapped uncached address; not part of
     the loaded image itself, just referenced by the C code via TOHOST_ADDR */
}

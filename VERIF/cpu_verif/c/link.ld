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

  /* tohost lives at a fixed, separately-mapped uncached address; not part of
     the loaded image itself, just referenced by the C code via TOHOST_ADDR */
}

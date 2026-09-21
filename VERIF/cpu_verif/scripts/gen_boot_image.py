#!/usr/bin/env python3
"""
gen_boot_image.py

Converts a compiled RISC-V ELF (BP-DV-### test case) into the simplified
"<addr_hex> <data_hex>" boot image format read by tb/nbf_load_seq.sv.

This is a stand-in for BlackParrot's real bp_common/software/py/nbf.py, which
emits the full opcode-tagged NBF format (write/read/fence/finish) used by
bp_nonsynth_cfg_loader. Point nbf_load_seq.sv at nbf.py's output directly if
you're loading into the real DUT; this script exists so the standalone
package here has a working end-to-end flow with only objcopy as a dependency.

Usage:
    riscv64-unknown-elf-objcopy -O binary bp_dv_003_alu.elf bp_dv_003_alu.bin
    python3 gen_boot_image.py bp_dv_003_alu.bin 0x80000000 bp_dv_003_alu.nbf
"""
import sys

def main():
    if len(sys.argv) != 4:
        print(__doc__)
        sys.exit(1)

    bin_path, base_addr_str, out_path = sys.argv[1], sys.argv[2], sys.argv[3]
    base_addr = int(base_addr_str, 0)

    with open(bin_path, "rb") as f:
        data = f.read()

    # pad to 8-byte alignment
    if len(data) % 8:
        data += b"\x00" * (8 - (len(data) % 8))

    with open(out_path, "w") as out:
        for i in range(0, len(data), 8):
            word = int.from_bytes(data[i:i+8], byteorder="little")
            addr = base_addr + i
            out.write(f"{addr:016x} {word:016x}\n")

    print(f"wrote {len(data)//8} beats to {out_path}")

if __name__ == "__main__":
    main()

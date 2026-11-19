// rea decompile_all
// name: CRifle::DoReload
// address: 0x10065fe0
// body: available
// range: 0x10065fe0-0x1006618d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CRifle::DoReload(void) */

void __thiscall CRifle::DoReload(CRifle *this)

{
                    /* 0x65fe0  90  ?DoReload@CRifle@@QAEXXZ */
  if (((*(int *)(this + 0x1e4) < 5) && (this[0x105] == (CRifle)0x0)) &&
     (*(int *)(*(int *)(this + 0x160) + 0x2540 + *(int *)(this + 0x1dc) * 4) != 0)) {
    FUN_100ea240("rifle_reload_insert",0);
    *(float *)(*(int *)(this + 0x160) + 0x4f4) = *DAT_10223188 + 1.5;
    (**(code **)(*(int *)this + 0x198))(5,1,0);
    *(float *)(this + 0x1cc) = *DAT_10223188 + 0.83;
    *(float *)(this + 0x1d0) = *DAT_10223188 + 0.83;
    *(float *)(this + 0x1d4) = *DAT_10223188 + 0.83;
    *(float *)(this + 0x1d8) = *DAT_10223188 + 0.83;
    (**(code **)(*(int *)this + 8))(0x3e99999a);
    *(code **)(this + 0x78) = InsertBullet;
    return;
  }
  (**(code **)(*(int *)this + 0x198))(6,1,0);
  *(float *)(this + 0x1cc) = *DAT_10223188 + 0.66;
  *(float *)(this + 0x1d0) = *DAT_10223188 + 0.66;
  *(float *)(this + 0x1d4) = *DAT_10223188 + 0.66;
  *(float *)(this + 0x1d8) = *DAT_10223188 + 0.66;
  *(undefined2 *)(this + 0x104) = 0;
  FUN_100ea240("rifle_reload_end",0);
  return;
}


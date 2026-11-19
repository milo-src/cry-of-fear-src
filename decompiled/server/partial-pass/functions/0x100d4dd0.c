// rea decompile_all
// name: CFuncTrackChange::GoUp
// address: 0x100d4dd0
// body: available
// range: 0x100d4dd0-0x100d4e92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: virtual void __thiscall CFuncTrackChange::GoUp(void) */

void __thiscall CFuncTrackChange::GoUp(CFuncTrackChange *this)

{
  CFuncTrackChange *pCVar1;
  
                    /* 0xd4dd0  140  ?GoUp@CFuncTrackChange@@UAEXXZ */
  if (*(int *)(this + 0x1b8) != 1) {
    (**(code **)(*(int *)this + 0x134))(2);
    pCVar1 = this + 0x188;
    if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 0x10) == 0) {
      FUN_100d4d00();
      *(code **)(this + 0x154) = CFuncPlat::CallHitTop;
      FUN_100d7490(pCVar1,*(float *)(*(int *)(this + 4) + 0x104) -
                          *(float *)(*(int *)(this + 4) + 0x100));
    }
    else {
      *(undefined4 *)(this + 0x100) = 2;
      *(code **)(this + 0x154) = CFuncPlat::CallHitTop;
      FUN_10101b50(*(undefined4 *)pCVar1,*(undefined4 *)(this + 0x18c),*(undefined4 *)(this + 400),
                   *(undefined4 *)(*(int *)(this + 4) + 0x1fc));
    }
    if (*(int *)(this + 0x1b8) == 2) {
      FUN_100d8a60(pCVar1);
      *(undefined4 *)(*(int *)(this + 0x1a8) + 0xe0) = 0;
    }
  }
  return;
}


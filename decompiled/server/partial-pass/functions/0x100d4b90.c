// rea decompile_all
// name: CFuncTrackChange::GoDown
// address: 0x100d4b90
// body: available
// range: 0x100d4b90-0x100d4cfa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: virtual void __thiscall CFuncTrackChange::GoDown(void) */

void __thiscall CFuncTrackChange::GoDown(CFuncTrackChange *this)

{
  int iVar1;
  double dVar2;
  float fVar3;
  float fStack_18;
  float fStack_14;
  
                    /* 0xd4b90  139  ?GoDown@CFuncTrackChange@@UAEXXZ */
  if (*(int *)(this + 0x1b8) != 1) {
    (**(code **)(*(int *)this + 0x134))(3);
    if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 0x10) == 0) {
      FUN_100d4ac0();
      *(code **)(this + 0x154) = CFuncPlat::CallHitBottom;
      if (*(int *)(this + 0x14) == 0) {
        fVar3 = *(float *)(this + 0x160);
        fStack_14 = (float)((ulonglong)*(undefined8 *)(this + 0x158) >> 0x20);
        fStack_18 = (float)*(undefined8 *)(this + 0x158);
      }
      else {
        iVar1 = *(int *)(*(int *)(this + 0x14) + 4);
        fStack_18 = *(float *)(iVar1 + 8) + *(float *)(this + 0x158);
        fStack_14 = *(float *)(iVar1 + 0xc) + *(float *)(this + 0x15c);
        fVar3 = *(float *)(iVar1 + 0x10) + *(float *)(this + 0x160);
      }
      iVar1 = *(int *)(this + 4);
      fStack_14 = fStack_14 - *(float *)(iVar1 + 0xc);
      fStack_18 = fStack_18 - *(float *)(iVar1 + 8);
      fVar3 = fVar3 - *(float *)(iVar1 + 0x10);
      dVar2 = (double)(fStack_14 * fStack_14 + fStack_18 * fStack_18 + fVar3 * fVar3);
      if (dVar2 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar2 = SQRT(dVar2);
      }
      FUN_100d7490(this + 0x194,(float)dVar2 / *(float *)(this + 0x164));
    }
    else {
      *(code **)(this + 0x154) = CFuncPlat::CallHitBottom;
      *(undefined4 *)(this + 0x100) = 3;
      FUN_10101b50(*(undefined4 *)(this + 0x194),*(undefined4 *)(this + 0x198),
                   *(undefined4 *)(this + 0x19c),*(undefined4 *)(*(int *)(this + 4) + 0x1fc));
    }
    if (*(int *)(this + 0x1b8) == 2) {
      FUN_100d8a60(this + 0x194);
      *(undefined4 *)(*(int *)(this + 0x1a8) + 0xe0) = 0;
    }
  }
  return;
}


// rea decompile_all
// name: CDualWeaponRight::MeleeHitThinkNightStick
// address: 0x10038e10
// body: available
// range: 0x10038e10-0x10038e1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CDualWeaponRight::MeleeHitThinkNightStick(void) */

void __thiscall CDualWeaponRight::MeleeHitThinkNightStick(CDualWeaponRight *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  float fStack_5c;
  int iStack_3c;
  undefined1 auStack_10 [12];
  
                    /* 0x38e10  186  ?MeleeHitThinkNightStick@CDualWeaponRight@@QAEXXZ */
  piVar1 = *(int **)(this + 0xe8);
  if (piVar1 == (int *)0x0) {
    return;
  }
  FUN_100f5db0();
  FUN_10119320();
  (**(code **)(*piVar1 + 0x228))();
  FUN_1011a800();
  FUN_100f91b0();
  if (1.0 <= fStack_5c) {
    FUN_1011a7e0(auStack_10);
    if (1.0 <= fStack_5c) {
      return;
    }
    iVar3 = iStack_3c;
    if ((((iStack_3c == 0) && (iVar3 = (*DAT_1022305c)(), iVar3 == 0)) ||
        (*(int **)(iVar3 + 0x7c) == (int *)0x0)) ||
       (iVar3 = (**(code **)(**(int **)(iVar3 + 0x7c) + 0xc0))(), iVar3 != 0)) {
      FUN_100df820();
    }
  }
  if (fStack_5c < 1.0) {
    if (((iStack_3c != 0) || (iStack_3c = (*DAT_1022305c)(), iStack_3c != 0)) &&
       (piVar2 = *(int **)(iStack_3c + 0x7c), piVar2 != (int *)0x0)) {
      FUN_1011c070();
      (**(code **)(*piVar2 + 0x60))(piVar1[1],DAT_10226838);
      FUN_1011b8f0(piVar1[1],piVar1[1]);
      iVar3 = (**(code **)(*piVar2 + 0x50))();
      if ((iVar3 != 0) && (iVar3 = (**(code **)(*piVar2 + 0x50))(), iVar3 != 1)) {
        (*DAT_102230b0)();
        FUN_100fc9f0(*(undefined4 *)(piVar1[1] + 0x20c),1);
        FUN_10119de0();
        return;
      }
    }
    FUN_10119de0();
    (*DAT_102230b0)(0,1);
    FUN_100fc9f0(*(undefined4 *)(piVar1[1] + 0x20c),1);
  }
  return;
}


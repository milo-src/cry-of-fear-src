// rea decompile_all
// name: CDualWeapon::ReloadFinishLeft
// address: 0x10034b50
// body: available
// range: 0x10034b50-0x10034dc1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CDualWeapon::ReloadFinishLeft(void) */

void __thiscall CDualWeapon::ReloadFinishLeft(CDualWeapon *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
                    /* 0x34b50  240  ?ReloadFinishLeft@CDualWeapon@@QAEXXZ */
  iVar3 = *(int *)(this + 0x204);
  if (iVar3 == 3) {
    iVar2 = FUN_100dfe60("glock");
    iVar3 = *(int *)(this + 0x160);
    iVar4 = 0xf - *(int *)(iVar3 + 0x5dc);
    if (*(int *)(iVar3 + iVar2 * 4 + 0x2540) <= iVar4) {
      iVar4 = FUN_100dfe60("glock");
      iVar3 = *(int *)(this + 0x160);
      iVar4 = *(int *)(iVar3 + iVar4 * 4 + 0x2540);
    }
    *(int *)(iVar3 + 0x5dc) = *(int *)(iVar3 + 0x5dc) + iVar4;
    iVar3 = FUN_100dfe60("glock");
    piVar1 = (int *)(iVar3 * 4 + 0x2540 + *(int *)(this + 0x160));
    *piVar1 = *piVar1 - iVar4;
    FUN_100f5eb0();
    *(undefined4 *)(this + 0x1f0) = 0;
    FUN_10038f10(*(undefined4 *)(this + 0x160),6);
    pcVar5 = "weapons/glock/glock_magin.wav";
  }
  else if (iVar3 == 7) {
    iVar2 = FUN_100dfe60(&DAT_101adf40);
    iVar3 = *(int *)(this + 0x160);
    iVar4 = 8 - *(int *)(iVar3 + 0x5dc);
    if (*(int *)(iVar3 + iVar2 * 4 + 0x2540) <= iVar4) {
      iVar4 = FUN_100dfe60(&DAT_101adf40);
      iVar3 = *(int *)(this + 0x160);
      iVar4 = *(int *)(iVar3 + iVar4 * 4 + 0x2540);
    }
    *(int *)(iVar3 + 0x5dc) = *(int *)(iVar3 + 0x5dc) + iVar4;
    iVar3 = FUN_100dfe60(&DAT_101adf40);
    piVar1 = (int *)(iVar3 * 4 + 0x2540 + *(int *)(this + 0x160));
    *piVar1 = *piVar1 - iVar4;
    FUN_100f5eb0();
    *(undefined4 *)(this + 0x1f0) = 0;
    FUN_10038f10(*(undefined4 *)(this + 0x160),6);
    pcVar5 = "weapons/p345/p345_magin.wav";
  }
  else {
    if (iVar3 != 0x13) {
      return;
    }
    iVar2 = FUN_100dfe60(&DAT_101adf64);
    iVar3 = *(int *)(this + 0x160);
    iVar4 = 8 - *(int *)(iVar3 + 0x5dc);
    if (*(int *)(iVar3 + iVar2 * 4 + 0x2540) <= iVar4) {
      iVar4 = FUN_100dfe60(&DAT_101adf64);
      iVar3 = *(int *)(this + 0x160);
      iVar4 = *(int *)(iVar3 + iVar4 * 4 + 0x2540);
    }
    *(int *)(iVar3 + 0x5dc) = *(int *)(iVar3 + 0x5dc) + iVar4;
    iVar3 = FUN_100dfe60(&DAT_101adf64);
    piVar1 = (int *)(iVar3 * 4 + 0x2540 + *(int *)(this + 0x160));
    *piVar1 = *piVar1 - iVar4;
    FUN_100f5eb0();
    *(undefined4 *)(this + 0x1f0) = 0;
    FUN_10038f10(*(undefined4 *)(this + 0x160),1);
    pcVar5 = "weapons/vp70/vp70_magin.wav";
  }
  _DAT_102119bc = *DAT_10223188 + 1.0;
  *(float *)(this + 0x1d8) = _DAT_102119bc;
  *(float *)(this + 0x1cc) = _DAT_102119bc;
  FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),0,pcVar5,0x3f800000,0,0,100);
  return;
}


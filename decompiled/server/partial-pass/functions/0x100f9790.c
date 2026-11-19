// rea decompile_all
// name: CBasePlayer::WeaponMelee
// address: 0x100f9790
// body: available
// range: 0x100f9790-0x100f9ad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBasePlayer::WeaponMelee(void) */

void __thiscall CBasePlayer::WeaponMelee(CBasePlayer *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float local_5c;
  int local_3c;
  undefined1 local_10 [12];
  
                    /* 0xf9790  366  ?WeaponMelee@CBasePlayer@@QAEXXZ */
  if (*(int *)(this + 0x252c) != 0) {
    iVar2 = *(int *)(*(int *)(this + 0x252c) + 0x168);
    iVar3 = (int)_DAT_10226834;
    if ((iVar2 == 3) || (iVar2 != 10)) {
      FUN_100f5db0();
      FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c));
      FUN_100f91b0();
    }
    FUN_10119320();
    (**(code **)(*(int *)this + 0x228))();
    FUN_1011a800();
    if (1.0 <= local_5c) {
      FUN_1011a7e0(local_10);
      if (1.0 <= local_5c) {
        return;
      }
      iVar2 = local_3c;
      if ((((local_3c == 0) && (iVar2 = (*DAT_1022305c)(), iVar2 == 0)) ||
          (*(int **)(iVar2 + 0x7c) == (int *)0x0)) ||
         (iVar2 = (**(code **)(**(int **)(iVar2 + 0x7c) + 0xc0))(), iVar2 != 0)) {
        FUN_100df820();
      }
    }
    if (local_5c < 1.0) {
      if (((local_3c != 0) || (local_3c = (*DAT_1022305c)(), local_3c != 0)) &&
         (piVar1 = *(int **)(local_3c + 0x7c), piVar1 != (int *)0x0)) {
        FUN_1011c070();
        (**(code **)(*piVar1 + 0x60))(*(undefined4 *)(this + 4),(float)iVar3);
        FUN_1011b8f0(*(undefined4 *)(this + 4),*(undefined4 *)(this + 4));
        iVar2 = (**(code **)(*piVar1 + 0x50))();
        if ((iVar2 != 0) && (iVar2 = (**(code **)(*piVar1 + 0x50))(), iVar2 != 1)) {
          FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),0);
          FUN_10119de0();
          return;
        }
      }
      FUN_10119de0();
      FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),0);
    }
  }
  return;
}


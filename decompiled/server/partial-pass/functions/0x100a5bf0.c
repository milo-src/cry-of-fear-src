// rea decompile_all
// name: FUN_100a5bf0
// address: 0x100a5bf0
// body: available
// range: 0x100a5bf0-0x100a5eaa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a5bf0(int *param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  if (((((param_1 != (int *)0x0) && (iVar1 = (**(code **)(*param_1 + 0xd0))(), iVar1 != 0)) &&
       (*(undefined4 *)(*(int *)(in_ECX + 4) + 0x248) = 1, *(int *)(in_ECX + 0xdc) != 0)) &&
      ((*(int *)(in_ECX + 0xe0) != 0 && (iVar1 = *(int *)(*(int *)(in_ECX + 4) + 0x1d8), iVar1 != 0)
       ))) && ((piVar2 = (int *)FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + iVar1),
               piVar2 != (int *)0x0 && (iVar1 = (**(code **)(*piVar2 + 0xbc))(), iVar1 != 0)))) {
    if (((DAT_10222ee4 == (int *)0x0) || (iVar1 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar1 == 0)
        ) || (param_4 == 666.0)) {
      iVar1 = FUN_100125e0(param_1[1]);
      if (iVar1 != 0) {
        *(undefined1 *)((int)piVar2 + 10) = 1;
        *(undefined1 *)(iVar1 + 0x5f4) = 1;
        *(undefined4 *)(iVar1 + 0x5f8) = *(undefined4 *)(in_ECX + 0xdc);
        *(undefined4 *)(iVar1 + 0x5fc) = *(undefined4 *)(in_ECX + 0xe0);
        *(int *)(iVar1 + 0x600) = (int)*(float *)(piVar2[1] + 0x1b4);
        *(int *)(iVar1 + 0x604) = (int)*(float *)(piVar2[1] + 0x164);
        *(undefined4 *)(iVar1 + 0x608) = *(undefined4 *)(piVar2[1] + 0x1d0);
        (*DAT_10223000)(1,DAT_10226620,0,*(undefined4 *)(*(int *)(iVar1 + 4) + 0x20c));
        (*DAT_10223008)(1);
        (*DAT_10223020)(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar1 + 0x5f8));
        (*DAT_10223020)(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar1 + 0x5fc));
        (*DAT_10223010)(*(undefined4 *)(iVar1 + 0x604));
        (*DAT_10223010)(*(undefined4 *)(iVar1 + 0x600));
        (*DAT_10223004)();
      }
    }
    else {
      iVar1 = 1;
      if (0 < *(int *)(DAT_10223188 + 0x90)) {
        do {
          iVar3 = FUN_10119680(iVar1);
          if (iVar3 != 0) {
            *(undefined1 *)((int)piVar2 + 10) = 1;
            *(undefined1 *)(iVar3 + 0x5f4) = 1;
            *(undefined4 *)(iVar3 + 0x5f8) = *(undefined4 *)(in_ECX + 0xdc);
            *(undefined4 *)(iVar3 + 0x5fc) = *(undefined4 *)(in_ECX + 0xe0);
            *(int *)(iVar3 + 0x600) = (int)*(float *)(piVar2[1] + 0x1b4);
            *(int *)(iVar3 + 0x604) = (int)*(float *)(piVar2[1] + 0x164);
            *(undefined4 *)(iVar3 + 0x608) = *(undefined4 *)(piVar2[1] + 0x1d0);
            (*DAT_10223000)(1,DAT_10226620,0,*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
            (*DAT_10223008)(1);
            (*DAT_10223020)(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar3 + 0x5f8));
            (*DAT_10223020)(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar3 + 0x5fc));
            (*DAT_10223010)(*(undefined4 *)(iVar3 + 0x604));
            (*DAT_10223010)(*(undefined4 *)(iVar3 + 0x600));
            (*DAT_10223004)();
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 <= *(int *)(DAT_10223188 + 0x90));
        return;
      }
    }
  }
  return;
}


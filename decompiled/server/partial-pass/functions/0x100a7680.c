// rea decompile_all
// name: FUN_100a7680
// address: 0x100a7680
// body: available
// range: 0x100a7680-0x100a7905 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a7680(int *param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0xd0))();
  if (iVar1 == 0) {
    return;
  }
  if ((*(int *)(in_ECX + 0xf8) != 0) &&
     (piVar2 = (int *)FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xf8)),
     piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0xe8))(param_1,param_1,3,0);
  }
  if ((*(int *)(in_ECX + 0xdc) != 0) &&
     (piVar2 = (int *)FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xdc)),
     piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0xe8))(param_1,param_1,3,0);
  }
  if (*(int *)(in_ECX + 0xe0) == 0) {
    iVar1 = *(int *)(in_ECX + 0xe4);
    if (iVar1 == 0) {
      if (*(int *)(in_ECX + 0xe8) == 0) goto LAB_100a7799;
    }
    else {
LAB_100a775d:
      FUN_100e0a80(*(int *)(DAT_10223188 + 0x98) + iVar1,0,0);
    }
  }
  else {
    FUN_100e0a80(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xe0),0,0);
    iVar1 = *(int *)(in_ECX + 0xe4);
    if (iVar1 != 0) goto LAB_100a775d;
  }
  if (*(int *)(in_ECX + 0xe8) != 0) {
    FUN_100e0a80(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xe8),0,0);
  }
LAB_100a7799:
  if (*(int *)(in_ECX + 0xec) != 0) {
    iVar1 = FUN_100dad40(*(int *)(in_ECX + 0xec),0,0);
    if (iVar1 != 0) {
      return;
    }
    FUN_10119810(param_1,&DAT_101c4ad0,2,0);
    iVar1 = param_1[1];
    iVar1 = FUN_100179f0("item_key",*(undefined4 *)(in_ECX + 0xec),iVar1 + 8,iVar1 + 0x50,
                         *(undefined4 *)(iVar1 + 0x20c),0);
    if (iVar1 != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x1d8) = *(undefined4 *)(in_ECX + 0xec);
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x50) = 0;
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x58) = 0;
    }
  }
  if (*(int *)(in_ECX + 0xf0) != 0) {
    iVar1 = FUN_100dad40(*(int *)(in_ECX + 0xf0),0,0);
    if (iVar1 != 0) {
      return;
    }
    FUN_10119810(param_1,&DAT_101c4ad0,2,0);
    iVar1 = param_1[1];
    iVar1 = FUN_100179f0("item_key",*(undefined4 *)(in_ECX + 0xf0),iVar1 + 8,iVar1 + 0x50,
                         *(undefined4 *)(iVar1 + 0x20c),0);
    if (iVar1 != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x1d8) = *(undefined4 *)(in_ECX + 0xf0);
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x50) = 0;
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x58) = 0;
    }
  }
  if ((*(int *)(in_ECX + 0xf4) != 0) &&
     (iVar1 = FUN_100dad40(*(int *)(in_ECX + 0xf4),0,0), iVar1 == 0)) {
    FUN_10119810(param_1,&DAT_101c4ad0,2,0);
    iVar1 = param_1[1];
    iVar1 = FUN_100179f0("item_key",*(undefined4 *)(in_ECX + 0xf4),iVar1 + 8,iVar1 + 0x50,
                         *(undefined4 *)(iVar1 + 0x20c),0);
    if (iVar1 != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x1d8) = *(undefined4 *)(in_ECX + 0xf4);
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x50) = 0;
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x58) = 0;
    }
  }
  return;
}


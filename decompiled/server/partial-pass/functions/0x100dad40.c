// rea decompile_all
// name: FUN_100dad40
// address: 0x100dad40
// body: available
// range: 0x100dad40-0x100dad9c inclusive
// range: 0x100dada0-0x100daf01 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100dad40(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_ECX;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  if (param_1 == 0) {
    (*DAT_1022303c)(1,"ERROR: Missing name\n");
    return 0;
  }
  puVar8 = (undefined4 *)(in_ECX + 0x2200);
  iVar7 = 1;
  if (*(char *)(in_ECX + 0x1e9c) == '\0') {
    while (iVar2 = FUN_100e4ee0(*puVar8), iVar2 == 0) {
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 1;
      if (6 < iVar7) {
        return 0;
      }
    }
  }
  else {
    while (iVar2 = FUN_100e4ee0(*puVar8), iVar2 == 0) {
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 1;
      if (3 < iVar7) {
        return 0;
      }
    }
  }
  iVar2 = _strncmp((char *)(*(int *)(DAT_10223188 + 0x98) + param_3),"weapon_",7);
  if (iVar2 == 0) {
    iVar2 = FUN_100e2240(*(int *)(DAT_10223188 + 0x98) + param_1,0);
    if (iVar2 == 0) {
      *(int *)(in_ECX + 0x21fc + iVar7 * 4) = param_1;
      FUN_100e4360(iVar7,param_1,0);
    }
  }
  else {
    *(int *)(in_ECX + 0x21fc + iVar7 * 4) = param_1;
    FUN_100e4360(iVar7,param_1,0);
  }
  if (DAT_10226480 == 0) {
    FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),3,"weapons/item_get.wav",0x3f800000,
                 0x3f4ccccd,0,100);
  }
  if ((DAT_10222ee4 != (int *)0x0) && (iVar7 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar7 != 0)) {
    pcVar6 = "weapon_syringe";
    pbVar3 = (byte *)(*(int *)(DAT_10223188 + 0x98) + param_3);
    do {
      bVar1 = *pbVar3;
      bVar9 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_100daeb6:
        uVar4 = -(uint)bVar9 | 1;
        goto LAB_100daebb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar9 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_100daeb6;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_100daebb:
    if (uVar4 == 0) {
      (*DAT_10223000)(2,DAT_102266dc,0,0);
      uVar5 = (*DAT_10223064)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
      (*DAT_10223008)(uVar5);
      (*DAT_10223008)(1);
      (*DAT_10223004)();
    }
  }
  return 1;
}


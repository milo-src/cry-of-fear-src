// rea decompile_all
// name: FUN_100135e0
// address: 0x100135e0
// body: available
// range: 0x100135e0-0x100138f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100135e0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  char *pcVar8;
  bool bVar9;
  
  pcVar8 = "changetarget";
  pbVar2 = *(byte **)(param_1 + 4);
  pbVar4 = pbVar2;
  do {
    bVar1 = *pbVar4;
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10013615:
      uVar5 = -(uint)bVar9 | 1;
      goto LAB_1001361a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10013615;
    pbVar4 = pbVar4 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_1001361a:
  if (uVar5 == 0) {
    uVar6 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x1b0) = uVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = "locked_sound";
  pbVar4 = pbVar2;
  do {
    bVar1 = *pbVar4;
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10013665:
      uVar5 = -(uint)bVar9 | 1;
      goto LAB_1001366a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10013665;
    pbVar4 = pbVar4 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_1001366a:
  if (uVar5 == 0) {
    FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    uVar3 = FUN_1013e080();
    *(undefined1 *)(in_ECX + 0x1d8) = uVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = "locked_sentence";
  pbVar4 = pbVar2;
  do {
    bVar1 = *pbVar4;
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100136c0:
      uVar5 = -(uint)bVar9 | 1;
      goto LAB_100136c5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100136c0;
    pbVar4 = pbVar4 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_100136c5:
  if (uVar5 == 0) {
    FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    uVar3 = FUN_1013e080();
    *(undefined1 *)(in_ECX + 0x1d9) = uVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar7 = FUN_1000aba0(pbVar2,"unlocked_sound");
  if (iVar7 != 0) {
    FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    uVar3 = FUN_1013e080();
    *(undefined1 *)(in_ECX + 0x1da) = uVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar7 = FUN_1000aba0(pbVar2,"unlocked_sentence");
  if (iVar7 != 0) {
    FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    uVar3 = FUN_1013e080();
    *(undefined1 *)(in_ECX + 0x1db) = uVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar7 = FUN_1000aba0(pbVar2,"lockedby");
  if (iVar7 != 0) {
    uVar6 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x18c) = uVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar7 = FUN_1000aba0(pbVar2,"lockedmsg");
  if (iVar7 != 0) {
    uVar6 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 400) = uVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar7 = FUN_1000aba0(pbVar2,"lockedsnd");
  if (iVar7 != 0) {
    uVar6 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x194) = uVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar7 = FUN_1000aba0(pbVar2,"unlockedsnd");
  if (iVar7 != 0) {
    uVar6 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x198) = uVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar7 = FUN_1000aba0(pbVar2,"unlockedmsg");
  if (iVar7 != 0) {
    uVar6 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x19c) = uVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar7 = FUN_1000aba0(pbVar2,"propertarget");
  if (iVar7 != 0) {
    uVar6 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x1a4) = uVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar7 = FUN_1000aba0(pbVar2,"sounds");
  if (iVar7 != 0) {
    iVar7 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0x1dc) = iVar7;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar7 = FUN_1000aba0(pbVar2,"hide_use");
  if (iVar7 != 0) {
    iVar7 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0x1e0) = iVar7;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_10102480(param_1);
  return;
}


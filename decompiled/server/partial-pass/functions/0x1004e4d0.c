// rea decompile_all
// name: FUN_1004e4d0
// address: 0x1004e4d0
// body: available
// range: 0x1004e4d0-0x1004ed32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004e4d0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  char *pcVar7;
  bool bVar8;
  
  pcVar7 = "animation1";
  pbVar2 = *(byte **)(param_1 + 4);
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1004e505:
      uVar4 = -(uint)bVar8 | 1;
      goto LAB_1004e50a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1004e505;
    pbVar3 = pbVar3 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_1004e50a:
  if (uVar4 == 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x128) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  pcVar7 = "animation2";
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1004e560:
      uVar4 = -(uint)bVar8 | 1;
      goto LAB_1004e565;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1004e560;
    pbVar3 = pbVar3 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_1004e565:
  if (uVar4 == 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 300) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  pcVar7 = "animation3";
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1004e5b6:
      uVar4 = -(uint)bVar8 | 1;
      goto LAB_1004e5bb;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1004e5b6;
    pbVar3 = pbVar3 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_1004e5bb:
  if (uVar4 == 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x130) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation4");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x134) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation5");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x138) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation6");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x13c) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation7");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x140) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation8");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x144) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation9");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x148) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation10");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x14c) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation11");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x150) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation12");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x154) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation13");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x158) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation14");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x15c) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation15");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x160) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation16");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x164) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation17");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x168) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation18");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x16c) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation19");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x170) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation20");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x174) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation21");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x178) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation22");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x17c) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation23");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x180) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation24");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x184) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation25");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x188) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation26");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x18c) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation27");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 400) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation28");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x194) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation29");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x198) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"animation30");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x19c) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)(in_ECX + 0x1ac) = *(int *)(in_ECX + 0x1ac) + 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"customoff");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0xec) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"customon");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0xf0) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"customoffd");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0xf4) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"customond");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0xf8) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"descendoffset");
  if (iVar6 != 0) {
    iVar6 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0x118) = iVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"topent");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x10c) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"bottoment");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x110) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_1000dba0(param_1);
  return;
}


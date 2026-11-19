// rea decompile_all
// name: FUN_10096d30
// address: 0x10096d30
// body: available
// range: 0x10096d30-0x10097009 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10096d30(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  char *pcVar8;
  bool bVar9;
  double dVar10;
  
  pcVar8 = "m_dripSize";
  pbVar2 = *(byte **)(param_1 + 4);
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10096d65:
      uVar4 = -(uint)bVar9 | 1;
      goto LAB_10096d6a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10096d65;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_10096d6a:
  if (uVar4 == 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0xe8) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = "m_burstSize";
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10096db4:
      uVar4 = -(uint)bVar9 | 1;
      goto LAB_10096db9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10096db4;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_10096db9:
  if (uVar4 == 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0xf4) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = "m_dripSpeed";
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10096e03:
      uVar4 = -(uint)bVar9 | 1;
      goto LAB_10096e08;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10096e03;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_10096e08:
  if (uVar4 == 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    iVar6 = (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2;
    *(int *)(in_ECX + 0xec) = iVar5 - iVar6;
    *(int *)(in_ECX + 0xf0) = iVar6 + iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"m_brightness");
  if (iVar5 != 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0xf8) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"m_flUpdateTime");
  if (iVar5 != 0) {
    dVar10 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(in_ECX + 0x100) = (float)dVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"m_flMaxUpdateTime");
  if (iVar5 != 0) {
    dVar10 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(in_ECX + 0x104) = (float)dVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"pitch");
  if (iVar5 != 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0xfc) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"texture");
  if (iVar5 != 0) {
    uVar7 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0xe4) = uVar7;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"m_axis");
  if (iVar5 != 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0x108) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"m_iExtent");
  if (iVar5 != 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0x10c) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"m_fLifeTime");
  if (iVar5 != 0) {
    dVar10 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(in_ECX + 0x110) = (float)dVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"m_iNoise");
  if (iVar5 != 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0x114) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_1000dba0(param_1);
  return;
}


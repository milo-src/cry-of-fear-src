// rea decompile_all
// name: FUN_100975e0
// address: 0x100975e0
// body: available
// range: 0x100975e0-0x10097836 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100975e0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  double dVar10;
  
  pbVar8 = &DAT_101bfa10;
  pbVar2 = *(byte **)(param_1 + 4);
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_10097615:
      uVar4 = -(uint)bVar9 | 1;
      goto LAB_1009761a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_10097615;
    pbVar3 = pbVar3 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_1009761a:
  if (uVar4 == 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0xf0) = iVar5;
    *(int *)(in_ECX + 0xec) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = "m_flVelocity";
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10097670:
      uVar4 = -(uint)bVar9 | 1;
      goto LAB_10097675;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10097670;
    pbVar3 = pbVar3 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_10097675:
  if (uVar4 != 0) {
    pcVar7 = "m_flVariance";
    pbVar3 = pbVar2;
    do {
      bVar1 = *pbVar3;
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100976a4:
        uVar4 = -(uint)bVar9 | 1;
        goto LAB_100976a9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100976a4;
      pbVar3 = pbVar3 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_100976a9:
    if (uVar4 == 0) {
      dVar10 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
      *(float *)(in_ECX + 0xfc) = (float)dVar10;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    iVar5 = FUN_1000aba0(pbVar2,"m_flGibLife");
    if (iVar5 != 0) {
      dVar10 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
      *(float *)(in_ECX + 0x100) = (float)dVar10;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    iVar5 = FUN_1000aba0(pbVar2,"m_iszTargetName");
    if (iVar5 != 0) {
      uVar6 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
      *(undefined4 *)(in_ECX + 0x104) = uVar6;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    iVar5 = FUN_1000aba0(pbVar2,"m_iszPosition");
    if (iVar5 != 0) {
      uVar6 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
      *(undefined4 *)(in_ECX + 0x108) = uVar6;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    iVar5 = FUN_1000aba0(pbVar2,"m_iszVelocity");
    if (iVar5 != 0) {
      uVar6 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
      *(undefined4 *)(in_ECX + 0x10c) = uVar6;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    iVar5 = FUN_1000aba0(pbVar2,"m_iszVelFactor");
    if (iVar5 == 0) {
      iVar5 = FUN_1000aba0(pbVar2,"m_iszSpawnTarget");
      if (iVar5 != 0) {
        uVar6 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
        *(undefined4 *)(in_ECX + 0x114) = uVar6;
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
      iVar5 = FUN_1000aba0(pbVar2,"m_iBloodColor");
      if (iVar5 != 0) {
        iVar5 = _atoi(*(char **)(param_1 + 8));
        *(int *)(in_ECX + 0x118) = iVar5;
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
      FUN_101023c0(param_1);
      return;
    }
  }
  uVar6 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(in_ECX + 0x110) = uVar6;
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}


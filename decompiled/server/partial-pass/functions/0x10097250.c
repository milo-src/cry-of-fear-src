// rea decompile_all
// name: FUN_10097250
// address: 0x10097250
// body: available
// range: 0x10097250-0x100974e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10097250(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  byte *pbVar7;
  char *pcVar8;
  float *pfVar9;
  bool bVar10;
  double dVar11;
  
  pcVar8 = "shootmodel";
  pbVar2 = *(byte **)(param_1 + 4);
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10097288:
      uVar4 = -(uint)bVar10 | 1;
      goto LAB_1009728d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10097288;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_1009728d:
  if (uVar4 == 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0xb8) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = "shootsounds";
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100972e0:
      uVar4 = -(uint)bVar10 | 1;
      goto LAB_100972e5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100972e0;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_100972e5:
  if (uVar4 == 0) {
    iVar6 = _atoi(*(char **)(param_1 + 8));
    *(undefined4 *)(param_1 + 0xc) = 1;
    switch(iVar6) {
    case 0:
      *(undefined4 *)(in_ECX + 0xf4) = 0;
      return;
    case 1:
      *(undefined4 *)(in_ECX + 0xf4) = 1;
      return;
    case 2:
      *(undefined4 *)(in_ECX + 0xf4) = 2;
      return;
    case 3:
      *(undefined4 *)(in_ECX + 0xf4) = 3;
      return;
    case 4:
      *(undefined4 *)(in_ECX + 0xf4) = 8;
      return;
    default:
      *(undefined4 *)(in_ECX + 0xf4) = 9;
      return;
    }
  }
  pbVar7 = &DAT_101bfad4;
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar10 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_100973a4:
      uVar4 = -(uint)bVar10 | 1;
      goto LAB_100973a9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar10 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_100973a4;
    pbVar3 = pbVar3 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_100973a9:
  if (uVar4 == 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x11c) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"m_iszTouchOther");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x120) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"m_iPhysics");
  if (iVar6 != 0) {
    iVar6 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0x124) = iVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"m_fFriction");
  if (iVar6 == 0) {
    iVar6 = FUN_1000aba0(pbVar2,"m_vecSize");
    if (iVar6 == 0) {
      FUN_100975e0(param_1);
      return;
    }
    pfVar9 = (float *)(in_ECX + 300);
    FUN_1011a6c0(pfVar9,*(undefined4 *)(param_1 + 8));
    *(ulonglong *)pfVar9 = CONCAT44(*(float *)(in_ECX + 0x130) * 0.5,*pfVar9 * 0.5);
    *(float *)(in_ECX + 0x134) = *(float *)(in_ECX + 0x134) * 0.5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  dVar11 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
  *(float *)(in_ECX + 0x128) = (float)dVar11;
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}


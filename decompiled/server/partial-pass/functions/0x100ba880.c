// rea decompile_all
// name: FUN_100ba880
// address: 0x100ba880
// body: available
// range: 0x100ba880-0x100babc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100ba880(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  char *pcVar6;
  byte *pbVar7;
  bool bVar8;
  double dVar9;
  undefined1 local_18 [4];
  undefined1 local_14;
  undefined1 local_10;
  undefined1 local_c;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  pcVar6 = "channel";
  pbVar2 = *(byte **)(param_1 + 4);
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_100ba8c2:
      uVar4 = -(uint)bVar8 | 1;
      goto LAB_100ba8c7;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_100ba8c2;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_100ba8c7:
  if (uVar4 == 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0x104) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pbVar7 = &DAT_101c20d0;
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_100ba920:
      uVar4 = -(uint)bVar8 | 1;
      goto LAB_100ba925;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_100ba920;
    pbVar3 = pbVar3 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_100ba925:
  if (uVar4 == 0) {
    dVar9 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(in_ECX + 0xe0) = (float)dVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pbVar7 = &DAT_101d3df0;
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_100ba980:
      uVar4 = -(uint)bVar8 | 1;
      goto LAB_100ba985;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_100ba980;
    pbVar3 = pbVar3 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_100ba985:
  if (uVar4 == 0) {
    dVar9 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(in_ECX + 0xe4) = (float)dVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"effect");
  if (iVar5 != 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0xe8) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"color");
  if (iVar5 != 0) {
    FUN_1011a4f0(local_18,4,*(undefined4 *)(param_1 + 8));
    *(undefined1 *)(in_ECX + 0xec) = local_18[0];
    *(undefined1 *)(in_ECX + 0xed) = local_14;
    *(undefined1 *)(in_ECX + 0xee) = local_10;
    *(undefined1 *)(in_ECX + 0xef) = local_c;
    *(undefined4 *)(param_1 + 0xc) = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"color2");
  if (iVar5 != 0) {
    FUN_1011a4f0(local_18,4,*(undefined4 *)(param_1 + 8));
    *(undefined1 *)(in_ECX + 0xf0) = local_18[0];
    *(undefined1 *)(in_ECX + 0xf1) = local_14;
    *(undefined1 *)(in_ECX + 0xf2) = local_10;
    *(undefined1 *)(in_ECX + 0xf3) = local_c;
    *(undefined4 *)(param_1 + 0xc) = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"fadein");
  if (iVar5 != 0) {
    dVar9 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(in_ECX + 0xf4) = (float)dVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"fadeout");
  if (iVar5 != 0) {
    dVar9 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(in_ECX + 0xf8) = (float)dVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"holdtime");
  if (iVar5 != 0) {
    dVar9 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(in_ECX + 0xfc) = (float)dVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"fxtime");
  if (iVar5 != 0) {
    dVar9 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(in_ECX + 0x100) = (float)dVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_100babd0(param_1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


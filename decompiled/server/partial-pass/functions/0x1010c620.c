// rea decompile_all
// name: FUN_1010c620
// address: 0x1010c620
// body: available
// range: 0x1010c620-0x1010c92f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1010c620(int param_1)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  double dVar11;
  undefined1 local_88 [128];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  pbVar8 = &DAT_101d7e30;
  pbVar3 = *(byte **)(param_1 + 4);
  pbVar4 = pbVar3;
  do {
    bVar2 = *pbVar4;
    bVar10 = bVar2 < *pbVar8;
    if (bVar2 != *pbVar8) {
LAB_1010c665:
      uVar5 = -(uint)bVar10 | 1;
      goto LAB_1010c66a;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar10 = bVar2 < pbVar8[1];
    if (bVar2 != pbVar8[1]) goto LAB_1010c665;
    pbVar4 = pbVar4 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar2 != 0);
  uVar5 = 0;
LAB_1010c66a:
  if (uVar5 == 0) {
    dVar11 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(in_ECX + 0x16c) = (float)dVar11;
    *(undefined4 *)(param_1 + 0xc) = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pbVar8 = &DAT_101e0a10;
  pbVar4 = pbVar3;
  do {
    bVar2 = *pbVar4;
    bVar10 = bVar2 < *pbVar8;
    if (bVar2 != *pbVar8) {
LAB_1010c6c0:
      uVar5 = -(uint)bVar10 | 1;
      goto LAB_1010c6c5;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar10 = bVar2 < pbVar8[1];
    if (bVar2 != pbVar8[1]) goto LAB_1010c6c0;
    pbVar4 = pbVar4 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar2 != 0);
  uVar5 = 0;
LAB_1010c6c5:
  if (uVar5 == 0) {
    dVar11 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(in_ECX + 0x170) = (float)dVar11;
    *(undefined4 *)(param_1 + 0xc) = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pcVar9 = "master";
  pbVar4 = pbVar3;
  do {
    bVar2 = *pbVar4;
    bVar10 = bVar2 < (byte)*pcVar9;
    if (bVar2 != *pcVar9) {
LAB_1010c720:
      uVar5 = -(uint)bVar10 | 1;
      goto LAB_1010c725;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar10 = bVar2 < (byte)pcVar9[1];
    if (bVar2 != pcVar9[1]) goto LAB_1010c720;
    pbVar4 = pbVar4 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar2 != 0);
  uVar5 = 0;
LAB_1010c725:
  if (uVar5 == 0) {
    uVar6 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x174) = uVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar7 = FUN_1000aba0(pbVar3,"m_iszThreadName");
  if (iVar7 != 0) {
    uVar6 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x17c) = uVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar7 = FUN_1000aba0(pbVar3,"m_iszLocusThread");
  if (iVar7 != 0) {
    uVar6 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x180) = uVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar7 = FUN_1000aba0(pbVar3,&DAT_101e0a18);
  if (iVar7 == 0) {
    iVar7 = FUN_1000aba0(pbVar3,"triggerstate");
    if (iVar7 != 0) {
      iVar7 = _atoi(*(char **)(param_1 + 8));
      switch(iVar7) {
      case 1:
        *(undefined4 *)(in_ECX + 0x18c) = 1;
        break;
      case 2:
        *(undefined4 *)(in_ECX + 0x18c) = 0;
        break;
      case 3:
        *(undefined4 *)(in_ECX + 0x18c) = 4;
        break;
      case 4:
        puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x1a4);
        *puVar1 = *puVar1 | 0x40000000;
        break;
      default:
        *(undefined4 *)(in_ECX + 0x18c) = 3;
      }
      puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x1a4);
      *puVar1 = *puVar1 | 0x20000000;
      *(undefined4 *)(param_1 + 0xc) = 1;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (0xf < *(int *)(in_ECX + 0xe0)) {
      *(int *)(in_ECX + 0xe0) = *(int *)(in_ECX + 0xe0) + 1;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_1011a760(pbVar3,local_88);
    uVar6 = (*DAT_10223054)(local_88);
    *(undefined4 *)(in_ECX + 0xec + *(int *)(in_ECX + 0xe0) * 4) = uVar6;
    dVar11 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(in_ECX + 300 + *(int *)(in_ECX + 0xe0) * 4) = (float)dVar11;
    *(int *)(in_ECX + 0xe0) = *(int *)(in_ECX + 0xe0) + 1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar7 = _atoi(*(char **)(param_1 + 8));
  *(int *)(in_ECX + 0x178) = iVar7;
  *(undefined4 *)(param_1 + 0xc) = 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


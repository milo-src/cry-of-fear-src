// rea decompile_all
// name: FUN_10096230
// address: 0x10096230
// body: available
// range: 0x10096230-0x10096363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10096230(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int in_ECX;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  double dVar8;
  
  pbVar5 = &DAT_101c6690;
  pbVar6 = *(byte **)(param_1 + 4);
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_10096265:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1009626a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_10096265;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1009626a:
  if (uVar3 == 0) {
    dVar8 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(*(int *)(in_ECX + 4) + 600) = (float)dVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar4 = "zoomtime";
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_100962c1:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_100962c6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_100962c1;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_100962c6:
  if (uVar3 == 0) {
    dVar8 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(*(int *)(in_ECX + 4) + 0x25c) = (float)dVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar4 = "returntime";
  do {
    bVar1 = *pbVar6;
    bVar7 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_10096320:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_10096325;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar7 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_10096320;
    pbVar6 = pbVar6 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_10096325:
  if (uVar3 == 0) {
    dVar8 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(*(int *)(in_ECX + 4) + 0x260) = (float)dVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_1000dba0(param_1);
  return;
}


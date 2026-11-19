// rea decompile_all
// name: FUN_100d1fc0
// address: 0x100d1fc0
// body: available
// range: 0x100d1fc0-0x100d208e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100d1fc0(int param_1)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  char *pcVar5;
  int in_ECX;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  double dVar9;
  
  pbVar7 = &DAT_101d7e30;
  pbVar6 = *(byte **)(param_1 + 4);
  pbVar3 = pbVar6;
  do {
    bVar2 = *pbVar3;
    bVar8 = bVar2 < *pbVar7;
    if (bVar2 != *pbVar7) {
LAB_100d1ff5:
      uVar4 = -(uint)bVar8 | 1;
      goto LAB_100d1ffa;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar8 = bVar2 < pbVar7[1];
    if (bVar2 != pbVar7[1]) goto LAB_100d1ff5;
    pbVar3 = pbVar3 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar2 != 0);
  uVar4 = 0;
LAB_100d1ffa:
  if (uVar4 == 0) {
    dVar9 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(in_ECX + 0xdc) = (float)dVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar5 = "turnspeed";
  do {
    bVar2 = *pbVar6;
    bVar8 = bVar2 < (byte)*pcVar5;
    if (bVar2 != *pcVar5) {
LAB_100d2042:
      uVar4 = -(uint)bVar8 | 1;
      goto LAB_100d2047;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar8 = bVar2 < (byte)pcVar5[1];
    if (bVar2 != pcVar5[1]) goto LAB_100d2042;
    pbVar6 = pbVar6 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar2 != 0);
  uVar4 = 0;
LAB_100d2047:
  if (uVar4 == 0) {
    if (**(char **)(param_1 + 8) != '\0') {
      puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x1a4);
      *puVar1 = *puVar1 | 0x800000;
      FUN_1011a6c0(*(int *)(in_ECX + 4) + 0x5c,*(undefined4 *)(param_1 + 8));
    }
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_1000dba0(param_1);
  return;
}


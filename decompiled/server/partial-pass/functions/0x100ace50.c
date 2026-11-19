// rea decompile_all
// name: FUN_100ace50
// address: 0x100ace50
// body: available
// range: 0x100ace50-0x100ad005 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100ace50(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int in_ECX;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  pbVar8 = &DAT_101cb514;
  pbVar7 = *(byte **)(param_1 + 4);
  pbVar2 = pbVar7;
  do {
    bVar1 = *pbVar2;
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_100ace88:
      uVar3 = -(uint)bVar9 | 1;
      goto LAB_100ace8d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_100ace88;
    pbVar2 = pbVar2 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_100ace8d:
  if (uVar3 == 0) {
    iVar4 = _atoi(*(char **)(param_1 + 8));
    *(undefined4 *)(param_1 + 0xc) = 1;
    if (iVar4 == 0) {
      local_1c = 0x41000000;
      local_18 = 0x41000000;
      local_14 = 0x41000000;
      local_10 = 0xc1000000;
      local_c = 0xc1000000;
      local_8 = 0xc1000000;
    }
    else if (iVar4 == 2) {
      local_1c = 0x42000000;
      local_18 = 0x42000000;
      local_14 = 0x42100000;
      local_10 = 0xc2000000;
      local_c = 0xc2000000;
      local_8 = 0xc2100000;
    }
    else {
      if (iVar4 != 3) {
        local_10 = 0x41800000;
        local_c = 0x41800000;
        local_8 = 0x42100000;
        local_1c = 0xc1800000;
        local_18 = 0xc1800000;
        local_14 = 0xc2100000;
        FUN_1011a030(*(undefined4 *)(in_ECX + 4),&local_1c,&local_10);
        return;
      }
      local_1c = 0x41800000;
      local_18 = 0x41800000;
      local_14 = 0x41900000;
      local_10 = 0xc1800000;
      local_c = 0xc1800000;
      local_8 = 0xc1900000;
    }
    FUN_1011a030(*(undefined4 *)(in_ECX + 4),&local_10,&local_1c);
    return;
  }
  pcVar5 = "buoyancy";
  do {
    bVar1 = *pbVar7;
    bVar9 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_100acfc3:
      uVar3 = -(uint)bVar9 | 1;
      goto LAB_100acfc8;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar7[1];
    bVar9 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_100acfc3;
    pbVar7 = pbVar7 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_100acfc8:
  if (uVar3 == 0) {
    FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    uVar6 = FUN_1013df50();
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x110) = uVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_100acb90(param_1);
  return;
}


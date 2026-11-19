// rea decompile_all
// name: FUN_1005c420
// address: 0x1005c420
// body: available
// range: 0x1005c420-0x1005c582 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005c420(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  
  pbVar7 = &DAT_101b487c;
  pbVar8 = *(byte **)(param_1 + 4);
  pbVar2 = pbVar8;
  do {
    bVar1 = *pbVar2;
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_1005c455:
      uVar3 = -(uint)bVar9 | 1;
      goto LAB_1005c45a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar9 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_1005c455;
    pbVar2 = pbVar2 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1005c45a:
  if (uVar3 == 0) {
    iVar4 = _atoi(*(char **)(param_1 + 8));
    *(float *)(*(int *)(in_ECX + 4) + 0x164) = (float)iVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar6 = "movewith";
  pbVar2 = pbVar8;
  do {
    bVar1 = *pbVar2;
    bVar9 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1005c4b0:
      uVar3 = -(uint)bVar9 | 1;
      goto LAB_1005c4b5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar9 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1005c4b0;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1005c4b5:
  if (uVar3 == 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x18) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar6 = "skill";
  pbVar2 = pbVar8;
  do {
    bVar1 = *pbVar2;
    bVar9 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1005c500:
      uVar3 = -(uint)bVar9 | 1;
      goto LAB_1005c505;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar9 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1005c500;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1005c505:
  if (uVar3 == 0) {
    iVar4 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0x60) = iVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar6 = "style";
  do {
    bVar1 = *pbVar8;
    bVar9 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1005c550:
      uVar3 = -(uint)bVar9 | 1;
      goto LAB_1005c555;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar8[1];
    bVar9 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1005c550;
    pbVar8 = pbVar8 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1005c555:
  if (uVar3 == 0) {
    iVar4 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 100) = iVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// rea decompile_all
// name: FUN_1011dd70
// address: 0x1011dd70
// body: available
// range: 0x1011dd70-0x1011df62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1011dd70(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  
  pbVar7 = &DAT_101e6698;
  pbVar8 = *(byte **)(param_1 + 4);
  pbVar2 = pbVar8;
  do {
    bVar1 = *pbVar2;
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_1011dda5:
      uVar3 = -(uint)bVar9 | 1;
      goto LAB_1011ddaa;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar9 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_1011dda5;
    pbVar2 = pbVar2 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1011ddaa:
  if (uVar3 == 0) {
    uVar4 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x16c) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar6 = "customw";
  pbVar2 = pbVar8;
  do {
    bVar1 = *pbVar2;
    bVar9 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1011ddf5:
      uVar3 = -(uint)bVar9 | 1;
      goto LAB_1011ddfa;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar9 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1011ddf5;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1011ddfa:
  if (uVar3 == 0) {
    uVar4 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x170) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar6 = "customscript";
  pbVar2 = pbVar8;
  do {
    bVar1 = *pbVar2;
    bVar9 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1011de45:
      uVar3 = -(uint)bVar9 | 1;
      goto LAB_1011de4a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar9 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1011de45;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1011de4a:
  if (uVar3 == 0) {
    uVar4 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x174) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar6 = "movewith";
  pbVar2 = pbVar8;
  do {
    bVar1 = *pbVar2;
    bVar9 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1011de95:
      uVar3 = -(uint)bVar9 | 1;
      goto LAB_1011de9a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar9 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1011de95;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1011de9a:
  if (uVar3 == 0) {
    uVar4 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x18) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar6 = "skill";
  pbVar2 = pbVar8;
  do {
    bVar1 = *pbVar2;
    bVar9 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1011dee2:
      uVar3 = -(uint)bVar9 | 1;
      goto LAB_1011dee7;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar9 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1011dee2;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1011dee7:
  if (uVar3 == 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0x60) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar6 = "style";
  do {
    bVar1 = *pbVar8;
    bVar9 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1011df30:
      uVar3 = -(uint)bVar9 | 1;
      goto LAB_1011df35;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar8[1];
    bVar9 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1011df30;
    pbVar8 = pbVar8 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1011df35:
  if (uVar3 == 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 100) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


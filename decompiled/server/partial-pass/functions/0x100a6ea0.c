// rea decompile_all
// name: FUN_100a6ea0
// address: 0x100a6ea0
// body: available
// range: 0x100a6ea0-0x100a6fd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a6ea0(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  
  iVar2 = FUN_10118500(0,*(int *)(*(int *)(in_ECX + 4) + 0x1d8) + *(int *)(DAT_10223188 + 0x98),
                       param_1);
  if (iVar2 != 0) {
    pcVar7 = "inter_door";
    pbVar6 = (byte *)(*(int *)(DAT_10223188 + 0x98) + **(int **)(iVar2 + 4));
    do {
      bVar1 = *pbVar6;
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100a6f07:
        uVar3 = -(uint)bVar8 | 1;
        goto LAB_100a6f0c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100a6f07;
      pbVar6 = pbVar6 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_100a6f0c:
    if (uVar3 == 0) {
      iVar4 = FUN_10047f10(*(int **)(iVar2 + 4));
      iVar5 = FUN_10048540();
      if (iVar5 == 0) {
        *(int *)(iVar4 + 400) = (int)"somethinglocked" - *(int *)(DAT_10223188 + 0x98);
      }
      else {
        *(undefined4 *)(iVar4 + 400) = 0;
      }
    }
    pcVar7 = "func_button";
    pbVar6 = (byte *)(*(int *)(DAT_10223188 + 0x98) + **(int **)(iVar2 + 4));
    do {
      bVar1 = *pbVar6;
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100a6f80:
        uVar3 = -(uint)bVar8 | 1;
        goto LAB_100a6f85;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100a6f80;
      pbVar6 = pbVar6 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_100a6f85:
    if ((uVar3 == 0) && (iVar2 = FUN_10012580(*(int **)(iVar2 + 4)), iVar2 != 0)) {
      if (*(int *)(iVar2 + 0x18c) != 0) {
        *(undefined1 *)(iVar2 + 0x180) = 0;
        *(undefined4 *)(iVar2 + 0x18c) = 0;
        return;
      }
      *(int *)(iVar2 + 0x18c) = (int)"somethinglocked" - *(int *)(DAT_10223188 + 0x98);
      *(undefined1 *)(iVar2 + 0x180) = 1;
    }
  }
  return;
}


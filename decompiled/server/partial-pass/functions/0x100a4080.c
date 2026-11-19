// rea decompile_all
// name: FUN_100a4080
// address: 0x100a4080
// body: available
// range: 0x100a4080-0x100a41c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a4080(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  int in_ECX;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  bool bVar9;
  
  if ((param_1 != 0) && (iVar8 = 1, 0 < *(int *)(DAT_10223188 + 0x90))) {
    do {
      iVar2 = FUN_10119680(iVar8);
      if (iVar2 != 0) {
        *(undefined1 *)(iVar2 + 0x678) = 1;
        (*DAT_1022302c)("difficulty");
        uVar3 = FUN_1013df50();
        *(undefined4 *)(iVar2 + 0x67c) = uVar3;
        pcVar7 = "c_nightmare";
        pbVar6 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(DAT_10223188 + 0xc));
        pbVar4 = pbVar6;
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_100a4120:
            uVar5 = -(uint)bVar9 | 1;
            goto LAB_100a4125;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_100a4120;
          pbVar4 = pbVar4 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_100a4125:
        if (uVar5 == 0) {
LAB_100a4159:
          *(undefined1 *)(iVar2 + 0x679) = 1;
        }
        else {
          pcVar7 = "c_doc_city";
          do {
            bVar1 = *pbVar6;
            bVar9 = bVar1 < (byte)*pcVar7;
            if (bVar1 != *pcVar7) {
LAB_100a4150:
              uVar5 = -(uint)bVar9 | 1;
              goto LAB_100a4155;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar9 = bVar1 < (byte)pcVar7[1];
            if (bVar1 != pcVar7[1]) goto LAB_100a4150;
            pbVar6 = pbVar6 + 2;
            pcVar7 = pcVar7 + 2;
          } while (bVar1 != 0);
          uVar5 = 0;
LAB_100a4155:
          if (uVar5 == 0) goto LAB_100a4159;
        }
        (*DAT_1022302c)("cof_subtitlelanguage");
        uVar3 = FUN_1013df50();
        *(undefined4 *)(iVar2 + 0x684) = uVar3;
        if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) == 0) {
          *(undefined4 *)(*(int *)(iVar2 + 4) + 0x268) = 0;
        }
        else {
          *(undefined1 *)(iVar2 + 0x680) = 1;
          *(undefined4 *)(*(int *)(iVar2 + 4) + 0x268) = 0x3f800000;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 <= *(int *)(DAT_10223188 + 0x90));
  }
  return;
}


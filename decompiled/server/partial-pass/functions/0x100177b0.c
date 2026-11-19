// rea decompile_all
// name: FUN_100177b0
// address: 0x100177b0
// body: available
// range: 0x100177b0-0x1001790e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100177b0(void)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  
  if ((*(char *)(in_ECX + 10) != '\0') && (iVar8 = 1, 0 < *(int *)(DAT_10223188 + 0x90))) {
    do {
      piVar2 = (int *)FUN_10119680(iVar8);
      if ((piVar2 != (int *)0x0) &&
         ((iVar3 = (**(code **)(*piVar2 + 0xd0))(), iVar3 != 0 &&
          (iVar3 = FUN_100125e0(piVar2[1]), iVar3 != 0)))) {
        pbVar7 = (byte *)(*(int *)(iVar3 + 0x608) + *(int *)(DAT_10223188 + 0x98));
        pbVar4 = (byte *)(*(int *)(*(int *)(in_ECX + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98));
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_10017860:
            uVar5 = -(uint)bVar9 | 1;
            goto LAB_10017865;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_10017860;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_10017865:
        if (uVar5 == 0) {
          iVar6 = (int)*(float *)(*(int *)(in_ECX + 4) + 0x164);
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          *(int *)(iVar3 + 0x604) = iVar6;
          (*DAT_10223000)(1,DAT_10226620,0,*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
          (*DAT_10223008)(1);
          (*DAT_10223020)(*(int *)(iVar3 + 0x5f8) + *(int *)(DAT_10223188 + 0x98));
          (*DAT_10223020)(*(int *)(iVar3 + 0x5fc) + *(int *)(DAT_10223188 + 0x98));
          (*DAT_10223010)(*(undefined4 *)(iVar3 + 0x604));
          (*DAT_10223010)(*(undefined4 *)(iVar3 + 0x600));
          (*DAT_10223004)();
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 <= *(int *)(DAT_10223188 + 0x90));
  }
  return;
}


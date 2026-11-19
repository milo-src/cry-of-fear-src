// rea decompile_all
// name: FUN_10119900
// address: 0x10119900
// body: available
// range: 0x10119900-0x10119ac0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10119900(int param_1)

{
  uint *puVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  bool bVar10;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 10) != '\0') {
      *(undefined1 *)(param_1 + 10) = 0;
      iVar9 = 1;
      if (0 < *(int *)(DAT_10223188 + 0x90)) {
        do {
          piVar3 = (int *)FUN_10119680(iVar9);
          if (((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 0xd0))(), iVar4 != 0)) &&
             (iVar4 = FUN_100125e0(piVar3[1]), iVar4 != 0)) {
            pbVar8 = (byte *)(*(int *)(iVar4 + 0x608) + *(int *)(DAT_10223188 + 0x98));
            pbVar5 = (byte *)(*(int *)(*(int *)(param_1 + 4) + 0x1d0) +
                             *(int *)(DAT_10223188 + 0x98));
            do {
              bVar2 = *pbVar5;
              bVar10 = bVar2 < *pbVar8;
              if (bVar2 != *pbVar8) {
LAB_101199b0:
                uVar6 = -(uint)bVar10 | 1;
                goto LAB_101199b5;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar5[1];
              bVar10 = bVar2 < pbVar8[1];
              if (bVar2 != pbVar8[1]) goto LAB_101199b0;
              pbVar5 = pbVar5 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar2 != 0);
            uVar6 = 0;
LAB_101199b5:
            if (uVar6 == 0) {
              iVar7 = (int)*(float *)(*(int *)(param_1 + 4) + 0x164);
              *(undefined4 *)(iVar4 + 0x608) = 0;
              if (iVar7 < 0) {
                iVar7 = 0;
              }
              *(int *)(iVar4 + 0x604) = iVar7;
              (*DAT_10223000)(1,DAT_10226620,0,*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c));
              (*DAT_10223008)(2);
              (*DAT_10223020)(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar4 + 0x5f8));
              (*DAT_10223020)(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar4 + 0x5fc));
              (*DAT_10223010)(*(undefined4 *)(iVar4 + 0x604));
              (*DAT_10223010)(*(undefined4 *)(iVar4 + 0x600));
              (*DAT_10223004)();
              *(undefined1 *)(param_1 + 10) = 0;
              *(undefined1 *)(iVar4 + 0x5f4) = 0;
              *(undefined4 *)(iVar4 + 0x5f8) = 0;
              *(undefined4 *)(iVar4 + 0x5fc) = 0;
              *(undefined4 *)(iVar4 + 0x600) = 0;
              *(undefined4 *)(iVar4 + 0x604) = 0;
              *(undefined4 *)(iVar4 + 0x608) = 0;
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 <= *(int *)(DAT_10223188 + 0x90));
      }
    }
    FUN_10102c50();
    puVar1 = (uint *)(*(int *)(param_1 + 4) + 0x1a8);
    *puVar1 = *puVar1 | 0x40000000;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1d0) = 0;
  }
  return;
}


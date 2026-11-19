// rea decompile_all
// name: FUN_100a7480
// address: 0x100a7480
// body: available
// range: 0x100a7480-0x100a75a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a7480(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  bool bVar10;
  int local_c;
  
  iVar4 = FUN_10118460(0,"player");
  if ((iVar4 != 0) && (iVar4 = FUN_100125e0(*(undefined4 *)(iVar4 + 4)), iVar4 != 0)) {
    piVar5 = (int *)(iVar4 + 0x2514);
    local_c = 6;
    do {
      for (iVar2 = *piVar5; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x164)) {
        pcVar9 = "weapon_mobile";
        iVar3 = *(int *)(*(int *)(iVar2 + 4) + 0x20c);
        pbVar6 = (byte *)(*(int *)(-(uint)(iVar3 != 0) & iVar3 + 0x80U) +
                         *(int *)(DAT_10223188 + 0x98));
        do {
          bVar1 = *pbVar6;
          bVar10 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_100a7518:
            uVar7 = -(uint)bVar10 | 1;
            goto LAB_100a751d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar10 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_100a7518;
          pbVar6 = pbVar6 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_100a751d:
        if ((uVar7 == 0) &&
           (piVar8 = (int *)FUN_10052e30(*(int *)(iVar2 + 4)), piVar8 != (int *)0x0)) {
          *(undefined1 *)((int)piVar8 + 0x1f9) = 1;
          *(undefined4 *)(iVar4 + 0x1f14) = 1;
          FUN_1000eb40(1,7);
          FUN_1000eb40(2,1);
          (**(code **)(*piVar8 + 0x19c))(iVar4,*(undefined4 *)(piVar8[1] + 0x114));
          *(undefined4 *)(iVar4 + 0x5cc) = *(undefined4 *)(piVar8[1] + 0x114);
        }
      }
      piVar5 = piVar5 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}


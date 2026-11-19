// rea decompile_all
// name: FUN_100a6a60
// address: 0x100a6a60
// body: available
// range: 0x100a6a60-0x100a6b74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a6a60(void)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  int in_ECX;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  
  piVar4 = (int *)FUN_101186b0(0,*(int *)(in_ECX + 4) + 8,0x44800000);
  do {
    if (piVar4 == (int *)0x0) {
      return;
    }
    piVar2 = (int *)piVar4[1];
    if ((float)piVar2[0x5c] != 0.0) {
      pcVar7 = "monster_sewerboss";
      pbVar8 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *piVar2);
      pbVar5 = pbVar8;
      do {
        bVar1 = *pbVar5;
        bVar9 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_100a6ae0:
          uVar6 = -(uint)bVar9 | 1;
          goto LAB_100a6ae5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar9 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_100a6ae0;
        pbVar5 = pbVar5 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      uVar6 = 0;
LAB_100a6ae5:
      if (uVar6 != 0) {
        pcVar7 = "player";
        do {
          bVar1 = *pbVar8;
          bVar9 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_100a6b10:
            uVar6 = -(uint)bVar9 | 1;
            goto LAB_100a6b15;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar8[1];
          bVar9 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_100a6b10;
          pbVar8 = pbVar8 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        uVar6 = 0;
LAB_100a6b15:
        if (uVar6 != 0) goto LAB_100a6b44;
      }
      if (0 < piVar2[0x71]) {
        iVar3 = *(int *)(in_ECX + 4);
        (**(code **)(*piVar4 + 100))(iVar3,iVar3,*(undefined4 *)(iVar3 + 0x1e4),0x100);
      }
    }
LAB_100a6b44:
    piVar4 = (int *)FUN_101186b0(piVar4,*(int *)(in_ECX + 4) + 8,0x44800000);
  } while( true );
}


// rea decompile_all
// name: FUN_100fa990
// address: 0x100fa990
// body: available
// range: 0x100fa990-0x100faaf5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100fa990(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  
  iVar2 = FUN_10118590(0,(int)DAT_10223188[0x26] + *(int *)(*(int *)(in_ECX + 4) + 0x1d0));
  do {
    if (iVar2 == 0) {
      return;
    }
    pcVar7 = "scripted_sequence";
    pbVar8 = (byte *)((int)DAT_10223188[0x26] + **(int **)(iVar2 + 4));
    pbVar3 = pbVar8;
    do {
      bVar1 = *pbVar3;
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100faa07:
        uVar4 = -(uint)bVar9 | 1;
        goto LAB_100faa0c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100faa07;
      pbVar3 = pbVar3 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_100faa0c:
    if (uVar4 == 0) {
LAB_100faa42:
      iVar5 = FUN_100fa1a0(*(int **)(iVar2 + 4));
      if (param_1 == 0) {
        iVar6 = *(int *)(iVar5 + 0x3a8) + -1;
        *(int *)(iVar5 + 0x3a8) = iVar6;
        if (iVar6 < 1) {
          *(undefined4 *)(iVar5 + 0x368) = 2;
          FUN_10101ff0(*(int *)(in_ECX + 0x380) + (int)DAT_10223188[0x26],in_ECX,in_ECX,3,0);
          *(float *)(iVar5 + 0x3ac) = *DAT_10223188 + 0.05;
        }
      }
      else {
        *(int *)(iVar5 + 0x3a8) = *(int *)(iVar5 + 0x3a8) + 1;
      }
    }
    else {
      pcVar7 = "scripted_action";
      do {
        bVar1 = *pbVar8;
        bVar9 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_100faa35:
          uVar4 = -(uint)bVar9 | 1;
          goto LAB_100faa3a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar9 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_100faa35;
        pbVar8 = pbVar8 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_100faa3a:
      if (uVar4 == 0) goto LAB_100faa42;
    }
    iVar2 = FUN_10118590(iVar2,(int)DAT_10223188[0x26] + *(int *)(*(int *)(in_ECX + 4) + 0x1d0));
  } while( true );
}


// rea decompile_all
// name: FUN_100d1c10
// address: 0x100d1c10
// body: available
// range: 0x100d1c10-0x100d1cdd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100d1c10(void)

{
  byte bVar1;
  uint uVar2;
  int in_ECX;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  
  iVar5 = 0;
  pbVar4 = (byte *)(**(int **)(in_ECX + 4) + *(int *)(DAT_10223188 + 0x98));
  if (0 < DAT_10225980) {
    pbVar6 = &DAT_10225a30;
    pbVar3 = pbVar4;
    pbVar7 = pbVar6;
LAB_100d1c44:
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < *pbVar6;
      if (bVar1 == *pbVar6) {
        if (bVar1 != 0) {
          bVar1 = pbVar3[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_100d1c64;
          pbVar6 = pbVar6 + 2;
          pbVar3 = pbVar3 + 2;
          if (bVar1 != 0) goto LAB_100d1c44;
        }
        uVar2 = 0;
      }
      else {
LAB_100d1c64:
        uVar2 = -(uint)bVar8 | 1;
      }
      if (uVar2 == 0) {
        *(undefined1 **)(in_ECX + 0x1f8) = &DAT_10225a30 + iVar5 * 0xa4;
        break;
      }
      iVar5 = iVar5 + 1;
      pbVar6 = pbVar7 + 0xa4;
      pbVar3 = pbVar4;
      pbVar7 = pbVar6;
    } while (iVar5 < DAT_10225980);
  }
  if (*(int *)(in_ECX + 0x1f8) == 0) {
    (*DAT_1022303c)(1,&DAT_101b1774);
    (*DAT_1022303c)(1," * SetTablePointer error: cant find record for %s, using default\n",pbVar4);
    (*DAT_1022303c)(1,&DAT_101b1774);
    *(undefined **)(in_ECX + 0x1f8) = &DAT_10225988;
  }
  return;
}


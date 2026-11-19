// rea decompile_all
// name: FUN_100fc4d0
// address: 0x100fc4d0
// body: available
// range: 0x100fc4d0-0x100fc5f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100fc4d0(undefined4 param_1)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  byte *pbVar9;
  bool bVar10;
  
  pcVar4 = (char *)(*DAT_10223030)("map_trigger_ent");
  pcVar1 = pcVar4 + 1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  if (1 < (uint)((int)pcVar4 - (int)pcVar1)) {
    pbVar9 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(DAT_10223188 + 0xc));
    pbVar5 = (byte *)(*DAT_10223030)("map_trigger_ent_map");
    do {
      bVar3 = *pbVar5;
      bVar10 = bVar3 < *pbVar9;
      if (bVar3 != *pbVar9) {
LAB_100fc537:
        uVar6 = -(uint)bVar10 | 1;
        goto LAB_100fc53c;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar5[1];
      bVar10 = bVar3 < pbVar9[1];
      if (bVar3 != pbVar9[1]) goto LAB_100fc537;
      pbVar5 = pbVar5 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar3 != 0);
    uVar6 = 0;
LAB_100fc53c:
    if (uVar6 == 0) {
      uVar7 = (*DAT_10223030)("map_trigger_ent");
      for (piVar8 = (int *)FUN_10118590(0,uVar7); piVar8 != (int *)0x0;
          piVar8 = (int *)FUN_10118590(piVar8,uVar7)) {
        (**(code **)(*piVar8 + 0xe8))(param_1,param_1,3,0);
        uVar7 = (*DAT_10223030)("map_trigger_ent");
      }
      (*DAT_10223038)("map_trigger_ent",&DAT_101a2496);
      (*DAT_10223038)("map_trigger_ent_map",&DAT_101a2496);
    }
  }
  for (piVar8 = (int *)FUN_10118460(0,"game_player_equip"); piVar8 != (int *)0x0;
      piVar8 = (int *)FUN_10118460(piVar8,"game_player_equip")) {
    (**(code **)(*piVar8 + 0xe4))(param_1);
  }
  return;
}


// rea decompile_all
// name: FUN_10100bd0
// address: 0x10100bd0
// body: available
// range: 0x10100ae0-0x10100bc1 inclusive
// range: 0x10100bd0-0x10100c13 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10100bd0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = *(int *)(in_ECX + 4);
  if ((*(uint *)(iVar2 + 0x1a8) & 0x4000000) == 0) {
    *(undefined4 *)(iVar2 + 0x1a8) = 0x4000000;
    iVar2 = *(int *)(in_ECX + 4);
  }
  *(undefined4 *)(iVar2 + 0x10c) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x108) = 8;
  if (*(int *)(*(int *)(in_ECX + 4) + 0x188) != 0) {
    if (*(int *)(*(int *)(in_ECX + 4) + 0x188) != 1) {
      (*DAT_1022303c)(1,"Unknown spectator impulse\n");
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x188) = 0;
      return;
    }
    if (DAT_10230d74 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(DAT_10230d74 + 0x7c);
    }
    iVar1 = FUN_10118460(iVar2,"info_player_deathmatch");
    while( true ) {
      if (iVar1 == iVar2) {
        (*DAT_1022303c)(1,"Could not find a spawn spot.\n");
        *(undefined4 *)(*(int *)(in_ECX + 4) + 0x188) = 0;
        return;
      }
      if (iVar1 != 0) break;
      iVar1 = FUN_10118460(0,"info_player_deathmatch");
    }
    DAT_10230d74 = *(int *)(*(int *)(iVar1 + 4) + 0x20c);
    FUN_10119fe0();
    iVar1 = DAT_10230d74;
    iVar2 = *(int *)(in_ECX + 4);
    *(undefined8 *)(iVar2 + 0x50) = *(undefined8 *)(DAT_10230d74 + 0xd0);
    *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(iVar1 + 0xd8);
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0xa0) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x188) = 0;
    return;
  }
  return;
}


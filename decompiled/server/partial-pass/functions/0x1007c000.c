// rea decompile_all
// name: FUN_1007c000
// address: 0x1007c000
// body: available
// range: 0x1007c000-0x1007c095 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007c000(void)

{
  int iVar1;
  char *pcVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar2 = "models/taller.mdl";
  }
  else {
    pcVar2 = (char *)(*(int *)(DAT_10223188 + 0x98) + iVar1);
  }
  FUN_10116990(pcVar2);
  FUN_10116a30(PTR_s_taller_taller_player_punch_wav_101bbecf_1_10212f00);
  FUN_10116a30(PTR_s_taller_taller_wall_punch_wav_10212f04);
  FUN_10116a30(PTR_s_taller_taller_swing_wav_10212f08);
  FUN_10116a30(PTR_s_taller_taller_pain_wav_10212ef4);
  FUN_10116a30(PTR_s_taller_taller_alert_wav_10212ef8);
  FUN_10116a30(PTR_s_taller_taller_pain_wav_10212efc);
  FUN_10116a30(PTR_s_taller_taller_die_wav_10212f0c);
  FUN_10116a30("taller/taller_stamp.wav");
  FUN_10116a30("taller/taller_player_impact.wav");
  FUN_10116a30("taller/taller_step.wav");
  return;
}


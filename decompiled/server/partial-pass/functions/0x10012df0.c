// rea decompile_all
// name: FUN_10012df0
// address: 0x10012df0
// body: available
// range: 0x10012df0-0x10012e91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_10012df0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "common/null.wav";
  case 1:
    return "buttons/button1.wav";
  case 2:
    return "buttons/button2.wav";
  case 3:
    return "buttons/button3.wav";
  case 4:
    return "buttons/button4.wav";
  case 5:
    return "buttons/button5.wav";
  case 6:
    return "buttons/button6.wav";
  case 7:
    return "buttons/button7.wav";
  case 8:
    return "buttons/button8.wav";
  default:
    return "buttons/button9.wav";
  case 10:
    return "buttons/button10.wav";
  case 0xb:
    return "buttons/button11.wav";
  case 0xc:
    return "buttons/latchlocked1.wav";
  case 0xd:
    return "buttons/latchunlocked1.wav";
  case 0xe:
    return "buttons/lightswitch2.wav";
  case 0x15:
    return "buttons/lever1.wav";
  case 0x16:
    return "buttons/lever2.wav";
  case 0x17:
    return "buttons/lever3.wav";
  case 0x18:
    return "buttons/lever4.wav";
  case 0x19:
    return "buttons/lever5.wav";
  }
}


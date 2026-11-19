// rea decompile_all
// name: FUN_10077d90
// address: 0x10077d90
// body: available
// range: 0x10077d90-0x10077e3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10077d90(int *param_1)

{
  int iVar1;
  int in_ECX;
  char *pcVar2;
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  if (*param_1 != 1) {
    FUN_100bf310(param_1);
    return;
  }
  FUN_10077e40();
  FUN_1000e7c0(0,local_1c,local_10);
  iVar1 = (*DAT_102230b0)(0xfffffffb,5);
  pcVar2 = "weapons/glock/glock_fire.wav";
  if (*(int *)(*(int *)(in_ECX + 4) + 0x248) != 0) {
    pcVar2 = "weapons/p345/p345_fire.wav";
  }
  FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),1,pcVar2,0x3f800000,0x3f4ccccd,0,
               iVar1 + 100);
  *(float *)(in_ECX + 0x368) = *DAT_10223188 + 0.1;
  return;
}


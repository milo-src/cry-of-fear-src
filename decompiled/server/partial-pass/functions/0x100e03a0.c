// rea decompile_all
// name: FUN_100e03a0
// address: 0x100e03a0
// body: available
// range: 0x100e03a0-0x100e047a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100e03a0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x398) != '\0') {
    return 0xffffffff;
  }
  switch(*(undefined4 *)(*(int *)(in_ECX + 0x252c) + 0x168)) {
  case 2:
  case 0x16:
    uVar1 = FUN_1000e9b0("radio_idle");
    return uVar1;
  case 3:
  case 7:
  case 0x15:
    uVar1 = FUN_1000e9b0("pistol_idle");
    return uVar1;
  case 4:
    uVar1 = FUN_1000e9b0("shotgun_idle");
    return uVar1;
  default:
    uVar1 = FUN_1000e9b0(&DAT_101aa610);
    return uVar1;
  case 6:
    uVar1 = FUN_1000e9b0("switchblade_idle");
    return uVar1;
  case 8:
    uVar1 = FUN_1000e9b0("syringe_idle");
    return uVar1;
  case 9:
  case 0x1a:
    uVar1 = FUN_1000e9b0("m16_idle");
    return uVar1;
  case 10:
  case 0x10:
    uVar1 = FUN_1000e9b0("branch_idle");
    return uVar1;
  case 0xb:
    uVar1 = FUN_1000e9b0("rifle_idle");
    return uVar1;
  case 0xc:
    uVar1 = FUN_1000e9b0("nightstick_idle");
    return uVar1;
  case 0xe:
    uVar1 = FUN_1000e9b0("tmp_idle");
    return uVar1;
  case 0x12:
    uVar1 = FUN_1000e9b0("sledgehammer_idle");
    return uVar1;
  case 0x13:
    uVar1 = FUN_1000e9b0("vp70_idle");
    return uVar1;
  case 0x1b:
    uVar1 = FUN_1000e9b0("mp5_idle");
    return uVar1;
  }
}


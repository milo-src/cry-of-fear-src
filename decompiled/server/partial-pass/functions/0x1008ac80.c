// rea decompile_all
// name: FUN_1008ac80
// address: 0x1008ac80
// body: available
// range: 0x1008ac80-0x1008ad7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1008ac80(undefined4 param_1)

{
  int *in_ECX;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  *(undefined4 *)(in_ECX[1] + 0x108) = 10;
  *(undefined4 *)(in_ECX[1] + 0x120) = 0x3f0ccccd;
  *(undefined4 *)(in_ECX[1] + 0x150) = 0x437f0000;
  *(undefined4 *)(in_ECX[1] + 0x14c) = 0;
  *(undefined4 *)(in_ECX[1] + 0x160) = 0;
  *(undefined4 *)(in_ECX[1] + 0x10c) = 1;
  *(int *)in_ECX[1] = (int)&DAT_101bece8 - *(int *)(DAT_10223188 + 0x98);
  (*DAT_10222f50)(*(undefined4 *)(in_ECX[1] + 0x20c),param_1);
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_1011a030(in_ECX[1],&local_1c,&local_10);
  (**(code **)(*in_ECX + 8))(0x40800000);
  in_ECX[0x3a] = 0x41c80000;
  in_ECX[0x1e] = (int)CGib::WaitTillLand;
  in_ECX[0x1f] = (int)CGib::BounceGibTouch;
  in_ECX[0x39] = 9;
  in_ECX[0x38] = 5;
  return;
}


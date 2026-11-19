// rea decompile_all
// name: FUN_1004a5e0
// address: 0x1004a5e0
// body: available
// range: 0x1004a5e0-0x1004a65a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ios_base * FUN_1004a5e0(byte param_1)

{
  ios_base *piVar1;
  uint uVar2;
  ios_base *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1019da60;
  local_10 = ExceptionList;
  uVar2 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = in_ECX + -8;
  *(undefined ***)(in_ECX + *(int *)(*(int *)(in_ECX + -8) + 4) + -8) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)(in_ECX + *(int *)(*(int *)piVar1 + 4) + -0xc) = *(int *)(*(int *)piVar1 + 4) + -8;
  local_8 = 0;
  *(undefined ***)in_ECX = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor(in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_1013dba5(piVar1,0x50,uVar2);
  }
  ExceptionList = local_10;
  return piVar1;
}


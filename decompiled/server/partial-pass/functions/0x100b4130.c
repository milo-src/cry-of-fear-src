// rea decompile_all
// name: FUN_100b4130
// address: 0x100b4130
// body: available
// range: 0x100b4130-0x100b41ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100b4130(void)

{
  uint uVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined1 local_c [4];
  float local_8;
  
  uVar1 = *(int *)(in_ECX[1] + 300) + 1U & 0x80000007;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
  }
  *(uint *)(in_ECX[1] + 300) = uVar1;
  *(int *)(in_ECX[1] + 0xb4) = in_ECX[0x7f];
  uVar2 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c));
  FUN_1000f290(uVar2,in_ECX[1],&local_8,local_c);
  *(undefined4 *)(in_ECX[1] + 0xb4) = 0;
  if (local_8 == 0.0) {
    *(undefined4 *)(in_ECX[1] + 300) = 0;
  }
  (**(code **)(*in_ECX + 0x198))(*(undefined4 *)(in_ECX[1] + 300),1,0);
  in_ECX[0x74] = (int)(*DAT_10223188 + 0.3);
  return;
}


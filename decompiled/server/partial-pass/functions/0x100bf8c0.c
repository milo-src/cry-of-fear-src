// rea decompile_all
// name: FUN_100bf8c0
// address: 0x100bf8c0
// body: available
// range: 0x100bf8c0-0x100bf96d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100bf8c0(undefined8 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 700);
  uVar2 = *(uint *)(in_ECX + 0x244 + iVar1 * 0x10);
  *(undefined4 *)(in_ECX + 0x2a8) = *(undefined4 *)(in_ECX + 0x298);
  *(undefined4 *)(in_ECX + 0x2ac) = *(undefined4 *)(in_ECX + 0x29c);
  *(undefined4 *)(in_ECX + 0x2b0) = *(undefined4 *)(in_ECX + 0x2a0);
  *(undefined4 *)(in_ECX + 0x2b4) = *(undefined4 *)(in_ECX + 0x2a4);
  *(undefined4 *)(in_ECX + 0x298) = *(undefined4 *)(in_ECX + 0x288);
  *(undefined4 *)(in_ECX + 0x29c) = *(undefined4 *)(in_ECX + 0x28c);
  *(undefined4 *)(in_ECX + 0x2a0) = *(undefined4 *)(in_ECX + 0x290);
  *(undefined4 *)(in_ECX + 0x2a4) = *(undefined4 *)(in_ECX + 0x294);
  *(undefined4 *)(in_ECX + 0x288) = *(undefined4 *)(in_ECX + 0x278);
  *(undefined4 *)(in_ECX + 0x28c) = *(undefined4 *)(in_ECX + 0x27c);
  *(undefined4 *)(in_ECX + 0x290) = *(undefined4 *)(in_ECX + 0x280);
  *(undefined4 *)(in_ECX + 0x294) = *(undefined4 *)(in_ECX + 0x284);
  *(undefined4 *)(in_ECX + 0x278) = *(undefined4 *)(in_ECX + 0x268);
  *(undefined4 *)(in_ECX + 0x27c) = *(undefined4 *)(in_ECX + 0x26c);
  *(undefined4 *)(in_ECX + 0x280) = *(undefined4 *)(in_ECX + 0x270);
  *(undefined4 *)(in_ECX + 0x284) = *(undefined4 *)(in_ECX + 0x274);
  *(undefined4 *)(in_ECX + 0x268) = *(undefined4 *)(in_ECX + 600);
  *(undefined4 *)(in_ECX + 0x26c) = *(undefined4 *)(in_ECX + 0x25c);
  *(undefined4 *)(in_ECX + 0x270) = *(undefined4 *)(in_ECX + 0x260);
  *(undefined4 *)(in_ECX + 0x274) = *(undefined4 *)(in_ECX + 0x264);
  *(undefined4 *)(in_ECX + 600) = *(undefined4 *)(in_ECX + 0x248);
  *(undefined4 *)(in_ECX + 0x25c) = *(undefined4 *)(in_ECX + 0x24c);
  *(undefined4 *)(in_ECX + 0x260) = *(undefined4 *)(in_ECX + 0x250);
  *(undefined4 *)(in_ECX + 0x264) = *(undefined4 *)(in_ECX + 0x254);
  *(undefined4 *)(in_ECX + 0x248) = *(undefined4 *)(in_ECX + 0x238);
  *(undefined4 *)(in_ECX + 0x24c) = *(undefined4 *)(in_ECX + 0x23c);
  *(undefined4 *)(in_ECX + 0x250) = *(undefined4 *)(in_ECX + 0x240);
  *(undefined4 *)(in_ECX + 0x254) = *(undefined4 *)(in_ECX + 0x244);
  *(undefined8 *)(in_ECX + 0x238 + iVar1 * 0x10) = param_1;
  *(undefined4 *)(in_ECX + 0x240 + iVar1 * 0x10) = param_2;
  *(uint *)(in_ECX + 0x244 + *(int *)(in_ECX + 700) * 0x10) = uVar2 & 0xfffffe7f | param_3;
  return;
}


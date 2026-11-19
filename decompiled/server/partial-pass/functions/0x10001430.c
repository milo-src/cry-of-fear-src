// rea decompile_all
// name: FUN_10001430
// address: 0x10001430
// body: available
// range: 0x10001430-0x100014aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10001430(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar2 = (*DAT_10223064)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
    param_1 = (*DAT_10223064)(*(undefined4 *)(*(int *)(param_2 + 4) + 0x20c));
    iVar2 = iVar2 + -1;
    iVar1 = param_1 - 1;
    if ((-1 < iVar2) &&
       (((param_1 = *(uint *)(in_ECX + 0x14), iVar2 < (int)param_1 && (-1 < iVar1)) &&
        (iVar1 < (int)param_1)))) {
      uVar3 = 1 << ((byte)iVar1 & 0x1f);
      return CONCAT31((int3)(uVar3 >> 8),((&DAT_10220ac0)[(iVar1 >> 5) + iVar2] & uVar3) != 0);
    }
  }
  return param_1 & 0xffffff00;
}


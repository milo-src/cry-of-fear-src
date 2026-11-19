// rea decompile_all
// name: ___iscsymf
// address: 0x1016c1b0
// body: available
// range: 0x1016c1b0-0x1016c246 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___iscsymf
   
   Library: Visual Studio 2019 Release */

int __cdecl ___iscsymf(int _C)

{
  uint uVar1;
  int iVar2;
  int *local_8;
  
  if (DAT_10232e78 == 0) {
    if (_C + 1U < 0x101) {
      uVar1 = *(ushort *)(PTR_DAT_1021bc80 + _C * 2) & 0x103;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    iVar2 = FUN_1017e87d();
    local_8 = *(int **)(iVar2 + 0x4c);
    ___acrt_update_locale_info(iVar2,&local_8);
    if (_C + 1U < 0x101) {
      uVar1 = *(ushort *)(*local_8 + _C * 2) & 0x103;
    }
    else {
      if (local_8[1] < 2) goto LAB_1016c22f;
      uVar1 = __isctype_l(_C,0x103,(_locale_t)0x0);
    }
  }
  if (uVar1 != 0) {
    return 1;
  }
LAB_1016c22f:
  if (_C == 0x5f) {
    return 1;
  }
  return 0;
}


// rea decompile_all
// name: ___iscsym
// address: 0x1016c140
// body: available
// range: 0x1016c140-0x1016c1a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___iscsym
   
   Library: Visual Studio 2019 Release */

int __cdecl ___iscsym(int _C)

{
  ushort uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *local_8;
  
  if (DAT_10232e78 == 0) {
    puVar3 = PTR_DAT_1021bc80;
    if (0xff < (_C & 0xffU)) {
      uVar1 = 0;
      goto LAB_1016c190;
    }
  }
  else {
    iVar2 = FUN_1017e87d();
    local_8 = *(undefined4 **)(iVar2 + 0x4c);
    ___acrt_update_locale_info(iVar2,&local_8);
    puVar3 = (undefined *)*local_8;
  }
  uVar1 = *(ushort *)(puVar3 + (_C & 0xffU) * 2) & 0x107;
LAB_1016c190:
  if ((uVar1 == 0) && ((char)_C != '_')) {
    return 0;
  }
  return 1;
}


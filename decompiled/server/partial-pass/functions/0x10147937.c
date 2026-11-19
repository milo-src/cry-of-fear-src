// rea decompile_all
// name: UnDecorator::getDataType
// address: 0x10147937
// body: available
// range: 0x10147937-0x10147a0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataType(class DName *)
   
   Library: Visual Studio 2019 Release */

DName * __cdecl UnDecorator::getDataType(DName *param_1)

{
  char cVar1;
  DName *this;
  int *piVar2;
  DName *in_stack_00000008;
  DName local_1c [8];
  char *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  DName::DName((DName *)&local_c,in_stack_00000008);
  cVar1 = *DAT_10232958;
  if (cVar1 == '\0') {
    this = (DName *)DName::DName(local_1c,1);
  }
  else {
    if (cVar1 == '?') {
      DAT_10232958 = DAT_10232958 + 1;
      local_14 = (char *)0x0;
      local_10 = 0;
      piVar2 = (int *)getDataIndirectType(local_1c,(IndirectionKind)&local_c,(DName *)0x0,
                                          (int)&local_14);
      local_c = *piVar2;
      local_8 = piVar2[1];
      getPrimaryDataType(param_1);
      return param_1;
    }
    if (cVar1 != 'X') {
      getPrimaryDataType(param_1);
      return param_1;
    }
    DAT_10232958 = DAT_10232958 + 1;
    if (local_c == 0) {
      local_14 = "void";
      local_10 = 4;
      DName::DName(param_1,(StringLiteral *)&local_14);
      return param_1;
    }
    local_14 = "void ";
    local_10 = 5;
    this = (DName *)DName::DName(local_1c,(StringLiteral *)&local_14);
  }
  DName::operator+(this,param_1);
  return param_1;
}


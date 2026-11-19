// rea decompile_all
// name: UnDecorator::getPtrRefDataType
// address: 0x10149279
// body: available
// range: 0x10149279-0x101493e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPtrRefDataType(class DName const &,int)
   
   Library: Visual Studio 2019 Release */

DName * __cdecl UnDecorator::getPtrRefDataType(DName *param_1,int param_2)

{
  char cVar1;
  DName *this;
  int in_stack_0000000c;
  DName local_1c [8];
  char *local_14;
  undefined4 local_10;
  char *local_c;
  undefined4 local_8;
  
  cVar1 = *DAT_10232958;
  if (cVar1 == '\0') {
    operator+((DNameStatus)param_1,(DName *)0x1);
    return param_1;
  }
  if (in_stack_0000000c != 0) {
    if (cVar1 == 'X') {
      DAT_10232958 = DAT_10232958 + 1;
      if (*(int *)param_2 == 0) {
        local_14 = "void";
        local_10 = 4;
        goto LAB_101492b5;
      }
      local_14 = "void ";
      local_10 = 5;
      goto LAB_101492d4;
    }
    if (((cVar1 == '_') && (DAT_10232958[1] == '_')) && (DAT_10232958[2] == 'Z')) {
      DAT_10232958 = DAT_10232958 + 3;
    }
  }
  if (*DAT_10232958 == '$') {
    if ((DAT_10232958[1] == '$') && (DAT_10232958[2] == 'T')) {
      DAT_10232958 = DAT_10232958 + 3;
      if (*(int *)param_2 == 0) {
        local_14 = "std::nullptr_t";
        local_10 = 0xe;
LAB_101492b5:
        DName::DName(param_1,(StringLiteral *)&local_14);
        return param_1;
      }
      local_14 = "std::nullptr_t ";
      local_10 = 0xf;
LAB_101492d4:
      operator+((StringLiteral *)param_1,(DName *)&local_14);
      return param_1;
    }
  }
  else if (*DAT_10232958 == 'Y') {
    DAT_10232958 = DAT_10232958 + 1;
    getArrayType(param_1);
    return param_1;
  }
  getBasicDataType((DName *)&local_c);
  if ((*(uint *)(param_2 + 4) & 0x4000) == 0) {
    local_14 = local_c;
    local_10 = local_8;
    if ((*(uint *)(param_2 + 4) & 0x2000) == 0) goto LAB_101493c6;
    local_14 = "cli::pin_ptr<";
    local_10 = 0xd;
  }
  else {
    local_14 = "cli::array<";
    local_10 = 0xb;
  }
  this = (DName *)DName::DName(local_1c,(StringLiteral *)&local_14);
  DName::operator+(this,(DName *)&local_14);
LAB_101493c6:
  *(char **)param_1 = local_14;
  *(undefined4 *)(param_1 + 4) = local_10;
  return param_1;
}

